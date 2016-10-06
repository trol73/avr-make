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

compiler.init(builder_root)
compiler.run(sys.argv[1:])

# avr-gcc -Wall -Os -DF_CPU=16000000 -mmcu=atmega328p -c main.c -o main.o
# main.c:18:6: warning: return type of 'main' is not 'int' [-Wmain]
#  void main() {
#       ^
# avr-gcc -Wall -Os -DF_CPU=16000000 -mmcu=atmega328p -o main.elf main.o
# rm -f main.hex
# avr-objcopy -j .text -j .data -O ihex main.elf main.hex
# avr-size --format=avr --mcu=atmega328p main.elf
# AVR Memory Usage
# ----------------
# Device: atmega328p
#
# Program:     186 bytes (0.6% Full)
# (.text + .data + .bootloader)
#
# Data:          0 bytes (0
