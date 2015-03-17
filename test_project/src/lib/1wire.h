#ifndef _1_WIRE_H_
#define _1_WIRE_H_

#include "../config.h"
#include "../stddef.h"

#include <inttypes.h>

// настройка пина
#define OW_PORT	D
#define OW_PIN		5


#define OW_MATCH_ROM    0x55		// Выбор адреса — используется для обращения к конкретному адресу устройства из многих подключенных
#define OW_SKIP_ROM			0xCC		// Игнорировать адрес — используется для обращения к единственному устройству на шине, при этом адрес устройства игнорируется (можно обращаться к неизвестному устройству)
#define OW_SEARCH_ROM		0xF0		// Поиск адресов — используется при универсальном алгоритме определения количества и адресов подключенных устройств
#define READ_ROM				0x33		// Чтение адреса устройства — используется для определения адреса единственного устройства на шине

#define OW_SEARCH_FIRST		0xFF		// start new search
#define OW_PRESENCE_ERR		0xFF
#define OW_DATA_ERR			0xFE
#define OW_LAST_DEVICE		0x00		// last device found
//			0x01 ... 0x40: continue searching

#define OW_ROMCODE_SIZE 	8			// rom-code size including CRC


/**
 * Формирует сигнал RESET. Этим импульсом всегда начинается работа с шиной и только им можно прервать
 * передачу незаконченной команды.
 *
 * return 1, если не возникло ошибок
 */
extern uint8_t ow_reset(void);

//extern uint8_t ow_bit_io( uint8_t b );
/**
 * Передает бит в линию
 *
 * return отклик устройства. при передаче совпадет с передаваемым битом, при приеме тут будет результат
 */
extern uint8_t ow_byte_wr(uint8_t b);
/**
 * Читаем байт из линии
 */
extern uint8_t ow_byte_rd(void);

/**
 * Устанавливает линию для паразитного питания
 */
extern inline void ow_parasite_enable(void);

/**
 * Отпускает линию, если не иребуется паразитного питания
 */
extern inline void ow_parasite_disable(void);

/**
 * Передача команды всем устройствам на линии
 */
extern void ow_command_all(uint8_t command);

/**
 * Возвращает состояние линии
 */
extern uint8_t ow_input_pin_state();







#endif // _1_WIRE_H_
