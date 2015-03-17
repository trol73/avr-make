/*
	Модуль хранения всех данных настроек и статистики
*/


#define EEPROM_ADDRESS_DATA					(uint16_t*)2	// с этого адреса начинается сохранение данных настроек и статистики
#define EEPROM_ADDRESS_CORRECTION_PLUS		(uint16_t*)(2+VI_16_STORED_DATA_COUNT)




inline void load_eeprom() {
	for (uint8_t i = 0; i < VI_16_STORED_DATA_COUNT; i++)
		data_16[i] = eeprom_read_word(EEPROM_ADDRESS_DATA+2*i);
	settings_time_correction_plus = eeprom_read_byte(EEPROM_ADDRESS_CORRECTION_PLUS);
}


void save_eeprom() {
	wdt_enable(WDTO_2S);
	for (uint8_t i = 0; i < VI_16_STORED_DATA_COUNT; i++)
		eeprom_write_word(EEPROM_ADDRESS_DATA+2*i, data_16[i]);
	eeprom_write_byte(EEPROM_ADDRESS_CORRECTION_PLUS, settings_time_correction_plus);
	wdt_enable(WDTO_250MS);
}


inline void init_settings() {
//#if LOAD_SETTINGS_FROM_EEPROM
	load_eeprom();
/*
//#else
	settings_time_correction_hs = 0;
	settings_protect_u_min = PROTECT_U_MIN;
	settings_protect_u_max = PROTECT_U_MAX;
	settings_protect_repeat_time = PROTECT_REPEAT_TIME;
	settings_protect_meass_time = PROTECT_MEASS_TIME;
	stat_accum_cycles = 0;
	stat_accum_charge_days = 0;
	settings_accum_min_voltage = ACCUMULATOR_MIN_VOLTAGE;
	settings_accum_min_load_voltage = ACCUMULATOR_MIN_LOAD_VOLTAGE;
	accum_charge_time = ACCUMULATOR_CHARGE_HOURS;
	time_day = 0;

	save_eeprom();
//#endif
*/
	if ( settings_time_correction_hs > 30000 ) {
		settings_time_correction_hs = 0;
	}
	if ( settings_protect_u_min > 3000 ) {
		settings_protect_u_min = PROTECT_U_MIN;
	}
	if ( settings_protect_u_max > 3000 ) {
		settings_protect_u_max = PROTECT_U_MAX;
	}
	if ( settings_protect_repeat_time > 30000 ) {
		settings_protect_repeat_time = PROTECT_REPEAT_TIME;
	}
	if ( settings_protect_meass_time > 3000 ) {
		settings_protect_meass_time = PROTECT_MEASS_TIME;
	}
	if ( stat_accum_cycles > 30000 ) {
		stat_accum_cycles = 0;
	}
	if ( stat_accum_charge_days > 1000 ) {
		stat_accum_charge_days = 0;
	}
	if ( settings_accum_min_voltage > 100 ) {
		settings_accum_min_voltage = ACCUMULATOR_MIN_VOLTAGE;
	}
	if ( settings_accum_min_load_voltage > 100 ) {
		settings_accum_min_load_voltage = ACCUMULATOR_MIN_LOAD_VOLTAGE;
	}
	if ( accum_charge_time > 50 ) {
		accum_charge_time = ACCUMULATOR_CHARGE_HOURS;
	}
	if ( time_day > 50000 ) {
		time_day = 0;
	}
	save_eeprom();
	init_time_correction();
}
