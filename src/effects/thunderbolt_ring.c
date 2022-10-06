#include "common.h"
#include "effects_internal.h"

void thunderbolt_ring_appendGfx(void* effect);

INCLUDE_ASM(s32, "effects/thunderbolt_ring", thunderbolt_ring_main);

void thunderbolt_ring_init(void) {
}

void thunderbolt_ring_update(EffectInstance *effect) {
    ThunderboltRingFXData* data = effect->data.thunderboltRing;
    s32 _lifeTime;
    s32 _timeLeft;

    if (effect->flags & 16) {
        effect->flags &= ~16;
        data->timeLeft = 16;
    }
    if (data->timeLeft < 1000) {
        data->timeLeft--;
    }
    _timeLeft = data->timeLeft;
    _lifeTime = data->lifeTime + 1;
    data->lifeTime = _lifeTime;
    if (_timeLeft < 0) {
        shim_remove_effect(effect);
        return;
    }
    if (_timeLeft < 8) {
        data->unk_2C = data->unk_2C + ((8 - _timeLeft) * 0.3);
    }
    if (_lifeTime < 16) {
        data->unk_24 = (_lifeTime * 16) + 15;
    }
    if (_timeLeft < 8) {
        data->unk_24 = (_timeLeft << 5) + 31;
    }
}

void thunderbolt_ring_render(EffectInstance* effect) {
    RenderTask renderTask;
    RenderTask* retTask;

    renderTask.appendGfx = thunderbolt_ring_appendGfx;
    renderTask.appendGfxArg = effect;
    renderTask.distance = 10;
    renderTask.renderMode = RENDER_MODE_2D;

    retTask = shim_queue_render_task(&renderTask);
}

INCLUDE_ASM(s32, "effects/thunderbolt_ring", thunderbolt_ring_appendGfx);
