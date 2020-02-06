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
        super(GccCompiler, self).run(argv)

        if self.op_clean:
            self.clean()
        for config in self.configurations:
            self.project.set_current_configuration(config)
            if config is not None:
                print '--[' + config + ']--'
            self.build()
        if self.op_run:
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
        
        s += ' ' + self.get_options_args() + self.get_defines_args()
        libs = self.project.get('libs')
        if libs is None or len(libs.strip()) == 0:
            s += ' $(pkg-config --cflags)'
        else:
            s += ' $(pkg-config --cflags --libs ' + libs + ')'
        s += ' -iquote  "' + self.project.root_path + '/src"'
        #print s
        self.execute(s)

    def compile(self, source_file_name, ext):
        if ext == 'c' or ext == 'cpp' or ext == 'cc':
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

    def get_options_args(self):
        options = self.project.get('compiler_options')
        if options is None:
            return ''
        result = ''
        for o in options:
            result += o + ' '
        return result
