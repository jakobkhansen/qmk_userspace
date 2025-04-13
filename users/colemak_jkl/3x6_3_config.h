#pragma once

#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
  XXX, KC_Q,            KC_W,         KC_F,          KC_P,          KC_B,               KC_Y,  KC_J,          KC_K,          KC_L,          KC_SCLN, XXX,        \
  XXX, LCTL_T(KC_A),    LALT_T(KC_R), LGUI_T(KC_S),  LSFT_T(KC_T),  KC_G,               KC_H,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I), XXX,   \
  XXX, LT(U_FUN, KC_Z), KC_X,         KC_C,          KC_D,          KC_V,               KC_M,  KC_U,          KC_COMMA,      KC_DOT,        KC_MINUS, XXX,       \
                   LSFT_T(KC_TAB),    LT(U_NAV,KC_SPC), XXX,                     XXX, LT(U_NUM,KC_BSPC),    LT(U_SYM,KC_ENT)  \
)


#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
  XXX, KC_EXLM,  KC_AT,    KC_LBRC,  KC_RBRC,  KC_ASTR,        K05,  K06,           K07,          K08,          KC_COLN, XXX, \
  XXX, KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_EQL,         K15,  RSFT_T(KC_N),  LGUI_T(KC_E), LALT_T(KC_O), LCTL_T(KC_I), XXX, \
  XXX, KC_AMPR,  KC_HASH,  KC_LCBR,  KC_RCBR,  KC_DLR,         K25,  K26,           KC_LABK,      KC_RABK,      KC_UNDS, XXX,\
                            KC_QUES,  KC_SLSH, XXX,        XXX, K35,  K36  \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_TILD,  K01,  K02,  K03,  KC_PLUS,         K05,  K06,  K07,  K08,  KC_COLN,  XXX, \
XXX,  KC_GRV,   K11,  K12,  K13,  KC_EQL,          K15,  KC_RSFT,  KC_LGUI,  KC_LALT,  KC_LCTL,  XXX, \
XXX,  KC_CIRC,  K21,  K22,  K23,  KC_PERC,         K25,  K26,  KC_LABK,  KC_RABK,  K29,  XXX, \
                  KC_0,  KC_BSLS, XXX,         XXX, K35,  K36  \
)

#define MIRYOKU_LAYERMAPPING_NAV( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT_split_3x6_3( \
  XXX, XXX,     LGUI(KC_7),         LGUI(KC_8),         LGUI(KC_9),         XXX,  K05,     KC_DOWN,  KC_UP,   KC_RIGHT, K09, XXX,   \
  XXX, KC_LCTL, LALT_T(LGUI(KC_4)), LGUI_T(LGUI(KC_5)), LSFT_T(LGUI(KC_6)), XXX,  KC_LEFT, KC_VOLD,  KC_VOLU, K18,      K19,  XXX,  \
  XXX, XXX,     LGUI(KC_1),         LGUI(KC_2),         LGUI(KC_3),         XXX,  K25,     KC_BRID,  KC_BRIU, K28,      K29,  XXX,  \
                               XXX,        K33,                K34,  K35,     K36,      XXX         \
)

// Special layer which allows pressing cmd+num with one hand (switch workspace)
#define MIRYOKU_LAYERMAPPING_FUN( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT_split_3x6_3( \
  XXX, QK_BOOT,        KC_F7,          KC_F8,          KC_F9,         KC_F12,   XXX, XXX, XXX, XXX, XXX, XXX,   \
  XXX, LCTL_T(K10),    LALT_T(KC_F4),  LGUI_T(KC_F5),  LSFT_T(KC_F6), KC_F11,   XXX, XXX, XXX, XXX, XXX, XXX,  \
  XXX, K20,            KC_F1,          KC_F2,          KC_F3,         KC_F10,   XXX, XXX, XXX, XXX, XXX, XXX,   \
                                  XXX,            KC_BTN2,       KC_BTN1,  XXX, XXX, XXX              \
)
