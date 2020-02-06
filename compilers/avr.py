# -*- coding: utf-8 -*-

import os

import utils
from compiler import Compiler

__author__ = 'trol'

CROSSPACK_DEFAULT_LOCATION = '/usr/local/CrossPack-AVR/bin/'


class AvrCompiler(Compiler):
    path_avr_gcc = None
    path_avr_as = None
    path_avr_ld = None
    path_avr_objcopy = None
    path_avr_objdump = None
    path_avr_size = None
    path_avrdude = None
    path_build = None
    path_avra = None
    avrgcc_home = None
    avra_home = None
    compile_step = 1
    art_files = []
    art_to_s_files_map = {}

    compiled_objects_path = []
    is_assembler_single_file_project = None

    def init(self, builder_root):
        if 'AVR_GCC_HOME' in os.environ.keys():
            self.avrgcc_home = os.environ['AVR_GCC_HOME']
            if self.avrgcc_home is not None:
                self.avrgcc_home = self.avrgcc_home.strip()
                if len(self.avrgcc_home) > 1 and self.avrgcc_home[0] == '"' and self.avrgcc_home[-1] == '"':
                    self.avrgcc_home = self.avrgcc_home[1:-1]
                if not os.path.exists(self.avrgcc_home):
                    self.warning('wrong AVR_GCC_HOME value: ' + self.avrgcc_home)
        else:
            self.avrgcc_home = None
        if 'AVRA_HOME' in os.environ.keys():
            self.avra_home = os.environ['AVRA_HOME']
        else:
            self.avra_home = None
        if self.avrgcc_home is not None:
            if len(self.avrgcc_home.strip()) == 0:
                self.avrgcc_home = None
            else:
                if self.avrgcc_home[-1:] != '/' and self.avrgcc_home[-1:] != '\\':
                    self.avrgcc_home += '/'
        if self.avra_home is not None:
            if len(self.avra_home.strip()) == 0:
                self.avra_home = None
            else:
                if self.avra_home[-1:] != '/' and self.avrgcc_home[-1:] != '\\':
                    self.avra_home += '/'

        self.path_avr_gcc = self._find_util('avr-gcc')
        self.path_avr_as = self._find_util('avr-as')
        self.path_avr_ld = self._find_util('avr-ld')
        self.path_avr_objcopy = self._find_util('avr-objcopy')
        self.path_avr_objdump = self._find_util('avr-objdump')
        self.path_avr_size = self._find_util('avr-size')
        self.path_avrdude = self._find_util('avrdude')
        self.path_avra = self._find_util('avra')
        if self.path_avra is None:
            self.path_avra = self._find_util('avrasm32')

        self.path_build = self.project.root_path + '/build'

        self.is_assembler_single_file_project = False

        avrx_cnt = 0
        for s in self.project.get_sources():
            if s.lower().endswith('.avrx'):
                avrx_cnt += 1
            elif s.lower().endswith('.art'):
                self.art_files.append(s)
                name_wo_ext = os.path.splitext(s)[0]
                if name_wo_ext.startswith('src/'):
                    name_wo_ext = name_wo_ext[4:]
                full_out = self.path_build + '/' + name_wo_ext + '.S'
                utils.mkdir_for_file_out(full_out)
                self.art_to_s_files_map[s] = full_out
        if avrx_cnt > 1:
            self.error("only one .avrx file expected but found " + str(avrx_cnt))
        elif avrx_cnt == 1:
            self.is_assembler_single_file_project = True
        elif len(self.project.get_sources()) == 1:
            src_name = next(iter(self.project.get_sources()))
            if src_name.lower().endswith('.asm'):
                self.is_assembler_single_file_project = True
        self.builder_root = builder_root

    def _find_util(self, exe_name):
        # try environment location
        if self.avrgcc_home is not None and utils.is_exe(self.avrgcc_home + exe_name):
            result = self.avrgcc_home + exe_name
            if utils.is_windows():
                result += '.exe'
        # try to find
        else:
            result = utils.which(exe_name)
            # try CrossPack-AVR default location
            if result is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + exe_name):
                result = CROSSPACK_DEFAULT_LOCATION + exe_name

        return self.quote(result)

    def run(self, argv):
        super(AvrCompiler, self).run(argv)

        if self.op_clean:
            self.clean()
        for config in self.configurations:
            self.project.set_current_configuration(config)
            if config is not None:
                print '--[' + config + ']--'
            self.build()
        if self.op_upload:
            self.upload_firmware()

    def build(self):
        # compile files
        self.compiled_objects_path = []
        if len(self.art_files) > 0:
            self.compile_all_art()
            # for s in self.art_to_s_files_map.values():
            #     self.compile_art_s(s)
        Compiler.build(self)

        if self.is_assembler_single_file_project:
            self.compile_step += 1
            Compiler.build(self)
            return
        # link files
        self.link_project(self.project)
        # make hex and eep
        self.make_hex(self.project)
        self.make_eep()
        self.make_lst()
        self.show_size()

    def compile(self, source_file_name, ext):
        if self.compile_step == 1 and ext == 'avrx':
            return
        if self.compile_step == 2 and ext != 'avrx':
            return
        # print 'Compile', source_file_name
        # prepare build directory
        if not os.path.exists(self.path_build):
            os.mkdir(self.path_build)
        if ext == 'c':
            self.compile_c(source_file_name)
        elif ext == 's':
            self.compile_s(source_file_name)
        elif ext == 'spp':
            self.compile_s(source_file_name)
        elif ext == 'asm':
            self.compile_asm(source_file_name)
        elif ext == 'art':
            self.compile_art(source_file_name)
        elif ext == 'avrx':
            self.compile_avrx(source_file_name)

    #        elif ext == 'avrxh':
    #            self.compile_avrxh(source_file_name)

    def compile_c(self, source_file_name):
        if self.path_avr_gcc is None:
            self.error('AVR-GCC not found!')
        full_src = self.project.root_path + '/' + source_file_name
        full_src = os.path.abspath(full_src)
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name

        full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
        full_out = full_out.replace('/..', '')

        utils.mkdir_for_file_out(full_out)

        args = []
        arg_cpu = '-DF_CPU=' + str(self.project.get('frequency')) + ' -mmcu=' + self.project.get('mcu')
        args.append('-x c -c -std=gnu99')
        args.append(
            '-funsigned-char -funsigned-bitfields -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall')
        args.append('-ffreestanding -mcall-prologues')
        if source_file_name.startswith('src/'):
            args.append('-iquote  "' + self.project.root_path + '/src"')

        if self.project.is_debug():
            args.append('-DDEBUG -O1 -g2')
        else:
            args.append('-DNDEBUG -Os -g0')

        user_options = self.project.get('compiler_options')
        cmd = self.string(self.path_avr_gcc, args, arg_cpu, user_options, self.get_defines_args('-D'), full_src,
                          '-o ' + full_out + '.o')

        os.chdir(os.path.dirname(full_src))
        utils.remove_file_if_exist(full_out + '.o')

        self.execute(cmd)

        self.compiled_objects_path.append(full_out + '.o')

    def compile_s(self, source_file_name):
        if self.path_avr_gcc is None:
            self.error('AVR-GCC not found!')
        full_src = self.project.root_path + '/' + source_file_name
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name
        full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
        utils.mkdir_for_file_out(full_out)
        use_asm_ext = self.project.get('asm_ext') is True
        if use_asm_ext:
            ext_out = full_out + '.s'
            processed_out = ext_out[:-2] + '.asmext.s'
            self.avr_asm_ext_single(full_src, processed_out)
            full_src = processed_out

        os.chdir(os.path.dirname(full_src))

        arg_cpu = '-DF_CPU=' + str(self.project.get('frequency')) + ' -mmcu=' + self.project.get('mcu')
        arg_compile = '-Wa,-gdwarf2 -x assembler-with-cpp -c -mrelax'
        arg_include = '-I ' + self.project.root_path + '/src'

        user_options = self.project.get('compiler_options')
        cmd = self.string(self.path_avr_gcc, arg_compile, arg_cpu, arg_include, user_options,
                          self.get_defines_args('-D'),
                          '-o ' + full_out + '.o', full_src)
        utils.remove_file_if_exist(full_out + '.o')
        self.execute(cmd)
        self.compiled_objects_path.append(full_out + '.o')

    def compile_all_art(self):
        # print self.art_files, self.art_to_s_files_map
        rat_path = self.builder_root + '/tools/the-rat.jar'
        files_str = ''
        for art in self.art_files:
            files_str += "'" + art + "' '" + self.art_to_s_files_map[art] + "' "
        defines = ' -DCPU=' + self.project.get('mcu') + ' ' + self.get_defines_args('-D')
        cmd = 'java -jar ' + rat_path + ' -gcc ' + defines + ' ' + files_str
        self.execute(cmd)

    def compile_art_s(self, full_src):
        arg_cpu = '-DF_CPU=' + str(self.project.get('frequency')) + ' -mmcu=' + self.project.get('mcu')
        arg_compile = '-Wa,-gdwarf2 -x assembler-with-cpp -c -mrelax'
        arg_include = '-I ' + self.project.root_path + '/src'

        user_options = self.project.get('compiler_options')
        full_out = full_src[:-1] + 'o'
        cmd = self.string(self.path_avr_gcc, arg_compile, arg_cpu, arg_include, user_options,
                          self.get_defines_args('-D'),
                          '-o ' + full_out, full_src)
        utils.remove_file_if_exist(full_out)
        self.execute(cmd)
        self.compiled_objects_path.append(full_out)

    def avr_asm_ext_single(self, src, out):
        avr_ext_path = self.builder_root + '/tools/avr-asm-ext.jar'
        self.execute('java -jar ' + avr_ext_path + ' ' + src + ' ' + out)

    def avr_asm_ext_group(self, src_path, out_path, files):
        avr_ext_path = self.builder_root + '/tools/avr-asm-ext.jar'
        in_src = False
        files_str = ''
        for f in files:
            if f.find('src/') == 0:
                f = f[4:]
                in_src = True
            files_str += ' ' + f
        if in_src:
            src_path += '/src'
        cmd = 'java -jar ' + avr_ext_path + ' "' + src_path + '" "' + out_path + '"' + files_str
        self.execute(cmd)

    def compile_asm(self, source_file_name):
        if self.path_avra is None:
            self.error('AVRA not found!')
        full_src = self.project.root_path + '/' + source_file_name
        include_path = self.builder_root + '/asm/include'
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name
        full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
        utils.mkdir_for_file_out(full_out)
        use_asm_ext = self.project.get('asm_ext') is True
        if use_asm_ext:
            avr_ext_path = self.builder_root + '/tools/avr-asm-ext.jar'
            ext_out = full_out + '.asm'
            processed_out = ext_out[:-2] + '.asmext.asm'
            self.execute('java -jar ' + avr_ext_path + ' ' + full_src + ' ' + processed_out)
            full_src = processed_out

        cmd = self.string(self.path_avra, '-fI', '-o', self.get_out_filepath('.hex'),
                          # '-l', self.get_out_filepath('.lst'),
                          '-I', include_path, full_src)
        # print cmd
        self.execute(cmd)
        # avra -fI -o out.hex - l out.lst - I / Users / trol / Bin / avr - builder / asm / include / firmware.asm

    def compile_art(self, source_file_name):
        self.compile_art_s(self.art_to_s_files_map[source_file_name])

    def compile_avrx(self, source_file_name):
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name

        full_src = self.project.root_path + '/' + source_file_name
        # full_out = self.path_build + '/' + os.path.splitext(srcn)[0] + '.asm'
        full_out = self.path_build + '/' + srcn
        # print self.project.root_path
        # print self.path_build
        preprocess_list = self.project.get_sources_with_ext('avrxh')
        preprocess_list.append(source_file_name)
        # self.avr_asm_ext_single(full_src, full_out)
        self.avr_asm_ext_group(self.project.root_path, self.path_build, preprocess_list)
        include_path = self.builder_root + '/asm/include'
        cmd = self.string(self.path_avra, '-fI', '-o', self.get_out_filepath('.hex'),
                          self.get_defines_args('-D '),
                          # '-l', self.get_out_filepath('.lst'),
                          '-I', include_path,
                          '-I', self.path_build,
                          '-I', self.project.root_path + '/src',
                          full_out)
        # print cmd
        self.execute(cmd)
        bootloader = self.project.get('bootloader_hex')
        if bootloader is not None:
            os.chdir(self.project.root_path)
            self.inject_bootloader(self.get_out_filepath('.hex'), bootloader)

    def compile_avrxh(self, source_file_name):
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name

        full_src = self.project.root_path + '/' + source_file_name
        full_out = self.path_build + '/' + srcn
        self.avr_asm_ext_single(full_src, full_out)

    # def compile_asm(self, source_file_name):
    #     print utils.parent_path(utils.parent_path(self.path_avr_as))
    #     include_path = utils.parent_path(utils.parent_path(self.path_avr_as)) + '/avr/include'
    #     #include_path = self.builder_root + '/asm/include'
    #     if not os.path.isdir(include_path):
    #         include_path = None
    #     full_src = self.project.root_path + '/' + source_file_name
    #     if source_file_name.startswith('src/'):
    #         srcn = source_file_name[len('src/'):]
    #     else:
    #         srcn = source_file_name
    #     full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
    #     utils.mkdir_for_file_out(full_out)
    #     arg_cpu = '-mmcu=' + self.project.get('mcu')
    #     arg_compile = ''
    #     if not include_path is None:
    #         arg_compile = '-I ' + include_path
    #     user_options = self.project.get('compiler_options')
    #
    #     # compile
    #     cmd = self.string(self.path_avr_as, arg_compile, arg_cpu, user_options, self.get_defines_args(), '-o ' + full_out + '.o', full_src)
    #     os.chdir(os.path.dirname(full_src))
    #     utils.remove_file_if_exist(full_out + '.o')
    #     self.execute(cmd)
    #     if self.is_assembler_single_file_project:
    #         # make elf
    #         cmd = self.string(self.path_avr_ld, '-o', self.get_out_filepath('.elf'), full_out + '.o')
    #         self.execute(cmd)
    #         # make hex
    #         cmd = self.string(self.path_avr_objcopy, '--output-target=ihex', self.get_out_filepath('.elf'), self.get_out_filepath('.hex'))
    #         utils.remove_file_if_exist(self.get_out_filepath('.hex'))
    #         self.execute(cmd)
    #         # make lss
    #         self.make_lst()
    #         # show size
    #         self.show_size()

    def link_project(self, project):
        out_name = self.path_build + '/' + self.project.get_name()
        elf_name = out_name + '.elf'
        map_name = out_name + '.map'
        objects = ''
        for obj in self.compiled_objects_path:
            objects += obj + ' '
        arg_mcu = '-mmcu=' + project.get('mcu')
        user_options = self.project.get('linker_options')

        options = '-Wl,--relax -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections'
        if not utils.is_windows():
            options += ' -Wl,-Map="' + map_name + '"'
        cmd = self.string(self.path_avr_gcc, user_options, ' -o ' + elf_name, objects, options, arg_mcu)
        utils.remove_file_if_exist(elf_name)
        self.execute(cmd)

    def make_hex(self, project):
        if self.path_avr_objcopy is None:
            self.error('AVR-OBJCOPY not found!')
        params = '-O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures'
        cmd = self.string(self.path_avr_objcopy, params, self.get_elf_filepath(), self.get_out_filepath('.hex'))
        # avr-objcopy -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "GccApplication1.elf" "GccApplication1.hex"
        utils.remove_file_if_exist(self.get_out_filepath('.hex'))
        self.execute(cmd)
        bootloader = project.get('bootloader_hex')
        if bootloader is not None:
            os.chdir(project.root_path)
            self.inject_bootloader(self.get_out_filepath('.hex'), bootloader)

    @staticmethod
    def inject_bootloader(firmware, bootloader):
        os.system('pwd')
        with open(bootloader, 'r') as f:
            bootloader_data = f.read()
        firmware_data = ''
        with open(firmware, 'r') as f:
            for s in f:
                if not s.startswith(':00000001FF'):
                    firmware_data += s
                else:
                    firmware_data += bootloader_data
        with open(firmware, "w") as f:
            f.write(firmware_data)
        print 'bootloader injected'

    def make_eep(self):
        if self.path_avr_objcopy is None:
            self.error('AVR-OBJCOPY not found!')
        params = '-O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings'
        cmd = self.string(self.path_avr_objcopy, params, self.get_elf_filepath(), self.get_out_filepath('.eep'))
        utils.remove_file_if_exist(self.get_out_filepath('.eep'))
        self.execute(cmd)

    def make_lst(self):
        if self.path_avr_objdump is None:
            self.error('AVR-OBJDUMP not found!')
        if utils.is_windows():
            args = '-h -S ' + self.get_elf_filepath() + ' > ' + self.get_out_filepath('.lss')
        else:
            args = '-h -S "' + self.get_elf_filepath() + '" > "' + self.get_out_filepath('.lss') + '"'
        cmd = self.string(self.path_avr_objdump, args)
        utils.remove_file_if_exist(self.get_out_filepath('.lss'))
        self.execute(cmd)

    def upload_firmware(self):
        prj = self.project

        if not prj.is_defined('mcu'):
            self.error("'mcu' doesn't defined")
        if not prj.is_defined('programmer'):
            self.error("'programmer' doesn't defined")
        # if prj.is_empty('port'):
        #     self.error("'port' doesn't defined")
        # if prj.is_empty('baudrate'):
        #     self.error("'baudrate' doesn't defined")
        firmware = self.get_out_filepath('.hex')
        if not os.path.exists(firmware):
            self.error('firmware not found - ' + firmware)

        args = ' -p' + str(prj.get('mcu')) + ' -c' + str(prj.get('programmer'))
        if prj.is_defined('port'):
            args += ' -P' + str(prj.get('port'))
        if prj.is_defined('baudrate'):
            args += ' -b' + str(prj.get('baudrate'))
        args += ' -U flash:w:"' + firmware + '":i -D'
        cmd = self.path_avrdude + args
        self.execute(cmd)

    def clean(self):
        utils.remove_file_if_exist(self.get_out_filepath('.lss'))
        utils.remove_file_if_exist(self.get_out_filepath('.map'))
        utils.remove_file_if_exist(self.get_out_filepath('.hex'))
        utils.remove_file_if_exist(self.get_out_filepath('.eep'))
        utils.remove_file_if_exist(self.get_out_filepath('.elf'))
        # .o files
        sources = self.project.get_sources()
        for src in sources:
            ext = os.path.splitext(src)[1][1:]
            full_src = self.project.root_path + '/' + src
            if src.startswith('src/'):
                srcn = src[len('src/'):]
            else:
                srcn = src
            full_out = self.path_build + '/' + os.path.splitext(srcn)[0] + '.o'
            if os.path.exists(full_out):
                os.remove(full_out)
            utils.rmdir_for_file_out(full_out)

    def show_size(self):
        cmd = self.string(self.path_avr_size, '--format=avr --mcu=' + self.project.get('mcu'), self.get_elf_filepath())
        self.execute(cmd)

    def get_out_filepath(self, ext):
        return self.path_build + '/' + self.project.get_name() + ext

    def get_elf_filepath(self):
        return self.get_out_filepath('.elf')

    def get_defines_args(self, key_str):
        # key_str = '-D'
        defs = self.project.get('defines')
        result = ''
        if defs is not None:
            for d in defs:
                result += key_str + d + ' '
        defs_config = self.project.get('define')
        if defs_config is not None:
            for d in defs_config:
                result += key_str + d + ' '
        return result
