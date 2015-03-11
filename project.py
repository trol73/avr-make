__author__ = 'trol'


class Project:

    root_path = None
    _glob = {}
    _loc = {}

    def __init__(self, root_path):
        self.root_path = root_path


    def load(self, file_name):
        execfile(self.root_path + '/' + file_name, self._glob, self._loc)
        print self._loc

    def get(self, name):
        return self._loc[name]

    def get_sources(self, ext):
        directories = self._loc['src']
        print 'd = ', directories
        result = self._loc['src']
        return result
