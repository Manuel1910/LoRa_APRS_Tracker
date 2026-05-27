/* Copyright (C) 2025 Ricardo Guzman - CA2RXU
 *
 * This file is part of LoRa APRS Tracker.
 *
 * LoRa APRS Tracker is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LoRa APRS Tracker is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LoRa APRS Tracker. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef BOARD_PINOUT_H_
#define BOARD_PINOUT_H_

    //  LoRa Radio
    #define HAS_SX1262
    #define HAS_TCXO
    #define RADIO_VCC_PIN       46
    #define RADIO_SCLK_PIN      36
    #define RADIO_MISO_PIN      47
    #define RADIO_MOSI_PIN      33
    #define RADIO_CS_PIN        3
    #define RADIO_RST_PIN       4
    #define RADIO_DIO1_PIN      5
    #define RADIO_BUSY_PIN      6

    //  Display
    #undef  OLED_SDA
    #undef  OLED_SCL
    #undef  OLED_RST

    #define HAS_DISPLAY
    #define HAS_EPAPER
    #define EPAPER_CS           34
    #define EPAPER_SCLK         36
    #define EPAPER_MOSI         33
    #define EPAPER_MISO         -1
    #define EPAPER_BUSY         37
    #define EPAPER_RST          -1
    #define EPAPER_DC           35
    //#define EPAPER_BACKLIGHT    43

    //  GPS
    #define GPS_VCC             39
    #define GPS_RX              43
    #define GPS_TX              44
    #define GPS_BAUDRATE        38400

    //  OTHER
    #define BUTTON_PIN          0
    //#define BATTERY_PIN         4

    #define BOARD_POWERON       10
    #define BOARD_SDCARD_CS     39
    #define BOARD_BL_PIN        42

    #define BOARD_I2C_SDA       18
    #define BOARD_I2C_SCL       8

    //  JOYSTICK
    /*#define HAS_JOYSTICK
    #define JOYSTICK_CENTER     0
    #define BUTTON_PIN          JOYSTICK_CENTER
    #define JOYSTICK_UP         3   // G S1
    #define JOYSTICK_DOWN       15  // G S3
    #define JOYSTICK_LEFT       1   // G S4
    #define JOYSTICK_RIGHT      2   // G S2*/

    /*#define HAS_TOUCHSCREEN
    #define HAS_I2S
    #define DAC_I2S_WS          5
    #define DAC_I2S_DOUT        6
    #define DAC_I2S_BCK         7
    #define SPK_I2S_PORT        I2S_NUM_0
    #define MIC_I2S_SAMPLE_RATE 16000
    #define MIC_I2S_PORT        I2S_NUM_1*/

#endif