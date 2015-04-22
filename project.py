import os

__author__ = 'trol'

import glob

class Project:

    root_path = None
    _glob = {}
    _loc = {}
    _full_sources_list = set([])

    def __init__(self, root_path):
        self.root_path = root_path

    def load(self, file_name):
        # load project file
        execfile(self.root_path + '/' + file_name, self._glob, self._loc)

        # build sources list
        src = self._loc['src']
        for pattern in src:
            for f in glob.glob(self.root_path + '/' + pattern):
                if not os.path.isdir(f):
                    relative = f
                    if relative.startswith(self.root_path):
                        relative = relative[len(self.root_path)+1:]
                    self._full_sources_list.add(relative)

    def get(self, name):
        return self._loc[name]

    def is_defined(self, name):
        print self._loc
        if name in self._loc.keys():
            return len(str(self.get(name))) > 0
        return False

    def get_sources(self):
        return self._full_sources_list

    def get_sources_with_ext(self, ext):
        result = []
        for f in self._full_sources_list:
            file_ext = os.path.splitext(f)[1]
            if file_ext.startswith('.'):
                file_ext = file_ext[1:]
            if file_ext == ext:
                result.append(f)
        return result

    def get_name(self):
        """
        Get project name
        :return:
        """
        return self.get('name')

    def is_debug(self):
        return self.get('debug')