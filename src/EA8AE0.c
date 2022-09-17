#include "dead.h"
#include "common.h"
#include "effects.h"
#include "battle/battle.h"

// Copy of kzn_19 (C8DBB0.c)

#define NAMESPACE EA8AE0

extern s32 D_80248388[];
extern s32 D_80248380;
extern s32 D_80243DD8_EAC8B8;
extern s32 D_80243DDC_EAC8BC;
extern s32 func_802413C0_EA9EA0;
void func_8012DFE8(s32, UNK_FUN_ARG);

#include "world/common/atomic/TexturePan.inc.c"

#include "world/common/StarSpiritEffectFunc.inc.c"

static char* N(exit_str_0) = "kmr_23";
static char* N(exit_str_1) = "kzn_18";
static char* N(exit_str_2) = "kzn_20";

INCLUDE_ASM(s32, "EA8AE0", func_80240B00_EA95E0);

INCLUDE_ASM(s32, "EA8AE0", func_80240BD4_EA96B4);

// INCLUDE_ASM(s32, "EA8AE0", func_80240CD8_EA97B8);
void func_80240CD8_EA97B8(Evt *script, s32 isInitialCall) {
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s0_3;
    s32 *temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s2;
    s32 temp_s3;

    temp_s0 = script->ptrReadPos;
    temp_s0_2 = temp_s0 + 4;
    temp_s0_3 = temp_s0_2 + 4;
    temp_s3 = dead_evt_get_variable(script, *temp_s0);
    temp_s0_4 = temp_s0_3 + 4;
    temp_s2 = dead_evt_get_variable(script, *temp_s0_2);
    dead_evt_get_variable(script, *temp_s0_3);
    dead_evt_get_variable(script, *temp_s0_4);
    temp_s0_5 = dead_evt_get_variable(script, *(temp_s0_4 + 4));
    (dead_evt_get_variable(NULL, -0x02FAF080) + (temp_s3 * 0x1E0) + (temp_s2 * 4))->unk6C = (f32) temp_s0_5;
}



INCLUDE_ASM(s32, "EA8AE0", func_80240DA4_EA9884);

INCLUDE_ASM(s32, "EA8AE0", func_80240E2C_EA990C);

INCLUDE_ASM(s32, "EA8AE0", func_802413C0_EA9EA0);

ApiStatus func_802413FC_EA9EDC(Evt* script, s32 isInitialCall) {
    D_80248380 = 0;
    return ApiStatus_DONE2;
}

ApiStatus func_8024140C_EA9EEC(Evt* script, s32 isInitialCall) {
    dead_evt_set_variable(script, -0x02FAF080, (s32) dead_heap_malloc(0x780));
    D_80248380 = -1;
    func_8012DFE8(0, &func_802413C0_EA9EA0); // & required to match
    return ApiStatus_DONE2;
}

#include "world/common/StashVars.inc.c"

#include "world/common/GetItemName.inc.c"

#include "world/common/GetNpcCollisionHeight.inc.c"

#include "world/common/AddPlayerHandsOffset.inc.c"

#ifdef NON_MATCHING
ApiStatus func_802417AC_EAA28C(Evt* script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;

    if (isInitialCall) {
        D_80243DD8_EAC8B8 = 0;
    }
    if (D_80243DD8_EAC8B8 != 0) {
        D_80243DD8_EAC8B8 = 0;

        dead_evt_set_variable(script, *args++, D_80243DDC_EAC8BC);

        return ApiStatus_DONE2;
    }

    return ApiStatus_BLOCK;
}
#else
INCLUDE_ASM(s32, "EA8AE0", func_802417AC_EAA28C);
#endif

INCLUDE_ASM(s32, "EA8AE0", func_80241800_EAA2E0);

ApiStatus func_80241838_EAA318(Evt* script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;
    s32* ptr = (s32*) evt_get_variable(script, *args);
    s32 i;

    if (ptr != NULL) {
        for (i = 0; ptr[i] != 0; i++) {
            D_80248388[i] = ptr[i];
        }
        D_80248388[i] = 0;
    } else {
        for (i = 0; i < 112; i++) {
            D_80248388[i] = i + 16;
            D_80248388[112] = 0;
        }
    }
    return ApiStatus_DONE2;
}

extern s32 N(LetterDelivery_SavedNpcAnim);
#include "world/common/LetterDelivery.inc.c"

INCLUDE_ASM(s32, "EA8AE0", func_80241BC0_EAA6A0);
