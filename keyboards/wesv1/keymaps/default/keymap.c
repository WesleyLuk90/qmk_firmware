#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk-compile-json. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, MO(3), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_GRV, KC_DEL, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, ANY(LM(2,MOD_LCTL)), ANY(LM(2,MOD_LGUI)), ANY(LM(2, MOD_LALT)), MO(5), KC_ENT, KC_SPC, KC_SPC, KC_ENT, MO(3), ANY(LM(2, MOD_LALT)), ANY(LM(2, MOD_LGUI)), ANY(LM(2, MOD_LCTL))),
	[1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, MO(4), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRV, KC_DEL, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, MO(5), KC_ENT, KC_SPC, KC_SPC, KC_ENT, MO(4), KC_LALT, KC_LGUI, KC_LCTL),
	[2] = LAYOUT(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_EQL, KC_BSLS, KC_TRNS, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_PPLS, KC_PIPE, KC_TRNS, KC_F11, KC_F12, KC_LBRC, KC_RBRC, KC_NO, RESET, MAGIC_TOGGLE_NKRO, DF(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_EQL, KC_BSLS, KC_TRNS, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_PPLS, KC_PIPE, KC_TRNS, KC_F11, KC_F12, KC_LBRC, KC_RBRC, KC_NO, RESET, MAGIC_TOGGLE_NKRO, DF(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_BSPC, KC_TRNS, KC_TRNS, KC_BSPC, KC_UP, KC_DEL, KC_HOME, KC_PGUP, KC_NO, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_PGDN, KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO, KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_INS, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PENT, KC_RCTL)
};
