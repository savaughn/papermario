#include "sbk_03.h"

extern EvtScript N(EVS_Main);
extern NpcGroupList N(DefaultNPCs);

EntryList N(Entrances) = {
    [sbk_03_ENTRY_0]    { -475.0,    0.0,    0.0,   90.0 },
    [sbk_03_ENTRY_1]    {  475.0,    0.0,    0.0,  270.0 },
    [sbk_03_ENTRY_2]    {    0.0,    0.0, -475.0,  180.0 },
    [sbk_03_ENTRY_3]    {    0.0,    0.0,  475.0,    0.0 },
};

MapSettings N(settings) = {
    .main = &N(EVS_Main),
    .entryList = &N(Entrances),
    .entryCount = ENTRY_COUNT(N(Entrances)),
    .background = &gBackgroundImage,
    .tattle = { MSG_MapTattle_sbk_03 },
};

#include "world/common/SpawnSunEffect.inc.c"

EvtScript N(EVS_ExitWalk_sbk_02_1) = EVT_EXIT_WALK(60, sbk_03_ENTRY_0, "sbk_02", sbk_02_ENTRY_1);
EvtScript N(EVS_ExitWalk_sbk_04_0) = EVT_EXIT_WALK(60, sbk_03_ENTRY_1, "sbk_04", sbk_04_ENTRY_0);
EvtScript N(EVS_ExitWalk_sbk_13_2) = EVT_EXIT_WALK(60, sbk_03_ENTRY_3, "sbk_13", sbk_13_ENTRY_2);

EvtScript N(EVS_BindExitTriggers) = {
    EVT_BIND_TRIGGER(EVT_PTR(N(EVS_ExitWalk_sbk_02_1)), TRIGGER_FLOOR_ABOVE, COLLIDER_deiliw, 1, 0)
    EVT_BIND_TRIGGER(EVT_PTR(N(EVS_ExitWalk_sbk_04_0)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilie, 1, 0)
    EVT_BIND_TRIGGER(EVT_PTR(N(EVS_ExitWalk_sbk_13_2)), TRIGGER_FLOOR_ABOVE, COLLIDER_deilis, 1, 0)
    EVT_RETURN
    EVT_END
};

EvtScript N(EVS_Main) = {
    EVT_SET(GB_WorldLocation, LOCATION_DRY_DRY_DESERT)
    EVT_CALL(SetSpriteShading, SHADING_NONE)
    EVT_IF_EQ(GB_StoryProgress, STORY_CH2_GOT_PULSE_STONE)
        EVT_CALL(DisablePulseStone, FALSE)
    EVT_END_IF
    EVT_SETUP_CAMERA_NO_LEAD()
    EVT_CALL(MakeNpcs, FALSE, EVT_PTR(N(DefaultNPCs)))
    EVT_CALL(N(SpawnSunEffect))
    EVT_CALL(SetMusicTrack, 0, SONG_DRY_DRY_DESERT, 0, 8)
    EVT_SET(LVar0, EVT_PTR(N(EVS_BindExitTriggers)))
    EVT_EXEC(EnterWalk)
    EVT_RETURN
    EVT_END
};
