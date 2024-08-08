// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_1key(
       KC_Z
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_A);
        } else {
            tap_code(KC_B);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_C);
        } else {
            tap_code(KC_D);
        }
    } else if (index == 2) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_E);
        } else {
            tap_code(KC_F);
        }
    }
    return false;
}
