#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E48A0"))) PPC_WEAK_FUNC(sub_823E48A0);
PPC_FUNC_IMPL(__imp__sub_823E48A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E48A8;
	sub_8224878C(ctx, base);
	// addi r11,r4,30
	ctx.r11.s64 = ctx.r4.s64 + 30;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r8,r4,97
	ctx.r8.s64 = ctx.r4.s64 * 97;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r4,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,4393
	ctx.r6.s64 = ctx.r6.s64 + 4393;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r4,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r4,25
	ctx.r9.s64 = ctx.r4.s64 + 25;
	// addi r30,r8,202
	ctx.r30.s64 = ctx.r8.s64 + 202;
	// addi r29,r8,264
	ctx.r29.s64 = ctx.r8.s64 + 264;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,472(r5)
	PPC_STORE_U32(ctx.r5.u32 + 472, ctx.r6.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r10,492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 492, ctx.r10.u32);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r8,326
	ctx.r4.s64 = ctx.r8.s64 + 326;
	// addi r7,r8,342
	ctx.r7.s64 = ctx.r8.s64 + 342;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r31,728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 728, ctx.r31.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,748(r5)
	PPC_STORE_U32(ctx.r5.u32 + 748, ctx.r10.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r30,3544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3544, ctx.r30.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,3564(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3564, ctx.r10.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r29,3800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3800, ctx.r29.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,3820(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3820, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,984(r5)
	PPC_STORE_U32(ctx.r5.u32 + 984, ctx.r4.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,2008(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2008, ctx.r7.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,2028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2028, ctx.r10.u32);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E49E0"))) PPC_WEAK_FUNC(sub_823E49E0);
PPC_FUNC_IMPL(__imp__sub_823E49E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E49E8;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-15060
	ctx.r10.s64 = ctx.r11.s64 + -15060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,194
	ctx.r4.s64 = 194;
	// bl 0x822aa648
	ctx.lr = 0x823E4A18;
	sub_822AA648(ctx, base);
	// addi r3,r30,194
	ctx.r3.s64 = ctx.r30.s64 + 194;
	// li r4,62
	ctx.r4.s64 = 62;
	// bl 0x822aa648
	ctx.lr = 0x823E4A24;
	sub_822AA648(ctx, base);
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// li r4,62
	ctx.r4.s64 = 62;
	// bl 0x822aa648
	ctx.lr = 0x823E4A30;
	sub_822AA648(ctx, base);
	// addi r3,r30,318
	ctx.r3.s64 = ctx.r30.s64 + 318;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x823E4A3C;
	sub_822AA648(ctx, base);
	// addi r3,r30,334
	ctx.r3.s64 = ctx.r30.s64 + 334;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x823E4A48;
	sub_822AA648(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c2ff0
	ctx.lr = 0x823E4A54;
	sub_823C2FF0(ctx, base);
	// addi r27,r31,408
	ctx.r27.s64 = ctx.r31.s64 + 408;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c35b8
	ctx.lr = 0x823E4A68;
	sub_823C35B8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,350
	ctx.r4.s64 = 350;
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r28.u32);
	// bl 0x822aa648
	ctx.lr = 0x823E4A80;
	sub_822AA648(ctx, base);
	// addi r26,r31,716
	ctx.r26.s64 = ctx.r31.s64 + 716;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x823E4A90;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r26,r26,-4
	ctx.r26.s64 = ctx.r26.s64 + -4;
	// lfs f30,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f30.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_823E4AB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c3240
	ctx.lr = 0x823E4ABC;
	sub_823C3240(ctx, base);
	// li r7,30
	ctx.r7.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823c31b0
	ctx.lr = 0x823E4AD4;
	sub_823C31B0(ctx, base);
	// stwu r28,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r26.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,364(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// stw r25,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r25.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r6,364(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 364);
	// stw r28,452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 452, ctx.r28.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,364(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stw r28,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r9,364(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// stw r25,4036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4036, ctx.r25.u32);
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 24, ctx.xer);
	// blt cr6,0x823e4ab0
	if (ctx.cr6.lt) goto loc_823E4AB0;
	// bl 0x8215bd60
	ctx.lr = 0x823E4B3C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4b4c
	if (ctx.cr6.eq) goto loc_823E4B4C;
	// stw r25,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r25.u32);
loc_823E4B4C:
	// li r5,16100
	ctx.r5.s64 = 16100;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x82106f58
	ctx.lr = 0x823E4B5C;
	sub_82106F58(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,36292
	ctx.r9.u64 = ctx.r11.u64 | 36292;
	// ori r8,r10,36548
	ctx.r8.u64 = ctx.r10.u64 | 36548;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r25,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r25.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r25,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E4B98"))) PPC_WEAK_FUNC(sub_823E4B98);
PPC_FUNC_IMPL(__imp__sub_823E4B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823E4BA0;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82230aa0
	ctx.lr = 0x823E4BB8;
	sub_82230AA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82230b60
	ctx.lr = 0x823E4BC4;
	sub_82230B60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e4598
	ctx.lr = 0x823E4BD8;
	sub_823E4598(ctx, base);
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r28,472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 472, ctx.r28.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r26,492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 492, ctx.r26.u32);
	// bl 0x823e47e0
	ctx.lr = 0x823E4C20;
	sub_823E47E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231750
	ctx.lr = 0x823E4C2C;
	sub_82231750(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82231750
	ctx.lr = 0x823E4C3C;
	sub_82231750(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82231750
	ctx.lr = 0x823E4C4C;
	sub_82231750(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82231750
	ctx.lr = 0x823E4C5C;
	sub_82231750(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82231750
	ctx.lr = 0x823E4C6C;
	sub_82231750(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82231750
	ctx.lr = 0x823E4C7C;
	sub_82231750(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82231750
	ctx.lr = 0x823E4C8C;
	sub_82231750(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82231750
	ctx.lr = 0x823E4C9C;
	sub_82231750(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82231750
	ctx.lr = 0x823E4CAC;
	sub_82231750(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82231750
	ctx.lr = 0x823E4CBC;
	sub_82231750(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82231750
	ctx.lr = 0x823E4CCC;
	sub_82231750(ctx, base);
	// rlwinm r5,r30,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// li r6,31
	ctx.r6.s64 = 31;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r27,r28,202
	ctx.r27.s64 = ctx.r28.s64 + 202;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82231780
	ctx.lr = 0x823E4CF4;
	sub_82231780(ctx, base);
	// addi r28,r28,264
	ctx.r28.s64 = ctx.r28.s64 + 264;
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822317e8
	ctx.lr = 0x823E4D0C;
	sub_822317E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r27,3544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3544, ctx.r27.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r26,3564(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3564, ctx.r26.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r28,3800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3800, ctx.r28.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r26,3820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3820, ctx.r26.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,256(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// stw r24,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r24.u32);
	// stw r10,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r23,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r23.u32);
	// stw r10,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// stw r22,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r22.u32);
	// stw r10,748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 748, ctx.r10.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// stw r21,1008(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1008, ctx.r21.u32);
	// stw r10,1004(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1004, ctx.r10.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r20,1264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1264, ctx.r20.u32);
	// stw r10,1260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1260, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// stw r19,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r19.u32);
	// stw r10,1516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1516, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 256);
	// stw r18,1776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1776, ctx.r18.u32);
	// stw r10,1772(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1772, ctx.r10.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 256);
	// stw r10,2028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2028, ctx.r10.u32);
	// stw r17,2032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2032, ctx.r17.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r16,2288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2288, ctx.r16.u32);
	// stw r10,2284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2284, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// stw r15,2544(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2544, ctx.r15.u32);
	// stw r10,2540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2540, ctx.r10.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// stw r14,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r14.u32);
	// stw r10,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E74"))) PPC_WEAK_FUNC(sub_823E4E74);
PPC_FUNC_IMPL(__imp__sub_823E4E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E4E78"))) PPC_WEAK_FUNC(sub_823E4E78);
PPC_FUNC_IMPL(__imp__sub_823E4E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823E4E80;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823e4598
	ctx.lr = 0x823E4E9C;
	sub_823E4598(ctx, base);
	// addi r11,r29,30
	ctx.r11.s64 = ctx.r29.s64 + 30;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r30,30
	ctx.r9.s64 = ctx.r30.s64 + 30;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,292
	ctx.r5.s64 = ctx.r30.s64 + 292;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 472, ctx.r9.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 492, ctx.r8.u32);
	// bl 0x823e47e0
	ctx.lr = 0x823E4EE8;
	sub_823E47E0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822318f0
	ctx.lr = 0x823E4EF8;
	sub_822318F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822318f0
	ctx.lr = 0x823E4F0C;
	sub_822318F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822318f0
	ctx.lr = 0x823E4F20;
	sub_822318F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x822318f0
	ctx.lr = 0x823E4F34;
	sub_822318F0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822318f0
	ctx.lr = 0x823E4F48;
	sub_822318F0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822318f0
	ctx.lr = 0x823E4F5C;
	sub_822318F0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x822318f0
	ctx.lr = 0x823E4F70;
	sub_822318F0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x822318f0
	ctx.lr = 0x823E4F84;
	sub_822318F0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x822318f0
	ctx.lr = 0x823E4F98;
	sub_822318F0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x822318f0
	ctx.lr = 0x823E4FAC;
	sub_822318F0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822318f0
	ctx.lr = 0x823E4FC0;
	sub_822318F0(ctx, base);
	// rlwinm r6,r29,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subf r11,r29,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r29.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r27,202
	ctx.r26.s64 = ctx.r27.s64 + 202;
	// li r7,31
	ctx.r7.s64 = 31;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82231920
	ctx.lr = 0x823E4FEC;
	sub_82231920(ctx, base);
	// addi r27,r27,264
	ctx.r27.s64 = ctx.r27.s64 + 264;
	// li r7,31
	ctx.r7.s64 = 31;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231990
	ctx.lr = 0x823E5008;
	sub_82231990(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r28,r9
	ctx.r3.u64 = ctx.r28.u64 + ctx.r9.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r26,3544(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3544, ctx.r26.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,3564(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3564, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r28,r8
	ctx.r5.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r27,3800(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3800, ctx.r27.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r3,r28,r8
	ctx.r3.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,3820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3820, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,256(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// stw r24,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r24.u32);
	// stw r10,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r23,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r23.u32);
	// stw r10,492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 492, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// stw r22,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r22.u32);
	// stw r10,748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 748, ctx.r10.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// stw r21,1008(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1008, ctx.r21.u32);
	// stw r10,1004(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1004, ctx.r10.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r20,1264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1264, ctx.r20.u32);
	// stw r10,1260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1260, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// stw r19,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r19.u32);
	// stw r10,1516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1516, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 256);
	// stw r18,1776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1776, ctx.r18.u32);
	// stw r10,1772(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1772, ctx.r10.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 256);
	// stw r17,2032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2032, ctx.r17.u32);
	// stw r10,2028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2028, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r16,2288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2288, ctx.r16.u32);
	// stw r10,2284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2284, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,256(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// stw r10,2540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2540, ctx.r10.u32);
	// stw r15,2544(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2544, ctx.r15.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// stw r14,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r14.u32);
	// stw r10,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5174"))) PPC_WEAK_FUNC(sub_823E5174);
PPC_FUNC_IMPL(__imp__sub_823E5174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5178"))) PPC_WEAK_FUNC(sub_823E5178);
PPC_FUNC_IMPL(__imp__sub_823E5178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,97
	ctx.r11.s64 = ctx.r4.s64 * 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823e47e0
	ctx.lr = 0x823E51A4;
	sub_823E47E0(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,364(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 364);
	// stw r9,708(r5)
	PPC_STORE_U32(ctx.r5.u32 + 708, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E51E0"))) PPC_WEAK_FUNC(sub_823E51E0);
PPC_FUNC_IMPL(__imp__sub_823E51E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823E51E8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r26,r27,326
	ctx.r26.s64 = ctx.r27.s64 + 326;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823e42d8
	ctx.lr = 0x823E5214;
	sub_823E42D8(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r28,25
	ctx.r11.s64 = ctx.r28.s64 + 25;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r27,342
	ctx.r27.s64 = ctx.r27.s64 + 342;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,304(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 304);
	// stw r7,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r7.u32);
	// stw r29,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,304(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// stw r10,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r10.u32);
	// stw r29,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r29.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,304(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 304);
	// stw r7,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r7.u32);
	// stw r29,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r26.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r25,1004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1004, ctx.r25.u32);
	// lwz r6,16(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x823e42d8
	ctx.lr = 0x823E52C8;
	sub_823E42D8(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,12(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,304(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 304);
	// stw r6,1264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1264, ctx.r6.u32);
	// stw r29,1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1260, ctx.r29.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r3,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r3.u32);
	// stw r29,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// stw r9,1776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1776, ctx.r9.u32);
	// stw r29,1772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1772, ctx.r29.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r27,2008(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2008, ctx.r27.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r25,2028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2028, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823E5348"))) PPC_WEAK_FUNC(sub_823E5348);
PPC_FUNC_IMPL(__imp__sub_823E5348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// addi r10,r3,236
	ctx.r10.s64 = ctx.r3.s64 + 236;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e5384
	if (!ctx.cr6.gt) goto loc_823E5384;
	// addi r10,r10,904
	ctx.r10.s64 = ctx.r10.s64 + 904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E5364:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e5374
	if (ctx.cr6.eq) goto loc_823E5374;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823E5374:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e5364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5364;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x823e538c
	if (ctx.cr6.gt) goto loc_823E538C;
loc_823E5384:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E538C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5394"))) PPC_WEAK_FUNC(sub_823E5394);
PPC_FUNC_IMPL(__imp__sub_823E5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5398"))) PPC_WEAK_FUNC(sub_823E5398);
PPC_FUNC_IMPL(__imp__sub_823E5398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2072);
	// addi r11,r11,67
	ctx.r11.s64 = ctx.r11.s64 + 67;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E53AC"))) PPC_WEAK_FUNC(sub_823E53AC);
PPC_FUNC_IMPL(__imp__sub_823E53AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E53B0"))) PPC_WEAK_FUNC(sub_823E53B0);
PPC_FUNC_IMPL(__imp__sub_823E53B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e53b8
	sub_823E53B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53B8"))) PPC_WEAK_FUNC(sub_823E53B8);
PPC_FUNC_IMPL(__imp__sub_823E53B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-14856
	ctx.r9.s64 = ctx.r11.s64 + -14856;
	// addi r8,r10,-14992
	ctx.r8.s64 = ctx.r10.s64 + -14992;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c52a0
	ctx.lr = 0x823E53F4;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x823E53FC;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e5418
	if (ctx.cr6.eq) goto loc_823E5418;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E5414;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E5418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5430"))) PPC_WEAK_FUNC(sub_823E5430);
PPC_FUNC_IMPL(__imp__sub_823E5430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2072);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,2068(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r7,r8,-15056
	ctx.r7.s64 = ctx.r8.s64 + -15056;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x82106eb0
	ctx.lr = 0x823E5468;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e5480
	if (ctx.cr6.eq) goto loc_823E5480;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e5484
	if (!ctx.cr6.eq) goto loc_823E5484;
loc_823E5480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E5484:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5494"))) PPC_WEAK_FUNC(sub_823E5494);
PPC_FUNC_IMPL(__imp__sub_823E5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5498"))) PPC_WEAK_FUNC(sub_823E5498);
PPC_FUNC_IMPL(__imp__sub_823E5498) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E54B0"))) PPC_WEAK_FUNC(sub_823E54B0);
PPC_FUNC_IMPL(__imp__sub_823E54B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E54C8"))) PPC_WEAK_FUNC(sub_823E54C8);
PPC_FUNC_IMPL(__imp__sub_823E54C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823E54D0;
	sub_82248770(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r24,108(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x822aa648
	ctx.lr = 0x823E54F0;
	sub_822AA648(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r10,-14772
	ctx.r5.s64 = ctx.r10.s64 + -14772;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a5f0
	ctx.lr = 0x823E5504;
	sub_8218A5F0(ctx, base);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823e55bc
	if (!ctx.cr6.gt) goto loc_823E55BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r30,268
	ctx.r23.s64 = ctx.r30.s64 + 268;
	// addi r27,r11,-15056
	ctx.r27.s64 = ctx.r11.s64 + -15056;
loc_823E5528:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x821ff4f0
	ctx.lr = 0x823E5534;
	sub_821FF4F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823E553C:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x82106ee8
	ctx.lr = 0x823E5550;
	sub_82106EE8(ctx, base);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwzx r7,r28,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r29,231(r6)
	PPC_STORE_U8(ctx.r6.u32 + 231, ctx.r29.u8);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x821ff4b8
	ctx.lr = 0x823E557C;
	sub_821FF4B8(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8210ffd8
	ctx.lr = 0x823E5594;
	sub_8210FFD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x823e553c
	if (ctx.cr6.lt) goto loc_823E553C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e5528
	if (ctx.cr6.lt) goto loc_823E5528;
loc_823E55BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823E55C4"))) PPC_WEAK_FUNC(sub_823E55C4);
PPC_FUNC_IMPL(__imp__sub_823E55C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E55C8"))) PPC_WEAK_FUNC(sub_823E55C8);
PPC_FUNC_IMPL(__imp__sub_823E55C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,5828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5828, ctx.r11.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,6084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6084, ctx.r11.u32);
	// lwz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,6340(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6340, ctx.r11.u32);
	// lwz r4,256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,6596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6596, ctx.r11.u32);
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,6852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6852, ctx.r11.u32);
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,7108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7108, ctx.r11.u32);
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,7364(r4)
	PPC_STORE_U32(ctx.r4.u32 + 7364, ctx.r11.u32);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,7620(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7620, ctx.r11.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,7876(r7)
	PPC_STORE_U32(ctx.r7.u32 + 7876, ctx.r11.u32);
	// lwz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8132, ctx.r11.u32);
	// lwz r4,256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8388, ctx.r11.u32);
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8644, ctx.r11.u32);
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8900(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8900, ctx.r11.u32);
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,9156(r4)
	PPC_STORE_U32(ctx.r4.u32 + 9156, ctx.r11.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,9412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5684"))) PPC_WEAK_FUNC(sub_823E5684);
PPC_FUNC_IMPL(__imp__sub_823E5684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5688"))) PPC_WEAK_FUNC(sub_823E5688);
PPC_FUNC_IMPL(__imp__sub_823E5688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r11,5632
	ctx.r30.s64 = ctx.r11.s64 + 5632;
	// bl 0x8215bd60
	ctx.lr = 0x823E56B0;
	sub_8215BD60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e56c8
	if (ctx.cr6.eq) goto loc_823E56C8;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r11,9472
	ctx.r30.s64 = ctx.r11.s64 + 9472;
loc_823E56C8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-15056
	ctx.r11.s64 = ctx.r11.s64 + -15056;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E56E4:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwzu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// bdnz 0x823e56e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E56E4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E57D8"))) PPC_WEAK_FUNC(sub_823E57D8);
PPC_FUNC_IMPL(__imp__sub_823E57D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E57E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823c3b68
	ctx.lr = 0x823E5800;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c58b0
	ctx.lr = 0x823E5810;
	sub_823C58B0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// addi r9,r11,-14856
	ctx.r9.s64 = ctx.r11.s64 + -14856;
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// addi r8,r10,-14992
	ctx.r8.s64 = ctx.r10.s64 + -14992;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// li r5,1804
	ctx.r5.s64 = 1804;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x823E5840;
	sub_82248A40(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r6.u32);
	// bl 0x823e54c8
	ctx.lr = 0x823E5858;
	sub_823E54C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e5688
	ctx.lr = 0x823E5860;
	sub_823E5688(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// bl 0x823c3c60
	ctx.lr = 0x823E5870;
	sub_823C3C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E587C"))) PPC_WEAK_FUNC(sub_823E587C);
PPC_FUNC_IMPL(__imp__sub_823E587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5880"))) PPC_WEAK_FUNC(sub_823E5880);
PPC_FUNC_IMPL(__imp__sub_823E5880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e58b8
	if (ctx.cr6.eq) goto loc_823E58B8;
	// bl 0x823e54c8
	ctx.lr = 0x823E58A4;
	sub_823E54C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,67
	ctx.r4.s64 = 67;
	// bl 0x8210a9b0
	ctx.lr = 0x823E58B8;
	sub_8210A9B0(ctx, base);
loc_823E58B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E58CC"))) PPC_WEAK_FUNC(sub_823E58CC);
PPC_FUNC_IMPL(__imp__sub_823E58CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E58D0"))) PPC_WEAK_FUNC(sub_823E58D0);
PPC_FUNC_IMPL(__imp__sub_823E58D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E58D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823e55c8
	ctx.lr = 0x823E58E8;
	sub_823E55C8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r11,-15056
	ctx.r29.s64 = ctx.r11.s64 + -15056;
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82106eb0
	ctx.lr = 0x823E5910;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e591c
	if (ctx.cr6.eq) goto loc_823E591C;
	// bl 0x821d38e8
	ctx.lr = 0x823E591C;
	sub_821D38E8(ctx, base);
loc_823E591C:
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e5954
	if (ctx.cr6.lt) goto loc_823E5954;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823E5954:
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E5960"))) PPC_WEAK_FUNC(sub_823E5960);
PPC_FUNC_IMPL(__imp__sub_823E5960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E5968;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e59c0
	if (!ctx.cr6.gt) goto loc_823E59C0;
loc_823E5980:
	// lwz r11,2044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2044, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823e5998
	if (ctx.cr6.gt) goto loc_823E5998;
	// stw r29,2044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2044, ctx.r29.u32);
loc_823E5998:
	// lwz r11,2044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// addi r11,r11,285
	ctx.r11.s64 = ctx.r11.s64 + 285;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823e59c0
	if (!ctx.cr6.eq) goto loc_823E59C0;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e5980
	if (ctx.cr6.lt) goto loc_823E5980;
loc_823E59C0:
	// lwz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// addi r30,r10,-15056
	ctx.r30.s64 = ctx.r10.s64 + -15056;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,5828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5828, ctx.r11.u32);
	// lwz r7,228(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,6084(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6084, ctx.r11.u32);
	// lwz r5,228(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,6340(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6340, ctx.r11.u32);
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,6596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6596, ctx.r11.u32);
	// lwz r8,228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,6852(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6852, ctx.r11.u32);
	// lwz r6,228(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,7108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7108, ctx.r11.u32);
	// lwz r4,228(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,7364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7364, ctx.r11.u32);
	// lwz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,7620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7620, ctx.r11.u32);
	// lwz r7,228(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,7876(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7876, ctx.r11.u32);
	// lwz r5,228(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8132, ctx.r11.u32);
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8388, ctx.r11.u32);
	// lwz r8,228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8644(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8644, ctx.r11.u32);
	// lwz r6,228(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8900(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8900, ctx.r11.u32);
	// lwz r4,228(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,9156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9156, ctx.r11.u32);
	// lwz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,9412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9412, ctx.r11.u32);
	// lwz r11,2044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x823E5AA0;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e5aac
	if (ctx.cr6.eq) goto loc_823E5AAC;
	// bl 0x821d38e8
	ctx.lr = 0x823E5AAC;
	sub_821D38E8(ctx, base);
loc_823E5AAC:
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e5adc
	if (ctx.cr6.lt) goto loc_823E5ADC;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r29.u32);
loc_823E5ADC:
	// stw r29,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E5AE8"))) PPC_WEAK_FUNC(sub_823E5AE8);
PPC_FUNC_IMPL(__imp__sub_823E5AE8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5AF0"))) PPC_WEAK_FUNC(sub_823E5AF0);
PPC_FUNC_IMPL(__imp__sub_823E5AF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2152, ctx.r11.u32);
	// b 0x823c3c60
	sub_823C3C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AFC"))) PPC_WEAK_FUNC(sub_823E5AFC);
PPC_FUNC_IMPL(__imp__sub_823E5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5B00"))) PPC_WEAK_FUNC(sub_823E5B00);
PPC_FUNC_IMPL(__imp__sub_823E5B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,2104
	ctx.r3.s64 = ctx.r3.s64 + 2104;
	// bl 0x823c3410
	ctx.lr = 0x823E5B1C;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// bl 0x823c3c70
	ctx.lr = 0x823E5B2C;
	sub_823C3C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5B40"))) PPC_WEAK_FUNC(sub_823E5B40);
PPC_FUNC_IMPL(__imp__sub_823E5B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,2104
	ctx.r3.s64 = ctx.r3.s64 + 2104;
	// bl 0x823c3468
	ctx.lr = 0x823E5B5C;
	sub_823C3468(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E5B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x823E5B78;
	sub_823C3CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5B8C"))) PPC_WEAK_FUNC(sub_823E5B8C);
PPC_FUNC_IMPL(__imp__sub_823E5B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5B90"))) PPC_WEAK_FUNC(sub_823E5B90);
PPC_FUNC_IMPL(__imp__sub_823E5B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e5ba4
	if (ctx.cr6.eq) goto loc_823E5BA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E5BA4:
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5BB8"))) PPC_WEAK_FUNC(sub_823E5BB8);
PPC_FUNC_IMPL(__imp__sub_823E5BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,2064(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f1360
	ctx.lr = 0x823E5BDC;
	sub_821F1360(ctx, base);
	// addi r3,r31,2076
	ctx.r3.s64 = ctx.r31.s64 + 2076;
	// bl 0x823c3468
	ctx.lr = 0x823E5BE4;
	sub_823C3468(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,2064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x823e73a0
	ctx.lr = 0x823E5BF8;
	sub_823E73A0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r10.u32);
	// bl 0x821f18c0
	ctx.lr = 0x823E5C04;
	sub_821F18C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e5c18
	if (ctx.cr6.eq) goto loc_823E5C18;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,2064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x821f2160
	ctx.lr = 0x823E5C18;
	sub_821F2160(ctx, base);
loc_823E5C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5C2C"))) PPC_WEAK_FUNC(sub_823E5C2C);
PPC_FUNC_IMPL(__imp__sub_823E5C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5C30"))) PPC_WEAK_FUNC(sub_823E5C30);
PPC_FUNC_IMPL(__imp__sub_823E5C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823e5c48
	if (ctx.cr6.eq) goto loc_823E5C48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823E5C48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5C50"))) PPC_WEAK_FUNC(sub_823E5C50);
PPC_FUNC_IMPL(__imp__sub_823E5C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e5c64
	if (!ctx.cr6.eq) goto loc_823E5C64;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E5C64:
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5C78"))) PPC_WEAK_FUNC(sub_823E5C78);
PPC_FUNC_IMPL(__imp__sub_823E5C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,2152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// li r11,1
	ctx.r11.s64 = 1;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5C94"))) PPC_WEAK_FUNC(sub_823E5C94);
PPC_FUNC_IMPL(__imp__sub_823E5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5C98"))) PPC_WEAK_FUNC(sub_823E5C98);
PPC_FUNC_IMPL(__imp__sub_823E5C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5CAC"))) PPC_WEAK_FUNC(sub_823E5CAC);
PPC_FUNC_IMPL(__imp__sub_823E5CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5CB0"))) PPC_WEAK_FUNC(sub_823E5CB0);
PPC_FUNC_IMPL(__imp__sub_823E5CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E5CB8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r28,-772(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// ble cr6,0x823e5d1c
	if (!ctx.cr6.gt) goto loc_823E5D1C;
	// addi r31,r3,1184
	ctx.r31.s64 = ctx.r3.s64 + 1184;
loc_823E5CDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-900(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -900);
	// lwz r4,2092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x821f07f0
	ctx.lr = 0x823E5CEC;
	sub_821F07F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x821f0888
	ctx.lr = 0x823E5CF8;
	sub_821F0888(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e5cdc
	if (ctx.cr6.lt) goto loc_823E5CDC;
loc_823E5D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E5D24"))) PPC_WEAK_FUNC(sub_823E5D24);
PPC_FUNC_IMPL(__imp__sub_823E5D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5D28"))) PPC_WEAK_FUNC(sub_823E5D28);
PPC_FUNC_IMPL(__imp__sub_823E5D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,2092(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f0838
	ctx.lr = 0x823E5D4C;
	sub_821F0838(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x823e73a0
	ctx.lr = 0x823E5D60;
	sub_823E73A0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E5D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5D88"))) PPC_WEAK_FUNC(sub_823E5D88);
PPC_FUNC_IMPL(__imp__sub_823E5D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2864, ctx.r11.u32);
	// beq cr6,0x823e5db8
	if (ctx.cr6.eq) goto loc_823E5DB8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823E5DB8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823e5e38
	if (!ctx.cr6.eq) goto loc_823E5E38;
	// mulli r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 * 22;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f30,8056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8056);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r3,2156
	ctx.r31.s64 = ctx.r3.s64 + 2156;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x823E5E10;
	sub_823C3558(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,-29032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// b 0x823e5eb8
	goto loc_823E5EB8;
loc_823E5E38:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x823e5ec4
	if (!ctx.cr6.eq) goto loc_823E5EC4;
	// mulli r11,r11,-22
	ctx.r11.s64 = ctx.r11.s64 * -22;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f30,8056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8056);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r3,2156
	ctx.r31.s64 = ctx.r3.s64 + 2156;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x823E5E94;
	sub_823C3558(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,-14704(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_823E5EB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3558
	ctx.lr = 0x823E5EC4;
	sub_823C3558(ctx, base);
loc_823E5EC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5EE0"))) PPC_WEAK_FUNC(sub_823E5EE0);
PPC_FUNC_IMPL(__imp__sub_823E5EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E5EE8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// bl 0x821ff7c0
	ctx.lr = 0x823E5EF8;
	sub_821FF7C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823e5f64
	if (!ctx.cr6.gt) goto loc_823E5F64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823E5F0C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,2092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x821ff670
	ctx.lr = 0x823E5F20;
	sub_821FF670(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x821d25f8
	ctx.lr = 0x823E5F30;
	sub_821D25F8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821ff670
	ctx.lr = 0x823E5F44;
	sub_821FF670(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x821d25f8
	ctx.lr = 0x823E5F54;
	sub_821D25F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,336
	ctx.r29.s64 = ctx.r29.s64 + 336;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x823e5f0c
	if (ctx.cr6.lt) goto loc_823E5F0C;
loc_823E5F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E5F6C"))) PPC_WEAK_FUNC(sub_823E5F6C);
PPC_FUNC_IMPL(__imp__sub_823E5F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5F70"))) PPC_WEAK_FUNC(sub_823E5F70);
PPC_FUNC_IMPL(__imp__sub_823E5F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E5F78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x823E5F88;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c58b0
	ctx.lr = 0x823E5F98;
	sub_823C58B0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r10,225
	ctx.r10.s64 = 225;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-14560
	ctx.r8.s64 = ctx.r11.s64 + -14560;
	// addi r7,r9,-14696
	ctx.r7.s64 = ctx.r9.s64 + -14696;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// addi r29,r31,280
	ctx.r29.s64 = ctx.r31.s64 + 280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// addi r11,r29,900
	ctx.r11.s64 = ctx.r29.s64 + 900;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_823E5FE0:
	// stw r30,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e5fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5FE0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,1816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1816, ctx.r30.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r30,1820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1820, ctx.r30.u32);
	// stw r11,1808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1808, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,1804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1804, ctx.r10.u32);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// stw r11,1812(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1812, ctx.r11.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x823E6014;
	sub_823C2FF0(ctx, base);
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,2156
	ctx.r3.s64 = ctx.r31.s64 + 2156;
	// bl 0x823c34c0
	ctx.lr = 0x823E6028;
	sub_823C34C0(ctx, base);
	// stw r30,2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2864, ctx.r30.u32);
	// li r4,1824
	ctx.r4.s64 = 1824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x823E6038;
	sub_822AA648(ctx, base);
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r31,2640
	ctx.r3.s64 = ctx.r31.s64 + 2640;
	// bl 0x822aa648
	ctx.lr = 0x823E6044;
	sub_822AA648(ctx, base);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r8,r9,7,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r8,r9,7,24,24
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x80) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// bl 0x823c3c60
	ctx.lr = 0x823E6064;
	sub_823C3C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E6070"))) PPC_WEAK_FUNC(sub_823E6070);
PPC_FUNC_IMPL(__imp__sub_823E6070) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e2770
	sub_823E2770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6078"))) PPC_WEAK_FUNC(sub_823E6078);
PPC_FUNC_IMPL(__imp__sub_823E6078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E6080;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// addi r8,r11,-14560
	ctx.r8.s64 = ctx.r11.s64 + -14560;
	// addi r7,r10,-14696
	ctx.r7.s64 = ctx.r10.s64 + -14696;
	// ori r6,r9,63
	ctx.r6.u64 = ctx.r9.u64 | 63;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// beq cr6,0x823e60d0
	if (ctx.cr6.eq) goto loc_823E60D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E60D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E60D0:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e6118
	if (ctx.cr6.eq) goto loc_823E6118;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e6110
	if (ctx.cr6.eq) goto loc_823E6110;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823e6118
	goto loc_823E6118;
loc_823E6110:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x823E6118;
	sub_82183E40(ctx, base);
loc_823E6118:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e615c
	if (ctx.cr6.eq) goto loc_823E615C;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e6154
	if (ctx.cr6.eq) goto loc_823E6154;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E6150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823e615c
	goto loc_823E615C;
loc_823E6154:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x823E615C;
	sub_82183E40(ctx, base);
loc_823E615C:
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r3,r31,2156
	ctx.r3.s64 = ctx.r31.s64 + 2156;
	// bl 0x823c30b8
	ctx.lr = 0x823E6168;
	sub_823C30B8(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x823c3048
	ctx.lr = 0x823E6170;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c52a0
	ctx.lr = 0x823E6178;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x823E6180;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E6188"))) PPC_WEAK_FUNC(sub_823E6188);
PPC_FUNC_IMPL(__imp__sub_823E6188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823E6190;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r4.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821ff7c0
	ctx.lr = 0x823E61A4;
	sub_821FF7C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x823E61AC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823E61B4;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E61C0;
	sub_821837D0(ctx, base);
	// lis r11,195
	ctx.r11.s64 = 12779520;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r27,r11,3120
	ctx.r27.u64 = ctx.r11.u64 | 3120;
	// li r26,-17
	ctx.r26.s64 = -17;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x823e61e8
	if (ctx.cr6.gt) goto loc_823E61E8;
	// mulli r11,r29,336
	ctx.r11.s64 = ctx.r29.s64 * 336;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x823e61ec
	if (!ctx.cr6.gt) goto loc_823E61EC;
loc_823E61E8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_823E61EC:
	// bl 0x82183850
	ctx.lr = 0x823E61F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823e6208
	if (ctx.cr6.eq) goto loc_823E6208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x823E6204;
	sub_82183448(ctx, base);
	// b 0x823e6214
	goto loc_823E6214;
loc_823E6208:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823E6214;
	sub_821845A0(ctx, base);
loc_823E6214:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e624c
	if (ctx.cr6.eq) goto loc_823E624C;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x823e6244
	if (ctx.cr0.lt) goto loc_823E6244;
loc_823E6230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b29d0
	ctx.lr = 0x823E6238;
	sub_821B29D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bge 0x823e6230
	if (!ctx.cr0.lt) goto loc_823E6230;
loc_823E6244:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823e6250
	goto loc_823E6250;
loc_823E624C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6250:
	// stw r11,272(r24)
	PPC_STORE_U32(ctx.r24.u32 + 272, ctx.r11.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x823e626c
	if (ctx.cr6.gt) goto loc_823E626C;
	// mulli r11,r29,336
	ctx.r11.s64 = ctx.r29.s64 * 336;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x823e6270
	if (!ctx.cr6.gt) goto loc_823E6270;
loc_823E626C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_823E6270:
	// bl 0x82183850
	ctx.lr = 0x823E6274;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823e628c
	if (ctx.cr6.eq) goto loc_823E628C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x823E6288;
	sub_82183448(ctx, base);
	// b 0x823e6298
	goto loc_823E6298;
loc_823E628C:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823E6298;
	sub_821845A0(ctx, base);
loc_823E6298:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e62dc
	if (ctx.cr6.eq) goto loc_823E62DC;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x823e62e0
	if (ctx.cr0.lt) goto loc_823E62E0;
loc_823E62B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b29d0
	ctx.lr = 0x823E62BC;
	sub_821B29D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bge 0x823e62b4
	if (!ctx.cr0.lt) goto loc_823E62B4;
	// stw r28,276(r24)
	PPC_STORE_U32(ctx.r24.u32 + 276, ctx.r28.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E62D4;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823E62DC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823E62E0:
	// stw r28,276(r24)
	PPC_STORE_U32(ctx.r24.u32 + 276, ctx.r28.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E62EC;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823E62F4"))) PPC_WEAK_FUNC(sub_823E62F4);
PPC_FUNC_IMPL(__imp__sub_823E62F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E62F8"))) PPC_WEAK_FUNC(sub_823E62F8);
PPC_FUNC_IMPL(__imp__sub_823E62F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,2152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,2092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,10068(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 10068, temp.u32);
	// lwz r11,2092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r4,r11,69
	ctx.r4.s64 = ctx.r11.s64 + 69;
	// b 0x8210a9b0
	sub_8210A9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6368"))) PPC_WEAK_FUNC(sub_823E6368);
PPC_FUNC_IMPL(__imp__sub_823E6368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E636C"))) PPC_WEAK_FUNC(sub_823E636C);
PPC_FUNC_IMPL(__imp__sub_823E636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6370"))) PPC_WEAK_FUNC(sub_823E6370);
PPC_FUNC_IMPL(__imp__sub_823E6370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,2152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2152, ctx.r11.u32);
	// stw r9,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E639C"))) PPC_WEAK_FUNC(sub_823E639C);
PPC_FUNC_IMPL(__imp__sub_823E639C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E63A0"))) PPC_WEAK_FUNC(sub_823E63A0);
PPC_FUNC_IMPL(__imp__sub_823E63A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823e6404
	if (!ctx.cr6.eq) goto loc_823E6404;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r4,2064(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,-772(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -772);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x821f07f0
	ctx.lr = 0x823E63E8;
	sub_821F07F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,2064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x821f0888
	ctx.lr = 0x823E63F4;
	sub_821F0888(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823e640c
	if (ctx.cr6.eq) goto loc_823E640C;
	// li r3,10002
	ctx.r3.s64 = 10002;
	// bl 0x8208f658
	ctx.lr = 0x823E6404;
	sub_8208F658(ctx, base);
loc_823E6404:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e6410
	goto loc_823E6410;
loc_823E640C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823E6410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6428"))) PPC_WEAK_FUNC(sub_823E6428);
PPC_FUNC_IMPL(__imp__sub_823E6428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823e643c
	if (!ctx.cr6.eq) goto loc_823E643C;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e5d28
	sub_823E5D28(ctx, base);
	return;
loc_823E643C:
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6450"))) PPC_WEAK_FUNC(sub_823E6450);
PPC_FUNC_IMPL(__imp__sub_823E6450) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r11.u32);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6464"))) PPC_WEAK_FUNC(sub_823E6464);
PPC_FUNC_IMPL(__imp__sub_823E6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6468"))) PPC_WEAK_FUNC(sub_823E6468);
PPC_FUNC_IMPL(__imp__sub_823E6468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,71
	ctx.r11.s64 = ctx.r11.s64 + 71;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E647C"))) PPC_WEAK_FUNC(sub_823E647C);
PPC_FUNC_IMPL(__imp__sub_823E647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6480"))) PPC_WEAK_FUNC(sub_823E6480);
PPC_FUNC_IMPL(__imp__sub_823E6480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6494"))) PPC_WEAK_FUNC(sub_823E6494);
PPC_FUNC_IMPL(__imp__sub_823E6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6498"))) PPC_WEAK_FUNC(sub_823E6498);
PPC_FUNC_IMPL(__imp__sub_823E6498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E64A0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e670c
	if (ctx.cr6.eq) goto loc_823E670C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r10,r10,-14760
	ctx.r10.s64 = ctx.r10.s64 + -14760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r3,2628
	ctx.r11.s64 = ctx.r3.s64 + 2628;
loc_823E64CC:
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f13,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f7.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r7,r6,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,8(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f4,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f1,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f11,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f9,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f5,2176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzu r8,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfsu f0,112(r11)
	// lfs f3,2224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,8(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bdnz 0x823e64cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E64CC;
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6a3c
	if (ctx.cr6.eq) goto loc_823E6A3C;
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6a3c
	if (ctx.cr6.eq) goto loc_823E6A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2864, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823E670C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r25,r11,-14760
	ctx.r25.s64 = ctx.r11.s64 + -14760;
	// addi r11,r31,2628
	ctx.r11.s64 = ctx.r31.s64 + 2628;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E6724:
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f10,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f8,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f6,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f5,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,8(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f4,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f3,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwzu r8,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lfs f2,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,2092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfsu f0,112(r11)
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bdnz 0x823e6724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6724;
	// lwz r11,2092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r29,280(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r30,r11,17
	ctx.r30.s64 = ctx.r11.s64 + 17;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r11,r11,71
	ctx.r11.s64 = ctx.r11.s64 + 71;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x821ff6a8
	ctx.lr = 0x823E68F4;
	sub_821FF6A8(ctx, base);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r3,336
	ctx.r10.s64 = ctx.r3.s64 * 336;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r30,r8
	ctx.r6.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r25,24
	ctx.r30.s64 = ctx.r25.s64 + 24;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,4060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4060, ctx.r5.u32);
	// lwz r26,2092(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
loc_823E692C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// twllei r29,0
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r29
	ctx.r9.s32 = ctx.r10.s32 / ctx.r29.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r7,r9,r29
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// andc r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 & ~ctx.r8.u64;
	// subf. r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r6,-1
	// bge 0x823e695c
	if (!ctx.cr0.lt) goto loc_823E695C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823E695C:
	// addi r11,r11,71
	ctx.r11.s64 = ctx.r11.s64 + 71;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x821ff6a8
	ctx.lr = 0x823E6974;
	sub_821FF6A8(ctx, base);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mulli r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 * 336;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,220(r4)
	PPC_STORE_U32(ctx.r4.u32 + 220, ctx.r5.u32);
	// bge cr6,0x823e692c
	if (!ctx.cr6.lt) goto loc_823E692C;
	// li r28,7
	ctx.r28.s64 = 7;
	// addi r30,r25,28
	ctx.r30.s64 = ctx.r25.s64 + 28;
loc_823E69B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// twllei r29,0
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// divw r9,r11,r29
	ctx.r9.s32 = ctx.r11.s32 / ctx.r29.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,71
	ctx.r6.s64 = ctx.r11.s64 + 71;
	// andc r5,r29,r7
	ctx.r5.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r5,-1
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x821ff6a8
	ctx.lr = 0x823E69FC;
	sub_821FF6A8(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mulli r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 * 336;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r5,r25,56
	ctx.r5.s64 = ctx.r25.s64 + 56;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,220(r4)
	PPC_STORE_U32(ctx.r4.u32 + 220, ctx.r6.u32);
	// blt cr6,0x823e69b8
	if (ctx.cr6.lt) goto loc_823E69B8;
loc_823E6A3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E6A44"))) PPC_WEAK_FUNC(sub_823E6A44);
PPC_FUNC_IMPL(__imp__sub_823E6A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6A48"))) PPC_WEAK_FUNC(sub_823E6A48);
PPC_FUNC_IMPL(__imp__sub_823E6A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,-14760
	ctx.r11.s64 = ctx.r11.s64 + -14760;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r3,2628
	ctx.r11.s64 = ctx.r3.s64 + 2628;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E6A60:
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// lwz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,76(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,80(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,2092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwzu r8,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,208(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,108(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfsu f1,112(r11)
	// bdnz 0x823e6a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6A60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6C0C"))) PPC_WEAK_FUNC(sub_823E6C0C);
PPC_FUNC_IMPL(__imp__sub_823E6C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6C10"))) PPC_WEAK_FUNC(sub_823E6C10);
PPC_FUNC_IMPL(__imp__sub_823E6C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f18c0
	ctx.lr = 0x823E6C2C;
	sub_821F18C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e6cdc
	if (ctx.cr6.eq) goto loc_823E6CDC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r8,r10,71
	ctx.r8.s64 = ctx.r10.s64 + 71;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,-772(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -772);
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821f02c0
	ctx.lr = 0x823E6C74;
	sub_821F02C0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,2092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821f1b28
	ctx.lr = 0x823E6C8C;
	sub_821F1B28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x823e6cc8
	if (ctx.cr6.eq) goto loc_823E6CC8;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823e6cc8
	if (!ctx.cr6.eq) goto loc_823E6CC8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823e6cc8
	if (!ctx.cr6.eq) goto loc_823E6CC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f1ad8
	ctx.lr = 0x823E6CC0;
	sub_821F1AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e6cdc
	if (!ctx.cr6.eq) goto loc_823E6CDC;
loc_823E6CC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f3050
	ctx.lr = 0x823E6CDC;
	sub_821F3050(ctx, base);
loc_823E6CDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6CF4"))) PPC_WEAK_FUNC(sub_823E6CF4);
PPC_FUNC_IMPL(__imp__sub_823E6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6CF8"))) PPC_WEAK_FUNC(sub_823E6CF8);
PPC_FUNC_IMPL(__imp__sub_823E6CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823E6D00;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,280
	ctx.r27.s64 = ctx.r3.s64 + 280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r5,1824
	ctx.r5.s64 = 1824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82248a40
	ctx.lr = 0x823E6D20;
	sub_82248A40(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r28,-772(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f0eb0
	ctx.lr = 0x823E6D38;
	sub_821F0EB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r5,2088(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	// bl 0x821f0e90
	ctx.lr = 0x823E6D48;
	sub_821F0E90(ctx, base);
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823e6d64
	if (!ctx.cr6.eq) goto loc_823E6D64;
	// lwz r5,2088(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
loc_823E6D64:
	// bl 0x821f0a88
	ctx.lr = 0x823E6D68;
	sub_821F0A88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f02c0
	ctx.lr = 0x823E6D74;
	sub_821F02C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r4,264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// bl 0x823c5678
	ctx.lr = 0x823E6D84;
	sub_823C5678(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e6dec
	if (!ctx.cr6.gt) goto loc_823E6DEC;
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
loc_823E6DA0:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823e6dd0
	if (!ctx.cr6.eq) goto loc_823E6DD0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f07f0
	ctx.lr = 0x823E6DBC;
	sub_821F07F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f0888
	ctx.lr = 0x823E6DC8;
	sub_821F0888(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823e6de8
	if (ctx.cr6.eq) goto loc_823E6DE8;
loc_823E6DD0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e6da0
	if (ctx.cr6.lt) goto loc_823E6DA0;
	// b 0x823e6dec
	goto loc_823E6DEC;
loc_823E6DE8:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_823E6DEC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e6e54
	if (!ctx.cr6.gt) goto loc_823E6E54;
	// addi r30,r31,1184
	ctx.r30.s64 = ctx.r31.s64 + 1184;
loc_823E6E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-900(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -900);
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f07f0
	ctx.lr = 0x823E6E14;
	sub_821F07F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// bl 0x821f0888
	ctx.lr = 0x823E6E20;
	sub_821F0888(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823e6e3c
	if (!ctx.cr6.eq) goto loc_823E6E3C;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x823e6e34
	if (!ctx.cr6.eq) goto loc_823E6E34;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_823E6E34:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x823e6e40
	goto loc_823E6E40;
loc_823E6E3C:
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_823E6E40:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e6e04
	if (ctx.cr6.lt) goto loc_823E6E04;
loc_823E6E54:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// bl 0x823e5ee0
	ctx.lr = 0x823E6E98;
	sub_823E5EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e6a48
	ctx.lr = 0x823E6EA0;
	sub_823E6A48(ctx, base);
	// bl 0x823e6498
	ctx.lr = 0x823E6EA4;
	sub_823E6498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x823e73a0
	ctx.lr = 0x823E6EB8;
	sub_823E73A0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823e6ec8
	if (ctx.cr6.eq) goto loc_823E6EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e6c10
	ctx.lr = 0x823E6EC8;
	sub_823E6C10(ctx, base);
loc_823E6EC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E6EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823E6EE4"))) PPC_WEAK_FUNC(sub_823E6EE4);
PPC_FUNC_IMPL(__imp__sub_823E6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6EE8"))) PPC_WEAK_FUNC(sub_823E6EE8);
PPC_FUNC_IMPL(__imp__sub_823E6EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e6498
	ctx.lr = 0x823E6F00;
	sub_823E6498(ctx, base);
	// lwz r11,2864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e6f2c
	if (!ctx.cr6.eq) goto loc_823E6F2C;
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6f2c
	if (ctx.cr6.eq) goto loc_823E6F2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E6F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E6F2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6F40"))) PPC_WEAK_FUNC(sub_823E6F40);
PPC_FUNC_IMPL(__imp__sub_823E6F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e6f70
	if (ctx.cr6.eq) goto loc_823E6F70;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bl 0x823e5d88
	ctx.lr = 0x823E6F70;
	sub_823E5D88(ctx, base);
loc_823E6F70:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e6f8c
	if (ctx.cr6.eq) goto loc_823E6F8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823e5d88
	ctx.lr = 0x823E6F8C;
	sub_823E5D88(ctx, base);
loc_823E6F8C:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823e6c10
	ctx.lr = 0x823E6F94;
	sub_823E6C10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6FA8"))) PPC_WEAK_FUNC(sub_823E6FA8);
PPC_FUNC_IMPL(__imp__sub_823E6FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e6498
	ctx.lr = 0x823E6FC0;
	sub_823E6498(ctx, base);
	// lwz r11,2864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e6ff4
	if (!ctx.cr6.eq) goto loc_823E6FF4;
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6ff4
	if (ctx.cr6.eq) goto loc_823E6FF4;
	// lwz r4,2092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2092);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x823e74d0
	ctx.lr = 0x823E6FE4;
	sub_823E74D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e6ff4
	if (ctx.cr6.eq) goto loc_823E6FF4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
loc_823E6FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7008"))) PPC_WEAK_FUNC(sub_823E7008);
PPC_FUNC_IMPL(__imp__sub_823E7008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E7010;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e6498
	ctx.lr = 0x823E701C;
	sub_823E6498(ctx, base);
	// lwz r11,2864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e70c0
	if (!ctx.cr6.eq) goto loc_823E70C0;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7048
	if (ctx.cr6.eq) goto loc_823E7048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E7048:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x823E7054;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823E705C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E7068;
	sub_821837D0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,916
	ctx.r3.s64 = 916;
	// addi r10,r11,71
	ctx.r10.s64 = ctx.r11.s64 + 71;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x82080000
	ctx.lr = 0x823E7080;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e70a8
	if (ctx.cr6.eq) goto loc_823E70A8;
	// bl 0x82182e90
	ctx.lr = 0x823E7090;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220e6d0
	ctx.lr = 0x823E70A4;
	sub_8220E6D0(ctx, base);
	// b 0x823e70ac
	goto loc_823E70AC;
loc_823E70A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E70AC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E70C0;
	sub_821837D0(ctx, base);
loc_823E70C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E70C8"))) PPC_WEAK_FUNC(sub_823E70C8);
PPC_FUNC_IMPL(__imp__sub_823E70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e6498
	ctx.lr = 0x823E70E0;
	sub_823E6498(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E70F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e714c
	if (ctx.cr6.eq) goto loc_823E714C;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x823e714c
	if (!ctx.cr6.eq) goto loc_823E714C;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821ebaa8
	ctx.lr = 0x823E7114;
	sub_821EBAA8(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r10.u32);
	// beq cr6,0x823e7144
	if (ctx.cr6.eq) goto loc_823E7144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E7144:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
loc_823E714C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7160"))) PPC_WEAK_FUNC(sub_823E7160);
PPC_FUNC_IMPL(__imp__sub_823E7160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e71fc
	if (ctx.cr6.gt) goto loc_823E71FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e71bc
	// bdzf 4*cr6+eq,0x823e71d8
	// bne cr6,0x823e71f4
	if (!ctx.cr6.eq) goto loc_823E71F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e5cb0
	ctx.lr = 0x823E71A0;
	sub_823E5CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e6498
	ctx.lr = 0x823E71A8;
	sub_823E6498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E71BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7008
	ctx.lr = 0x823E71C4;
	sub_823E7008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E71D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e70c8
	ctx.lr = 0x823E71E0;
	sub_823E70C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E71F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e6fa8
	ctx.lr = 0x823E71FC;
	sub_823E6FA8(ctx, base);
loc_823E71FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7210"))) PPC_WEAK_FUNC(sub_823E7210);
PPC_FUNC_IMPL(__imp__sub_823E7210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e7258
	if (ctx.cr6.eq) goto loc_823E7258;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823E7238:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,71
	ctx.r4.s64 = ctx.r31.s64 + 71;
	// bl 0x8210a9b0
	ctx.lr = 0x823E724C;
	sub_8210A9B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e7238
	if (ctx.cr6.lt) goto loc_823E7238;
loc_823E7258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7270"))) PPC_WEAK_FUNC(sub_823E7270);
PPC_FUNC_IMPL(__imp__sub_823E7270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x823E72A0;
	sub_822AA648(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,-14476
	ctx.r8.s64 = ctx.r10.s64 + -14476;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,14020(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14020, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,14276(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14276, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,14532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823e72f0
	if (ctx.cr6.lt) goto loc_823E72F0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823E72F0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,14788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14788, ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,15044(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15044, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,15300(r4)
	PPC_STORE_U32(ctx.r4.u32 + 15300, ctx.r11.u32);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823e7334
	if (ctx.cr6.lt) goto loc_823E7334;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823E7334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E734C"))) PPC_WEAK_FUNC(sub_823E734C);
PPC_FUNC_IMPL(__imp__sub_823E734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7350"))) PPC_WEAK_FUNC(sub_823E7350);
PPC_FUNC_IMPL(__imp__sub_823E7350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-14444
	ctx.r9.s64 = ctx.r11.s64 + -14444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823e7388
	if (ctx.cr6.eq) goto loc_823E7388;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E7384;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E7388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E739C"))) PPC_WEAK_FUNC(sub_823E739C);
PPC_FUNC_IMPL(__imp__sub_823E739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E73A0"))) PPC_WEAK_FUNC(sub_823E73A0);
PPC_FUNC_IMPL(__imp__sub_823E73A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E73A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-14476
	ctx.r10.s64 = ctx.r11.s64 + -14476;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwx r5,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r5.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e73f4
	if (ctx.cr6.lt) goto loc_823E73F4;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
loc_823E73F4:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e7418
	if (ctx.cr6.lt) goto loc_823E7418;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
loc_823E7418:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e743c
	if (ctx.cr6.lt) goto loc_823E743C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
loc_823E743C:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e7460
	if (ctx.cr6.lt) goto loc_823E7460;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r8.u32);
loc_823E7460:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x823e74c4
	if (ctx.cr6.eq) goto loc_823E74C4;
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82106eb0
	ctx.lr = 0x823E7480;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e748c
	if (ctx.cr6.eq) goto loc_823E748C;
	// bl 0x821d38e8
	ctx.lr = 0x823E748C;
	sub_821D38E8(ctx, base);
loc_823E748C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x823e74ac
	if (ctx.cr6.lt) goto loc_823E74AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823E74AC:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r11,10012
	ctx.r3.s64 = ctx.r11.s64 + 10012;
	// bl 0x8208f658
	ctx.lr = 0x823E74C4;
	sub_8208F658(ctx, base);
loc_823E74C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E74CC"))) PPC_WEAK_FUNC(sub_823E74CC);
PPC_FUNC_IMPL(__imp__sub_823E74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E74D0"))) PPC_WEAK_FUNC(sub_823E74D0);
PPC_FUNC_IMPL(__imp__sub_823E74D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,-14476
	ctx.r7.s64 = ctx.r8.s64 + -14476;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x82106eb0
	ctx.lr = 0x823E750C;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7524
	if (ctx.cr6.eq) goto loc_823E7524;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e7528
	if (!ctx.cr6.eq) goto loc_823E7528;
loc_823E7524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7528:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7538"))) PPC_WEAK_FUNC(sub_823E7538);
PPC_FUNC_IMPL(__imp__sub_823E7538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x823E7564;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r10,r11,-14428
	ctx.r10.s64 = ctx.r11.s64 + -14428;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x823E7580;
	sub_823C2FF0(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E75A4"))) PPC_WEAK_FUNC(sub_823E75A4);
PPC_FUNC_IMPL(__imp__sub_823E75A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E75A8"))) PPC_WEAK_FUNC(sub_823E75A8);
PPC_FUNC_IMPL(__imp__sub_823E75A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-14428
	ctx.r10.s64 = ctx.r11.s64 + -14428;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c3048
	ctx.lr = 0x823E75D8;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x823E75E0;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e75fc
	if (ctx.cr6.eq) goto loc_823E75FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E75F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E75FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7614"))) PPC_WEAK_FUNC(sub_823E7614);
PPC_FUNC_IMPL(__imp__sub_823E7614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7618"))) PPC_WEAK_FUNC(sub_823E7618);
PPC_FUNC_IMPL(__imp__sub_823E7618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E7620;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7700
	if (ctx.cr6.eq) goto loc_823E7700;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821e90a8
	ctx.lr = 0x823E7640;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7700
	if (ctx.cr6.eq) goto loc_823E7700;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e7700
	if (ctx.cr6.eq) goto loc_823E7700;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e7700
	if (ctx.cr6.eq) goto loc_823E7700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x823E766C;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x823E7678;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x823E7688;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x823E7694;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823e76d4
	if (!ctx.cr6.gt) goto loc_823E76D4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,8916(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8916, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x823E76D4;
	sub_8210A9B0(ctx, base);
loc_823E76D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// bl 0x8210a9b0
	ctx.lr = 0x823E76E8;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x823E76F4;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x823E7700;
	sub_821AD498(ctx, base);
loc_823E7700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E7708"))) PPC_WEAK_FUNC(sub_823E7708);
PPC_FUNC_IMPL(__imp__sub_823E7708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E7710;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r29,r9,-14440
	ctx.r29.s64 = ctx.r9.s64 + -14440;
	// stw r11,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,964(r6)
	PPC_STORE_U32(ctx.r6.u32 + 964, ctx.r11.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,1220(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1220, ctx.r11.u32);
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82106eb0
	ctx.lr = 0x823E775C;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7768
	if (ctx.cr6.eq) goto loc_823E7768;
	// bl 0x821d38e8
	ctx.lr = 0x823E7768;
	sub_821D38E8(ctx, base);
loc_823E7768:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e778c
	if (ctx.cr6.lt) goto loc_823E778C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823E778C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x823e77ac
	if (ctx.cr6.lt) goto loc_823E77AC;
	// bne cr6,0x823e77b4
	if (!ctx.cr6.eq) goto loc_823E77B4;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823c3468
	ctx.lr = 0x823E77A0;
	sub_823C3468(ctx, base);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E77AC:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823c3410
	ctx.lr = 0x823E77B4;
	sub_823C3410(ctx, base);
loc_823E77B4:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E77C0"))) PPC_WEAK_FUNC(sub_823E77C0);
PPC_FUNC_IMPL(__imp__sub_823E77C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r10,-14440
	ctx.r9.s64 = ctx.r10.s64 + -14440;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82106eb0
	ctx.lr = 0x823E77F0;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7814
	if (ctx.cr6.eq) goto loc_823E7814;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e7814
	if (ctx.cr6.eq) goto loc_823E7814;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e7818
	if (!ctx.cr6.eq) goto loc_823E7818;
loc_823E7814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E7818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E782C"))) PPC_WEAK_FUNC(sub_823E782C);
PPC_FUNC_IMPL(__imp__sub_823E782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7830"))) PPC_WEAK_FUNC(sub_823E7830);
PPC_FUNC_IMPL(__imp__sub_823E7830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x823E7850;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e786c
	if (ctx.cr6.eq) goto loc_823E786C;
	// bl 0x823c8e50
	ctx.lr = 0x823E785C;
	sub_823C8E50(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x823E7860;
	sub_821EB3E8(ctx, base);
	// bl 0x823eb260
	ctx.lr = 0x823E7864;
	sub_823EB260(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_823E786C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7880"))) PPC_WEAK_FUNC(sub_823E7880);
PPC_FUNC_IMPL(__imp__sub_823E7880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e9880
	ctx.lr = 0x823E7898;
	sub_823E9880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e78ec
	if (ctx.cr6.eq) goto loc_823E78EC;
	// bl 0x823e96f0
	ctx.lr = 0x823E78A4;
	sub_823E96F0(ctx, base);
	// bl 0x8223ad48
	ctx.lr = 0x823E78A8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e78c0
	if (!ctx.cr6.eq) goto loc_823E78C0;
	// bl 0x8223a9f8
	ctx.lr = 0x823E78B4;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2f8
	ctx.lr = 0x823E78B8;
	sub_8223B2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e78ec
	if (!ctx.cr6.eq) goto loc_823E78EC;
loc_823E78C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x8223a9f8
	ctx.lr = 0x823E78CC;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e78e4
	if (ctx.cr6.eq) goto loc_823E78E4;
	// bl 0x8223a9f8
	ctx.lr = 0x823E78D8;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823E78E0;
	sub_8223B4E8(ctx, base);
	// bl 0x82244f78
	ctx.lr = 0x823E78E4;
	sub_82244F78(ctx, base);
loc_823E78E4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_823E78EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7900"))) PPC_WEAK_FUNC(sub_823E7900);
PPC_FUNC_IMPL(__imp__sub_823E7900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x823E7910;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e7928
	if (ctx.cr6.eq) goto loc_823E7928;
	// li r3,20272
	ctx.r3.s64 = 20272;
	// bl 0x82183448
	ctx.lr = 0x823E7924;
	sub_82183448(ctx, base);
	// b 0x823e7930
	goto loc_823E7930;
loc_823E7928:
	// li r3,1267
	ctx.r3.s64 = 1267;
	// bl 0x821845a0
	ctx.lr = 0x823E7930;
	sub_821845A0(ctx, base);
loc_823E7930:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7954
	if (ctx.cr6.eq) goto loc_823E7954;
	// bl 0x823e8db0
	ctx.lr = 0x823E793C;
	sub_823E8DB0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r3,-4392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823E7954:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4392, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7970"))) PPC_WEAK_FUNC(sub_823E7970);
PPC_FUNC_IMPL(__imp__sub_823E7970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x823E7980;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e7998
	if (ctx.cr6.eq) goto loc_823E7998;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x823E7994;
	sub_82183448(ctx, base);
	// b 0x823e79a0
	goto loc_823E79A0;
loc_823E7998:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x823E79A0;
	sub_821845A0(ctx, base);
loc_823E79A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e79c4
	if (ctx.cr6.eq) goto loc_823E79C4;
	// bl 0x823e9360
	ctx.lr = 0x823E79AC;
	sub_823E9360(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r3,-4388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823E79C4:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4388, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E79E0"))) PPC_WEAK_FUNC(sub_823E79E0);
PPC_FUNC_IMPL(__imp__sub_823E79E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E79E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r9,51
	ctx.r9.s64 = 51;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x82184800
	ctx.lr = 0x823E7A38;
	sub_82184800(ctx, base);
	// li r8,47
	ctx.r8.s64 = 47;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E7A58"))) PPC_WEAK_FUNC(sub_823E7A58);
PPC_FUNC_IMPL(__imp__sub_823E7A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// addi r10,r11,-14420
	ctx.r10.s64 = ctx.r11.s64 + -14420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823e8668
	ctx.lr = 0x823E7A88;
	sub_823E8668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218cc18
	ctx.lr = 0x823E7A90;
	sub_8218CC18(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e7aac
	if (ctx.cr6.eq) goto loc_823E7AAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E7AA8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E7AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7AC4"))) PPC_WEAK_FUNC(sub_823E7AC4);
PPC_FUNC_IMPL(__imp__sub_823E7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7AC8"))) PPC_WEAK_FUNC(sub_823E7AC8);
PPC_FUNC_IMPL(__imp__sub_823E7AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E7AD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,34780
	ctx.r10.u64 = ctx.r11.u64 | 34780;
	// lwzx r29,r3,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x823E7AE8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E7AF4;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822450d8
	ctx.lr = 0x823E7B00;
	sub_822450D8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,1328(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// bl 0x820ef488
	ctx.lr = 0x823E7B10;
	sub_820EF488(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823E7B14;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e7b2c
	if (ctx.cr6.eq) goto loc_823E7B2C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x823E7B28;
	sub_82183448(ctx, base);
	// b 0x823e7b34
	goto loc_823E7B34;
loc_823E7B2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x823E7B34;
	sub_821845A0(ctx, base);
loc_823E7B34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7b48
	if (ctx.cr6.eq) goto loc_823E7B48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223b118
	ctx.lr = 0x823E7B48;
	sub_8223B118(ctx, base);
loc_823E7B48:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E7B58;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E7B60"))) PPC_WEAK_FUNC(sub_823E7B60);
PPC_FUNC_IMPL(__imp__sub_823E7B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E7B68;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32177
	ctx.r28.s64 = -2108751872;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-4392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4392);
	// blt cr6,0x823e7b90
	if (ctx.cr6.lt) goto loc_823E7B90;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x823e7b94
	if (ctx.cr6.lt) goto loc_823E7B94;
loc_823E7B90:
	// stw r31,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r31.u32);
loc_823E7B94:
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// ori r8,r9,34780
	ctx.r8.u64 = ctx.r9.u64 | 34780;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwzx r30,r29,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x82183078
	ctx.lr = 0x823E7BB0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E7BBC;
	sub_821837D0(ctx, base);
	// bl 0x82244cb0
	ctx.lr = 0x823E7BC0;
	sub_82244CB0(ctx, base);
	// bl 0x82246f10
	ctx.lr = 0x823E7BC4;
	sub_82246F10(ctx, base);
	// bl 0x82244cb0
	ctx.lr = 0x823E7BC8;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823E7BD0;
	sub_82247AC8(ctx, base);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-4388(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4388);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,-4388(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4388);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,-4388(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4388);
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// bl 0x821636d8
	ctx.lr = 0x823E7BF8;
	sub_821636D8(ctx, base);
	// lwz r11,-4392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4392);
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r31.u32);
	// lwz r3,15460(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15460);
	// bl 0x8216d070
	ctx.lr = 0x823E7C18;
	sub_8216D070(ctx, base);
	// lwz r3,15460(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15460);
	// bl 0x8216d858
	ctx.lr = 0x823E7C20;
	sub_8216D858(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,9108
	ctx.r5.s64 = ctx.r6.s64 + 9108;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823E7C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,-3296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// bl 0x821b1d20
	ctx.lr = 0x823E7C54;
	sub_821B1D20(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r7,r9,9100
	ctx.r7.s64 = ctx.r9.s64 + 9100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// stw r31,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r31.u32);
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// stw r31,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r31.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E7C94;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E7C9C"))) PPC_WEAK_FUNC(sub_823E7C9C);
PPC_FUNC_IMPL(__imp__sub_823E7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7CA0"))) PPC_WEAK_FUNC(sub_823E7CA0);
PPC_FUNC_IMPL(__imp__sub_823E7CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e79e0
	ctx.lr = 0x823E7CC0;
	sub_823E79E0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x823e7d24
	if (ctx.cr6.gt) goto loc_823E7D24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e7d00
	// bdzf 4*cr6+eq,0x823e7d0c
	// bne cr6,0x823e7d14
	if (!ctx.cr6.eq) goto loc_823E7D14;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// b 0x823e7d24
	goto loc_823E7D24;
loc_823E7D00:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x823e7d24
	goto loc_823E7D24;
loc_823E7D0C:
	// li r9,27
	ctx.r9.s64 = 27;
	// b 0x823e7d18
	goto loc_823E7D18;
loc_823E7D14:
	// li r9,40
	ctx.r9.s64 = 40;
loc_823E7D18:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_823E7D24:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7d44
	if (ctx.cr6.eq) goto loc_823E7D44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E7D44:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x823E7D4C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e7d68
	if (ctx.cr6.eq) goto loc_823E7D68;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37252
	ctx.r3.u64 = ctx.r3.u64 | 37252;
	// bl 0x82183448
	ctx.lr = 0x823E7D64;
	sub_82183448(ctx, base);
	// b 0x823e7d70
	goto loc_823E7D70;
loc_823E7D68:
	// li r3,2329
	ctx.r3.s64 = 2329;
	// bl 0x821845a0
	ctx.lr = 0x823E7D70;
	sub_821845A0(ctx, base);
loc_823E7D70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7d84
	if (ctx.cr6.eq) goto loc_823E7D84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ec2a8
	ctx.lr = 0x823E7D80;
	sub_823EC2A8(ctx, base);
	// b 0x823e7d88
	goto loc_823E7D88;
loc_823E7D84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823E7D88:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7DAC"))) PPC_WEAK_FUNC(sub_823E7DAC);
PPC_FUNC_IMPL(__imp__sub_823E7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7DB0"))) PPC_WEAK_FUNC(sub_823E7DB0);
PPC_FUNC_IMPL(__imp__sub_823E7DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E7DB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820ed3d8
	ctx.lr = 0x823E7DC4;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7e40
	if (ctx.cr6.eq) goto loc_823E7E40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r31,-792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8f10
	ctx.lr = 0x823E7DE0;
	sub_821E8F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e7df0
	if (!ctx.cr6.eq) goto loc_823E7DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e9858
	ctx.lr = 0x823E7DF0;
	sub_821E9858(ctx, base);
loc_823E7DF0:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e90a8
	ctx.lr = 0x823E7DFC;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7e40
	if (ctx.cr6.eq) goto loc_823E7E40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x823E7E14;
	sub_82109E00(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34780
	ctx.r10.u64 = ctx.r11.u64 | 34780;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x823E7E24;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E7E30;
	sub_821837D0(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E7E40;
	sub_821837D0(ctx, base);
loc_823E7E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E7E48"))) PPC_WEAK_FUNC(sub_823E7E48);
PPC_FUNC_IMPL(__imp__sub_823E7E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223a8a8
	ctx.lr = 0x823E7E60;
	sub_8223A8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7e94
	if (ctx.cr6.eq) goto loc_823E7E94;
	// bl 0x82244c90
	ctx.lr = 0x823E7E6C;
	sub_82244C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7e94
	if (ctx.cr6.eq) goto loc_823E7E94;
	// bl 0x823e7970
	ctx.lr = 0x823E7E78;
	sub_823E7970(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34780
	ctx.r10.u64 = ctx.r11.u64 | 34780;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823ebc60
	ctx.lr = 0x823E7E88;
	sub_823EBC60(ctx, base);
	// bl 0x823e7900
	ctx.lr = 0x823E7E8C;
	sub_823E7900(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
loc_823E7E94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7EA8"))) PPC_WEAK_FUNC(sub_823E7EA8);
PPC_FUNC_IMPL(__imp__sub_823E7EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E7EB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x820f3a78
	ctx.lr = 0x823E7EC4;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7f10
	if (ctx.cr6.eq) goto loc_823E7F10;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r3,-4388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4388);
	// bl 0x823c98c8
	ctx.lr = 0x823E7ED8;
	sub_823C98C8(ctx, base);
	// lwz r11,-4388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4388);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,34780
	ctx.r8.u64 = ctx.r9.u64 | 34780;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwzx r30,r31,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82183078
	ctx.lr = 0x823E7EF4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E7F00;
	sub_821837D0(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E7F10;
	sub_821837D0(ctx, base);
loc_823E7F10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E7F18"))) PPC_WEAK_FUNC(sub_823E7F18);
PPC_FUNC_IMPL(__imp__sub_823E7F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7fc4
	if (ctx.cr6.eq) goto loc_823E7FC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7fc4
	if (ctx.cr6.eq) goto loc_823E7FC4;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e7f84
	if (ctx.cr6.eq) goto loc_823E7F84;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823e7f84
	if (!ctx.cr6.eq) goto loc_823E7F84;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_823E7F84:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7fa4
	if (ctx.cr6.eq) goto loc_823E7FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E7FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E7FA4:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x823E7FBC;
	sub_821EA8B8(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_823E7FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7FDC"))) PPC_WEAK_FUNC(sub_823E7FDC);
PPC_FUNC_IMPL(__imp__sub_823E7FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E7FE0"))) PPC_WEAK_FUNC(sub_823E7FE0);
PPC_FUNC_IMPL(__imp__sub_823E7FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x823e8044
	if (!ctx.cr6.gt) goto loc_823E8044;
	// bl 0x8223a9f8
	ctx.lr = 0x823E800C;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b708
	ctx.lr = 0x823E8010;
	sub_8223B708(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,-3296(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3296);
	// bl 0x821b1bc8
	ctx.lr = 0x823E8030;
	sub_821B1BC8(ctx, base);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lwz r3,15460(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15460);
	// bl 0x8216d4e8
	ctx.lr = 0x823E803C;
	sub_8216D4E8(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
loc_823E8044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8058"))) PPC_WEAK_FUNC(sub_823E8058);
PPC_FUNC_IMPL(__imp__sub_823E8058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E8060;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x823e8160
	if (!ctx.cr6.gt) goto loc_823E8160;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e809c
	if (ctx.cr6.eq) goto loc_823E809C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E809C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E809C:
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r29.u32);
	// lwz r3,-4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e80c8
	if (ctx.cr6.eq) goto loc_823E80C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E80C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E80C8:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r29,-4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4388, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,1328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e80f4
	if (ctx.cr6.eq) goto loc_823E80F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E80F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E80F4:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// stw r29,1328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1328, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,1144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8120
	if (ctx.cr6.eq) goto loc_823E8120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E8120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E8120:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// stw r29,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e814c
	if (ctx.cr6.eq) goto loc_823E814C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E814C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E814C:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,-4392(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4392, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r29.u32);
	// stw r10,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r10.u32);
loc_823E8160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E8168"))) PPC_WEAK_FUNC(sub_823E8168);
PPC_FUNC_IMPL(__imp__sub_823E8168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E8170;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x823e8290
	if (!ctx.cr6.gt) goto loc_823E8290;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,80(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r30,76(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E81A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183078
	ctx.lr = 0x823E81A8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x823E81B4;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bgt cr6,0x823e8274
	if (ctx.cr6.gt) goto loc_823E8274;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e81d4
	// bdzf 4*cr6+eq,0x823e8204
	// bdzf 4*cr6+eq,0x823e8238
	// bne cr6,0x823e8268
	if (!ctx.cr6.eq) goto loc_823E8268;
loc_823E81D4:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x823E81E0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8288
	if (ctx.cr6.eq) goto loc_823E8288;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821fe658
	ctx.lr = 0x823E81F4;
	sub_821FE658(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E81FC;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E8204:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34800
	ctx.r3.u64 = ctx.r3.u64 | 34800;
	// bl 0x82080000
	ctx.lr = 0x823E8210;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8288
	if (ctx.cr6.eq) goto loc_823E8288;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c7948
	ctx.lr = 0x823E8228;
	sub_823C7948(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E8230;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E8238:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x823E8244;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8288
	if (ctx.cr6.eq) goto loc_823E8288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821fe658
	ctx.lr = 0x823E8258;
	sub_821FE658(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E8260;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E8268:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823E8274;
	sub_821EA9B8(ctx, base);
loc_823E8274:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x823E827C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8288
	if (ctx.cr6.eq) goto loc_823E8288;
	// bl 0x82175748
	ctx.lr = 0x823E8288;
	sub_82175748(ctx, base);
loc_823E8288:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E8290;
	sub_821837D0(ctx, base);
loc_823E8290:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E8298"))) PPC_WEAK_FUNC(sub_823E8298);
PPC_FUNC_IMPL(__imp__sub_823E8298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E82A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,-14396
	ctx.r5.s64 = ctx.r11.s64 + -14396;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8218cb30
	ctx.lr = 0x823E82C4;
	sub_8218CB30(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r9,r10,-14420
	ctx.r9.s64 = ctx.r10.s64 + -14420;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// bl 0x823e8620
	ctx.lr = 0x823E82FC;
	sub_823E8620(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x823E8300;
	sub_8215BEC8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r29,r29,-30756
	ctx.r29.s64 = ctx.r29.s64 + -30756;
	// li r6,47
	ctx.r6.s64 = 47;
	// stw r7,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r7.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823E831C;
	sub_8215BD08(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32185
	ctx.r4.s64 = -2109276160;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// lwz r3,-18236(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// beq cr6,0x823e8344
	if (ctx.cr6.eq) goto loc_823E8344;
	// bl 0x82094d78
	ctx.lr = 0x823E8344;
	sub_82094D78(ctx, base);
loc_823E8344:
	// bl 0x82230210
	ctx.lr = 0x823E8348;
	sub_82230210(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r30,-792(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -792);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e8370
	if (ctx.cr6.eq) goto loc_823E8370;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e90a8
	ctx.lr = 0x823E8364;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e83a8
	if (!ctx.cr6.eq) goto loc_823E83A8;
	// lwz r30,-792(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -792);
loc_823E8370:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82183078
	ctx.lr = 0x823E8378;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E8384;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823e8394
	if (!ctx.cr6.eq) goto loc_823E8394;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x823E8394;
	sub_821EFAA0(ctx, base);
loc_823E8394:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823E83A4;
	sub_821837D0(ctx, base);
	// b 0x823e83b0
	goto loc_823E83B0;
loc_823E83A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_823E83B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e52a8
	ctx.lr = 0x823E83C0;
	sub_820E52A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E83CC"))) PPC_WEAK_FUNC(sub_823E83CC);
PPC_FUNC_IMPL(__imp__sub_823E83CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E83D0"))) PPC_WEAK_FUNC(sub_823E83D0);
PPC_FUNC_IMPL(__imp__sub_823E83D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223a9f8
	ctx.lr = 0x823E83E8;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e841c
	if (ctx.cr6.eq) goto loc_823E841C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x820f3a78
	ctx.lr = 0x823E83FC;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e841c
	if (ctx.cr6.eq) goto loc_823E841C;
	// bl 0x8208f8e8
	ctx.lr = 0x823E8408;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e8414
	if (!ctx.cr6.eq) goto loc_823E8414;
	// bl 0x8208f948
	ctx.lr = 0x823E8414;
	sub_8208F948(ctx, base);
loc_823E8414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7b60
	ctx.lr = 0x823E841C;
	sub_823E7B60(ctx, base);
loc_823E841C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8430"))) PPC_WEAK_FUNC(sub_823E8430);
PPC_FUNC_IMPL(__imp__sub_823E8430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x823e860c
	if (ctx.cr6.gt) goto loc_823E860C;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31636
	ctx.r12.s64 = ctx.r12.s64 + -31636;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-31576(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31576);
	// lwz r17,-31536(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31536);
	// lwz r17,-31508(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31508);
	// lwz r17,-31480(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31480);
	// lwz r17,-31452(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31452);
	// lwz r17,-31424(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31424);
	// lwz r17,-31340(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31340);
	// lwz r17,-31312(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31312);
	// lwz r17,-31396(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31396);
	// lwz r17,-31220(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31220);
	// lwz r17,-31284(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31284);
	// lwz r17,-31256(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31256);
	// lwz r17,-31220(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31220);
	// lwz r17,-31368(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31368);
	// lwz r17,-31228(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31228);
	// bl 0x821e9200
	ctx.lr = 0x823E84AC;
	sub_821E9200(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e860c
	if (ctx.cr6.eq) goto loc_823E860C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7db0
	ctx.lr = 0x823E84D8;
	sub_823E7DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7ac8
	ctx.lr = 0x823E84F4;
	sub_823E7AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7e48
	ctx.lr = 0x823E8510;
	sub_823E7E48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7ea8
	ctx.lr = 0x823E852C;
	sub_823E7EA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e83d0
	ctx.lr = 0x823E8548;
	sub_823E83D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7830
	ctx.lr = 0x823E8564;
	sub_823E7830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7880
	ctx.lr = 0x823E8580;
	sub_823E7880(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7ca0
	ctx.lr = 0x823E859C;
	sub_823E7CA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7f18
	ctx.lr = 0x823E85B8;
	sub_823E7F18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7fe0
	ctx.lr = 0x823E85D4;
	sub_823E7FE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e8058
	ctx.lr = 0x823E85F0;
	sub_823E8058(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e8168
	ctx.lr = 0x823E860C;
	sub_823E8168(ctx, base);
loc_823E860C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8620"))) PPC_WEAK_FUNC(sub_823E8620);
PPC_FUNC_IMPL(__imp__sub_823E8620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c8398
	ctx.lr = 0x823E8638;
	sub_823C8398(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
	// addi r8,r10,-14376
	ctx.r8.s64 = ctx.r10.s64 + -14376;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8668"))) PPC_WEAK_FUNC(sub_823E8668);
PPC_FUNC_IMPL(__imp__sub_823E8668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
	// addi r8,r10,-14376
	ctx.r8.s64 = ctx.r10.s64 + -14376;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// b 0x823c7cf0
	sub_823C7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E8684"))) PPC_WEAK_FUNC(sub_823E8684);
PPC_FUNC_IMPL(__imp__sub_823E8684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8688"))) PPC_WEAK_FUNC(sub_823E8688);
PPC_FUNC_IMPL(__imp__sub_823E8688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E86B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E86D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823E86E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8223ab30
	ctx.lr = 0x823E86F8;
	sub_8223AB30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8714"))) PPC_WEAK_FUNC(sub_823E8714);
PPC_FUNC_IMPL(__imp__sub_823E8714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8718"))) PPC_WEAK_FUNC(sub_823E8718);
PPC_FUNC_IMPL(__imp__sub_823E8718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8728"))) PPC_WEAK_FUNC(sub_823E8728);
PPC_FUNC_IMPL(__imp__sub_823E8728) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c86c0
	sub_823C86C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E872C"))) PPC_WEAK_FUNC(sub_823E872C);
PPC_FUNC_IMPL(__imp__sub_823E872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8730"))) PPC_WEAK_FUNC(sub_823E8730);
PPC_FUNC_IMPL(__imp__sub_823E8730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E8744"))) PPC_WEAK_FUNC(sub_823E8744);
PPC_FUNC_IMPL(__imp__sub_823E8744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8748"))) PPC_WEAK_FUNC(sub_823E8748);
PPC_FUNC_IMPL(__imp__sub_823E8748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8758"))) PPC_WEAK_FUNC(sub_823E8758);
PPC_FUNC_IMPL(__imp__sub_823E8758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8768"))) PPC_WEAK_FUNC(sub_823E8768);
PPC_FUNC_IMPL(__imp__sub_823E8768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8778"))) PPC_WEAK_FUNC(sub_823E8778);
PPC_FUNC_IMPL(__imp__sub_823E8778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8788"))) PPC_WEAK_FUNC(sub_823E8788);
PPC_FUNC_IMPL(__imp__sub_823E8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8798"))) PPC_WEAK_FUNC(sub_823E8798);
PPC_FUNC_IMPL(__imp__sub_823E8798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E87A8"))) PPC_WEAK_FUNC(sub_823E87A8);
PPC_FUNC_IMPL(__imp__sub_823E87A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r4,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E87B8"))) PPC_WEAK_FUNC(sub_823E87B8);
PPC_FUNC_IMPL(__imp__sub_823E87B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823e87c0
	sub_823E87C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E87C0"))) PPC_WEAK_FUNC(sub_823E87C0);
PPC_FUNC_IMPL(__imp__sub_823E87C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
	// addi r8,r10,-14376
	ctx.r8.s64 = ctx.r10.s64 + -14376;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c7cf0
	ctx.lr = 0x823E87F8;
	sub_823C7CF0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e8814
	if (ctx.cr6.eq) goto loc_823E8814;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E8810;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E8814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E882C"))) PPC_WEAK_FUNC(sub_823E882C);
PPC_FUNC_IMPL(__imp__sub_823E882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8830"))) PPC_WEAK_FUNC(sub_823E8830);
PPC_FUNC_IMPL(__imp__sub_823E8830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82164c50
	ctx.lr = 0x823E8840;
	sub_82164C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,51
	ctx.r3.s64 = 51;
	// beq cr6,0x823e8850
	if (ctx.cr6.eq) goto loc_823E8850;
	// li r3,50
	ctx.r3.s64 = 50;
loc_823E8850:
	// bl 0x821ebaa8
	ctx.lr = 0x823E8854;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823E8860;
	sub_821EB980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8870"))) PPC_WEAK_FUNC(sub_823E8870);
PPC_FUNC_IMPL(__imp__sub_823E8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E8878;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-14208
	ctx.r10.s64 = ctx.r11.s64 + -14208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,20272
	ctx.r31.s64 = ctx.r3.s64 + 20272;
	// li r30,51
	ctx.r30.s64 = 51;
	// stw r11,-4392(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4392, ctx.r11.u32);
loc_823E88A4:
	// addi r31,r31,-336
	ctx.r31.s64 = ctx.r31.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x823E88B0;
	sub_821B1DC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823e88a4
	if (!ctx.cr0.lt) goto loc_823E88A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185670
	ctx.lr = 0x823E88C0;
	sub_82185670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E88C8"))) PPC_WEAK_FUNC(sub_823E88C8);
PPC_FUNC_IMPL(__imp__sub_823E88C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1968
	ctx.r4.s64 = 1968;
	// addi r3,r3,776
	ctx.r3.s64 = ctx.r3.s64 + 776;
	// bl 0x822aa648
	ctx.lr = 0x823E88E8;
	sub_822AA648(ctx, base);
	// li r10,41
	ctx.r10.s64 = 41;
	// addi r11,r31,764
	ctx.r11.s64 = ctx.r31.s64 + 764;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_823E88F8:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stwu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e88f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E88F8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8918"))) PPC_WEAK_FUNC(sub_823E8918);
PPC_FUNC_IMPL(__imp__sub_823E8918) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,194
	ctx.r10.s64 = ctx.r11.s64 + 194;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8958"))) PPC_WEAK_FUNC(sub_823E8958);
PPC_FUNC_IMPL(__imp__sub_823E8958) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823e8968
	if (ctx.cr6.lt) goto loc_823E8968;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// blt cr6,0x823e8970
	if (ctx.cr6.lt) goto loc_823E8970;
loc_823E8968:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E8970:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x823e8968
	if (ctx.cr6.lt) goto loc_823E8968;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bge cr6,0x823e8968
	if (!ctx.cr6.lt) goto loc_823E8968;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,194
	ctx.r10.s64 = ctx.r11.s64 + 194;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E89A0"))) PPC_WEAK_FUNC(sub_823E89A0);
PPC_FUNC_IMPL(__imp__sub_823E89A0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823e8a2c
	if (ctx.cr6.gt) {
		sub_823E8A2C(ctx, base);
		return;
	}
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30268
	ctx.r12.s64 = ctx.r12.s64 + -30268;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E89C4"))) PPC_WEAK_FUNC(sub_823E89C4);
PPC_FUNC_IMPL(__imp__sub_823E89C4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-30228(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30228);
	// lwz r17,-30220(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30220);
	// lwz r17,-30212(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30212);
	// lwz r17,-30204(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30204);
	// lwz r17,-30196(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30196);
	// lwz r17,-30188(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30188);
	// lwz r17,-30180(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30180);
	// lwz r17,-30172(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30172);
	// lwz r17,-30172(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30172);
	// lwz r17,-30172(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30172);
	// addi r3,r3,2800
	ctx.r3.s64 = ctx.r3.s64 + 2800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E89F4"))) PPC_WEAK_FUNC(sub_823E89F4);
PPC_FUNC_IMPL(__imp__sub_823E89F4) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3136
	ctx.r3.s64 = ctx.r3.s64 + 3136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E89FC"))) PPC_WEAK_FUNC(sub_823E89FC);
PPC_FUNC_IMPL(__imp__sub_823E89FC) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3472
	ctx.r3.s64 = ctx.r3.s64 + 3472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A04"))) PPC_WEAK_FUNC(sub_823E8A04);
PPC_FUNC_IMPL(__imp__sub_823E8A04) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3808
	ctx.r3.s64 = ctx.r3.s64 + 3808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A0C"))) PPC_WEAK_FUNC(sub_823E8A0C);
PPC_FUNC_IMPL(__imp__sub_823E8A0C) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4144
	ctx.r3.s64 = ctx.r3.s64 + 4144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A14"))) PPC_WEAK_FUNC(sub_823E8A14);
PPC_FUNC_IMPL(__imp__sub_823E8A14) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4480
	ctx.r3.s64 = ctx.r3.s64 + 4480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A1C"))) PPC_WEAK_FUNC(sub_823E8A1C);
PPC_FUNC_IMPL(__imp__sub_823E8A1C) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4816
	ctx.r3.s64 = ctx.r3.s64 + 4816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A24"))) PPC_WEAK_FUNC(sub_823E8A24);
PPC_FUNC_IMPL(__imp__sub_823E8A24) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,5152
	ctx.r3.s64 = ctx.r3.s64 + 5152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A2C"))) PPC_WEAK_FUNC(sub_823E8A2C);
PPC_FUNC_IMPL(__imp__sub_823E8A2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A34"))) PPC_WEAK_FUNC(sub_823E8A34);
PPC_FUNC_IMPL(__imp__sub_823E8A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8A38"))) PPC_WEAK_FUNC(sub_823E8A38);
PPC_FUNC_IMPL(__imp__sub_823E8A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823e8870
	ctx.lr = 0x823E8A58;
	sub_823E8870(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e8a74
	if (ctx.cr6.eq) goto loc_823E8A74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E8A70;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E8A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8A8C"))) PPC_WEAK_FUNC(sub_823E8A8C);
PPC_FUNC_IMPL(__imp__sub_823E8A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E8A90"))) PPC_WEAK_FUNC(sub_823E8A90);
PPC_FUNC_IMPL(__imp__sub_823E8A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x823E8AC8;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e8d44
	if (ctx.cr6.eq) goto loc_823E8D44;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29960
	ctx.r12.s64 = ctx.r12.s64 + -29960;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-29920(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29920);
	// lwz r17,-29848(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29848);
	// lwz r17,-29776(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29776);
	// lwz r17,-29704(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29704);
	// lwz r17,-29632(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29632);
	// lwz r17,-29560(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29560);
	// lwz r17,-29488(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
	// lwz r17,-29416(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29416);
	// lwz r17,-29408(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29408);
	// lwz r17,-29400(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29400);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8b48
	// bdzf 4*cr6+eq,0x823e8b50
	// bdzf 4*cr6+eq,0x823e8b58
	// bne cr6,0x823e8b60
	if (!ctx.cr6.eq) goto loc_823E8B60;
	// addi r3,r31,5488
	ctx.r3.s64 = ctx.r31.s64 + 5488;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B48:
	// addi r3,r31,5824
	ctx.r3.s64 = ctx.r31.s64 + 5824;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B50:
	// addi r3,r31,6160
	ctx.r3.s64 = ctx.r31.s64 + 6160;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B58:
	// addi r3,r31,6496
	ctx.r3.s64 = ctx.r31.s64 + 6496;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B60:
	// addi r3,r31,6832
	ctx.r3.s64 = ctx.r31.s64 + 6832;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8b90
	// bdzf 4*cr6+eq,0x823e8b98
	// bdzf 4*cr6+eq,0x823e8ba0
	// bne cr6,0x823e8ba8
	if (!ctx.cr6.eq) goto loc_823E8BA8;
	// addi r3,r31,7168
	ctx.r3.s64 = ctx.r31.s64 + 7168;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B90:
	// addi r3,r31,7504
	ctx.r3.s64 = ctx.r31.s64 + 7504;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8B98:
	// addi r3,r31,7840
	ctx.r3.s64 = ctx.r31.s64 + 7840;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BA0:
	// addi r3,r31,8176
	ctx.r3.s64 = ctx.r31.s64 + 8176;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BA8:
	// addi r3,r31,8512
	ctx.r3.s64 = ctx.r31.s64 + 8512;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8bd8
	// bdzf 4*cr6+eq,0x823e8be0
	// bdzf 4*cr6+eq,0x823e8be8
	// bne cr6,0x823e8bf0
	if (!ctx.cr6.eq) goto loc_823E8BF0;
	// addi r3,r31,8848
	ctx.r3.s64 = ctx.r31.s64 + 8848;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BD8:
	// addi r3,r31,9184
	ctx.r3.s64 = ctx.r31.s64 + 9184;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BE0:
	// addi r3,r31,9520
	ctx.r3.s64 = ctx.r31.s64 + 9520;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BE8:
	// addi r3,r31,9856
	ctx.r3.s64 = ctx.r31.s64 + 9856;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8BF0:
	// addi r3,r31,10192
	ctx.r3.s64 = ctx.r31.s64 + 10192;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8c20
	// bdzf 4*cr6+eq,0x823e8c28
	// bdzf 4*cr6+eq,0x823e8c30
	// bne cr6,0x823e8c38
	if (!ctx.cr6.eq) goto loc_823E8C38;
	// addi r3,r31,10528
	ctx.r3.s64 = ctx.r31.s64 + 10528;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C20:
	// addi r3,r31,10864
	ctx.r3.s64 = ctx.r31.s64 + 10864;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C28:
	// addi r3,r31,11200
	ctx.r3.s64 = ctx.r31.s64 + 11200;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C30:
	// addi r3,r31,11536
	ctx.r3.s64 = ctx.r31.s64 + 11536;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C38:
	// addi r3,r31,11872
	ctx.r3.s64 = ctx.r31.s64 + 11872;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8c68
	// bdzf 4*cr6+eq,0x823e8c70
	// bdzf 4*cr6+eq,0x823e8c78
	// bne cr6,0x823e8c80
	if (!ctx.cr6.eq) goto loc_823E8C80;
	// addi r3,r31,12208
	ctx.r3.s64 = ctx.r31.s64 + 12208;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C68:
	// addi r3,r31,12544
	ctx.r3.s64 = ctx.r31.s64 + 12544;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C70:
	// addi r3,r31,12880
	ctx.r3.s64 = ctx.r31.s64 + 12880;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C78:
	// addi r3,r31,13216
	ctx.r3.s64 = ctx.r31.s64 + 13216;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8C80:
	// addi r3,r31,13552
	ctx.r3.s64 = ctx.r31.s64 + 13552;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8cb0
	// bdzf 4*cr6+eq,0x823e8cb8
	// bdzf 4*cr6+eq,0x823e8cc0
	// bne cr6,0x823e8cc8
	if (!ctx.cr6.eq) goto loc_823E8CC8;
	// addi r3,r31,13888
	ctx.r3.s64 = ctx.r31.s64 + 13888;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8CB0:
	// addi r3,r31,14224
	ctx.r3.s64 = ctx.r31.s64 + 14224;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8CB8:
	// addi r3,r31,14560
	ctx.r3.s64 = ctx.r31.s64 + 14560;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8CC0:
	// addi r3,r31,14896
	ctx.r3.s64 = ctx.r31.s64 + 14896;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8CC8:
	// addi r3,r31,15232
	ctx.r3.s64 = ctx.r31.s64 + 15232;
	// b 0x823e8d48
	goto loc_823E8D48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e8d44
	if (ctx.cr6.gt) goto loc_823E8D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8cf8
	// bdzf 4*cr6+eq,0x823e8d00
	// bdzf 4*cr6+eq,0x823e8d08
	// bne cr6,0x823e8d10
	if (!ctx.cr6.eq) goto loc_823E8D10;
	// addi r3,r31,15568
	ctx.r3.s64 = ctx.r31.s64 + 15568;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8CF8:
	// addi r3,r31,15904
	ctx.r3.s64 = ctx.r31.s64 + 15904;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8D00:
	// addi r3,r31,16240
	ctx.r3.s64 = ctx.r31.s64 + 16240;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8D08:
	// addi r3,r31,16576
	ctx.r3.s64 = ctx.r31.s64 + 16576;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8D10:
	// addi r3,r31,16912
	ctx.r3.s64 = ctx.r31.s64 + 16912;
	// b 0x823e8d48
	goto loc_823E8D48;
	// addi r3,r31,17248
	ctx.r3.s64 = ctx.r31.s64 + 17248;
	// b 0x823e8d48
	goto loc_823E8D48;
	// addi r3,r31,17584
	ctx.r3.s64 = ctx.r31.s64 + 17584;
	// b 0x823e8d48
	goto loc_823E8D48;
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e8d3c
	if (!ctx.cr6.eq) goto loc_823E8D3C;
	// addi r3,r31,17920
	ctx.r3.s64 = ctx.r31.s64 + 17920;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8D3C:
	// addi r3,r31,18256
	ctx.r3.s64 = ctx.r31.s64 + 18256;
	// b 0x823e8d48
	goto loc_823E8D48;
loc_823E8D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E8D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8D60"))) PPC_WEAK_FUNC(sub_823E8D60);
PPC_FUNC_IMPL(__imp__sub_823E8D60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x823e8da8
	if (ctx.cr6.gt) goto loc_823E8DA8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8d88
	// bdzf 4*cr6+eq,0x823e8d90
	// bdzf 4*cr6+eq,0x823e8d98
	// bne cr6,0x823e8da0
	if (!ctx.cr6.eq) goto loc_823E8DA0;
	// addi r3,r3,18592
	ctx.r3.s64 = ctx.r3.s64 + 18592;
	// blr 
	return;
loc_823E8D88:
	// addi r3,r3,18928
	ctx.r3.s64 = ctx.r3.s64 + 18928;
	// blr 
	return;
loc_823E8D90:
	// addi r3,r3,19264
	ctx.r3.s64 = ctx.r3.s64 + 19264;
	// blr 
	return;
loc_823E8D98:
	// addi r3,r3,19600
	ctx.r3.s64 = ctx.r3.s64 + 19600;
	// blr 
	return;
loc_823E8DA0:
	// addi r3,r3,19936
	ctx.r3.s64 = ctx.r3.s64 + 19936;
	// blr 
	return;
loc_823E8DA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E8DB0"))) PPC_WEAK_FUNC(sub_823E8DB0);
PPC_FUNC_IMPL(__imp__sub_823E8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823E8DB8;
	sub_82248750(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// bl 0x821855f0
	ctx.lr = 0x823E8DC8;
	sub_821855F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-14208
	ctx.r10.s64 = ctx.r11.s64 + -14208;
	// addi r3,r29,640
	ctx.r3.s64 = ctx.r29.s64 + 640;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8214a400
	ctx.lr = 0x823E8DF4;
	sub_8214A400(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82164060
	ctx.lr = 0x823E8DFC;
	sub_82164060(ctx, base);
	// addi r28,r31,2800
	ctx.r28.s64 = ctx.r31.s64 + 2800;
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// stw r30,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r30.u32);
	// stw r30,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r30.u32);
	// stw r30,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r30.u32);
	// stw r30,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r30.u32);
	// stw r30,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r30.u32);
	// stw r30,2768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2768, ctx.r30.u32);
	// stw r30,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r30.u32);
	// stw r30,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r30.u32);
	// stw r30,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r30.u32);
	// stw r30,2784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2784, ctx.r30.u32);
	// stw r30,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r30.u32);
	// li r30,51
	ctx.r30.s64 = 51;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_823E8E3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b29d0
	ctx.lr = 0x823E8E44;
	sub_821B29D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,336
	ctx.r28.s64 = ctx.r28.s64 + 336;
	// bge 0x823e8e3c
	if (!ctx.cr0.lt) goto loc_823E8E3C;
	// lwsync 
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,-4392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4392, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x823E8E68;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e88c8
	ctx.lr = 0x823E8E70;
	sub_823E88C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r10,r10,31232
	ctx.r10.s64 = ctx.r10.s64 + 31232;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r5,-22648
	ctx.r5.s64 = ctx.r5.s64 + -22648;
	// addi r3,r3,-22660
	ctx.r3.s64 = ctx.r3.s64 + -22660;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// addi r10,r9,31264
	ctx.r10.s64 = ctx.r9.s64 + 31264;
	// addi r9,r7,31272
	ctx.r9.s64 = ctx.r7.s64 + 31272;
	// addi r6,r6,31240
	ctx.r6.s64 = ctx.r6.s64 + 31240;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r4,31248
	ctx.r4.s64 = ctx.r4.s64 + 31248;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r11,r11,31256
	ctx.r11.s64 = ctx.r11.s64 + 31256;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r8,r8,31280
	ctx.r8.s64 = ctx.r8.s64 + 31280;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r25,r25,31288
	ctx.r25.s64 = ctx.r25.s64 + 31288;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// lis r16,-32256
	ctx.r16.s64 = -2113929216;
	// addi r31,r31,-22672
	ctx.r31.s64 = ctx.r31.s64 + -22672;
	// addi r30,r30,-22684
	ctx.r30.s64 = ctx.r30.s64 + -22684;
	// addi r5,r5,-22700
	ctx.r5.s64 = ctx.r5.s64 + -22700;
	// addi r3,r3,-22716
	ctx.r3.s64 = ctx.r3.s64 + -22716;
	// addi r29,r29,31200
	ctx.r29.s64 = ctx.r29.s64 + 31200;
	// addi r28,r28,31208
	ctx.r28.s64 = ctx.r28.s64 + 31208;
	// addi r27,r27,31216
	ctx.r27.s64 = ctx.r27.s64 + 31216;
	// addi r26,r26,31224
	ctx.r26.s64 = ctx.r26.s64 + 31224;
	// addi r7,r7,31296
	ctx.r7.s64 = ctx.r7.s64 + 31296;
	// addi r11,r11,31320
	ctx.r11.s64 = ctx.r11.s64 + 31320;
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r6,31304
	ctx.r6.s64 = ctx.r6.s64 + 31304;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r10,31332
	ctx.r10.s64 = ctx.r10.s64 + 31332;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r4,31312
	ctx.r4.s64 = ctx.r4.s64 + 31312;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r9,31344
	ctx.r9.s64 = ctx.r9.s64 + 31344;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r8,31356
	ctx.r8.s64 = ctx.r8.s64 + 31356;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,-792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -792);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r14,84(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// addi r6,r6,31512
	ctx.r6.s64 = ctx.r6.s64 + 31512;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r26,r19,31428
	ctx.r26.s64 = ctx.r19.s64 + 31428;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r9,r9,31476
	ctx.r9.s64 = ctx.r9.s64 + 31476;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r29,r24,31368
	ctx.r29.s64 = ctx.r24.s64 + 31368;
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// addi r24,r22,31392
	ctx.r24.s64 = ctx.r22.s64 + 31392;
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r20,31416
	ctx.r22.s64 = ctx.r20.s64 + 31416;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r20,r16,31464
	ctx.r20.s64 = ctx.r16.s64 + 31464;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r4,31488
	ctx.r4.s64 = ctx.r4.s64 + 31488;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// addi r27,r23,31380
	ctx.r27.s64 = ctx.r23.s64 + 31380;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r23,r21,31404
	ctx.r23.s64 = ctx.r21.s64 + 31404;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r21,r18,31440
	ctx.r21.s64 = ctx.r18.s64 + 31440;
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r19.u32);
	// addi r7,r17,31452
	ctx.r7.s64 = ctx.r17.s64 + 31452;
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// addi r10,r10,31500
	ctx.r10.s64 = ctx.r10.s64 + 31500;
	// stw r15,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r15.u32);
	// addi r25,r28,31524
	ctx.r25.s64 = ctx.r28.s64 + 31524;
	// stw r14,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r14.u32);
	// addi r19,r11,31536
	ctx.r19.s64 = ctx.r11.s64 + 31536;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r18,r31,31548
	ctx.r18.s64 = ctx.r31.s64 + 31548;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r16,r30,31572
	ctx.r16.s64 = ctx.r30.s64 + 31572;
	// addi r17,r11,31560
	ctx.r17.s64 = ctx.r11.s64 + 31560;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r15,-32250
	ctx.r15.s64 = -2113536000;
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// addi r11,r11,-22740
	ctx.r11.s64 = ctx.r11.s64 + -22740;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// lis r14,-32250
	ctx.r14.s64 = -2113536000;
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r5,31580
	ctx.r5.s64 = ctx.r5.s64 + 31580;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r27,r15,-22776
	ctx.r27.s64 = ctx.r15.s64 + -22776;
	// addi r29,r28,-22764
	ctx.r29.s64 = ctx.r28.s64 + -22764;
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r3,31592
	ctx.r3.s64 = ctx.r3.s64 + 31592;
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// addi r24,r14,-22728
	ctx.r24.s64 = ctx.r14.s64 + -22728;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// stw r27,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r27,r11,31164
	ctx.r27.s64 = ctx.r11.s64 + 31164;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r23,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r23.u32);
	// stw r22,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r22.u32);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r20,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r20.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// addi r8,r31,-22752
	ctx.r8.s64 = ctx.r31.s64 + -22752;
	// stw r4,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
	// li r31,52
	ctx.r31.s64 = 52;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stw r19,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r19.u32);
	// stw r18,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r18.u32);
	// stw r17,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r17.u32);
	// stw r16,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r16.u32);
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// stw r24,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r24.u32);
loc_823E91CC:
	// lwzu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82110430
	ctx.lr = 0x823E91E0;
	sub_82110430(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8209eda0
	ctx.lr = 0x823E91F0;
	sub_8209EDA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x821d25f8
	ctx.lr = 0x823E91FC;
	sub_821D25F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bne 0x823e91cc
	if (!ctx.cr0.eq) goto loc_823E91CC;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9214"))) PPC_WEAK_FUNC(sub_823E9214);
PPC_FUNC_IMPL(__imp__sub_823E9214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9218"))) PPC_WEAK_FUNC(sub_823E9218);
PPC_FUNC_IMPL(__imp__sub_823E9218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82244cd8
	ctx.lr = 0x823E9238;
	sub_82244CD8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-14192
	ctx.r9.s64 = ctx.r11.s64 + -14192;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x822443b0
	ctx.lr = 0x823E9254;
	sub_822443B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9278"))) PPC_WEAK_FUNC(sub_823E9278);
PPC_FUNC_IMPL(__imp__sub_823E9278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e92a4
	if (ctx.cr6.eq) goto loc_823E92A4;
	// bl 0x8223a9f8
	ctx.lr = 0x823E929C;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2f8
	ctx.lr = 0x823E92A0;
	sub_8223B2F8(ctx, base);
	// b 0x823e92ac
	goto loc_823E92AC;
loc_823E92A4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-5052(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
loc_823E92AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e92ec
	if (ctx.cr6.eq) goto loc_823E92EC;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// bne cr6,0x823e92ec
	if (!ctx.cr6.eq) goto loc_823E92EC;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e92d4
	if (ctx.cr6.eq) goto loc_823E92D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e92ec
	if (!ctx.cr6.eq) goto loc_823E92EC;
loc_823E92D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E92EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9304"))) PPC_WEAK_FUNC(sub_823E9304);
PPC_FUNC_IMPL(__imp__sub_823E9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9308"))) PPC_WEAK_FUNC(sub_823E9308);
PPC_FUNC_IMPL(__imp__sub_823E9308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223a9f8
	ctx.lr = 0x823E9320;
	sub_8223A9F8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// bl 0x8223b590
	ctx.lr = 0x823E9328;
	sub_8223B590(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823E932C;
	sub_8223A9F8(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// bl 0x8223b5d8
	ctx.lr = 0x823E9334;
	sub_8223B5D8(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823E9338;
	sub_8223A9F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223b4e8
	ctx.lr = 0x823E9340;
	sub_8223B4E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E935C"))) PPC_WEAK_FUNC(sub_823E935C);
PPC_FUNC_IMPL(__imp__sub_823E935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9360"))) PPC_WEAK_FUNC(sub_823E9360);
PPC_FUNC_IMPL(__imp__sub_823E9360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x823E9384;
	sub_82185740(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,-14188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14188);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,-13840
	ctx.r6.s64 = ctx.r8.s64 + -13840;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x823E944C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e9464
	if (ctx.cr6.eq) goto loc_823E9464;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82183448
	ctx.lr = 0x823E9460;
	sub_82183448(ctx, base);
	// b 0x823e946c
	goto loc_823E946C;
loc_823E9464:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821845a0
	ctx.lr = 0x823E946C;
	sub_821845A0(ctx, base);
loc_823E946C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9484
	if (ctx.cr6.eq) goto loc_823E9484;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823c58b0
	ctx.lr = 0x823E9480;
	sub_823C58B0(ctx, base);
	// b 0x823e9488
	goto loc_823E9488;
loc_823E9484:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823E9488:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E949C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r7,r9,r9
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E94D0"))) PPC_WEAK_FUNC(sub_823E94D0);
PPC_FUNC_IMPL(__imp__sub_823E94D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-13840
	ctx.r10.s64 = ctx.r11.s64 + -13840;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823e9518
	if (ctx.cr6.eq) goto loc_823E9518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E9518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E9518:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x823E9528;
	sub_821857F0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9544
	if (ctx.cr6.eq) goto loc_823E9544;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E9540;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E9544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E955C"))) PPC_WEAK_FUNC(sub_823E955C);
PPC_FUNC_IMPL(__imp__sub_823E955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9560"))) PPC_WEAK_FUNC(sub_823E9560);
PPC_FUNC_IMPL(__imp__sub_823E9560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E9568;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e95a0
	if (!ctx.cr6.eq) goto loc_823E95A0;
	// bl 0x82244c90
	ctx.lr = 0x823E9580;
	sub_82244C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e964c
	if (ctx.cr6.eq) goto loc_823E964C;
	// bl 0x82244cb0
	ctx.lr = 0x823E958C;
	sub_82244CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 900, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E95A0:
	// bl 0x82244cb0
	ctx.lr = 0x823E95A4;
	sub_82244CB0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e95ec
	if (ctx.cr6.eq) goto loc_823E95EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9278
	ctx.lr = 0x823E95BC;
	sub_823E9278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e95ec
	if (ctx.cr6.eq) goto loc_823E95EC;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823e9218
	ctx.lr = 0x823E95D4;
	sub_823E9218(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x823e95ec
	if (ctx.cr6.eq) goto loc_823E95EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_823E95EC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e9624
	if (ctx.cr6.eq) goto loc_823E9624;
	// bl 0x8223a8a8
	ctx.lr = 0x823E95FC;
	sub_8223A8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e964c
	if (ctx.cr6.eq) goto loc_823E964C;
	// bl 0x8223ad48
	ctx.lr = 0x823E9608;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e964c
	if (ctx.cr6.eq) goto loc_823E964C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9308
	ctx.lr = 0x823E961C;
	sub_823E9308(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E9624:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e964c
	if (!ctx.cr6.eq) goto loc_823E964C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e964c
	if (ctx.cr6.eq) goto loc_823E964C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x823e964c
	if (ctx.cr0.gt) goto loc_823E964C;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_823E964C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E9654"))) PPC_WEAK_FUNC(sub_823E9654);
PPC_FUNC_IMPL(__imp__sub_823E9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9658"))) PPC_WEAK_FUNC(sub_823E9658);
PPC_FUNC_IMPL(__imp__sub_823E9658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-13832
	ctx.r10.s64 = ctx.r11.s64 + -13832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823e969c
	if (ctx.cr6.eq) goto loc_823E969C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E969C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E969C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e96c4
	if (ctx.cr6.eq) goto loc_823E96C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E96C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E96C4:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwsync 
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4384, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E96F0"))) PPC_WEAK_FUNC(sub_823E96F0);
PPC_FUNC_IMPL(__imp__sub_823E96F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e972c
	if (ctx.cr6.eq) goto loc_823E972C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E9724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4384, ctx.r11.u32);
loc_823E972C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9740"))) PPC_WEAK_FUNC(sub_823E9740);
PPC_FUNC_IMPL(__imp__sub_823E9740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,139
	ctx.r11.s64 = ctx.r11.s64 + 139;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823E9770;
	sub_823CCD30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E978C"))) PPC_WEAK_FUNC(sub_823E978C);
PPC_FUNC_IMPL(__imp__sub_823E978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9790"))) PPC_WEAK_FUNC(sub_823E9790);
PPC_FUNC_IMPL(__imp__sub_823E9790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e97a4
	if (!ctx.cr6.eq) goto loc_823E97A4;
loc_823E979C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E97A4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823e979c
	if (!ctx.cr6.eq) goto loc_823E979C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823e979c
	if (!ctx.cr6.eq) goto loc_823E979C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823e979c
	if (!ctx.cr6.eq) goto loc_823E979C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823e979c
	if (ctx.cr6.eq) goto loc_823E979C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E97EC"))) PPC_WEAK_FUNC(sub_823E97EC);
PPC_FUNC_IMPL(__imp__sub_823E97EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E97F0"))) PPC_WEAK_FUNC(sub_823E97F0);
PPC_FUNC_IMPL(__imp__sub_823E97F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823e9800
	if (ctx.cr6.lt) goto loc_823E9800;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// blt cr6,0x823e9808
	if (ctx.cr6.lt) goto loc_823E9808;
loc_823E9800:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E9808:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-13812
	ctx.r9.s64 = ctx.r11.s64 + -13812;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E981C"))) PPC_WEAK_FUNC(sub_823E981C);
PPC_FUNC_IMPL(__imp__sub_823E981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9820"))) PPC_WEAK_FUNC(sub_823E9820);
PPC_FUNC_IMPL(__imp__sub_823E9820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823e9a68
	sub_823E9A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E9828"))) PPC_WEAK_FUNC(sub_823E9828);
PPC_FUNC_IMPL(__imp__sub_823E9828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823e9658
	ctx.lr = 0x823E9848;
	sub_823E9658(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9864
	if (ctx.cr6.eq) goto loc_823E9864;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E9860;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E9864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E987C"))) PPC_WEAK_FUNC(sub_823E987C);
PPC_FUNC_IMPL(__imp__sub_823E987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9880"))) PPC_WEAK_FUNC(sub_823E9880);
PPC_FUNC_IMPL(__imp__sub_823E9880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e9898
	if (!ctx.cr6.eq) goto loc_823E9898;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823E9898:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bgt cr6,0x823e98b0
	if (ctx.cr6.gt) goto loc_823E98B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E98B0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r7,r9,r11
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E98D4"))) PPC_WEAK_FUNC(sub_823E98D4);
PPC_FUNC_IMPL(__imp__sub_823E98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E98D8"))) PPC_WEAK_FUNC(sub_823E98D8);
PPC_FUNC_IMPL(__imp__sub_823E98D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r3,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r3.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,15524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15524, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,964(r7)
	PPC_STORE_U32(ctx.r7.u32 + 964, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,1220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1220, ctx.r8.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,1476(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1476, ctx.r8.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,1732(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1732, ctx.r8.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,2244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2244, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,2756(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2756, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3012(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3012, ctx.r8.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3268, ctx.r8.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3524(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3524, ctx.r8.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3780, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,4036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4036, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9980"))) PPC_WEAK_FUNC(sub_823E9980);
PPC_FUNC_IMPL(__imp__sub_823E9980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3524, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,4036(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4036, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E99B0"))) PPC_WEAK_FUNC(sub_823E99B0);
PPC_FUNC_IMPL(__imp__sub_823E99B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x823E99DC;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185740
	ctx.lr = 0x823E99EC;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r9,r11,-13820
	ctx.r9.s64 = ctx.r11.s64 + -13820;
	// addi r8,r10,-13828
	ctx.r8.s64 = ctx.r10.s64 + -13828;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c34c0
	ctx.lr = 0x823E9A24;
	sub_823C34C0(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r4,140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// bl 0x823c3410
	ctx.lr = 0x823E9A48;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9A64"))) PPC_WEAK_FUNC(sub_823E9A64);
PPC_FUNC_IMPL(__imp__sub_823E9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9A68"))) PPC_WEAK_FUNC(sub_823E9A68);
PPC_FUNC_IMPL(__imp__sub_823E9A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E9A70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-13820
	ctx.r9.s64 = ctx.r11.s64 + -13820;
	// addi r8,r10,-13828
	ctx.r8.s64 = ctx.r10.s64 + -13828;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x823c30b8
	ctx.lr = 0x823E9AA0;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x823E9AA8;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x823E9AB0;
	sub_82185A50(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e9acc
	if (ctx.cr6.eq) goto loc_823E9ACC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E9AC8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E9ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E9AD4"))) PPC_WEAK_FUNC(sub_823E9AD4);
PPC_FUNC_IMPL(__imp__sub_823E9AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9AD8"))) PPC_WEAK_FUNC(sub_823E9AD8);
PPC_FUNC_IMPL(__imp__sub_823E9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E9AE0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823e9ba4
	if (ctx.cr6.eq) goto loc_823E9BA4;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823E9B0C;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823E9B1C;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x823E9B30;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823E9B3C;
	sub_821AD498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e9b8c
	if (ctx.cr6.eq) goto loc_823E9B8C;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,125
	ctx.r4.s64 = 125;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,18132(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 18132, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8210a9b0
	ctx.lr = 0x823E9B8C;
	sub_8210A9B0(ctx, base);
loc_823E9B8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823E9B98;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823E9BA4;
	sub_821AD498(ctx, base);
loc_823E9BA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E9BAC"))) PPC_WEAK_FUNC(sub_823E9BAC);
PPC_FUNC_IMPL(__imp__sub_823E9BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9BB0"))) PPC_WEAK_FUNC(sub_823E9BB0);
PPC_FUNC_IMPL(__imp__sub_823E9BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E9BB8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823e9d04
	if (ctx.cr6.eq) goto loc_823E9D04;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823E9BE4;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823E9BF4;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x823E9C08;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823E9C14;
	sub_821AD498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e9cec
	if (ctx.cr6.eq) goto loc_823E9CEC;
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e9c38
	if (!ctx.cr6.eq) goto loc_823E9C38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E9C38:
	// bl 0x8218b408
	ctx.lr = 0x823E9C3C;
	sub_8218B408(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// li r5,1
	ctx.r5.s64 = 1;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r4,126
	ctx.r4.s64 = 126;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,18264(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 18264, temp.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f13,18268(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 18268, temp.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f12,18272(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 18272, temp.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f11,18276(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 18276, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8210a9b0
	ctx.lr = 0x823E9CEC;
	sub_8210A9B0(ctx, base);
loc_823E9CEC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823E9CF8;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823E9D04;
	sub_821AD498(ctx, base);
loc_823E9D04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E9D0C"))) PPC_WEAK_FUNC(sub_823E9D0C);
PPC_FUNC_IMPL(__imp__sub_823E9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9D10"))) PPC_WEAK_FUNC(sub_823E9D10);
PPC_FUNC_IMPL(__imp__sub_823E9D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r4.u32);
	// addi r11,r4,139
	ctx.r11.s64 = ctx.r4.s64 + 139;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E9D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r7,r11,139
	ctx.r7.s64 = ctx.r11.s64 + 139;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823E9D64;
	sub_823CCD30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9D80"))) PPC_WEAK_FUNC(sub_823E9D80);
PPC_FUNC_IMPL(__imp__sub_823E9D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r4.u32);
	// addi r11,r4,139
	ctx.r11.s64 = ctx.r4.s64 + 139;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823E9DB0;
	sub_823CCD30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E9DCC"))) PPC_WEAK_FUNC(sub_823E9DCC);
PPC_FUNC_IMPL(__imp__sub_823E9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9DD0"))) PPC_WEAK_FUNC(sub_823E9DD0);
PPC_FUNC_IMPL(__imp__sub_823E9DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E9DD8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r31,r11,1696
	ctx.r31.s64 = ctx.r11.s64 + 1696;
	// bl 0x8223aa28
	ctx.lr = 0x823E9DF4;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9e54
	if (ctx.cr6.eq) goto loc_823E9E54;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E9E10:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e9e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9E10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c8218
	ctx.lr = 0x823E9E24;
	sub_820C8218(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e9e3c
	if (ctx.cr6.eq) goto loc_823E9E3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c8d48
	ctx.lr = 0x823E9E3C;
	sub_820C8D48(ctx, base);
loc_823E9E3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823e9e54
	if (ctx.cr6.eq) goto loc_823E9E54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca198
	ctx.lr = 0x823E9E54;
	sub_820CA198(ctx, base);
loc_823E9E54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E9E5C"))) PPC_WEAK_FUNC(sub_823E9E5C);
PPC_FUNC_IMPL(__imp__sub_823E9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9E60"))) PPC_WEAK_FUNC(sub_823E9E60);
PPC_FUNC_IMPL(__imp__sub_823E9E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823E9E68;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8223aa28
	ctx.lr = 0x823E9E98;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9f1c
	if (ctx.cr6.eq) goto loc_823E9F1C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E9EB4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e9eb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9EB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823E9EC8;
	sub_820C8218(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// beq cr6,0x823e9efc
	if (ctx.cr6.eq) goto loc_823E9EFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8d48
	ctx.lr = 0x823E9EFC;
	sub_820C8D48(ctx, base);
loc_823E9EFC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823e9f1c
	if (ctx.cr6.eq) goto loc_823E9F1C;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823E9F1C;
	sub_820CA128(ctx, base);
loc_823E9F1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823E9F24"))) PPC_WEAK_FUNC(sub_823E9F24);
PPC_FUNC_IMPL(__imp__sub_823E9F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E9F28"))) PPC_WEAK_FUNC(sub_823E9F28);
PPC_FUNC_IMPL(__imp__sub_823E9F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823E9F30;
	sub_82248780(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r28,r10,1696
	ctx.r28.s64 = ctx.r10.s64 + 1696;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x823e9fcc
	if (!ctx.cr6.eq) goto loc_823E9FCC;
	// bl 0x82163e58
	ctx.lr = 0x823E9F6C;
	sub_82163E58(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E9F80:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e9f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9F80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c8438
	ctx.lr = 0x823E9F98;
	sub_820C8438(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823e9fb8
	if (ctx.cr6.eq) goto loc_823E9FB8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823E9FB8;
	sub_820CA0D0(ctx, base);
loc_823E9FB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ea04c
	if (ctx.cr6.eq) goto loc_823EA04C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x823ea03c
	goto loc_823EA03C;
loc_823E9FCC:
	// bl 0x82163e58
	ctx.lr = 0x823E9FD0;
	sub_82163E58(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E9FE4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e9fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9FE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c8438
	ctx.lr = 0x823E9FF8;
	sub_820C8438(ctx, base);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// beq cr6,0x823ea02c
	if (ctx.cr6.eq) goto loc_823EA02C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c8d48
	ctx.lr = 0x823EA02C;
	sub_820C8D48(ctx, base);
loc_823EA02C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ea04c
	if (ctx.cr6.eq) goto loc_823EA04C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_823EA03C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca128
	ctx.lr = 0x823EA04C;
	sub_820CA128(ctx, base);
loc_823EA04C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823EA054"))) PPC_WEAK_FUNC(sub_823EA054);
PPC_FUNC_IMPL(__imp__sub_823EA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EA058"))) PPC_WEAK_FUNC(sub_823EA058);
PPC_FUNC_IMPL(__imp__sub_823EA058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823EA060;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823EA070;
	sub_82163DF0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,-4340
	ctx.r29.s64 = ctx.r11.s64 + -4340;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// bl 0x82084038
	ctx.lr = 0x823EA094;
	sub_82084038(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,4056(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4056, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,4076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4076, ctx.r30.u32);
	// lwz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823ea12c
	if (!ctx.cr6.eq) goto loc_823EA12C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1220, ctx.r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,1732(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1732, ctx.r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,2244(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2244, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1476, ctx.r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,1988(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1988, ctx.r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,2500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2500, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,3012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3012, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3780, ctx.r11.u32);
loc_823EA12C:
	// bl 0x8223ad48
	ctx.lr = 0x823EA130;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ea5f4
	if (ctx.cr6.eq) goto loc_823EA5F4;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ea5f4
	if (ctx.cr6.eq) goto loc_823EA5F4;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r11,r11,139
	ctx.r11.s64 = ctx.r11.s64 + 139;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EA168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EA17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r4,r3
	ctx.r4.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r28,r4,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EA198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7290
	ctx.lr = 0x823EA1A4;
	sub_820C7290(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823EA1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x820c7290
	ctx.lr = 0x823EA1CC;
	sub_820C7290(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,1264
	ctx.r5.s64 = ctx.r1.s64 + 1264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823EA1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,1200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,1180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f10,1192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f9,2304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2304);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lfs f7,2296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2296);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r17,108(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f6.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r16,148(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f2,1176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lfs f4,2280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f1,2284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2284);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f3.u64);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r20,124(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// bl 0x820c9e18
	ctx.lr = 0x823EA294;
	sub_820C9E18(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x820c9e18
	ctx.lr = 0x823EA2A0;
	sub_820C9E18(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823ea2c8
	if (ctx.cr6.eq) goto loc_823EA2C8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r22,r1,136
	ctx.r22.s64 = ctx.r1.s64 + 136;
	// addi r18,r1,104
	ctx.r18.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x823ea2e0
	goto loc_823EA2E0;
loc_823EA2C8:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r26,r1,152
	ctx.r26.s64 = ctx.r1.s64 + 152;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r22,r1,144
	ctx.r22.s64 = ctx.r1.s64 + 144;
	// addi r18,r1,96
	ctx.r18.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
loc_823EA2E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x823EA2EC;
	sub_8218B408(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8218b408
	ctx.lr = 0x823EA2F8;
	sub_8218B408(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8218b408
	ctx.lr = 0x823EA304;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8218b408
	ctx.lr = 0x823EA310;
	sub_8218B408(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r29,-40
	ctx.r9.s64 = ctx.r29.s64 + -40;
	// addi r24,r11,26232
	ctx.r24.s64 = ctx.r11.s64 + 26232;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r30,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823EA344;
	sub_8218A5F0(ctx, base);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r29,-40
	ctx.r7.s64 = ctx.r29.s64 + -40;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,1752(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1752, ctx.r7.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r30,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f31,1748(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1748, temp.u32);
	// beq cr6,0x823ea398
	if (ctx.cr6.eq) goto loc_823EA398;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823ea390
	if (!ctx.cr6.gt) goto loc_823EA390;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, ctx.xer);
loc_823EA390:
	// bge cr6,0x823ea398
	if (!ctx.cr6.lt) goto loc_823EA398;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823EA398:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823ea3a8
	if (!ctx.cr6.gt) goto loc_823EA3A8;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_823EA3A8:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823EA3B4;
	sub_8212EF08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r29,-24
	ctx.r3.s64 = ctx.r29.s64 + -24;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,2244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2244, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823EA3D4;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,-24
	ctx.r9.s64 = ctx.r29.s64 + -24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,2776(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2776, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,2796(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2796, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r30,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,2772(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 2772, temp.u32);
	// beq cr6,0x823ea428
	if (ctx.cr6.eq) goto loc_823EA428;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x823ea420
	if (!ctx.cr6.gt) goto loc_823EA420;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
loc_823EA420:
	// bge cr6,0x823ea428
	if (!ctx.cr6.lt) goto loc_823EA428;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823EA428:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823EA434;
	sub_8212EF08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,0(r18)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,1476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1476, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823EA458;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,-32
	ctx.r9.s64 = ctx.r29.s64 + -32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,2008(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2008, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,2028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2028, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r30,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,2004(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 2004, temp.u32);
	// beq cr6,0x823ea4ac
	if (ctx.cr6.eq) goto loc_823EA4AC;
	// cmpw cr6,r16,r17
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x823ea4a4
	if (!ctx.cr6.gt) goto loc_823EA4A4;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r16,r17
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r17.s32, ctx.xer);
loc_823EA4A4:
	// bge cr6,0x823ea4ac
	if (!ctx.cr6.lt) goto loc_823EA4AC;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823EA4AC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823ea4c0
	if (!ctx.cr6.gt) goto loc_823EA4C0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_823EA4C0:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823EA4CC;
	sub_8212EF08(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,13720
	ctx.r4.s64 = 13720;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r30.u32);
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823EA4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r6,-22216
	ctx.r5.s64 = ctx.r6.s64 + -22216;
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8218a5f0
	ctx.lr = 0x823EA510;
	sub_8218A5F0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,3032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3032, ctx.r4.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,3052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3052, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f31,3028(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 3028, temp.u32);
	// beq cr6,0x823ea56c
	if (ctx.cr6.eq) goto loc_823EA56C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823ea564
	if (!ctx.cr6.gt) goto loc_823EA564;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_823EA564:
	// bge cr6,0x823ea56c
	if (!ctx.cr6.lt) goto loc_823EA56C;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823EA56C:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823EA578;
	sub_8212EF08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823EA590;
	sub_8218A5F0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,3800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3800, ctx.r29.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,3820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3820, ctx.r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,3780(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3780, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f31,3796(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3796, temp.u32);
	// beq cr6,0x823ea5e8
	if (ctx.cr6.eq) goto loc_823EA5E8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823ea5e0
	if (!ctx.cr6.gt) goto loc_823EA5E0;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_823EA5E0:
	// bge cr6,0x823ea5e8
	if (!ctx.cr6.lt) goto loc_823EA5E8;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823EA5E8:
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823EA5F4;
	sub_8212EF08(ctx, base);
loc_823EA5F4:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EA600"))) PPC_WEAK_FUNC(sub_823EA600);
PPC_FUNC_IMPL(__imp__sub_823EA600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823EA608;
	sub_82248750(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4768(r1)
	ea = -4768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823EA620;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eb224
	if (ctx.cr6.eq) goto loc_823EB224;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823eb224
	if (ctx.cr6.eq) goto loc_823EB224;
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// addi r11,r11,139
	ctx.r11.s64 = ctx.r11.s64 + 139;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r10,r29
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EA658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r19,r6,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r5,20(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823EA674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8218b408
	ctx.lr = 0x823EA680;
	sub_8218B408(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8218b408
	ctx.lr = 0x823EA68C;
	sub_8218B408(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8218b408
	ctx.lr = 0x823EA698;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820c7290
	ctx.lr = 0x823EA6A4;
	sub_820C7290(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x820c7290
	ctx.lr = 0x823EA6AC;
	sub_820C7290(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1280
	ctx.r5.s64 = ctx.r1.s64 + 1280;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EA6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x820c7290
	ctx.lr = 0x823EA6D4;
	sub_820C7290(ctx, base);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x820c7290
	ctx.lr = 0x823EA6DC;
	sub_820C7290(ctx, base);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,3488
	ctx.r5.s64 = ctx.r1.s64 + 3488;
	// addi r4,r1,2384
	ctx.r4.s64 = ctx.r1.s64 + 2384;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EA6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ea72c
	if (ctx.cr6.eq) goto loc_823EA72C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ea72c
	if (ctx.cr6.eq) goto loc_823EA72C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823ea72c
	if (ctx.cr6.eq) goto loc_823EA72C;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13685
	ctx.r11.s64 = 13685;
	// addi r25,r10,5560
	ctx.r25.s64 = ctx.r10.s64 + 5560;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823ea73c
	goto loc_823EA73C;
loc_823EA72C:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13686
	ctx.r11.s64 = 13686;
	// addi r25,r10,5560
	ctx.r25.s64 = ctx.r10.s64 + 5560;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823EA73C:
	// stw r10,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// li r24,6
	ctx.r24.s64 = 6;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r17,r11,26232
	ctx.r17.s64 = ctx.r11.s64 + 26232;
loc_823EA764:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea784
	if (ctx.cr6.lt) goto loc_823EA784;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823EA784:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea7a4
	if (ctx.cr6.lt) goto loc_823EA7A4;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823EA7A4:
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106f58
	ctx.lr = 0x823EA7B4;
	sub_82106F58(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea7d4
	if (ctx.cr6.lt) goto loc_823EA7D4;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823EA7D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ea82c
	if (ctx.cr6.eq) goto loc_823EA82C;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823EA7F8;
	sub_820C6D40(ctx, base);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r11,r1,2384
	ctx.r11.s64 = ctx.r1.s64 + 2384;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823EA81C;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823ea858
	goto loc_823EA858;
loc_823EA82C:
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x820c6d40
	ctx.lr = 0x823EA834;
	sub_820C6D40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r3,r1,4456
	ctx.r3.s64 = ctx.r1.s64 + 4456;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c6d40
	ctx.lr = 0x823EA84C;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823EA858:
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	// eqv r8,r30,r11
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// subfc r5,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r4,r8,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r27,r3,31
	ctx.r27.u64 = ctx.r3.u32 & 0x1;
	// bne cr6,0x823ea88c
	if (!ctx.cr6.eq) goto loc_823EA88C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823EA88C:
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823EA8A4;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r30.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r20,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r20.u32);
	// beq cr6,0x823ea8ec
	if (ctx.cr6.eq) goto loc_823EA8EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823ea8e0
	if (ctx.cr6.eq) goto loc_823EA8E0;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823EA8E0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823ea8ec
	if (ctx.cr6.eq) goto loc_823EA8EC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823EA8EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x823ea764
	if (!ctx.cr0.eq) goto loc_823EA764;
	// lwz r11,192(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea9b8
	if (ctx.cr6.lt) goto loc_823EA9B8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EA9B8:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea9d8
	if (ctx.cr6.lt) goto loc_823EA9D8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EA9D8:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ea9f8
	if (ctx.cr6.lt) goto loc_823EA9F8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EA9F8:
	// lwz r11,224(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaa18
	if (ctx.cr6.lt) goto loc_823EAA18;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAA18:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaa38
	if (ctx.cr6.lt) goto loc_823EAA38;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAA38:
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaa58
	if (ctx.cr6.lt) goto loc_823EAA58;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAA58:
	// lwz r11,236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaa78
	if (ctx.cr6.lt) goto loc_823EAA78;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAA78:
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaa98
	if (ctx.cr6.lt) goto loc_823EAA98;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAA98:
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaab8
	if (ctx.cr6.lt) goto loc_823EAAB8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAAB8:
	// lwz r11,268(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaad8
	if (ctx.cr6.lt) goto loc_823EAAD8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAAD8:
	// lwz r11,272(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eaaf8
	if (ctx.cr6.lt) goto loc_823EAAF8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAAF8:
	// lwz r11,276(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eab18
	if (ctx.cr6.lt) goto loc_823EAB18;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAB18:
	// lwz r11,284(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eab38
	if (ctx.cr6.lt) goto loc_823EAB38;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAB38:
	// lwz r11,304(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eab58
	if (ctx.cr6.lt) goto loc_823EAB58;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAB58:
	// lwz r11,308(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eab78
	if (ctx.cr6.lt) goto loc_823EAB78;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAB78:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eab98
	if (ctx.cr6.lt) goto loc_823EAB98;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAB98:
	// lwz r11,316(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eabb8
	if (ctx.cr6.lt) goto loc_823EABB8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EABB8:
	// lwz r11,324(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eabd8
	if (ctx.cr6.lt) goto loc_823EABD8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EABD8:
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eabf8
	if (ctx.cr6.lt) goto loc_823EABF8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EABF8:
	// lwz r11,348(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eac18
	if (ctx.cr6.lt) goto loc_823EAC18;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823EAC18:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823ead20
	if (!ctx.cr6.eq) goto loc_823EAD20;
loc_823EAC58:
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,13691
	ctx.r5.s64 = 13691;
	// li r4,13692
	ctx.r4.s64 = 13692;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// li r3,13693
	ctx.r3.s64 = 13693;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r10,13694
	ctx.r10.s64 = 13694;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r9,13695
	ctx.r9.s64 = 13695;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r8,13696
	ctx.r8.s64 = 13696;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r7,13697
	ctx.r7.s64 = 13697;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823EACD4:
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820c67b0
	ctx.lr = 0x823EACE4;
	sub_820C67B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ead0c
	if (ctx.cr6.eq) goto loc_823EAD0C;
	// cmplwi cr6,r27,160
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 160, ctx.xer);
	// bge cr6,0x823eaed0
	if (!ctx.cr6.lt) goto loc_823EAED0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stwu r28,40(r30)
	ea = 40 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
loc_823EAD0C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// blt cr6,0x823eacd4
	if (ctx.cr6.lt) goto loc_823EACD4;
	// b 0x823eaed0
	goto loc_823EAED0;
loc_823EAD20:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823eae54
	if (ctx.cr6.eq) goto loc_823EAE54;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823ead38
	if (ctx.cr6.eq) goto loc_823EAD38;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823eaed0
	if (!ctx.cr6.eq) goto loc_823EAED0;
loc_823EAD38:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823eae54
	if (ctx.cr6.eq) goto loc_823EAE54;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823eadd0
	if (ctx.cr6.eq) goto loc_823EADD0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823eaed0
	if (!ctx.cr6.eq) goto loc_823EAED0;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r8,13691
	ctx.r8.s64 = 13691;
	// li r7,13695
	ctx.r7.s64 = 13695;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,13693
	ctx.r6.s64 = 13693;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,13697
	ctx.r5.s64 = 13697;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823eaed0
	if (!ctx.cr6.lt) goto loc_823EAED0;
loc_823EADA0:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823eada0
	if (ctx.cr6.lt) goto loc_823EADA0;
	// b 0x823eaed0
	goto loc_823EAED0;
loc_823EADD0:
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,13691
	ctx.r7.s64 = 13691;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r6,13692
	ctx.r6.s64 = 13692;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r5,13694
	ctx.r5.s64 = 13694;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r4,13693
	ctx.r4.s64 = 13693;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823eaed0
	if (!ctx.cr6.lt) goto loc_823EAED0;
loc_823EAE24:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823eae24
	if (ctx.cr6.lt) goto loc_823EAE24;
	// b 0x823eaed0
	goto loc_823EAED0;
loc_823EAE54:
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r8,13691
	ctx.r8.s64 = 13691;
	// li r7,13695
	ctx.r7.s64 = 13695;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,13696
	ctx.r6.s64 = 13696;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,13697
	ctx.r5.s64 = 13697;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823eaed0
	if (!ctx.cr6.lt) goto loc_823EAED0;
loc_823EAEA4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823eaea4
	if (ctx.cr6.lt) goto loc_823EAEA4;
loc_823EAED0:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x823eb220
	if (!ctx.cr6.gt) goto loc_823EB220;
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_823EAEE8:
	// cmplwi cr6,r23,160
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 160, ctx.xer);
	// bge cr6,0x823eb220
	if (!ctx.cr6.lt) goto loc_823EB220;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823eaf48
	if (ctx.cr6.eq) goto loc_823EAF48;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823EAF14;
	sub_820C6D40(ctx, base);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r10,r1,2384
	ctx.r10.s64 = ctx.r1.s64 + 2384;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823EAF38;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x823eaf74
	goto loc_823EAF74;
loc_823EAF48:
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x820c6d40
	ctx.lr = 0x823EAF50;
	sub_820C6D40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// addi r3,r1,4456
	ctx.r3.s64 = ctx.r1.s64 + 4456;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x820c6d40
	ctx.lr = 0x823EAF68;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_823EAF74:
	// subfc r11,r27,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// eqv r10,r27,r28
	// eqv r9,r28,r27
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// subfc r6,r28,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r28.u32;
	ctx.r6.s64 = ctx.r27.s64 - ctx.r28.s64;
	// clrlwi r26,r7,31
	ctx.r26.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r25,r4,31
	ctx.r25.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x823eafc0
	if (ctx.cr6.eq) goto loc_823EAFC0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823eafb4
	if (ctx.cr6.eq) goto loc_823EAFB4;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_823EAFB4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823eafc0
	if (ctx.cr6.eq) goto loc_823EAFC0;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_823EAFC0:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eafe0
	if (ctx.cr6.lt) goto loc_823EAFE0;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823EAFE0:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eb000
	if (ctx.cr6.lt) goto loc_823EB000;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823EB000:
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106f58
	ctx.lr = 0x823EB010;
	sub_82106F58(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eb030
	if (ctx.cr6.lt) goto loc_823EB030;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823EB030:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 212, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x823eb0dc
	if (!ctx.cr6.eq) goto loc_823EB0DC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_823EB0DC:
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823EB0F0;
	sub_8218A5F0(ctx, base);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r20.u32);
	// beq cr6,0x823eb128
	if (ctx.cr6.eq) goto loc_823EB128;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bne cr6,0x823eb12c
	if (!ctx.cr6.eq) goto loc_823EB12C;
loc_823EB128:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823EB12C:
	// lwz r11,548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823eb150
	if (!ctx.cr6.eq) goto loc_823EB150;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x823eb150
	if (ctx.cr6.eq) goto loc_823EB150;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106eb0
	ctx.lr = 0x823EB14C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x823EB150;
	sub_821D38E8(ctx, base);
loc_823EB150:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eb178
	if (ctx.cr6.lt) goto loc_823EB178;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823EB178:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// beq cr6,0x823eb1a4
	if (ctx.cr6.eq) goto loc_823EB1A4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bne cr6,0x823eb1a8
	if (!ctx.cr6.eq) goto loc_823EB1A8;
loc_823EB1A4:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823EB1A8:
	// lwz r11,548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823eb1cc
	if (!ctx.cr6.eq) goto loc_823EB1CC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x823eb1cc
	if (ctx.cr6.eq) goto loc_823EB1CC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106eb0
	ctx.lr = 0x823EB1C8;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x823EB1CC;
	sub_821D38E8(ctx, base);
loc_823EB1CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823eb1f4
	if (ctx.cr6.lt) goto loc_823EB1F4;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823EB1F4:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// blt cr6,0x823eaee8
	if (ctx.cr6.lt) goto loc_823EAEE8;
loc_823EB220:
	// stw r19,548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 548, ctx.r19.u32);
loc_823EB224:
	// addi r1,r1,4768
	ctx.r1.s64 = ctx.r1.s64 + 4768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EB234"))) PPC_WEAK_FUNC(sub_823EB234);
PPC_FUNC_IMPL(__imp__sub_823EB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EB238"))) PPC_WEAK_FUNC(sub_823EB238);
PPC_FUNC_IMPL(__imp__sub_823EB238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823eb258
	if (ctx.cr6.eq) goto loc_823EB258;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r10,15526
	ctx.r10.s64 = 15526;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_823EB258:
	// li r3,15525
	ctx.r3.s64 = 15525;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EB260"))) PPC_WEAK_FUNC(sub_823EB260);
PPC_FUNC_IMPL(__imp__sub_823EB260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r31,-4384(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb2c8
	if (ctx.cr6.eq) goto loc_823EB2C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823eb2a4
	if (!ctx.cr6.eq) goto loc_823EB2A4;
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823EB2A4;
	sub_823C3468(ctx, base);
loc_823EB2A4:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823eb2c8
	if (!ctx.cr6.eq) goto loc_823EB2C8;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823EB2C0;
	sub_823C3468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
loc_823EB2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EB2E0"))) PPC_WEAK_FUNC(sub_823EB2E0);
PPC_FUNC_IMPL(__imp__sub_823EB2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EB2E8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-13592
	ctx.r9.s64 = ctx.r11.s64 + -13592;
	// addi r8,r10,-13600
	ctx.r8.s64 = ctx.r10.s64 + -13600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r31,r3,552
	ctx.r31.s64 = ctx.r3.s64 + 552;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823EB318:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823eb338
	if (ctx.cr6.eq) goto loc_823EB338;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x823ccac0
	ctx.lr = 0x823EB32C;
	sub_823CCAC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x823EB338;
	sub_82183E40(ctx, base);
loc_823EB338:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// bne 0x823eb318
	if (!ctx.cr0.eq) goto loc_823EB318;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x823c30b8
	ctx.lr = 0x823EB34C;
	sub_823C30B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821857f0
	ctx.lr = 0x823EB354;
	sub_821857F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82185a50
	ctx.lr = 0x823EB35C;
	sub_82185A50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823EB364"))) PPC_WEAK_FUNC(sub_823EB364);
PPC_FUNC_IMPL(__imp__sub_823EB364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EB368"))) PPC_WEAK_FUNC(sub_823EB368);
PPC_FUNC_IMPL(__imp__sub_823EB368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823eba68
	sub_823EBA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EB370"))) PPC_WEAK_FUNC(sub_823EB370);
PPC_FUNC_IMPL(__imp__sub_823EB370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eb3bc
	if (!ctx.cr6.gt) goto loc_823EB3BC;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x823EB39C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eb444
	if (ctx.cr6.eq) goto loc_823EB444;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x823eb444
	goto loc_823EB444;
loc_823EB3BC:
	// bl 0x8223ad48
	ctx.lr = 0x823EB3C0;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eb3d8
	if (!ctx.cr6.eq) goto loc_823EB3D8;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823eb3dc
	if (!ctx.cr6.eq) goto loc_823EB3DC;
loc_823EB3D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823EB3DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4292, ctx.r9.u32);
	// lwz r7,528(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ctx.r30.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823eb420
	if (ctx.cr6.eq) goto loc_823EB420;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x823EB414;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb420
	if (ctx.cr6.eq) goto loc_823EB420;
	// bl 0x821d38e8
	ctx.lr = 0x823EB420;
	sub_821D38E8(ctx, base);
loc_823EB420:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823eb444
	if (ctx.cr6.eq) goto loc_823EB444;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ea058
	ctx.lr = 0x823EB43C;
	sub_823EA058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ea600
	ctx.lr = 0x823EB444;
	sub_823EA600(ctx, base);
loc_823EB444:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EB45C"))) PPC_WEAK_FUNC(sub_823EB45C);
PPC_FUNC_IMPL(__imp__sub_823EB45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EB460"))) PPC_WEAK_FUNC(sub_823EB460);
PPC_FUNC_IMPL(__imp__sub_823EB460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EB468;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823EB494;
	sub_82163E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823EB49C;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb50c
	if (ctx.cr6.eq) goto loc_823EB50C;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823EB4B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823eb4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB4B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823EB4CC;
	sub_820C8218(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823eb4ec
	if (ctx.cr6.eq) goto loc_823EB4EC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823EB4EC;
	sub_820CA0D0(ctx, base);
loc_823EB4EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823eb50c
	if (ctx.cr6.eq) goto loc_823EB50C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823EB50C;
	sub_820CA128(ctx, base);
loc_823EB50C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823EB514"))) PPC_WEAK_FUNC(sub_823EB514);
PPC_FUNC_IMPL(__imp__sub_823EB514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EB518"))) PPC_WEAK_FUNC(sub_823EB518);
PPC_FUNC_IMPL(__imp__sub_823EB518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EB520;
	sub_82248780(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EB544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eb664
	if (ctx.cr6.eq) goto loc_823EB664;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r28,r10,1696
	ctx.r28.s64 = ctx.r10.s64 + 1696;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163df0
	ctx.lr = 0x823EB568;
	sub_82163DF0(ctx, base);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82164d80
	ctx.lr = 0x823EB578;
	sub_82164D80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823EB580;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb664
	if (ctx.cr6.eq) goto loc_823EB664;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823EB59C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823eb59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB59C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c8218
	ctx.lr = 0x823EB5B0;
	sub_820C8218(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8214a400
	ctx.lr = 0x823EB5CC;
	sub_8214A400(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82164060
	ctx.lr = 0x823EB5D4;
	sub_82164060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x823EB5DC;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823EB5EC;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,770
	ctx.r9.s64 = ctx.r1.s64 + 770;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthx r5,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u16);
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r4,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r4.u16);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r3,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r3.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r11,6(r6)
	PPC_STORE_U16(ctx.r6.u32 + 6, ctx.r11.u16);
	// beq cr6,0x823eb644
	if (ctx.cr6.eq) goto loc_823EB644;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823EB644;
	sub_820CA0D0(ctx, base);
loc_823EB644:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823eb664
	if (ctx.cr6.eq) goto loc_823EB664;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca128
	ctx.lr = 0x823EB664;
	sub_820CA128(ctx, base);
loc_823EB664:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823EB66C"))) PPC_WEAK_FUNC(sub_823EB66C);
PPC_FUNC_IMPL(__imp__sub_823EB66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EB670"))) PPC_WEAK_FUNC(sub_823EB670);
PPC_FUNC_IMPL(__imp__sub_823EB670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823EB678;
	sub_8224877C(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r27,r10,1696
	ctx.r27.s64 = ctx.r10.s64 + 1696;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163df0
	ctx.lr = 0x823EB6A8;
	sub_82163DF0(ctx, base);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82164d80
	ctx.lr = 0x823EB6B8;
	sub_82164D80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823EB6C0;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb7b0
	if (ctx.cr6.eq) goto loc_823EB7B0;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823EB6DC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823eb6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB6DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c8218
	ctx.lr = 0x823EB6F0;
	sub_820C8218(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8214a400
	ctx.lr = 0x823EB6F8;
	sub_8214A400(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82164060
	ctx.lr = 0x823EB700;
	sub_82164060(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163e58
	ctx.lr = 0x823EB708;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823EB718;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,770
	ctx.r9.s64 = ctx.r1.s64 + 770;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// blt cr6,0x823eb770
	if (ctx.cr6.lt) goto loc_823EB770;
	// bne cr6,0x823eb7b0
	if (!ctx.cr6.eq) goto loc_823EB7B0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// ble cr6,0x823eb76c
	if (!ctx.cr6.gt) goto loc_823EB76C;
	// li r10,100
	ctx.r10.s64 = 100;
loc_823EB76C:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_823EB770:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823eb790
	if (ctx.cr6.eq) goto loc_823EB790;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823EB790;
	sub_820CA0D0(ctx, base);
loc_823EB790:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823eb7b0
	if (ctx.cr6.eq) goto loc_823EB7B0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca128
	ctx.lr = 0x823EB7B0;
	sub_820CA128(ctx, base);
loc_823EB7B0:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823EB7B8"))) PPC_WEAK_FUNC(sub_823EB7B8);
PPC_FUNC_IMPL(__imp__sub_823EB7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EB7C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x823EB7DC;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185740
	ctx.lr = 0x823EB7EC;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,-13592
	ctx.r9.s64 = ctx.r11.s64 + -13592;
	// addi r8,r10,-13600
	ctx.r8.s64 = ctx.r10.s64 + -13600;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c34c0
	ctx.lr = 0x823EB82C;
	sub_823C34C0(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// stw r29,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r29,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r29.u32);
	// stw r29,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r29.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// bl 0x823c3410
	ctx.lr = 0x823EB86C;
	sub_823C3410(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x823EB870;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EB87C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823EB880;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eb898
	if (ctx.cr6.eq) goto loc_823EB898;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EB894;
	sub_82183448(ctx, base);
	// b 0x823eb8a0
	goto loc_823EB8A0;
loc_823EB898:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EB8A0;
	sub_821845A0(ctx, base);
loc_823EB8A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb8c4
	if (ctx.cr6.eq) goto loc_823EB8C4;
	// bl 0x823ca6c8
	ctx.lr = 0x823EB8B0;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13768
	ctx.r9.s64 = ctx.r10.s64 + -13768;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x823eb8c8
	goto loc_823EB8C8;
loc_823EB8C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823EB8C8:
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823EB8D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eb8e8
	if (ctx.cr6.eq) goto loc_823EB8E8;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EB8E4;
	sub_82183448(ctx, base);
	// b 0x823eb8f0
	goto loc_823EB8F0;
loc_823EB8E8:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EB8F0;
	sub_821845A0(ctx, base);
loc_823EB8F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb914
	if (ctx.cr6.eq) goto loc_823EB914;
	// bl 0x823ca6c8
	ctx.lr = 0x823EB900;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13740
	ctx.r9.s64 = ctx.r10.s64 + -13740;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x823eb918
	goto loc_823EB918;
loc_823EB914:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823EB918:
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823EB920;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eb938
	if (ctx.cr6.eq) goto loc_823EB938;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EB934;
	sub_82183448(ctx, base);
	// b 0x823eb940
	goto loc_823EB940;
loc_823EB938:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EB940;
	sub_821845A0(ctx, base);
loc_823EB940:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb964
	if (ctx.cr6.eq) goto loc_823EB964;
	// bl 0x823ca6c8
	ctx.lr = 0x823EB950;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13712
	ctx.r9.s64 = ctx.r10.s64 + -13712;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x823eb968
	goto loc_823EB968;
loc_823EB964:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823EB968:
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823EB970;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eb988
	if (ctx.cr6.eq) goto loc_823EB988;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EB984;
	sub_82183448(ctx, base);
	// b 0x823eb990
	goto loc_823EB990;
loc_823EB988:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EB990;
	sub_821845A0(ctx, base);
loc_823EB990:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb9b4
	if (ctx.cr6.eq) goto loc_823EB9B4;
	// bl 0x823ca6c8
	ctx.lr = 0x823EB9A0;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13684
	ctx.r9.s64 = ctx.r10.s64 + -13684;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x823eb9b8
	goto loc_823EB9B8;
loc_823EB9B4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823EB9B8:
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823EB9C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eb9d8
	if (ctx.cr6.eq) goto loc_823EB9D8;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EB9D4;
	sub_82183448(ctx, base);
	// b 0x823eb9e0
	goto loc_823EB9E0;
loc_823EB9D8:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EB9E0;
	sub_821845A0(ctx, base);
loc_823EB9E0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eba04
	if (ctx.cr6.eq) goto loc_823EBA04;
	// bl 0x823ca6c8
	ctx.lr = 0x823EB9F0;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13656
	ctx.r9.s64 = ctx.r10.s64 + -13656;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x823eba08
	goto loc_823EBA08;
loc_823EBA04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823EBA08:
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823EBA10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eba28
	if (ctx.cr6.eq) goto loc_823EBA28;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823EBA24;
	sub_82183448(ctx, base);
	// b 0x823eba30
	goto loc_823EBA30;
loc_823EBA28:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823EBA30;
	sub_821845A0(ctx, base);
loc_823EBA30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eba50
	if (ctx.cr6.eq) goto loc_823EBA50;
	// bl 0x823ca6c8
	ctx.lr = 0x823EBA40;
	sub_823CA6C8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r10,r11,-13628
	ctx.r10.s64 = ctx.r11.s64 + -13628;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_823EBA50:
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBA5C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823EBA68"))) PPC_WEAK_FUNC(sub_823EBA68);
PPC_FUNC_IMPL(__imp__sub_823EBA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823eb2e0
	ctx.lr = 0x823EBA88;
	sub_823EB2E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebaa4
	if (ctx.cr6.eq) goto loc_823EBAA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823EBAA0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EBAA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBABC"))) PPC_WEAK_FUNC(sub_823EBABC);
PPC_FUNC_IMPL(__imp__sub_823EBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EBAC0"))) PPC_WEAK_FUNC(sub_823EBAC0);
PPC_FUNC_IMPL(__imp__sub_823EBAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EBAC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-13832
	ctx.r10.s64 = ctx.r11.s64 + -13832;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lwsync 
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r3,-4384(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4384, ctx.r3.u32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x823EBB00;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBB0C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823EBB10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823ebb28
	if (ctx.cr6.eq) goto loc_823EBB28;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x82183448
	ctx.lr = 0x823EBB24;
	sub_82183448(ctx, base);
	// b 0x823ebb30
	goto loc_823EBB30;
loc_823EBB28:
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x821845a0
	ctx.lr = 0x823EBB30;
	sub_821845A0(ctx, base);
loc_823EBB30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebb44
	if (ctx.cr6.eq) goto loc_823EBB44;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823e99b0
	ctx.lr = 0x823EBB40;
	sub_823E99B0(ctx, base);
	// b 0x823ebb48
	goto loc_823EBB48;
loc_823EBB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EBB48:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x823EBB50;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823ebb68
	if (ctx.cr6.eq) goto loc_823EBB68;
	// li r3,580
	ctx.r3.s64 = 580;
	// bl 0x82183448
	ctx.lr = 0x823EBB64;
	sub_82183448(ctx, base);
	// b 0x823ebb70
	goto loc_823EBB70;
loc_823EBB68:
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x821845a0
	ctx.lr = 0x823EBB70;
	sub_821845A0(ctx, base);
loc_823EBB70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebb84
	if (ctx.cr6.eq) goto loc_823EBB84;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823eb7b8
	ctx.lr = 0x823EBB80;
	sub_823EB7B8(ctx, base);
	// b 0x823ebb88
	goto loc_823EBB88;
loc_823EBB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EBB88:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x823EBB94;
	sub_823E98D8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r10,-792(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebc14
	if (ctx.cr6.eq) goto loc_823EBC14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r31.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r31.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,1476(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1476, ctx.r31.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,1732(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1732, ctx.r31.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,1988(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1988, ctx.r31.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,2244(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2244, ctx.r31.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,2500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2500, ctx.r31.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r31.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r31.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,3268(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3268, ctx.r31.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,3524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3524, ctx.r31.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,3780(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3780, ctx.r31.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4036(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4036, ctx.r31.u32);
	// lwz r10,-792(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
loc_823EBC14:
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebc34
	if (ctx.cr6.eq) goto loc_823EBC34;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,3524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3524, ctx.r31.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4036, ctx.r31.u32);
	// lwz r10,-792(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
loc_823EBC34:
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebc4c
	if (ctx.cr6.eq) goto loc_823EBC4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4804, ctx.r10.u32);
loc_823EBC4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBC54;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EBC60"))) PPC_WEAK_FUNC(sub_823EBC60);
PPC_FUNC_IMPL(__imp__sub_823EBC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823EBC68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ebccc
	if (!ctx.cr6.eq) goto loc_823EBCCC;
	// bl 0x82183078
	ctx.lr = 0x823EBC84;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBC90;
	sub_821837D0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82080000
	ctx.lr = 0x823EBC98;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebcbc
	if (ctx.cr6.eq) goto loc_823EBCBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ebac0
	ctx.lr = 0x823EBCA8;
	sub_823EBAC0(ctx, base);
	// stw r3,-4384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4384, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBCB4;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EBCBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-4384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4384, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823EBCCC;
	sub_821837D0(ctx, base);
loc_823EBCCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823EBCD4"))) PPC_WEAK_FUNC(sub_823EBCD4);
PPC_FUNC_IMPL(__imp__sub_823EBCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EBCD8"))) PPC_WEAK_FUNC(sub_823EBCD8);
PPC_FUNC_IMPL(__imp__sub_823EBCD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
loc_823EBD18:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ebd18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBD18;
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lwz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBD44"))) PPC_WEAK_FUNC(sub_823EBD44);
PPC_FUNC_IMPL(__imp__sub_823EBD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EBD48"))) PPC_WEAK_FUNC(sub_823EBD48);
PPC_FUNC_IMPL(__imp__sub_823EBD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// addi r8,r11,-13440
	ctx.r8.s64 = ctx.r11.s64 + -13440;
	// addi r7,r10,-13576
	ctx.r7.s64 = ctx.r10.s64 + -13576;
	// addi r6,r9,-13584
	ctx.r6.s64 = ctx.r9.s64 + -13584;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r3,-4308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebdb0
	if (ctx.cr6.eq) goto loc_823EBDB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EBDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4308(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4308, ctx.r11.u32);
loc_823EBDB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823EBDB8;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBDD0"))) PPC_WEAK_FUNC(sub_823EBDD0);
PPC_FUNC_IMPL(__imp__sub_823EBDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r11,r11,35888
	ctx.r11.u64 = ctx.r11.u64 | 35888;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBDE8"))) PPC_WEAK_FUNC(sub_823EBDE8);
PPC_FUNC_IMPL(__imp__sub_823EBDE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed5b0
	sub_823ED5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EBDEC"))) PPC_WEAK_FUNC(sub_823EBDEC);
PPC_FUNC_IMPL(__imp__sub_823EBDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EBDF0"))) PPC_WEAK_FUNC(sub_823EBDF0);
PPC_FUNC_IMPL(__imp__sub_823EBDF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823ebe78
	sub_823EBE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EBDF8"))) PPC_WEAK_FUNC(sub_823EBDF8);
PPC_FUNC_IMPL(__imp__sub_823EBDF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823ebe78
	sub_823EBE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EBE00"))) PPC_WEAK_FUNC(sub_823EBE00);
PPC_FUNC_IMPL(__imp__sub_823EBE00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBE08"))) PPC_WEAK_FUNC(sub_823EBE08);
PPC_FUNC_IMPL(__imp__sub_823EBE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x823EBE18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823ebe30
	if (ctx.cr6.eq) goto loc_823EBE30;
	// li r3,12064
	ctx.r3.s64 = 12064;
	// bl 0x82183448
	ctx.lr = 0x823EBE2C;
	sub_82183448(ctx, base);
	// b 0x823ebe38
	goto loc_823EBE38;
loc_823EBE30:
	// li r3,754
	ctx.r3.s64 = 754;
	// bl 0x821845a0
	ctx.lr = 0x823EBE38;
	sub_821845A0(ctx, base);
loc_823EBE38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ebe5c
	if (ctx.cr6.eq) goto loc_823EBE5C;
	// bl 0x823ecbf8
	ctx.lr = 0x823EBE44;
	sub_823ECBF8(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r3,-4308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823EBE5C:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4308, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBE78"))) PPC_WEAK_FUNC(sub_823EBE78);
PPC_FUNC_IMPL(__imp__sub_823EBE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ebd48
	ctx.lr = 0x823EBE98;
	sub_823EBD48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebeb4
	if (ctx.cr6.eq) goto loc_823EBEB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823EBEB0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EBEB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EBECC"))) PPC_WEAK_FUNC(sub_823EBECC);
PPC_FUNC_IMPL(__imp__sub_823EBECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EBED0"))) PPC_WEAK_FUNC(sub_823EBED0);
PPC_FUNC_IMPL(__imp__sub_823EBED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EBED8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,172(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x823EBEF0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EBEFC;
	sub_821837D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bgt cr6,0x823ec298
	if (ctx.cr6.gt) goto loc_823EC298;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16608
	ctx.r12.s64 = ctx.r12.s64 + -16608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-16444(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16444);
	// lwz r17,-16412(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16412);
	// lwz r17,-16224(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16224);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16192(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16192);
	// lwz r17,-16160(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16160);
	// lwz r17,-16160(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16160);
	// lwz r17,-16160(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16160);
	// lwz r17,-16128(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16128);
	// lwz r17,-16128(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16128);
	// lwz r17,-16096(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16096);
	// lwz r17,-16064(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16064);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16032(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16032);
	// lwz r17,-16000(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16000);
	// lwz r17,-16000(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16000);
	// lwz r17,-16000(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16000);
	// lwz r17,-15968(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15968);
	// lwz r17,-15916(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15916);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15884(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15884);
	// lwz r17,-15852(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15852);
	// lwz r17,-15852(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15852);
	// lwz r17,-15852(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15852);
	// lwz r17,-15820(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15820);
	// lwz r17,-15788(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15788);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37264
	ctx.r3.u64 = ctx.r3.u64 | 37264;
	// bl 0x82080000
	ctx.lr = 0x823EBFD0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82403680
	ctx.lr = 0x823EBFE0;
	sub_82403680(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r29,4
	ctx.r29.s64 = 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823ec020
	if (ctx.cr6.gt) goto loc_823EC020;
	// beq cr6,0x823ec018
	if (ctx.cr6.eq) goto loc_823EC018;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ec010
	if (ctx.cr6.eq) goto loc_823EC010;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823ec02c
	if (!ctx.cr6.eq) goto loc_823EC02C;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x823ec02c
	goto loc_823EC02C;
loc_823EC010:
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x823ec02c
	goto loc_823EC02C;
loc_823EC018:
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x823ec02c
	goto loc_823EC02C;
loc_823EC020:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x823ec02c
	if (!ctx.cr6.eq) goto loc_823EC02C;
	// li r29,7
	ctx.r29.s64 = 7;
loc_823EC02C:
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82080000
	ctx.lr = 0x823EC034;
	sub_82080000(ctx, base);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec058
	if (ctx.cr6.eq) goto loc_823EC058;
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8220e6d0
	ctx.lr = 0x823EC054;
	sub_8220E6D0(ctx, base);
	// b 0x823ec05c
	goto loc_823EC05C;
loc_823EC058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EC05C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// ori r9,r11,37248
	ctx.r9.u64 = ctx.r11.u64 | 37248;
	// stwx r3,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823EC07C;
	sub_823C3468(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823EC080;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823EC088;
	sub_8223B4E8(ctx, base);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e88c8
	ctx.lr = 0x823EC090;
	sub_823E88C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EC098;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37304
	ctx.r3.u64 = ctx.r3.u64 | 37304;
	// bl 0x82080000
	ctx.lr = 0x823EC0AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824029f0
	ctx.lr = 0x823EC0BC;
	sub_824029F0(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45360
	ctx.r3.u64 = ctx.r3.u64 | 45360;
	// bl 0x82080000
	ctx.lr = 0x823EC0CC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82401530
	ctx.lr = 0x823EC0DC;
	sub_82401530(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45360
	ctx.r3.u64 = ctx.r3.u64 | 45360;
	// bl 0x82080000
	ctx.lr = 0x823EC0EC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fed78
	ctx.lr = 0x823EC0FC;
	sub_823FED78(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,38580
	ctx.r3.u64 = ctx.r3.u64 | 38580;
	// bl 0x82080000
	ctx.lr = 0x823EC10C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fccc8
	ctx.lr = 0x823EC11C;
	sub_823FCCC8(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37284
	ctx.r3.u64 = ctx.r3.u64 | 37284;
	// bl 0x82080000
	ctx.lr = 0x823EC12C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fbb60
	ctx.lr = 0x823EC13C;
	sub_823FBB60(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37296
	ctx.r3.u64 = ctx.r3.u64 | 37296;
	// bl 0x82080000
	ctx.lr = 0x823EC14C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fa7b8
	ctx.lr = 0x823EC15C;
	sub_823FA7B8(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45340
	ctx.r3.u64 = ctx.r3.u64 | 45340;
	// bl 0x82080000
	ctx.lr = 0x823EC16C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f9460
	ctx.lr = 0x823EC17C;
	sub_823F9460(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45340
	ctx.r3.u64 = ctx.r3.u64 | 45340;
	// bl 0x82080000
	ctx.lr = 0x823EC18C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f7ab8
	ctx.lr = 0x823EC19C;
	sub_823F7AB8(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec1b4
	if (!ctx.cr6.eq) goto loc_823EC1B4;
	// bl 0x823ebe08
	ctx.lr = 0x823EC1B4;
	sub_823EBE08(ctx, base);
loc_823EC1B4:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37344
	ctx.r3.u64 = ctx.r3.u64 | 37344;
	// bl 0x82080000
	ctx.lr = 0x823EC1C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6738
	ctx.lr = 0x823EC1D0;
	sub_823F6738(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37308
	ctx.r3.u64 = ctx.r3.u64 | 37308;
	// bl 0x82080000
	ctx.lr = 0x823EC1E0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f4db0
	ctx.lr = 0x823EC1F0;
	sub_823F4DB0(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45340
	ctx.r3.u64 = ctx.r3.u64 | 45340;
	// bl 0x82080000
	ctx.lr = 0x823EC200;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f36d8
	ctx.lr = 0x823EC210;
	sub_823F36D8(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45340
	ctx.r3.u64 = ctx.r3.u64 | 45340;
	// bl 0x82080000
	ctx.lr = 0x823EC220;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1e50
	ctx.lr = 0x823EC230;
	sub_823F1E50(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,38576
	ctx.r3.u64 = ctx.r3.u64 | 38576;
	// bl 0x82080000
	ctx.lr = 0x823EC240;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f04f8
	ctx.lr = 0x823EC250;
	sub_823F04F8(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec268
	if (!ctx.cr6.eq) goto loc_823EC268;
	// bl 0x823ebe08
	ctx.lr = 0x823EC268;
	sub_823EBE08(ctx, base);
loc_823EC268:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37388
	ctx.r3.u64 = ctx.r3.u64 | 37388;
	// bl 0x82080000
	ctx.lr = 0x823EC274;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec288
	if (ctx.cr6.eq) goto loc_823EC288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f0150
	ctx.lr = 0x823EC284;
	sub_823F0150(ctx, base);
	// b 0x823ec28c
	goto loc_823EC28C;
loc_823EC288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EC28C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37244
	ctx.r10.u64 = ctx.r11.u64 | 37244;
	// stwx r3,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r3.u32);
loc_823EC298:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EC2A0;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823EC2A8"))) PPC_WEAK_FUNC(sub_823EC2A8);
PPC_FUNC_IMPL(__imp__sub_823EC2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EC2B0;
	sub_82248788(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823EC2BC;
	sub_823EDB98(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r11,37244
	ctx.r6.u64 = ctx.r11.u64 | 37244;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// ori r5,r10,37248
	ctx.r5.u64 = ctx.r10.u64 | 37248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r9,-13440
	ctx.r4.s64 = ctx.r9.s64 + -13440;
	// addi r3,r8,-13576
	ctx.r3.s64 = ctx.r8.s64 + -13576;
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r11,r7,-13584
	ctx.r11.s64 = ctx.r7.s64 + -13584;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stwx r29,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r30,644(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x82183078
	ctx.lr = 0x823EC304;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EC310;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e79e0
	ctx.lr = 0x823EC318;
	sub_823E79E0(ctx, base);
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ebcd8
	ctx.lr = 0x823EC328;
	sub_823EBCD8(ctx, base);
	// lwz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823EC334;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x823ebed0
	ctx.lr = 0x823EC350;
	sub_823EBED0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EC358;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed4d8
	ctx.lr = 0x823EC360;
	sub_823ED4D8(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EC370"))) PPC_WEAK_FUNC(sub_823EC370);
PPC_FUNC_IMPL(__imp__sub_823EC370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823EC378;
	sub_82248778(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r26,r26,-28288
	ctx.r26.s64 = ctx.r26.s64 + -28288;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// ori r29,r11,37244
	ctx.r29.u64 = ctx.r11.u64 | 37244;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec4fc
	if (ctx.cr6.eq) goto loc_823EC4FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ec5e8
	if (ctx.cr6.eq) goto loc_823EC5E8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,272(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r30,276(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// beq cr6,0x823ec3e4
	if (ctx.cr6.eq) goto loc_823EC3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC3E4:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e79e0
	ctx.lr = 0x823EC3F0;
	sub_823E79E0(ctx, base);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823EC3FC;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x823EC408;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823EC414;
	sub_821837D0(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823ec4d8
	if (ctx.cr6.gt) goto loc_823EC4D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ec458
	// bdzf 4*cr6+eq,0x823ec480
	// bne cr6,0x823ec4a8
	if (!ctx.cr6.eq) goto loc_823EC4A8;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37264
	ctx.r3.u64 = ctx.r3.u64 | 37264;
	// bl 0x82080000
	ctx.lr = 0x823EC444;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec4d0
	if (ctx.cr6.eq) goto loc_823EC4D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82403680
	ctx.lr = 0x823EC454;
	sub_82403680(ctx, base);
	// b 0x823ec4d4
	goto loc_823EC4D4;
loc_823EC458:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r3,r3,37304
	ctx.r3.u64 = ctx.r3.u64 | 37304;
	// bl 0x82080000
	ctx.lr = 0x823EC46C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec4d0
	if (ctx.cr6.eq) goto loc_823EC4D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824029f0
	ctx.lr = 0x823EC47C;
	sub_824029F0(ctx, base);
	// b 0x823ec4d4
	goto loc_823EC4D4;
loc_823EC480:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r3,r3,37296
	ctx.r3.u64 = ctx.r3.u64 | 37296;
	// bl 0x82080000
	ctx.lr = 0x823EC494;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec4d0
	if (ctx.cr6.eq) goto loc_823EC4D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823fa7b8
	ctx.lr = 0x823EC4A4;
	sub_823FA7B8(ctx, base);
	// b 0x823ec4d4
	goto loc_823EC4D4;
loc_823EC4A8:
	// li r11,27
	ctx.r11.s64 = 27;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r3,r3,37344
	ctx.r3.u64 = ctx.r3.u64 | 37344;
	// bl 0x82080000
	ctx.lr = 0x823EC4BC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec4d0
	if (ctx.cr6.eq) goto loc_823EC4D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f6738
	ctx.lr = 0x823EC4CC;
	sub_823F6738(ctx, base);
	// b 0x823ec4d4
	goto loc_823EC4D4;
loc_823EC4D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_823EC4D4:
	// stwx r3,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r3.u32);
loc_823EC4D8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823c3410
	ctx.lr = 0x823EC4EC;
	sub_823C3410(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x823EC4FC;
	sub_821837D0(ctx, base);
loc_823EC4FC:
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec5e8
	if (ctx.cr6.eq) goto loc_823EC5E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ec5e8
	if (ctx.cr6.eq) goto loc_823EC5E8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r30,472
	ctx.r4.s64 = ctx.r30.s64 + 472;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x82248a40
	ctx.lr = 0x823EC550;
	sub_82248A40(ctx, base);
	// addi r4,r30,652
	ctx.r4.s64 = ctx.r30.s64 + 652;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x82248a40
	ctx.lr = 0x823EC560;
	sub_82248A40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ec580
	if (ctx.cr6.eq) goto loc_823EC580;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC580:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823ebed0
	ctx.lr = 0x823EC5A0;
	sub_823EBED0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ec5e8
	if (!ctx.cr6.eq) goto loc_823EC5E8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec5e8
	if (!ctx.cr6.eq) goto loc_823EC5E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x823ec5dc
	if (ctx.cr6.eq) goto loc_823EC5DC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823EC5DC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC5E8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823EC5F0"))) PPC_WEAK_FUNC(sub_823EC5F0);
PPC_FUNC_IMPL(__imp__sub_823EC5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EC5F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-13272
	ctx.r10.s64 = ctx.r11.s64 + -13272;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r30,500
	ctx.r30.s64 = 500;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823EC618:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec638
	if (ctx.cr6.eq) goto loc_823EC638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC638:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x823ec618
	if (!ctx.cr0.eq) goto loc_823EC618;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec664
	if (ctx.cr6.eq) goto loc_823EC664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC664:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec688
	if (ctx.cr6.eq) goto loc_823EC688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EC688:
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r3,r29,12036
	ctx.r3.s64 = ctx.r29.s64 + 12036;
	// bl 0x8217f6e8
	ctx.lr = 0x823EC694;
	sub_8217F6E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x823EC69C;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EC6A4"))) PPC_WEAK_FUNC(sub_823EC6A4);
PPC_FUNC_IMPL(__imp__sub_823EC6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EC6A8"))) PPC_WEAK_FUNC(sub_823EC6A8);
PPC_FUNC_IMPL(__imp__sub_823EC6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r3,10032
	ctx.r3.s64 = ctx.r3.s64 + 10032;
	// bl 0x822aa648
	ctx.lr = 0x823EC6C8;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,12036
	ctx.r3.s64 = ctx.r31.s64 + 12036;
	// bl 0x822aa648
	ctx.lr = 0x823EC6D4;
	sub_822AA648(ctx, base);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822aa648
	ctx.lr = 0x823EC6E0;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12032, ctx.r11.u32);
	// stw r11,12052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12052, ctx.r11.u32);
	// stw r11,12056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12056, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EC710"))) PPC_WEAK_FUNC(sub_823EC710);
PPC_FUNC_IMPL(__imp__sub_823EC710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823ec730
	if (ctx.cr6.eq) goto loc_823EC730;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x823ec730
	if (ctx.cr6.eq) goto loc_823EC730;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823EC730:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EC738"))) PPC_WEAK_FUNC(sub_823EC738);
PPC_FUNC_IMPL(__imp__sub_823EC738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823ec75c
	if (ctx.cr6.eq) goto loc_823EC75C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x823ec75c
	if (ctx.cr6.eq) goto loc_823EC75C;
	// lwz r11,12056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12056);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823EC75C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EC764"))) PPC_WEAK_FUNC(sub_823EC764);
PPC_FUNC_IMPL(__imp__sub_823EC764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EC768"))) PPC_WEAK_FUNC(sub_823EC768);
PPC_FUNC_IMPL(__imp__sub_823EC768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823EC770;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r3,10032
	ctx.r3.s64 = ctx.r3.s64 + 10032;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x822aa648
	ctx.lr = 0x823EC78C;
	sub_822AA648(ctx, base);
	// lwz r11,12056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12056);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,12032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12032, ctx.r28.u32);
	// ble cr6,0x823ec814
	if (!ctx.cr6.gt) goto loc_823EC814;
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
loc_823EC7A4:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823ec800
	if (ctx.cr6.eq) goto loc_823EC800;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_823EC7B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823ec7f4
	if (!ctx.cr6.eq) goto loc_823EC7F4;
	// lwz r11,12032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12032);
	// addi r11,r11,2508
	ctx.r11.s64 = ctx.r11.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,12032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12032);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12032, ctx.r9.u32);
loc_823EC7F4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823ec7b8
	if (!ctx.cr0.eq) goto loc_823EC7B8;
loc_823EC800:
	// lwz r11,12056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12056);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ec7a4
	if (ctx.cr6.lt) goto loc_823EC7A4;
loc_823EC814:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823EC81C"))) PPC_WEAK_FUNC(sub_823EC81C);
PPC_FUNC_IMPL(__imp__sub_823EC81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EC820"))) PPC_WEAK_FUNC(sub_823EC820);
PPC_FUNC_IMPL(__imp__sub_823EC820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823EC828;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12056);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ec850
	if (!ctx.cr6.eq) goto loc_823EC850;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823EC850:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ec8bc
	if (ctx.cr6.eq) goto loc_823EC8BC;
	// addi r28,r25,32
	ctx.r28.s64 = ctx.r25.s64 + 32;
loc_823EC864:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ec8a8
	if (ctx.cr6.eq) goto loc_823EC8A8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823EC878:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r22,r3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823ec89c
	if (!ctx.cr6.eq) goto loc_823EC89C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_823EC89C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823ec878
	if (!ctx.cr0.eq) goto loc_823EC878;
loc_823EC8A8:
	// lwz r11,12056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12056);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ec864
	if (ctx.cr6.lt) goto loc_823EC864;
loc_823EC8BC:
	// addi r11,r24,0
	ctx.r11.s64 = ctx.r24.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823EC8D0"))) PPC_WEAK_FUNC(sub_823EC8D0);
PPC_FUNC_IMPL(__imp__sub_823EC8D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823EC8F8"))) PPC_WEAK_FUNC(sub_823EC8F8);
PPC_FUNC_IMPL(__imp__sub_823EC8F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823EC920"))) PPC_WEAK_FUNC(sub_823EC920);
PPC_FUNC_IMPL(__imp__sub_823EC920) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823EC948"))) PPC_WEAK_FUNC(sub_823EC948);
PPC_FUNC_IMPL(__imp__sub_823EC948) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823EC974"))) PPC_WEAK_FUNC(sub_823EC974);
PPC_FUNC_IMPL(__imp__sub_823EC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

