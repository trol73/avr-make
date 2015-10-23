import os
from compiler import Compiler
import utils

__author__ = 'trol'

CROSSPACK_DEFAULT_LOCATION = '/usr/local/CrossPack-AVR/bin/'


class AvrCompiler(Compiler):
    path_avr_gcc = None
    path_avr_objcopy = None
    path_avr_objdump = None
    path_avr_size = None
    path_avrdude = None
    path_build = None

    compiled_objects_path = []

    def init(self):
        # find avr-gcc
        self.path_avr_gcc = utils.which('avr-gcc')
        # try CrossPack-AVR default location
        if self.path_avr_gcc is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + 'avr-gcc'):
            self.path_avr_gcc = CROSSPACK_DEFAULT_LOCATION + 'avr-gcc'

        # find avr-objcopy
        self.path_avr_objcopy = utils.which('avr-objcopy')
        # try CrossPack-AVR default location
        if self.path_avr_objcopy is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + 'avr-objcopy'):
            self.path_avr_objcopy = CROSSPACK_DEFAULT_LOCATION + 'avr-objcopy'

        # find avr-objdump
        self.path_avr_objdump = utils.which('avr-objdump')
        # try CrossPack-AVR default location
        if self.path_avr_objdump is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + 'avr-objdump'):
            self.path_avr_objdump = CROSSPACK_DEFAULT_LOCATION + 'avr-objdump'

        # find avr-size
        self.path_avr_size = utils.which('avr-size')
        # try CrossPack-AVR default location
        if self.path_avr_size is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + 'avr-size'):
            self.path_avr_size = CROSSPACK_DEFAULT_LOCATION + 'avr-size'

        # find avrdude
        self.path_avrdude = utils.which('avrdude')
        if self.path_avrdude is None and utils.is_exe(CROSSPACK_DEFAULT_LOCATION + 'avrdude'):
            self.path_avrdude = CROSSPACK_DEFAULT_LOCATION + 'avrdude'

        self.path_build = self.project.root_path + '/build'

    def run(self, argv):
        print 'args = ', argv
        op_build = False
        op_upload = False
        op_clean = False
        debug_build = None
        if 'build' in argv:
            op_build = True
        if 'clean' in argv:
            op_clean = True
        if 'release' in argv:
            if debug_build:
                self.error("wrong params - 'debug' and 'release' defined simultaneously")
            op_build = True
            debug_build = False
        if 'debug' in argv:
            if not debug_build:
                self.error("wrong params - 'debug' and 'release' defined simultaneously")
            op_build = True
            debug_build = True
        if 'upload' in argv:
            op_upload = True
        if len(argv) == 0:
            op_build = True
        if op_clean:
            self.clean()
        if op_build:
            self.build()
        if op_upload:
            self.upload_firmware()

    def build(self):
        # compile files
        self.compiled_objects_path = []
        Compiler.build(self)
        # link files
        self.link_project(self.project)
        # make hex and eep
        self.make_hex()
        self.make_eep()
        self.make_lst()
        self.show_size()

    def compile(self, source_file_name, ext):
        # prepare build directory
        if not os.path.exists(self.path_build):
            os.mkdir(self.path_build)
        if ext == 'c':
            self.compile_c(source_file_name)
        if ext == 's':
            self.compile_s(source_file_name)            

    def compile_c(self, source_file_name):
        full_src = self.project.root_path + '/' + source_file_name
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name
        full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
        utils.mkdir_for_file_out(full_out)

        args = []
        arg_cpu = '-DF_CPU=' + str(self.project.get('frequency')) + ' -mmcu=' + self.project.get('mcu')
        args.append('-x c -c -std=gnu99')
        args.append('-funsigned-char -funsigned-bitfields -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall')
        args.append('-ffreestanding -mcall-prologues')

        if self.project.is_debug():
            args.append('-DDEBUG -O1 -g2')
        else:
            args.append('-DNDEBUG -Os -g0')

        user_options = self.project.get('compiler_options')
        cmd = self.string(self.path_avr_gcc, args, arg_cpu, user_options, self.get_defines_args(), full_src, '-o ' + full_out + '.o')

        os.chdir(os.path.dirname(full_src))
        utils.remove_file_if_exist(full_out + '.o')
        self.execute(cmd)
        self.compiled_objects_path.append(full_out + '.o')

    def compile_s(self, source_file_name):
        full_src = self.project.root_path + '/' + source_file_name
        if source_file_name.startswith('src/'):
            srcn = source_file_name[len('src/'):]
        else:
            srcn = source_file_name
        full_out = self.path_build + '/' + os.path.splitext(srcn)[0]
        utils.mkdir_for_file_out(full_out)

        arg_cpu = '-DF_CPU=' + str(self.project.get('frequency')) + ' -mmcu=' + self.project.get('mcu')
        arg_compile = '-Wa,-gdwarf2 -x assembler-with-cpp -c -mrelax'

        user_options = self.project.get('compiler_options')
        cmd = self.string(self.path_avr_gcc, arg_compile, arg_cpu, user_options, self.get_defines_args(), '-o ' + full_out + '.o', full_src)
        os.chdir(os.path.dirname(full_src))
        utils.remove_file_if_exist(full_out + '.o')
        self.execute(cmd)
        self.compiled_objects_path.append(full_out + '.o')
        
    def link_project(self, project):
        out_name = self.path_build + '/' + self.project.get_name()
        elf_name = out_name + '.elf'
        map_name = out_name + '.map'
        objects = ''
        for obj in self.compiled_objects_path:
            objects += obj + ' '
        arg_mcu = '-mmcu=' + project.get('mcu')
        user_options = self.project.get('linker_options')
        options = '-Wl,--relax -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Wl,-Map="' + map_name + '" '
        cmd = self.string(self.path_avr_gcc, user_options, ' -o ' + elf_name, objects, options, arg_mcu)
        utils.remove_file_if_exist(elf_name)
        self.execute(cmd)

    def make_hex(self):
        params = '-O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures'
        cmd = self.string(self.path_avr_objcopy, params, self.get_elf_filepath(), self.get_out_filepath('.hex'))
        #avr-objcopy -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "GccApplication1.elf" "GccApplication1.hex"
        utils.remove_file_if_exist(self.get_out_filepath('.hex'))
        self.execute(cmd)

    def make_eep(self):
        params = '-O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings'
        cmd = self.string(self.path_avr_objcopy, params, self.get_elf_filepath(), self.get_out_filepath('.eep'))
        utils.remove_file_if_exist(self.get_out_filepath('.eep'))
        self.execute(cmd)

    def make_lst(self):
        cmd = self.string(self.path_avr_objdump, '-h -S "' + self.get_elf_filepath() + '" > "' + self.get_out_filepath('.lss') + '"')
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
        cmd = self.path_avr_size + ' --format=avr --mcu=' + self.project.get('mcu') + ' ' + self.get_elf_filepath()
        self.execute(cmd)

    def get_out_filepath(self, ext):
        return self.path_build + '/' + self.project.get_name() + ext

    def get_elf_filepath(self):
        return self.get_out_filepath('.elf')

    def get_defines_args(self):
        defs = self.project.get('defines')
        if defs is None:
            return ''
        result = ''
        for d in defs:
            result += '-D' + d + ' '
        return result

