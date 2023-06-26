# -*- coding: utf-8 -*-

__author__ = 'trol'

import os
import platform


def is_exe(fpath):
    """
    Check if file is executable

    :param fpath: tested file path
    :return: true if file exist and executable
    """
    if os.path.isfile(fpath) and os.access(fpath, os.X_OK):
        return True
    return is_windows() and (os.path.exists(fpath) or os.path.exists(fpath + '.exe'))


def _which(program):
    fpath, fname = os.path.split(program)
    if fpath:
        if is_exe(program):
            return program
    else:
        for path in os.environ["PATH"].split(os.pathsep):
            path = path.strip('"')
            exe_file = os.path.join(path, program)
            if is_exe(exe_file):
                return exe_file
    return None


def which(program):
    """
    :param program: OS command
    :return: full file path or None
    """
    result = _which(program)
    if result is not None:
        return result
    if _which('where') is not None:
        where_result = os.popen('where ' + program).read().split('\n')
    else:
        where_result = os.popen('whereis ' + program).read().split('\n')
    for s in where_result:
        st = s.strip()
        if len(st) == 0:
            continue
        return st
    return None


def mkdir_for_file_out(filename):
    if not os.path.exists(os.path.dirname(filename)):
        os.makedirs(os.path.dirname(filename))


def rmdir_for_file_out(filename):
    parent = os.path.dirname(filename)
    if os.path.exists(parent) and len(os.listdir(parent)) == 0:
        os.rmdir(parent)
        rmdir_for_file_out(parent)
        return True
    return False


def remove_file_if_exist(filename):
    if os.path.exists(filename):
        os.remove(filename)


def is_windows():
    return any(platform.win32_ver())


def parent_path(s):
    return os.path.split(os.path.abspath(s))[0]


def parse_config(filepath):
    res = {}
    if not os.path.exists(filepath):
        return res
    with open(filepath) as file:
        for line in file:
            i = line.index('=')
            if i < 0:
                continue
            name = line[:i].strip()
            value = line[i+1:].strip()
            if value.startswith("'") and value.endswith("'"):
                value = value[1:-1]
            res[name] = value
    return res


def parse_list_param(config, param):
    v = config.get(param)
    if v is None:
        return []
    res = []
    for s in v.split(','):
        res.append(s.strip())
    return res


def get_config():
    loc = parent_path(__file__)
    filepath = os.path.join(loc, 'avr-builder.conf')
    return parse_config(filepath)
