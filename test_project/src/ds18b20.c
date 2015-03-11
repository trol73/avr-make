#include "ds18b20.h"

#include "1wire.h"
#include "crc8.h"


/**
 * Запуск измерения (CONVERT_T) для всех сенсоров, паразитное питание 
 */
uint8_t DS18B20_start_single_meas_parasite() {
	ow_reset();
	if( ow_input_pin_state() ) { // шина должна быть готова к приему
		ow_command_all(DS18X20_CONVERT_T);
		ow_parasite_enable();
		return DS18X20_OK;
	} else { // короткое замыкание линии		
		return DS18X20_START_FAIL;
	}
}


/** 
 * Читает температуру от одного датчика
 * Например, если subzero = 1, cel = 18, millicel = 50, то t = -18.50°C
 *
 * Возвращает:
 * 	subzero == 1 если температура отрицательна
 *		cel - целая часть 
 *		cel_frac_bits - миллиградусы * 0.1
 */
/*
uint8_t DS18B20_read_meas_single(uint8_t *subzero, uint8_t *cel, uint8_t *cel_frac_bits) {
	uint8_t i;
	uint8_t sp[DS18X20_SP_SIZE];
	uint16_t meas;
	
	// читаем данные
	ow_command_all(DS18X20_READ);
	for ( i = 0; i < DS18X20_SP_SIZE; i++ ) 
		sp[i] = ow_byte_rd();
	// проверяем CRC
	if ( crc8( &sp[0], DS18X20_SP_SIZE ) ) 
		return DS18X20_ERROR_CRC;

	// преобразуем результат
	meas = sp[0];  						// LSB
	meas |= ((uint16_t)sp[1]) << 8; 	// MSB
	// проверка отрицательности
	if ( meas & 0x8000 )  {
		*subzero = 1;
		meas ^= 0xffff;	// преобразование в положительное значение
		meas++;
	} else 
		*subzero = 0;

	*cel = (uint8_t)(meas >> 4); 

	meas = (meas & 0x000F) * DS18X20_FRACCONV / 100;	
	*cel_frac_bits = meas;

	return DS18X20_OK;
}
*/

/** 
 * Читает температуру от одного датчика. Температура должна быть положительна.
 *
 * Возвращает:
 * 	значение температуры в миллиградусах * 100
 *    в случае ошибки возвращает 0 
 */
uint16_t DS18B20_read_meas_single() {
	uint8_t sp[DS18X20_SP_SIZE];
	uint16_t meas;
	
	// читаем данные
	ow_command_all(DS18X20_READ);
	for ( uint8_t i = 0; i < DS18X20_SP_SIZE; i++ ) 
		sp[i] = ow_byte_rd();
	// проверяем CRC
	if ( crc8(&sp[0], DS18X20_SP_SIZE) ) 
		return 0;

	// преобразуем результат
	meas = sp[0];  						// LSB
	meas |= ((uint16_t)sp[1]) << 8; 	// MSB
	return (meas >> 4)*10 + (meas & 0x000F) * DS18X20_FRACCONV / 1000;
}
