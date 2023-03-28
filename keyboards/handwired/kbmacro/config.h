// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DEBUG_MATRIX_SCAN_RATE
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
//#define DIODE_DIRECTION COL2ROW BOTHWAYS
/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN A1
#define TAPPING_TERM 500

#define ENCODERS_PAD_A { GP14 }
#define ENCODERS_PAD_B { GP15 }

// QMK numbers the I2C peripherals differently when it comes to defining the I2C_DRIVER
// so add 1 (I2C0 is I2CD1 and I2C1 is I2CD2). This way, you can use any appropriate pair
// of pins that are capable of I2C on the RP2040.
//  I2C Controller    GPIO Pins
//  I2C0 – SDA        GP0 GP8
//  I2C0 – SCL        GP1 GP9
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP8
#define I2C1_SCL_PIN GP13 // Funciono con gp9 y gp13

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define OLED_BRIGHTNESS 128
#    define OLED_IC	OLED_IC_SH1106
#endif

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

