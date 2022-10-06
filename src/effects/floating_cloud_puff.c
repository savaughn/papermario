#include "common.h"
#include "effects_internal.h"

extern Gfx D_09000080_3D4F10[];
extern Gfx D_09000168_3D4FF8[];
extern u8 D_E00D2500[];
extern u8 D_E00D2508[];

void floating_cloud_puff_init(EffectInstance* effect);
void floating_cloud_puff_update(EffectInstance* effect);
void floating_cloud_puff_render(EffectInstance* effect);
void floating_cloud_puff_appendGfx(void* effect);

EffectInstance* floating_cloud_puff_main(
    s32 arg0,
    f32 arg1,
    f32 arg2,
    f32 arg3,
    f32 arg4,
    s32 arg5
) {
    EffectBlueprint bp;
    EffectInstance* effect;
    FloatingCloudPuffFXData* data;
    s32 numParts = 1;

    bp.init = floating_cloud_puff_init;
    bp.update = floating_cloud_puff_update;
    bp.renderWorld = floating_cloud_puff_render;
    bp.unk_00 = 0;
    bp.unk_14 = NULL;
    bp.effectID = EFFECT_FLOATING_CLOUD_PUFF;

    effect = shim_create_effect_instance(&bp);
    effect->numParts = numParts;
    data = effect->data.floatingCloudPuff = shim_general_heap_malloc(numParts * sizeof(*data));
    ASSERT(effect->data.floatingCloudPuff != NULL);

    data->unk_00 = arg0;
    data->unk_14 = 0;
    if (arg5 <= 0) {
        data->unk_10 = 1000;
    } else {
        data->unk_10 = arg5;
    }
    data->unk_24 = 255;
    data->unk_04 = arg1;
    data->unk_08 = arg2;
    data->unk_0C = arg3;
    data->unk_34 = arg4;
    data->unk_18 = 255;
    data->unk_1C = 255;
    data->unk_20 = 255;
    data->unk_28 = 10;
    data->unk_2C = 10;
    data->unk_30 = 120;

    return effect;
}

void floating_cloud_puff_init(EffectInstance* effect) {
}

// Needs data migration, matching otherwise
#ifdef NON_MATCHING
void floating_cloud_puff_update(EffectInstance* effect) {
    FloatingCloudPuffFXData* data = effect->data.floatingCloudPuff;
    s32 unk_14;

    if (effect->flags & 0x10) {
        effect->flags &= ~0x10;
        data->unk_10 = 16;
    }

    if (data->unk_10 < 1000) {
        data->unk_10--;
    }

    data->unk_14++;

    if (data->unk_10 < 0) {
        shim_remove_effect(effect);
        return;
    }

    unk_14 = data->unk_14;

    if (data->unk_10 < 16) {
        data->unk_24 = data->unk_10 * 16;
    }

    data->unk_08 += 0.6;

    if (unk_14 < 7) {
        data->unk_38 = D_E00D2500[unk_14] * 0.01;
    } else {
        data->unk_38 = D_E00D2508[(unk_14 - 7) % 7] * 0.01;
    }
}
#else
INCLUDE_ASM(s32, "effects/floating_cloud_puff", floating_cloud_puff_update);
#endif

void floating_cloud_puff_render(EffectInstance* effect) {
    RenderTask renderTask;
    RenderTask* retTask;

    renderTask.appendGfx = floating_cloud_puff_appendGfx;
    renderTask.appendGfxArg = effect;
    renderTask.distance = 10;
    renderTask.renderMode = RENDER_MODE_2D;

    retTask = shim_queue_render_task(&renderTask);
    retTask->renderMode |= RENDER_TASK_FLAG_2;
}

void func_E00D227C(void) {
}

void floating_cloud_puff_appendGfx(void* effect) {
    FloatingCloudPuffFXData* data = ((EffectInstance*)effect)->data.floatingCloudPuff;
    Camera* camera = &gCameras[gCurrentCameraID];
    s32 unk_24 = data->unk_24;
    f32 scale = data->unk_34 * data->unk_38;
    Matrix4f sp10;
    Matrix4f sp50;

    gDPPipeSync(gMasterGfxPos++);
    gSPSegment(gMasterGfxPos++, 0x09, VIRTUAL_TO_PHYSICAL(((EffectInstance*)effect)->graphics->data));

    shim_guTranslateF(sp10, data->unk_04, data->unk_08, data->unk_0C);
    shim_guScaleF(sp50, scale, scale, scale);
    shim_guMtxCatF(sp50, sp10, sp10);
    shim_guMtxF2L(sp10, &gDisplayContext->matrixStack[gMatrixListPos]);

    gSPMatrix(gMasterGfxPos++, &gDisplayContext->matrixStack[gMatrixListPos++], G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPMatrix(gMasterGfxPos++, camera->unkMatrix, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gDPSetPrimColor(gMasterGfxPos++, 0, 0, data->unk_18, data->unk_1C, data->unk_20, unk_24);
    gDPSetEnvColor(gMasterGfxPos++, data->unk_28, data->unk_2C, data->unk_30, 0);
    gSPDisplayList(gMasterGfxPos++, D_09000080_3D4F10);
    gSPDisplayList(gMasterGfxPos++, D_09000168_3D4FF8);
    gSPPopMatrix(gMasterGfxPos++, G_MTX_MODELVIEW);
}
