/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#include "drashna.h"

// clang-format off
#define LAYOUT_4x6_right_wrapper(...) LAYOUT_4x6_right(__VA_ARGS__)
#define LAYOUT_4x6_right_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_4x6_right_wrapper( \
     SH_TT,   K01,    K02,      K03,     K04,     K05,                K06,     K07,     K08,     K09,     K0A,     SH_TT, \
     LALT_T(KC_TAB), K11, K12,  K13,     K14,     K15,                K16,     K17,     K18,     K19,     K1A,     RALT_T(K1B), \
     OS_LSFT, CTL_T(K21), K22,  K23,     K24,     K25,                K26,     K27,     K28,     K29, RCTL_T(K2A), OS_RSFT, \
                       OS_LGUI, OS_LALT,                                                OS_RGUI, OS_RALT, \
                                KC_PSCR, KC_GRV,                                        MEH_T(KC_BTN3),  \
                                         KC_SPC,  OS_LGUI,                     KC_ENT,  \
                                         BK_LWER, TT(_MOUSE),      TT(_MOUSE), DL_RAIS  \
  )
#define LAYOUT_base_wrapper(...)       LAYOUT_4x6_right_base(__VA_ARGS__)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT_LAYER_1] = LAYOUT_base_wrapper(
        _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,
        _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,
        _________________QWERTY_L3_________________, _________________QWERTY_R3_________________
    ),

    [_DEFAULT_LAYER_2] = LAYOUT_base_wrapper(
        ______________COLEMAK_MOD_DH_L1____________, ______________COLEMAK_MOD_DH_R1____________,
        ______________COLEMAK_MOD_DH_L2____________, ______________COLEMAK_MOD_DH_R2____________,
        ______________COLEMAK_MOD_DH_L3____________, ______________COLEMAK_MOD_DH_R3____________
    ),
    [_DEFAULT_LAYER_3] = LAYOUT_base_wrapper(
        _________________COLEMAK_L1________________, _________________COLEMAK_R1________________,
        _________________COLEMAK_L2________________, _________________COLEMAK_R2________________,
        _________________COLEMAK_L3________________, _________________COLEMAK_R3________________
    ),

    [_DEFAULT_LAYER_4] = LAYOUT_base_wrapper(
        _________________DVORAK_L1_________________, _________________DVORAK_R1_________________,
        _________________DVORAK_L2_________________, _________________DVORAK_R2_________________,
        _________________DVORAK_L3_________________, _________________DVORAK_R3_________________
    ),

    [_MOUSE] = LAYOUT_4x6_right(
        _______, _______, _______, _______, _______, _______,                        KC_WH_U, _______, _______, _______, DPI_CONFIG, _______,
        _______, _______, _______, _______, _______, _______,                        KC_WH_D, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN6, _______,
        _______, _______, _______, _______, _______, _______,                        KC_BTN7, KC_BTN4, KC_BTN5, KC_BTN8, _______, _______,
                          _______, _______,                                                            _______, _______,
                                            _______, _______,                                 _______,
                                                     _______, _______,               _______,
                                                     _______, _______,      _______, _______
    ),
    [_GAMEPAD] = LAYOUT_4x6_right(
        KC_F1,   KC_K,    KC_Q,    KC_W,    KC_E,    KC_R,                           _______, _______, _______, _______, _______, _______,
        KC_TAB,  KC_G,    KC_A,    KC_S,    KC_D,    KC_F,                           _______, _______, _______, _______, _______, _______,
        KC_LCTL, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_H,                           _______, _______, _______, _______, _______, _______,
                          KC_I,    KC_T,                                                               TG_GAME, KC_NO,
                                            KC_V,    KC_O,                                    _______,
                                                     KC_SPC,  KC_P,                  _______,
                                                     KC_H,    KC_LGUI,      _______, _______
    ),
    [_DIABLO] = LAYOUT_4x6_right(
        KC_TAB,  KC_S,    KC_I,    KC_F,    KC_M,    KC_T,                           _______, _______, _______, _______, _______, _______,
        KC_Q,    KC_1,    KC_2,    KC_3,    KC_4,    KC_G,                           _______, _______, _______, _______, _______, _______,
        KC_LCTL, KC_D3_1, KC_D3_2, KC_D3_3, KC_D3_4, KC_Z,                           _______, _______, _______, _______, _______, _______,
                          KC_F,    KC_L,                                                               KC_NO,   TG_DBLO,
                                    KC_DIABLO_CLEAR, KC_F,                                    _______,
                                               SFT_T(KC_SPC), KC_J,                  _______,
                                               ALT_T(KC_Q),   KC_LGUI,      _______, _______
    ),
    [_LOWER] = LAYOUT_4x6_right_wrapper(
        KC_F12,  _________________LOWER_L1__________________,                        _________________LOWER_R1__________________, KC_F11,
        _______, _________________LOWER_L2__________________,                        _________________LOWER_R2__________________, KC_PIPE,
        _______, _________________LOWER_L3__________________,                        _________________LOWER_R3__________________, _______,
                          _______, _______,                                                          _______, _______,
                                            _______, _______,                               _______,
                                                     _______, _______,             _______,
                                                     _______, _______,    _______, _______
    ),
    [_RAISE] = LAYOUT_4x6_right_wrapper(
        KC_F12,  _________________RAISE_L1__________________,                      _________________RAISE_R1__________________, KC_F11,
        _______, _________________RAISE_L2__________________,                      _________________RAISE_R2__________________, KC_BSLS,
        _______, _________________RAISE_L3__________________,                      _________________RAISE_R3__________________, _______,
                          _______, _______,                                                          _______, _______,
                                            _______, _______,                               _______,
                                                     _______, _______,             _______,
                                                     _______, _______,    _______, _______
    ),
    [_ADJUST] = LAYOUT_4x6_right_wrapper(
        KC_MAKE, _________________ADJUST_L1_________________,                      _________________ADJUST_R1_________________, KC_RST,
        VRSN,    _________________ADJUST_L2_________________,                      _________________ADJUST_R2_________________, EEP_RST,
        UC_MOD,  _________________ADJUST_L3_________________,                      _________________ADJUST_R3_________________, TG_MODS,
                          HPT_DWLI, HPT_DWLD,                                                        TG_GAME, TG_DBLO,
                                            HPT_TOG, HPT_BUZ,                               KC_NUKE,
                                                     _______, _______,             _______,
                                                     _______, _______,    KC_NUKE, _______
    ),
};
// clang-format on

