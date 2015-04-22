import os
import sys

__author__ = 'trol'


class Compiler:
    project = None
    verbose = False

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
        if self.verbose:
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

# all colors https://www.siafoo.net/snippet/88

