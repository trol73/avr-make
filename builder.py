#!/usr/bin/python
# -*- coding: utf-8 -*-
import os
import sys

import utils
from compilers.avr import AvrCompiler
from compilers.gcc import GccCompiler
from project import Project
from compiler import Compiler

__author__ = 'trol'

MAKE_FILE_NAME = 'make.builder'

builder_root = os.path.dirname(os.path.realpath(__file__))
project_root = os.getcwd()

if not utils.is_windows():
    path = os.environ['PATH']
    if path.find('/usr/local/sbin') < 0:
        path += ':/usr/local/sbin'
    if path.find('/usr/local/bin') < 0:
        path += ':/usr/local/bin'
        os.environ['PATH'] = path

#print "project:", project_root

prj = Project(project_root)

if not os.path.exists(MAKE_FILE_NAME):
    Compiler.error(MAKE_FILE_NAME + ' not found')
prj.load(MAKE_FILE_NAME)

# print prj.get('name')
# print prj.get('frequency')
# print prj.get_sources()
compiler_name = prj.get('compiler')
target_platform = prj.get('platform')

if compiler_name is None or compiler_name == 'avr':
    compiler = AvrCompiler(prj)
elif compiler_name == 'gcc':
    compiler = GccCompiler(prj)
    compiler.cmd = 'gcc'
    compiler.platform = target_platform
elif compiler_name == 'gcc-w64':
    compiler = GccCompiler(prj)
    compiler.cmd = 'x86_64-w64-mingw32-gcc'
    compiler.platform = 'win-x64'
elif compiler_name == 'gcc-i686':
    compiler = GccCompiler(prj)
    compiler.cmd = 'i686-w64-mingw32-gcc'
    compiler.platform = 'win-i686'
elif compiler_name == 'g++':
    compiler = GccCompiler(prj)
    compiler.cmd = 'g++'
elif compiler_name == 'g++-w64':
    compiler = GccCompiler(prj)
    compiler.cmd = 'x86_64-w64-mingw32-g++'
    compiler.platform = 'win-x64'
elif compiler_name == 'g++-i686':
    compiler = GccCompiler(prj)
    compiler.cmd = 'i686-w64-mingw32-g++'
    compiler.platform = 'win-i686'
else:
    Compiler.error('Unknown compiler: ' + compiler_name)
    sys.exit(100)

compiler.init(builder_root)
compiler.run(sys.argv[1:])

