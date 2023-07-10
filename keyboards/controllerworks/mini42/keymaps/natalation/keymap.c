#include QMK_KEYBOARD_H
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN 1
#define _NUM 2
#define _NAV 3

// For BASE layer
#define OSM_LCTL OSM(MOD_LCTL)
#define OSM_RCTL OSM(MOD_RCTL)
#define OSM_LALT  OSM(MOD_LALT)
#define OSM_RALT  OSM(MOD_RALT)
#define FN_CAPS  LT(_FN, KC_CAPS)
#define NUM_ETR  LT(_NUM, KC_ENTER)
#define NAV_TAB  LT(_NAV, KC_TAB)
#define T_LSHFT  LSFT_T(KC_T)
#define N_RSHFT  RSFT_T(KC_N)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_W,    KC_L,    KC_Y,    KC_P,    KC_B,                         KC_Z,    KC_F,    KC_O,    KC_U, KC_QUOT, KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LALT,    KC_C,    KC_R,    KC_S, T_LSHFT,    KC_G,                         KC_M, N_RSHFT,    KC_E,    KC_I,    KC_A,OSM_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LCTL,    KC_Q,    KC_J,    KC_V,    KC_D,    KC_K,                         KC_X,    KC_H, KC_COMM,  KC_DOT, KC_QUES,OSM_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          FN_CAPS, NAV_TAB,  KC_SPC,    KC_BSPC, NUM_ETR,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

  [_FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_VOLD, KC_VOLU, KC_MPLY, KC_MRWD, KC_MFFD, KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LALT,   KC_NO,   KC_NO,   KC_NO, KC_LSFT, KC_MUTE,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO,  KC_TAB,  KC_SPC,    KC_BSPC,KC_ENTER, KC_DEL
                                      //`--------------------------'  `--------------------------'
    ),


  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_GRV,    KC_6,   KC_7 ,    KC_8,    KC_9,    KC_0,                        KC_NO, KC_RSFT,   KC_NO,   KC_NO,   KC_NO,OSM_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSLS, KC_SCLN, KC_LBRC, KC_RBRC, KC_MINS,  KC_EQL,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,OSM_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_CAPS,  KC_TAB,  KC_SPC,    KC_BSPC,   KC_NO,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_PSCR,                      KC_PSTE, KC_COPY,  KC_CUT, KC_UNDO, KC_AGIN, KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LALT,   KC_NO,   KC_NO,   KC_NO, KC_LSFT, KC_WHOM,                      KC_FIND, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_WREF,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     OSM_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_WSCH, KC_WBAK, KC_PGDN, KC_PGUP, KC_WFWD,  KC_INS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_CAPS,   KC_NO,  KC_SPC,    KC_BSPC,KC_ENTER,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  )
};


