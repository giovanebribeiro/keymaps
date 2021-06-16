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
 *                  ,-----------------------------------------------------------------------------------.
 *                  | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for Esc ---> | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ç  | Ctrl | ------> Tap for Enter 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 * Tap for ( -----> | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift | ------> Tap for )
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |  [{  |Hyper | ,<   |Super |Lower |    Space    |Raise |Super | .>   |Hyper |  ]}  |
 *                  `-----------------------------------------------------------------------------------'
 *                          /                                                               \
 *                         /__ Tap for Home                                                 \__ Tap for End
 *
 */
[QWERTY_LAYER] = LAYOUT_planck_grid_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
    CTL_ESC, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, CTL_ENT,
    KC_LSPO, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSPC,
    KC_LBRC, HYPER_L, KC_COMM, KC_LGUI, XXXXXXX,   KC_SPC,  KC_SPC,  XXXXXXX,   KC_RGUI, KC_DOT,  HYPER_R, KC_RBRC
)

};
