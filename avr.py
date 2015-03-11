__author__ = 'trol'

avr_gcc_root = '/usr/local/CrossPack-AVR/bin/'

path_avr_gcc = avr_gcc_root + 'avr-gcc'
path_avr_objcopy = avr_gcc_root + 'avr-objcopy'
path_avr_size = avr_gcc_root + 'avr-size'
path_avr_dude = avr_gcc_root + 'avrdude'



def compile(filename, ext, project):
    if ext == 'c':
        return path_avr_gcc + '-Wall -Os -DF_CPU=' + project.get('frequency') +' -mmcu=' + project.get('mcu') + ' -c ' + filename + ' -o ' + filename + '.o'