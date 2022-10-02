#include "common.h"
#include "effects_internal.h"

void ice_pillar_appendGfx(void* effect);

INCLUDE_ASM(s32, "effects/ice_pillar", ice_pillar_main);

void ice_pillar_init(void) {
}

// INCLUDE_ASM(s32, "effects/ice_pillar", ice_pillar_update);
void ice_pillar_update(EffectInstance *arg0) {
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 var_s2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_v1 = arg0->flags;
    temp_s1 = arg0->data.any;
    if (temp_v1 & 0x10) {
        arg0->flags = temp_v1 & ~0x10;
        temp_s1->unk10 = 0x10;
    }
    temp_v1_2 = temp_s1->unk10;
    if (temp_v1_2 < 0x3E8) {
        temp_s1->unk10 = (s32) (temp_v1_2 - 1);
    }
    temp_a0 = temp_s1->unk10;
    temp_v1_3 = temp_s1->unk14 + 1;
    temp_s1->unk14 = temp_v1_3;
    if (temp_a0 < 0) {
        shim_load_effect(0x7A);
        var_s2 = 0;
        do {
            temp_f20 = (temp_s1->unk4 + (f32) shim_rand_int(0x14)) - 10.0f;
            temp_f22 = temp_s1->unk8 + ((f32) shim_rand_int(0x28) * temp_s1->unk20);
            ice_shard_main(/* extra? */ (f32) ((f64) temp_s1->unk20 * (((f64) shim_rand_int(0xA) * 0.7 * 0.1) + 0.3)), /* extra? */ (var_s2 + 0x1E));
            temp_s0 = M2C_ERROR(Read from unset register $v0);
            temp_s0->unkC->unk44 = (f32) ((f64) shim_rand_int(0xA) * 0.1);
            temp_s0->unkC->unk48 = (f32) (((f64) shim_rand_int(0x1E) * 0.01) + 0.1);
            temp_s0->unkC->unk3C = (f32) shim_rand_int(0x167);
            temp_s0->unkC->unk40 = (f32) shim_rand_int(0x14);
            temp_s0->unkC->unk4C = (f32) (shim_rand_int(0xA) - 5);
            temp_s0->unkC->unk50 = (f32) (shim_rand_int(0xA) - 5);
            temp_s0->unkC->unk54 = 0;
            var_s2 += 1;
            temp_s0->unkC->unk58 = -0.1f;
        } while ((s32) var_s2 < 0x14);
        shim_remove_effect(temp_s1->unk28);
        shim_remove_effect(arg0);
        return;
    }
    temp_v0 = temp_s1->unk25 - 1;
    temp_s1->unk25 = temp_v0;
    if (temp_v0 & 0x80) {
        temp_s1->unk25 = (u8) (shim_rand_int(0x3C) + 8);
    }
    temp_v0_2 = temp_s1->unk25;
    if ((s8) temp_v0_2 < 8) {
        temp_s1->unk24 = (s8) ((s32) ((s8) temp_v0_2 + ((u32) (temp_v0_2 << 0x18) >> 0x1F)) >> 1);
    } else {
        temp_s1->unk24 = 0;
    }
    if ((temp_a0 >= 0x11) && !(temp_v1_3 & 0xF)) {
        shim_load_effect(0x6F);
        temp_f2 = temp_s1->unk20;
        cold_breath_main(2, temp_s1->unk4, temp_s1->unk8 + (temp_f2 * 40.0f), temp_s1->unkC, temp_f2, 0x1E);
    }
    temp_s1->unk28->data.any->unk4 = (f32) temp_s1->unk4;
    temp_s1->unk28->data.any->unk8 = (f32) (temp_s1->unk8 + 10.0f);
    temp_s1->unk28->data.any->unkC = (f32) temp_s1->unkC;
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
