#include "dead.h"
#include "common.h"

// Copy of kzn_23 (C9C610.c)

#define NAMESPACE EB7540

#include "world/common/SetEntityPositionF.inc.c"

#include "world/common/GetEntityPosition.inc.c"

INCLUDE_ASM(s32, "EB7540", func_80240478_EB76A8);

#include "world/common/UnsetCamera0MoveFlag1.inc.c"

// INCLUDE_ASM(s32, "EB7540", func_80240520_EB7750);
static f64 D_80241C10_EB8E40[2] = { 990.0, 2.732579860045591e+204 }; /* const */

typedef struct Unk {
    s32 unkAC;
    s32 unk70;
    s32 unk74;
} Unk;

s32 func_80240520_EB7750(Unk *arg0, s32 arg1) {
    Entity* entity = dead_get_entity_by_index(arg0->unkAC);
    f32 temp_f0;
    s32 temp_v1;

    if (arg1 != 0) {
        arg0->unk70 = 0;
        arg0->unk74 = 60;
    }
    entity->scale.x = (f32) arg0->unk74 / 60.0f;
    temp_f0 = (f32) arg0->unk74 / 60.0f;
    entity->scale.y = temp_f0;
    entity->scale.z = (f32) arg0->unk74 / 60.0f;
    entity->rotation.y = (f32) ((f64) (1.0f - dead_cos_rad(temp_f0 * 3.141592f)) * *D_80241C10_EB8E40 * 0.5);
    temp_v1 = arg0->unk74 - 1;
    arg0->unk74 = temp_v1;
    return (~temp_v1 == 0) * 2;
}
