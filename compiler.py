import os

__author__ = 'trol'


class Compiler:
    project = None
    verbose = False

    def __init__(self, project):
        self.project = project

    def init(self):
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
