#include "cloud.h"

//#ifdef ENCODER_ENABLE
//bool encoder_update_kb(uint8_t index, bool clockwise) {
//    if (!encoder_update_user(index, clockwise)) { return false; }
//    if (index == 0) {
//        if (clockwise) {
//            tap_code_delay(KC_VOLU, 10);
//        } else {
//            tap_code_delay(KC_VOLD, 10);
//        }
//    }
//    return true;
//}
//#endif /* ENCODER_ENABLE */