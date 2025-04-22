#include <stdint.h>

#include QMK_KEYBOARD_H

enum layer_names { BASE, SYM, NUM, NAV, FUN, MOUSE, NOHOLD, QWERTY };

#ifdef KEYBOARD_crkbd
    #include "3x6_3_config.h"
#endif
#ifdef KEYBOARD_bastardkb_tbkmini
    #include "3x6_3_config.h"
#endif
#ifdef KEYBOARD_ferris
    #include "layouts/3x5_2.c"
#endif
#ifdef KEYBOARD_bastardkb_dilemma
    #include "layouts/3x5_3.c"
#endif

const uint16_t PROGMEM pipe_combo[]       = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM esc_combo[]        = {LGUI_T(KC_S), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM esc_combo_nohold[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM nohold_enable[]    = {KC_SCLN, LCTL_T(KC_I), KC_MINUS, COMBO_END};
const uint16_t PROGMEM nohold_disable[]   = {KC_SCLN, KC_I, KC_MINUS, COMBO_END};
const uint16_t PROGMEM qwerty_enable[]    = {KC_Q, KC_SCLN, LCTL_T(KC_I), KC_MINUS, COMBO_END};
const uint16_t PROGMEM qwerty_disable[]   = {KC_P, KC_ESC, KC_SLASH, COMBO_END};

// clang-format off
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(pipe_combo, KC_PIPE),
    COMBO(nohold_enable, DF(NOHOLD)),
    COMBO(nohold_disable, DF(BASE)),
    COMBO(esc_combo_nohold, KC_ESC),
    COMBO(qwerty_enable, DF(QWERTY)),
    COMBO(qwerty_disable, DF(BASE))
};
// clang-format on

bool mouse1_pressed = false;
bool mouse2_pressed = false;
bool mouse3_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_BTN1:
            mouse1_pressed = record->event.pressed;
            break;
        case KC_BTN2:
            mouse2_pressed = record->event.pressed;
            break;
        case KC_BTN3:
            mouse3_pressed = record->event.pressed;
            break;
        case LALT_T(LGUI(KC_4)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_4));
                return false;
            }
            break;
        case LGUI_T(LGUI(KC_5)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_5));
                return false;
            }
            break;
        case LSFT_T(LGUI(KC_6)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_6));
                return false;
            }
            break;
    }
    return true;
}

#ifdef POINTING_DEVICE_ENABLE
    #include "pointing_device.h"
    #define SCROLL_DIVISOR_H 20.0
    #define SCROLL_DIVISOR_V 20.0
    #define DEADZONE 2

// Hack since this is not exposed by driver code
void cirque_pinnacle_enable_cursor_glide(bool enable);

// Move accumulation when in deadzone
int8_t move_accumulated_x = 0;
int8_t move_accumulated_y = 0;

// Variables to store accumulated scroll values
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    pointing_device_task_auto_mouse(mouse_report);
    if (layer_state_is(NAV) || layer_state_is(NUM)) {
        if (mouse_report.x == 0 && mouse_report.y == 0) {
            return mouse_report;
        }
        cirque_pinnacle_enable_cursor_glide(true);
        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        scroll_accumulated_v += (float)mouse_report.y / SCROLL_DIVISOR_V;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = -(int8_t)scroll_accumulated_h;
        mouse_report.v = (int8_t)scroll_accumulated_v;

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int8_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int8_t)scroll_accumulated_v;

        mouse_report.x = 0;
        mouse_report.y = 0;

        return mouse_report;
    }
    cirque_pinnacle_enable_cursor_glide(false);

    // Apply deadzone if any button is pressed
    if (mouse1_pressed || mouse2_pressed || mouse3_pressed) {
        // Accumulate movement
        move_accumulated_x += mouse_report.x;
        move_accumulated_y += mouse_report.y;

        int8_t move_x = move_accumulated_x;
        int8_t move_y = move_accumulated_y;

        move_accumulated_x -= move_x;
        move_accumulated_y -= move_y;

        // Apply deadzone after accumulation
        if (move_x > -DEADZONE && move_x < DEADZONE) {
            move_x = 0;
            move_accumulated_x += move_x;
        }
        if (move_y > -DEADZONE && move_y < DEADZONE) {
            move_y = 0;
            move_accumulated_y += move_y;
        }

        mouse_report.x = move_x;
        mouse_report.y = move_y;
    }

    return mouse_report;
}

void pointing_device_init_user(void) {
    set_auto_mouse_layer(MOUSE);
    set_auto_mouse_enable(true);
}

#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0: // Left-half encoder, mouse scroll.
            tap_code(clockwise ? KC_BRIU : KC_BRID);
            break;
        case 1: // Right-half encoder, volume control.
            tap_code(clockwise ? KC_AUDIO_VOL_UP : KC_AUDIO_VOL_DOWN);
            break;
    }
    return false;
}
#endif
