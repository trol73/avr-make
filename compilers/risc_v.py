# -*- coding: utf-8 -*-
import sys
import os
import shutil
import platform

from compiler import Compiler
import utils

__author__ = 'trol'


class RiscVCompiler(Compiler):

    def __init__(self, project):
        super().__init__(project)
        self.sdk_path = self.config.get('risc_v.sdk')
        if self.sdk_path is None:
            Compiler.error("Property 'risc_v.sdk' doesn't defined in avr-builder.conf")
            sys.exit(100)
        sdk_path = self.sdk_path + 'bin'

        self.path_gcc = utils.find_first_executable_by_suffix(sdk_path,'-gcc')
        if self.path_gcc is None:
            self.error('Risc-V GCC not found!')

        self.path_objcopy = utils.find_first_executable_by_suffix(sdk_path,'-objcopy')
        if self.path_objcopy is None:
            self.error('Risc-V objcopy not found!')

        self.path_objdump = utils.find_first_executable_by_suffix(sdk_path,'-objdump')
        if self.path_objdump is None:
            self.error('Risc-V objdump not found!')

        self.path_size = utils.find_first_executable_by_suffix(sdk_path,'-size')
        if self.path_size is None:
            self.error('Risc-V size not found!')

        self.path_build = self.project.root_path + '/build'
        self.arg_include = ''
        if self.includes is not None:
            for p in self.includes:
                self.arg_include += ' -I ' + p

        # self.configurations = set([])

    def init(self, builder_root):
        Compiler.init(self, builder_root)
        if not os.path.exists(self.path_build):
            os.mkdir(self.path_build)


    def run(self, argv):
        super(RiscVCompiler, self).run(argv)
        # for config in self.configurations:
        #     self.project.set_current_configuration(config)
        #     if config is not None:
        #         print('--[' + config + ']--')
        #     self.build()

        # print('run', argv)
        # for s in self.project.get_sources():
        #     print(s)

    # def build(self):
    #     Compiler.build(self)
    def build(self):
        os.chdir(self.project.root_path)
        sources = self.project.get_sources()
        src_c = []
        src_s = []
        for src in sources:
            if src.endswith('.S'):
                src_s.append(src)
            elif src.endswith('.c'):
                src_c.append(src)

        if len(src_s) > 0:
            for s in src_s:
                src_c.append(self.compile_s(s))

        name = self.project.get_name()
        user_options = self.project.get('compiler_options')
        arg_link = ''
        if os.path.exists(self.project.root_path + '/link.ld'):
            arg_link = self.project.root_path + '/link.ld'
        elif os.path.exists(self.project.root_path + '/src/link.ld'):
            arg_link = self.project.root_path + '/src/link.ld'
        if arg_link != '':
            arg_link = '-T "' + os.path.abspath(arg_link) + '"'
        arg_map = '-Wl,-Map,"' + self.path_build + '/' + name + '.map"'

        arg_link += ' -nostartfiles -Xlinker --gc-sections'

        arg_specs = ' --specs=nano.specs --specs=nosys.specs'

        elf_path = self.path_build + '/' + name + '.elf'
        hex_path = self.path_build + '/' + name + '.hex'
        lst_path = self.path_build + '/' + name + '.lst'
        elf_quoted = '"' + elf_path + '"'
        hex_quoted = '"' + hex_path + '"'
        lst_quoted = '"' + lst_path + '"'

        cmd = self.string(self.path_gcc, self.get_device_args(), self.get_global_args(), user_options,
                          self.get_defines_args('-D'), self.arg_include,
                          arg_link,
                          arg_map,
                          arg_specs,
                          '-o ' + elf_path,
                          src_c)
        # print(cmd)
        self.execute(cmd)


        cmd = self.string(self.path_objcopy, '-O ihex', elf_quoted, hex_quoted)
        self.execute(cmd)

        cmd = self.string(self.path_objdump, '--all-headers --demangle --disassemble -M xw', elf_quoted + '>' + lst_quoted )
        self.execute(cmd)

        cmd = self.string(self.path_size, '--format=berkeley', elf_quoted)
        self.execute(cmd)


    def compile_s(self, src):
        if src.startswith('src/'):
            srcn = src[len('src/'):]
        else:
            srcn = src
        obj_path = (self.path_build + '/' + srcn[:-2] + '.o')
        user_options = self.project.get('compiler_options')
        cmd = self.string(self.path_gcc, self.get_device_args(), self.get_global_args(), user_options,
                          '-c',
                          '-o', obj_path,
                          src
        )
        self.execute(cmd)
        return obj_path

    """
'''
riscv-none-embed-gcc -march=rv32ecxw -mabi=ilp32e -msmall-data-limit=0 -msave-restore -fmax-errors=20 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized -g -T "/Users/trol/mounriver-studio-projects/CH32V003F4U/Ld/Link.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,"CH32V003F4U.map" --specs=nano.specs --specs=nosys.specs -o "CH32V003F4U.elf" $(OBJS) $(LIBS) -lprintf
'''    
    riscv-none-embed-gcc -x assembler-with-cpp -I"/Users/trol/mounriver-studio-projects/CH32V003F4U/Startup" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
    
    CH32V003F4U.lst: CH32V003F4U.elf
    	@	riscv-none-embed-objdump "CH32V003F4U.elf" > "CH32V003F4U.lst"
    CH32V003F4U.siz: CH32V003F4U.elf
    	riscv-none-embed-size --format=berkeley "CH32V003F4U.elf"

    """

    @staticmethod
    def get_global_args():
        return ('-ffunction-sections -fdata-sections -fno-common -Os -msave-restore -msmall-data-limit=0 ' +
                '-fmessage-length=0 -fsigned-char -fmax-errors=20 -Wunused -Wuninitialized')

    def get_device_args(self):
        mcu = self.project.get('mcu').upper()
        if mcu == 'CH32V003':
            return '-march=rv32ecxw -mabi=ilp32e'
        else:
            self.error('Unsupported MCU: ' + mcu)
            return None


# /Applications/MounRiver Studio 2.app/Contents/Resources/app/resources/darwin/components/WCH/SDK/default/RISC-V/NONEOS/CH32M030-targetProcessor.json