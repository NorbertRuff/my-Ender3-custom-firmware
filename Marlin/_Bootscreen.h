/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 81
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B11111000,B11100111,B00001111,B11100000,B11110000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B11111100,B11100111,B00001111,B11110001,B11111000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00011111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00011111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00001111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00001111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00001111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B00011111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10011100,B11100111,B00001110,B01110011,B10011100,B00000000,B00000000,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B11111100,B11100111,B11101111,B11110001,B11111000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B11111000,B11100111,B11101111,B11100000,B11110000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011110,B00111100,B01111100,B01110001,B11011111,B00111111,B10000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011110,B00111100,B01111100,B01110001,B11011111,B00111111,B11000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011110,B00111100,B01101100,B01110011,B10011100,B00111001,B11000000,B00000000,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011111,B01111100,B01101100,B01110111,B00011100,B00111001,B11000000,B00000000,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011111,B01111100,B01101100,B01110111,B00011100,B00111001,B11000000,B00000000,B11111111,B11111000,B00000001,B10110000,B00000000,B00110110,B00000000,
  B00000000,B00011101,B01011100,B11101110,B01111110,B00011100,B00111111,B11000000,B00000000,B10000000,B00001000,B00000010,B01001000,B00000000,B01001001,B00000000,
  B00000000,B00011101,B01011100,B11101110,B01111100,B00011111,B00111111,B10000000,B00000000,B10000000,B00001000,B00000100,B01000100,B00000000,B10001000,B10000000,
  B00000000,B00011101,B11011100,B11101110,B01111110,B00011111,B00111001,B11000000,B00000000,B10000000,B00001000,B00001000,B01000010,B00000001,B00001000,B01000000,
  B00000000,B00011101,B11011100,B11000110,B01111110,B00011100,B00111001,B11000000,B00000000,B10000000,B00001000,B00010000,B01000001,B00000010,B00001000,B00100000,
  B00000000,B00011101,B11011100,B11111110,B01110111,B00011100,B00111001,B11000000,B00000000,B11111111,B11111000,B00010000,B01000001,B00000010,B00001000,B00100000,
  B00000000,B00011101,B11011100,B11111110,B01110111,B00011100,B00111001,B11000000,B00000000,B00001111,B10000000,B00010000,B10100001,B00000010,B00010100,B00100000,
  B00000000,B00011101,B11011101,B11000111,B01110011,B10011100,B00111001,B11000000,B00000000,B00000111,B00000000,B00001001,B00010010,B00000001,B00100010,B01000000,
  B00000000,B00011101,B11011101,B11000111,B01110001,B11011111,B10111001,B11000000,B00000000,B00000010,B00000000,B00000110,B00001100,B00000000,B11000001,B10000000,
  B00000000,B00011101,B11011101,B11000111,B01110001,B11011111,B10111001,B11000000,B00000000,B00000001,B11100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B11111100,B00011110,B00000111,B10000001,B11100000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000001,B11111110,B00111111,B00001111,B11000011,B11110000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B00001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B01111100,B01110011,B10011100,B11100111,B00111000,B00000000,B00000000,B00100000,B00100000,B00000100,B00000100,B00000000,B10000000,B10000000,
  B00000000,B00000000,B01111110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000000,B11100000,B00111000,B00011100,B00000111,B00000011,B10000000,B11100000,
  B00000000,B00000000,B00001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000001,B00000000,B00000100,B00100000,B00000000,B10000100,B00000000,B00010000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000010,B00000000,B00000010,B01000000,B00000000,B01001000,B00000000,B00001000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000010,B00000010,B00000010,B01000000,B01000000,B01001000,B00001000,B00001000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000010,B00000010,B00000010,B01000000,B01000000,B01001000,B00001000,B00001000,
  B00000000,B00000001,B11001110,B01110011,B10011100,B11100111,B00111000,B00000000,B00000010,B00000101,B00000010,B01000000,B10100000,B01001000,B00010100,B00001000,
  B00000000,B00000000,B11111100,B00111111,B00001111,B11000011,B11110000,B00000000,B00000001,B00000101,B00000100,B00100000,B10100000,B10000100,B00010100,B00010000,
  B00000000,B00000000,B01111000,B00011110,B00000111,B10000001,B11100000,B00000000,B00000000,B10001000,B10001000,B00010001,B00010001,B00000010,B00100010,B00100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,B01110000,B00001110,B00001110,B00000001,B11000001,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

