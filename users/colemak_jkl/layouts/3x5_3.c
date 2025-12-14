#pragma once

#define XXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [BASE] = LAYOUT_split_3x5_3( \
        KC_Q,          KC_W,            KC_F,            KC_P,             KC_B,            KC_Y,  KC_J,          KC_K,          KC_L,          KC_SCLN,       \
        LCTL_T(KC_A),  LALT_T(KC_R),    LGUI_T(KC_S),    LSFT_T(KC_T),     KC_G,            KC_H,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),  \
        LT(FUN,KC_Z),  KC_X,            KC_C,            KC_D,             KC_V,            KC_M,  KC_U,          KC_COMMA,      KC_DOT,        KC_MINUS,      \
        XXX,           LSFT_T(KC_TAB),  LT(NAV,KC_SPC),  LT(NUM,KC_BSPC),  LT(SYM,KC_ENT),  XXX    \
    ),
    [SYM] = LAYOUT_split_3x5_3( \
        KC_EXLM,  KC_AT,    KC_LBRC,  KC_RBRC,  KC_ASTR,  XXX,      KC_DOWN,       KC_UP,         KC_RIGHT,      KC_COLN,       \
        KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_EQL,   KC_LEFT,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),  \
        KC_AMPR,  KC_HASH,  KC_LCBR,  KC_RCBR,  KC_DLR,   XXX,      XXX,           KC_LABK,       KC_RABK,       KC_UNDS,       \
        XXX,      KC_QUES,  KC_SLSH,  XXX,      XXX,      XXX       \
    ),
    [NUM] = LAYOUT_split_3x5_3( \
        KC_TILD,  KC_7,  KC_8,     KC_9,  KC_PLUS,  XXX,      KC_DOWN,       KC_UP,         KC_RIGHT,      KC_COLN,       \
        KC_GRV,   KC_4,  KC_5,     KC_6,  KC_EQL,   KC_LEFT,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),  \
        KC_CIRC,  KC_1,  KC_2,     KC_3,  KC_PERC,  XXX,      XXX,           KC_LABK,       KC_RABK,       KC_UNDS,       \
        XXX,      KC_0,  KC_BSLS,  XXX,   XXX,      XXX       \
    ),
    [NAV] = LAYOUT_split_3x5_3( \
        XXX,      LGUI(KC_7),          LGUI(KC_8),          LGUI(KC_9),          XXX,  XXX,      KC_DOWN,  KC_UP,    KC_RIGHT,  XXX,  \
        KC_LCTL,  LALT_T(LGUI(KC_4)),  LGUI_T(LGUI(KC_5)),  LSFT_T(LGUI(KC_6)),  XXX,  KC_LEFT,  KC_VOLD,  KC_VOLU,  XXX,       XXX,  \
        XXX,      LGUI(KC_1),          LGUI(KC_2),          LGUI(KC_3),          XXX,  XXX,      KC_BRID,  KC_BRIU,  XXX,       XXX,  \
        XXX,      XXX,                 XXX,                 XXX,                 XXX,  XXX       \
    ),
    [FUN] = LAYOUT_split_3x5_3( \
        QK_BOOT,      KC_F7,          KC_F8,          KC_F9,          KC_F12,  XXX,  XXX,  XXX,  XXX,  XXX,    \
        LCTL_T(XXX),  LALT_T(KC_F4),  LGUI_T(KC_F5),  LSFT_T(KC_F6),  KC_F11,  XXX,  XXX,  XXX,  XXX,  XXX,  \
        XXX,          KC_F1,          KC_F2,          KC_F3,          KC_F10,  XXX,  XXX,  XXX,  XXX,  XXX,         \
        XXX,          KC_LSFT,        XXX,            XXX,            XXX,     XXX   \
    ),
    // Auto-mouse layer
    [MOUSE] = LAYOUT_split_3x5_3( \
        KC_Q,             KC_W,          KC_F,             KC_P,             KC_B,            KC_Y,  KC_J,          KC_K,          KC_L,          KC_SCLN,       \
        LCTL_T(KC_A),     LALT_T(KC_R),  LGUI_T(KC_S),     LSFT_T(KC_T),     KC_G,            KC_H,  RSFT_T(KC_N),  LGUI_T(KC_E),  LALT_T(KC_O),  LCTL_T(KC_I),  \
        LT(FUN,KC_BTN3),  KC_X,          KC_C,             KC_D,             KC_V,            KC_M,  KC_U,          KC_COMMA,      KC_DOT,        KC_MINUS,      \
        XXX,              KC_BTN1,       LT(NAV,KC_BTN2),  LT(NUM,KC_BSPC),  LT(SYM,KC_ENT),  XXX    \

    ),
    // Disable most holds
    [NOHOLD] = LAYOUT_split_3x5_3( \
        KC_Q,          KC_W,            KC_F,    KC_P,     KC_B,            KC_Y,  KC_J,  KC_K,      KC_L,    KC_SCLN,   \
        KC_A,          KC_R,            KC_S,    KC_T,     KC_G,            KC_H,  KC_N,  KC_E,      KC_O,    KC_I,      \
        LCTL_T(KC_Z),  LALT_T(KC_X),    KC_C,    KC_D,     KC_V,            KC_M,  KC_U,  KC_COMMA,  KC_DOT,  KC_MINUS,  \
        XXX,           LSFT_T(KC_TAB),  KC_SPC,  KC_BSPC,  LGUI_T(KC_ENT),  XXX    \
    ),
    // QWERTY for somewhat capable gaming
    [QWERTY] = LAYOUT_split_3x5_3( \
        KC_Q,          KC_W,            KC_E,    KC_R,     KC_T,            KC_Y,  KC_U,  KC_I,      KC_O,    KC_P,      \
        KC_A,          KC_S,            KC_D,    KC_F,     KC_G,            KC_H,  KC_J,  KC_K,      KC_L,    KC_ESC,   \
        LCTL_T(KC_Z),  LALT_T(KC_X),    KC_C,    KC_V,     KC_B,            KC_N,  KC_M,  KC_COMMA,  KC_DOT,  KC_SLASH,  \
        XXX,           LSFT_T(KC_TAB),  KC_SPC,  KC_BSPC,  LGUI_T(KC_ENT),  XXX    \
    )
    // clang-format on
};
