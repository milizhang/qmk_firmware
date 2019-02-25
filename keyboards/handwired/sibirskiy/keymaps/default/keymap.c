#include QMK_KEYBOARD_H

#define _______ KC_TRNS

#define _BL 0
#define _MK 1
#define _FL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_tkl_unix(
        MO(_FL),           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SLCK, KC_BRK,  \
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_DEL,  KC_END,  KC_PGDN, \
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                  \
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                   KC_UP,            \
                  KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, KC_APP,  KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [_MK] = LAYOUT_tkl_unix(
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_BTN1,   KC_MS_UP,     KC_MS_BTN2, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MS_LEFT,   KC_MS_DOWN,   KC_MS_RIGHT, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                                     \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                   _______,          \
                 _______, _______,                            _______,                            _______, _______, _______, _______,          _______, _______, _______  \
    ),
    [_FL] = LAYOUT_tkl_unix(
        _______,          OUT_AUTO,OUT_USB, OUT_BT , _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_CAPS, TG(_MK), \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MSTP, KC_MUTE, KC_MPLY, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                                     \
        _______,          _______, _______, KC_CALC, _______, _______, _______, _______, _______, _______, _______,          _______,                   KC_VOLU,          \
                 _______, _______,                            _______,                            _______, _______, _______, _______,          KC_MPRV, KC_VOLD, KC_MNXT  \
    ),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    return MACRO_NONE;
};
