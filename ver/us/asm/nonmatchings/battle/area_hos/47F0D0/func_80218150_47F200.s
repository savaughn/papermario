.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80218150_47F200
/* 47F200 80218150 27BDFFA0 */  addiu     $sp, $sp, -0x60
/* 47F204 80218154 AFB10024 */  sw        $s1, 0x24($sp)
/* 47F208 80218158 0080882D */  daddu     $s1, $a0, $zero
/* 47F20C 8021815C AFBF0028 */  sw        $ra, 0x28($sp)
/* 47F210 80218160 AFB00020 */  sw        $s0, 0x20($sp)
/* 47F214 80218164 F7BE0058 */  sdc1      $f30, 0x58($sp)
/* 47F218 80218168 F7BC0050 */  sdc1      $f28, 0x50($sp)
/* 47F21C 8021816C F7BA0048 */  sdc1      $f26, 0x48($sp)
/* 47F220 80218170 F7B80040 */  sdc1      $f24, 0x40($sp)
/* 47F224 80218174 F7B60038 */  sdc1      $f22, 0x38($sp)
/* 47F228 80218178 F7B40030 */  sdc1      $f20, 0x30($sp)
/* 47F22C 8021817C 8E30000C */  lw        $s0, 0xc($s1)
/* 47F230 80218180 8E050000 */  lw        $a1, ($s0)
/* 47F234 80218184 0C0B210B */  jal       get_float_variable
/* 47F238 80218188 26100004 */   addiu    $s0, $s0, 4
/* 47F23C 8021818C 8E050000 */  lw        $a1, ($s0)
/* 47F240 80218190 26100004 */  addiu     $s0, $s0, 4
/* 47F244 80218194 0220202D */  daddu     $a0, $s1, $zero
/* 47F248 80218198 0C0B210B */  jal       get_float_variable
/* 47F24C 8021819C 46000786 */   mov.s    $f30, $f0
/* 47F250 802181A0 8E050000 */  lw        $a1, ($s0)
/* 47F254 802181A4 26100004 */  addiu     $s0, $s0, 4
/* 47F258 802181A8 0220202D */  daddu     $a0, $s1, $zero
/* 47F25C 802181AC 0C0B210B */  jal       get_float_variable
/* 47F260 802181B0 46000506 */   mov.s    $f20, $f0
/* 47F264 802181B4 8E050000 */  lw        $a1, ($s0)
/* 47F268 802181B8 26100004 */  addiu     $s0, $s0, 4
/* 47F26C 802181BC 0220202D */  daddu     $a0, $s1, $zero
/* 47F270 802181C0 0C0B210B */  jal       get_float_variable
/* 47F274 802181C4 46000706 */   mov.s    $f28, $f0
/* 47F278 802181C8 8E050000 */  lw        $a1, ($s0)
/* 47F27C 802181CC 26100004 */  addiu     $s0, $s0, 4
/* 47F280 802181D0 0220202D */  daddu     $a0, $s1, $zero
/* 47F284 802181D4 0C0B210B */  jal       get_float_variable
/* 47F288 802181D8 46000686 */   mov.s    $f26, $f0
/* 47F28C 802181DC 8E050000 */  lw        $a1, ($s0)
/* 47F290 802181E0 26100004 */  addiu     $s0, $s0, 4
/* 47F294 802181E4 0220202D */  daddu     $a0, $s1, $zero
/* 47F298 802181E8 0C0B210B */  jal       get_float_variable
/* 47F29C 802181EC 46000606 */   mov.s    $f24, $f0
/* 47F2A0 802181F0 0220202D */  daddu     $a0, $s1, $zero
/* 47F2A4 802181F4 8E050000 */  lw        $a1, ($s0)
/* 47F2A8 802181F8 0C0B1EAF */  jal       get_variable
/* 47F2AC 802181FC 46000586 */   mov.s    $f22, $f0
/* 47F2B0 80218200 8E240148 */  lw        $a0, 0x148($s1)
/* 47F2B4 80218204 0C09A75B */  jal       get_actor
/* 47F2B8 80218208 0040802D */   daddu    $s0, $v0, $zero
/* 47F2BC 8021820C 4600A521 */  cvt.d.s   $f20, $f20
/* 47F2C0 80218210 4405F000 */  mfc1      $a1, $f30
/* 47F2C4 80218214 3C014014 */  lui       $at, 0x4014
/* 47F2C8 80218218 44810800 */  mtc1      $at, $f1
/* 47F2CC 8021821C 44800000 */  mtc1      $zero, $f0
/* 47F2D0 80218220 4407E000 */  mfc1      $a3, $f28
/* 47F2D4 80218224 4620A500 */  add.d     $f20, $f20, $f0
/* 47F2D8 80218228 0000202D */  daddu     $a0, $zero, $zero
/* 47F2DC 8021822C AFB0001C */  sw        $s0, 0x1c($sp)
/* 47F2E0 80218230 4620A520 */  cvt.s.d   $f20, $f20
/* 47F2E4 80218234 4406A000 */  mfc1      $a2, $f20
/* 47F2E8 80218238 0040802D */  daddu     $s0, $v0, $zero
/* 47F2EC 8021823C E7BA0010 */  swc1      $f26, 0x10($sp)
/* 47F2F0 80218240 E7B80014 */  swc1      $f24, 0x14($sp)
/* 47F2F4 80218244 0C01BFD4 */  jal       func_8006FF50
/* 47F2F8 80218248 E7B60018 */   swc1     $f22, 0x18($sp)
/* 47F2FC 8021824C 0040202D */  daddu     $a0, $v0, $zero
/* 47F300 80218250 82030210 */  lb        $v1, 0x210($s0)
/* 47F304 80218254 2402000A */  addiu     $v0, $zero, 0xa
/* 47F308 80218258 14620007 */  bne       $v1, $v0, .L80218278
/* 47F30C 8021825C 00000000 */   nop
/* 47F310 80218260 8C82000C */  lw        $v0, 0xc($a0)
/* 47F314 80218264 3C013ECC */  lui       $at, 0x3ecc
/* 47F318 80218268 3421CCCD */  ori       $at, $at, 0xcccd
/* 47F31C 8021826C 44810000 */  mtc1      $at, $f0
/* 47F320 80218270 00000000 */  nop
/* 47F324 80218274 E4400028 */  swc1      $f0, 0x28($v0)
.L80218278:
/* 47F328 80218278 8FBF0028 */  lw        $ra, 0x28($sp)
/* 47F32C 8021827C 8FB10024 */  lw        $s1, 0x24($sp)
/* 47F330 80218280 8FB00020 */  lw        $s0, 0x20($sp)
/* 47F334 80218284 D7BE0058 */  ldc1      $f30, 0x58($sp)
/* 47F338 80218288 D7BC0050 */  ldc1      $f28, 0x50($sp)
/* 47F33C 8021828C D7BA0048 */  ldc1      $f26, 0x48($sp)
/* 47F340 80218290 D7B80040 */  ldc1      $f24, 0x40($sp)
/* 47F344 80218294 D7B60038 */  ldc1      $f22, 0x38($sp)
/* 47F348 80218298 D7B40030 */  ldc1      $f20, 0x30($sp)
/* 47F34C 8021829C 24020002 */  addiu     $v0, $zero, 2
/* 47F350 802182A0 03E00008 */  jr        $ra
/* 47F354 802182A4 27BD0060 */   addiu    $sp, $sp, 0x60