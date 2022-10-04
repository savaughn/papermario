.include "macro.inc"

.section .data

dlabel D_802A11B0_74AF40
.word 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000005, GetGoalPos, 0xFFFFFF81, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000028, 0x00000002, 0xFE363C80, 0x00000020, 0x00000043, 0x00000005, SetGoalPos, 0xFFFFFF81, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000001A, 0x00000043, 0x00000003, SetActorSpeed, 0x00000000, 0xF24A8E80, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010005, 0x00000043, 0x00000002, PlayerRunToGoal, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A128C_74B01C
.word 0x00000043, 0x00000005, SetGoalPos, 0x00000000, 0xFFFFFFDF, 0x00000000, 0x00000000, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000001A, 0x00000043, 0x00000003, SetActorSpeed, 0x00000000, 0xF24A8E80, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010005, 0x00000043, 0x00000002, PlayerRunToGoal, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A1304_74B094
.word 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000027, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000D, 0x00000006, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000D, 0x00000014, 0x00000001, 0xFE363C81, 0x00000018, 0x00000001, 0x00000003, 0x00000008, 0x00000001, 0x00000004, 0x00000018, 0x00000001, 0x00000005, 0x00000008, 0x00000001, 0x00000003, 0x00000018, 0x00000001, 0x00000007, 0x00000008, 0x00000001, 0x00000002, 0x00000018, 0x00000001, 0x00000009, 0x00000008, 0x00000001, 0x00000001, 0x00000018, 0x00000001, 0x0000000B, 0x00000008, 0x00000001, 0x00000000, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A1488_74B218
.word 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000027, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030014, 0x00000006, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030014, 0x00000014, 0x00000001, 0xFE363C81, 0x00000018, 0x00000001, 0x00000003, 0x00000008, 0x00000001, 0x00000004, 0x00000018, 0x00000001, 0x00000005, 0x00000008, 0x00000001, 0x00000003, 0x00000018, 0x00000001, 0x00000007, 0x00000008, 0x00000001, 0x00000002, 0x00000018, 0x00000001, 0x00000009, 0x00000008, 0x00000001, 0x00000001, 0x00000018, 0x00000001, 0x0000000B, 0x00000008, 0x00000001, 0x00000000, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A160C_74B39C
.word 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000000A, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000027, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001B, 0x00000006, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001B, 0x00000014, 0x00000001, 0xFE363C81, 0x00000018, 0x00000001, 0x00000003, 0x00000008, 0x00000001, 0x00000004, 0x00000018, 0x00000001, 0x00000005, 0x00000008, 0x00000001, 0x00000003, 0x00000018, 0x00000001, 0x00000007, 0x00000008, 0x00000001, 0x00000002, 0x00000018, 0x00000001, 0x00000009, 0x00000008, 0x00000001, 0x00000001, 0x00000018, 0x00000001, 0x0000000B, 0x00000008, 0x00000001, 0x00000000, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, SetBattleCamOffsetZ, 0x00000008, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000E, 0x00000008, 0x00000001, 0x00000004, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0x00000024, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000F, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000001E, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionResult, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030010, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030011, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030012, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002C, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A19AC_74B73C
.word 0x00000043, 0x00000001, func_80276EFC, 0x00000043, 0x00000002, UseBattleCamPreset, 0x00000004, 0x00000043, 0x00000002, MoveBattleCamOver, 0x00000005, 0x00000043, 0x00000001, func_802693F0, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000002, EnablePlayerBlur, 0xFFFFFFFF, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000008, 0x00000001, 0x00000005, 0x00000043, 0x00000002, SetGoalToHome, 0x00000000, 0x00000043, 0x00000003, SetActorSpeed, 0x00000000, 0xF24A9A80, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010005, 0x00000043, 0x00000002, PlayerRunToGoal, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000001, func_80276EFC, 0x00000043, 0x00000001, func_802693F0, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000002, EnablePlayerBlur, 0xFFFFFFFF, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000008, 0x00000001, 0x00000005, 0x00000043, 0x00000002, SetGoalToHome, 0x00000000, 0x00000043, 0x00000003, SetActorSpeed, 0x00000000, 0xF24A9A80, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010005, 0x00000043, 0x00000002, PlayerRunToGoal, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A1B64_74B8F4
.word 0x00000043, 0x00000001, func_80276EFC, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000001D, 0x00000043, 0x00000001, func_802693F0, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000002, EnablePlayerBlur, 0xFFFFFFFF, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000008, 0x00000001, 0x00000005, 0x00000043, 0x00000002, SetGoalToHome, 0x00000000, 0x00000043, 0x00000003, SetActorSpeed, 0x00000000, 0xF24A9A80, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010005, 0x00000043, 0x00000002, PlayerRunToGoal, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00010002, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A1C40_74B9D0
.word 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A11B0_74AF40, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A1304_74B094, 0x00000043, 0x00000007, PlayerTestEnemy, 0xFE363C80, 0x00000040, 0x00000000, 0x00000000, 0x00000000, 0x00000010, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, SetBattleCamOffsetZ, 0x00000008, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000E, 0x00000008, 0x00000001, 0x00000004, 0x00000043, 0x00000001, battle_move_d_down_pound_IsBerserkerEquipped, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000F, 0x00000043, 0x00000002, GetActionCommandMode, 0xFE363C80, 0x0000000C, 0x00000002, 0xFE363C80, 0x00000002, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000001E, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionResult, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030010, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000043, 0x00000002, GetActionCommandMode, 0xFE363C80, 0x0000000C, 0x00000002, 0xFE363C80, 0x00000002, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C81, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000F, 0x00000028, 0x00000002, 0xFE363C81, 0x0000000A, 0x00000008, 0x00000001, 0xFE363C81, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030010, 0x00000008, 0x00000001, 0x00000005, 0x00000013, 0x00000000, 0x00000043, 0x00000002, GetActionCommandMode, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000002, 0x00000043, 0x00000002, SetActionCommandMode, 0x00000003, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000002, GetActionCommandMode, 0xFE363C80, 0x0000000C, 0x00000002, 0xFE363C80, 0x00000002, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030011, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002115, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030012, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002118, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A2100_74BE90
.word 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A11B0_74AF40, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A1488_74B218, 0x00000043, 0x00000007, PlayerTestEnemy, 0xFE363C80, 0x00000040, 0x00000000, 0x00000000, 0x00000000, 0x00000010, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, SetBattleCamOffsetZ, 0x00000008, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030015, 0x00000008, 0x00000001, 0x00000004, 0x00000043, 0x00000001, battle_move_d_down_pound_IsBerserkerEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030016, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000001E, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionResult, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030017, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C81, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030016, 0x00000028, 0x00000002, 0xFE363C81, 0x0000000A, 0x00000008, 0x00000001, 0xFE363C81, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030017, 0x00000008, 0x00000001, 0x00000005, 0x00000013, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030018, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002116, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030019, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002119, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A24E8_74C278
.word 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A11B0_74AF40, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A160C_74B39C, 0x00000043, 0x00000007, PlayerTestEnemy, 0xFE363C80, 0x00000040, 0x00000000, 0x00000000, 0x00000000, 0x00000010, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, SetBattleCamOffsetZ, 0x00000008, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001C, 0x00000008, 0x00000001, 0x00000004, 0x00000043, 0x00000001, battle_move_d_down_pound_IsBerserkerEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001D, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000001E, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionResult, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001E, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C81, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001D, 0x00000028, 0x00000002, 0xFE363C81, 0x0000000A, 0x00000008, 0x00000001, 0xFE363C81, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001E, 0x00000008, 0x00000001, 0x00000005, 0x00000013, 0x00000000, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001F, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002117, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030020, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000211A, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000003, ChooseNextTarget, 0x0000000A, 0xFE363C80, 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A128C_74B01C, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A1304_74B094, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, AddBattleCamZoom, 0x00000050, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000E, 0x00000008, 0x00000001, 0x00000008, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003000F, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000043, 0x00000002, SetActionResult, 0x00000000, 0x00000024, 0x00000002, 0xFE363C81, 0x00000000, 0x00000005, 0x00000001, 0x0000001E, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionResult, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x0000000B, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030010, 0x00000024, 0x00000002, 0xFE363C81, 0x00000001, 0x00000013, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002115, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030011, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030012, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002118, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000003, ChooseNextTarget, 0x0000000A, 0xFE363C80, 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A128C_74B01C, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A1488_74B218, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, AddBattleCamZoom, 0x00000050, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030015, 0x00000008, 0x00000001, 0x00000008, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030016, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000005, 0x00000001, 0x0000003C, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002116, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030018, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030019, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002119, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000003, ChooseNextTarget, 0x0000000A, 0xFE363C80, 0x00000043, 0x00000002, LoadActionCommand, 0x00000002, 0x00000043, 0x00000001, action_command_jump_CreateHudElements, 0x00000046, 0x00000001, D_802A128C_74B01C, 0x00000043, 0x00000002, SetGoalToTarget, 0x00000000, 0x00000043, 0x00000005, AddGoalPos, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000046, 0x00000001, D_802A160C_74B39C, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002B, 0x00000043, 0x00000002, AddBattleCamZoom, 0x00000050, 0x00000043, 0x00000001, InitTargetIterator, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000010B, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001C, 0x00000008, 0x00000001, 0x00000008, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001D, 0x00000043, 0x00000001, battle_move_d_down_pound_IsRightOnEquipped, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000005, 0x00000001, 0x0000002D, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000B, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000013, 0x00000000, 0x00000027, 0x00000002, 0xFE363C8D, 0x00000006, 0x00000043, 0x00000004, func_802A9258_422258, 0x00000000, 0xFE363C8D, 0x00000003, 0x00000005, 0x00000001, 0x0000003C, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000003, CheckButtonDown, 0x00040000, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000002, GetActionSuccess, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000000, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x00002117, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x0003001F, 0x00000008, 0x00000001, 0x00000003, 0x00000043, 0x00000004, SetAnimation, 0x00000000, 0x00000000, 0x00030020, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000211A, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel battle_move_d_down_pound_main
.word 0x00000043, 0x00000002, func_802694A4, 0x00000001, 0x00000043, 0x00000002, func_80269EAC, 0x00000003, 0x00000043, 0x00000004, GetMenuSelection, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000014, 0x00000001, 0xFE363C81, 0x00000016, 0x00000001, 0x00000000, 0x00000024, 0x00000002, 0xFE363C8D, 0x00000032, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000001, 0x00000024, 0x00000002, 0xFE363C8F, 0x00000002, 0x00000046, 0x00000001, D_802A3278_74D008, 0x00000016, 0x00000001, 0x00000001, 0x00000024, 0x00000002, 0xFE363C8D, 0x00000032, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000002, 0x00000024, 0x00000002, 0xFE363C8F, 0x00000004, 0x00000046, 0x00000001, D_802A3278_74D008, 0x00000016, 0x00000001, 0x00000002, 0x00000024, 0x00000002, 0xFE363C8D, 0x00000032, 0x00000024, 0x00000002, 0xFE363C8E, 0x00000003, 0x00000024, 0x00000002, 0xFE363C8F, 0x00000006, 0x00000046, 0x00000001, D_802A3278_74D008, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000

