import os

__author__ = 'trol'


class Compiler:
    project = None

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
