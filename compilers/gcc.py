# -*- coding: utf-8 -*-
import sys
import os
import shutil
import platform

from compiler import Compiler
import utils

__author__ = 'trol'


class GccCompiler(Compiler):
    files_to_compile = []
    cmd = None
    platform = None
    modules_root = None
    installed_modules_params = {}

    def init(self, builder_root):
        pass

    def run(self, argv):
        super(GccCompiler, self).run(argv)

        if self.op_clean:
            self.clean()
        for config in self.configurations:
            self.project.set_current_configuration(config)
            if config is not None:
                print('--[' + config + ']--')
            self.build()
        if self.op_run:
            self.execute('./' + self.executable_file_name())

    def build(self):
        if self.platform is None:
            self.platform = self.determine_platform()
        Compiler.build(self)
        modules_param = self.prepare_modules()
        # s = 'gcc -o ' + self.executable_file_name()
        s = self.cmd + ' -o ' + self.executable_file_name()
        for name in self.files_to_compile:
            s += ' ' + name
        includes = self.project.get('include')
        if includes is not None:
            for p in includes:
                s += ' -I ' + p

        s += ' ' + self.get_options_args() + self.get_defines_args()
        s += ' ' + modules_param
        libs = self.project.get('libs')
        if libs is None or len(libs.strip()) == 0:
            s += '' #' $(pkg-config --cflags)'
        else:
            s += ' $(pkg-config --cflags --libs ' + libs + ')'
        s += ' -iquote  "' + self.project.root_path + '/src"'
        # print(s)
        self.execute(s)

    def compile(self, source_file_name, ext):
        if ext == 'c' or ext == 'cpp' or ext == 'cc':
            self.files_to_compile.append(source_file_name)

    def executable_file_name(self):
        return self.project.get_name()

    def clean(self):
        print(self.executable_file_name())
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

    def prepare_modules(self):
        modules = self.project.get('modules')
        if modules is None:
            return ''
        if self.platform is None:
            self.error("Unknown platform, can\'t use modules")
        self.modules_root = utils.get_config().get('modules.path')
        if self.modules_root is None:
            Compiler.error("Property 'modules.path' doesn't defined in avr-builder.conf")
            sys.exit(100)

        for module in modules:
            self.prepare_module(module)

        project_modules_path = os.path.join(self.project.root_path, 'modules', self.platform)
        include_path = os.path.join(project_modules_path, 'include')
        lib_path = os.path.join(project_modules_path, 'lib')
        params = '-I' + include_path + ' -L' + lib_path
        for p in self.installed_modules_params.values():
            if p is not None:
                params += ' ' + p
        return params

    def prepare_module(self, module):
        if module in self.installed_modules_params.keys():
            return
        repo_path = os.path.join(self.modules_root, module, self.platform)
        prj_root = self.project.root_path
        project_modules_path = os.path.join(prj_root, 'modules', self.platform)
        out_libs = os.path.join(project_modules_path, 'lib')
        out_headers = os.path.join(project_modules_path, 'include')
        out_src = os.path.join(prj_root, 'modules', 'src')
        module_file = os.path.join(repo_path, module + '.module')
        params = utils.parse_config(module_file)
        headers = utils.parse_list_param(params, 'headers')
        sources = utils.parse_list_param(params, 'sources')
        libs = utils.parse_list_param(params, 'libs')
        self.installed_modules_params[module] = params.get('compiler_options')
        # print(self.project.root_path)
        for header in headers:
            self.prepare_module_file(header, out_headers, repo_path)
        for lib in libs:
            self.prepare_module_file(lib, out_libs, repo_path)
        for source in sources:
            self.prepare_module_file(source, out_src, os.path.join(self.modules_root, module))
        # print(repo_path, headers, libs, params)
        depends = utils.parse_list_param(params, 'depends')
        for dep in depends:
            self.prepare_module(dep)

    def prepare_module_file(self, file, dest, repo_path):
        out_path = os.path.join(dest, file)
        if os.path.exists(out_path):
            return
        utils.mkdir_for_file_out(out_path)
        src_path = os.path.join(repo_path, file)
        if os.path.exists(src_path):
            shutil.copyfile(src_path, out_path)
        elif repo_path.endswith(self.platform):
            parent = utils.parent_path(repo_path)
            src_path = os.path.join(parent, file)
            if os.path.exists(src_path):
                shutil.copyfile(src_path, out_path)
            else:
                Compiler.error('Module resource not found: ' + file + ' in ' + repo_path)
                # print('!!!!', file, out_path, repo_path)

        # print("FILE", file, dest)

    @staticmethod
    def determine_platform():
        p = platform.platform().lower()
        if utils.is_windows():
            osn = 'win'
        elif p.find('macos') >= 0:
            osn = 'macos'
        elif p.find('linux') >= 0:
            osn = 'linux'
        else:
            osn = ''
        print(osn + '-' + platform.machine())
        return osn + '-' + platform.machine()

