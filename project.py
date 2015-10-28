# -*- coding: utf-8 -*-
import os
import glob

__author__ = 'trol'


class Project:
    def __init__(self, root_path):
        self.root_path = None
        self._glob = {}
        self._loc = {}
        self._full_sources_list = set([])

        self.root_path = root_path
        self.current_configuration = None

    def load(self, file_name):
        # load project file
        execfile(self.root_path + '/' + file_name, self._glob, self._loc)

        # build sources list
        src = self._loc['src']
        for pattern in src:
            self._load_dir(self.root_path + '/' + pattern)

    def _load_dir(self, directory):
        for f in glob.glob(directory):
            if not os.path.isdir(f):
                relative = f
                if relative.startswith(self.root_path):
                    relative = relative[len(self.root_path) + 1:]
                self._full_sources_list.add(relative)

    def get(self, name):
        result = None
        if self.current_configuration is not None and 'configurations' in self._loc.keys():
            configurations = self._loc['configurations']
            if self.current_configuration in configurations.keys():
                config = configurations[self.current_configuration]
                if name in config.keys():
                    result = config[name]
        if result is not None and type(result) is not list:
            return result

        if name in self._loc.keys():
            general_result = self._loc[name]
            if general_result is not None and result is not None:
                if type(result) != type(general_result):
                    print 'wrong parameter', name, 'for configuration', self.current_configuration
                    quit(-2)

                if type(result) is list:
                    merged_list = []
                    for a in result:
                        merged_list.append(a)
                    for a in general_result:
                        merged_list.append(a)
                    return merged_list
            return general_result
        else:
            return None

    def is_defined(self, name):
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
        result = self.get('debug')
        if result is None:
            return False
        return result

    def get_configurations(self):
        if not self.is_defined('configurations'):
            return []
        return self.get('configurations').keys()
