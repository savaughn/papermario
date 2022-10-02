#include "kzn_02.h"
#include "message_ids.h"

extern EvtScript N(EVS_KoloradoSinkingPlatform);

API_CALLABLE(N(AwaitLetterChoiceResult));
API_CALLABLE(N(SetLetterChoiceResult));

f32 N(FlyingAI_JumpVels)[] = {
    4.5, 3.5, 2.6, 2.0, 1.5, 20.0,
};

#include "world/common/enemy/FlyingAI.inc.c"

#include "world/common/enemy/FlyingNoAttackAI.inc.c"

MobileAISettings N(AISettings_LavaBubble) = {
    .moveSpeed = 0.8f,
    .moveTime = 100,
    .alertRadius = 90.0f,
    .playerSearchInterval = 4,
    .chaseSpeed = 3.2f,
    .chaseTurnRate = 10,
    .chaseUpdateInterval = 1,
    .chaseRadius = 100.0f,
    .unk_AI_2C = 1,
};

EvtScript N(EVS_NpcAI_LavaBubble) = {
    EVT_CALL(SetSelfVar, 0, 1)
    EVT_CALL(SetSelfVar, 5, 0)
    EVT_CALL(SetSelfVar, 6, 0)
    EVT_CALL(SetSelfVar, 1, 150)
    EVT_CALL(N(FlyingNoAttackAI_Main), EVT_PTR(N(AISettings_LavaBubble)))
    EVT_RETURN
    EVT_END
};

NpcSettings N(NpcSettings_LavaBubble) = {
    .height = 20,
    .radius = 22,
    .level = 17,
    .ai = &N(EVS_NpcAI_LavaBubble),
    .onHit = &EnemyNpcHit,
    .onDefeat = &EnemyNpcDefeat,
};

NpcSettings N(NpSettings_Kolorado) = {
    .height = 40,
    .radius = 24,
    .level = 99,
};

#include "world/common/atomic/LetterChoice.inc.c"

s32 N(LetterList)[] = {
    ITEM_LETTER25,
    ITEM_NONE
};

EvtScript N(EVS_Kolorado_LetterDelivery) = {
    EVT_CALL(N(LetterDelivery_Init),
        NPC_Kolorado, ANIM_Kolorado_Talk, ANIM_Kolorado_Idle,
        ITEM_LETTER25, 0,
        MSG_CH5_00E4, MSG_CH5_00E5, MSG_CH5_00E6, MSG_CH5_00E7,
        EVT_PTR(N(LetterList)))
    EVT_EXEC_WAIT(N(DoLetterDelivery))
    EVT_RETURN
    EVT_END
};

EvtScript N(EVS_Kolorado_LetterReward) = {
    EVT_IF_EQ(LVarC, 2)
        EVT_SET(LVar0, ITEM_STAR_PIECE)
        EVT_SET(LVar1, 3)
        EVT_EXEC_WAIT(N(Delivery_ShowGotStarPiece))
        EVT_CALL(AddStarPieces, 1)
    EVT_END_IF
    EVT_RETURN
    EVT_END
};

// END LETTER DELIVERY?

