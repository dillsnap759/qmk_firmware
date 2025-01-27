// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY, // this will be default but configurable
    _COLEMAK, // this will be installed but configurable
    _NAV,
    /*_MOUSE,
    _MEDIA,
    _NUM,
    _SYM,
    _FUNC,
    _CONFIG,
    */
};


#define KC_QWERTY PDF(_QWERTY)
#define KC_COLEMAK PDF(_COLEMAK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

/*
[_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  KC_NO,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_NO,    KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                              KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_NO,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,                             XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_NO,
    KC_NO,KC_NO,LT(_MEDIA, KC_ESC),LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),      LT(_SYM, KC_ENT),LT(_NUM, KC_BSPC), LT(_FUN, KC_DEL),  KC_NO,  KC_NO
),
*/

[_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  KC_NO,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_NO,    KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                              KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_NO,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,                             XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_NO,
           KC_NO,   KC_NO, KC_ESC, LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),      KC_ENT,KC_BSPC, KC_DEL,  KC_NO,  KC_NO
),
/*
[_COLEMAK] = LAYOUT(                      
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  KC_NO,    KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                                            KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
  KC_NO,    KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                                            KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT,
  KC_NO,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,                            XXXXXXX,KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NO,
    KC_NO,KC_NO,LT(_MEDIA, KC_ESC),LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),      LT(_SYM, KC_ENT),LT(_NUM, KC_BSPC), LT(_FUN, KC_DEL),  KC_NO,  KC_NO
),
*/
[_COLEMAK] = LAYOUT(                      
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  KC_NO,    KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                                            KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
  KC_NO,    KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                                            KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT,
  KC_NO,    KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,                            XXXXXXX,KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NO,
           KC_NO,   KC_NO, KC_ESC, LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),      KC_ENT,KC_BSPC, KC_DEL,  KC_NO,  KC_NO
),

[_NAV] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                           KC_NO,     KC_NO,    KC_NO,   KC_NO,    KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                        KC_AGAIN,   KC_PSTE,  KC_COPY,  KC_CUT,  KC_UNDO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_CAPS,   KC_LEFT,  KC_DOWN,   KC_UP, KC_RIGHT,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______,  KC_INS,   KC_HOME,  KC_PGDN, KC_PGUP,   KC_END,  KC_NO,
                        KC_QWERTY, KC_COLEMAK, KC_NO, KC_NO, KC_NO,       KC_ENT,  KC_BSPC,    KC_DEL,    KC_NO,  KC_NO
)

[_MOUSE] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                      KC_AGAIN,   KC_PSTE,    KC_CUT,   KC_COPY,   KC_UNDO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,   MS_LEFT,   MS_DOWN,     MS_UP,  MS_RIGHT,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,   MS_WHLL,   MS_WHLD,   MS_WHLU,   MS_WHLR,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       MS_BTN2, MS_BTN1, MS_BTN3,     KC_NO, KC_NO
),
/*
[_MEDIA] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[_NUM] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[_SYM] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[_FUNC] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[_CONFIG] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO, _______,       _______, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
)
*/
};

