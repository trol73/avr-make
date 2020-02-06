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
if compiler_name is None or compiler_name == 'avr':
    compiler = AvrCompiler(prj)
elif compiler_name == 'gcc':
    compiler = GccCompiler(prj)
    compiler.cmd = 'gcc'
elif compiler_name == 'g++':
    compiler = GccCompiler(prj)
    compiler.cmd = 'g++'
else:
    Compiler.error('Unknown compiler: ' + compiler_name)


compiler.init(builder_root)
compiler.run(sys.argv[1:])

