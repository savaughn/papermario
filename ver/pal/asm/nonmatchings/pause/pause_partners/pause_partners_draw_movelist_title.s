.set noat      /* allow manual use of $at */
.set noreorder /* don't insert nops after branches */

/* Generated by spimdisasm 1.11.1 */

glabel pause_partners_draw_movelist_title
/* 1450FC 802502BC 27BDFFD8 */  addiu      $sp, $sp, -0x28
/* 145100 802502C0 AFB00018 */  sw         $s0, 0x18($sp)
/* 145104 802502C4 00A0802D */  daddu      $s0, $a1, $zero
/* 145108 802502C8 AFB1001C */  sw         $s1, 0x1C($sp)
/* 14510C 802502CC 00C0882D */  daddu      $s1, $a2, $zero
/* 145110 802502D0 AFBF0020 */  sw         $ra, 0x20($sp)
/* 145114 802502D4 0C094C60 */  jal        pause_get_menu_msg
/* 145118 802502D8 24040051 */   addiu     $a0, $zero, 0x51
/* 14511C 802502DC 0040202D */  daddu      $a0, $v0, $zero
/* 145120 802502E0 3C038015 */  lui        $v1, %hi(gCurrentLanguage)
/* 145124 802502E4 8C63AE4C */  lw         $v1, %lo(gCurrentLanguage)($v1)
/* 145128 802502E8 2402FFFF */  addiu      $v0, $zero, -0x1
/* 14512C 802502EC 3C058027 */  lui        $a1, %hi(D_PAL_80271B38)
/* 145130 802502F0 00A32821 */  addu       $a1, $a1, $v1
/* 145134 802502F4 90A51B38 */  lbu        $a1, %lo(D_PAL_80271B38)($a1)
/* 145138 802502F8 240700FF */  addiu      $a3, $zero, 0xFF
/* 14513C 802502FC AFA20010 */  sw         $v0, 0x10($sp)
/* 145140 80250300 24020001 */  addiu      $v0, $zero, 0x1
/* 145144 80250304 02223021 */  addu       $a2, $s1, $v0
/* 145148 80250308 AFA20014 */  sw         $v0, 0x14($sp)
/* 14514C 8025030C 0C049403 */  jal        draw_msg
/* 145150 80250310 02052821 */   addu      $a1, $s0, $a1
/* 145154 80250314 8FBF0020 */  lw         $ra, 0x20($sp)
/* 145158 80250318 8FB1001C */  lw         $s1, 0x1C($sp)
/* 14515C 8025031C 8FB00018 */  lw         $s0, 0x18($sp)
/* 145160 80250320 03E00008 */  jr         $ra
/* 145164 80250324 27BD0028 */   addiu     $sp, $sp, 0x28