#include "dead.h"
#include "common.h"
#include "dead_structs.h"

// Copy of flo_14 (CCBE20.c)

#define NAMESPACE EE70C0

extern const s32 D_802453E0_EEB990[];
extern s32 D_8024462C_EEABDC;
extern s32 D_80244630_EEABE0;

#include "world/common/enemy/FlyingAI.inc.c"

#include "world/common/GetNpcCollisionHeight.inc.c"

#include "world/common/AddPlayerHandsOffset.inc.c"

// Needs data migrated
#ifdef NON_MATCHING
ApiStatus func_80242260_EE8810(Evt *script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;
    if (isInitialCall) {
        D_8024462C_EEABDC = 0;
    }
    if (D_8024462C_EEABDC != 0) {
        D_8024462C_EEABDC = 0;
        dead_evt_set_variable(script, *args++, D_80244630_EEABE0);
        return ApiStatus_DONE2;
    }
    return ApiStatus_BLOCK;
}
#else
INCLUDE_ASM(s32, "EE70C0", func_80242260_EE8810);
#endif

ApiStatus EE70C0_ItemChoice_SaveSelected(Evt *script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;
    D_80244630_EEABE0 = dead_evt_get_variable(script, *args++);
    D_8024462C_EEABDC = 1;
    return ApiStatus_DONE2;
}

ApiStatus func_802422EC_EE889C(Evt* script, s32 isInitialCall) {
    Bytecode* args = script->ptrReadPos;
    s32* ptr = (s32*) evt_get_variable(script, *args);
    s32 i;

    if (ptr != NULL) {
        for (i = 0; ptr[i] != 0; i++) {
            D_802453E0_EEB990[i] = ptr[i];
        }
        D_802453E0_EEB990[i] = 0;
    } else {
        for (i = 0; i < 91; i++) {
            D_802453E0_EEB990[i] = i + 128;
            D_802453E0_EEB990[91] = 0;
        }
    }
    return ApiStatus_DONE2;
}

extern ApiStatus EE65B0_UpdateTexturePanSmooth;

const s32 padding[] = {0, 0, 0};