// Saves 345 bytes
#define COMPACT_CUSTOM_BOOTSCREEN
const unsigned char custom_start_bmp_rle[293] PROGMEM = {
  0x1F, 0x13, 0x0F, 0x47, 0x06, 0x0F, 0x3F, 0x14, 0x0F, 0x40, 0x14, 0x0F, 0x40, 0x23, 0x0F, 0x41,
  0x13, 0x1F, 0x37, 0x33, 0x32, 0x1F, 0x2B, 0x13, 0xF0, 0x93, 0x02, 0x0F, 0x18, 0x08, 0x75, 0xF0,
  0x03, 0x02, 0x0F, 0x17, 0x14, 0x02, 0x19, 0xF0, 0x23, 0x02, 0x0F, 0x18, 0x22, 0x51, 0xF0, 0xA3,
  0x02, 0x0F, 0x18, 0xF1, 0x74, 0x02, 0x0F, 0x1B, 0x87, 0xF0, 0x34, 0x02, 0x1F, 0x29, 0xF0, 0x01,
  0x24, 0x02, 0x1F, 0x27, 0xF0, 0x21, 0x24, 0x5F, 0x24, 0xF0, 0x50, 0x46, 0x1F, 0x21, 0x75, 0xF0,
  0x23, 0x3F, 0x1B, 0x8D, 0xF0, 0x6F, 0x17, 0x6F, 0x04, 0xF0, 0x6F, 0x2D, 0x10, 0xF0, 0x8F, 0x2E,
  0xE4, 0x5F, 0x30, 0xC5, 0x4F, 0x33, 0x96, 0x2F, 0x37, 0x67, 0x1F, 0x39, 0x56, 0x1F, 0x3A, 0x46,
  0x1F, 0x3B, 0x3F, 0x45, 0x3F, 0x45, 0x30, 0x0F, 0x3B, 0x06, 0x4F, 0x3B, 0x15, 0x4F, 0x36, 0x05,
  0x03, 0x3F, 0x39, 0x22, 0x6F, 0x3D, 0x7F, 0xFD, 0x0F, 0x17, 0xF0, 0x1F, 0x0C, 0x3F, 0x18, 0xF0,
  0x0F, 0x0A, 0x5F, 0x19, 0x37, 0x1F, 0x0D, 0x2F, 0x1A, 0x37, 0x1F, 0x0D, 0x2F, 0x19, 0x38, 0x0F,
  0x0D, 0x2F, 0x1A, 0x3F, 0x17, 0x2F, 0x19, 0x36, 0x16, 0x11, 0x39, 0x30, 0x27, 0x3F, 0x0E, 0x36,
  0x04, 0xB6, 0x95, 0x63, 0x9D, 0x36, 0x14, 0x51, 0x34, 0x23, 0x34, 0x22, 0x31, 0xAD, 0xB6, 0x24,
  0x23, 0x25, 0x23, 0x14, 0x33, 0x31, 0x1E, 0xB5, 0x33, 0x23, 0x25, 0x23, 0x24, 0x33, 0x2F, 0x03,
  0x36, 0x15, 0x24, 0x23, 0x25, 0x22, 0xB3, 0x2F, 0x04, 0x26, 0x15, 0x33, 0x23, 0x25, 0x23, 0x2C,
  0x2F, 0x03, 0x3E, 0x24, 0x22, 0x35, 0x22, 0x2C, 0x2F, 0x04, 0x2F, 0x00, 0x23, 0x32, 0x25, 0x32,
  0x2C, 0x2F, 0x03, 0x39, 0x12, 0x24, 0x23, 0x25, 0x23, 0x27, 0x02, 0x2F, 0x04, 0x38, 0x13, 0x23,
  0x32, 0x34, 0x32, 0x35, 0x13, 0x2F, 0x03, 0x38, 0x13, 0x24, 0x23, 0x34, 0x23, 0x43, 0x13, 0x2F,
  0x04, 0x35, 0x42, 0x33, 0x33, 0x50, 0x61, 0x94, 0x2F, 0x01, 0xF0, 0x11, 0x60, 0x63, 0xA4, 0x63,
  0x7F, 0x26, 0x3B, 0x3F, 0x0D
};
