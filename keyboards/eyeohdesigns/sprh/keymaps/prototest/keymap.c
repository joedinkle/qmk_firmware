/* Copyright 2019 IOD
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H


// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { QMKBEST = SAFE_RANGE, QMKURL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = ProtoTest(/* Base */
                 KC_MUTE,  KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC, KC_A,   KC_BSPC, KC_A,\
                 KC_B,  KC_BSPC,    KC_B,  KC_BSPC,    KC_B,  KC_BSPC,    KC_B,  KC_BSPC,    KC_B,  KC_BSPC,    KC_B,  KC_BSPC, KC_B,   KC_BSPC, \
                 KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC, KC_A,    \
                 KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC,    KC_A,  KC_BSPC, KC_A, KC_BSPC,\
                 KC_1,  KC_2,    KC_3,  KC_4,    KC_5,    KC_6,  KC_7,    KC_8,  KC_9,    KC_0,  KC_A, KC_B, KC_C\
				 )
};


void matrix_init_user(void) {}

void matrix_scan_user(void) {}

void led_set_user(uint8_t usb_led) {}

void encoder_update_user(uint8_t index, bool clockwise) {
 if (index == 0) {
	 if (clockwise) {
  register_code(KC_VOLU);
  unregister_code(KC_VOLU);
 }  else{
	register_code (KC_VOLD);
	unregister_code(KC_VOLD);
 }
 }
}
