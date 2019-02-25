#ifndef LATCHMUX_TEST_H
#define LATCHMUX_TEST_H

#include "quantum.h"


#define LAYOUT_tkl_unix( \
    K00,      K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K3D, K3E, K3F, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K4D, K4E, K4F, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3C,                     \
    K40,      K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,      K4B,           K4C,      \
         K50, K51,                K55,                K58, K59, K5A, K5B,      K5D, K5E, K5F  \
) { \
/*          0      1      2      3      4      5      6      7      8      9      A      B      C      D      E      F    */  \
/* 0 */   { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F   }, \
/* 1 */   { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   KC_NO }, \
/* 2 */   { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   KC_NO, KC_NO }, \
/* 3 */   { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D,   K3E,   K3F   }, \
/* 4 */   { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   K4C,   K4D,   K4E,   K4F   }, \
/* 5 */   { K50,   K51,   KC_NO, KC_NO, KC_NO, K55,   KC_NO, KC_NO, K58,   K59,   K5A,   K5B,   KC_NO, K5D,   K5E,   K5F   }  \
}


#endif
