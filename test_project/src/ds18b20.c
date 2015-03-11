#include "ds18b20.h"

#include "1wire.h"
#include "crc8.h"


/**
 * ������ ��������� (CONVERT_T) ��� ���� ��������, ���������� ������� 
 */
uint8_t DS18B20_start_single_meas_parasite() {
	ow_reset();
	if( ow_input_pin_state() ) { // ���� ������ ���� ������ � ������
		ow_command_all(DS18X20_CONVERT_T);
		ow_parasite_enable();
		return DS18X20_OK;
	} else { // �������� ��������� �����		
		return DS18X20_START_FAIL;
	}
}


/** 
 * ������ ����������� �� ������ �������
 * ��������, ���� subzero = 1, cel = 18, millicel = 50, �� t = -18.50�C
 *
 * ����������:
 * 	subzero == 1 ���� ����������� ������������
 *		cel - ����� ����� 
 *		cel_frac_bits - ������������ * 0.1
 */
/*
uint8_t DS18B20_read_meas_single(uint8_t *subzero, uint8_t *cel, uint8_t *cel_frac_bits) {
	uint8_t i;
	uint8_t sp[DS18X20_SP_SIZE];
	uint16_t meas;
	
	// ������ ������
	ow_command_all(DS18X20_READ);
	for ( i = 0; i < DS18X20_SP_SIZE; i++ ) 
		sp[i] = ow_byte_rd();
	// ��������� CRC
	if ( crc8( &sp[0], DS18X20_SP_SIZE ) ) 
		return DS18X20_ERROR_CRC;

	// ����������� ���������
	meas = sp[0];  						// LSB
	meas |= ((uint16_t)sp[1]) << 8; 	// MSB
	// �������� ���������������
	if ( meas & 0x8000 )  {
		*subzero = 1;
		meas ^= 0xffff;	// �������������� � ������������� ��������
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
 * ������ ����������� �� ������ �������. ����������� ������ ���� ������������.
 *
 * ����������:
 * 	�������� ����������� � ������������� * 100
 *    � ������ ������ ���������� 0 
 */
uint16_t DS18B20_read_meas_single() {
	uint8_t sp[DS18X20_SP_SIZE];
	uint16_t meas;
	
	// ������ ������
	ow_command_all(DS18X20_READ);
	for ( uint8_t i = 0; i < DS18X20_SP_SIZE; i++ ) 
		sp[i] = ow_byte_rd();
	// ��������� CRC
	if ( crc8(&sp[0], DS18X20_SP_SIZE) ) 
		return 0;

	// ����������� ���������
	meas = sp[0];  						// LSB
	meas |= ((uint16_t)sp[1]) << 8; 	// MSB
	return (meas >> 4)*10 + (meas & 0x000F) * DS18X20_FRACCONV / 1000;
}
