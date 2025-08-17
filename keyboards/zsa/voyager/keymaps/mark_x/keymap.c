#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};



#define DUAL_FUNC_0 LT(11, KC_F14)
#define DUAL_FUNC_1 LT(3, KC_T)
#define DUAL_FUNC_2 LT(12, KC_Q)
#define DUAL_FUNC_3 LT(6, KC_T)
#define DUAL_FUNC_4 LT(1, KC_F14)
#define DUAL_FUNC_5 LT(1, KC_T)
#define DUAL_FUNC_6 LT(8, KC_E)
#define DUAL_FUNC_7 LT(3, KC_X)
#define DUAL_FUNC_8 LT(10, KC_O)
#define DUAL_FUNC_9 LT(15, KC_H)
#define DUAL_FUNC_10 LT(12, KC_F13)
#define DUAL_FUNC_11 LT(10, KC_F16)
#define DUAL_FUNC_12 LT(7, KC_F1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    ST_MACRO_0,     KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,
    KC_NO,          UK_Q,           UK_W,           LT(4, UK_F),    LT(3, UK_P),    UK_B,                                           UK_J,           LT(7, UK_L),    UK_U,           UK_Y,           UK_QUOT,        KC_NO,
    TG(6),          UK_A,           LT(8, UK_R),    LT(9, UK_S),    LT(10, UK_T),   UK_G,                                           UK_M,           LT(5, UK_N),    UK_E,           UK_I,           UK_O,           KC_NO,
    KC_LEFT_CTRL,   MT(MOD_LALT, UK_Z),MT(MOD_LSFT, UK_X),MT(MOD_RCTL, UK_C),UK_D,           UK_V,                                           UK_K,           UK_H,           MT(MOD_RCTL, UK_COMM),MT(MOD_LSFT, UK_DOT),MT(MOD_LALT, UK_SLSH),KC_NO,
                                                    OSL(2),         OSL(1),                                         OSL(1),         KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(UK_Q),     LSFT(UK_W),     DUAL_FUNC_0,    DUAL_FUNC_1,    LSFT(UK_B),                                     LSFT(UK_J),     DUAL_FUNC_8,    LSFT(UK_U),     LSFT(UK_Y),     UK_QUOT,        KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(UK_A),     DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    LSFT(UK_G),                                     LSFT(UK_M),     DUAL_FUNC_9,    LSFT(UK_E),     LSFT(UK_I),     LSFT(UK_O),     KC_TRANSPARENT,
    KC_TRANSPARENT, DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    LSFT(UK_D),     LSFT(UK_V),                                     LSFT(UK_K),     LSFT(UK_H),     MT(MOD_RCTL, UK_COMM),MT(MOD_LSFT, UK_DOT),MT(MOD_LALT, UK_SLSH),KC_TRANSPARENT,
                                                    TO(0),          CW_TOGG,                                        CW_TOGG,        KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(UK_S)),KC_DELETE,      KC_ENTER,       ST_MACRO_1,                                     UK_PLUS,        DUAL_FUNC_10,   KC_BSPC,        UK_RPRN,        UK_DQUO,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_ESCAPE,      KC_LEFT_ALT,    LALT(KC_TAB),   KC_TRANSPARENT,                                 UK_UNDS,        DUAL_FUNC_11,   UK_QUES,        UK_COLN,        KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  KC_TAB,         ST_MACRO_2,                                     UK_EQL,         UK_GRV,         MT(MOD_RCTL, UK_MINS),DUAL_FUNC_12,   MT(MOD_LALT, UK_SCLN),KC_TRANSPARENT,
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TAB
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, UK_LPRN,        KC_BSPC,        UK_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 UK_PIPE,        UK_LCBR,        UK_AMPR,        UK_RCBR,        KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, UK_LBRC,        RCTL(UK_RBRC),  UK_RBRC,        UK_SCLN,        KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 UK_BSLS,        UK_DLR,         KC_BSPC,        UK_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 UK_PERC,        UK_LABK,        UK_EQL,         UK_RABK,        KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 UK_PND,         UK_HASH,        UK_TILD,        UK_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(UK_S)),KC_DELETE,      KC_ENTER,       ST_MACRO_3,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_ESCAPE,      KC_LEFT_ALT,    LALT(KC_TAB),   TG(6),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  KC_TAB,         ST_MACRO_4,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    QK_LLCK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RCTL(UK_Q),     RCTL(UK_W),     RCTL(UK_F),     RCTL(UK_P),     RCTL(KC_B),                                     RCTL(UK_J),     RCTL(UK_L),     RCTL(UK_U),     RCTL(UK_Y),     RCTL(UK_QUOT),  KC_TRANSPARENT,
    KC_TRANSPARENT, RCTL(UK_A),     RCTL(UK_R),     RCTL(UK_S),     RCTL(UK_T),     KC_TRANSPARENT,                                 RCTL(UK_M),     RCTL(UK_N),     RCTL(UK_E),     RCTL(UK_I),     RCTL(UK_O),     KC_TRANSPARENT,
    KC_TRANSPARENT, RCTL(UK_Z),     RCTL(UK_X),     RCTL(UK_C),     RCTL(UK_D),     RCTL(UK_V),                                     RCTL(UK_K),     RCTL(UK_H),     RCTL(UK_COMM),  RCTL(UK_DOT),   RCTL(UK_SLSH),  KC_TRANSPARENT,
                                                    TO(0),          OSM(MOD_LSFT),                                  OSM(MOD_LSFT),  KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(UK_4),     LGUI(UK_5),     LGUI(UK_6),     ST_MACRO_5,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_TAB),   LGUI(UK_1),     LGUI(UK_2),     LGUI(UK_3),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(UK_7),     LGUI(UK_8),     LGUI(UK_9),     ST_MACRO_6,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     LSFT(KC_HOME),  KC_BSPC,        LSFT(KC_END),   KC_DELETE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        LSFT(RCTL(KC_LEFT)),RCTL(KC_BSPC),  LSFT(RCTL(KC_RIGHT)),LSFT(KC_ENTER), KC_TRANSPARENT,
                                                    QK_LLCK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_BSPC,        KC_END,         KC_DELETE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        RCTL(KC_LEFT),  RCTL(KC_BSPC),  RCTL(KC_RIGHT), RCTL(KC_ENTER), KC_TRANSPARENT,
                                                    QK_LLCK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE
  ),
  [10] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, UK_4,           UK_5,           UK_6,           UK_PND,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_RIGHT_CTRL,  KC_TRANSPARENT, KC_TRANSPARENT,                                 UK_PERC,        UK_1,           UK_2,           UK_3,           UK_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, UK_7,           UK_8,           UK_9,           UK_SLSH,        KC_TRANSPARENT,
                                                    QK_LLCK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_L)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_LEFT))));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_LEFT))));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_RCTL(SS_TAP(X_LEFT))));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_F));
        } else {
          unregister_code16(LSFT(UK_F));
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          layer_off(4);
        }
      }
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_P));
        } else {
          unregister_code16(LSFT(UK_P));
        }
      } else {
        if (record->event.pressed) {
          layer_on(3);
        } else {
          layer_off(3);
        }
      }
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_R));
        } else {
          unregister_code16(LSFT(UK_R));
        }
      } else {
        if (record->event.pressed) {
          layer_on(8);
        } else {
          layer_off(8);
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_S));
        } else {
          unregister_code16(LSFT(UK_S));
        }
      } else {
        if (record->event.pressed) {
          layer_on(9);
        } else {
          layer_off(9);
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_T));
        } else {
          unregister_code16(LSFT(UK_T));
        }
      } else {
        if (record->event.pressed) {
          layer_on(10);
        } else {
          layer_off(10);
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_Z));
        } else {
          unregister_code16(LSFT(UK_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_X));
        } else {
          unregister_code16(LSFT(UK_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_C));
        } else {
          unregister_code16(LSFT(UK_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_CTRL);
        } else {
          unregister_code16(KC_RIGHT_CTRL);
        }
      }
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_L));
        } else {
          unregister_code16(LSFT(UK_L));
        }
      } else {
        if (record->event.pressed) {
          layer_on(5);
        } else {
          layer_off(5);
        }
      }
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(UK_N));
        } else {
          unregister_code16(LSFT(UK_N));
        }
      } else {
        if (record->event.pressed) {
          layer_on(7);
        } else {
          layer_off(7);
        }
      }
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(UK_LPRN);
        } else {
          unregister_code16(UK_LPRN);
        }
      } else {
        if (record->event.pressed) {
          layer_on(7);
        } else {
          layer_off(7);
        }
      }
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(UK_EXLM);
        } else {
          unregister_code16(UK_EXLM);
        }
      } else {
        if (record->event.pressed) {
          layer_on(5);
        } else {
          layer_off(5);
        }
      }
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(UK_AT);
        } else {
          unregister_code16(UK_AT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


