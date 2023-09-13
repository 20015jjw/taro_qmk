// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "addkeycodes.h"
#include "addencoders.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
                    CAPTCHA, PASTE, COPY,  KC_BSPC,
        SC_RESET, SAVE,   KC_UP,   SAVEAS,
                    KC_LEFT,   KC_DOWN, KC_RGHT, LT(3, KC_ENT),
        // LEVER
        PREVTAB, CLOSETAB, NEXTTAB,
        // ENCODERS
        SC_UP,SC_DOWN, KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_R
  ),
  [1] = LAYOUT(
                 XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // LEVER
        XXXXXXX, XXXXXXX, XXXXXXX,
        // ENCODERS
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
  [2] = LAYOUT(
                 XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // LEVER
        XXXXXXX, XXXXXXX, XXXXXXX,
        // ENCODERS
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
  [3] = LAYOUT(
                 RGB_HUI, RGB_SAI, RGB_VAI, RGB_RMOD,
        RGB_TOG, _______, RGB_MOD, _______,
                 RGB_HUD, RGB_SAD, RGB_VAD, LT(5, KC_ENT),
        // LEVER
        RGB_SPI, _______, RGB_SPD,
        // ENCODERS
        RGB_MOD, RGB_RMOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_record_addedkeycodes(keycode, record);
    return true;
}

void matrix_scan_user(void){
    matrix_scan_addedencoders();
}

