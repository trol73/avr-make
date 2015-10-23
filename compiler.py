import os
import sys

__author__ = 'trol'


class Compiler:
    project = None
    verbose_mode = False

    def __init__(self, project):
        self.project = project

    def init(self):
        pass

    def run(self, argv):
        pass

    def build(self):
        sources = self.project.get_sources()
        for src in sources:
            ext = os.path.splitext(src)[1][1:]
            self.compile(src, ext)

    def compile(self, source_file_name, ext):
        pass

    def execute(self, cmd):
        if self.verbose_mode:
            print cmd
        rc = os.system(cmd)
        if rc != 0:
            quit(-1)

    @staticmethod
    def error(msg):
        if sys.stdout.isatty():
            print '\033[1;31m' + 'error: ' + str(msg) + '\033[1;m'
        else:
            print 'ERROR: ' + str(msg)
        quit(-1)

    @staticmethod
    def verbose(msg):
        if sys.stdout.isatty():
            print '\033[1;30m' + str(msg) + '\033[1;m'
        else:
            print msg

    @staticmethod
    def string(*args):
        if len(args) == 0:
            return ''
        result = ''
        for arg in args:
            if arg is None or len(arg) == 0:
                continue
            if type(arg) is list:
                arg = Compiler._string_from_list(arg)
            if len(result) > 0 and result[-1:] != ' ' and arg[0:1] != ' ':
                result += ' '
            result += arg
        return result

    @staticmethod
    def _string_from_list(args):
        if len(args) == 0:
            return ''
        result = ''
        for arg in args:
            if arg is None or len(arg) == 0:
                continue
            if type(arg) is list:
                arg = Compiler._string_from_list(arg)
            if len(result) > 0 and result[-1:] != ' ' and arg[0:1] != ' ':
                result += ' '
            result += arg
        return result

# all colors https://www.siafoo.net/snippet/88

