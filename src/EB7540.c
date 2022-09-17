#include "dead.h"
#include "common.h"

// Copy of kzn_23 (C9C610.c)

#define NAMESPACE EB7540

#include "world/common/SetEntityPositionF.inc.c"

#include "world/common/GetEntityPosition.inc.c"

// INCLUDE_ASM(s32, "EB7540", func_80240478_EB76A8);
? func_80240478_EB76A8(Evt* arg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_v1;
    s32* temp_s0;
    s32* temp_s0_2;

    temp_s0 = arg0->ptrReadPos;
    temp_s0_2 = temp_s0 + 4;
    temp_f22 = dead_evt_get_float_variable(arg0, *temp_s0);
    temp_f20 = dead_evt_get_float_variable(arg0, *temp_s0_2);
    temp_f0 = dead_evt_get_float_variable(arg0, *(temp_s0_2 + 4));
    temp_v1 = arg0->varTable[0xE];
    temp_v1->unkC->unk38 = temp_f22;
    temp_v1->unkC->unk3C = temp_f20;
    temp_v1->unkC->unk40 = temp_f0;
    return 2;
}

#include "world/common/UnsetCamera0MoveFlag1.inc.c"

INCLUDE_ASM(s32, "EB7540", func_80240520_EB7750);
