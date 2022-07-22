#ifndef CONFIG_H
#define CONFIG_H
#define CH_CFG_ST_TIMEDELTA 0

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAEED
#define PRODUCT_ID      0x2887
#define DEVICE_VER      0x0001
#define MANUFACTURER    2933
#define PRODUCT         Hazel_69
#define DESCRIPTION     Hazel_69

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B6, B5, B4, B3, A10, A15 }
#define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, A7, B0, B1, B10, B11, B13, B14, B15, A8, A9 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define ENCODERS_PAD_A { B9 }
#define ENCODERS_PAD_B { B8 }

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN B12
#define RGBLED_NUM 96
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_WHEN_USB_SUSPENDED false
#define RGB_MATRIX_CENTER { 118,32 }
#endif

#endif