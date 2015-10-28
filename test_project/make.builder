
name = 'lcd_test'

src = ['src/*.c', 'src/lib/*.c']

mcu = 'atmega8'

frequency = 16*1000000

port = ''

baudrate = 1200

programmer = 'arduino'

defines = []

compiler_options = ['-Os']

linker_options = ['-Wl,--relax']



configurations = {
	"debug": {
		"name": "lcd_test_debug",
		"defines": ['DEBUG_MACRO']
	},
	"release": {
		"name": "lcd_test_release",
		"defines": ['RELEASE_MACRO']
	}
   
}