dlabel D_802A3278_74D008
.word 0x00000043, 0x00000004, GetMenuSelection, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000014, 0x00000001, 0xFE363C81, 0x00000016, 0x00000001, 0x00000000, 0x00000046, 0x00000001, D_802A1C40_74B9D0, 0x00000016, 0x00000001, 0x00000001, 0x00000046, 0x00000001, D_802A2100_74BE90, 0x00000016, 0x00000001, 0x00000002, 0x00000046, 0x00000001, D_802A24E8_74C278, 0x00000023, 0x00000000, 0x00000043, 0x00000007, PlayerTestEnemy, 0xFE363C80, 0x08000040, 0x00000019, 0x00000000, 0xFE363C89, 0x00000010, 0x00000043, 0x00000002, DidActionSucceed, 0xFE363C80, 0x00000014, 0x00000001, 0xFE363C80, 0x00000019, 0x00000001, 0x00000000, 0x00000043, 0x00000004, GetMenuSelection, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000014, 0x00000001, 0xFE363C81, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000002, StartRumble, 0x00000008, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x0000000A, 0xF24A7FB4, 0x00000057, 0x00000000, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000002, StartRumble, 0x00000009, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x0000000A, 0xF24A80E7, 0x00000057, 0x00000000, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000002, StartRumble, 0x0000000A, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x0000000A, 0xF24A821A, 0x00000057, 0x00000000, 0x00000023, 0x00000000, 0x0000001C, 0x00000000, 0x00000043, 0x00000004, GetMenuSelection, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000014, 0x00000001, 0xFE363C81, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000002, StartRumble, 0x00000008, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x00000002, 0xF24A7FB4, 0x00000057, 0x00000000, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000002, StartRumble, 0x00000009, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x00000002, 0xF24A80E7, 0x00000057, 0x00000000, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000002, StartRumble, 0x0000000A, 0x00000056, 0x00000000, 0x00000043, 0x00000005, ShakeCam, 0x00000001, 0x00000000, 0x00000002, 0xF24A821A, 0x00000057, 0x00000000, 0x00000023, 0x00000000, 0x00000023, 0x00000000, 0x00000043, 0x00000002, DidActionSucceed, 0xFE363C80, 0x0000000D, 0x00000002, 0xFE363C80, 0x00000000, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002C, 0x00000043, 0x00000002, MoveBattleCamOver, 0x00000005, 0x00000012, 0x00000000, 0x00000043, 0x00000002, UseBattleCamPreset, 0x0000002C, 0x00000043, 0x00000002, MoveBattleCamOver, 0x00000032, 0x00000013, 0x00000000, 0x00000043, 0x00000004, GetMenuSelection, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000014, 0x00000001, 0xFE363C81, 0x00000016, 0x00000001, 0x00000000, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000210A, 0x00000016, 0x00000001, 0x00000001, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000210B, 0x00000016, 0x00000001, 0x00000002, 0x00000043, 0x00000003, PlaySoundAtActor, 0x00000000, 0x0000210C, 0x00000023, 0x00000000, 0x00000043, 0x00000007, PlayerTestEnemy, 0xFE363C80, 0x00000040, 0x00000019, 0x00000000, 0x00000000, 0x00000010, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000006, 0x00000046, 0x00000001, D_802A1B64_74B8F4, 0x00000002, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, DidActionSucceed, 0xFE363C8A, 0x00000043, 0x00000005, GetActorPos, 0x00000000, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000004, func_802A10A4_74AE34, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000002, DidActionSucceed, 0xFE363C80, 0x00000014, 0x00000001, 0xFE363C80, 0x00000019, 0x00000001, 0x00000000, 0x00000043, 0x00000007, PlayerDamageEnemy, 0xFE363C80, 0x08000040, 0x00000019, 0x00000000, 0xFE363C8F, 0x00000070, 0x0000001C, 0x00000000, 0x00000043, 0x00000007, PlayerDamageEnemy, 0xFE363C80, 0x08000040, 0x00000019, 0x00000000, 0xFE363C8E, 0x00000030, 0x00000023, 0x00000000, 0x00000014, 0x00000001, 0xFE363C80, 0x0000001D, 0x00000001, 0x00000001, 0x0000001D, 0x00000001, 0x00000003, 0x00000046, 0x00000001, D_802A19AC_74B73C, 0x00000020, 0x00000000, 0x0000001D, 0x00000001, 0x00000000, 0x0000001D, 0x00000001, 0x00000002, 0x00000046, 0x00000001, D_802A1B64_74B8F4, 0x00000020, 0x00000000, 0x00000023, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000
