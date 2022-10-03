#include "common.h"
#include "effects_internal.h"

void ice_pillar_appendGfx(void* effect);

INCLUDE_ASM(s32, "effects/ice_pillar", ice_pillar_main);

void ice_pillar_init(void) {
}

extern struct unkDataStruct {
    char test[0x0C];
    struct unk_C {
        /* 0x00 */ char unk_00[0x3C];
        /* 0x3C */ f32 unk3C;
        f32 unk40;
        f32 unk44;
        f32 unk48;
        f32 unk4C;
        f32 unk50;
        s32 unk54;
        f32 unk58;
    } *unk_C;
};

// INCLUDE_ASM(s32, "effects/ice_pillar", ice_pillar_update);
void ice_pillar_update(EffectInstance* effect, struct unkDataStruct* unkData) {
    IcePillarFXData* data = effect->data.icePillar;
    s32 temp_v1 = effect->flags;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 var_s2;
    u8 temp_v0;
    u8 temp_v0_2;
    struct unkDataStruct* temp_s0;

    if (temp_v1 & 16) {
        effect->flags = temp_v1 & ~16;
        data->unk_10 = 16;
    }
    temp_v1_2 = data->unk_10;
    if (temp_v1_2 < 1000) {
        data->unk_10 = (s32) (temp_v1_2 - 1);
    }
    temp_a0 = data->unk_10;
    temp_v1_3 = data->unk_14 + 1;
    data->unk_14 = temp_v1_3;
    if (temp_a0 < 0) {
        shim_load_effect(122);
        var_s2 = 0;
        do {
            temp_f20 = (data->pos.x + (f32) shim_rand_int(20)) - 10.0f;
            temp_f22 = data->pos.y + ((f32) shim_rand_int(40) * data->unk_20);
            ice_shard_main((f32) ((f64) data->unk_20 * (((f64) shim_rand_int(10) * 0.7 * 0.1) + 0.3)), (var_s2 + 30));
            temp_s0 = unkData;
            temp_s0->unk_C->unk44 = (f32) ((f64) shim_rand_int(10) * 0.1);
            temp_s0->unk_C->unk48 = (f32) (((f64) shim_rand_int(30) * 0.01) + 0.1);
            temp_s0->unk_C->unk3C = (f32) shim_rand_int(359);
            temp_s0->unk_C->unk40 = (f32) shim_rand_int(20);
            temp_s0->unk_C->unk4C = (f32) (shim_rand_int(10) - 5);
            temp_s0->unk_C->unk50 = (f32) (shim_rand_int(10) - 5);
            temp_s0->unk_C->unk54 = 0;
            var_s2 += 1;
            temp_s0->unk_C->unk58 = -0.1f;
        } while ((s32) var_s2 < 20);
        shim_remove_effect(data->unk_28);
        shim_remove_effect(effect);
        return;
    }
    temp_v0 = data->unk_25 - 1;
    data->unk_25 = temp_v0;
    if (temp_v0 & 128) {
        data->unk_25 = (u8) (shim_rand_int(60) + 8);
    }
    temp_v0_2 = data->unk_25;
    if ((s8) temp_v0_2 < 8) {
        data->unk_24 = (s8) ((s32) ((s8) temp_v0_2 + ((u32) (temp_v0_2 << 24) >> 31)) >> 1);
    } else {
        data->unk_24 = 0;
    }
    if ((temp_a0 >= 17) && !(temp_v1_3 & 15)) {
        shim_load_effect(111);
        temp_f2 = data->unk_20;
        cold_breath_main(2, data->pos.x, data->pos.y + (temp_f2 * 40.0f), data->pos.z, temp_f2, 30);
    }
    data->unk_28->data.icePillar->pos.x = data->pos.x;
    data->unk_28->data.icePillar->pos.y = (data->pos.y + 10.0f);
    data->unk_28->data.icePillar->pos.z = data->pos.z;
}

void ice_pillar_render(EffectInstance* effect) {
    RenderTask renderTask;
    RenderTask* retTask;

    renderTask.appendGfx = ice_pillar_appendGfx;
    renderTask.appendGfxArg = effect;
    renderTask.distance = 5;
    renderTask.renderMode = RENDER_MODE_2D;

    retTask = shim_queue_render_task(&renderTask);
    retTask->renderMode |= RENDER_TASK_FLAG_2;
}

INCLUDE_ASM(s32, "effects/ice_pillar", ice_pillar_appendGfx);
