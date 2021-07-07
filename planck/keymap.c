/* Copyright 2021 Giovane Boaviagem
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
#include "my.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |KBRD  | ------> Tap for =+
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for Esc ---> | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  ; : | Ctrl | ------> Tap for Enter 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for ( -----> | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  - _ |  ' " |  / ? |Shift | ------> Tap for )
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for [{ ----> |  GUI | Alt  | ,<   |Super |Lower |    Space    |Raise |Super | .>   |AltGr | GUI  | ------> Tap for ]}
 *                  `-----------------------------------------------------------------------------------'
 *                          /                                                               \
 *                         /__ Tap for Home                                                 \__ Tap for End
 *
 */
[QWERTY_LAYER] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KBRD,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, CTL_ENT,
    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSPC,
    GUI_L,   ALT_L, KC_COMM, KC_LGUI,   LOWER,     KC_SPC, KC_SPC,   RAISE,   KC_RGUI, KC_DOT,  ALT_R,   GUI_R
),

/* lower
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  | Tab  |  !   |  @   |  ´   |  #   |      |   *  |   %  |   ^  |  &   |  $   |KBRD  | ------> Tap for =+
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for Esc ---> | Ctrl |  `   |PrtScr| PgDn | PgUp |CpsLck|   ←  |   ↓  |   ↑  |   →  |      | Ctrl | ------> Tap for Enter 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for ( -----> | Shift|  \   |      |   Ç  |      |      |   ~  |      |   £  |  ¬   |  |   |Shift | ------> Tap for )
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for [{ ----> |  GUI | Alt  | ,<   |Super |Lower |  Backspace  |Raise |Super | .>   |AltGr | GUI  | ------> Tap for ]}
 *                  `-----------------------------------------------------------------------------------' 
 *                          /                                                               \
 *                         /__ Tap for Home                                                 \__ Tap for End
 *
 */
[LOWER_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________LOWER_L1__________________, _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________, _________________LOWER_R2__________________, _______,
    _______, _________________LOWER_L3__________________, _________________LOWER_R3__________________, _______,
    _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC, _______, _______,  _______,  _______, _______
),

/* Raise
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  | Tab  |  F1  |  F2  |  F3  |  F4  |      |      |      |   7  |   8  |   9  |KBRD  | ------> Tap for =+
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for Esc ---> | Ctrl |  F5  |  F6  |  F7  |  F8  |      |      |      |   4  |   5  |   6  | Ctrl | ------> Tap for Enter 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for ( -----> | Shift|  F9  |  F10 |  F11 |  F12 |      |      |      |   1  |   2  |   3  |Shift | ------> Tap for )
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for [{ ----> | GUI  | Alt  | ,<   |Super |Lower |    Delete   |Raise |  00  |   0  |AltGr | GUI  | ------> Tap for ]}
 *                  `-----------------------------------------------------------------------------------'
 *                          /                                                               \
 *                         /__ Tap for Home                                                 \__ Tap for End
 *
 */
[RAISE_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________RAISE_L1__________________, _________________RAISE_R1__________________, _______,
    _______, _________________RAISE_L2__________________, _________________RAISE_R2__________________, _______,
    _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, _______,
    _______, _______, _______, _______, _______,  KC_DEL,  KC_DEL, _______,  DOUBLE_0,  KC_0, _______, _______
),

/* GUI (mouse, media controls, brightness, window management)
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      | 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for [{ ----> | GUI  | Prev | Play | Next | Bri- |    Sleep    | Bri+ | Mute | Vol- | Vol+ | GUI  | ------> Tap for ]}
 *                  `-----------------------------------------------------------------------------------'
 *                          
 */
[GUI_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________KBD_L1___________________, __________________KBD_R1___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L2___________________, __________________KBD_R2___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L3___________________, __________________KBD_R3___________________, XXXXXXX,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_SLEP, KC_SLEP, KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU, _______
),

/* Keyboard (reset, debug mode, and other things)
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  |      | Reset| Debug|      |      |      |      |      |      |      |      | KBRD | ------> Tap for =+
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      | 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |             |      |      |      |      |      | 
 *                  `-----------------------------------------------------------------------------------'
 *                         
 */
[KEYBOARD_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________KBD_L1___________________, __________________KBD_R1___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L2___________________, __________________KBD_R2___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L3___________________, __________________KBD_R3___________________, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)

};
