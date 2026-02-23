#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8240309C"))) PPC_WEAK_FUNC(sub_8240309C);
PPC_FUNC_IMPL(__imp__sub_8240309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824030A0"))) PPC_WEAK_FUNC(sub_824030A0);
PPC_FUNC_IMPL(__imp__sub_824030A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x824030A8;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r26,r26,-28276
	ctx.r26.s64 = ctx.r26.s64 + -28276;
	// lis r25,-32177
	ctx.r25.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4392);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823e8958
	ctx.lr = 0x824030F0;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4392);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x82403108;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4392);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823e8958
	ctx.lr = 0x82403120;
	sub_823E8958(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,-4392(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4392);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8958
	ctx.lr = 0x82403130;
	sub_823E8958(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82403148
	if (ctx.cr6.lt) goto loc_82403148;
	// bne cr6,0x8240315c
	if (!ctx.cr6.eq) goto loc_8240315C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x8240314c
	goto loc_8240314C;
loc_82403148:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_8240314C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8240315C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// blt cr6,0x824031c4
	if (ctx.cr6.lt) goto loc_824031C4;
	// bne cr6,0x824031e8
	if (!ctx.cr6.eq) goto loc_824031E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7156
	ctx.r11.s64 = ctx.r11.s64 + -7156;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x824031BC;
	sub_821EB290(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_824031C4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-7156
	ctx.r11.s64 = ctx.r9.s64 + -7156;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x821eb290
	ctx.lr = 0x824031E8;
	sub_821EB290(ctx, base);
loc_824031E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_824031F0"))) PPC_WEAK_FUNC(sub_824031F0);
PPC_FUNC_IMPL(__imp__sub_824031F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824031F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82403018
	ctx.lr = 0x82403204;
	sub_82403018(ctx, base);
	// lwz r11,1200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1200);
	// addi r31,r29,1200
	ctx.r31.s64 = ctx.r29.s64 + 1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240321C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82403284
	if (ctx.cr6.eq) goto loc_82403284;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82403248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82403264
	if (ctx.cr6.eq) goto loc_82403264;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x82403268
	goto loc_82403268;
loc_82403264:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82403268:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82403270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82403284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82403284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240328C"))) PPC_WEAK_FUNC(sub_8240328C);
PPC_FUNC_IMPL(__imp__sub_8240328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403290"))) PPC_WEAK_FUNC(sub_82403290);
PPC_FUNC_IMPL(__imp__sub_82403290) {
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
	// bl 0x8223ad48
	ctx.lr = 0x824032A8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824032cc
	if (ctx.cr6.eq) goto loc_824032CC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x824032BC;
	sub_821EA9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403018
	ctx.lr = 0x824032C4;
	sub_82403018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x824032CC;
	sub_823EDF48(ctx, base);
loc_824032CC:
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

__attribute__((alias("__imp__sub_824032E0"))) PPC_WEAK_FUNC(sub_824032E0);
PPC_FUNC_IMPL(__imp__sub_824032E0) {
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
	// bl 0x82403018
	ctx.lr = 0x824032FC;
	sub_82403018(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82403314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82403358
	if (ctx.cr6.eq) goto loc_82403358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r30,r31,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8240333C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82403358
	if (!ctx.cr6.eq) goto loc_82403358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82403358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82403358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x82403360;
	sub_823EDF68(ctx, base);
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

__attribute__((alias("__imp__sub_82403378"))) PPC_WEAK_FUNC(sub_82403378);
PPC_FUNC_IMPL(__imp__sub_82403378) {
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
	// bl 0x82403018
	ctx.lr = 0x82403390;
	sub_82403018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edfc0
	ctx.lr = 0x82403398;
	sub_823EDFC0(ctx, base);
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

__attribute__((alias("__imp__sub_824033AC"))) PPC_WEAK_FUNC(sub_824033AC);
PPC_FUNC_IMPL(__imp__sub_824033AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824033B0"))) PPC_WEAK_FUNC(sub_824033B0);
PPC_FUNC_IMPL(__imp__sub_824033B0) {
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
	// bl 0x82403018
	ctx.lr = 0x824033C8;
	sub_82403018(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824033DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824033ec
	if (!ctx.cr6.eq) goto loc_824033EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edfc0
	ctx.lr = 0x824033EC;
	sub_823EDFC0(ctx, base);
loc_824033EC:
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

__attribute__((alias("__imp__sub_82403400"))) PPC_WEAK_FUNC(sub_82403400);
PPC_FUNC_IMPL(__imp__sub_82403400) {
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
	// bl 0x82403018
	ctx.lr = 0x82403418;
	sub_82403018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x82403420;
	sub_823FBD40(ctx, base);
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

__attribute__((alias("__imp__sub_82403434"))) PPC_WEAK_FUNC(sub_82403434);
PPC_FUNC_IMPL(__imp__sub_82403434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403438"))) PPC_WEAK_FUNC(sub_82403438);
PPC_FUNC_IMPL(__imp__sub_82403438) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37232
	ctx.r10.u64 = ctx.r11.u64 | 37232;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824034d4
	if (ctx.cr6.lt) goto loc_824034D4;
	// bne cr6,0x824034b4
	if (!ctx.cr6.eq) goto loc_824034B4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x82403484;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x824034cc
	if (ctx.cr6.lt) goto loc_824034CC;
	// bne cr6,0x824034b4
	if (!ctx.cr6.eq) goto loc_824034B4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82403494:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824034B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824034B4:
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
loc_824034CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82403494
	goto loc_82403494;
loc_824034D4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824034EC;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82403598
	if (ctx.cr6.lt) goto loc_82403598;
	// bne cr6,0x824034b4
	if (!ctx.cr6.eq) goto loc_824034B4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170820
	ctx.lr = 0x82403504;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82403548
	if (ctx.cr6.eq) goto loc_82403548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// bl 0x821ebb58
	ctx.lr = 0x82403518;
	sub_821EBB58(ctx, base);
	// li r11,30536
	ctx.r11.s64 = 30536;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82403544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824034b4
	goto loc_824034B4;
loc_82403548:
	// bl 0x821f0050
	ctx.lr = 0x8240354C;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82403590
	if (!ctx.cr6.eq) goto loc_82403590;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// bl 0x821ebb58
	ctx.lr = 0x82403560;
	sub_821EBB58(ctx, base);
	// li r11,30511
	ctx.r11.s64 = 30511;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8240358C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824034b4
	goto loc_824034B4;
loc_82403590:
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x82403494
	goto loc_82403494;
loc_82403598:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824030a0
	ctx.lr = 0x824035A8;
	sub_824030A0(ctx, base);
	// b 0x824034b4
	goto loc_824034B4;
}

__attribute__((alias("__imp__sub_824035AC"))) PPC_WEAK_FUNC(sub_824035AC);
PPC_FUNC_IMPL(__imp__sub_824035AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824035B0"))) PPC_WEAK_FUNC(sub_824035B0);
PPC_FUNC_IMPL(__imp__sub_824035B0) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37232
	ctx.r10.u64 = ctx.r11.u64 | 37232;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82403618
	if (ctx.cr6.lt) goto loc_82403618;
	// bne cr6,0x8240366c
	if (!ctx.cr6.eq) goto loc_8240366C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824035F4;
	sub_823E8918(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x824030a0
	ctx.lr = 0x82403604;
	sub_824030A0(ctx, base);
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
loc_82403618:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r9,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r9.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8240363C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821eb3e8
	ctx.lr = 0x82403640;
	sub_821EB3E8(ctx, base);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// lwz r11,-4392(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4392);
	// lwz r6,772(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8240366c
	if (ctx.cr6.eq) goto loc_8240366C;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// addi r3,r31,1172
	ctx.r3.s64 = ctx.r31.s64 + 1172;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240366C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240366C:
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

__attribute__((alias("__imp__sub_82403680"))) PPC_WEAK_FUNC(sub_82403680);
PPC_FUNC_IMPL(__imp__sub_82403680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82403688;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x82403694;
	sub_823EDB98(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28292
	ctx.r8.s64 = ctx.r8.s64 + -28292;
	// addi r7,r11,-6928
	ctx.r7.s64 = ctx.r11.s64 + -6928;
	// addi r6,r10,-7064
	ctx.r6.s64 = ctx.r10.s64 + -7064;
	// addi r5,r9,-7076
	ctx.r5.s64 = ctx.r9.s64 + -7076;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// ori r11,r4,37260
	ctx.r11.u64 = ctx.r4.u64 | 37260;
	// li r3,127
	ctx.r3.s64 = 127;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	// bl 0x823e8958
	ctx.lr = 0x82403704;
	sub_823E8958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824030a0
	ctx.lr = 0x82403714;
	sub_824030A0(ctx, base);
	// bl 0x821f0050
	ctx.lr = 0x82403718;
	sub_821F0050(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r28,r9,37252
	ctx.r28.u64 = ctx.r9.u64 | 37252;
	// bne cr6,0x8240372c
	if (!ctx.cr6.eq) goto loc_8240372C;
	// stwx r30,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u32);
loc_8240372C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170820
	ctx.lr = 0x82403738;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82403744
	if (ctx.cr6.eq) goto loc_82403744;
	// stwx r30,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u32);
loc_82403744:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82403764;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403018
	ctx.lr = 0x8240376C;
	sub_82403018(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8e20
	ctx.lr = 0x82403774;
	sub_823C8E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x8240377C;
	sub_823E98D8(ctx, base);
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// stw r8,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r8.u32);
	// bl 0x8223a9f8
	ctx.lr = 0x8240378C;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2d8
	ctx.lr = 0x82403790;
	sub_8223B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824037b8
	if (!ctx.cr6.eq) goto loc_824037B8;
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824037AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_824037B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x824037C0;
	sub_823ED490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_824037CC"))) PPC_WEAK_FUNC(sub_824037CC);
PPC_FUNC_IMPL(__imp__sub_824037CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824037D0"))) PPC_WEAK_FUNC(sub_824037D0);
PPC_FUNC_IMPL(__imp__sub_824037D0) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x824037E8;
	sub_8218B1E8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6764
	ctx.r9.s64 = ctx.r10.s64 + -6764;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82403820"))) PPC_WEAK_FUNC(sub_82403820);
PPC_FUNC_IMPL(__imp__sub_82403820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6744
	ctx.r4.s64 = ctx.r11.s64 + -6744;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403830"))) PPC_WEAK_FUNC(sub_82403830);
PPC_FUNC_IMPL(__imp__sub_82403830) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82403878
	if (ctx.cr6.eq) goto loc_82403878;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8240384C:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82403870
	if (ctx.cr6.eq) goto loc_82403870;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8240384c
	if (ctx.cr6.lt) goto loc_8240384C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82403870:
	// cmplwi cr6,r10,9999
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9999, ctx.xer);
	// bne cr6,0x82403880
	if (!ctx.cr6.eq) goto loc_82403880;
loc_82403878:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82403880:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403888"))) PPC_WEAK_FUNC(sub_82403888);
PPC_FUNC_IMPL(__imp__sub_82403888) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6764
	ctx.r10.s64 = ctx.r11.s64 + -6764;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824038c4
	if (ctx.cr6.eq) goto loc_824038C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x824038C4;
	sub_82183E40(ctx, base);
loc_824038C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8218b208
	ctx.lr = 0x824038D4;
	sub_8218B208(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824038f0
	if (ctx.cr6.eq) goto loc_824038F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x824038EC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824038F0:
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

__attribute__((alias("__imp__sub_82403908"))) PPC_WEAK_FUNC(sub_82403908);
PPC_FUNC_IMPL(__imp__sub_82403908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82403910;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82403924;
	sub_8218AA18(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82403928;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82403930;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8240393C;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82403948;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82403a90
	if (ctx.cr6.eq) goto loc_82403A90;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x8240395C;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82403a90
	if (ctx.cr6.eq) goto loc_82403A90;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82403970;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82403990
	if (ctx.cr6.eq) goto loc_82403990;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ae98
	ctx.lr = 0x82403988;
	sub_8218AE98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82403994
	goto loc_82403994;
loc_82403990:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82403994:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lbz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lbz r5,51(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// lbz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lbz r7,49(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r9,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r9.u16);
	// lbz r7,54(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// lbz r8,55(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r6.u16);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// beq cr6,0x82403a24
	if (ctx.cr6.eq) goto loc_82403A24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82403A24;
	sub_82183E40(ctx, base);
loc_82403A24:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82403a40
	if (!ctx.cr6.gt) goto loc_82403A40;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82403A40:
	// bl 0x82080d68
	ctx.lr = 0x82403A44;
	sub_82080D68(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// rlwinm r4,r29,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822aa648
	ctx.lr = 0x82403A50;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82403a84
	if (ctx.cr6.eq) goto loc_82403A84;
loc_82403A58:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,32
	ctx.r5.s64 = 32;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x82403A6C;
	sub_821847A8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8217b5e8
	ctx.lr = 0x82403A78;
	sub_8217B5E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82403a58
	if (!ctx.cr0.eq) goto loc_82403A58;
loc_82403A84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x82403A90;
	sub_82183E40(ctx, base);
loc_82403A90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82403A98;
	sub_821837D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x82403AA0;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82403AAC"))) PPC_WEAK_FUNC(sub_82403AAC);
PPC_FUNC_IMPL(__imp__sub_82403AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403AB0"))) PPC_WEAK_FUNC(sub_82403AB0);
PPC_FUNC_IMPL(__imp__sub_82403AB0) {
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
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82403b00
	if (ctx.cr6.eq) goto loc_82403B00;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82403AE4:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82403b1c
	if (ctx.cr6.eq) goto loc_82403B1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403ae4
	if (ctx.cr6.lt) goto loc_82403AE4;
loc_82403B00:
	// li r30,9999
	ctx.r30.s64 = 9999;
loc_82403B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403830
	ctx.lr = 0x82403B0C;
	sub_82403830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82403b24
	if (!ctx.cr6.eq) goto loc_82403B24;
	// li r3,9999
	ctx.r3.s64 = 9999;
	// b 0x82403b3c
	goto loc_82403B3C;
loc_82403B1C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x82403b04
	goto loc_82403B04;
loc_82403B24:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
loc_82403B3C:
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

__attribute__((alias("__imp__sub_82403B54"))) PPC_WEAK_FUNC(sub_82403B54);
PPC_FUNC_IMPL(__imp__sub_82403B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403B58"))) PPC_WEAK_FUNC(sub_82403B58);
PPC_FUNC_IMPL(__imp__sub_82403B58) {
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
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82403ba4
	if (ctx.cr6.eq) goto loc_82403BA4;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82403B88:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82403bcc
	if (ctx.cr6.eq) goto loc_82403BCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403b88
	if (ctx.cr6.lt) goto loc_82403B88;
loc_82403BA4:
	// li r31,9999
	ctx.r31.s64 = 9999;
loc_82403BA8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82403830
	ctx.lr = 0x82403BB0;
	sub_82403830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82403bd4
	if (!ctx.cr6.eq) goto loc_82403BD4;
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
loc_82403BCC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82403ba8
	goto loc_82403BA8;
loc_82403BD4:
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,30(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
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

__attribute__((alias("__imp__sub_82403BF8"))) PPC_WEAK_FUNC(sub_82403BF8);
PPC_FUNC_IMPL(__imp__sub_82403BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82403c44
	if (ctx.cr6.eq) goto loc_82403C44;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82403C28:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82403c6c
	if (ctx.cr6.eq) goto loc_82403C6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403c28
	if (ctx.cr6.lt) goto loc_82403C28;
loc_82403C44:
	// li r31,9999
	ctx.r31.s64 = 9999;
loc_82403C48:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82403830
	ctx.lr = 0x82403C50;
	sub_82403830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82403c74
	if (!ctx.cr6.eq) goto loc_82403C74;
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
loc_82403C6C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82403c48
	goto loc_82403C48;
loc_82403C74:
	// lwz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,-9999
	ctx.r11.s64 = ctx.r11.s64 + -9999;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82403CA8"))) PPC_WEAK_FUNC(sub_82403CA8);
PPC_FUNC_IMPL(__imp__sub_82403CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6732
	ctx.r4.s64 = ctx.r11.s64 + -6732;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82403CB8"))) PPC_WEAK_FUNC(sub_82403CB8);
PPC_FUNC_IMPL(__imp__sub_82403CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82403CC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x82403CCC;
	sub_8218B1E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-6720
	ctx.r10.s64 = ctx.r11.s64 + -6720;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x82403CE8;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82403CF0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82403CFC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82403D00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82403d18
	if (ctx.cr6.eq) goto loc_82403D18;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82403D14;
	sub_82183448(ctx, base);
	// b 0x82403d20
	goto loc_82403D20;
loc_82403D18:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82403D20;
	sub_821845A0(ctx, base);
loc_82403D20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82403d30
	if (ctx.cr6.eq) goto loc_82403D30;
	// bl 0x821a1580
	ctx.lr = 0x82403D2C;
	sub_821A1580(ctx, base);
	// b 0x82403d34
	goto loc_82403D34;
loc_82403D30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82403D34:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82403D40;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82403D4C"))) PPC_WEAK_FUNC(sub_82403D4C);
PPC_FUNC_IMPL(__imp__sub_82403D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403D50"))) PPC_WEAK_FUNC(sub_82403D50);
PPC_FUNC_IMPL(__imp__sub_82403D50) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-6720
	ctx.r10.s64 = ctx.r11.s64 + -6720;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82403d88
	if (ctx.cr6.eq) goto loc_82403D88;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82403D88;
	sub_82183E40(ctx, base);
loc_82403D88:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82403db0
	if (ctx.cr6.eq) goto loc_82403DB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82403DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82403DB0:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b208
	ctx.lr = 0x82403DBC;
	sub_8218B208(ctx, base);
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

__attribute__((alias("__imp__sub_82403DD4"))) PPC_WEAK_FUNC(sub_82403DD4);
PPC_FUNC_IMPL(__imp__sub_82403DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403DD8"))) PPC_WEAK_FUNC(sub_82403DD8);
PPC_FUNC_IMPL(__imp__sub_82403DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82403DE0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82403DF4;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82403DFC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82403E08;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82403E1C;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82403E28;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82403f40
	if (ctx.cr6.eq) goto loc_82403F40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82403E3C;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82403f40
	if (ctx.cr6.eq) goto loc_82403F40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82403E50;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82403e70
	if (ctx.cr6.eq) goto loc_82403E70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x82403E68;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82403e74
	goto loc_82403E74;
loc_82403E70:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82403E74:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82403E80;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82403e9c
	if (ctx.cr6.eq) goto loc_82403E9C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82403E94;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82403ea0
	goto loc_82403EA0;
loc_82403E9C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82403EA0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x82403EB0;
	sub_8218AA18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821a2038
	ctx.lr = 0x82403EC4;
	sub_821A2038(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82403ee0
	if (ctx.cr6.eq) goto loc_82403EE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82403EE0;
	sub_82183E40(ctx, base);
loc_82403EE0:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r30,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r30.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82403efc
	if (!ctx.cr6.gt) goto loc_82403EFC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82403EFC:
	// bl 0x82080d68
	ctx.lr = 0x82403F00;
	sub_82080D68(ctx, base);
	// stw r3,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r3.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82403f38
	if (!ctx.cr6.gt) goto loc_82403F38;
loc_82403F10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa58
	ctx.lr = 0x82403F1C;
	sub_8218AA58(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x82403f10
	if (ctx.cr6.lt) goto loc_82403F10;
loc_82403F38:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x82403F40;
	sub_8218A7F0(ctx, base);
loc_82403F40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82403F48;
	sub_8218A7F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82403F50;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82403F5C"))) PPC_WEAK_FUNC(sub_82403F5C);
PPC_FUNC_IMPL(__imp__sub_82403F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403F60"))) PPC_WEAK_FUNC(sub_82403F60);
PPC_FUNC_IMPL(__imp__sub_82403F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82403fa4
	if (ctx.cr6.eq) goto loc_82403FA4;
	// lwz r8,52(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82403F80:
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82403fa0
	if (ctx.cr6.eq) goto loc_82403FA0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403f80
	if (ctx.cr6.lt) goto loc_82403F80;
	// b 0x82403fa4
	goto loc_82403FA4;
loc_82403FA0:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82403FA4:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82403FC4"))) PPC_WEAK_FUNC(sub_82403FC4);
PPC_FUNC_IMPL(__imp__sub_82403FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403FC8"))) PPC_WEAK_FUNC(sub_82403FC8);
PPC_FUNC_IMPL(__imp__sub_82403FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240400c
	if (ctx.cr6.eq) goto loc_8240400C;
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82403FE8:
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,9999
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9999, ctx.xer);
	// beq cr6,0x82404008
	if (ctx.cr6.eq) goto loc_82404008;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403fe8
	if (ctx.cr6.lt) goto loc_82403FE8;
	// b 0x8240400c
	goto loc_8240400C;
loc_82404008:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8240400C:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240402C"))) PPC_WEAK_FUNC(sub_8240402C);
PPC_FUNC_IMPL(__imp__sub_8240402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404030"))) PPC_WEAK_FUNC(sub_82404030);
PPC_FUNC_IMPL(__imp__sub_82404030) {
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
	// bl 0x82403d50
	ctx.lr = 0x82404050;
	sub_82403D50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240406c
	if (ctx.cr6.eq) goto loc_8240406C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82404068;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8240406C:
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

__attribute__((alias("__imp__sub_82404084"))) PPC_WEAK_FUNC(sub_82404084);
PPC_FUNC_IMPL(__imp__sub_82404084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404088"))) PPC_WEAK_FUNC(sub_82404088);
PPC_FUNC_IMPL(__imp__sub_82404088) {
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r3,-4308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4308);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x824040B8;
	sub_823EC8D0(ctx, base);
	// lwz r11,-4308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4308);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823eca58
	ctx.lr = 0x824040C8;
	sub_823ECA58(ctx, base);
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

__attribute__((alias("__imp__sub_824040DC"))) PPC_WEAK_FUNC(sub_824040DC);
PPC_FUNC_IMPL(__imp__sub_824040DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824040E0"))) PPC_WEAK_FUNC(sub_824040E0);
PPC_FUNC_IMPL(__imp__sub_824040E0) {
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-4308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ec920
	ctx.lr = 0x82404114;
	sub_823EC920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821eb308
	ctx.lr = 0x8240411C;
	sub_821EB308(ctx, base);
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

__attribute__((alias("__imp__sub_82404130"))) PPC_WEAK_FUNC(sub_82404130);
PPC_FUNC_IMPL(__imp__sub_82404130) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e9980
	sub_823E9980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404138"))) PPC_WEAK_FUNC(sub_82404138);
PPC_FUNC_IMPL(__imp__sub_82404138) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed520
	sub_823ED520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240413C"))) PPC_WEAK_FUNC(sub_8240413C);
PPC_FUNC_IMPL(__imp__sub_8240413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404140"))) PPC_WEAK_FUNC(sub_82404140);
PPC_FUNC_IMPL(__imp__sub_82404140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37252
	ctx.r10.u64 = ctx.r11.u64 | 37252;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8240417c
	// bdzf 4*cr6+eq,0x8240418c
	// bne cr6,0x8240419c
	if (!ctx.cr6.eq) goto loc_8240419C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8240417C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8240418C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8240419C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824041AC"))) PPC_WEAK_FUNC(sub_824041AC);
PPC_FUNC_IMPL(__imp__sub_824041AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824041B0"))) PPC_WEAK_FUNC(sub_824041B0);
PPC_FUNC_IMPL(__imp__sub_824041B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823edf48
	sub_823EDF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824041B4"))) PPC_WEAK_FUNC(sub_824041B4);
PPC_FUNC_IMPL(__imp__sub_824041B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824041B8"))) PPC_WEAK_FUNC(sub_824041B8);
PPC_FUNC_IMPL(__imp__sub_824041B8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824041DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824041ec
	if (ctx.cr6.eq) goto loc_824041EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edfc0
	ctx.lr = 0x824041EC;
	sub_823EDFC0(ctx, base);
loc_824041EC:
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

__attribute__((alias("__imp__sub_82404200"))) PPC_WEAK_FUNC(sub_82404200);
PPC_FUNC_IMPL(__imp__sub_82404200) {
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
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r4,464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x82404230;
	sub_823E8918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x823e8918
	ctx.lr = 0x82404244;
	sub_823E8918(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,27
	ctx.r10.s64 = 27;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82404268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82404280"))) PPC_WEAK_FUNC(sub_82404280);
PPC_FUNC_IMPL(__imp__sub_82404280) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30200
	ctx.r4.s64 = 30200;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155bd0
	ctx.lr = 0x824042A8;
	sub_82155BD0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824042BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r8,37252
	ctx.r8.u64 = ctx.r8.u64 | 37252;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_824042E0"))) PPC_WEAK_FUNC(sub_824042E0);
PPC_FUNC_IMPL(__imp__sub_824042E0) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30519
	ctx.r4.s64 = 30519;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155bd0
	ctx.lr = 0x82404308;
	sub_82155BD0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8240431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r8,r8,37252
	ctx.r8.u64 = ctx.r8.u64 | 37252;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82404340"))) PPC_WEAK_FUNC(sub_82404340);
PPC_FUNC_IMPL(__imp__sub_82404340) {
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
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,-28292
	ctx.r31.s64 = ctx.r31.s64 + -28292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155dc0
	ctx.lr = 0x82404368;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824043a4
	if (!ctx.cr6.eq) goto loc_824043A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404380
	if (ctx.cr6.eq) goto loc_82404380;
	// bl 0x82154aa8
	ctx.lr = 0x82404380;
	sub_82154AA8(ctx, base);
loc_82404380:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82404394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,37252
	ctx.r7.u64 = ctx.r9.u64 | 37252;
	// stwx r8,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u32);
loc_824043A4:
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

__attribute__((alias("__imp__sub_824043BC"))) PPC_WEAK_FUNC(sub_824043BC);
PPC_FUNC_IMPL(__imp__sub_824043BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824043C0"))) PPC_WEAK_FUNC(sub_824043C0);
PPC_FUNC_IMPL(__imp__sub_824043C0) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30535
	ctx.r4.s64 = 30535;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155bd0
	ctx.lr = 0x824043E8;
	sub_82155BD0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824043FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r8,r8,37252
	ctx.r8.u64 = ctx.r8.u64 | 37252;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82404420"))) PPC_WEAK_FUNC(sub_82404420);
PPC_FUNC_IMPL(__imp__sub_82404420) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155dc0
	ctx.lr = 0x82404440;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8240446c
	if (!ctx.cr6.eq) goto loc_8240446C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240445C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,37252
	ctx.r7.u64 = ctx.r9.u64 | 37252;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
loc_8240446C:
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

__attribute__((alias("__imp__sub_82404480"))) PPC_WEAK_FUNC(sub_82404480);
PPC_FUNC_IMPL(__imp__sub_82404480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82404488;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x823edb98
	ctx.lr = 0x82404498;
	sub_823EDB98(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28292
	ctx.r30.s64 = ctx.r30.s64 + -28292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x824044A8;
	sub_8209EDA0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// ori r6,r11,37252
	ctx.r6.u64 = ctx.r11.u64 | 37252;
	// ori r5,r10,37256
	ctx.r5.u64 = ctx.r10.u64 | 37256;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r29,r29,-28288
	ctx.r29.s64 = ctx.r29.s64 + -28288;
	// addi r27,r27,-28276
	ctx.r27.s64 = ctx.r27.s64 + -28276;
	// addi r4,r9,-6552
	ctx.r4.s64 = ctx.r9.s64 + -6552;
	// stwx r26,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r8,-6688
	ctx.r3.s64 = ctx.r8.s64 + -6688;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r11,r7,-6700
	ctx.r11.s64 = ctx.r7.s64 + -6700;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// bl 0x82182e90
	ctx.lr = 0x82404510;
	sub_82182E90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82404518;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404524;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82404528;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82404540
	if (ctx.cr6.eq) goto loc_82404540;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8240453C;
	sub_82183448(ctx, base);
	// b 0x82404548
	goto loc_82404548;
loc_82404540:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82404548;
	sub_821845A0(ctx, base);
loc_82404548:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240455c
	if (ctx.cr6.eq) goto loc_8240455C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82154a08
	ctx.lr = 0x82404558;
	sub_82154A08(ctx, base);
	// b 0x82404560
	goto loc_82404560;
loc_8240455C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82404560:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82404568;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82404580
	if (ctx.cr6.eq) goto loc_82404580;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x8240457C;
	sub_82183448(ctx, base);
	// b 0x82404588
	goto loc_82404588;
loc_82404580:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82404588;
	sub_821845A0(ctx, base);
loc_82404588:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404598
	if (ctx.cr6.eq) goto loc_82404598;
	// bl 0x82404ca8
	ctx.lr = 0x82404594;
	sub_82404CA8(ctx, base);
	// b 0x8240459c
	goto loc_8240459C;
loc_82404598:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8240459C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x821708b0
	ctx.lr = 0x824045AC;
	sub_821708B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824045b8
	if (ctx.cr6.eq) goto loc_824045B8;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_824045B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x824045C0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_824045CC"))) PPC_WEAK_FUNC(sub_824045CC);
PPC_FUNC_IMPL(__imp__sub_824045CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824045D0"))) PPC_WEAK_FUNC(sub_824045D0);
PPC_FUNC_IMPL(__imp__sub_824045D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82404b28
	sub_82404B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824045D8"))) PPC_WEAK_FUNC(sub_824045D8);
PPC_FUNC_IMPL(__imp__sub_824045D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82404b28
	sub_82404B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824045E0"))) PPC_WEAK_FUNC(sub_824045E0);
PPC_FUNC_IMPL(__imp__sub_824045E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824045E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r11,-6552
	ctx.r7.s64 = ctx.r11.s64 + -6552;
	// addi r6,r9,-6688
	ctx.r6.s64 = ctx.r9.s64 + -6688;
	// addi r5,r8,-6700
	ctx.r5.s64 = ctx.r8.s64 + -6700;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r29,r29,-28288
	ctx.r29.s64 = ctx.r29.s64 + -28288;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,4548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4548, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404648
	if (ctx.cr6.eq) goto loc_82404648;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82404648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82404648:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,-28292
	ctx.r30.s64 = ctx.r30.s64 + -28292;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404678
	if (ctx.cr6.eq) goto loc_82404678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82404678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82404678:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82404684;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x8240468C;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82404694"))) PPC_WEAK_FUNC(sub_82404694);
PPC_FUNC_IMPL(__imp__sub_82404694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404698"))) PPC_WEAK_FUNC(sub_82404698);
PPC_FUNC_IMPL(__imp__sub_82404698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824046A0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,604(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82404790
	if (ctx.cr6.eq) goto loc_82404790;
	// lwz r11,-240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -240);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82404790
	if (ctx.cr6.eq) goto loc_82404790;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4388);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82404790
	if (!ctx.cr6.eq) goto loc_82404790;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x824046EC;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x824046FC;
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
	ctx.lr = 0x82404710;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8240471C;
	sub_821AD498(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82404760
	if (ctx.cr6.eq) goto loc_82404760;
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,576(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
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
	// stfs f31,132(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r6,940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// lwz r4,392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// lwz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// bl 0x8210a9b0
	ctx.lr = 0x82404760;
	sub_8210A9B0(ctx, base);
loc_82404760:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,36988
	ctx.r10.u64 = ctx.r11.u64 | 36988;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404778
	if (ctx.cr6.eq) goto loc_82404778;
	// bl 0x82154878
	ctx.lr = 0x82404778;
	sub_82154878(ctx, base);
loc_82404778:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82404784;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82404790;
	sub_821AD498(ctx, base);
loc_82404790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240479C"))) PPC_WEAK_FUNC(sub_8240479C);
PPC_FUNC_IMPL(__imp__sub_8240479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824047A0"))) PPC_WEAK_FUNC(sub_824047A0);
PPC_FUNC_IMPL(__imp__sub_824047A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// b 0x823ed458
	sub_823ED458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824047AC"))) PPC_WEAK_FUNC(sub_824047AC);
PPC_FUNC_IMPL(__imp__sub_824047AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824047B0"))) PPC_WEAK_FUNC(sub_824047B0);
PPC_FUNC_IMPL(__imp__sub_824047B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4548, ctx.r10.u32);
	// b 0x823ed568
	sub_823ED568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824047C4"))) PPC_WEAK_FUNC(sub_824047C4);
PPC_FUNC_IMPL(__imp__sub_824047C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824047C8"))) PPC_WEAK_FUNC(sub_824047C8);
PPC_FUNC_IMPL(__imp__sub_824047C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824047D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r11,r11,-28352
	ctx.r11.s64 = ctx.r11.s64 + -28352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,-4308(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ec978
	ctx.lr = 0x82404804;
	sub_823EC978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82404810
	if (ctx.cr6.eq) goto loc_82404810;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82404810:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eca20
	ctx.lr = 0x8240481C;
	sub_823ECA20(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// ori r10,r11,37248
	ctx.r10.u64 = ctx.r11.u64 | 37248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82404d70
	ctx.lr = 0x82404838;
	sub_82404D70(ctx, base);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8240484C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r7,37252
	ctx.r5.u64 = ctx.r7.u64 | 37252;
	// stwx r6,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82404864"))) PPC_WEAK_FUNC(sub_82404864);
PPC_FUNC_IMPL(__imp__sub_82404864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404868"))) PPC_WEAK_FUNC(sub_82404868);
PPC_FUNC_IMPL(__imp__sub_82404868) {
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
	// bl 0x8223ad48
	ctx.lr = 0x82404880;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824048a0
	if (!ctx.cr6.eq) goto loc_824048A0;
loc_82404888:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_824048A0:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824048B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82404888
	if (!ctx.cr6.eq) goto loc_82404888;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x824048d0
	if (ctx.cr6.lt) goto loc_824048D0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82404888
	if (!ctx.cr6.gt) goto loc_82404888;
loc_824048D0:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155dc0
	ctx.lr = 0x824048DC;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824048fc
	if (ctx.cr6.eq) goto loc_824048FC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x824048F0;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82404900
	if (!ctx.cr6.eq) goto loc_82404900;
loc_824048FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82404900:
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

__attribute__((alias("__imp__sub_82404914"))) PPC_WEAK_FUNC(sub_82404914);
PPC_FUNC_IMPL(__imp__sub_82404914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404918"))) PPC_WEAK_FUNC(sub_82404918);
PPC_FUNC_IMPL(__imp__sub_82404918) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240493C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82404984
	if (ctx.cr6.eq) goto loc_82404984;
	// bl 0x8215bd08
	ctx.lr = 0x82404948;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5670
	ctx.lr = 0x8240495C;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82404984
	if (!ctx.cr6.eq) goto loc_82404984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404280
	ctx.lr = 0x8240496C;
	sub_82404280(ctx, base);
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
loc_82404984:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8240499C"))) PPC_WEAK_FUNC(sub_8240499C);
PPC_FUNC_IMPL(__imp__sub_8240499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824049A0"))) PPC_WEAK_FUNC(sub_824049A0);
PPC_FUNC_IMPL(__imp__sub_824049A0) {
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
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,-28292
	ctx.r31.s64 = ctx.r31.s64 + -28292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155dc0
	ctx.lr = 0x824049C8;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82404a08
	if (!ctx.cr6.eq) goto loc_82404A08;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824049e0
	if (ctx.cr6.eq) goto loc_824049E0;
	// bl 0x82154aa8
	ctx.lr = 0x824049E0;
	sub_82154AA8(ctx, base);
loc_824049E0:
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4548, ctx.r10.u32);
	// bl 0x823ed568
	ctx.lr = 0x824049F8;
	sub_823ED568(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,37252
	ctx.r6.u64 = ctx.r8.u64 | 37252;
	// stwx r7,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
loc_82404A08:
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

__attribute__((alias("__imp__sub_82404A20"))) PPC_WEAK_FUNC(sub_82404A20);
PPC_FUNC_IMPL(__imp__sub_82404A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82404A28;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,37248
	ctx.r10.u64 = ctx.r11.u64 | 37248;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82404adc
	if (!ctx.cr6.eq) goto loc_82404ADC;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r31,-4308(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ec9a0
	ctx.lr = 0x82404A70;
	sub_823EC9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82404a88
	if (!ctx.cr6.eq) goto loc_82404A88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ec948
	ctx.lr = 0x82404A88;
	sub_823EC948(ctx, base);
loc_82404A88:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12060, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x82404A9C;
	sub_823EC8D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eca58
	ctx.lr = 0x82404AA8;
	sub_823ECA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82404acc
	if (ctx.cr6.eq) goto loc_82404ACC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82404AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82404ACC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824043c0
	ctx.lr = 0x82404AD4;
	sub_824043C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82404ADC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82404af4
	if (!ctx.cr6.eq) goto loc_82404AF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824042e0
	ctx.lr = 0x82404AEC;
	sub_824042E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82404AF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82404b20
	if (!ctx.cr6.eq) goto loc_82404B20;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,37252
	ctx.r8.u64 = ctx.r11.u64 | 37252;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stwx r9,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82404B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82404B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82404B28"))) PPC_WEAK_FUNC(sub_82404B28);
PPC_FUNC_IMPL(__imp__sub_82404B28) {
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
	// bl 0x824045e0
	ctx.lr = 0x82404B48;
	sub_824045E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82404b64
	if (ctx.cr6.eq) goto loc_82404B64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82404B60;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82404B64:
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

__attribute__((alias("__imp__sub_82404B7C"))) PPC_WEAK_FUNC(sub_82404B7C);
PPC_FUNC_IMPL(__imp__sub_82404B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404B80"))) PPC_WEAK_FUNC(sub_82404B80);
PPC_FUNC_IMPL(__imp__sub_82404B80) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37256
	ctx.r10.u64 = ctx.r11.u64 | 37256;
	// lwzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82404BA8;
	sub_8215BD60(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,-8460(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8460);
	// and r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 & ctx.r30.u64;
	// bl 0x820e5218
	ctx.lr = 0x82404BC4;
	sub_820E5218(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addic r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// ori r10,r4,37252
	ctx.r10.u64 = ctx.r4.u64 | 37252;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82404bfc
	if (ctx.cr6.eq) goto loc_82404BFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82404bfc
	if (ctx.cr6.eq) goto loc_82404BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404918
	ctx.lr = 0x82404BF4;
	sub_82404918(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82404c04
	if (!ctx.cr6.eq) goto loc_82404C04;
loc_82404BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821403e0
	ctx.lr = 0x82404C04;
	sub_821403E0(ctx, base);
loc_82404C04:
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

__attribute__((alias("__imp__sub_82404C1C"))) PPC_WEAK_FUNC(sub_82404C1C);
PPC_FUNC_IMPL(__imp__sub_82404C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404C20"))) PPC_WEAK_FUNC(sub_82404C20);
PPC_FUNC_IMPL(__imp__sub_82404C20) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821707d0
	ctx.lr = 0x82404C48;
	sub_821707D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82404c90
	if (ctx.cr6.eq) goto loc_82404C90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821711c0
	ctx.lr = 0x82404C58;
	sub_821711C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404c68
	if (ctx.cr6.eq) goto loc_82404C68;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82404c8c
	goto loc_82404C8C;
loc_82404C68:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82404c88
	if (ctx.cr6.lt) goto loc_82404C88;
	// beq cr6,0x82404c80
	if (ctx.cr6.eq) goto loc_82404C80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82404c90
	if (!ctx.cr6.lt) goto loc_82404C90;
loc_82404C80:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82404c8c
	goto loc_82404C8C;
loc_82404C88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82404C8C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82404C90:
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

__attribute__((alias("__imp__sub_82404CA8"))) PPC_WEAK_FUNC(sub_82404CA8);
PPC_FUNC_IMPL(__imp__sub_82404CA8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82404CC8;
	sub_82185740(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6356
	ctx.r9.s64 = ctx.r10.s64 + -6356;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82404CF8"))) PPC_WEAK_FUNC(sub_82404CF8);
PPC_FUNC_IMPL(__imp__sub_82404CF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6356
	ctx.r10.s64 = ctx.r11.s64 + -6356;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x82404D24;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82404d40
	if (ctx.cr6.eq) goto loc_82404D40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82404D3C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82404D40:
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

__attribute__((alias("__imp__sub_82404D58"))) PPC_WEAK_FUNC(sub_82404D58);
PPC_FUNC_IMPL(__imp__sub_82404D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82404c20
	sub_82404C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82404D68"))) PPC_WEAK_FUNC(sub_82404D68);
PPC_FUNC_IMPL(__imp__sub_82404D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404D6C"))) PPC_WEAK_FUNC(sub_82404D6C);
PPC_FUNC_IMPL(__imp__sub_82404D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404D70"))) PPC_WEAK_FUNC(sub_82404D70);
PPC_FUNC_IMPL(__imp__sub_82404D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82404D78;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82182e90
	ctx.lr = 0x82404D94;
	sub_82182E90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82170858
	ctx.lr = 0x82404DAC;
	sub_82170858(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82404DBC"))) PPC_WEAK_FUNC(sub_82404DBC);
PPC_FUNC_IMPL(__imp__sub_82404DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404DC0"))) PPC_WEAK_FUNC(sub_82404DC0);
PPC_FUNC_IMPL(__imp__sub_82404DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82404DD4"))) PPC_WEAK_FUNC(sub_82404DD4);
PPC_FUNC_IMPL(__imp__sub_82404DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404DD8"))) PPC_WEAK_FUNC(sub_82404DD8);
PPC_FUNC_IMPL(__imp__sub_82404DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82404DE0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-6336
	ctx.r10.s64 = ctx.r11.s64 + -6336;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x82404E0C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404E18;
	sub_821837D0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x822aa648
	ctx.lr = 0x82404E24;
	sub_822AA648(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404E30;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82404E3C"))) PPC_WEAK_FUNC(sub_82404E3C);
PPC_FUNC_IMPL(__imp__sub_82404E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404E40"))) PPC_WEAK_FUNC(sub_82404E40);
PPC_FUNC_IMPL(__imp__sub_82404E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82404E48;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82404E60;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404E6C;
	sub_821837D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r28,r11,-6348
	ctx.r28.s64 = ctx.r11.s64 + -6348;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240d460
	ctx.lr = 0x82404EAC;
	sub_8240D460(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x82404ecc
	if (ctx.cr6.eq) goto loc_82404ECC;
loc_82404EB4:
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404EC0;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82404ECC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404ee0
	if (ctx.cr6.eq) goto loc_82404EE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82404EE0;
	sub_82183E40(ctx, base);
loc_82404EE0:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82080d68
	ctx.lr = 0x82404EEC;
	sub_82080D68(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// std r30,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r30.u64);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8240d460
	ctx.lr = 0x82404F20;
	sub_8240D460(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82404f30
	if (ctx.cr6.eq) goto loc_82404F30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82404eb4
	if (!ctx.cr6.eq) goto loc_82404EB4;
loc_82404F30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82404F38;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82404F44"))) PPC_WEAK_FUNC(sub_82404F44);
PPC_FUNC_IMPL(__imp__sub_82404F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82404F48"))) PPC_WEAK_FUNC(sub_82404F48);
PPC_FUNC_IMPL(__imp__sub_82404F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82404F50;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82404F64:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404f78
	if (ctx.cr6.eq) goto loc_82404F78;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82404F78;
	sub_82183E40(ctx, base);
loc_82404F78:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x82404f64
	if (!ctx.cr0.eq) goto loc_82404F64;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x822aa648
	ctx.lr = 0x82404F90;
	sub_822AA648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82404F98"))) PPC_WEAK_FUNC(sub_82404F98);
PPC_FUNC_IMPL(__imp__sub_82404F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82404FA0;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82404fdc
	if (!ctx.cr6.eq) goto loc_82404FDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82404FDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ce8
	ctx.lr = 0x82404FE4;
	sub_82256CE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8240500c
	if (ctx.cr6.eq) goto loc_8240500C;
	// bl 0x82256ce8
	ctx.lr = 0x82404FF4;
	sub_82256CE8(ctx, base);
	// stw r3,172(r27)
	PPC_STORE_U32(ctx.r27.u32 + 172, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_8240500C:
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x822aa648
	ctx.lr = 0x82405014;
	sub_822AA648(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240527c
	if (ctx.cr6.eq) goto loc_8240527C;
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x8240502C;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82405038;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82404f48
	ctx.lr = 0x82405040;
	sub_82404F48(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r26,r11,-6348
	ctx.r26.s64 = ctx.r11.s64 + -6348;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lfd f31,29640(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29640);
	// addi r30,r27,60
	ctx.r30.s64 = ctx.r27.s64 + 60;
	// subfic r24,r27,-60
	ctx.xer.ca = ctx.r27.u32 <= 4294967236;
	ctx.r24.s64 = -60 - ctx.r27.s64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r23,r9,65535
	ctx.r23.u64 = ctx.r9.u64 | 65535;
loc_82405070:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82405274
	if (!ctx.cr6.gt) goto loc_82405274;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82405260
	if (!ctx.cr6.eq) goto loc_82405260;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// std r11,-28(r30)
	PPC_STORE_U64(ctx.r30.u32 + -28, ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r9.u32);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82405260
	if (ctx.cr6.gt) goto loc_82405260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82405104
	// bdzf 4*cr6+eq,0x82405120
	// bdzf 4*cr6+eq,0x824051ec
	// bdzf 4*cr6+eq,0x82405144
	// bdzf 4*cr6+eq,0x82405188
	// bne cr6,0x82405168
	if (!ctx.cr6.eq) goto loc_82405168;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x824050fc
	if (ctx.cr6.eq) goto loc_824050FC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_824050FC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82405260
	goto loc_82405260;
loc_82405104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82405118
	if (ctx.cr6.eq) goto loc_82405118;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
loc_82405118:
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// b 0x82405260
	goto loc_82405260;
loc_82405120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82405138
	if (!ctx.cr6.eq) goto loc_82405138;
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f31.u64);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82405260
	goto loc_82405260;
loc_82405138:
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// b 0x82405260
	goto loc_82405260;
loc_82405144:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240515c
	if (!ctx.cr6.eq) goto loc_8240515C;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82405260
	goto loc_82405260;
loc_8240515C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82405260
	goto loc_82405260;
loc_82405168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405260
	if (ctx.cr6.eq) goto loc_82405260;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x82405260
	goto loc_82405260;
loc_82405188:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240519c
	if (ctx.cr6.eq) goto loc_8240519C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8240519C;
	sub_82183E40(ctx, base);
loc_8240519C:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82405260
	if (!ctx.cr6.gt) goto loc_82405260;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82405260
	if (ctx.cr6.eq) goto loc_82405260;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82080d68
	ctx.lr = 0x824051C8;
	sub_82080D68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82248f70
	ctx.lr = 0x824051D8;
	sub_82248F70(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x824051E8;
	sub_82248A40(ctx, base);
	// b 0x82405260
	goto loc_82405260;
loc_824051EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405200
	if (ctx.cr6.eq) goto loc_82405200;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82405200;
	sub_82183E40(ctx, base);
loc_82405200:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82405260
	if (!ctx.cr6.gt) goto loc_82405260;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82405260
	if (ctx.cr6.eq) goto loc_82405260;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82405238
	if (!ctx.cr6.gt) goto loc_82405238;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82405238:
	// bl 0x82080d68
	ctx.lr = 0x8240523C;
	sub_82080D68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// stb r28,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r28.u8);
	// stb r28,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r28.u8);
	// stb r28,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r28.u8);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x8240acf0
	ctx.lr = 0x82405260;
	sub_8240ACF0(ctx, base);
loc_82405260:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// blt cr6,0x82405070
	if (ctx.cr6.lt) goto loc_82405070;
loc_82405274:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8240527C;
	sub_821837D0(ctx, base);
loc_8240527C:
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405290
	if (ctx.cr6.eq) goto loc_82405290;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82405290;
	sub_82183E40(ctx, base);
loc_82405290:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_824052B0"))) PPC_WEAK_FUNC(sub_824052B0);
PPC_FUNC_IMPL(__imp__sub_824052B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6336
	ctx.r10.s64 = ctx.r11.s64 + -6336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82404f48
	ctx.lr = 0x824052DC;
	sub_82404F48(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824052f0
	if (ctx.cr6.eq) goto loc_824052F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x824052F0;
	sub_82183E40(ctx, base);
loc_824052F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82405314
	if (ctx.cr6.eq) goto loc_82405314;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82405310;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82405314:
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

__attribute__((alias("__imp__sub_8240532C"))) PPC_WEAK_FUNC(sub_8240532C);
PPC_FUNC_IMPL(__imp__sub_8240532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405330"))) PPC_WEAK_FUNC(sub_82405330);
PPC_FUNC_IMPL(__imp__sub_82405330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 * 180;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// lwz r5,104(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240537C"))) PPC_WEAK_FUNC(sub_8240537C);
PPC_FUNC_IMPL(__imp__sub_8240537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405380"))) PPC_WEAK_FUNC(sub_82405380);
PPC_FUNC_IMPL(__imp__sub_82405380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 * 180;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// lwz r5,104(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r3.u32);
	// lfs f0,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824053E4"))) PPC_WEAK_FUNC(sub_824053E4);
PPC_FUNC_IMPL(__imp__sub_824053E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824053E8"))) PPC_WEAK_FUNC(sub_824053E8);
PPC_FUNC_IMPL(__imp__sub_824053E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405408"))) PPC_WEAK_FUNC(sub_82405408);
PPC_FUNC_IMPL(__imp__sub_82405408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82405428
	if (!ctx.cr6.eq) goto loc_82405428;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82405428:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r8,r11,180
	ctx.r8.s64 = ctx.r11.s64 * 180;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405474
	if (ctx.cr6.lt) goto loc_82405474;
loc_8240544C:
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwzu r11,180(r10)
	ea = 180 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240544c
	if (!ctx.cr6.lt) goto loc_8240544C;
loc_82405474:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824054b8
	if (ctx.cr6.lt) goto loc_824054B8;
loc_82405490:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwzu r11,180(r10)
	ea = 180 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82405490
	if (!ctx.cr6.lt) goto loc_82405490;
loc_824054B8:
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
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

__attribute__((alias("__imp__sub_824054DC"))) PPC_WEAK_FUNC(sub_824054DC);
PPC_FUNC_IMPL(__imp__sub_824054DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824054E0"))) PPC_WEAK_FUNC(sub_824054E0);
PPC_FUNC_IMPL(__imp__sub_824054E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// b 0x82405408
	sub_82405408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824054F4"))) PPC_WEAK_FUNC(sub_824054F4);
PPC_FUNC_IMPL(__imp__sub_824054F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824054F8"))) PPC_WEAK_FUNC(sub_824054F8);
PPC_FUNC_IMPL(__imp__sub_824054F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6332
	ctx.r10.s64 = ctx.r11.s64 + -6332;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821a9520
	sub_821A9520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405508"))) PPC_WEAK_FUNC(sub_82405508);
PPC_FUNC_IMPL(__imp__sub_82405508) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6332
	ctx.r10.s64 = ctx.r11.s64 + -6332;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a9520
	ctx.lr = 0x82405534;
	sub_821A9520(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82405550
	if (ctx.cr6.eq) goto loc_82405550;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8240554C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82405550:
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

__attribute__((alias("__imp__sub_82405568"))) PPC_WEAK_FUNC(sub_82405568);
PPC_FUNC_IMPL(__imp__sub_82405568) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r31,14520(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82405634
	if (ctx.cr6.eq) goto loc_82405634;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405634
	if (ctx.cr6.eq) goto loc_82405634;
	// lwz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82405634
	if (ctx.cr6.eq) goto loc_82405634;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// lwz r7,432(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,11296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11296);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,11292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11292);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x824055F0;
	sub_8208EA90(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8240561c
	if (ctx.cr6.lt) goto loc_8240561C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82405610
	if (!ctx.cr6.lt) goto loc_82405610;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82405610:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8240561c
	if (!ctx.cr6.gt) goto loc_8240561C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8240561C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_82405634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82405650"))) PPC_WEAK_FUNC(sub_82405650);
PPC_FUNC_IMPL(__imp__sub_82405650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,656(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,664(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,696(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x824056CC;
	sub_82187920(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82187c20
	ctx.lr = 0x824056DC;
	sub_82187C20(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82289c50
	ctx.lr = 0x824056EC;
	sub_82289C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82096f18
	ctx.lr = 0x824056F8;
	sub_82096F18(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-6272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6272);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a9678
	ctx.lr = 0x82405708;
	sub_821A9678(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r4.u64);
	// std r10,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r10.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// std r9,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r9.u64);
	// std r8,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r8.u64);
	// std r7,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r7.u64);
	// std r5,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r5.u64);
	// std r6,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r6.u64);
	// bl 0x821a9b20
	ctx.lr = 0x82405768;
	sub_821A9B20(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-19048(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19048);
	// bl 0x821a3870
	ctx.lr = 0x82405778;
	sub_821A3870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405568
	ctx.lr = 0x82405780;
	sub_82405568(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405794"))) PPC_WEAK_FUNC(sub_82405794);
PPC_FUNC_IMPL(__imp__sub_82405794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405798"))) PPC_WEAK_FUNC(sub_82405798);
PPC_FUNC_IMPL(__imp__sub_82405798) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821a9990
	ctx.lr = 0x824057B8;
	sub_821A9990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6332
	ctx.r9.s64 = ctx.r11.s64 + -6332;
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,-19048(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x824057D8;
	sub_821A2A60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,2148
	ctx.r10.s64 = ctx.r11.s64 + 2148;
	// beq cr6,0x8240586c
	if (ctx.cr6.eq) goto loc_8240586C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x82405818;
	sub_82187400(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f2,f12
	ctx.f2.f64 = double(float(sqrt(ctx.f12.f64)));
	// bl 0x82249c38
	ctx.lr = 0x82405834;
	sub_82249C38(ctx, base);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,672(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bl 0x82249c38
	ctx.lr = 0x8240584C;
	sub_82249C38(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,676(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// ld r8,144(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// std r8,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r8.u64);
	// ld r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 152);
	// std r7,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r7.u64);
	// b 0x824058a0
	goto loc_824058A0;
loc_8240586C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f31,684(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f31,660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lfs f0,13664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13664);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stfs f31,672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f31,656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stfs f13,668(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
loc_824058A0:
	// stfs f31,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// addi r11,r31,656
	ctx.r11.s64 = ctx.r31.s64 + 656;
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// ld r6,688(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 688);
	// ld r8,672(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 672);
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// ld r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 680);
	// stfs f31,700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// ld r5,696(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r31,688
	ctx.r11.s64 = ctx.r31.s64 + 688;
	// std r8,720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 720, ctx.r8.u64);
	// std r7,728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 728, ctx.r7.u64);
	// std r5,744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 744, ctx.r5.u64);
	// std r10,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r10.u64);
	// std r9,712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 712, ctx.r9.u64);
	// std r6,736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 736, ctx.r6.u64);
	// bl 0x82405650
	ctx.lr = 0x824058F0;
	sub_82405650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405910"))) PPC_WEAK_FUNC(sub_82405910);
PPC_FUNC_IMPL(__imp__sub_82405910) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405948
	if (ctx.cr6.eq) goto loc_82405948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82405948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82405948:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405970
	if (ctx.cr6.eq) goto loc_82405970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82405970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82405970:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8240598C"))) PPC_WEAK_FUNC(sub_8240598C);
PPC_FUNC_IMPL(__imp__sub_8240598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405990"))) PPC_WEAK_FUNC(sub_82405990);
PPC_FUNC_IMPL(__imp__sub_82405990) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824059B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82405a28
	if (ctx.cr6.eq) goto loc_82405A28;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824059D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824059f4
	if (ctx.cr6.eq) goto loc_824059F4;
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
loc_824059F4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82405A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
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
loc_82405A28:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82405A40"))) PPC_WEAK_FUNC(sub_82405A40);
PPC_FUNC_IMPL(__imp__sub_82405A40) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,584
	ctx.r30.s64 = ctx.r3.s64 + 584;
loc_82405A5C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8218c460
	ctx.lr = 0x82405A64;
	sub_8218C460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82405a98
	if (ctx.cr6.gt) goto loc_82405A98;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82405a5c
	if (ctx.cr6.lt) goto loc_82405A5C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82405A80:
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
loc_82405A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82405a80
	goto loc_82405A80;
}

__attribute__((alias("__imp__sub_82405AA0"))) PPC_WEAK_FUNC(sub_82405AA0);
PPC_FUNC_IMPL(__imp__sub_82405AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82405AB0"))) PPC_WEAK_FUNC(sub_82405AB0);
PPC_FUNC_IMPL(__imp__sub_82405AB0) {
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
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82405b10
	if (ctx.cr6.eq) goto loc_82405B10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82405AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82405B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82405B10:
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

__attribute__((alias("__imp__sub_82405B24"))) PPC_WEAK_FUNC(sub_82405B24);
PPC_FUNC_IMPL(__imp__sub_82405B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405B28"))) PPC_WEAK_FUNC(sub_82405B28);
PPC_FUNC_IMPL(__imp__sub_82405B28) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82405B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10000
	ctx.r3.s64 = 10000;
	// bl 0x8208f658
	ctx.lr = 0x82405B5C;
	sub_8208F658(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82405B70;
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

__attribute__((alias("__imp__sub_82405B84"))) PPC_WEAK_FUNC(sub_82405B84);
PPC_FUNC_IMPL(__imp__sub_82405B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405B88"))) PPC_WEAK_FUNC(sub_82405B88);
PPC_FUNC_IMPL(__imp__sub_82405B88) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82405BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10001
	ctx.r3.s64 = 10001;
	// bl 0x8208f658
	ctx.lr = 0x82405BBC;
	sub_8208F658(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82405BD0;
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

__attribute__((alias("__imp__sub_82405BE4"))) PPC_WEAK_FUNC(sub_82405BE4);
PPC_FUNC_IMPL(__imp__sub_82405BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405BE8"))) PPC_WEAK_FUNC(sub_82405BE8);
PPC_FUNC_IMPL(__imp__sub_82405BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82405BF0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-5128
	ctx.r29.s64 = ctx.r11.s64 + -5128;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82405C10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82405c50
	if (ctx.cr6.eq) goto loc_82405C50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,-168
	ctx.r10.s64 = ctx.r29.s64 + -168;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8218a3d0
	ctx.lr = 0x82405C34;
	sub_8218A3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82405c50
	if (!ctx.cr6.eq) goto loc_82405C50;
	// lwz r11,408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82405c50
	if (!ctx.cr6.eq) goto loc_82405C50;
	// stw r30,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r30.u32);
	// stw r26,596(r28)
	PPC_STORE_U32(ctx.r28.u32 + 596, ctx.r26.u32);
loc_82405C50:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r29,340
	ctx.r11.s64 = ctx.r29.s64 + 340;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82405c10
	if (ctx.cr6.lt) goto loc_82405C10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82405C6C"))) PPC_WEAK_FUNC(sub_82405C6C);
PPC_FUNC_IMPL(__imp__sub_82405C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405C70"))) PPC_WEAK_FUNC(sub_82405C70);
PPC_FUNC_IMPL(__imp__sub_82405C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-4544
	ctx.r10.s64 = ctx.r11.s64 + -4544;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823c52a0
	sub_823C52A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405C80"))) PPC_WEAK_FUNC(sub_82405C80);
PPC_FUNC_IMPL(__imp__sub_82405C80) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405C90"))) PPC_WEAK_FUNC(sub_82405C90);
PPC_FUNC_IMPL(__imp__sub_82405C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405C94"))) PPC_WEAK_FUNC(sub_82405C94);
PPC_FUNC_IMPL(__imp__sub_82405C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405C98"))) PPC_WEAK_FUNC(sub_82405C98);
PPC_FUNC_IMPL(__imp__sub_82405C98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82405CF0;
	sub_822AA648(ctx, base);
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

__attribute__((alias("__imp__sub_82405D08"))) PPC_WEAK_FUNC(sub_82405D08);
PPC_FUNC_IMPL(__imp__sub_82405D08) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r9,-5920
	ctx.r8.s64 = ctx.r9.s64 + -5920;
loc_82405D28:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r6,r3,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82405d28
	if (!ctx.cr6.eq) goto loc_82405D28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405D54"))) PPC_WEAK_FUNC(sub_82405D54);
PPC_FUNC_IMPL(__imp__sub_82405D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405D58"))) PPC_WEAK_FUNC(sub_82405D58);
PPC_FUNC_IMPL(__imp__sub_82405D58) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r9,-5920
	ctx.r8.s64 = ctx.r9.s64 + -5920;
loc_82405D7C:
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r9,r5,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82405db8
	if (ctx.cr6.eq) goto loc_82405DB8;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82405db8
	if (ctx.cr6.eq) goto loc_82405DB8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x82405dbc
	if (!ctx.cr6.eq) goto loc_82405DBC;
loc_82405DB8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82405DBC:
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82405d7c
	if (!ctx.cr6.eq) goto loc_82405D7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405DD0"))) PPC_WEAK_FUNC(sub_82405DD0);
PPC_FUNC_IMPL(__imp__sub_82405DD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r7,r11,-5920
	ctx.r7.s64 = ctx.r11.s64 + -5920;
loc_82405DF0:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82405e14
	if (ctx.cr6.eq) goto loc_82405E14;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82405E14:
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82405df0
	if (!ctx.cr6.eq) goto loc_82405DF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82405E2C"))) PPC_WEAK_FUNC(sub_82405E2C);
PPC_FUNC_IMPL(__imp__sub_82405E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405E30"))) PPC_WEAK_FUNC(sub_82405E30);
PPC_FUNC_IMPL(__imp__sub_82405E30) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-4400
	ctx.r9.s64 = ctx.r11.s64 + -4400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82405e68
	if (!ctx.cr6.eq) goto loc_82405E68;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82405e70
	if (ctx.cr6.eq) goto loc_82405E70;
loc_82405E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405910
	ctx.lr = 0x82405E70;
	sub_82405910(ctx, base);
loc_82405E70:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405e98
	if (ctx.cr6.eq) goto loc_82405E98;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405e90
	if (ctx.cr6.eq) goto loc_82405E90;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82405E90;
	sub_82183E40(ctx, base);
loc_82405E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82405E98:
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

__attribute__((alias("__imp__sub_82405EAC"))) PPC_WEAK_FUNC(sub_82405EAC);
PPC_FUNC_IMPL(__imp__sub_82405EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405EB0"))) PPC_WEAK_FUNC(sub_82405EB0);
PPC_FUNC_IMPL(__imp__sub_82405EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82405990
	sub_82405990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405EB4"))) PPC_WEAK_FUNC(sub_82405EB4);
PPC_FUNC_IMPL(__imp__sub_82405EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405EB8"))) PPC_WEAK_FUNC(sub_82405EB8);
PPC_FUNC_IMPL(__imp__sub_82405EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82405EC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-4384
	ctx.r9.s64 = ctx.r11.s64 + -4384;
	// addi r8,r10,-4396
	ctx.r8.s64 = ctx.r10.s64 + -4396;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405ef8
	if (ctx.cr6.eq) goto loc_82405EF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82405EF8;
	sub_82183E40(ctx, base);
loc_82405EF8:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82405f2c
	if (ctx.cr6.eq) goto loc_82405F2C;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82405f24
	if (ctx.cr6.eq) goto loc_82405F24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82405F24;
	sub_82183E40(ctx, base);
loc_82405F24:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
loc_82405F2C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823c31a0
	ctx.lr = 0x82405F34;
	sub_823C31A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82405F3C;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82405F44;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82405F4C"))) PPC_WEAK_FUNC(sub_82405F4C);
PPC_FUNC_IMPL(__imp__sub_82405F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82405F50"))) PPC_WEAK_FUNC(sub_82405F50);
PPC_FUNC_IMPL(__imp__sub_82405F50) {
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
	// bl 0x823c3d18
	ctx.lr = 0x82405F68;
	sub_823C3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82405f80
	if (ctx.cr6.eq) goto loc_82405F80;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82405f84
	if (ctx.cr6.eq) goto loc_82405F84;
loc_82405F80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82405F84:
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

__attribute__((alias("__imp__sub_82405F98"))) PPC_WEAK_FUNC(sub_82405F98);
PPC_FUNC_IMPL(__imp__sub_82405F98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82406828
	sub_82406828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82405FA0"))) PPC_WEAK_FUNC(sub_82405FA0);
PPC_FUNC_IMPL(__imp__sub_82405FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82405FA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82406020
	if (ctx.cr6.eq) goto loc_82406020;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82406010
	if (!ctx.cr6.gt) goto loc_82406010;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r3,584
	ctx.r31.s64 = ctx.r3.s64 + 584;
	// addi r29,r11,4393
	ctx.r29.s64 = ctx.r11.s64 + 4393;
loc_82405FE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8218a360
	ctx.lr = 0x82405FEC;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82405ff8
	if (!ctx.cr6.eq) goto loc_82405FF8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82405FF8:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82405fe0
	if (ctx.cr6.lt) goto loc_82405FE0;
loc_82406010:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824060f4
	if (ctx.cr6.eq) goto loc_824060F4;
loc_82406020:
	// lwz r10,408(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8240603c
	if (!ctx.cr6.eq) goto loc_8240603C;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r10.u32);
	// stw r9,596(r28)
	PPC_STORE_U32(ctx.r28.u32 + 596, ctx.r9.u32);
loc_8240603C:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240608c
	if (!ctx.cr6.gt) goto loc_8240608C;
	// li r30,48
	ctx.r30.s64 = 48;
	// addi r31,r28,580
	ctx.r31.s64 = ctx.r28.s64 + 580;
loc_82406054:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8218c4b8
	ctx.lr = 0x82406060;
	sub_8218C4B8(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x821847a8
	ctx.lr = 0x82406074;
	sub_821847A8(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82406054
	if (ctx.cr6.gt) goto loc_82406054;
loc_8240608C:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824060e0
	if (!ctx.cr6.eq) goto loc_824060E0;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824060e0
	if (!ctx.cr6.eq) goto loc_824060E0;
	// lwz r10,584(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 584);
	// li r9,1
	ctx.r9.s64 = 1;
loc_824060B0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824060fc
	if (ctx.cr6.eq) goto loc_824060FC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824060d4
	if (ctx.cr6.eq) goto loc_824060D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824060D4:
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824060b0
	if (!ctx.cr6.eq) goto loc_824060B0;
loc_824060E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824060F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824060F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_824060FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824060e0
	if (ctx.cr6.eq) goto loc_824060E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82406118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82406120"))) PPC_WEAK_FUNC(sub_82406120);
PPC_FUNC_IMPL(__imp__sub_82406120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82406128;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240620c
	if (ctx.cr6.eq) goto loc_8240620C;
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240620c
	if (!ctx.cr6.gt) goto loc_8240620C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8240620c
	if (!ctx.cr6.lt) goto loc_8240620C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82406220
	if (ctx.cr6.eq) goto loc_82406220;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8240616C;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8240617C;
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
	ctx.lr = 0x82406190;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8240619C;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,396
	ctx.r4.s64 = 396;
	// bl 0x8210a9b0
	ctx.lr = 0x824061B0;
	sub_8210A9B0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824061ec
	if (!ctx.cr6.eq) goto loc_824061EC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,556(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// ori r7,r10,58072
	ctx.r7.u64 = ctx.r10.u64 | 58072;
	// ori r6,r9,58092
	ctx.r6.u64 = ctx.r9.u64 | 58092;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r5.u32);
loc_824061EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x824061F8;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82406204;
	sub_821AD498(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8240620C:
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82406220
	if (!ctx.cr6.gt) goto loc_82406220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
loc_82406220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82406228"))) PPC_WEAK_FUNC(sub_82406228);
PPC_FUNC_IMPL(__imp__sub_82406228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82406248
	if (!ctx.cr6.eq) goto loc_82406248;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82109e00
	sub_82109E00(ctx, base);
	return;
loc_82406248:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82406258"))) PPC_WEAK_FUNC(sub_82406258);
PPC_FUNC_IMPL(__imp__sub_82406258) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-6136
	ctx.r3.s64 = ctx.r10.s64 + -6136;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8240626C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82406290
	if (ctx.cr6.eq) goto loc_82406290;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x8240626c
	if (ctx.cr6.lt) goto loc_8240626C;
	// blr 
	return;
loc_82406290:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824062A4"))) PPC_WEAK_FUNC(sub_824062A4);
PPC_FUNC_IMPL(__imp__sub_824062A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824062A8"))) PPC_WEAK_FUNC(sub_824062A8);
PPC_FUNC_IMPL(__imp__sub_824062A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824062B0;
	sub_8224878C(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r11,-6136
	ctx.r8.s64 = ctx.r11.s64 + -6136;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r4,r8,1008
	ctx.r4.s64 = ctx.r8.s64 + 1008;
	// li r31,5
	ctx.r31.s64 = 5;
loc_824062C8:
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82406380
	if (ctx.cr6.eq) goto loc_82406380;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_824062E4:
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82406360
	if (ctx.cr6.eq) goto loc_82406360;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x824062e4
	if (ctx.cr6.lt) goto loc_824062E4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82406308:
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r29,r8,840
	ctx.r29.s64 = ctx.r8.s64 + 840;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r6,r6,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 216, ctx.r6.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r5.u32);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x82406374
	if (!ctx.cr6.eq) goto loc_82406374;
	// stb r30,147(r10)
	PPC_STORE_U8(ctx.r10.u32 + 147, ctx.r30.u8);
	// b 0x82406380
	goto loc_82406380;
loc_82406360:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82406308
	goto loc_82406308;
loc_82406374:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82406380
	if (!ctx.cr6.eq) goto loc_82406380;
	// stb r31,147(r10)
	PPC_STORE_U8(ctx.r10.u32 + 147, ctx.r31.u8);
loc_82406380:
	// addi r11,r8,1008
	ctx.r11.s64 = ctx.r8.s64 + 1008;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824062c8
	if (ctx.cr6.lt) goto loc_824062C8;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82406398"))) PPC_WEAK_FUNC(sub_82406398);
PPC_FUNC_IMPL(__imp__sub_82406398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,408(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824064b0
	if (ctx.cr6.eq) goto loc_824064B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// lfs f12,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// beq cr6,0x824063d8
	if (ctx.cr6.eq) goto loc_824063D8;
	// cmpwi cr6,r4,38
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 38, ctx.xer);
	// ble cr6,0x824063e0
	if (!ctx.cr6.gt) goto loc_824063E0;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// bgt cr6,0x824063e0
	if (ctx.cr6.gt) goto loc_824063E0;
loc_824063D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11308);
	ctx.f0.f64 = double(temp.f32);
loc_824063E0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82406258
	ctx.lr = 0x824063E8;
	sub_82406258(ctx, base);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82406414
	if (ctx.cr6.eq) goto loc_82406414;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82406414:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82406474
	if (!ctx.cr6.eq) goto loc_82406474;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824064b0
	if (ctx.cr6.eq) goto loc_824064B0;
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f12,16(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82406474:
	// lwz r11,596(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 596);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,596(r7)
	PPC_STORE_U32(ctx.r7.u32 + 596, ctx.r10.u32);
	// blt cr6,0x824064b0
	if (ctx.cr6.lt) goto loc_824064B0;
	// stfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// beq cr6,0x824064a8
	if (ctx.cr6.eq) goto loc_824064A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_824064A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,408(r7)
	PPC_STORE_U32(ctx.r7.u32 + 408, ctx.r11.u32);
loc_824064B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824064C0"))) PPC_WEAK_FUNC(sub_824064C0);
PPC_FUNC_IMPL(__imp__sub_824064C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,408(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8240653c
	if (ctx.cr6.eq) goto loc_8240653C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x824064f8
	if (!ctx.cr6.eq) goto loc_824064F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_824064F8:
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x82406504
	if (!ctx.cr6.eq) goto loc_82406504;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82406504:
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// bne cr6,0x82406510
	if (!ctx.cr6.eq) goto loc_82406510;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82406510:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82406258
	ctx.lr = 0x82406518;
	sub_82406258(ctx, base);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r9,408(r7)
	PPC_STORE_U32(ctx.r7.u32 + 408, ctx.r9.u32);
loc_8240653C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240654C"))) PPC_WEAK_FUNC(sub_8240654C);
PPC_FUNC_IMPL(__imp__sub_8240654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406550"))) PPC_WEAK_FUNC(sub_82406550);
PPC_FUNC_IMPL(__imp__sub_82406550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824065a4
	if (!ctx.cr6.eq) goto loc_824065A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x8240657C;
	sub_821EBB58(ctx, base);
	// li r11,24999
	ctx.r11.s64 = 24999;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824065A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824065A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824065B8"))) PPC_WEAK_FUNC(sub_824065B8);
PPC_FUNC_IMPL(__imp__sub_824065B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4544
	ctx.r10.s64 = ctx.r11.s64 + -4544;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c52a0
	ctx.lr = 0x824065E4;
	sub_823C52A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82406600
	if (ctx.cr6.eq) goto loc_82406600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x824065FC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82406600:
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

__attribute__((alias("__imp__sub_82406618"))) PPC_WEAK_FUNC(sub_82406618);
PPC_FUNC_IMPL(__imp__sub_82406618) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r9,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
	// bl 0x823c67a8
	ctx.lr = 0x82406648;
	sub_823C67A8(ctx, base);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82406664
	if (!ctx.cr6.eq) goto loc_82406664;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82406668
	goto loc_82406668;
loc_82406664:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
loc_82406668:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82406670;
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

__attribute__((alias("__imp__sub_82406684"))) PPC_WEAK_FUNC(sub_82406684);
PPC_FUNC_IMPL(__imp__sub_82406684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406688"))) PPC_WEAK_FUNC(sub_82406688);
PPC_FUNC_IMPL(__imp__sub_82406688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82405fa0
	sub_82405FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82406694"))) PPC_WEAK_FUNC(sub_82406694);
PPC_FUNC_IMPL(__imp__sub_82406694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406698"))) PPC_WEAK_FUNC(sub_82406698);
PPC_FUNC_IMPL(__imp__sub_82406698) {
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
	// bl 0x82405e30
	ctx.lr = 0x824066B8;
	sub_82405E30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824066d4
	if (ctx.cr6.eq) goto loc_824066D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x824066D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824066D4:
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

__attribute__((alias("__imp__sub_824066EC"))) PPC_WEAK_FUNC(sub_824066EC);
PPC_FUNC_IMPL(__imp__sub_824066EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824066F0"))) PPC_WEAK_FUNC(sub_824066F0);
PPC_FUNC_IMPL(__imp__sub_824066F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824066F8;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82406714;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,82
	ctx.r4.s64 = 82;
	// bl 0x821859a0
	ctx.lr = 0x82406728;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-4384
	ctx.r9.s64 = ctx.r11.s64 + -4384;
	// addi r8,r10,-4396
	ctx.r8.s64 = ctx.r10.s64 + -4396;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x823c35b8
	ctx.lr = 0x82406770;
	sub_823C35B8(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r5.u32);
	// li r7,30
	ctx.r7.s64 = 30;
	// stb r30,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r30.u8);
	// lfs f31,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// lfs f30,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// bl 0x823c31b0
	ctx.lr = 0x824067F4;
	sub_823C31B0(ctx, base);
	// li r7,30
	ctx.r7.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823c31b0
	ctx.lr = 0x8240680C;
	sub_823C31B0(ctx, base);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82406824"))) PPC_WEAK_FUNC(sub_82406824);
PPC_FUNC_IMPL(__imp__sub_82406824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406828"))) PPC_WEAK_FUNC(sub_82406828);
PPC_FUNC_IMPL(__imp__sub_82406828) {
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
	// bl 0x82405eb8
	ctx.lr = 0x82406848;
	sub_82405EB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82406864
	if (ctx.cr6.eq) goto loc_82406864;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82406860;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82406864:
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

__attribute__((alias("__imp__sub_8240687C"))) PPC_WEAK_FUNC(sub_8240687C);
PPC_FUNC_IMPL(__imp__sub_8240687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406880"))) PPC_WEAK_FUNC(sub_82406880);
PPC_FUNC_IMPL(__imp__sub_82406880) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,-6136
	ctx.r7.s64 = ctx.r10.s64 + -6136;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8240689C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8240697c
	if (ctx.cr6.eq) goto loc_8240697C;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x8240689c
	if (ctx.cr6.lt) goto loc_8240689C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_824068C0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824068e0
	if (ctx.cr6.lt) goto loc_824068E0;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_824068E0:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82406904
	if (ctx.cr6.lt) goto loc_82406904;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r8.u32);
loc_82406904:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82406910:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82406990
	if (ctx.cr6.eq) goto loc_82406990;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x82406910
	if (ctx.cr6.lt) goto loc_82406910;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82406934:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82406954
	if (ctx.cr6.lt) goto loc_82406954;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r8.u32);
loc_82406954:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82406974
	if (ctx.cr6.lt) goto loc_82406974;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r6.u32);
loc_82406974:
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// blr 
	return;
loc_8240697C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x824068c0
	goto loc_824068C0;
loc_82406990:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82406934
	goto loc_82406934;
}

__attribute__((alias("__imp__sub_824069A4"))) PPC_WEAK_FUNC(sub_824069A4);
PPC_FUNC_IMPL(__imp__sub_824069A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824069A8"))) PPC_WEAK_FUNC(sub_824069A8);
PPC_FUNC_IMPL(__imp__sub_824069A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824069B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,424
	ctx.r30.s64 = ctx.r11.s64 + 424;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x824069D4;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x82406bb4
	if (ctx.cr6.gt) goto loc_82406BB4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82406a30
	// bdzf 4*cr6+eq,0x82406aa0
	// bdzf 4*cr6+eq,0x82406adc
	// bne cr6,0x82406b4c
	if (!ctx.cr6.eq) goto loc_82406B4C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25030
	ctx.r4.s64 = 25030;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82406A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82406A28;
	sub_8218A5F0(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82406b84
	goto loc_82406B84;
loc_82406A30:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25029
	ctx.r4.s64 = 25029;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82406A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82406A64;
	sub_8218A5F0(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406258
	ctx.lr = 0x82406A70;
	sub_82406258(ctx, base);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82406AA0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25004
	ctx.r4.s64 = 25004;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82406ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82406AD4;
	sub_8218A5F0(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82406b84
	goto loc_82406B84;
loc_82406ADC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25008
	ctx.r4.s64 = 25008;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82406AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82406B10;
	sub_8218A5F0(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406258
	ctx.lr = 0x82406B1C;
	sub_82406258(ctx, base);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82406B4C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25031
	ctx.r4.s64 = 25031;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82406B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82406B80;
	sub_8218A5F0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
loc_82406B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406258
	ctx.lr = 0x82406B8C;
	sub_82406258(ctx, base);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
loc_82406BB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82406BBC"))) PPC_WEAK_FUNC(sub_82406BBC);
PPC_FUNC_IMPL(__imp__sub_82406BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406BC0"))) PPC_WEAK_FUNC(sub_82406BC0);
PPC_FUNC_IMPL(__imp__sub_82406BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82406BC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823c3240
	ctx.lr = 0x82406BE4;
	sub_823C3240(ctx, base);
	// mulli r11,r29,14
	ctx.r11.s64 = ctx.r29.s64 * 14;
	// lbz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// lbz r8,413(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// mulli r7,r6,14
	ctx.r7.s64 = ctx.r6.s64 * 14;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4784
	ctx.r11.s64 = ctx.r11.s64 + -4784;
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82406ca0
	if (!ctx.cr6.eq) goto loc_82406CA0;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82406ca0
	if (ctx.cr6.eq) goto loc_82406CA0;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// li r4,13
	ctx.r4.s64 = 13;
loc_82406C40:
	// lbz r10,413(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// stb r10,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r10.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82406c5c
	if (!ctx.cr6.lt) goto loc_82406C5C;
	// stb r4,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r4.u8);
loc_82406C5C:
	// lbz r10,413(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// ble cr6,0x82406c70
	if (!ctx.cr6.gt) goto loc_82406C70;
	// stb r3,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r3.u8);
loc_82406C70:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwzx r30,r5,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82406c40
	if (ctx.cr6.eq) goto loc_82406C40;
	// b 0x82406ca4
	goto loc_82406CA4;
loc_82406CA0:
	// stb r30,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r30.u8);
loc_82406CA4:
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// subf r8,r6,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r6.s64;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82406da0
	if (!ctx.cr6.eq) goto loc_82406DA0;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82406da0
	if (ctx.cr6.eq) goto loc_82406DA0;
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82406da4
	if (!ctx.cr6.eq) goto loc_82406DA4;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
loc_82406CF4:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stb r7,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r7.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82406d2c
	if (!ctx.cr6.lt) goto loc_82406D2C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// stb r4,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r4.u8);
loc_82406D2C:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82406d4c
	if (!ctx.cr6.gt) goto loc_82406D4C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82406d6c
	if (ctx.cr6.eq) goto loc_82406D6C;
loc_82406D4C:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82406d70
	if (!ctx.cr6.gt) goto loc_82406D70;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82406d70
	if (ctx.cr6.eq) goto loc_82406D70;
loc_82406D6C:
	// stb r3,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r3.u8);
loc_82406D70:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mulli r10,r7,14
	ctx.r10.s64 = ctx.r7.s64 * 14;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82406cf4
	if (ctx.cr6.eq) goto loc_82406CF4;
	// b 0x82406da4
	goto loc_82406DA4;
loc_82406DA0:
	// stb r29,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r29.u8);
loc_82406DA4:
	// lbz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mulli r10,r8,14
	ctx.r10.s64 = ctx.r8.s64 * 14;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82406880
	ctx.lr = 0x82406DCC;
	sub_82406880(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82406DD4"))) PPC_WEAK_FUNC(sub_82406DD4);
PPC_FUNC_IMPL(__imp__sub_82406DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406DD8"))) PPC_WEAK_FUNC(sub_82406DD8);
PPC_FUNC_IMPL(__imp__sub_82406DD8) {
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
	// bl 0x824064c0
	ctx.lr = 0x82406DF0;
	sub_824064C0(ctx, base);
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82406e04
	if (ctx.cr6.eq) goto loc_82406E04;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82406E04;
	sub_82183E40(ctx, base);
loc_82406E04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82406E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d08
	ctx.lr = 0x82406E2C;
	sub_823C3D08(ctx, base);
	// bl 0x821eacc8
	ctx.lr = 0x82406E30;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82406e44
	if (ctx.cr6.eq) goto loc_82406E44;
	// bl 0x821eacc8
	ctx.lr = 0x82406E3C;
	sub_821EACC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eb6b8
	ctx.lr = 0x82406E44;
	sub_821EB6B8(ctx, base);
loc_82406E44:
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// bl 0x821ebaa8
	ctx.lr = 0x82406E4C;
	sub_821EBAA8(ctx, base);
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

__attribute__((alias("__imp__sub_82406E60"))) PPC_WEAK_FUNC(sub_82406E60);
PPC_FUNC_IMPL(__imp__sub_82406E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82406E68;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c58b0
	ctx.lr = 0x82406E80;
	sub_823C58B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r5,-4544
	ctx.r3.s64 = ctx.r5.s64 + -4544;
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r4,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r28,12(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82406F5C"))) PPC_WEAK_FUNC(sub_82406F5C);
PPC_FUNC_IMPL(__imp__sub_82406F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82406F60"))) PPC_WEAK_FUNC(sub_82406F60);
PPC_FUNC_IMPL(__imp__sub_82406F60) {
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
	// li r3,10003
	ctx.r3.s64 = 10003;
	// bl 0x8208f658
	ctx.lr = 0x82406F7C;
	sub_8208F658(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82406bc0
	ctx.lr = 0x82406F90;
	sub_82406BC0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,413(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 413);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r6,412(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 412);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82406FC8"))) PPC_WEAK_FUNC(sub_82406FC8);
PPC_FUNC_IMPL(__imp__sub_82406FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82406FD0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r10,r11,-4400
	ctx.r10.s64 = ctx.r11.s64 + -4400;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r28,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r28.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x82407020;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8240702C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82407030;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82407048
	if (ctx.cr6.eq) goto loc_82407048;
	// li r3,608
	ctx.r3.s64 = 608;
	// bl 0x82183448
	ctx.lr = 0x82407044;
	sub_82183448(ctx, base);
	// b 0x82407050
	goto loc_82407050;
loc_82407048:
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x821845a0
	ctx.lr = 0x82407050;
	sub_821845A0(ctx, base);
loc_82407050:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407068
	if (ctx.cr6.eq) goto loc_82407068;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824066f0
	ctx.lr = 0x82407064;
	sub_824066F0(ctx, base);
	// b 0x8240706c
	goto loc_8240706C;
loc_82407068:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8240706C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82407074;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8240708c
	if (ctx.cr6.eq) goto loc_8240708C;
	// li r3,296
	ctx.r3.s64 = 296;
	// bl 0x82183448
	ctx.lr = 0x82407088;
	sub_82183448(ctx, base);
	// b 0x82407094
	goto loc_82407094;
loc_8240708C:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821845a0
	ctx.lr = 0x82407094;
	sub_821845A0(ctx, base);
loc_82407094:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824070a8
	if (ctx.cr6.eq) goto loc_824070A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82409178
	ctx.lr = 0x824070A4;
	sub_82409178(ctx, base);
	// b 0x824070ac
	goto loc_824070AC;
loc_824070A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824070AC:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x821837d0
	ctx.lr = 0x824070D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_824070DC"))) PPC_WEAK_FUNC(sub_824070DC);
PPC_FUNC_IMPL(__imp__sub_824070DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824070E0"))) PPC_WEAK_FUNC(sub_824070E0);
PPC_FUNC_IMPL(__imp__sub_824070E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x824070E8;
	sub_82248768(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249928
	ctx.lr = 0x824070F0;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x8218c460
	ctx.lr = 0x82407110;
	sub_8218C460(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r21,r8,57856
	ctx.r21.u64 = ctx.r8.u64 | 57856;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f30,2148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lfs f31,-4560(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4560);
	ctx.f31.f64 = double(temp.f32);
	// add r20,r7,r21
	ctx.r20.u64 = ctx.r7.u64 + ctx.r21.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82407150
	if (!ctx.cr6.eq) goto loc_82407150;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x82407154
	goto loc_82407154;
loc_82407150:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82407154:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82407418
	if (ctx.cr6.gt) goto loc_82407418;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82407418
	if (ctx.cr6.lt) goto loc_82407418;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82407170;
	sub_822AA648(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// bl 0x82405d08
	ctx.lr = 0x82407188;
	sub_82405D08(ctx, base);
	// lwzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r22,r11,-5920
	ctx.r22.s64 = ctx.r11.s64 + -5920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r5,r9,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// bl 0x821847a8
	ctx.lr = 0x824071AC;
	sub_821847A8(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x824071d4
	if (!ctx.cr6.eq) goto loc_824071D4;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8210b440
	ctx.lr = 0x824071D0;
	sub_8210B440(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_824071D4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f28,2148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824071fc
	if (!ctx.cr6.eq) goto loc_824071FC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8210b698
	ctx.lr = 0x824071F8;
	sub_8210B698(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_824071FC:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x824073ac
	if (!ctx.cr6.lt) goto loc_824073AC;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x82407218;
	sub_8218C460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824073d0
	if (!ctx.cr6.gt) goto loc_824073D0;
	// lfs f30,2148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// ble cr6,0x8240738c
	if (!ctx.cr6.gt) goto loc_8240738C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82080068
	ctx.lr = 0x82407238;
	sub_82080068(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820824b8
	ctx.lr = 0x82407240;
	sub_820824B8(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82080d68
	ctx.lr = 0x82407254;
	sub_82080D68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407260;
	sub_822AA648(ctx, base);
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82080d68
	ctx.lr = 0x8240726C;
	sub_82080D68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407278;
	sub_822AA648(ctx, base);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82407304
	if (ctx.cr6.lt) goto loc_82407304;
loc_8240728C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82405d08
	ctx.lr = 0x824072A8;
	sub_82405D08(ctx, base);
	// lbzx r9,r5,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// add r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwzx r28,r8,r22
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// bge cr6,0x824072d4
	if (!ctx.cr6.lt) goto loc_824072D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821847a8
	ctx.lr = 0x824072D0;
	sub_821847A8(ctx, base);
	// add r23,r28,r23
	ctx.r23.u64 = ctx.r28.u64 + ctx.r23.u64;
loc_824072D4:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821847a8
	ctx.lr = 0x824072F4;
	sub_821847A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8240728c
	if (!ctx.cr6.gt) goto loc_8240728C;
loc_82407304:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8210b440
	ctx.lr = 0x82407318;
	sub_8210B440(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82407330
	if (ctx.cr6.eq) goto loc_82407330;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82183e40
	ctx.lr = 0x82407330;
	sub_82183E40(ctx, base);
loc_82407330:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8210b440
	ctx.lr = 0x82407344;
	sub_8210B440(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8240735c
	if (ctx.cr6.eq) goto loc_8240735C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183e40
	ctx.lr = 0x8240735C;
	sub_82183E40(ctx, base);
loc_8240735C:
	// fadds f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fsubs f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// blt cr6,0x8240737c
	if (ctx.cr6.lt) goto loc_8240737C;
	// bne cr6,0x82407384
	if (!ctx.cr6.eq) goto loc_82407384;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82407380
	goto loc_82407380;
loc_8240737C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82407380:
	// bl 0x821830f8
	ctx.lr = 0x82407384;
	sub_821830F8(ctx, base);
loc_82407384:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821837d0
	ctx.lr = 0x8240738C;
	sub_821837D0(ctx, base);
loc_8240738C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f12,f28,f0,f13
	ctx.f12.f64 = double(float(-(ctx.f28.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fmadds f30,f31,f0,f10
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f10.f64));
	// b 0x824073d0
	goto loc_824073D0;
loc_824073AC:
	// bne cr6,0x82407418
	if (!ctx.cr6.eq) goto loc_82407418;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,-4560(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4560);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f28,f0,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,3688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_824073D0:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x824073fc
	if (!ctx.cr6.eq) goto loc_824073FC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,8(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// addi r11,r11,-7424
	ctx.r11.s64 = ctx.r11.s64 + -7424;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_824073FC:
	// stfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
loc_82407418:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249974
	ctx.lr = 0x82407424;
	sub_82249974(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82407428"))) PPC_WEAK_FUNC(sub_82407428);
PPC_FUNC_IMPL(__imp__sub_82407428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82407430;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82407508
	if (ctx.cr6.eq) goto loc_82407508;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824074ac
	if (!ctx.cr6.gt) goto loc_824074AC;
	// li r30,28
	ctx.r30.s64 = 28;
	// addi r28,r3,556
	ctx.r28.s64 = ctx.r3.s64 + 556;
loc_8240746C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8218c4b8
	ctx.lr = 0x82407478;
	sub_8218C4B8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8224b2a0
	ctx.lr = 0x8240748C;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824074ac
	if (!ctx.cr6.eq) goto loc_824074AC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240746c
	if (ctx.cr6.lt) goto loc_8240746C;
loc_824074AC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r20,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r20.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82407508
	if (ctx.cr6.eq) goto loc_82407508;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824074fc
	if (!ctx.cr6.gt) goto loc_824074FC;
	// addi r29,r31,580
	ctx.r29.s64 = ctx.r31.s64 + 580;
loc_824074D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822aa648
	ctx.lr = 0x824074E8;
	sub_822AA648(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824074d8
	if (ctx.cr6.lt) goto loc_824074D8;
loc_824074FC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r20,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r20.u32);
	// stw r20,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r20.u32);
loc_82407508:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82407510;
	sub_8218C4B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218c460
	ctx.lr = 0x8240751C;
	sub_8218C460(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c4b8
	ctx.lr = 0x82407534;
	sub_8218C4B8(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x824075a4
	if (!ctx.cr6.gt) goto loc_824075A4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824075a4
	if (!ctx.cr6.lt) goto loc_824075A4;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x8240756C;
	sub_8218C460(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r8,r3,r19
	ctx.r8.u64 = ctx.r3.u64 + ctx.r19.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x824075b4
	if (!ctx.cr6.gt) goto loc_824075B4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824075b4
	if (ctx.cr6.eq) goto loc_824075B4;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x824075a4
	if (!ctx.cr6.lt) goto loc_824075A4;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x824075A4;
	sub_8218C460(ctx, base);
loc_824075A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_824075B4:
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x82183078
	ctx.lr = 0x824075BC;
	sub_82183078(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x821837d0
	ctx.lr = 0x824075C8;
	sub_821837D0(ctx, base);
	// addi r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 1;
	// bl 0x82183850
	ctx.lr = 0x824075D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x824075e8
	if (ctx.cr6.eq) goto loc_824075E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x824075E4;
	sub_82183448(ctx, base);
	// b 0x824075f4
	goto loc_824075F4;
loc_824075E8:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x824075F4;
	sub_821845A0(ctx, base);
loc_824075F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407600;
	sub_822AA648(ctx, base);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r10,146
	ctx.r10.s64 = ctx.r10.s64 + 146;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240766c
	if (ctx.cr6.eq) goto loc_8240766C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r8,416(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r9,r10,-5920
	ctx.r9.s64 = ctx.r10.s64 + -5920;
loc_82407630:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82407658
	if (!ctx.cr6.lt) goto loc_82407658;
	// lbzx r10,r29,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r6,r29,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82407630
	if (!ctx.cr6.eq) goto loc_82407630;
loc_82407658:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8240766c
	if (!ctx.cr6.gt) goto loc_8240766C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8240766C;
	sub_821847A8(ctx, base);
loc_8240766C:
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407680;
	sub_821847A8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x8240769C;
	sub_8218C4B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824076b4
	if (!ctx.cr6.gt) goto loc_824076B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x821847a8
	ctx.lr = 0x824076B4;
	sub_821847A8(ctx, base);
loc_824076B4:
	// stbx r20,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r20.u8);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82407c0c
	if (ctx.cr6.eq) goto loc_82407C0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bne cr6,0x824076f8
	if (!ctx.cr6.eq) goto loc_824076F8;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// addi r4,r4,-7680
	ctx.r4.s64 = ctx.r4.s64 + -7680;
	// bl 0x8210b440
	ctx.lr = 0x824076F8;
	sub_8210B440(ctx, base);
loc_824076F8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82407c0c
	if (!ctx.cr6.eq) goto loc_82407C0C;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82407c0c
	if (!ctx.cr6.gt) goto loc_82407C0C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82407954
	if (ctx.cr6.eq) goto loc_82407954;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82407bcc
	if (ctx.cr6.eq) goto loc_82407BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x82407750;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d08
	ctx.lr = 0x8240775C;
	sub_82405D08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x82407768;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d58
	ctx.lr = 0x82407774;
	sub_82405D58(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82407790
	if (!ctx.cr6.gt) goto loc_82407790;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82407790:
	// bl 0x82080d68
	ctx.lr = 0x82407794;
	sub_82080D68(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x824077A0;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82405dd0
	ctx.lr = 0x824077B0;
	sub_82405DD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82080d68
	ctx.lr = 0x824077B8;
	sub_82080D68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x824077C4;
	sub_822AA648(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r27,-4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822aa648
	ctx.lr = 0x824077E4;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x824077F4;
	sub_821847A8(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// stb r20,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r20.u8);
	// bl 0x8218c4b8
	ctx.lr = 0x82407808;
	sub_8218C4B8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x8240789c
	if (ctx.cr6.gt) goto loc_8240789C;
loc_82407838:
	// lwzu r11,-4(r25)
	ea = -4 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407850;
	sub_822AA648(ctx, base);
	// subf r5,r26,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r26.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407860;
	sub_821847A8(ctx, base);
	// stbu r20,-1(r24)
	ea = -1 + ctx.r24.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r24.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x8240786C;
	sub_8218C4B8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82407838
	if (!ctx.cr6.gt) goto loc_82407838;
loc_8240789C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,416(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x824070e0
	ctx.lr = 0x824078B8;
	sub_824070E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407428
	ctx.lr = 0x824078CC;
	sub_82407428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240790c
	if (ctx.cr6.eq) goto loc_8240790C;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 + 145;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x824078EC;
	sub_822AA648(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r11,145
	ctx.r9.s64 = ctx.r11.s64 + 145;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x821847a8
	ctx.lr = 0x82407908;
	sub_821847A8(ctx, base);
	// b 0x82407910
	goto loc_82407910;
loc_8240790C:
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_82407910:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// add r4,r27,r19
	ctx.r4.u64 = ctx.r27.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x824070e0
	ctx.lr = 0x82407928;
	sub_824070E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240793c
	if (ctx.cr6.eq) goto loc_8240793C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8240793C;
	sub_82183E40(ctx, base);
loc_8240793C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82407bd8
	if (ctx.cr6.eq) goto loc_82407BD8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82407950;
	sub_82183E40(ctx, base);
	// b 0x82407bd8
	goto loc_82407BD8;
loc_82407954:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82407bcc
	if (ctx.cr6.eq) goto loc_82407BCC;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x82407978;
	sub_8218C460(ctx, base);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x824079bc
	if (ctx.cr6.lt) goto loc_824079BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824070e0
	ctx.lr = 0x82407990;
	sub_824070E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824079a4
	if (ctx.cr6.eq) goto loc_824079A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x824079A4;
	sub_82183E40(ctx, base);
loc_824079A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407428
	ctx.lr = 0x824079B8;
	sub_82407428(ctx, base);
	// b 0x82407c64
	goto loc_82407C64;
loc_824079BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x824079C4;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d08
	ctx.lr = 0x824079D0;
	sub_82405D08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x824079DC;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d58
	ctx.lr = 0x824079E8;
	sub_82405D58(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82407a04
	if (!ctx.cr6.gt) goto loc_82407A04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82407A04:
	// bl 0x82080d68
	ctx.lr = 0x82407A08;
	sub_82080D68(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c460
	ctx.lr = 0x82407A14;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82405dd0
	ctx.lr = 0x82407A24;
	sub_82405DD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82080d68
	ctx.lr = 0x82407A2C;
	sub_82080D68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407A38;
	sub_822AA648(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// lwz r27,-4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822aa648
	ctx.lr = 0x82407A54;
	sub_822AA648(ctx, base);
	// subf r26,r27,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407A68;
	sub_821847A8(ctx, base);
	// subf r11,r27,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r20,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r20.u8);
	// bl 0x8218c4b8
	ctx.lr = 0x82407A7C;
	sub_8218C4B8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82407b14
	if (ctx.cr6.gt) goto loc_82407B14;
loc_82407AA8:
	// lwzu r11,-4(r25)
	ea = -4 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407ABC;
	sub_822AA648(ctx, base);
	// subf r5,r27,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407ACC;
	sub_821847A8(ctx, base);
	// neg r26,r27
	ctx.r26.s64 = -ctx.r27.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r20,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r20.u8);
	// bl 0x8218c4b8
	ctx.lr = 0x82407AE4;
	sub_8218C4B8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82407aa8
	if (!ctx.cr6.gt) goto loc_82407AA8;
loc_82407B14:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,416(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x824070e0
	ctx.lr = 0x82407B30;
	sub_824070E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407428
	ctx.lr = 0x82407B44;
	sub_82407428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82407b84
	if (ctx.cr6.eq) goto loc_82407B84;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 + 145;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x82407B64;
	sub_822AA648(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r11,145
	ctx.r9.s64 = ctx.r11.s64 + 145;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x821847a8
	ctx.lr = 0x82407B80;
	sub_821847A8(ctx, base);
	// b 0x82407b88
	goto loc_82407B88;
loc_82407B84:
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_82407B88:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// add r4,r27,r19
	ctx.r4.u64 = ctx.r27.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x824070e0
	ctx.lr = 0x82407BA0;
	sub_824070E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82407bb4
	if (ctx.cr6.eq) goto loc_82407BB4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82407BB4;
	sub_82183E40(ctx, base);
loc_82407BB4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82407bd8
	if (ctx.cr6.eq) goto loc_82407BD8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82407BC8;
	sub_82183E40(ctx, base);
	// b 0x82407bd8
	goto loc_82407BD8;
loc_82407BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406550
	ctx.lr = 0x82407BD4;
	sub_82406550(ctx, base);
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_82407BD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82407bec
	if (ctx.cr6.eq) goto loc_82407BEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82407BEC;
	sub_82183E40(ctx, base);
loc_82407BEC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82407c64
	if (!ctx.cr6.eq) goto loc_82407C64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821837d0
	ctx.lr = 0x82407BFC;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_82407C0C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x82407C24;
	sub_822AA648(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r9,r11,146
	ctx.r9.s64 = ctx.r11.s64 + 146;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x821847a8
	ctx.lr = 0x82407C40;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82407c54
	if (ctx.cr6.eq) goto loc_82407C54;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82407C54;
	sub_82183E40(ctx, base);
loc_82407C54:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x824070e0
	ctx.lr = 0x82407C64;
	sub_824070E0(ctx, base);
loc_82407C64:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821837d0
	ctx.lr = 0x82407C6C;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82407C7C"))) PPC_WEAK_FUNC(sub_82407C7C);
PPC_FUNC_IMPL(__imp__sub_82407C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82407C80"))) PPC_WEAK_FUNC(sub_82407C80);
PPC_FUNC_IMPL(__imp__sub_82407C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82407C88;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r26.u32);
	// lwz r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82407ccc
	if (!ctx.cr6.gt) goto loc_82407CCC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82407cbc
	if (ctx.cr6.eq) goto loc_82407CBC;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r26,r5,-1
	ctx.r26.s64 = ctx.r5.s64 + -1;
	// b 0x82407cf8
	goto loc_82407CF8;
loc_82407CBC:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82407cf8
	goto loc_82407CF8;
loc_82407CCC:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x82407CE0;
	sub_8218C460(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82407cf0
	if (!ctx.cr6.eq) goto loc_82407CF0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82407CF0:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82407CF8:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d08
	ctx.lr = 0x82407D14;
	sub_82405D08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405d08
	ctx.lr = 0x82407D24;
	sub_82405D08(ctx, base);
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82407D30;
	sub_8218C4B8(ctx, base);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82183078
	ctx.lr = 0x82407D38;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x821837d0
	ctx.lr = 0x82407D44;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82407D48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82407d60
	if (ctx.cr6.eq) goto loc_82407D60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x82407D5C;
	sub_82183448(ctx, base);
	// b 0x82407d6c
	goto loc_82407D6C;
loc_82407D60:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82407D6C;
	sub_821845A0(ctx, base);
loc_82407D6C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407D7C;
	sub_821847A8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf r4,r29,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r29.s64;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82407DA0;
	sub_822AA648(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,146
	ctx.r7.s64 = ctx.r11.s64 + 146;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82407DC0;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82407dd4
	if (ctx.cr6.eq) goto loc_82407DD4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82407DD4;
	sub_82183E40(ctx, base);
loc_82407DD4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824070e0
	ctx.lr = 0x82407DE0;
	sub_824070E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82407DE8;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82407DF4"))) PPC_WEAK_FUNC(sub_82407DF4);
PPC_FUNC_IMPL(__imp__sub_82407DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82407DF8"))) PPC_WEAK_FUNC(sub_82407DF8);
PPC_FUNC_IMPL(__imp__sub_82407DF8) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82407e84
	if (!ctx.cr6.eq) goto loc_82407E84;
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82407e84
	if (!ctx.cr6.eq) goto loc_82407E84;
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82407e58
	if (ctx.cr6.eq) goto loc_82407E58;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8208f658
	ctx.lr = 0x82407E4C;
	sub_8208F658(ctx, base);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x82407e7c
	goto loc_82407E7C;
loc_82407E58:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407e98
	if (ctx.cr6.eq) goto loc_82407E98;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8208f658
	ctx.lr = 0x82407E74;
	sub_8208F658(ctx, base);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82407E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824070e0
	ctx.lr = 0x82407E84;
	sub_824070E0(ctx, base);
loc_82407E84:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_82407E98:
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

__attribute__((alias("__imp__sub_82407EB0"))) PPC_WEAK_FUNC(sub_82407EB0);
PPC_FUNC_IMPL(__imp__sub_82407EB0) {
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
	// bl 0x82407df8
	ctx.lr = 0x82407EC8;
	sub_82407DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82407f6c
	if (!ctx.cr6.eq) goto loc_82407F6C;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82407f64
	if (ctx.cr6.eq) goto loc_82407F64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82407f24
	if (ctx.cr6.eq) goto loc_82407F24;
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// rlwinm r11,r11,0,31,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0001;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407f64
	if (ctx.cr6.eq) goto loc_82407F64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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
loc_82407F24:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82407f64
	if (ctx.cr6.eq) goto loc_82407F64;
	// rlwinm r11,r11,0,13,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFE;
	// rlwinm r11,r11,0,30,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFC0003;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407f64
	if (ctx.cr6.eq) goto loc_82407F64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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
loc_82407F64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406f60
	ctx.lr = 0x82407F6C;
	sub_82406F60(ctx, base);
loc_82407F6C:
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

__attribute__((alias("__imp__sub_82407F80"))) PPC_WEAK_FUNC(sub_82407F80);
PPC_FUNC_IMPL(__imp__sub_82407F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82407F88;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82407FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82407fc0
	if (ctx.cr6.eq) goto loc_82407FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82407FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82407FC0:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82407fd0
	if (!ctx.cr6.eq) goto loc_82407FD0;
	// stw r25,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r25.u32);
loc_82407FD0:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// bl 0x821eacc8
	ctx.lr = 0x82407FD8;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82407fec
	if (ctx.cr6.eq) goto loc_82407FEC;
	// bl 0x821eacc8
	ctx.lr = 0x82407FE4;
	sub_821EACC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb6b8
	ctx.lr = 0x82407FEC;
	sub_821EB6B8(ctx, base);
loc_82407FEC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82183078
	ctx.lr = 0x82407FF8;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82408004;
	sub_821837D0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824080a8
	if (!ctx.cr6.gt) goto loc_824080A8;
	// li r30,28
	ctx.r30.s64 = 28;
	// addi r28,r31,556
	ctx.r28.s64 = ctx.r31.s64 + 556;
loc_82408024:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82183850
	ctx.lr = 0x82408030;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82408048
	if (ctx.cr6.eq) goto loc_82408048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82408044;
	sub_82183448(ctx, base);
	// b 0x82408054
	goto loc_82408054;
loc_82408048:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82408054;
	sub_821845A0(ctx, base);
loc_82408054:
	// stwx r3,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822aa648
	ctx.lr = 0x82408064;
	sub_822AA648(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82408090
	if (ctx.cr6.eq) goto loc_82408090;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8218c4b8
	ctx.lr = 0x8240807C;
	sub_8218C4B8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x821847a8
	ctx.lr = 0x82408090;
	sub_821847A8(ctx, base);
loc_82408090:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82408024
	if (ctx.cr6.lt) goto loc_82408024;
loc_824080A8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824080e0
	if (!ctx.cr6.eq) goto loc_824080E0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// ori r7,r10,58072
	ctx.r7.u64 = ctx.r10.u64 | 58072;
	// ori r6,r9,58092
	ctx.r6.u64 = ctx.r9.u64 | 58092;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r26,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r26.u32);
loc_824080E0:
	// stw r26,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r26.u32);
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x8218c460
	ctx.lr = 0x824080EC;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824070e0
	ctx.lr = 0x824080F8;
	sub_824070E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r8,r11,-6136
	ctx.r8.s64 = ctx.r11.s64 + -6136;
loc_82408104:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82408110:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82408250
	if (ctx.cr6.eq) goto loc_82408250;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x82408110
	if (ctx.cr6.lt) goto loc_82408110;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82408134:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82408154
	if (ctx.cr6.lt) goto loc_82408154;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r26.u32);
loc_82408154:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82408174
	if (ctx.cr6.lt) goto loc_82408174;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_82408174:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,43
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 43, ctx.xer);
	// blt cr6,0x82408104
	if (ctx.cr6.lt) goto loc_82408104;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r26.u8);
	// stb r26,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r26.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r26,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r26.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r8,412(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// lbz r11,413(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 413);
	// lbz r4,412(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82406bc0
	ctx.lr = 0x824081C0;
	sub_82406BC0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_824081C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824069a8
	ctx.lr = 0x824081D0;
	sub_824069A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x824081c4
	if (ctx.cr6.lt) goto loc_824081C4;
	// li r9,738
	ctx.r9.s64 = 738;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
loc_824081F4:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r6,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r6.u8);
	// blt cr6,0x824081f4
	if (ctx.cr6.lt) goto loc_824081F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824062a8
	ctx.lr = 0x82408228;
	sub_824062A8(ctx, base);
	// bl 0x821eacc8
	ctx.lr = 0x8240822C;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408264
	if (ctx.cr6.eq) goto loc_82408264;
	// bl 0x821eacc8
	ctx.lr = 0x82408238;
	sub_821EACC8(ctx, base);
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240824C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82408268
	goto loc_82408268;
loc_82408250:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82408134
	goto loc_82408134;
loc_82408264:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82408268:
	// stw r3,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ebaa8
	ctx.lr = 0x82408274;
	sub_821EBAA8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x8240827C;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82408284"))) PPC_WEAK_FUNC(sub_82408284);
PPC_FUNC_IMPL(__imp__sub_82408284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408288"))) PPC_WEAK_FUNC(sub_82408288);
PPC_FUNC_IMPL(__imp__sub_82408288) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// beq cr6,0x824082dc
	if (ctx.cr6.eq) goto loc_824082DC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82408304
	if (!ctx.cr6.eq) goto loc_82408304;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x824070e0
	ctx.lr = 0x824082C8;
	sub_824070E0(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82408304
	if (!ctx.cr6.eq) goto loc_82408304;
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x824082fc
	goto loc_824082FC;
loc_824082DC:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x824070e0
	ctx.lr = 0x824082EC;
	sub_824070E0(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82408304
	if (!ctx.cr6.eq) goto loc_82408304;
	// li r11,42
	ctx.r11.s64 = 42;
loc_824082FC:
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
loc_82408304:
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

__attribute__((alias("__imp__sub_8240831C"))) PPC_WEAK_FUNC(sub_8240831C);
PPC_FUNC_IMPL(__imp__sub_8240831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408320"))) PPC_WEAK_FUNC(sub_82408320);
PPC_FUNC_IMPL(__imp__sub_82408320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82408328;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82408348
	if (ctx.cr6.eq) goto loc_82408348;
	// stw r28,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r28.u32);
loc_82408348:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824083ac
	if (ctx.cr6.eq) goto loc_824083AC;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824083ac
	if (!ctx.cr6.eq) goto loc_824083AC;
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x82408370;
	sub_8208F658(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r29,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r29.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x824070e0
	ctx.lr = 0x82408390;
	sub_824070E0(ctx, base);
	// lwz r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824083a8
	if (!ctx.cr6.eq) goto loc_824083A8;
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_824083A8:
	// stw r29,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r29.u32);
loc_824083AC:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824083c0
	if (ctx.cr6.eq) goto loc_824083C0;
	// stw r28,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r28.u32);
loc_824083C0:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82408420
	if (ctx.cr6.eq) goto loc_82408420;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82408420
	if (!ctx.cr6.eq) goto loc_82408420;
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x824083E4;
	sub_8208F658(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r29,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r29.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x824070e0
	ctx.lr = 0x82408404;
	sub_824070E0(ctx, base);
	// lwz r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8240841c
	if (!ctx.cr6.eq) goto loc_8240841C;
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_8240841C:
	// stw r29,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r29.u32);
loc_82408420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82408428"))) PPC_WEAK_FUNC(sub_82408428);
PPC_FUNC_IMPL(__imp__sub_82408428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82408430;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// li r3,10000
	ctx.r3.s64 = 10000;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// bl 0x8208f658
	ctx.lr = 0x82408458;
	sub_8208F658(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82408484
	if (ctx.cr6.eq) goto loc_82408484;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408480
	if (ctx.cr6.eq) goto loc_82408480;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82408480;
	sub_82183E40(ctx, base);
loc_82408480:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82408484:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r27,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r27.u32);
	// bne cr6,0x824084bc
	if (!ctx.cr6.eq) goto loc_824084BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,4393
	ctx.r10.s64 = ctx.r11.s64 + 4393;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x824084c8
	goto loc_824084C8;
loc_824084BC:
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r27,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r27.u32);
loc_824084C8:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824084dc
	if (ctx.cr6.eq) goto loc_824084DC;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_824084DC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82407f80
	ctx.lr = 0x82408528;
	sub_82407F80(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823c5678
	ctx.lr = 0x82408534;
	sub_823C5678(ctx, base);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82183078
	ctx.lr = 0x8240853C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82408548;
	sub_821837D0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824085b0
	if (!ctx.cr6.gt) goto loc_824085B0;
loc_82408558:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240859c
	if (!ctx.cr6.eq) goto loc_8240859C;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82183850
	ctx.lr = 0x8240856C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82408584
	if (ctx.cr6.eq) goto loc_82408584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82408580;
	sub_82183448(ctx, base);
	// b 0x82408590
	goto loc_82408590;
loc_82408584:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82408590;
	sub_821845A0(ctx, base);
loc_82408590:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x822aa648
	ctx.lr = 0x8240859C;
	sub_822AA648(ctx, base);
loc_8240859C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82408558
	if (ctx.cr6.lt) goto loc_82408558;
loc_824085B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r27,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r27.u32);
	// stw r27,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r27.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r9.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824062a8
	ctx.lr = 0x824085D0;
	sub_824062A8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ebaa8
	ctx.lr = 0x824085D8;
	sub_821EBAA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x824085E0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_824085E8"))) PPC_WEAK_FUNC(sub_824085E8);
PPC_FUNC_IMPL(__imp__sub_824085E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824085F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10001
	ctx.r3.s64 = 10001;
	// bl 0x8208f658
	ctx.lr = 0x82408600;
	sub_8208F658(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240861c
	if (!ctx.cr6.eq) goto loc_8240861C;
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_8240861C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407c80
	ctx.lr = 0x82408628;
	sub_82407C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824086e0
	if (!ctx.cr6.eq) goto loc_824086E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x824070e0
	ctx.lr = 0x82408648;
	sub_824070E0(ctx, base);
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r29,39
	ctx.r29.s64 = 39;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82408660
	if (!ctx.cr6.eq) goto loc_82408660;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
loc_82408660:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x82408674;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824070e0
	ctx.lr = 0x82408680;
	sub_824070E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407c80
	ctx.lr = 0x8240868C;
	sub_82407C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824086e0
	if (ctx.cr6.eq) goto loc_824086E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x824070e0
	ctx.lr = 0x824086AC;
	sub_824070E0(ctx, base);
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824086c0
	if (!ctx.cr6.eq) goto loc_824086C0;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
loc_824086C0:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8218c460
	ctx.lr = 0x824086D4;
	sub_8218C460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824070e0
	ctx.lr = 0x824086E0;
	sub_824070E0(ctx, base);
loc_824086E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_824086E8"))) PPC_WEAK_FUNC(sub_824086E8);
PPC_FUNC_IMPL(__imp__sub_824086E8) {
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
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240870c
	if (!ctx.cr6.eq) goto loc_8240870C;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
loc_8240870C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,3660
	ctx.r4.s64 = ctx.r11.s64 + 3660;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82407428
	ctx.lr = 0x82408720;
	sub_82407428(ctx, base);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x82408728;
	sub_8208F658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408738"))) PPC_WEAK_FUNC(sub_82408738);
PPC_FUNC_IMPL(__imp__sub_82408738) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240879c
	if (ctx.cr6.eq) goto loc_8240879C;
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240877c
	if (ctx.cr6.eq) goto loc_8240877C;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
loc_8240877C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824087a0
	if (!ctx.cr6.gt) goto loc_824087A0;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824085e8
	ctx.lr = 0x82408798;
	sub_824085E8(ctx, base);
	// b 0x824087a0
	goto loc_824087A0;
loc_8240879C:
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
loc_824087A0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824087fc
	if (ctx.cr6.eq) goto loc_824087FC;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,404(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// cmpwi cr6,r9,41
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 41, ctx.xer);
	// bne cr6,0x824087fc
	if (!ctx.cr6.eq) goto loc_824087FC;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824087dc
	if (ctx.cr6.eq) goto loc_824087DC;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_824087DC:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82408800
	if (!ctx.cr6.gt) goto loc_82408800;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824085e8
	ctx.lr = 0x824087F8;
	sub_824085E8(ctx, base);
	// b 0x82408800
	goto loc_82408800;
loc_824087FC:
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
loc_82408800:
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

__attribute__((alias("__imp__sub_82408818"))) PPC_WEAK_FUNC(sub_82408818);
PPC_FUNC_IMPL(__imp__sub_82408818) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82405a40
	ctx.lr = 0x82408838;
	sub_82405A40(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x8240886c
	if (ctx.cr6.eq) goto loc_8240886C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82408858;
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
loc_8240886C:
	// bl 0x824085e8
	ctx.lr = 0x82408870;
	sub_824085E8(ctx, base);
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

__attribute__((alias("__imp__sub_82408884"))) PPC_WEAK_FUNC(sub_82408884);
PPC_FUNC_IMPL(__imp__sub_82408884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408888"))) PPC_WEAK_FUNC(sub_82408888);
PPC_FUNC_IMPL(__imp__sub_82408888) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824088b8
	if (!ctx.cr6.eq) goto loc_824088B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
loc_824088B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,3660
	ctx.r4.s64 = ctx.r11.s64 + 3660;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82407428
	ctx.lr = 0x824088CC;
	sub_82407428(ctx, base);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x824088D4;
	sub_8208F658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824088E4"))) PPC_WEAK_FUNC(sub_824088E4);
PPC_FUNC_IMPL(__imp__sub_824088E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824088E8"))) PPC_WEAK_FUNC(sub_824088E8);
PPC_FUNC_IMPL(__imp__sub_824088E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x824088F0;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82405c98
	ctx.lr = 0x8240891C;
	sub_82405C98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82408960;
	sub_822AA648(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r8,-5920
	ctx.r11.s64 = ctx.r8.s64 + -5920;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// rlwinm r10,r7,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82408428
	ctx.lr = 0x824089C4;
	sub_82408428(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_824089CC"))) PPC_WEAK_FUNC(sub_824089CC);
PPC_FUNC_IMPL(__imp__sub_824089CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824089D0"))) PPC_WEAK_FUNC(sub_824089D0);
PPC_FUNC_IMPL(__imp__sub_824089D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824089D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82408a28
	if (!ctx.cr6.eq) goto loc_82408A28;
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x8218c460
	ctx.lr = 0x82408A10;
	sub_8218C460(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r3.s64 - ctx.r8.s64;
	// adde r28,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82408A28:
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// bgt cr6,0x82408aac
	if (ctx.cr6.gt) goto loc_82408AAC;
	// beq cr6,0x82408a9c
	if (ctx.cr6.eq) goto loc_82408A9C;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// beq cr6,0x82408a90
	if (ctx.cr6.eq) goto loc_82408A90;
	// cmpwi cr6,r30,39
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 39, ctx.xer);
	// bne cr6,0x82408abc
	if (!ctx.cr6.eq) goto loc_82408ABC;
	// stw r29,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x824070e0
	ctx.lr = 0x82408A5C;
	sub_824070E0(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82408a74
	if (!ctx.cr6.eq) goto loc_82408A74;
	// li r11,39
	ctx.r11.s64 = 39;
loc_82408A6C:
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_82408A74:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,10004
	ctx.r3.s64 = ctx.r11.s64 + 10004;
	// bl 0x8208f658
	ctx.lr = 0x82408A88;
	sub_8208F658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82408A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405fa0
	ctx.lr = 0x82408A98;
	sub_82405FA0(ctx, base);
	// b 0x82408a74
	goto loc_82408A74;
loc_82408A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824086e8
	ctx.lr = 0x82408AA4;
	sub_824086E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82408AAC:
	// cmpwi cr6,r30,41
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 41, ctx.xer);
	// beq cr6,0x82408b34
	if (ctx.cr6.eq) goto loc_82408B34;
	// cmpwi cr6,r30,42
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 42, ctx.xer);
	// beq cr6,0x82408b08
	if (ctx.cr6.eq) goto loc_82408B08;
loc_82408ABC:
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82408ad0
	if (!ctx.cr6.eq) goto loc_82408AD0;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
loc_82408AD0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-5128
	ctx.r11.s64 = ctx.r11.s64 + -5128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-168
	ctx.r8.s64 = ctx.r11.s64 + -168;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82407428
	ctx.lr = 0x82408B04;
	sub_82407428(ctx, base);
	// b 0x82408a74
	goto loc_82408A74;
loc_82408B08:
	// stw r29,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x824070e0
	ctx.lr = 0x82408B20;
	sub_824070E0(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82408a74
	if (!ctx.cr6.eq) goto loc_82408A74;
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x82408a6c
	goto loc_82408A6C;
loc_82408B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824085e8
	ctx.lr = 0x82408B3C;
	sub_824085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82408B44"))) PPC_WEAK_FUNC(sub_82408B44);
PPC_FUNC_IMPL(__imp__sub_82408B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408B48"))) PPC_WEAK_FUNC(sub_82408B48);
PPC_FUNC_IMPL(__imp__sub_82408B48) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82408738
	ctx.lr = 0x82408B6C;
	sub_82408738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82406398
	ctx.lr = 0x82408B74;
	sub_82406398(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82408ba4
	if (!ctx.cr6.eq) goto loc_82408BA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823c32a0
	ctx.lr = 0x82408B90;
	sub_823C32A0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,58324
	ctx.r9.u64 = ctx.r10.u64 | 58324;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
loc_82408BA4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82408320
	ctx.lr = 0x82408BB0;
	sub_82408320(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r7,404(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-6136
	ctx.r8.s64 = ctx.r10.s64 + -6136;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82408BC8:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82408bec
	if (ctx.cr6.eq) goto loc_82408BEC;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,840
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 840, ctx.xer);
	// blt cr6,0x82408bc8
	if (ctx.cr6.lt) goto loc_82408BC8;
	// b 0x82408bfc
	goto loc_82408BFC;
loc_82408BEC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82408BFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823c32a0
	ctx.lr = 0x82408C0C;
	sub_823C32A0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,212(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 212, temp.u32);
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

__attribute__((alias("__imp__sub_82408C38"))) PPC_WEAK_FUNC(sub_82408C38);
PPC_FUNC_IMPL(__imp__sub_82408C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,404(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// b 0x824089d0
	sub_824089D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82408C48"))) PPC_WEAK_FUNC(sub_82408C48);
PPC_FUNC_IMPL(__imp__sub_82408C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82408C5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256e38
	ctx.lr = 0x82408C6C;
	sub_82256E38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82408c80
	if (!ctx.cr6.eq) goto loc_82408C80;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82408ca4
	if (ctx.cr6.eq) goto loc_82408CA4;
loc_82408C80:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82408c5c
	if (ctx.cr6.lt) goto loc_82408C5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82408CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408CBC"))) PPC_WEAK_FUNC(sub_82408CBC);
PPC_FUNC_IMPL(__imp__sub_82408CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408CC0"))) PPC_WEAK_FUNC(sub_82408CC0);
PPC_FUNC_IMPL(__imp__sub_82408CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r4.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82408e14
	if (ctx.cr6.eq) goto loc_82408E14;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bne cr6,0x82408cf8
	if (!ctx.cr6.eq) goto loc_82408CF8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-4300
	ctx.r4.s64 = ctx.r11.s64 + -4300;
	// b 0x82408e04
	goto loc_82408E04;
loc_82408CF8:
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82408d30
	if (ctx.cr6.eq) goto loc_82408D30;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82408d10
	if (ctx.cr6.lt) goto loc_82408D10;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// ble cr6,0x82408d30
	if (!ctx.cr6.gt) goto loc_82408D30;
loc_82408D10:
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// blt cr6,0x82408d20
	if (ctx.cr6.lt) goto loc_82408D20;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// ble cr6,0x82408d30
	if (!ctx.cr6.gt) goto loc_82408D30;
loc_82408D20:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x82408e14
	if (ctx.cr6.lt) goto loc_82408E14;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bgt cr6,0x82408e14
	if (ctx.cr6.gt) goto loc_82408E14;
loc_82408D30:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82408d78
	if (ctx.cr6.lt) goto loc_82408D78;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82408d78
	if (ctx.cr6.gt) goto loc_82408D78;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82408d60
	if (ctx.cr6.eq) goto loc_82408D60;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82408d6c
	if (ctx.cr6.eq) goto loc_82408D6C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82408dbc
	if (!ctx.cr6.eq) goto loc_82408DBC;
loc_82408D60:
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82408dbc
	if (ctx.cr6.eq) goto loc_82408DBC;
loc_82408D6C:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// b 0x82408db8
	goto loc_82408DB8;
loc_82408D78:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82408dbc
	if (ctx.cr6.lt) goto loc_82408DBC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x82408dbc
	if (ctx.cr6.gt) goto loc_82408DBC;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82408da8
	if (!ctx.cr6.eq) goto loc_82408DA8;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82408db4
	if (ctx.cr6.eq) goto loc_82408DB4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82408dbc
	if (ctx.cr6.eq) goto loc_82408DBC;
loc_82408DA8:
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82408dbc
	if (ctx.cr6.eq) goto loc_82408DBC;
loc_82408DB4:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_82408DB8:
	// sth r11,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r11.u16);
loc_82408DBC:
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,142
	ctx.r5.s64 = ctx.r1.s64 + 142;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82257058
	ctx.lr = 0x82408DE4;
	sub_82257058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82408e14
	if (!ctx.cr6.gt) goto loc_82408E14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405be8
	ctx.lr = 0x82408DF8;
	sub_82405BE8(ctx, base);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x82408E00;
	sub_8208F658(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82408E04:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407428
	ctx.lr = 0x82408E14;
	sub_82407428(ctx, base);
loc_82408E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82408E28"))) PPC_WEAK_FUNC(sub_82408E28);
PPC_FUNC_IMPL(__imp__sub_82408E28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4296
	ctx.r10.s64 = ctx.r11.s64 + -4296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82405c70
	ctx.lr = 0x82408E54;
	sub_82405C70(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82408e70
	if (ctx.cr6.eq) goto loc_82408E70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82408E6C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82408E70:
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

__attribute__((alias("__imp__sub_82408E88"))) PPC_WEAK_FUNC(sub_82408E88);
PPC_FUNC_IMPL(__imp__sub_82408E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82408E90;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82408EA4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256f18
	ctx.lr = 0x82408EB4;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82408f28
	if (!ctx.cr6.eq) goto loc_82408F28;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82408EC0:
	// bl 0x82408c48
	ctx.lr = 0x82408EC4;
	sub_82408C48(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82408f10
	if (ctx.cr6.eq) goto loc_82408F10;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82408ED0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256f18
	ctx.lr = 0x82408EE0;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82408f04
	if (!ctx.cr6.eq) goto loc_82408F04;
loc_82408EE8:
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256f18
	ctx.lr = 0x82408EFC;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408ee8
	if (ctx.cr6.eq) goto loc_82408EE8;
loc_82408F04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82408ed0
	if (ctx.cr6.lt) goto loc_82408ED0;
loc_82408F10:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256f18
	ctx.lr = 0x82408F20;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408ec0
	if (ctx.cr6.eq) goto loc_82408EC0;
loc_82408F28:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82408ea4
	if (ctx.cr6.lt) goto loc_82408EA4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82408F3C"))) PPC_WEAK_FUNC(sub_82408F3C);
PPC_FUNC_IMPL(__imp__sub_82408F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82408F40"))) PPC_WEAK_FUNC(sub_82408F40);
PPC_FUNC_IMPL(__imp__sub_82408F40) {
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
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824090f8
	if (!ctx.cr6.eq) goto loc_824090F8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824090f8
	if (ctx.cr6.eq) goto loc_824090F8;
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82408f94
	if (ctx.cr6.eq) goto loc_82408F94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82408F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824090f8
	goto loc_824090F8;
loc_82408F94:
	// bl 0x82408c48
	ctx.lr = 0x82408F98;
	sub_82408C48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824090f8
	if (ctx.cr6.eq) goto loc_824090F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82256f18
	ctx.lr = 0x82408FB0;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824090f8
	if (!ctx.cr6.eq) goto loc_824090F8;
loc_82408FB8:
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824090c4
	if (ctx.cr6.eq) goto loc_824090C4;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8240903c
	if (ctx.cr6.gt) goto loc_8240903C;
	// beq cr6,0x8240902c
	if (ctx.cr6.eq) goto loc_8240902C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x82409014
	if (ctx.cr6.gt) goto loc_82409014;
	// beq cr6,0x82409004
	if (ctx.cr6.eq) goto loc_82409004;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8240901c
	if (ctx.cr6.eq) goto loc_8240901C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x824090d0
	if (!ctx.cr6.eq) goto loc_824090D0;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824085e8
	ctx.lr = 0x82409000;
	sub_824085E8(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_82409004:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82405fa0
	ctx.lr = 0x82409010;
	sub_82405FA0(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_82409014:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x824090d0
	if (!ctx.cr6.eq) goto loc_824090D0;
loc_8240901C:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82405aa0
	ctx.lr = 0x82409028;
	sub_82405AA0(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_8240902C:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824086e8
	ctx.lr = 0x82409038;
	sub_824086E8(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_8240903C:
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x824090d0
	if (ctx.cr6.gt) goto loc_824090D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82409094
	// bdzf 4*cr6+eq,0x82409078
	// bne cr6,0x824090ac
	if (!ctx.cr6.eq) goto loc_824090AC;
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x82409064;
	sub_8208F658(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82408288
	ctx.lr = 0x82409074;
	sub_82408288(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_82409078:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82408288
	ctx.lr = 0x82409088;
	sub_82408288(ctx, base);
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x82409090;
	sub_8208F658(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_82409094:
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x8240909C;
	sub_8208F658(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8209eda0
	ctx.lr = 0x824090A8;
	sub_8209EDA0(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_824090AC:
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x824090B4;
	sub_8208F658(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8209eda0
	ctx.lr = 0x824090C0;
	sub_8209EDA0(ctx, base);
	// b 0x824090e0
	goto loc_824090E0;
loc_824090C4:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824090e0
	if (ctx.cr6.eq) goto loc_824090E0;
loc_824090D0:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82408cc0
	ctx.lr = 0x824090E0;
	sub_82408CC0(ctx, base);
loc_824090E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256f18
	ctx.lr = 0x824090F0;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408fb8
	if (ctx.cr6.eq) goto loc_82408FB8;
loc_824090F8:
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

__attribute__((alias("__imp__sub_82409110"))) PPC_WEAK_FUNC(sub_82409110);
PPC_FUNC_IMPL(__imp__sub_82409110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82409160
	if (!ctx.cr6.eq) goto loc_82409160;
	// bl 0x82408c48
	ctx.lr = 0x82409130;
	sub_82408C48(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82409160
	if (ctx.cr6.eq) goto loc_82409160;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8240913C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256f18
	ctx.lr = 0x8240914C;
	sub_82256F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82409160
	if (!ctx.cr6.eq) goto loc_82409160;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8240913c
	if (ctx.cr6.lt) goto loc_8240913C;
loc_82409160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409174"))) PPC_WEAK_FUNC(sub_82409174);
PPC_FUNC_IMPL(__imp__sub_82409174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409178"))) PPC_WEAK_FUNC(sub_82409178);
PPC_FUNC_IMPL(__imp__sub_82409178) {
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
	// bl 0x82406e60
	ctx.lr = 0x82409190;
	sub_82406E60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4296
	ctx.r9.s64 = ctx.r11.s64 + -4296;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_824091BC"))) PPC_WEAK_FUNC(sub_824091BC);
PPC_FUNC_IMPL(__imp__sub_824091BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824091C0"))) PPC_WEAK_FUNC(sub_824091C0);
PPC_FUNC_IMPL(__imp__sub_824091C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82409204
	if (!ctx.cr6.eq) goto loc_82409204;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240920c
	if (!ctx.cr6.eq) goto loc_8240920C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82409214
	if (!ctx.cr6.eq) goto loc_82409214;
loc_824091EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824091F0:
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
loc_82409204:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82409214
	if (ctx.cr6.eq) goto loc_82409214;
loc_8240920C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8240922c
	if (!ctx.cr6.eq) goto loc_8240922C;
loc_82409214:
	// bl 0x8224da90
	ctx.lr = 0x82409218;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409224;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824091f0
	goto loc_824091F0;
loc_8240922C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82409240
	if (!ctx.cr6.eq) goto loc_82409240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x824091ec
	goto loc_824091EC;
loc_82409240:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82409268
	if (!ctx.cr6.eq) goto loc_82409268;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8224da90
	ctx.lr = 0x82409254;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82409258:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409260;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824091f0
	goto loc_824091F0;
loc_82409268:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x824092a0
	if (!ctx.cr6.eq) goto loc_824092A0;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82409280:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x824092d4
	if (ctx.cr0.eq) goto loc_824092D4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82409280
	if (!ctx.cr0.eq) goto loc_82409280;
	// b 0x824092d4
	goto loc_824092D4;
loc_824092A0:
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_824092A4:
	// lbzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq 0x824092c8
	if (ctx.cr0.eq) goto loc_824092C8;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824092c8
	if (ctx.cr0.eq) goto loc_824092C8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824092a4
	if (!ctx.cr0.eq) goto loc_824092A4;
loc_824092C8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824092d4
	if (!ctx.cr6.eq) goto loc_824092D4;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
loc_824092D4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824091ec
	if (!ctx.cr6.eq) goto loc_824091EC;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x824092f4
	if (!ctx.cr6.eq) goto loc_824092F4;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// b 0x824091f0
	goto loc_824091F0;
loc_824092F4:
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// bl 0x8224da90
	ctx.lr = 0x824092FC;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82409258
	goto loc_82409258;
}

__attribute__((alias("__imp__sub_82409304"))) PPC_WEAK_FUNC(sub_82409304);
PPC_FUNC_IMPL(__imp__sub_82409304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409308"))) PPC_WEAK_FUNC(sub_82409308);
PPC_FUNC_IMPL(__imp__sub_82409308) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240932c
	if (ctx.cr6.eq) goto loc_8240932C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82409344
	if (!ctx.cr6.eq) goto loc_82409344;
loc_8240932C:
	// bl 0x8224da90
	ctx.lr = 0x82409330;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240933C;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824093dc
	goto loc_824093DC;
loc_82409344:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82409358
	if (!ctx.cr6.eq) goto loc_82409358;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x8240932c
	goto loc_8240932C;
loc_82409358:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240935C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82409374
	if (ctx.cr0.eq) goto loc_82409374;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8240935c
	if (!ctx.cr0.eq) goto loc_8240935C;
loc_82409374:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240939c
	if (!ctx.cr6.eq) goto loc_8240939C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8224da90
	ctx.lr = 0x82409388;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_8240938C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409394;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824093dc
	goto loc_824093DC;
loc_8240939C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_824093A0:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x824093bc
	if (ctx.cr0.eq) goto loc_824093BC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824093a0
	if (!ctx.cr0.eq) goto loc_824093A0;
loc_824093BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824093d8
	if (!ctx.cr6.eq) goto loc_824093D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8224da90
	ctx.lr = 0x824093D0;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x8240938c
	goto loc_8240938C;
loc_824093D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824093DC:
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

__attribute__((alias("__imp__sub_824093F0"))) PPC_WEAK_FUNC(sub_824093F0);
PPC_FUNC_IMPL(__imp__sub_824093F0) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82409430
	if (!ctx.cr6.eq) goto loc_82409430;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82409438
	if (!ctx.cr6.eq) goto loc_82409438;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82409440
	if (!ctx.cr6.eq) goto loc_82409440;
loc_82409418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240941C:
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
loc_82409430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82409440
	if (ctx.cr6.eq) goto loc_82409440;
loc_82409438:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82409458
	if (!ctx.cr6.eq) goto loc_82409458;
loc_82409440:
	// bl 0x8224da90
	ctx.lr = 0x82409444;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409450;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240941c
	goto loc_8240941C;
loc_82409458:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82409474
	if (ctx.cr6.eq) goto loc_82409474;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82409474
	if (!ctx.cr6.eq) goto loc_82409474;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82409440
	goto loc_82409440;
loc_82409474:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8240947C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82409494
	if (ctx.cr0.eq) goto loc_82409494;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8240947c
	if (!ctx.cr0.eq) goto loc_8240947C;
loc_82409494:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824094bc
	if (!ctx.cr6.eq) goto loc_824094BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8224da90
	ctx.lr = 0x824094A8;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_824094AC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x824094B4;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8240941c
	goto loc_8240941C;
loc_824094BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x824094ec
	if (!ctx.cr6.eq) goto loc_824094EC;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_824094CC:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x82409528
	if (ctx.cr0.eq) goto loc_82409528;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824094cc
	if (!ctx.cr0.eq) goto loc_824094CC;
	// b 0x82409528
	goto loc_82409528;
loc_824094EC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82409524
	if (ctx.cr6.eq) goto loc_82409524;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_824094F8:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x8240951c
	if (ctx.cr0.eq) goto loc_8240951C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8240951c
	if (ctx.cr0.eq) goto loc_8240951C;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824094f8
	if (!ctx.cr0.eq) goto loc_824094F8;
loc_8240951C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82409528
	if (!ctx.cr6.eq) goto loc_82409528;
loc_82409524:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82409528:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82409418
	if (!ctx.cr6.eq) goto loc_82409418;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82409548
	if (!ctx.cr6.eq) goto loc_82409548;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// b 0x8240941c
	goto loc_8240941C;
loc_82409548:
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// bl 0x8224da90
	ctx.lr = 0x82409550;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x824094ac
	goto loc_824094AC;
}

__attribute__((alias("__imp__sub_82409558"))) PPC_WEAK_FUNC(sub_82409558);
PPC_FUNC_IMPL(__imp__sub_82409558) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240955C"))) PPC_WEAK_FUNC(sub_8240955C);
PPC_FUNC_IMPL(__imp__sub_8240955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409560"))) PPC_WEAK_FUNC(sub_82409560);
PPC_FUNC_IMPL(__imp__sub_82409560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8241eb1c
	ctx.lr = 0x82409578;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409588"))) PPC_WEAK_FUNC(sub_82409588);
PPC_FUNC_IMPL(__imp__sub_82409588) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240958C"))) PPC_WEAK_FUNC(sub_8240958C);
PPC_FUNC_IMPL(__imp__sub_8240958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409590"))) PPC_WEAK_FUNC(sub_82409590);
PPC_FUNC_IMPL(__imp__sub_82409590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r0,312(r3)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr1,r0,0
	ctx.cr1.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x824095bc
	if (!ctx.cr0.eq) goto loc_824095BC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824095BC:
	// bne cr1,0x8240987c
	if (!ctx.cr1.eq) goto loc_8240987C;
	// lwz r3,308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// bl 0x8240ae20
	ctx.lr = 0x824095CC;
	sub_8240AE20(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,308(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,304(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtlr r5
	ctx.lr = ctx.r5.u64;
	// ld r1,144(r7)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	ctx.cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r4.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r4.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_8240987C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8240ae20
	ctx.lr = 0x82409888;
	sub_8240AE20(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x8241eb1c
	ctx.lr = 0x82409894;
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r0
	ctx.lr = ctx.r0.u64;
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824098A4"))) PPC_WEAK_FUNC(sub_824098A4);
PPC_FUNC_IMPL(__imp__sub_824098A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824098A8"))) PPC_WEAK_FUNC(sub_824098A8);
PPC_FUNC_IMPL(__imp__sub_824098A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824098AC"))) PPC_WEAK_FUNC(sub_824098AC);
PPC_FUNC_IMPL(__imp__sub_824098AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824098B0"))) PPC_WEAK_FUNC(sub_824098B0);
PPC_FUNC_IMPL(__imp__sub_824098B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r4,-32177
	ctx.r4.s64 = -2108751872;
	// lwz r0,26560(r4)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26560);
	// cmpwi r0,0
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bnectr 
	if (!ctx.cr0.eq) {
		PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
		return;
	}
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// stfd f14,0(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f14.u64);
	// stfd f15,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f15.u64);
	// stfd f16,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.f16.u64);
	// stfd f17,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f17.u64);
	// stfd f18,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f18.u64);
	// stfd f19,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f19.u64);
	// stfd f20,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f20.u64);
	// stfd f21,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.f21.u64);
	// stfd f22,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.f22.u64);
	// stfd f23,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.f23.u64);
	// stfd f24,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.f24.u64);
	// stfd f25,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.f25.u64);
	// stfd f26,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.f26.u64);
	// stfd f27,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.f27.u64);
	// stfd f28,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.f28.u64);
	// stfd f29,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.f29.u64);
	// stfd f30,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.f30.u64);
	// stfd f31,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.f31.u64);
	// std r13,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r13.u64);
	// std r14,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r14.u64);
	// std r15,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r15.u64);
	// std r16,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r16.u64);
	// std r17,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r17.u64);
	// std r18,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r18.u64);
	// std r19,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r19.u64);
	// std r20,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r20.u64);
	// std r21,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r21.u64);
	// std r22,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, ctx.r22.u64);
	// std r23,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r23.u64);
	// std r24,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r24.u64);
	// std r25,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r25.u64);
	// std r26,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r26.u64);
	// std r27,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r27.u64);
	// std r28,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r28.u64);
	// std r29,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, ctx.r29.u64);
	// std r30,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r30.u64);
	// std r31,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r31.u64);
	// li r5,320
	ctx.r5.s64 = 320;
	// stvlx128 v64,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// li r5,336
	ctx.r5.s64 = 336;
	// stvlx128 v65,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r5,352
	ctx.r5.s64 = 352;
	// stvlx128 v66,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v66.u8[15 - i]);
	// li r5,368
	ctx.r5.s64 = 368;
	// stvlx128 v67,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v67.u8[15 - i]);
	// li r5,384
	ctx.r5.s64 = 384;
	// stvlx128 v68,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v68.u8[15 - i]);
	// li r5,400
	ctx.r5.s64 = 400;
	// stvlx128 v69,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v69.u8[15 - i]);
	// li r5,416
	ctx.r5.s64 = 416;
	// stvlx128 v70,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v70.u8[15 - i]);
	// li r5,432
	ctx.r5.s64 = 432;
	// stvlx128 v71,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v71.u8[15 - i]);
	// li r5,448
	ctx.r5.s64 = 448;
	// stvlx128 v72,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v72.u8[15 - i]);
	// li r5,464
	ctx.r5.s64 = 464;
	// stvlx128 v73,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v73.u8[15 - i]);
	// li r5,480
	ctx.r5.s64 = 480;
	// stvlx128 v74,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v74.u8[15 - i]);
	// li r5,496
	ctx.r5.s64 = 496;
	// stvlx128 v75,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v75.u8[15 - i]);
	// li r5,512
	ctx.r5.s64 = 512;
	// stvlx128 v76,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v76.u8[15 - i]);
	// li r5,528
	ctx.r5.s64 = 528;
	// stvlx128 v77,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v77.u8[15 - i]);
	// li r5,544
	ctx.r5.s64 = 544;
	// stvlx128 v78,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v78.u8[15 - i]);
	// li r5,560
	ctx.r5.s64 = 560;
	// stvlx128 v79,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v79.u8[15 - i]);
	// li r5,576
	ctx.r5.s64 = 576;
	// stvlx128 v80,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v80.u8[15 - i]);
	// li r5,592
	ctx.r5.s64 = 592;
	// stvlx128 v81,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v81.u8[15 - i]);
	// li r5,608
	ctx.r5.s64 = 608;
	// stvlx128 v82,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v82.u8[15 - i]);
	// li r5,624
	ctx.r5.s64 = 624;
	// stvlx128 v83,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v83.u8[15 - i]);
	// li r5,640
	ctx.r5.s64 = 640;
	// stvlx128 v84,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v84.u8[15 - i]);
	// li r5,656
	ctx.r5.s64 = 656;
	// stvlx128 v85,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v85.u8[15 - i]);
	// li r5,672
	ctx.r5.s64 = 672;
	// stvlx128 v86,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v86.u8[15 - i]);
	// li r5,688
	ctx.r5.s64 = 688;
	// stvlx128 v87,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v87.u8[15 - i]);
	// li r5,704
	ctx.r5.s64 = 704;
	// stvlx128 v88,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v88.u8[15 - i]);
	// li r5,720
	ctx.r5.s64 = 720;
	// stvlx128 v89,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v89.u8[15 - i]);
	// li r5,736
	ctx.r5.s64 = 736;
	// stvlx128 v90,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v90.u8[15 - i]);
	// li r5,752
	ctx.r5.s64 = 752;
	// stvlx128 v91,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v91.u8[15 - i]);
	// li r5,768
	ctx.r5.s64 = 768;
	// stvlx128 v92,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v92.u8[15 - i]);
	// li r5,784
	ctx.r5.s64 = 784;
	// stvlx128 v93,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v93.u8[15 - i]);
	// li r5,800
	ctx.r5.s64 = 800;
	// stvlx128 v94,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v94.u8[15 - i]);
	// li r5,816
	ctx.r5.s64 = 816;
	// stvlx128 v95,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v95.u8[15 - i]);
	// li r5,832
	ctx.r5.s64 = 832;
	// stvlx128 v96,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v96.u8[15 - i]);
	// li r5,848
	ctx.r5.s64 = 848;
	// stvlx128 v97,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v97.u8[15 - i]);
	// li r5,864
	ctx.r5.s64 = 864;
	// stvlx128 v98,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v98.u8[15 - i]);
	// li r5,880
	ctx.r5.s64 = 880;
	// stvlx128 v99,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v99.u8[15 - i]);
	// li r5,896
	ctx.r5.s64 = 896;
	// stvlx128 v100,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v100.u8[15 - i]);
	// li r5,912
	ctx.r5.s64 = 912;
	// stvlx128 v101,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v101.u8[15 - i]);
	// li r5,928
	ctx.r5.s64 = 928;
	// stvlx128 v102,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v102.u8[15 - i]);
	// li r5,944
	ctx.r5.s64 = 944;
	// stvlx128 v103,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v103.u8[15 - i]);
	// li r5,960
	ctx.r5.s64 = 960;
	// stvlx128 v104,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v104.u8[15 - i]);
	// li r5,976
	ctx.r5.s64 = 976;
	// stvlx128 v105,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v105.u8[15 - i]);
	// li r5,992
	ctx.r5.s64 = 992;
	// stvlx128 v106,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v106.u8[15 - i]);
	// li r5,1008
	ctx.r5.s64 = 1008;
	// stvlx128 v107,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v107.u8[15 - i]);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stvlx128 v108,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v108.u8[15 - i]);
	// li r5,1040
	ctx.r5.s64 = 1040;
	// stvlx128 v109,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v109.u8[15 - i]);
	// li r5,1056
	ctx.r5.s64 = 1056;
	// stvlx128 v110,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v110.u8[15 - i]);
	// li r5,1072
	ctx.r5.s64 = 1072;
	// stvlx128 v111,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v111.u8[15 - i]);
	// li r5,1088
	ctx.r5.s64 = 1088;
	// stvlx128 v112,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v112.u8[15 - i]);
	// li r5,1104
	ctx.r5.s64 = 1104;
	// stvlx128 v113,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v113.u8[15 - i]);
	// li r5,1120
	ctx.r5.s64 = 1120;
	// stvlx128 v114,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v114.u8[15 - i]);
	// li r5,1136
	ctx.r5.s64 = 1136;
	// stvlx128 v115,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v115.u8[15 - i]);
	// li r5,1152
	ctx.r5.s64 = 1152;
	// stvlx128 v116,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v116.u8[15 - i]);
	// li r5,1168
	ctx.r5.s64 = 1168;
	// stvlx128 v117,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v117.u8[15 - i]);
	// li r5,1184
	ctx.r5.s64 = 1184;
	// stvlx128 v118,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v118.u8[15 - i]);
	// li r5,1200
	ctx.r5.s64 = 1200;
	// stvlx128 v119,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v119.u8[15 - i]);
	// li r5,1216
	ctx.r5.s64 = 1216;
	// stvlx128 v120,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v120.u8[15 - i]);
	// li r5,1232
	ctx.r5.s64 = 1232;
	// stvlx128 v121,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v121.u8[15 - i]);
	// li r5,1248
	ctx.r5.s64 = 1248;
	// stvlx128 v122,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v122.u8[15 - i]);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// stvlx128 v123,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v123.u8[15 - i]);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// stvlx128 v124,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v124.u8[15 - i]);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// stvlx128 v125,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v125.u8[15 - i]);
	// li r5,1312
	ctx.r5.s64 = 1312;
	// stvlx128 v126,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v126.u8[15 - i]);
	// li r5,1328
	ctx.r5.s64 = 1328;
	// stvlx128 v127,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v127.u8[15 - i]);
	// stw r0,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r0.u32);
	// stw r4,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// std r1,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r1.u64);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r0.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409B7C"))) PPC_WEAK_FUNC(sub_82409B7C);
PPC_FUNC_IMPL(__imp__sub_82409B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409B80"))) PPC_WEAK_FUNC(sub_82409B80);
PPC_FUNC_IMPL(__imp__sub_82409B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82409B88;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82409bd0
	if (ctx.cr6.eq) goto loc_82409BD0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82409bd0
	if (ctx.cr6.eq) goto loc_82409BD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82409bdc
	if (!ctx.cr6.eq) goto loc_82409BDC;
loc_82409BC0:
	// bl 0x8224da90
	ctx.lr = 0x82409BC4;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82409BC8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409BD0;
	sub_8224D920(ctx, base);
loc_82409BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409BD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82409BDC:
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82409bf8
	if (ctx.cr6.eq) goto loc_82409BF8;
	// divwu r11,r31,r25
	ctx.r11.u32 = ctx.r31.u32 / ctx.r25.u32;
	// twllei r25,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82409c28
	if (!ctx.cr6.gt) goto loc_82409C28;
loc_82409BF8:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82409c10
	if (ctx.cr6.eq) goto loc_82409C10;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82248f70
	ctx.lr = 0x82409C10;
	sub_82248F70(ctx, base);
loc_82409C10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82409bc0
	if (ctx.cr6.eq) goto loc_82409BC0;
	// divwu r11,r31,r25
	ctx.r11.u32 = ctx.r31.u32 / ctx.r25.u32;
	// twllei r25,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82409bc0
	if (ctx.cr6.gt) goto loc_82409BC0;
loc_82409C28:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mullw r23,r25,r22
	ctx.r23.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r22.s32);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82409c48
	if (ctx.cr0.eq) goto loc_82409C48;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x82409c4c
	goto loc_82409C4C;
loc_82409C48:
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_82409C4C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82409d94
	if (ctx.cr6.eq) goto loc_82409D94;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_82409C5C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82409ccc
	if (ctx.cr0.eq) goto loc_82409CCC;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82409ccc
	if (ctx.cr6.eq) goto loc_82409CCC;
	// blt cr6,0x82409dc0
	if (ctx.cr6.lt) goto loc_82409DC0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82409c88
	if (!ctx.cr6.lt) goto loc_82409C88;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82409C88:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82409d9c
	if (ctx.cr6.gt) goto loc_82409D9C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240ae38
	ctx.lr = 0x82409CA4;
	sub_8240AE38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82409d8c
	goto loc_82409D8C;
loc_82409CCC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82409d60
	if (ctx.cr6.lt) goto loc_82409D60;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82409d14
	if (ctx.cr6.eq) goto loc_82409D14;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// twllei r26,0
	// ble cr6,0x82409d00
	if (!ctx.cr6.gt) goto loc_82409D00;
	// divwu r10,r24,r26
	ctx.r10.u32 = ctx.r24.u32 / ctx.r26.u32;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r30,r11,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r11.s64;
	// b 0x82409d24
	goto loc_82409D24;
loc_82409D00:
	// divwu r11,r31,r26
	ctx.r11.u32 = ctx.r31.u32 / ctx.r26.u32;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r30,r11,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x82409d24
	goto loc_82409D24;
loc_82409D14:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bgt cr6,0x82409d24
	if (ctx.cr6.gt) goto loc_82409D24;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82409D24:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82409d9c
	if (ctx.cr6.gt) goto loc_82409D9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82251590
	ctx.lr = 0x82409D34;
	sub_82251590(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82255940
	ctx.lr = 0x82409D40;
	sub_82255940(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409dd8
	if (ctx.cr0.eq) goto loc_82409DD8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82409df4
	if (ctx.cr6.eq) goto loc_82409DF4;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	// b 0x82409d8c
	goto loc_82409D8C;
loc_82409D60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82251d20
	ctx.lr = 0x82409D68;
	sub_82251D20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82409e00
	if (ctx.cr6.eq) goto loc_82409E00;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82409d9c
	if (ctx.cr6.eq) goto loc_82409D9C;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82409D8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82409c5c
	if (!ctx.cr6.eq) goto loc_82409C5C;
loc_82409D94:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x82409bd4
	goto loc_82409BD4;
loc_82409D9C:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82409db4
	if (ctx.cr6.eq) goto loc_82409DB4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82248f70
	ctx.lr = 0x82409DB4;
	sub_82248F70(ctx, base);
loc_82409DB4:
	// bl 0x8224da90
	ctx.lr = 0x82409DB8;
	sub_8224DA90(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82409bc8
	goto loc_82409BC8;
loc_82409DC0:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
loc_82409DD0:
	// twllei r25,0
	// b 0x82409bd4
	goto loc_82409BD4;
loc_82409DD8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82409DE0:
	// subf r10,r31,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// twllei r25,0
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
	// b 0x82409bd4
	goto loc_82409BD4;
loc_82409DF4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82409de0
	goto loc_82409DE0;
loc_82409E00:
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// b 0x82409dd0
	goto loc_82409DD0;
}

__attribute__((alias("__imp__sub_82409E0C"))) PPC_WEAK_FUNC(sub_82409E0C);
PPC_FUNC_IMPL(__imp__sub_82409E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409E10"))) PPC_WEAK_FUNC(sub_82409E10);
PPC_FUNC_IMPL(__imp__sub_82409E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2616(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2616);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82409E20;
	sub_82248780(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82409e84
	if (ctx.cr6.eq) goto loc_82409E84;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82409e84
	if (ctx.cr6.eq) goto loc_82409E84;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82409e90
	if (!ctx.cr6.eq) goto loc_82409E90;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82409e74
	if (ctx.cr6.eq) goto loc_82409E74;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82409E74;
	sub_82248F70(ctx, base);
loc_82409E74:
	// bl 0x8224da90
	ctx.lr = 0x82409E78;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409E84;
	sub_8224D920(ctx, base);
loc_82409E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409E88:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82409E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x82409E98;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82409b80
	ctx.lr = 0x82409EB4;
	sub_82409B80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82409eec
	ctx.lr = 0x82409EC4;
	sub_82409EEC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82409e88
	goto loc_82409E88;
}

__attribute__((alias("__imp__sub_82409E18"))) PPC_WEAK_FUNC(sub_82409E18);
PPC_FUNC_IMPL(__imp__sub_82409E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82409E20;
	sub_82248780(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82409e84
	if (ctx.cr6.eq) goto loc_82409E84;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82409e84
	if (ctx.cr6.eq) goto loc_82409E84;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82409e90
	if (!ctx.cr6.eq) goto loc_82409E90;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82409e74
	if (ctx.cr6.eq) goto loc_82409E74;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82409E74;
	sub_82248F70(ctx, base);
loc_82409E74:
	// bl 0x8224da90
	ctx.lr = 0x82409E78;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82409E84;
	sub_8224D920(ctx, base);
loc_82409E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409E88:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82409E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x82409E98;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82409b80
	ctx.lr = 0x82409EB4;
	sub_82409B80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82409eec
	ctx.lr = 0x82409EC4;
	sub_82409EEC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82409e88
	goto loc_82409E88;
}

__attribute__((alias("__imp__sub_82409ECC"))) PPC_WEAK_FUNC(sub_82409ECC);
PPC_FUNC_IMPL(__imp__sub_82409ECC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// b 0x82409f04
	goto loc_82409F04;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82409F04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x82409F0C;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409EEC"))) PPC_WEAK_FUNC(sub_82409EEC);
PPC_FUNC_IMPL(__imp__sub_82409EEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x82409F0C;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82409F24"))) PPC_WEAK_FUNC(sub_82409F24);
PPC_FUNC_IMPL(__imp__sub_82409F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409F28"))) PPC_WEAK_FUNC(sub_82409F28);
PPC_FUNC_IMPL(__imp__sub_82409F28) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82409e18
	sub_82409E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82409F3C"))) PPC_WEAK_FUNC(sub_82409F3C);
PPC_FUNC_IMPL(__imp__sub_82409F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82409F40"))) PPC_WEAK_FUNC(sub_82409F40);
PPC_FUNC_IMPL(__imp__sub_82409F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82409F48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82409f80
	if (!ctx.cr0.eq) goto loc_82409F80;
	// bl 0x8224da90
	ctx.lr = 0x82409F6C;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8240a000
	goto loc_8240A000;
loc_82409F80:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x82409fa0
	if (!ctx.cr6.eq) goto loc_82409FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240b128
	ctx.lr = 0x82409F98;
	sub_8240B128(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82409FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82253e90
	ctx.lr = 0x82409FA8;
	sub_82253E90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82409fc0
	if (ctx.cr0.eq) goto loc_82409FC0;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82409fe0
	goto loc_82409FE0;
loc_82409FC0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82409fe0
	if (ctx.cr0.eq) goto loc_82409FE0;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82409fe0
	if (ctx.cr0.eq) goto loc_82409FE0;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82409fe0
	if (!ctx.cr0.eq) goto loc_82409FE0;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82409FE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82409FE8;
	sub_82251590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8240afa8
	ctx.lr = 0x82409FF4;
	sub_8240AFA8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8240A000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240A008"))) PPC_WEAK_FUNC(sub_8240A008);
PPC_FUNC_IMPL(__imp__sub_8240A008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2592(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2592);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240A018;
	sub_82248788(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a054
	if (!ctx.cr0.eq) goto loc_8240A054;
loc_8240A03C:
	// bl 0x8224da90
	ctx.lr = 0x8240A040;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A04C;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240a09c
	goto loc_8240A09C;
loc_8240A054:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8240a06c
	if (ctx.cr6.eq) goto loc_8240A06C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8240a06c
	if (ctx.cr6.eq) goto loc_8240A06C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8240a03c
	if (!ctx.cr6.eq) goto loc_8240A03C;
loc_8240A06C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x8240A074;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409f40
	ctx.lr = 0x8240A088;
	sub_82409F40(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240a0c4
	ctx.lr = 0x8240A098;
	sub_8240A0C4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8240A09C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240A010"))) PPC_WEAK_FUNC(sub_8240A010);
PPC_FUNC_IMPL(__imp__sub_8240A010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240A018;
	sub_82248788(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a054
	if (!ctx.cr0.eq) goto loc_8240A054;
loc_8240A03C:
	// bl 0x8224da90
	ctx.lr = 0x8240A040;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A04C;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240a09c
	goto loc_8240A09C;
loc_8240A054:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8240a06c
	if (ctx.cr6.eq) goto loc_8240A06C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8240a06c
	if (ctx.cr6.eq) goto loc_8240A06C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8240a03c
	if (!ctx.cr6.eq) goto loc_8240A03C;
loc_8240A06C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x8240A074;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409f40
	ctx.lr = 0x8240A088;
	sub_82409F40(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240a0c4
	ctx.lr = 0x8240A098;
	sub_8240A0C4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8240A09C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240A0A4"))) PPC_WEAK_FUNC(sub_8240A0A4);
PPC_FUNC_IMPL(__imp__sub_8240A0A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x8240a0dc
	goto loc_8240A0DC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240A0DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A0E4;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A0C4"))) PPC_WEAK_FUNC(sub_8240A0C4);
PPC_FUNC_IMPL(__imp__sub_8240A0C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A0E4;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A0FC"))) PPC_WEAK_FUNC(sub_8240A0FC);
PPC_FUNC_IMPL(__imp__sub_8240A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240A100"))) PPC_WEAK_FUNC(sub_8240A100);
PPC_FUNC_IMPL(__imp__sub_8240A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240A108;
	sub_82248778(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240a144
	if (ctx.cr6.eq) goto loc_8240A144;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240a144
	if (ctx.cr6.eq) goto loc_8240A144;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8240a150
	if (!ctx.cr6.eq) goto loc_8240A150;
loc_8240A134:
	// bl 0x8224da90
	ctx.lr = 0x8240A138;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A144;
	sub_8224D920(ctx, base);
loc_8240A144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A148:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8240A150:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240a134
	if (ctx.cr6.eq) goto loc_8240A134;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8240a134
	if (ctx.cr6.gt) goto loc_8240A134;
	// mullw r27,r25,r24
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82250670
	ctx.lr = 0x8240A178;
	sub_82250670(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240a318
	if (ctx.cr6.eq) goto loc_8240A318;
	// bl 0x82250670
	ctx.lr = 0x8240A188;
	sub_82250670(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240a318
	if (ctx.cr6.eq) goto loc_8240A318;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240a1ac
	if (ctx.cr0.eq) goto loc_8240A1AC;
	// lwz r26,24(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x8240a1b0
	goto loc_8240A1B0;
loc_8240A1AC:
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_8240A1B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240a35c
	if (ctx.cr6.eq) goto loc_8240A35C;
loc_8240A1B8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r10,r11,264
	ctx.r10.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240a218
	if (ctx.cr0.eq) goto loc_8240A218;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8240a218
	if (ctx.cr6.eq) goto loc_8240A218;
	// blt cr6,0x8240a2f4
	if (ctx.cr6.lt) goto loc_8240A2F4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8240a1e4
	if (!ctx.cr6.lt) goto loc_8240A1E4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8240A1E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240A1F4;
	sub_82248A40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x8240a2e8
	goto loc_8240A2E8;
loc_8240A218:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8240a2b4
	if (ctx.cr6.lt) goto loc_8240A2B4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240a238
	if (ctx.cr6.eq) goto loc_8240A238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82253e90
	ctx.lr = 0x8240A230;
	sub_82253E90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a30c
	if (!ctx.cr0.eq) goto loc_8240A30C;
loc_8240A238:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8240a258
	if (ctx.cr6.eq) goto loc_8240A258;
	// divwu r11,r31,r26
	ctx.r11.u32 = ctx.r31.u32 / ctx.r26.u32;
	// twllei r26,0
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r29,r11,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x8240a25c
	goto loc_8240A25C;
loc_8240A258:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8240A25C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82251590
	ctx.lr = 0x8240A264;
	sub_82251590(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82251388
	ctx.lr = 0x8240A270;
	sub_82251388(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240a298
	if (ctx.cr6.eq) goto loc_8240A298;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x8240a288
	if (ctx.cr6.gt) goto loc_8240A288;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240A288:
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8240a2e8
	if (!ctx.cr6.lt) goto loc_8240A2E8;
loc_8240A298:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// twllei r25,0
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x8240a148
	goto loc_8240A148;
loc_8240A2B4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224caa0
	ctx.lr = 0x8240A2C4;
	sub_8224CAA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240a30c
	if (ctx.cr6.eq) goto loc_8240A30C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// bgt cr6,0x8240a2e8
	if (ctx.cr6.gt) goto loc_8240A2E8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8240A2E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8240a1b8
	if (!ctx.cr6.eq) goto loc_8240A1B8;
	// b 0x8240a35c
	goto loc_8240A35C;
loc_8240A2F4:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
loc_8240A304:
	// twllei r25,0
	// b 0x8240a148
	goto loc_8240A148;
loc_8240A30C:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// b 0x8240a304
	goto loc_8240A304;
loc_8240A318:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240a35c
	if (ctx.cr6.eq) goto loc_8240A35C;
loc_8240A320:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x8240a330
	if (ctx.cr6.lt) goto loc_8240A330;
	// li r30,255
	ctx.r30.s64 = 255;
loc_8240A330:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248a40
	ctx.lr = 0x8240A340;
	sub_82248A40(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8225fa40
	ctx.lr = 0x8240A354;
	sub_8225FA40(ctx, base);
	// subf. r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240a320
	if (!ctx.cr0.eq) goto loc_8240A320;
loc_8240A35C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8240a148
	goto loc_8240A148;
}

__attribute__((alias("__imp__sub_8240A364"))) PPC_WEAK_FUNC(sub_8240A364);
PPC_FUNC_IMPL(__imp__sub_8240A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240A368"))) PPC_WEAK_FUNC(sub_8240A368);
PPC_FUNC_IMPL(__imp__sub_8240A368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2568(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2568);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240A378;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240a3c0
	if (ctx.cr6.eq) goto loc_8240A3C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240a3c0
	if (ctx.cr6.eq) goto loc_8240A3C0;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a3cc
	if (!ctx.cr0.eq) goto loc_8240A3CC;
	// bl 0x8224da90
	ctx.lr = 0x8240A3B4;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A3C0;
	sub_8224D920(ctx, base);
loc_8240A3C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A3C4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8240A3CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x8240A3D4;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240a100
	ctx.lr = 0x8240A3EC;
	sub_8240A100(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x8240a424
	ctx.lr = 0x8240A3FC;
	sub_8240A424(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8240a3c4
	goto loc_8240A3C4;
}

__attribute__((alias("__imp__sub_8240A370"))) PPC_WEAK_FUNC(sub_8240A370);
PPC_FUNC_IMPL(__imp__sub_8240A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240A378;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240a3c0
	if (ctx.cr6.eq) goto loc_8240A3C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240a3c0
	if (ctx.cr6.eq) goto loc_8240A3C0;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a3cc
	if (!ctx.cr0.eq) goto loc_8240A3CC;
	// bl 0x8224da90
	ctx.lr = 0x8240A3B4;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A3C0;
	sub_8224D920(ctx, base);
loc_8240A3C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A3C4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8240A3CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x8240A3D4;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240a100
	ctx.lr = 0x8240A3EC;
	sub_8240A100(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x8240a424
	ctx.lr = 0x8240A3FC;
	sub_8240A424(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8240a3c4
	goto loc_8240A3C4;
}

__attribute__((alias("__imp__sub_8240A404"))) PPC_WEAK_FUNC(sub_8240A404);
PPC_FUNC_IMPL(__imp__sub_8240A404) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x8240a43c
	goto loc_8240A43C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240A43C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A444;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A424"))) PPC_WEAK_FUNC(sub_8240A424);
PPC_FUNC_IMPL(__imp__sub_8240A424) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A444;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A45C"))) PPC_WEAK_FUNC(sub_8240A45C);
PPC_FUNC_IMPL(__imp__sub_8240A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240A460"))) PPC_WEAK_FUNC(sub_8240A460);
PPC_FUNC_IMPL(__imp__sub_8240A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240A468;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8240b4a0
	ctx.lr = 0x8240A480;
	sub_8240B4A0(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8240a498
	if (ctx.cr6.lt) goto loc_8240A498;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8240a4a8
	if (ctx.cr6.gt) goto loc_8240A4A8;
loc_8240A498:
	// bl 0x8224d920
	ctx.lr = 0x8240A49C;
	sub_8224D920(ctx, base);
loc_8240A49C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8240A4A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8240A4A8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fa20
	ctx.lr = 0x8240A4B8;
	sub_8224FA20(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8240a49c
	if (!ctx.cr6.lt) goto loc_8240A49C;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8240b498
	ctx.lr = 0x8240A4D4;
	sub_8240B498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a510
	if (!ctx.cr0.eq) goto loc_8240A510;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224bb38
	ctx.lr = 0x8240A4F0;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8240a4a0
	if (ctx.cr0.eq) goto loc_8240A4A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A510;
	sub_8224D9F8(ctx, base);
loc_8240A510:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A528;
	sub_8224D9F8(ctx, base);
}

__attribute__((alias("__imp__sub_8240A528"))) PPC_WEAK_FUNC(sub_8240A528);
PPC_FUNC_IMPL(__imp__sub_8240A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2544(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2544);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240A538;
	sub_8224877C(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bne 0x8240a578
	if (!ctx.cr0.eq) goto loc_8240A578;
	// bl 0x8224da90
	ctx.lr = 0x8240A564;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A570;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240a7c4
	goto loc_8240A7C4;
loc_8240A578:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224ded0
	ctx.lr = 0x8240A584;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a598
	if (!ctx.cr0.eq) goto loc_8240A598;
	// bl 0x8224da90
	ctx.lr = 0x8240A590;
	sub_8224DA90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8240a7c4
	goto loc_8240A7C4;
loc_8240A598:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224e010
	ctx.lr = 0x8240A5A0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r11,-4120
	ctx.r30.s64 = ctx.r11.s64 + -4120;
	// lbz r11,-4120(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x8240a69c
	if (!ctx.cr0.eq) goto loc_8240A69C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-21540
	ctx.r5.s64 = ctx.r11.s64 + -21540;
	// bl 0x8224bb38
	ctx.lr = 0x8240A5CC;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a5ec
	if (ctx.cr0.eq) goto loc_8240A5EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A5EC;
	sub_8224D9F8(ctx, base);
loc_8240A5EC:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8240a61c
	if (ctx.cr6.eq) goto loc_8240A61C;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8240a61c
	if (ctx.cr6.eq) goto loc_8240A61C;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8240A61C:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x82088650
	ctx.lr = 0x8240A638;
	sub_82088650(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8240b498
	ctx.lr = 0x8240A648;
	sub_8240B498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a668
	if (ctx.cr0.eq) goto loc_8240A668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A668;
	sub_8224D9F8(ctx, base);
loc_8240A668:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-10220
	ctx.r5.s64 = ctx.r11.s64 + -10220;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82409308
	ctx.lr = 0x8240A67C;
	sub_82409308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a6b0
	if (ctx.cr0.eq) goto loc_8240A6B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A69C;
	sub_8224D9F8(ctx, base);
loc_8240A69C:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x8240a460
	ctx.lr = 0x8240A6A8;
	sub_8240A460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a79c
	if (!ctx.cr0.eq) goto loc_8240A79C;
loc_8240A6B0:
	// bl 0x8240bda8
	ctx.lr = 0x8240A6B4;
	sub_8240BDA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bne 0x8240a6cc
	if (!ctx.cr0.eq) goto loc_8240A6CC;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A6CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240A6D8;
	sub_8224DA90(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8224da90
	ctx.lr = 0x8240A6E0;
	sub_8224DA90(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_8240A6E4:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8240bd80
	ctx.lr = 0x8240A700;
	sub_8240BD80(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8240a72c
	if (!ctx.cr6.eq) goto loc_8240A72C;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8240a460
	ctx.lr = 0x8240A71C;
	sub_8240A460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a72c
	if (!ctx.cr0.eq) goto loc_8240A72C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8240a6e4
	goto loc_8240A6E4;
loc_8240A72C:
	// bl 0x8224da90
	ctx.lr = 0x8240A730;
	sub_8224DA90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240a744
	if (!ctx.cr6.eq) goto loc_8240A744;
	// bl 0x8224da90
	ctx.lr = 0x8240A740;
	sub_8224DA90(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_8240A744:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8240a7a0
	if (ctx.cr6.eq) goto loc_8240A7A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240b640
	ctx.lr = 0x8240A758;
	sub_8240B640(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240a770
	if (!ctx.cr0.eq) goto loc_8240A770;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82255fa0
	ctx.lr = 0x8240A76C;
	sub_82255FA0(ctx, base);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A770:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lwz r11,-4076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4076);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A79C:
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8240A7A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x8240a7ec
	ctx.lr = 0x8240A7AC;
	sub_8240A7EC(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8240a7c0
	if (ctx.cr6.eq) goto loc_8240A7C0;
	// bl 0x8224da90
	ctx.lr = 0x8240A7BC;
	sub_8224DA90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_8240A7C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8240A7C4:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240A530"))) PPC_WEAK_FUNC(sub_8240A530);
PPC_FUNC_IMPL(__imp__sub_8240A530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240A538;
	sub_8224877C(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bne 0x8240a578
	if (!ctx.cr0.eq) goto loc_8240A578;
	// bl 0x8224da90
	ctx.lr = 0x8240A564;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A570;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240a7c4
	goto loc_8240A7C4;
loc_8240A578:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224ded0
	ctx.lr = 0x8240A584;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a598
	if (!ctx.cr0.eq) goto loc_8240A598;
	// bl 0x8224da90
	ctx.lr = 0x8240A590;
	sub_8224DA90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8240a7c4
	goto loc_8240A7C4;
loc_8240A598:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224e010
	ctx.lr = 0x8240A5A0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r11,-4120
	ctx.r30.s64 = ctx.r11.s64 + -4120;
	// lbz r11,-4120(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x8240a69c
	if (!ctx.cr0.eq) goto loc_8240A69C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-21540
	ctx.r5.s64 = ctx.r11.s64 + -21540;
	// bl 0x8224bb38
	ctx.lr = 0x8240A5CC;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a5ec
	if (ctx.cr0.eq) goto loc_8240A5EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A5EC;
	sub_8224D9F8(ctx, base);
loc_8240A5EC:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8240a61c
	if (ctx.cr6.eq) goto loc_8240A61C;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8240a61c
	if (ctx.cr6.eq) goto loc_8240A61C;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8240A61C:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x82088650
	ctx.lr = 0x8240A638;
	sub_82088650(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8240b498
	ctx.lr = 0x8240A648;
	sub_8240B498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a668
	if (ctx.cr0.eq) goto loc_8240A668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A668;
	sub_8224D9F8(ctx, base);
loc_8240A668:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-10220
	ctx.r5.s64 = ctx.r11.s64 + -10220;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82409308
	ctx.lr = 0x8240A67C;
	sub_82409308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240a6b0
	if (ctx.cr0.eq) goto loc_8240A6B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240A69C;
	sub_8224D9F8(ctx, base);
loc_8240A69C:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x8240a460
	ctx.lr = 0x8240A6A8;
	sub_8240A460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a79c
	if (!ctx.cr0.eq) goto loc_8240A79C;
loc_8240A6B0:
	// bl 0x8240bda8
	ctx.lr = 0x8240A6B4;
	sub_8240BDA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bne 0x8240a6cc
	if (!ctx.cr0.eq) goto loc_8240A6CC;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A6CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240A6D8;
	sub_8224DA90(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8224da90
	ctx.lr = 0x8240A6E0;
	sub_8224DA90(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_8240A6E4:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8240bd80
	ctx.lr = 0x8240A700;
	sub_8240BD80(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8240a72c
	if (!ctx.cr6.eq) goto loc_8240A72C;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8240a460
	ctx.lr = 0x8240A71C;
	sub_8240A460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240a72c
	if (!ctx.cr0.eq) goto loc_8240A72C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8240a6e4
	goto loc_8240A6E4;
loc_8240A72C:
	// bl 0x8224da90
	ctx.lr = 0x8240A730;
	sub_8224DA90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240a744
	if (!ctx.cr6.eq) goto loc_8240A744;
	// bl 0x8224da90
	ctx.lr = 0x8240A740;
	sub_8224DA90(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_8240A744:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8240a7a0
	if (ctx.cr6.eq) goto loc_8240A7A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240b640
	ctx.lr = 0x8240A758;
	sub_8240B640(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240a770
	if (!ctx.cr0.eq) goto loc_8240A770;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82255fa0
	ctx.lr = 0x8240A76C;
	sub_82255FA0(ctx, base);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A770:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lwz r11,-4076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4076);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x8240a7a0
	goto loc_8240A7A0;
loc_8240A79C:
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8240A7A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x8240a7ec
	ctx.lr = 0x8240A7AC;
	sub_8240A7EC(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8240a7c0
	if (ctx.cr6.eq) goto loc_8240A7C0;
	// bl 0x8224da90
	ctx.lr = 0x8240A7BC;
	sub_8224DA90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_8240A7C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8240A7C4:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240A7CC"))) PPC_WEAK_FUNC(sub_8240A7CC);
PPC_FUNC_IMPL(__imp__sub_8240A7CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x8240a804
	goto loc_8240A804;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240A804:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240a818
	if (ctx.cr6.eq) goto loc_8240A818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A818;
	sub_822508A8(ctx, base);
loc_8240A818:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224dd90
	ctx.lr = 0x8240A820;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

