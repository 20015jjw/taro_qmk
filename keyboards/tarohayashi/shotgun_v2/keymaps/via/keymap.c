// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "lib/add_keycodes.h"

// キーマップ
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_PSLS, KC_P7, KC_P8, KC_P9, KC_BSPC,
      KC_PAST, KC_P4, KC_P5, KC_P6, KC_TAB,
      KC_PMNS, KC_P1, KC_P2, KC_P3, KC_PENT,
      KC_PPLS,     KC_P0,    KC_PDOT
    )
};
