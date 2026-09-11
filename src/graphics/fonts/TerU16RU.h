#pragma once

#ifdef ARDUINO
#include <Arduino.h>
#elif __MBED__
#define PROGMEM
#endif

extern const uint8_t TerU16n_RU[] PROGMEM;
