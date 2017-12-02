# -*- coding: utf-8 -*-

from compiler import Compiler
import utils

__author__ = 'trol'


class GccCompiler(Compiler):
    files_to_compile = []
    cmd = None

    def init(self, builder_root):
        pass

    def run(self, argv):
        op_clean = False
        op_run = False

        for arg in argv:
            if arg == 'clean':
                op_clean = True
            if arg == 'run':
                op_run = True
            elif arg == 'all':
                for conf in self.project.get_configurations():
                    self.configurations.add(conf)
            else:
                self.configurations.add(arg)
        if len(self.configurations) == 0:
            self.configurations.add(None)

        if op_clean:
            self.clean()
        for config in self.configurations:
            self.project.current_configuration = config
            if config is not None:
                print '--[' + config + ']--'
            self.build()
        if op_run:
            self.execute('./' + self.executable_file_name())

    def build(self):
        Compiler.build(self)
        #s = 'gcc -o ' + self.executable_file_name()
        s = self.cmd + ' -o ' + self.executable_file_name()
        for name in self.files_to_compile:
            s += ' ' + name
        includes = self.project.get('include')
        if includes is not None:
            for p in includes:
                s += ' -I ' + p
        s += ' ' + self.get_defines_args()
        libs = self.project.get('libs')
        if libs is None or len(libs.strip()) == 0:
            s += ' $(pkg-config --cflags)'
        else:
            s += ' $(pkg-config --cflags --libs ' + libs + ')'
        s += ' -iquote  "' + self.project.root_path + '/src"'

        self.execute(s)

    def compile(self, source_file_name, ext):
        if ext == 'c' or ext == 'cpp':
            self.files_to_compile.append(source_file_name)

    def executable_file_name(self):
        return self.project.get_name()

    def clean(self):
        print self.executable_file_name()
        utils.remove_file_if_exist(self.executable_file_name())

    def get_defines_args(self):
        defs = self.project.get('defines')
        if defs is None:
            return ''
        result = ''
        for d in defs:
            result += '-D' + d + ' '
        return result
