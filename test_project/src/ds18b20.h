#ifndef _DS18B20_H_
#define _DS18B20_H_

#include <inttypes.h>



/**
 * Возвращаемые значения
 */
#define DS18X20_OK					0x00
#define DS18X20_ERROR				0x01
#define DS18X20_START_FAIL			0x02
#define DS18X20_ERROR_CRC			0x03

#define DS18X20_POWER_PARASITE	0x00
#define DS18X20_POWER_EXTERN		0x01

/** 
 * Коды семейств DS18X2 
 */

#define DS18X20_CONVERT_T				0x44
#define DS18X20_READ						0xBE
#define DS18X20_WRITE					0x4E
#define DS18X20_EE_WRITE				0x48
#define DS18X20_EE_RECALL				0xB8
#define DS18X20_READ_POWER_SUPPLY 	0xB4

#define DS18B20_CONF_REG				4
#define DS18B20_9_BIT					0
#define DS18B20_10_BIT					(1<<5)
#define DS18B20_11_BIT					(1<<6)
#define DS18B20_12_BIT					((1<<6) | (1<<5))

// indefined bits in LSB if 18B20 != 12bit
#define DS18B20_9_BIT_UNDF				((1<<0)|(1<<1)|(1<<2))
#define DS18B20_10_BIT_UNDF			((1<<0)|(1<<1))
#define DS18B20_11_BIT_UNDF			((1<<0))
#define DS18B20_12_BIT_UNDF			0

// время преобразования в мсек
#define DS18B20_TCONV_12BIT			750
#define DS18B20_TCONV_11BIT			DS18B20_TCONV_12_BIT/2
#define DS18B20_TCONV_10BIT			DS18B20_TCONV_12_BIT/4
#define DS18B20_TCONV_9BIT				DS18B20_TCONV_12_BIT/8

// constant to convert the fraction bits to cel*(10^-4)
#define DS18X20_FRACCONV				625

#define DS18X20_SP_SIZE  				9

// DS18X20 EEPROM-Support
#define DS18X20_WRITE_SCRATCHPAD		0x4E
#define DS18X20_COPY_SCRATCHPAD		0x48
#define DS18X20_RECALL_E2				0xB8
#define DS18X20_COPYSP_DELAY			10  // ms
#define DS18X20_TH_REG					2
#define DS18X20_TL_REG					3




/**
 * Запуск измерения (CONVERT_T) для всех сенсоров, паразитное питание 
 */
extern uint8_t DS18B20_start_single_meas_parasite();

/** 
 * Читает температуру от одного датчика
 * Например, если subzero = 1, cel = 18, millicel = 5000, то t = -18.5000°C
 *
 * Возвращает:
 * 	subzero == 1 если температура отрицательна
 *		cel - целая часть 
 *		cel_frac_bits - миллиградусы * 0.1
 */
//extern uint8_t DS18B20_read_meas_single(uint8_t *subzero, uint8_t *cel, uint8_t *cel_frac_bits);

/** 
 * Читает температуру от одного датчика. Температура должна быть положительна.
 *
 * Возвращает:
 * 	значение температуры в миллиградусах * 100
 *    в случае ошибки возвращает 0 
 */
extern uint16_t DS18B20_read_meas_single();




#endif // _DS18B20_H_
