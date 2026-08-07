#include QMK_KEYBOARD_H

enum combos { PL_MINUS, QSCLN_ESC, ZSLSH_CAPSWORD, DH_UNDER };

const uint16_t PROGMEM pl_combo[]    = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM qscln_combo[]    = {KC_Q, KC_SCLN, COMBO_END};
const uint16_t PROGMEM zslsh_combo[] = {KC_Z, KC_SLSH, COMBO_END};
const uint16_t PROGMEM dh_combo[]    = {KC_D, KC_H, COMBO_END};

combo_t key_combos[] = {
    [PL_MINUS]       = COMBO(pl_combo, KC_MINS),
    [QSCLN_ESC]         = COMBO(qscln_combo, KC_ESC),
    [ZSLSH_CAPSWORD] = COMBO(zslsh_combo, CW_TOGG),
    [DH_UNDER]       = COMBO(dh_combo, KC_UNDS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, LGUI_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LCTL_T(KC_T), HYPR_T(KC_G), HYPR_T(KC_M), LCTL_T(KC_N), LSFT_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_TAB, LT(1,KC_ENT), LT(2,KC_SPC), KC_BSPC),
    [1] = LAYOUT_split_3x5_2(KC_GRV, KC_LT, KC_GT, KC_MINS, KC_PIPE, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR, KC_QUES, KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL, KC_AMPR, KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO, KC_BSLS, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC, KC_AT, KC_COLN, KC_COMM, KC_DOT, KC_QUOT, KC_NO, KC_TRNS, KC_NO, KC_NO),
    [2] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), OS_RALT, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_LGUI, KC_LSFT, KC_TRNS, KC_NO)
};