EvtScript N(EVS_NpcIdle_Kolorado) = {
    EVT_CALL(DisablePlayerInput, TRUE)
    EVT_LOOP(0)
        EVT_WAIT(1)
        EVT_CALL(GetPlayerPos, LVar0, LVar1, LVar2)
        EVT_IF_GT(LVar0, -825)
            EVT_BREAK_LOOP
        EVT_END_IF
    EVT_END_LOOP
    EVT_WAIT(30)
    EVT_CALL(AdjustCam, CAM_DEFAULT, EVT_FLOAT(5.0), 100, 350, EVT_FLOAT(15.0), EVT_FLOAT(-7.0))
    EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 0)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_SELF, ANIM_Kolorado_Talk, ANIM_Kolorado_Idle, 0, MSG_CH5_00EE)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 0)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Walk)
    EVT_CALL(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
    EVT_LOOP(30)
        EVT_CALL(SetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
        EVT_WAIT(1)
        EVT_SUB(LVar0, 1)
    EVT_END_LOOP
    EVT_CALL(SetNpcSpeed, NPC_SELF, EVT_FLOAT(3.0))
    EVT_CALL(NpcMoveTo, NPC_SELF, -740, 0, 0)
    EVT_CALL(SetPanTarget, CAM_DEFAULT, -650, 20, 0)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(1.0))
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Thrown)
    EVT_CALL(SetNpcJumpscale, NPC_SELF, EVT_FLOAT(1.0))
    EVT_CALL(PlaySoundAtNpc, NPC_SELF, SOUND_32C, 0)
    EVT_CALL(NpcJump0, NPC_SELF, -655, 20, 0, 20)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Yell)
    EVT_CALL(NpcJump0, NPC_SELF, -645, 20, 0, 5)
    EVT_CALL(NpcJump0, NPC_SELF, -635, 20, 0, 5)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Idle)
    EVT_WAIT(15)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 1)
    EVT_WAIT(5)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 1)
    EVT_WAIT(10)
    EVT_EXEC(N(EVS_KoloradoSinkingPlatform))
    EVT_SET(LVar0, 2)
    EVT_LOOP(3)
        EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Panic)
        EVT_CALL(ShowSweat, NPC_Kolorado, 1, 45, 1, 0, 0, 0, 0, 20)
        EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 1)
        EVT_CALL(NpcMoveTo, NPC_SELF, -655, 0, LVar0)
        EVT_CALL(ShowSweat, NPC_Kolorado, 1, -45, 1, 0, 0, 0, 0, 20)
        EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 1)
        EVT_CALL(NpcMoveTo, NPC_SELF, -635, 0, LVar0)
        EVT_MUL(LVar0, 2)
    EVT_END_LOOP
    EVT_CALL(ShowSweat, NPC_Kolorado, 0, 45, 1, 0, 0, 0, 0, 20)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 2)
    EVT_CALL(ShowSweat, NPC_Kolorado, 0, -45, 1, 0, 0, 0, 0, 20)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 2)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Hurt)
    EVT_CALL(ShowSweat, NPC_Kolorado, 0, -45, 1, 0, 0, 0, 0, 20)
    EVT_CALL(SetSelfVar, 0, 1)
    EVT_THREAD
        EVT_LABEL(15)
        EVT_CALL(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
        EVT_CALL(PlayEffect, EFFECT_SMOKE_BURST, 0, LVar0, LVar1, LVar2, 1, 10, 0, 0, 0, 0, 0, 0, 0)
        EVT_CALL(GetSelfVar, 0, LVar3)
        EVT_IF_EQ(LVar3, 1)
            EVT_WAIT(1)
            EVT_GOTO(15)
        EVT_END_IF
    EVT_END_THREAD
    EVT_CALL(PlaySoundAtNpc, NPC_SELF, SOUND_E8, 0)
    EVT_CALL(NpcJump0, NPC_SELF, -700, 150, 0, 35)
    EVT_THREAD
        EVT_CALL(ResetCam, CAM_DEFAULT, EVT_FLOAT(5.0))
    EVT_END_THREAD
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Idle)
    EVT_CALL(NpcJump0, NPC_SELF, -775, 20, -40, 40)
    EVT_CALL(SetSelfVar, 0, 0)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Fallen)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 2)
    EVT_CALL(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, FALSE)
    EVT_CALL(PlaySoundAtNpc, NPC_SELF, SOUND_32C, 0)
    EVT_CALL(NpcJump0, NPC_SELF, -760, 50, -40, 10)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Panic)
    EVT_WAIT(4)
    EVT_CALL(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, TRUE)
    EVT_WAIT(8)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Fallen)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 2)
    EVT_CALL(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, FALSE)
    EVT_CALL(PlaySoundAtNpc, NPC_SELF, SOUND_32C, 0)
    EVT_CALL(NpcJump0, NPC_SELF, -760, 40, -40, 10)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Panic)
    EVT_WAIT(4)
    EVT_CALL(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, TRUE)
    EVT_WAIT(8)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Fallen)
    EVT_CALL(SetNpcFlagBits, NPC_SELF, NPC_FLAG_GRAVITY, FALSE)
    EVT_WAIT(5)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Idle)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 90, 4)
    EVT_CALL(SpeakToPlayer, NPC_SELF, ANIM_Kolorado_Talk, ANIM_Kolorado_Idle, 5, MSG_CH5_00EF)
    EVT_WAIT(5)
    EVT_CALL(InterpNpcYaw, NPC_SELF, 270, 4)
    EVT_SET(GB_StoryProgress, STORY_CH5_KOLORADO_FELL_IN_LAVA)
    EVT_CALL(DisablePlayerInput, FALSE)
    EVT_RETURN
    EVT_END
};

EvtScript N(EVS_NpcInteract_Kolorado) = {
    EVT_THREAD
        EVT_WAIT(20)
        EVT_CALL(SetPlayerAnimation, ANIM_Mario_10002)
    EVT_END_THREAD
    EVT_CALL(SpeakToPlayer, NPC_SELF, ANIM_Kolorado_Talk, ANIM_Kolorado_Idle, 0, MSG_CH5_00F0)
    EVT_CALL(GetNpcPos, NPC_SELF, LVar0, LVar1, LVar2)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Panic)
    EVT_CALL(NpcJump0, NPC_SELF, LVar0, LVar1, LVar2, 7)
    EVT_CALL(SetNpcAnimation, NPC_SELF, ANIM_Kolorado_Idle)
    EVT_CALL(CloseMessage)
    EVT_EXEC_WAIT(N(EVS_Kolorado_LetterDelivery))
    EVT_EXEC_WAIT(N(EVS_Kolorado_LetterReward))
    EVT_RETURN
    EVT_END
};

