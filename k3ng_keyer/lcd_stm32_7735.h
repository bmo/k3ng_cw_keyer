// Include file for STM32 platform's 7735 graphics chip.
//   This library works with the Adafruit 1.8" TFT Breakout w/SD card
//    ----> http://www.adafruit.com/products/358 
//   There are some other 7735 based displays that also work.

#pragma message("Including lcd_stm32_7735.h")

#include <Adafruit_GFX_AS.h>
#include <Font16.h>
#include <Font32.h>
#include <Font64.h>
#include <Font7s.h>
#include <Load_fonts.h>


#include <Adafruit_ST7735.h> // Hardware-specific library
#include <SPI.h>

// For the display PCB, you can use any 2 or 3 pins
// These pins will also work for the 7735 based 1.8" TFT shields
#define TFT_CS     PA2
#define TFT_RST    PA4  // you can also connect this to the Arduino reset
// in which case, set this #define pin to 0!
#define TFT_DC     PA3

// Option 1 (recommended): must use the hardware SPI pins
// (for UNO thats sclk = 13 and sid = 11) and pin 10 must be
// an output. This is much faster - also required if you want
// to use the microSD card (see the image drawing example)
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

// Option 2: use any pins but a little slower!
#define TFT_SCLK PA5   // set these to be whatever pins you like!
#define TFT_MOSI PA7   // set these to be whatever pins you like!

//Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);


#define TFT_COLOR_BLACK    0x0000
#define TFT_COLOR_BLUE     0x001F
#define TFT_COLOR_RED      0xF800
#define TFT_COLOR_GREEN    0x07E0
#define TFT_COLOR_CYAN     0x07FF
#define TFT_COLOR_MAGENTA  0xF81F
#define TFT_COLOR_YELLOW   0xFF
#define TFT_BACKGROUND_COLOR TFT_COLOR_BLACK
#define TFT_FOREGROUND_COLOR TFT_COLOR_WHITE



