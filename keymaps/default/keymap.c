#include "kb.h"

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {

    if (clockwise) {

        uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 4, 8);

        if (keycode >= MACRO00 && keycode <= MACRO15) {

            dynamic_keymap_macro_send(keycode - MACRO00);

        } else {

            register_code16(keycode);

            wait_ms(10);

            unregister_code16(keycode);

        }

    } else {

        uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 4, 9);

        if (keycode >= MACRO00 && keycode <= MACRO15) {

            dynamic_keymap_macro_send(keycode - MACRO00);

        } else {

            register_code16(keycode);

            wait_ms(10);

            unregister_code16(keycode);

        }

    }

}

#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_NUBS, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_HOME, KC_PGUP, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_END, KC_PGDN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL, 
		KC_LGUI, KC_APP, KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, M(0), KC_LEFT, KC_DOWN, KC_RGHT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS )

};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {     0,	NO_LED,		 1,		 2,	   	 3,		 4,	 	 5,		6,		7,		8,		9,	   10,		11,		12,		13,		 14},
  {NO_LED,	NO_LED,	    15,	    16,	    17,     18,	    19,	    20,	   21,     22,	   23,	   24,		25,		26,		27,		 28},
  {	   29,      30,		31,		32,	    33,	    34,	    35,	    36,	   37,     38,	   39,	   40,		41,		42,		43,	 NO_LED},
  {	   44,      45,		46,		47,	    48,	    49,	    50,	    51,	   52,     53,	   54,	   55,		56,		57,		58,		 59},
  {	   60,      61,		62,		63,	    64,	    65,     66,     67,	   68,     69,     70, NO_LED,      71,		72,		73},
  {	   74,      75,	    76,	    77,	    78,     79,	    80,	    81,    82,	   83,	   84},
  {	   85,      86,	    87,	    88,	    89,     90,	    91,	    92,	   93,	   94,	   95}
},

{
  // LED Index to Physical Position
   {    202,   8},{    180,   0},{    167,   0},{    154,   0},{    139,   0},{    125,   0},{    112,   0},{    98,   0},{    86,   0},{    86,   0},{    76,   0},{    63,   0},{    49,   0},{    25,   0},{    7,   0},
   {    175,  16},{    160,  16},{    146,  16},{    132,  16},{    119,  16},{    105,  16},{     92,  16},{    83,  16},{    70,  16},{    56,  16},{    42,  16},{    28,  16},{    16,  16},{     2,  16},
   {    210,  32},{    196,  32},{    174,  32},{    154,  32},{    140,  32},{    126,  32},{    113,  32},{   102,  32},{    91,  32},{    75,  32},{    67,  32},{    54,  32},{    41,  32},{    28,  32},{    7,  32},
   {    210,  48},{    196,  48},{    169,  48},{    154,  48},{    139,  48},{    126,  48},{    112,  48},{    98,  48},{    86,  48},{    76,  48},{    64,  48},{    49,  48},{    36,  48},{    25,  48},{   13,  48},{  0,  48},
   {    210,  64},{    196,  64},{    176,  64},{    161,  64},{    141,  64},{    122,  64},{    111,  64},{    96,  64},{    83,  64},{    70,  64},{    49,  64},{    25,  64},{    13,  64},{    0,  64},
   {    204,   0},{    182,   0},{    160,   0},{    132,   0},{    105,   0},{     83,   0},{     56,   0},{    28,   0},{    13,   0},{     0,  14},{     0,  62},
   {      7,  64},{     21,  64},{     56,  64},{     81,  64},{    104,  64},{    126,  64},{    155,  64},{   182,  64},{   203,  64},{   210,  62},{   210,  14}
}, 

{
  // LED Index to Flag
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
  0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF
} 

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}