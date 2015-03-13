#!/usr/bin/python
# -*- coding: utf-8 -*-
import os
from compilers.avr import AvrCompiler
from project import Project

__author__ = 'trol'

MAKE_FILE_NAME = 'prj.py'

os.chdir('test_project')
project_root = os.getcwd()

print "project:", project_root

prj = Project(project_root)

prj.load(MAKE_FILE_NAME)

print prj.get('name')
print prj.get('frequency')
print prj.get_sources()

compiler = AvrCompiler(prj)
compiler.init()
compiler.build()

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