#ifdef POINTING_DEVICE_ENABLE
static uint16_t mouse_timer           = 0;
static uint16_t mouse_debounce_timer  = 0;
static uint8_t  mouse_keycode_tracker = 0;
bool            tap_toggling          = false;

void process_mouse_user(report_mouse_t* mouse_report, int16_t x, int16_t y) {
    if ((x || y) && timer_elapsed(mouse_timer) > 125) {
        mouse_timer = timer_read();
        if (!layer_state_is(_MOUSE) && !(layer_state_is(_GAMEPAD) || layer_state_is(_DIABLO)) && timer_elapsed(mouse_debounce_timer) > 125) {
            layer_on(_MOUSE);
        }
    }

#    ifdef TAPPING_TERM_PER_KEY
    if (timer_elapsed(mouse_debounce_timer) > get_tapping_term(KC_BTN1, NULL)
#    else
    if (timer_elapsed(mouse_debounce_timer) > TAPPING_TERM
#    endif
        || (layer_state_is(_GAMEPAD) || layer_state_is(_DIABLO))) {
        mouse_report->x = x;
        mouse_report->y = y;
    }
#    ifdef OLED_DRIVER_ENABLE
    if (x || y) oled_timer = timer_read32();
#    endif
}

void matrix_scan_keymap(void) {
    if (timer_elapsed(mouse_timer) > 650 && layer_state_is(_MOUSE) && !mouse_keycode_tracker && !tap_toggling) {
        layer_off(_MOUSE);
    }
    if (tap_toggling) {
        if (!layer_state_is(_MOUSE)) {
            layer_on(_MOUSE);
        }
    }
}

bool process_record_keymap(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case TT(_MOUSE):
            {
                if (record->event.pressed) {
                    mouse_keycode_tracker++;
                } else {
#    if TAPPING_TOGGLE != 0
                    if (record->tap.count == TAPPING_TOGGLE) {
                        tap_toggling ^= 1;
#        if TAPPING_TOGGLE == 1
                        if (!tap_toggling) mouse_keycode_tracker -= record->tap.count + 1;
#        else
                        if (!tap_toggling) mouse_keycode_tracker -= record->tap.count;
#        endif
                    } else {
                        mouse_keycode_tracker--;
                    }
#    endif
                }
                mouse_timer = timer_read();
                break;
            }
        case MO(_MOUSE):
        case DPI_CONFIG:
        case KC_MS_UP ... KC_MS_WH_RIGHT:
            record->event.pressed ? mouse_keycode_tracker++ : mouse_keycode_tracker--;
            mouse_timer = timer_read();
            break;
        default:
            if (layer_state_is(_MOUSE) && !mouse_keycode_tracker) {
                layer_off(_MOUSE);
            }
            mouse_keycode_tracker = 0;
            mouse_debounce_timer  = timer_read();
            break;
    }
    return true;
}

layer_state_t layer_state_set_keymap(layer_state_t state) {
    if (layer_state_cmp(state, _GAMEPAD) || layer_state_cmp(state, _DIABLO)) {
        state |= (1UL << _MOUSE);
    }
    return state;
}
#endif

void matrix_init_keymap(void) {
#ifdef AUDIO_ENABLE
    extern audio_config_t audio_config;

    if (!is_keyboard_master()) {
        audio_stop_all();
        audio_config.enable = false;
    }
#endif
}

void keyboard_post_init_keymap(void) { matrix_init_keymap(); }
