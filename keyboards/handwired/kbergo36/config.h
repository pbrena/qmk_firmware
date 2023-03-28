// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DEBUG_MATRIX_SCAN_RATE
/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW
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

// #define ENCODERS_PAD_A { GP16 }
// #define ENCODERS_PAD_B { GP17 }

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
 #    define SPLIT_OLED_ENABLE
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

/* USB Device descriptor parameter */
// #define VENDOR_ID    0xFEED
// #define PRODUCT_ID   0x0000
// #define DEVICE_VER   0x0001
// #define MANUFACTURER QMK
// #define PRODUCT kbergo36 Raspberry Pi RP2040

/* key matrix size */
// #define MATRIX_ROWS 6
// #define MATRIX_COLS 6
// #define MATRIX_COL_PINS { GP0,  GP1,  GP2,  GP3,  GP4,  GP5  }
// #define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14, GP15 }
