#define DS2482_DEVICE_RESET		0xF0

 #define DS2482_STATUS_BUSY	(1<<0)
 #define DS2482_STATUS_PPD	(1<<1)
 #define DS2482_STATUS_SD	(1<<2)
 #define DS2482_STATUS_LL	(1<<3)
 #define DS2482_STATUS_RST	(1<<4)
 #define DS2482_STATUS_SBR	(1<<5)
 #define DS2482_STATUS_TSB	(1<<6)
 #define DS2482_STATUS_DIR	(1<<7)

#define DS2482_SET_POINTER		0xE1
 #define DS2482_STATUS_REG		0xF0
 #define DS2482_DATA_REG		0xE1
 #define DS2482_CHANNEL_REG		0xD2
 #define DS2482_CONFIG_REG		0xC3

#define DS2482_WRITE_CONFIG		0xD2

 #define DS2482_CONFIG_APU	(1<<0)
 #define DS2482_CONFIG_SPU	(1<<2)
 #define DS2482_CONFIG_WS	(1<<3)

#define DS2482_SELECT_CHANNEL	0xC3
 #define DS2482_WRITE_CHANNEL_0	0xF0
 #define DS2482_WRITE_CHANNEL_1	0xE1
 #define DS2482_WRITE_CHANNEL_2	0xD2
 #define DS2482_WRITE_CHANNEL_3	0xC3
 #define DS2482_WRITE_CHANNEL_4	0xB4
 #define DS2482_WRITE_CHANNEL_5	0xA5
 #define DS2482_WRITE_CHANNEL_6	0x96
 #define DS2482_WRITE_CHANNEL_7	0x87

 #define DS2482_READ_CHANNEL_0	0xB8
 #define DS2482_READ_CHANNEL_1	0xB1
 #define DS2482_READ_CHANNEL_2	0xAA
 #define DS2482_READ_CHANNEL_3	0xA3
 #define DS2482_READ_CHANNEL_4	0x9C
 #define DS2482_READ_CHANNEL_5	0x95
 #define DS2482_READ_CHANNEL_6	0x8E
 #define DS2482_READ_CHANNEL_7	0x87

#define DS2482_ONE_WIRE_RESET		0xB4
#define DS2482_ONE_WIRE_WRITE_BYTE	0xA5
#define DS2482_ONE_WIRE_READ_BYTE	0x96
#define DS2482_ONE_WIRE_SINGLE_BIT	0x87
#define DS2482_ONE_WIRE_TRIPLET		0x78

#define ONE_WIRE_READ_ROM		0x33
#define ONE_WIRE_MATCH_ROM		0x55
#define ONE_WIRE_SKIP_ROM		0xCC
#define ONE_WIRE_SEARCH_ROM		0xF0
#define ONE_WIRE_ALARM_SEARCH	0xEC

#define DS18B20_FAMILY_CODE		0x28
#define DS18s20_FAMILY_CODE		0x10

#define DS18B20_CONVERT_TEMP		0X44
#define DS18B20_WRITE_SCRATCHPAD	0x4E
#define DS18B20_READ_SCRATCHPAD		0xBE
#define DS18B20_COPY_SCRATCHPAD		0x48
#define DS18B20_RECALL_EEPROM		0xB8
#define DS18B20_READ_POWER_MODE		0xB4

 #define DS18B20_PARASITE_MODE	0x00
 #define DS18B20_POWERED_MODE	0x01
 
 #define DS18B20_SCRATCHPAD_TEMP_LSB	0
 #define DS18B20_SCRATCHPAD_TEMP_MSB	1
 #define DS18B20_SCRATCHPAD_HIGH_ALARM	2
 #define DS18B20_SCRATCHPAD_LOW_ALARM	3
 #define DS18B20_SCRATCHPAD_CONFIG_REG	4
 #define DS18B20_SCRATCHPAD_CRC			8






