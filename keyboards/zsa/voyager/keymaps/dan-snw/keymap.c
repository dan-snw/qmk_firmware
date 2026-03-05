#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  OSL2_STICKY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    RCTL(KC_L),     BRI_DOWN,       BRI_UP,               KC_NO,              KC_NO,              KC_NO,                          KC_NO,          KC_NO,              KC_NO,       KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP, KC_AUDIO_MUTE,
    OSM(MOD_LGUI),  KC_Q,           KC_W,                 KC_F,               KC_P,               KC_B,                           KC_J,           LT(3, KC_L),        KC_U,        KC_Y,                 KC_QUOTE,        KC_NO,
    OSM(MOD_RCTL),  KC_A,           KC_R,                 KC_S,               HYPR_T(KC_T),       KC_G,                           KC_M,           HYPR_T(KC_N),       KC_E,        KC_I,                 KC_O,            KC_NO,
    TT(3),          KC_Z,           MT(MOD_LGUI, KC_X),   MT(MOD_LALT, KC_C), MT(MOD_RCTL, KC_D), KC_V,                           KC_K,           MT(MOD_RCTL, KC_H), OSL(1),      MT(MOD_LGUI, KC_DOT), KC_SLASH,        KC_NO,
                                                                              OSL2_STICKY,        OSM(MOD_LSFT),                  OSM(MOD_LSFT),  KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    TRA,            TRA,            TRA,                  TRA,                TRA,                TRA,                            TRA,            TRA,                TRA,         TRA,                  TRA,             TRA,  
    TRA,            KC_PIPE,        KC_LABK,              KC_EQUAL,           KC_RABK,            KC_AMPR,                        KC_CIRC,        KC_RCBR,            KC_RPRN,     KC_RBRC,              KC_BSLS,         TRA,  
    TRA,            KC_SCLN,        KC_COLN,              KC_QUES,            KC_EXLM,            KC_UNDS,                        TRA,            KC_LCBR,            KC_LPRN,     KC_LBRC,              RCTL(KC_RBRC),   TRA,  
    TRA,            LALT(KC_3),     KC_AT,                KC_MINUS,           KC_GRAVE,           KC_PLUS,                        KC_ASTR,        TRA,                KC_COMMA,    TRA,                  KC_TILD,         TRA,  
                                                                              RCTL(KC_SPACE),     OSM(MOD_LGUI),                  OSM(MOD_RCTL),  ST_MACRO_0
  ),
  [2] = LAYOUT_voyager(
    TRA,            TRA,            TRA,                  TRA,                TRA,                TRA,                            TRA,            TRA,                TRA,          TRA,                 TRA,             TRA,  
    TRA,            KC_COMMA,       KC_4,                 KC_5,               KC_6,               UK_PND,                         LGUI(KC_LEFT),  LALT(KC_LEFT),      KC_BSPC,      LALT(KC_RIGHT),      LGUI(KC_RIGHT),  TRA,     
    TRA,            KC_0,           MT(MOD_LGUI, KC_1),   MT(MOD_LSFT, KC_2), MT(MOD_RCTL, KC_3), KC_DLR,                         KC_LEFT,        KC_DOWN,            KC_UP,        KC_RIGHT,            KC_ENTER,        TRA,  
    TRA,            KC_DOT,         KC_7,                 KC_8,               KC_9,               KC_PERC,                        LALT(KC_BSPC),  KC_TAB,             RCTL(KC_TAB), KC_LEFT_GUI,         RCTL(KC_ENTER),  TRA,  
                                                                              TRA,                KC_LEFT_SHIFT,                  KC_LEFT_ALT,    KC_ESCAPE
  ),
  [3] = LAYOUT_voyager(
    TRA,            TRA,            TRA,                  TRA,                TRA,                TRA,                            TRA,            TRA,                TRA,           TRA,                TRA,             TRA,  
    TRA,            RCTL(KC_X),     LGUI(LSFT(RCTL(KC_4))),KC_BSPC,           KC_ENTER,           RCTL(KC_A),                     TRA,            TRA,                TRA,           TRA,                TRA,             TRA,  
    TRA,            KC_LEFT_GUI,    KC_ESCAPE,            KC_LEFT_ALT,        MT(MOD_LSFT, KC_TAB),RCTL(KC_C),                    TRA,            TRA,                TRA,           TRA,                TRA,             TRA,  
    TRA,            KC_DELETE,      KC_LEFT_SHIFT,        KC_LEFT_GUI,        LGUI(KC_TAB),       KC_V,                           TRA,            TRA,                TRA,           TRA,                TRA,             TRA,  
                                                                              TRA,                TRA,                            TRA,            TRA
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'R', 'R'
);




extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255} },

    [1] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [2] = { {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [3] = { {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204}, {210,218,204} },

    [4] = { {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

static bool osl2_clear_on_release = false;
static bool layer2_sticky_active = false;
static bool osl2_held = false;
static uint16_t osl2_press_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(1) SS_TAP(X_SPACE));
            }
            break;

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;

        case OSL2_STICKY:
          if (record->event.pressed) {
            // On press: always turn Layer 2 on and mark held
            osl2_held = true;
            osl2_press_timer = timer_read();
            layer_on(2);
          }
          else {
            // On release: decide tap vs hold by time
            osl2_held = false;
            uint16_t elapsed = timer_elapsed(osl2_press_timer);
            if (elapsed < TAPPING_TERM) {
              // Tap: toggle sticky
              if (layer2_sticky_active) {
                layer2_sticky_active = false;
                layer_off(2);
              } else {
                layer2_sticky_active = true;
                // Keep layer 2 on (already on from press)
              }
            } else {
              // Hold: if not sticky, turn layer off on release
              if (!layer2_sticky_active) {
                layer_off(2);
              }
            }
          }
          return false;
    }

  if (record->event.pressed) {
    // If our sticky Layer 2 is active, keep it for digits; clear for others on release
    if (layer2_sticky_active) {
      switch (keycode) {
        case KC_0:
        case KC_1:
        case KC_2:
        case KC_3:
        case KC_4:
        case KC_5:
        case KC_6:
        case KC_7:
        case KC_8:
        case KC_9:
        case KC_DOT:
        case KC_COMMA:
        case UK_PND:
        case KC_PERC:
        case KC_DLR:
        case KC_LEFT_ALT:
        case MT(MOD_LGUI, KC_1):
        case MT(MOD_LSFT, KC_2):
        case MT(MOD_RCTL, KC_3):
          // Keep layer 2 active for digits
          break;
        default:
          // Non-digit: clear layer 2 after this key is released
          osl2_clear_on_release = true;
          break;
      }
    }
  }

  // On release, if marked, clear sticky layer 2
  if (!record->event.pressed) {
    if (osl2_clear_on_release) {
      osl2_clear_on_release = false;
      layer2_sticky_active = false;
      layer_off(2);
    }
  }

    return true;
}