EvtScript N(EVS_NpcInit_Kolorado) = {
    EVT_SWITCH(GB_StoryProgress)
        EVT_CASE_LT(STORY_CH5_KOLORADO_FELL_IN_LAVA)
            EVT_CALL(BindNpcIdle, NPC_SELF, EVT_PTR(N(EVS_NpcIdle_Kolorado)))
            EVT_CALL(BindNpcInteract, NPC_SELF, EVT_PTR(N(EVS_NpcInteract_Kolorado)))
        EVT_CASE_LT(STORY_CH5_LAVA_STREAM_BLOCKED)
            EVT_IF_EQ(GF_KZN06_Visited, FALSE)
                EVT_CALL(SetNpcPos, NPC_SELF, -760, 20, -40)
                EVT_CALL(BindNpcInteract, NPC_SELF, EVT_PTR(N(EVS_NpcInteract_Kolorado)))
            EVT_ELSE
                EVT_CALL(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
            EVT_END_IF
        EVT_CASE_DEFAULT
            EVT_CALL(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    EVT_END_SWITCH
    EVT_RETURN
    EVT_END
};

StaticNpc N(NpcData_Kolorado) = {
    .id = NPC_Kolorado,
    .settings = &N(NpSettings_Kolorado),
    .pos = { -740.0f, 20.0f, 0.0f },
    .yaw = 90,
    .flags = NPC_FLAG_PASSIVE | NPC_FLAG_ENABLE_HIT_SCRIPT | NPC_FLAG_100 | NPC_FLAG_LOCK_ANIMS | NPC_FLAG_DIRTY_SHADOW | NPC_FLAG_MOTION_BLUR,
    .init = &N(EVS_NpcInit_Kolorado),
    .drops = {
        .dropFlags = NPC_DROP_FLAGS_80,
        .heartDrops  = NO_DROPS,
        .flowerDrops = NO_DROPS,
    },
    .animations = {
        .idle   = ANIM_Kolorado_Idle,
        .walk   = ANIM_Kolorado_Walk,
        .run    = ANIM_Kolorado_Run,
        .chase  = ANIM_Kolorado_Run,
        .anim_4 = ANIM_Kolorado_Idle,
        .anim_5 = ANIM_Kolorado_Idle,
        .death  = ANIM_Kolorado_Idle,
        .hit    = ANIM_Kolorado_Idle,
        .anim_8 = ANIM_Kolorado_Idle,
        .anim_9 = ANIM_Kolorado_Idle,
        .anim_A = ANIM_Kolorado_Idle,
        .anim_B = ANIM_Kolorado_Idle,
        .anim_C = ANIM_Kolorado_Idle,
        .anim_D = ANIM_Kolorado_Idle,
        .anim_E = ANIM_Kolorado_Idle,
        .anim_F = ANIM_Kolorado_Idle,
    },
    .tattle = MSG_NpcTattle_Kolorado,
};

StaticNpc N(NpcData_LavaBubble) = {
    .id = NPC_LavaBubble,
    .settings = &N(NpcSettings_LavaBubble),
    .pos = { 250.0f, 50.0f, 0.0f },
    .yaw = 90,
    .flags = NPC_FLAG_100 | NPC_FLAG_LOCK_ANIMS | NPC_FLAG_JUMPING,
    .drops = {
        .dropFlags = NPC_DROP_FLAGS_80,
        .itemDropChance = 5,
        .itemDrops = {
            { ITEM_SUPER_SHROOM, 10, 0 },
        },
        .heartDrops  = STANDARD_HEART_DROPS(2),
        .flowerDrops = STANDARD_FLOWER_DROPS(2),
        .minCoinBonus = 0,
        .maxCoinBonus = 3,
    },
    .territory = {
        .wander = {
            .isFlying = TRUE,
            .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED,
            .wanderShape = SHAPE_CYLINDER,
            .centerPos  = { 250, 50, 0 },
            .wanderSize = { 20 },
            .detectShape = SHAPE_RECT,
            .detectPos  = { 250, 50, 0 },
            .detectSize = { 70, 200 },
        }
    },
    .animations = {
        .idle   = ANIM_LavaBubble_Anim01,
        .walk   = ANIM_LavaBubble_Anim02,
        .run    = ANIM_LavaBubble_Anim03,
        .chase  = ANIM_LavaBubble_Anim03,
        .anim_4 = ANIM_LavaBubble_Anim01,
        .anim_5 = ANIM_LavaBubble_Anim01,
        .death  = ANIM_LavaBubble_Anim07,
        .hit    = ANIM_LavaBubble_Anim07,
        .anim_8 = ANIM_LavaBubble_Anim04,
        .anim_9 = ANIM_LavaBubble_Anim01,
        .anim_A = ANIM_LavaBubble_Anim01,
        .anim_B = ANIM_LavaBubble_Anim01,
        .anim_C = ANIM_LavaBubble_Anim01,
        .anim_D = ANIM_LavaBubble_Anim01,
        .anim_E = ANIM_LavaBubble_Anim01,
        .anim_F = ANIM_LavaBubble_Anim01,
    },
    .aiDetectFlags = AI_DETECT_SENSITIVE_MOTION,
};

NpcGroupList N(DefaultNPCs) = {
    NPC_GROUP(N(NpcData_Kolorado)),
    NPC_GROUP(N(NpcData_LavaBubble), BTL_KZN_FORMATION_00, BTL_KZN_STAGE_02),
    {}
};