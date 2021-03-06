#define T6963_SET_CURSOR_POINTER	0x21
#define T6963_SET_OFFSET_REGISTER	0x22
#define T6963_SET_ADDRESS_POINTER	0x24

#define T6963_SET_TEXT_HOME_ADDRESS	0x40
#define T6963_SET_TEXT_AREA		0x41
#define T6963_SET_GRAPHIC_HOME_ADDRESS	0x42
#define T6963_SET_GRAPHIC_AREA		0x43

#define T6963_MODE_SET  0x80
#define T6963_MODE_OR        0
#define T6963_MODE_XOR       1
#define T6963_MODE_AND       3
#define T6963_MODE_TEXT      4
#define T6963_MODE_INTERNAL  0
#define T6963_MODE_EXTERNAL  8

#define T6963_DISPLAY_MODE  0x90
#define T6963_DISPLAY_GRAPHIC  3
#define T6963_DISPLAY_TEXT     2
#define T6963_DISPLAY_CURSOR   1
#define T6963_DISPLAY_BLINK    0

#define T6963_CURSOR_PATTERN_SELECT 0xA0

#define T6963_SET_DATA_AUTO_WRITE	0xB0
#define T6963_SET_DATA_AUTO_READ	0xB1
#define T6963_AUTO_RESET		0xB2

#define T6963_DATA_WRITE_AND_INCREMENT	  0xC0
#define T6963_DATA_READ_AND_INCREMENT	  0xC1
#define T6963_DATA_WRITE_AND_DECREMENT	  0xC2
#define T6963_DATA_READ_AND_DECREMENT	  0xC3
#define T6963_DATA_WRITE_AND_NONVARIABLE  0xC4
#define T6963_DATA_READ_AND_NONVARIABLE	  0xC5

#define T6963_SCREEN_PEEK		0xE0
#define T6963_SCREEN_COPY		0xE8

#define T6963_SET_PIXEL  0xF0
#define T6963_BIT_RESET  0x00
#define T6963_BIT_SET    0x08

























