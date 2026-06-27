#include QMK_KEYBOARD_H

enum combos { PL_MINUS, AO_ESC, ZSLSH_CAPSWORD, DH_UNDER };

const uint16_t PROGMEM pl_combo[]    = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM ao_combo[]    = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM zslsh_combo[] = {KC_Z, KC_SLSH, COMBO_END};
const uint16_t PROGMEM dh_combo[]    = {KC_D, KC_H, COMBO_END};

combo_t key_combos[] = {
    [PL_MINUS]       = COMBO(pl_combo, KC_MINS),
    [AO_ESC]         = COMBO(ao_combo, KC_ESC),
    [ZSLSH_CAPSWORD] = COMBO(zslsh_combo, CW_TOGG),
    [DH_UNDER]       = COMBO(dh_combo, KC_UNDS),
};

enum tap_dances {
    TD_PIPE_BSLS,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_PIPE_BSLS] = ACTION_TAP_DANCE_DOUBLE(KC_PIPE, KC_BSLS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_2(
        KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,          KC_J,         KC_L,         KC_U,         KC_Y,         KC_SCLN,
        LGUI_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LCTL_T(KC_T), HYPR_T(KC_G), HYPR_T(KC_M), LCTL_T(KC_N), LSFT_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O),
        KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,          KC_K,         KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,
        LT(3, KC_TAB), LT(1, KC_ENT),                               LT(2, KC_SPC), KC_BSPC
    ),

    [1] = LAYOUT_split_3x5_2(
        KC_GRV,       KC_LT,        KC_GT,        KC_MINS,      TD(TD_PIPE_BSLS), KC_CIRC,      KC_LCBR,      KC_RCBR,      KC_DLR,       KC_QUES,
        LGUI_T(KC_EXLM), LALT_T(KC_ASTR), LSFT_T(KC_SLSH), LCTL_T(KC_EQL), HYPR_T(KC_AMPR),
        HYPR_T(KC_HASH), LCTL_T(KC_LPRN), LSFT_T(KC_RPRN), LALT_T(KC_SCLN), LGUI_T(KC_DQUO),
        KC_PIPE,      KC_PLUS,      KC_LBRC,      KC_RBRC,      KC_PERC,      KC_AT,        KC_COLN,      KC_COMM,      KC_DOT,       KC_QUOT,
        KC_NO,        KC_TRNS,      KC_NO,        KC_NO
    ),

    [2] = LAYOUT_split_3x5_2(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,         KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,
        LCTL(KC_Z),   LCTL(KC_X),   LCTL(KC_C),   LCTL(KC_V),   OS_RALT,       KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO,        KC_NO,                                        KC_TRNS,      KC_NO
    )

};