// TODO sort out this mess
const s32 D_802453E0_EEB990[] = { 0x43A00000, 0x00000000, 0x00000000, 0x43870000, 0xC32A0000, 0x00000000, 0x425C0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x802401A8, &EE65B0_UpdateTexturePanSmooth, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80200000, 0x0019011F, 0x00000043, 0x00000002, 0x802D790C, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000043, 0x00000005, 0x802E339C, 0x00000000, 0x0000007F, 0x00000000, 0x00000008, 0x00000012, 0x00000000, 0x00000014, 0x00000001, 0xF5DE0180, 0x00000018, 0x00000001, 0x00000035, 0x00000043, 0x00000005, 0x802E339C, 0x00000000, 0x00000034, 0x00000000, 0x00000008, 0x0000001C, 0x00000000, 0x00000043, 0x00000005, 0x802E339C, 0x00000000, 0x00000035, 0x00000000, 0x00000008, 0x00000023, 0x00000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x0000004D, 0x00000001, 0x0000001B, 0x00000043, 0x00000003, 0x802DF78C, 0x0000003C, 0x00000000, 0x00000044, 0x00000001, 0x80286004, 0x00000043, 0x00000003, 0x802D78AC, 0x80241760, 0x00000001, 0x00000008, 0x00000001, 0x00000064, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000047, 0x00000005, 0x80240120, 0x00080000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000024, 0x00000002, 0xF5DE0329, 0x00000026, 0x00000043, 0x00000002, 0x802E6F50, 0xFFFFFFFF, 0x00000043, 0x00000003, 0x802D8B60, 0x00000000, 0x00000000, 0x00000043, 0x00000006, 0x802D7CD8, 0x00000000, 0x00000003, 0x00000019, 0x00000010, 0x00001000, 0x00000043, 0x00000005, SetSleepBubbleTimeLeft, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x00000003, 0x802D7B70, 0x00000000, 0x00000001, 0x00000043, 0x00000003, 0x80048338, 0x00000000, 0x802412C0, 0x00000046, 0x00000001, 0x80241300, 0x00000043, 0x00000002, 0x802D790C, 0xFE363C80, 0x0000000A, 0x00000002, 0xFE363C80, 0x00000001, 0x00000044, 0x00000001, 0x802404D8, 0x00000012, 0x00000000, 0x00000043, 0x00000004, AddCoin, 0x00000000, 0x00000001, 0x7FFFFE00, 0x00000024, 0x00000002, 0xFE363C80, 0x8024017C, 0x00000044, 0x00000001, 0x80285C70, 0x00000013, 0x00000000, 0x00000043, 0x00000004, AddCoin, 0x00000000, 0x0000000E, 0x7FFFFE00, 0x00000044, 0x00000001, 0x802413B0, 0x00000046, 0x00000001, 0x80240060, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000, 0x0000000C, 0x00000002, 0xF5DE0180, 0x00000035, 0x00000024, 0x00000002, 0xFE363C83, 0x00000007, 0x00000024, 0x00000002, 0xFE363C84, 0x00000005, 0x00000012, 0x00000000, 0x00000024, 0x00000002, 0xFE363C83, 0x0000000F, 0x00000024, 0x00000002, 0xFE363C84, 0x00000001, 0x00000013, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000024, 0x00000002, 0xFE363C85, 0xFE363C83, 0x00000005, 0x00000001, 0xFE363C85, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000027, 0x00000002, 0xFE363C81, 0x00000001, 0x00000043, 0x00000005, 0x802DB210, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000008, 0x00000001, 0xFE363C84, 0x00000006, 0x00000000, 0x00000024, 0x00000002, 0xFE363C85, 0xFE363C83, 0x00000005, 0x00000001, 0xFE363C85, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000027, 0x00000002, 0xFE363C81, 0xFFFFFFFF, 0x00000043, 0x00000005, 0x802DB210, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000008, 0x00000001, 0xFE363C84, 0x00000006, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000002, 0x802DE448, 0x00000001, 0x00000043, 0x00000002, 0x802DE404, 0x00000001, 0x00000043, 0x00000005, 0x802DB210, 0x0000000A, 0x00000000, 0x0000010E, 0x00000000, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000005, 0x802D8D40, 0x00000000, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000005, 0x802D9320, 0x00000000, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000003, 0x802D90D8, 0x00000000, 0x0000041A, 0x00000043, 0x00000004, 0x802D903C, 0x00000000, 0xF24AA280, 0xF24A8A80, 0x00000043, 0x00000003, 0x802D93E4, 0x00000000, 0xF24BE280, 0x00000043, 0x00000004, 0x802D8C7C, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, 0x802D9848, 0x00000000, 0xF24A7E80, 0x00000043, 0x00000003, 0x802D90D8, 0x00000000, 0x0000012C, 0x00000043, 0x00000004, 0x802D903C, 0x00000000, 0xF24AB680, 0xF24A5280, 0x00000043, 0x00000003, 0x802D93E4, 0x00000000, 0xF24A9480, 0x00000043, 0x00000004, 0x802D8C7C, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, 0x802D9848, 0x00000000, 0xF24A7E80, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0009, 0x00CB0009, 0x00000205, 0x001100C3, 0x00000043, 0x00000003, 0x802DB654, 0x0000000A, 0x00CB0009, 0x00000056, 0x00000000, 0x00000043, 0x00000003, 0x802D90D8, 0x00000000, 0x000003E8, 0x00000043, 0x00000003, 0x802D93E4, 0x00000000, 0xF24A8E80, 0x00000043, 0x00000004, 0x802D8C7C, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, 0x802D9848, 0x00000000, 0xF24A7E80, 0x00000057, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000003, 0x802DB5E8, 0x0000000A, 0xF24A7A80, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000027, 0x00000002, 0xFE363C81, 0x00000190, 0x00000043, 0x00000006, 0x802DBC24, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000028, 0x00000043, 0x00000003, 0x802D78AC, 0x80241768, 0x00000009, 0x00000008, 0x00000001, 0x00000046, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000003, 0x802DB3C8, 0x0000000B, 0x00000030, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000005, 0x802E1C00, 0xFFFFFFE2, 0x0000001E, 0x00000014, 0x0000000B, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, 0x802E1C7C, 0x00000043, 0x00000005, 0x802DB310, 0x0000000B, 0x00000000, 0x00000000, 0xFE363C80, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C82, 0xFE363C83, 0xFE363C84, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0xFE363C82, 0xFE363C83, 0xFE363C84, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000005, 0x802E1C00, 0x0000001E, 0xFFFFFFE2, 0x00000014, 0x0000000B, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, 0x802E1C7C, 0x00000043, 0x00000005, 0x802DB310, 0x0000000B, 0x00000000, 0x00000000, 0xFE363C80, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C82, 0xFE363C83, 0xFE363C84, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0xFE363C82, 0xFE363C83, 0xFE363C84, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000043, 0x00000004, 0x802DF41C, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x0000000D, 0x00000002, 0xFE363C81, 0x000000DC, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000003, 0x802DF124, 0x0000000A, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000003, 0x802DB5E8, 0x0000000A, 0xF24A7A80, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000028, 0x00000002, 0xFE363C81, 0x00000190, 0x00000043, 0x00000006, 0x802DBC24, 0x0000000A, 0xFE363C80, 0x00000113, 0xFE363C82, 0x0000001E, 0x00000045, 0x00000002, 0x8024032C, 0xFE363C89, 0x00000005, 0x00000001, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xF97188A6, 0x00000001, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000002, 0x802DE448, 0x00000001, 0x00000008, 0x00000001, 0x0000000A, 0x00000049, 0x00000001, 0xFE363C89, 0x00000043, 0x00000004, 0x802DC5C0, 0x0000000A, 0x00000100, 0x00000001, 0x00000043, 0x00000005, 0x802DC654, 0x0000000A, 0xFE363C80, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000006, 0x802DBC24, 0x0000000A, 0xFE363C80, 0x000001C2, 0xFE363C82, 0x0000001E, 0x00000043, 0x00000002, 0x802DE448, 0x00000000, 0x00000048, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000014, 0x00000001, 0xF5DE0180, 0x00000018, 0x00000001, 0x00000032, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009A, 0x00000043, 0x00000002, 0x802DE6A4, 0x00010021, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000002, 0x802DE6A4, 0x00080007, 0x00000008, 0x00000001, 0x00000014, 0x00000043, 0x00000002, 0x802DE6A4, 0x00010002, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009B, 0x00000024, 0x00000002, 0xF5DE0180, 0x00000032, 0x00000018, 0x00000001, 0x00000035, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009C, 0x00000018, 0x00000001, 0x00000039, 0x0000000A, 0x00000002, 0xF8406102, 0x00000000, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009D, 0x00000024, 0x00000002, 0xF8406102, 0x00000001, 0x00000012, 0x00000000, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009E, 0x00000013, 0x00000000, 0x0000001C, 0x00000000, 0x00000043, 0x00000006, 0x802DD810, 0x0000000A, 0x00CB0007, 0x00CB0001, 0x00000205, 0x0011009F, 0x00000023, 0x00000000, 0x00000024, 0x00000002, 0xF97188A6, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000004, 0x802DB4EC, 0x0000000A, 0x00000040, 0x00000028, 0x00000043, 0x00000003, 0x802DC7C8, 0x0000000A, 0x00000000, 0x0000000C, 0x00000002, 0xF5DE0180, 0x00000035, 0x00000043, 0x00000005, 0x802DB210, 0x0000000A, 0x00000000, 0x0000010E, 0x00000000, 0x00000043, 0x00000003, 0x80049154, 0xFFFFFFFF, 0x80240B28, 0x00000044, 0x00000001, 0x8024032C, 0x00000012, 0x00000000, 0x00000043, 0x00000005, 0x802DB210, 0x0000000A, 0x00000000, 0x000001C2, 0x00000000, 0x00000043, 0x00000003, 0x80049154, 0xFFFFFFFF, 0x80240B28, 0x00000024, 0x00000002, 0xF97188A6, 0x00000000, 0x00000044, 0x00000001, 0x8024094C, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000043, 0x00000003, 0x802DC7C8, 0x0000000B, 0x00000000, 0x00000043, 0x00000003, 0x802DB654, 0x0000000B, 0x00CB0002, 0x00000043, 0x00000003, 0x802DD3E0, 0x0000000A, 0x00000003, 0x00000043, 0x00000003, 0x802DD3E0, 0x0000000B, 0x00000003, 0x00000043, 0x0000000A, 0x802DD520, 0x0000000A, 0x00000000, 0x00000001, 0x00000005, 0x00000005, 0x0000000D, 0x00000005, 0x00000000, 0x00000000, 0x00000043, 0x0000000A, 0x802DD520, 0x0000000B, 0x00000000, 0x00000001, 0x00000005, 0x00000005, 0x0000000D, 0x00000005, 0x00000000, 0x00000000, 0x0000000C, 0x00000002, 0xF5DE0180, 0x00000035, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0x00000000, 0x0000010E, 0xFFFFFFFB, 0x00000012, 0x00000000, 0x00000043, 0x00000005, 0x802DB210, 0x0000000B, 0x00000000, 0x000001C2, 0xFFFFFFFB, 0x00000043, 0x00000003, 0x80048F68, 0xFFFFFFFF, 0x8024079C, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x0000000A, 0x80240300, 0x00000000, 0x437A0000, 0x00000000, 0x00400D01, 0x80240CD0, 0x00000000, 0x00000000, 0x0000010E, 0x80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00000000, 0x00000000, 0x00000000, 0x001A00E1, 0x0000000B, 0x80240300, 0x00000000, 0x437A0000, 0x00000000, 0x00008F01, 0x80240DB4, 0x00000000, 0x00000000, 0x0000010E, 0x80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00000000, 0x00000000, 0x00000000, 0x001A00E1, 0x00000002, 0x80240EE0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000024, 0x00000002, 0xF84060F9, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x0000000A, 0x00000002, 0xF84060F9, 0x00000000, 0x00000043, 0x00000007, 0x8011A58C, 0x802CCF00, 0xFFFFFF4C, 0x00000000, 0xFFFFFFEE, 0x00000000, 0x80000000, 0x00000043, 0x00000002, 0x8011A804, 0x802412E0, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x0000000A, 0xF24A7CE7, 0x0000000D, 0xF24A7D80, 0x00000010, 0xF24A7E1A, 0x00000013, 0xF24A7EB4, 0x00000016, 0xF24A7F4D, 0x00000019, 0xF24A7EB4, 0x00000018, 0xF24A7E1A, 0x00000019, 0xF24A7D80, 0x00000018, 0xF24A7CE7, 0x0000000A, 0xF24A814D, 0x0000000A, 0x00000002, 0xF84060F9, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x0000000A, 0x00000002, 0xF84060F9, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000013, 0x00000000, 0x00000043, 0x00000002, 0x802DE448, 0x00000001, 0x00000056, 0x00000000, 0x00000030, 0x00000001, 0x80241360, 0x00000005, 0x00000001, 0x0000000A, 0x00000032, 0x00000002, 0xFE363C81, 0xFE363C82, 0x00000043, 0x00000005, 0x802D8758, 0x00000000, 0x00000000, 0xFE363C81, 0xFE363C82, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000005, 0x802D8D40, 0x00000000, 0xFFFFFF56, 0x00000000, 0x00000023, 0x00000043, 0x00000005, 0x802D9320, 0x00000000, 0xFFFFFF56, 0x00000000, 0x00000023, 0x00000043, 0x00000003, 0x802D90D8, 0x00000000, 0x00000258, 0x00000043, 0x00000004, 0x802D903C, 0x00000000, 0xF24ADE80, 0xF24A5680, 0x00000043, 0x00000004, 0x802D914C, 0x00000000, 0xF249B280, 0xF24ADE80, 0x00000043, 0x00000003, 0x802D93E4, 0x00000000, 0xF24A8080, 0x00000043, 0x00000004, 0x802D8C7C, 0x00000000, 0x00000000, 0x00000001, 0x00000043, 0x00000003, 0x802D9848, 0x00000000, 0xF24A7E80, 0x00000056, 0x00000000, 0x00000008, 0x00000001, 0x00000064, 0x00000043, 0x0000000F, 0x802E58EC, 0x00000006, 0x00000004, 0xFFFFFF4C, 0x00000000, 0xFFFFFFF1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000043, 0x0000000F, 0x802E58EC, 0x00000006, 0x00000004, 0xFFFFFF42, 0x00000000, 0xFFFFFFDD, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000000, 0x00000056, 0x00000000, 0x00000005, 0x00000001, 0x00000006, 0x00000043, 0x00000004, 0x802D7AC0, 0x0000000B, 0x00000187, 0x00000000, 0x00000008, 0x00000001, 0x00000014, 0x00000006, 0x00000000, 0x00000057, 0x00000000, 0x00000043, 0x00000005, 0x802E1C00, 0x00000000, 0xFFFFFFCE, 0x00000078, 0x00000002, 0x00000005, 0x00000001, 0x00000000, 0x00000043, 0x00000001, 0x802E1C7C, 0x00000043, 0x00000005, 0x802D6C60, 0x00000010, 0x00000000, 0xFE363C80, 0x00000000, 0x00000008, 0x00000001, 0x00000001, 0x0000000A, 0x00000002, 0xFE363C81, 0x00000000, 0x00000007, 0x00000000, 0x00000013, 0x00000000, 0x00000006, 0x00000000, 0x00000043, 0x00000004, AddCoin, 0x00000000, 0x0000000C, 0x7FFFFE00, 0x00000043, 0x00000004, AddCoin, 0x00000001, 0x0000000E, 0x7FFFFE00, 0x00000008, 0x00000001, 0x0000000F, 0x00000043, 0x00000003, 0x802D9DE4, 0x00000000, 0xF24BE280, 0x00000043, 0x00000002, 0x802DE448, 0x00000000, 0x00000012, 0x00000000, 0x00000043, 0x00000004, AddCoin, 0x00000000, 0x0000000C, 0x7FFFFE00, 0x00000043, 0x00000004, AddCoin, 0x00000001, 0x0000000E, 0x7FFFFE00, 0x00000043, 0x00000005, 0x802D6C60, 0x00000010, 0x00000000, 0xFFFFFFCE, 0x00000000, 0x00000013, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x666C6F5F, 0x31330000, 0x666C6F5F, 0x30300000, };
