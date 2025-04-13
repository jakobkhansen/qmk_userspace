// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

// Mod taps
#undef TAPPING_TERM
#define TAPPING_TERM 190
#undef MIRYOKU_KLUDGE_THUMBCOMBOS

#undef QUICK_TAP_TERM
#define QUICK_TAP_TERM 80

// Caps word
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Combos
#define COMBO_COUNT 3
#define COMBO_TERM 20
#define EXTRA_SHORT_COMBOS

// Detect keyboard better
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#ifdef POINTING_DEVICE_ENABLE
    #undef POINTING_DEVICE_GESTURES_SCROLL_ENABLE
    #define CIRQUE_PINNACLE_TAP_ENABLE
    #define DILEMMA_MINIMUM_DEFAULT_DPI 150
    #define DILEMMA_AUTO_POINTER_LAYER_TRIGGER_ENABLE
    #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
    #define AUTO_MOUSE_TIME 350
    #define AUTO_MOUSE_THRESHOLD 0
    #define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#endif
