#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820B8DC4"))) PPC_WEAK_FUNC(sub_820B8DC4);
PPC_FUNC_IMPL(__imp__sub_820B8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8DC8"))) PPC_WEAK_FUNC(sub_820B8DC8);
PPC_FUNC_IMPL(__imp__sub_820B8DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x820b8dd0
	sub_820B8DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8DD0"))) PPC_WEAK_FUNC(sub_820B8DD0);
PPC_FUNC_IMPL(__imp__sub_820B8DD0) {
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
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B8DF4;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820B8DFC;
	sub_821883B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8e18
	if (ctx.cr6.eq) goto loc_820B8E18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B8E14;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B8E18:
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

__attribute__((alias("__imp__sub_820B8E30"))) PPC_WEAK_FUNC(sub_820B8E30);
PPC_FUNC_IMPL(__imp__sub_820B8E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82183850
	ctx.lr = 0x820B8E50;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b8e68
	if (ctx.cr6.eq) goto loc_820B8E68;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x820B8E64;
	sub_82183448(ctx, base);
	// b 0x820b8e70
	goto loc_820B8E70;
loc_820B8E68:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820B8E70;
	sub_821845A0(ctx, base);
loc_820B8E70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8e88
	if (ctx.cr6.eq) goto loc_820B8E88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820b8c98
	ctx.lr = 0x820B8E84;
	sub_820B8C98(ctx, base);
	// b 0x820b8e8c
	goto loc_820B8E8C;
loc_820B8E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B8E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8EA4"))) PPC_WEAK_FUNC(sub_820B8EA4);
PPC_FUNC_IMPL(__imp__sub_820B8EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8EA8"))) PPC_WEAK_FUNC(sub_820B8EA8);
PPC_FUNC_IMPL(__imp__sub_820B8EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82097a48
	sub_82097A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8EB0"))) PPC_WEAK_FUNC(sub_820B8EB0);
PPC_FUNC_IMPL(__imp__sub_820B8EB0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820845f0
	ctx.lr = 0x820B8EC8;
	sub_820845F0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8EE0"))) PPC_WEAK_FUNC(sub_820B8EE0);
PPC_FUNC_IMPL(__imp__sub_820B8EE0) {
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
	// bl 0x82084690
	ctx.lr = 0x820B8EF0;
	sub_82084690(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8F08"))) PPC_WEAK_FUNC(sub_820B8F08);
PPC_FUNC_IMPL(__imp__sub_820B8F08) {
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
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r31,1600
	ctx.r30.s64 = ctx.r31.s64 + 1600;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82084690
	ctx.lr = 0x820B8F38;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b8f5c
	if (!ctx.cr6.eq) goto loc_820B8F5C;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820B8F4C;
	sub_822AA648(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stb r10,1602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1602, ctx.r10.u8);
loc_820B8F5C:
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

__attribute__((alias("__imp__sub_820B8F74"))) PPC_WEAK_FUNC(sub_820B8F74);
PPC_FUNC_IMPL(__imp__sub_820B8F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8F78"))) PPC_WEAK_FUNC(sub_820B8F78);
PPC_FUNC_IMPL(__imp__sub_820B8F78) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208dd28
	ctx.lr = 0x820B8F94;
	sub_8208DD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b900c
	if (!ctx.cr6.eq) goto loc_820B900C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd48
	ctx.lr = 0x820B8FA4;
	sub_8208DD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b9014
	if (!ctx.cr6.eq) goto loc_820B9014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dda8
	ctx.lr = 0x820B8FB4;
	sub_8208DDA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b9014
	if (!ctx.cr6.eq) goto loc_820B9014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd68
	ctx.lr = 0x820B8FC4;
	sub_8208DD68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b8fd4
	if (ctx.cr6.eq) goto loc_820B8FD4;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x820b9018
	goto loc_820B9018;
loc_820B8FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd88
	ctx.lr = 0x820B8FDC;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b8fec
	if (ctx.cr6.eq) goto loc_820B8FEC;
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x820b9018
	goto loc_820B9018;
loc_820B8FEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e008
	ctx.lr = 0x820B8FF4;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b900c
	if (!ctx.cr6.eq) goto loc_820B900C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e030
	ctx.lr = 0x820B9004;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9024
	if (ctx.cr6.eq) goto loc_820B9024;
loc_820B900C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820b9018
	goto loc_820B9018;
loc_820B9014:
	// li r5,10
	ctx.r5.s64 = 10;
loc_820B9018:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x821150a8
	ctx.lr = 0x820B9024;
	sub_821150A8(ctx, base);
loc_820B9024:
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

__attribute__((alias("__imp__sub_820B9038"))) PPC_WEAK_FUNC(sub_820B9038);
PPC_FUNC_IMPL(__imp__sub_820B9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820B9040;
	sub_8224877C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,348(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,344(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r27,-5056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x820ed8c0
	ctx.lr = 0x820B9098;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b90bc
	if (!ctx.cr6.eq) goto loc_820B90BC;
	// li r6,57
	ctx.r6.s64 = 57;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B90B4;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b918c
	if (ctx.cr6.eq) goto loc_820B918C;
loc_820B90BC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r28,50
	ctx.r28.s64 = 50;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
loc_820B90C8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B90DC;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b90ec
	if (ctx.cr6.eq) goto loc_820B90EC;
	// stwu r28,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r26.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820B90EC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,57
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 57, ctx.xer);
	// blt cr6,0x820b90c8
	if (ctx.cr6.lt) goto loc_820B90C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x820b918c
	if (!ctx.cr6.eq) goto loc_820B918C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820b918c
	if (!ctx.cr6.gt) goto loc_820B918C;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// bge cr6,0x820b918c
	if (!ctx.cr6.lt) goto loc_820B918C;
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r3,r4,29344
	ctx.r3.s64 = ctx.r4.s64 + 29344;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,24332(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24332);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r7,24332(r5)
	PPC_STORE_U8(ctx.r5.u32 + 24332, ctx.r7.u8);
	// twllei r29,0
	// lbzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r7,1284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// divw r31,r5,r29
	ctx.r31.s32 = ctx.r5.s32 / ctx.r29.s32;
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mullw r31,r31,r29
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// lwzx r5,r5,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// bl 0x82105c18
	ctx.lr = 0x820B9180;
	sub_82105C18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820B918C:
	// li r6,60
	ctx.r6.s64 = 60;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B91A0;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b91cc
	if (!ctx.cr6.eq) goto loc_820B91CC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b91cc
	if (ctx.cr6.eq) goto loc_820B91CC;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820b91d0
	if (ctx.cr6.eq) goto loc_820B91D0;
loc_820B91CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B91D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820B91D8"))) PPC_WEAK_FUNC(sub_820B91D8);
PPC_FUNC_IMPL(__imp__sub_820B91D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B91E0;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8208e700
	ctx.lr = 0x820B91F8;
	sub_8208E700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9400
	if (ctx.cr6.eq) goto loc_820B9400;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f13,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,63
	ctx.r5.s64 = 63;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,62
	ctx.r4.s64 = 62;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,61
	ctx.r9.s64 = 61;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x821875f8
	ctx.lr = 0x820B9284;
	sub_821875F8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820B92B0;
	sub_82187400(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82097218
	ctx.lr = 0x820B92B8;
	sub_82097218(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820B92C4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x820b92d8
	if (!ctx.cr0.lt) goto loc_820B92D8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x820b92e4
	goto loc_820B92E4;
loc_820B92D8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820b92e4
	if (ctx.cr6.lt) goto loc_820B92E4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_820B92E4:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// subf. r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x820b92fc
	if (!ctx.cr0.lt) goto loc_820B92FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x820b9308
	goto loc_820B9308;
loc_820B92FC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820b9308
	if (ctx.cr6.lt) goto loc_820B9308;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_820B9308:
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b92c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B92C4;
	// lbz r11,569(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 569);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820b9324
	if (!ctx.cr6.lt) goto loc_820B9324;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820b9330
	goto loc_820B9330;
loc_820B9324:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x820b9330
	if (!ctx.cr6.gt) goto loc_820B9330;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B9330:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820b9400
	if (!ctx.cr6.gt) goto loc_820B9400;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_820B9348:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_820B9350:
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820b9384
	if (ctx.cr6.lt) goto loc_820B9384;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x820b9384
	if (!ctx.cr6.lt) goto loc_820B9384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820b93ec
	if (ctx.cr6.eq) goto loc_820B93EC;
loc_820B9384:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x820b9350
	if (ctx.cr6.lt) goto loc_820B9350;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820b93c8
	if (!ctx.cr6.lt) goto loc_820B93C8;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_820B93AC:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820b93ac
	if (ctx.cr6.lt) goto loc_820B93AC;
loc_820B93C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r28,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_820B93EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b9348
	if (ctx.cr6.lt) goto loc_820B9348;
loc_820B9400:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B940C"))) PPC_WEAK_FUNC(sub_820B940C);
PPC_FUNC_IMPL(__imp__sub_820B940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9410"))) PPC_WEAK_FUNC(sub_820B9410);
PPC_FUNC_IMPL(__imp__sub_820B9410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B9418;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,-5056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820b957c
	if (ctx.cr6.eq) goto loc_820B957C;
	// lwz r5,348(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B9444;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9460
	if (ctx.cr6.eq) goto loc_820B9460;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9038
	ctx.lr = 0x820B9458;
	sub_820B9038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b957c
	if (!ctx.cr6.eq) goto loc_820B957C;
loc_820B9460:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b948c
	if (ctx.cr6.eq) goto loc_820B948C;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b948c
	if (!ctx.cr6.eq) goto loc_820B948C;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x820b957c
	if (!ctx.cr6.eq) goto loc_820B957C;
loc_820B948C:
	// li r6,60
	ctx.r6.s64 = 60;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B94A0;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b957c
	if (ctx.cr6.eq) goto loc_820B957C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_820B94BC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820ed8c0
	ctx.lr = 0x820B94D0;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b94e0
	if (ctx.cr6.eq) goto loc_820B94E0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
loc_820B94E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,67
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 67, ctx.xer);
	// blt cr6,0x820b94bc
	if (ctx.cr6.lt) goto loc_820B94BC;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b91d8
	ctx.lr = 0x820B9500;
	sub_820B91D8(ctx, base);
	// lis r4,-32179
	ctx.r4.s64 = -2108882944;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r3,29344
	ctx.r30.s64 = ctx.r3.s64 + 29344;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// lbz r7,24332(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24332);
	// twllei r11,0
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r5,24332(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24332, ctx.r5.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lbzx r30,r7,r30
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// divw r28,r30,r11
	ctx.r28.s32 = ctx.r30.s32 / ctx.r11.s32;
	// lwz r7,1284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r28,r28,r11
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// twlgei r11,-1
	// lwzx r5,r30,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82105c18
	ctx.lr = 0x820B9570;
	sub_82105C18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x821af008
	ctx.lr = 0x820B957C;
	sub_821AF008(ctx, base);
loc_820B957C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B9584"))) PPC_WEAK_FUNC(sub_820B9584);
PPC_FUNC_IMPL(__imp__sub_820B9584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9588"))) PPC_WEAK_FUNC(sub_820B9588);
PPC_FUNC_IMPL(__imp__sub_820B9588) {
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
	// lis r4,21103
	ctx.r4.s64 = 1383006208;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28737
	ctx.r4.u64 = ctx.r4.u64 | 28737;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B95B4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,12008
	ctx.r10.s64 = ctx.r11.s64 + 12008;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820B95E4"))) PPC_WEAK_FUNC(sub_820B95E4);
PPC_FUNC_IMPL(__imp__sub_820B95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B95E8"))) PPC_WEAK_FUNC(sub_820B95E8);
PPC_FUNC_IMPL(__imp__sub_820B95E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b9600
	if (ctx.cr6.eq) goto loc_820B9600;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B9600:
	// b 0x820b9410
	sub_820B9410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9604"))) PPC_WEAK_FUNC(sub_820B9604);
PPC_FUNC_IMPL(__imp__sub_820B9604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9608"))) PPC_WEAK_FUNC(sub_820B9608);
PPC_FUNC_IMPL(__imp__sub_820B9608) {
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
	// lis r4,17747
	ctx.r4.s64 = 1163067392;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,30050
	ctx.r4.u64 = ctx.r4.u64 | 30050;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B9634;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,12104
	ctx.r10.s64 = ctx.r11.s64 + 12104;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820B9664"))) PPC_WEAK_FUNC(sub_820B9664);
PPC_FUNC_IMPL(__imp__sub_820B9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9668"))) PPC_WEAK_FUNC(sub_820B9668);
PPC_FUNC_IMPL(__imp__sub_820B9668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B9670;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17784
	ctx.r4.s64 = 1165492224;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B968C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r29.u32);
	// addi r10,r11,12136
	ctx.r10.s64 = ctx.r11.s64 + 12136;
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x820B96A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b96bc
	if (ctx.cr6.eq) goto loc_820B96BC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x820B96B8;
	sub_82183448(ctx, base);
	// b 0x820b96c4
	goto loc_820B96C4;
loc_820B96BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820B96C4;
	sub_821845A0(ctx, base);
loc_820B96C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b96fc
	if (ctx.cr6.eq) goto loc_820B96FC;
	// lis r4,19305
	ctx.r4.s64 = 1265172480;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25666
	ctx.r4.u64 = ctx.r4.u64 | 25666;
	// bl 0x82188378
	ctx.lr = 0x820B96E0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,12040
	ctx.r10.s64 = ctx.r11.s64 + 12040;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x820b9700
	goto loc_820B9700;
loc_820B96FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B9700:
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B9714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820B9718;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b9730
	if (ctx.cr6.eq) goto loc_820B9730;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x820B972C;
	sub_82183448(ctx, base);
	// b 0x820b9738
	goto loc_820B9738;
loc_820B9730:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820B9738;
	sub_821845A0(ctx, base);
loc_820B9738:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9770
	if (ctx.cr6.eq) goto loc_820B9770;
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// bl 0x82188378
	ctx.lr = 0x820B9754;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,12072
	ctx.r10.s64 = ctx.r11.s64 + 12072;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x820b9774
	goto loc_820B9774;
loc_820B9770:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B9774:
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B9788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B9794"))) PPC_WEAK_FUNC(sub_820B9794);
PPC_FUNC_IMPL(__imp__sub_820B9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9798"))) PPC_WEAK_FUNC(sub_820B9798);
PPC_FUNC_IMPL(__imp__sub_820B9798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B97A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bne cr6,0x820b97c0
	if (!ctx.cr6.eq) goto loc_820B97C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820B97C0:
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820B97CC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9830
	if (ctx.cr6.eq) goto loc_820B9830;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b9830
	if (ctx.cr6.eq) goto loc_820B9830;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f8368
	ctx.lr = 0x820B97F0;
	sub_820F8368(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820B97F4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f9dc8
	ctx.lr = 0x820B9808;
	sub_820F9DC8(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820B9810;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b9824
	if (!ctx.cr6.eq) goto loc_820B9824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f8a50
	ctx.lr = 0x820B9824;
	sub_820F8A50(ctx, base);
loc_820B9824:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x820b97f4
	if (ctx.cr6.lt) goto loc_820B97F4;
loc_820B9830:
	// lwz r3,1936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// bl 0x820fba38
	ctx.lr = 0x820B9838;
	sub_820FBA38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x820B9840;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9874
	if (ctx.cr6.eq) goto loc_820B9874;
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af000
	ctx.lr = 0x820B9858;
	sub_821AF000(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4c8
	ctx.lr = 0x820B9864;
	sub_820EF4C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x820f2268
	ctx.lr = 0x820B9874;
	sub_820F2268(ctx, base);
loc_820B9874:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,20500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20500, ctx.xer);
	// blt cr6,0x820b988c
	if (ctx.cr6.lt) goto loc_820B988C;
	// cmpwi cr6,r11,21500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21500, ctx.xer);
	// blt cr6,0x820b9894
	if (ctx.cr6.lt) goto loc_820B9894;
loc_820B988C:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820B9894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x820B989C;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b98ac
	if (ctx.cr6.eq) goto loc_820B98AC;
	// stw r28,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r28.u32);
	// stw r28,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r28.u32);
loc_820B98AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e208
	ctx.lr = 0x820B98B4;
	sub_8208E208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b98c0
	if (ctx.cr6.eq) goto loc_820B98C0;
	// stw r28,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r28.u32);
loc_820B98C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd88
	ctx.lr = 0x820B98C8;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b98e8
	if (ctx.cr6.eq) goto loc_820B98E8;
	// lwz r10,1560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// stw r9,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r9.u32);
loc_820B98E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x820ba2a8
	ctx.lr = 0x820B98F4;
	sub_820BA2A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7b80
	ctx.lr = 0x820B98FC;
	sub_820B7B80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x820b8f78
	ctx.lr = 0x820B9908;
	sub_820B8F78(ctx, base);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x820cbb48
	ctx.lr = 0x820B9910;
	sub_820CBB48(ctx, base);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x820ae9e8
	ctx.lr = 0x820B9918;
	sub_820AE9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B9920"))) PPC_WEAK_FUNC(sub_820B9920);
PPC_FUNC_IMPL(__imp__sub_820B9920) {
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
	// li r11,28
	ctx.r11.s64 = 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820B9954;
	sub_822AA648(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820B9970"))) PPC_WEAK_FUNC(sub_820B9970);
PPC_FUNC_IMPL(__imp__sub_820B9970) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5938
	sub_820C5938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9974"))) PPC_WEAK_FUNC(sub_820B9974);
PPC_FUNC_IMPL(__imp__sub_820B9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9978"))) PPC_WEAK_FUNC(sub_820B9978);
PPC_FUNC_IMPL(__imp__sub_820B9978) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5948
	sub_820C5948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B997C"))) PPC_WEAK_FUNC(sub_820B997C);
PPC_FUNC_IMPL(__imp__sub_820B997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9980"))) PPC_WEAK_FUNC(sub_820B9980);
PPC_FUNC_IMPL(__imp__sub_820B9980) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5958
	sub_820C5958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9984"))) PPC_WEAK_FUNC(sub_820B9984);
PPC_FUNC_IMPL(__imp__sub_820B9984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9988"))) PPC_WEAK_FUNC(sub_820B9988);
PPC_FUNC_IMPL(__imp__sub_820B9988) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c59b0
	sub_820C59B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B998C"))) PPC_WEAK_FUNC(sub_820B998C);
PPC_FUNC_IMPL(__imp__sub_820B998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9990"))) PPC_WEAK_FUNC(sub_820B9990);
PPC_FUNC_IMPL(__imp__sub_820B9990) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5a08
	sub_820C5A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9994"))) PPC_WEAK_FUNC(sub_820B9994);
PPC_FUNC_IMPL(__imp__sub_820B9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9998"))) PPC_WEAK_FUNC(sub_820B9998);
PPC_FUNC_IMPL(__imp__sub_820B9998) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5a58
	sub_820C5A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B999C"))) PPC_WEAK_FUNC(sub_820B999C);
PPC_FUNC_IMPL(__imp__sub_820B999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99A0"))) PPC_WEAK_FUNC(sub_820B99A0);
PPC_FUNC_IMPL(__imp__sub_820B99A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5aa8
	sub_820C5AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99A4"))) PPC_WEAK_FUNC(sub_820B99A4);
PPC_FUNC_IMPL(__imp__sub_820B99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99A8"))) PPC_WEAK_FUNC(sub_820B99A8);
PPC_FUNC_IMPL(__imp__sub_820B99A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5ab8
	sub_820C5AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99AC"))) PPC_WEAK_FUNC(sub_820B99AC);
PPC_FUNC_IMPL(__imp__sub_820B99AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99B0"))) PPC_WEAK_FUNC(sub_820B99B0);
PPC_FUNC_IMPL(__imp__sub_820B99B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5ac8
	sub_820C5AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99B4"))) PPC_WEAK_FUNC(sub_820B99B4);
PPC_FUNC_IMPL(__imp__sub_820B99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99B8"))) PPC_WEAK_FUNC(sub_820B99B8);
PPC_FUNC_IMPL(__imp__sub_820B99B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5b20
	sub_820C5B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99BC"))) PPC_WEAK_FUNC(sub_820B99BC);
PPC_FUNC_IMPL(__imp__sub_820B99BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99C0"))) PPC_WEAK_FUNC(sub_820B99C0);
PPC_FUNC_IMPL(__imp__sub_820B99C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5b78
	sub_820C5B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99C4"))) PPC_WEAK_FUNC(sub_820B99C4);
PPC_FUNC_IMPL(__imp__sub_820B99C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99C8"))) PPC_WEAK_FUNC(sub_820B99C8);
PPC_FUNC_IMPL(__imp__sub_820B99C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5bc8
	sub_820C5BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99CC"))) PPC_WEAK_FUNC(sub_820B99CC);
PPC_FUNC_IMPL(__imp__sub_820B99CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99D0"))) PPC_WEAK_FUNC(sub_820B99D0);
PPC_FUNC_IMPL(__imp__sub_820B99D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5c18
	sub_820C5C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99D4"))) PPC_WEAK_FUNC(sub_820B99D4);
PPC_FUNC_IMPL(__imp__sub_820B99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99D8"))) PPC_WEAK_FUNC(sub_820B99D8);
PPC_FUNC_IMPL(__imp__sub_820B99D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5c78
	sub_820C5C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99DC"))) PPC_WEAK_FUNC(sub_820B99DC);
PPC_FUNC_IMPL(__imp__sub_820B99DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99E0"))) PPC_WEAK_FUNC(sub_820B99E0);
PPC_FUNC_IMPL(__imp__sub_820B99E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5cd8
	sub_820C5CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99E4"))) PPC_WEAK_FUNC(sub_820B99E4);
PPC_FUNC_IMPL(__imp__sub_820B99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99E8"))) PPC_WEAK_FUNC(sub_820B99E8);
PPC_FUNC_IMPL(__imp__sub_820B99E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5d48
	sub_820C5D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99EC"))) PPC_WEAK_FUNC(sub_820B99EC);
PPC_FUNC_IMPL(__imp__sub_820B99EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99F0"))) PPC_WEAK_FUNC(sub_820B99F0);
PPC_FUNC_IMPL(__imp__sub_820B99F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5db8
	sub_820C5DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99F4"))) PPC_WEAK_FUNC(sub_820B99F4);
PPC_FUNC_IMPL(__imp__sub_820B99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B99F8"))) PPC_WEAK_FUNC(sub_820B99F8);
PPC_FUNC_IMPL(__imp__sub_820B99F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5e28
	sub_820C5E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B99FC"))) PPC_WEAK_FUNC(sub_820B99FC);
PPC_FUNC_IMPL(__imp__sub_820B99FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A00"))) PPC_WEAK_FUNC(sub_820B9A00);
PPC_FUNC_IMPL(__imp__sub_820B9A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5e98
	sub_820C5E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A04"))) PPC_WEAK_FUNC(sub_820B9A04);
PPC_FUNC_IMPL(__imp__sub_820B9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A08"))) PPC_WEAK_FUNC(sub_820B9A08);
PPC_FUNC_IMPL(__imp__sub_820B9A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5ef8
	sub_820C5EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A0C"))) PPC_WEAK_FUNC(sub_820B9A0C);
PPC_FUNC_IMPL(__imp__sub_820B9A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A10"))) PPC_WEAK_FUNC(sub_820B9A10);
PPC_FUNC_IMPL(__imp__sub_820B9A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5f58
	sub_820C5F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A14"))) PPC_WEAK_FUNC(sub_820B9A14);
PPC_FUNC_IMPL(__imp__sub_820B9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A18"))) PPC_WEAK_FUNC(sub_820B9A18);
PPC_FUNC_IMPL(__imp__sub_820B9A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c5fc8
	sub_820C5FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A1C"))) PPC_WEAK_FUNC(sub_820B9A1C);
PPC_FUNC_IMPL(__imp__sub_820B9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A20"))) PPC_WEAK_FUNC(sub_820B9A20);
PPC_FUNC_IMPL(__imp__sub_820B9A20) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6038
	sub_820C6038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A24"))) PPC_WEAK_FUNC(sub_820B9A24);
PPC_FUNC_IMPL(__imp__sub_820B9A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A28"))) PPC_WEAK_FUNC(sub_820B9A28);
PPC_FUNC_IMPL(__imp__sub_820B9A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c60a8
	sub_820C60A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A2C"))) PPC_WEAK_FUNC(sub_820B9A2C);
PPC_FUNC_IMPL(__imp__sub_820B9A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A30"))) PPC_WEAK_FUNC(sub_820B9A30);
PPC_FUNC_IMPL(__imp__sub_820B9A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6118
	sub_820C6118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A34"))) PPC_WEAK_FUNC(sub_820B9A34);
PPC_FUNC_IMPL(__imp__sub_820B9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A38"))) PPC_WEAK_FUNC(sub_820B9A38);
PPC_FUNC_IMPL(__imp__sub_820B9A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6198
	sub_820C6198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A3C"))) PPC_WEAK_FUNC(sub_820B9A3C);
PPC_FUNC_IMPL(__imp__sub_820B9A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A40"))) PPC_WEAK_FUNC(sub_820B9A40);
PPC_FUNC_IMPL(__imp__sub_820B9A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6218
	sub_820C6218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A44"))) PPC_WEAK_FUNC(sub_820B9A44);
PPC_FUNC_IMPL(__imp__sub_820B9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A48"))) PPC_WEAK_FUNC(sub_820B9A48);
PPC_FUNC_IMPL(__imp__sub_820B9A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6298
	sub_820C6298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9A4C"))) PPC_WEAK_FUNC(sub_820B9A4C);
PPC_FUNC_IMPL(__imp__sub_820B9A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A50"))) PPC_WEAK_FUNC(sub_820B9A50);
PPC_FUNC_IMPL(__imp__sub_820B9A50) {
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
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// bl 0x821882d0
	ctx.lr = 0x820B9A6C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9a88
	if (ctx.cr6.eq) goto loc_820B9A88;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B9A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9A9C"))) PPC_WEAK_FUNC(sub_820B9A9C);
PPC_FUNC_IMPL(__imp__sub_820B9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9AA0"))) PPC_WEAK_FUNC(sub_820B9AA0);
PPC_FUNC_IMPL(__imp__sub_820B9AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B9AA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B9AC4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r10,r11,12168
	ctx.r10.s64 = ctx.r11.s64 + 12168;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// bne cr6,0x820b9af0
	if (!ctx.cr6.eq) goto loc_820B9AF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820B9AF0:
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x820B9AFC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9b0c
	if (ctx.cr6.eq) goto loc_820B9B0C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820b9b10
	goto loc_820B9B10;
loc_820B9B0C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820B9B10:
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820B9B2C;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B9B3C"))) PPC_WEAK_FUNC(sub_820B9B3C);
PPC_FUNC_IMPL(__imp__sub_820B9B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9B40"))) PPC_WEAK_FUNC(sub_820B9B40);
PPC_FUNC_IMPL(__imp__sub_820B9B40) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12168
	ctx.r10.s64 = ctx.r11.s64 + 12168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820B9B6C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b9b88
	if (ctx.cr6.eq) goto loc_820B9B88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B9B84;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B9B88:
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

__attribute__((alias("__imp__sub_820B9BA0"))) PPC_WEAK_FUNC(sub_820B9BA0);
PPC_FUNC_IMPL(__imp__sub_820B9BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// bgt cr6,0x820b9bc8
	if (ctx.cr6.gt) goto loc_820B9BC8;
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
loc_820B9BC8:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lwz r8,-4(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9BF0"))) PPC_WEAK_FUNC(sub_820B9BF0);
PPC_FUNC_IMPL(__imp__sub_820B9BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B9BF8;
	sub_8224878C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b9c18
	if (ctx.cr6.eq) goto loc_820B9C18;
loc_820B9C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B9C18:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820B9C34;
	sub_822AA648(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// lwz r4,348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// bl 0x820b8ee0
	ctx.lr = 0x820B9C50;
	sub_820B8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9c0c
	if (ctx.cr6.eq) goto loc_820B9C0C;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,255
	ctx.r8.s64 = 255;
	// lhz r9,130(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r3,344(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bne cr6,0x820b9c8c
	if (!ctx.cr6.eq) goto loc_820B9C8C;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_820B9C8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820b9c98
	if (!ctx.cr6.eq) goto loc_820B9C98;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_820B9C98:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x820b9cb0
	if (ctx.cr6.gt) goto loc_820B9CB0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_820B9CB0:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bgt cr6,0x820b9cd0
	if (ctx.cr6.gt) goto loc_820B9CD0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_820B9CD0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B9CF4"))) PPC_WEAK_FUNC(sub_820B9CF4);
PPC_FUNC_IMPL(__imp__sub_820B9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9CF8"))) PPC_WEAK_FUNC(sub_820B9CF8);
PPC_FUNC_IMPL(__imp__sub_820B9CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8208dbb0
	ctx.lr = 0x820B9D14;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9d34
	if (ctx.cr6.eq) goto loc_820B9D34;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_820B9D34:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// adde r3,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_820B9D70"))) PPC_WEAK_FUNC(sub_820B9D70);
PPC_FUNC_IMPL(__imp__sub_820B9D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// adde r3,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9D9C"))) PPC_WEAK_FUNC(sub_820B9D9C);
PPC_FUNC_IMPL(__imp__sub_820B9D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9DA0"))) PPC_WEAK_FUNC(sub_820B9DA0);
PPC_FUNC_IMPL(__imp__sub_820B9DA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820b9dd4
	if (!ctx.cr6.eq) goto loc_820B9DD4;
loc_820B9DBC:
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
loc_820B9DD4:
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// bl 0x821882d0
	ctx.lr = 0x820B9DE4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9dbc
	if (ctx.cr6.eq) goto loc_820B9DBC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9dbc
	if (ctx.cr6.eq) goto loc_820B9DBC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820b9dbc
	if (!ctx.cr6.eq) goto loc_820B9DBC;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r7,r8,17
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFF;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_820B9E30"))) PPC_WEAK_FUNC(sub_820B9E30);
PPC_FUNC_IMPL(__imp__sub_820B9E30) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b9e5c
	if (!ctx.cr6.eq) goto loc_820B9E5C;
loc_820B9E48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B9E5C:
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1732(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b9e48
	if (ctx.cr6.eq) goto loc_820B9E48;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b9e9c
	if (!ctx.cr6.eq) goto loc_820B9E9C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x820b9e8c
	if (!ctx.cr6.eq) goto loc_820B9E8C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x820b9e48
	if (ctx.cr6.eq) goto loc_820B9E48;
loc_820B9E8C:
	// bl 0x820b9da0
	ctx.lr = 0x820B9E90;
	sub_820B9DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820b9ea0
	if (ctx.cr6.eq) goto loc_820B9EA0;
loc_820B9E9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B9EA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9EB0"))) PPC_WEAK_FUNC(sub_820B9EB0);
PPC_FUNC_IMPL(__imp__sub_820B9EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820B9EB8;
	sub_82248788(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820b9cf8
	ctx.lr = 0x820B9ED0;
	sub_820B9CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9f5c
	if (ctx.cr6.eq) goto loc_820B9F5C;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x820B9EE4;
	sub_822AA648(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8ee0
	ctx.lr = 0x820B9EF8;
	sub_820B8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9f5c
	if (ctx.cr6.eq) goto loc_820B9F5C;
	// lhz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// li r10,28
	ctx.r10.s64 = 28;
	// lhz r5,114(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// beq cr6,0x820b9f5c
	if (ctx.cr6.eq) goto loc_820B9F5C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 + 1312;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820d3d58
	ctx.lr = 0x820B9F5C;
	sub_820D3D58(ctx, base);
loc_820B9F5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820B9F64"))) PPC_WEAK_FUNC(sub_820B9F64);
PPC_FUNC_IMPL(__imp__sub_820B9F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9F68"))) PPC_WEAK_FUNC(sub_820B9F68);
PPC_FUNC_IMPL(__imp__sub_820B9F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820B9F70;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r27,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r27.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820B9FA4;
	sub_822AA648(ctx, base);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B9FB0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ba0d8
	if (ctx.cr6.eq) goto loc_820BA0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9e30
	ctx.lr = 0x820B9FC4;
	sub_820B9E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b9fdc
	if (ctx.cr6.eq) goto loc_820B9FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9920
	ctx.lr = 0x820B9FD4;
	sub_820B9920(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B9FDC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ba0d8
	if (!ctx.cr6.eq) goto loc_820BA0D8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,1908(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lwz r26,576(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 576);
	// beq cr6,0x820ba018
	if (ctx.cr6.eq) goto loc_820BA018;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820c5068
	ctx.lr = 0x820BA00C;
	sub_820C5068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ba018
	if (!ctx.cr6.eq) goto loc_820BA018;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_820BA018:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r29,r11,12200
	ctx.r29.s64 = ctx.r11.s64 + 12200;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820BA028:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820ba08c
	if (!ctx.cr6.eq) goto loc_820BA08C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ba08c
	if (!ctx.cr6.eq) goto loc_820BA08C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba064
	if (ctx.cr6.eq) goto loc_820BA064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820b9ba0
	ctx.lr = 0x820BA064;
	sub_820B9BA0(ctx, base);
loc_820BA064:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ba0e0
	if (!ctx.cr6.eq) goto loc_820BA0E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820ba0e0
	if (ctx.cr6.eq) goto loc_820BA0E0;
loc_820BA08C:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r11,r29,672
	ctx.r11.s64 = ctx.r29.s64 + 672;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ba028
	if (ctx.cr6.lt) goto loc_820BA028;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820c5258
	ctx.lr = 0x820BA0A8;
	sub_820C5258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba0d8
	if (ctx.cr6.eq) goto loc_820BA0D8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ba0d8
	if (ctx.cr6.lt) goto loc_820BA0D8;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// bl 0x820af5b8
	ctx.lr = 0x820BA0D8;
	sub_820AF5B8(ctx, base);
loc_820BA0D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820BA0E0:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82097288
	ctx.lr = 0x820BA0FC;
	sub_82097288(ctx, base);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x820b9eb0
	ctx.lr = 0x820BA118;
	sub_820B9EB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820BA120"))) PPC_WEAK_FUNC(sub_820BA120);
PPC_FUNC_IMPL(__imp__sub_820BA120) {
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
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820BA14C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// li r4,768
	ctx.r4.s64 = 768;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x820BA168;
	sub_822AA648(ctx, base);
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

__attribute__((alias("__imp__sub_820BA184"))) PPC_WEAK_FUNC(sub_820BA184);
PPC_FUNC_IMPL(__imp__sub_820BA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA188"))) PPC_WEAK_FUNC(sub_820BA188);
PPC_FUNC_IMPL(__imp__sub_820BA188) {
	PPC_FUNC_PROLOGUE();
	// li r4,768
	ctx.r4.s64 = 768;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA194"))) PPC_WEAK_FUNC(sub_820BA194);
PPC_FUNC_IMPL(__imp__sub_820BA194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA198"))) PPC_WEAK_FUNC(sub_820BA198);
PPC_FUNC_IMPL(__imp__sub_820BA198) {
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
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// bl 0x821882d0
	ctx.lr = 0x820BA1B0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba1cc
	if (ctx.cr6.eq) goto loc_820BA1CC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BA1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA1E0"))) PPC_WEAK_FUNC(sub_820BA1E0);
PPC_FUNC_IMPL(__imp__sub_820BA1E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820BA20C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ba228
	if (ctx.cr6.eq) goto loc_820BA228;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BA224;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BA228:
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

__attribute__((alias("__imp__sub_820BA240"))) PPC_WEAK_FUNC(sub_820BA240);
PPC_FUNC_IMPL(__imp__sub_820BA240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-28752
	ctx.r7.s64 = ctx.r10.s64 + -28752;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA2A4"))) PPC_WEAK_FUNC(sub_820BA2A4);
PPC_FUNC_IMPL(__imp__sub_820BA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA2A8"))) PPC_WEAK_FUNC(sub_820BA2A8);
PPC_FUNC_IMPL(__imp__sub_820BA2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BA2B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba480
	if (ctx.cr6.eq) goto loc_820BA480;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820ba480
	if (ctx.cr6.eq) goto loc_820BA480;
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// bl 0x821882d0
	ctx.lr = 0x820BA2DC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba2ec
	if (ctx.cr6.eq) goto loc_820BA2EC;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ba2f0
	goto loc_820BA2F0;
loc_820BA2EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BA2F0:
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// bl 0x821882d0
	ctx.lr = 0x820BA300;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba310
	if (ctx.cr6.eq) goto loc_820BA310;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ba314
	goto loc_820BA314;
loc_820BA310:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820BA314:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ba480
	if (ctx.cr6.eq) goto loc_820BA480;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba480
	if (ctx.cr6.eq) goto loc_820BA480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dd28
	ctx.lr = 0x820BA32C;
	sub_8208DD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba378
	if (ctx.cr6.eq) goto loc_820BA378;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r8,r10,-28752
	ctx.r8.s64 = ctx.r10.s64 + -28752;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA378:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dd48
	ctx.lr = 0x820BA380;
	sub_8208DD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba3cc
	if (ctx.cr6.eq) goto loc_820BA3CC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r8,r10,-28752
	ctx.r8.s64 = ctx.r10.s64 + -28752;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA3CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dd68
	ctx.lr = 0x820BA3D4;
	sub_8208DD68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba434
	if (ctx.cr6.eq) goto loc_820BA434;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r7,r10,-28752
	ctx.r7.s64 = ctx.r10.s64 + -28752;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwx r4,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA434:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dd88
	ctx.lr = 0x820BA43C;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ba480
	if (ctx.cr6.eq) goto loc_820BA480;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r8,r10,-28752
	ctx.r8.s64 = ctx.r10.s64 + -28752;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
loc_820BA480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BA488"))) PPC_WEAK_FUNC(sub_820BA488);
PPC_FUNC_IMPL(__imp__sub_820BA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820BA490;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8215bec8
	ctx.lr = 0x820BA4A8;
	sub_8215BEC8(ctx, base);
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x820ba4e0
	if (ctx.cr6.lt) goto loc_820BA4E0;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
loc_820BA4C4:
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r9,48(r10)
	ea = 48 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820ba4c4
	if (ctx.cr6.lt) goto loc_820BA4C4;
loc_820BA4E0:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820ba50c
	if (!ctx.cr6.lt) goto loc_820BA50C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820BA50C:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820BA51C"))) PPC_WEAK_FUNC(sub_820BA51C);
PPC_FUNC_IMPL(__imp__sub_820BA51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA520"))) PPC_WEAK_FUNC(sub_820BA520);
PPC_FUNC_IMPL(__imp__sub_820BA520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BA528;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba650
	if (ctx.cr6.eq) goto loc_820BA650;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ba650
	if (ctx.cr6.eq) goto loc_820BA650;
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// bl 0x821882d0
	ctx.lr = 0x820BA55C;
	sub_821882D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba570
	if (ctx.cr6.eq) goto loc_820BA570;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ba574
	goto loc_820BA574;
loc_820BA570:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820BA574:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x820BA588;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba598
	if (ctx.cr6.eq) goto loc_820BA598;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ba59c
	goto loc_820BA59C;
loc_820BA598:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_820BA59C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ba650
	if (ctx.cr6.eq) goto loc_820BA650;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba650
	if (ctx.cr6.eq) goto loc_820BA650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ba488
	ctx.lr = 0x820BA5B4;
	sub_820BA488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ba488
	ctx.lr = 0x820BA5C0;
	sub_820BA488(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820ba61c
	if (!ctx.cr6.eq) goto loc_820BA61C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,-28752(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28752);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820BA604;
	sub_8215BEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r4.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820BA610;
	sub_8215BEC8(ctx, base);
	// stb r29,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA61C:
	// ble cr6,0x820ba63c
	if (!ctx.cr6.gt) goto loc_820BA63C;
	// bl 0x8215bec8
	ctx.lr = 0x820BA624;
	sub_8215BEC8(ctx, base);
	// stb r29,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r29.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820BA62C;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA63C:
	// bl 0x8215bec8
	ctx.lr = 0x820BA640;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820BA64C;
	sub_8215BEC8(ctx, base);
	// stb r29,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r29.u8);
loc_820BA650:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BA658"))) PPC_WEAK_FUNC(sub_820BA658);
PPC_FUNC_IMPL(__imp__sub_820BA658) {
	PPC_FUNC_PROLOGUE();
	// b 0x820af5b8
	sub_820AF5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA65C"))) PPC_WEAK_FUNC(sub_820BA65C);
PPC_FUNC_IMPL(__imp__sub_820BA65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA660"))) PPC_WEAK_FUNC(sub_820BA660);
PPC_FUNC_IMPL(__imp__sub_820BA660) {
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
	// lwz r11,1728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1728);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ba6bc
	if (!ctx.cr6.eq) goto loc_820BA6BC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-5052
	ctx.r10.s64 = ctx.r11.s64 + -5052;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba6a0
	if (ctx.cr6.eq) goto loc_820BA6A0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820ba6a0
	if (ctx.cr6.eq) goto loc_820BA6A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1728(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1728, ctx.r11.u32);
loc_820BA6A0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba6bc
	if (ctx.cr6.eq) goto loc_820BA6BC;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820ba6bc
	if (ctx.cr6.eq) goto loc_820BA6BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r11.u32);
loc_820BA6BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BA6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA6E4"))) PPC_WEAK_FUNC(sub_820BA6E4);
PPC_FUNC_IMPL(__imp__sub_820BA6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA6E8"))) PPC_WEAK_FUNC(sub_820BA6E8);
PPC_FUNC_IMPL(__imp__sub_820BA6E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820b19c8
	sub_820B19C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA6EC"))) PPC_WEAK_FUNC(sub_820BA6EC);
PPC_FUNC_IMPL(__imp__sub_820BA6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA6F0"))) PPC_WEAK_FUNC(sub_820BA6F0);
PPC_FUNC_IMPL(__imp__sub_820BA6F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba730
	if (ctx.cr6.eq) goto loc_820BA730;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820BA714;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba730
	if (ctx.cr6.eq) goto loc_820BA730;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BA730:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA744"))) PPC_WEAK_FUNC(sub_820BA744);
PPC_FUNC_IMPL(__imp__sub_820BA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA748"))) PPC_WEAK_FUNC(sub_820BA748);
PPC_FUNC_IMPL(__imp__sub_820BA748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BA750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820BA76C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,12904
	ctx.r10.s64 = ctx.r11.s64 + 12904;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82188338
	ctx.lr = 0x820BA784;
	sub_82188338(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82188338
	ctx.lr = 0x820BA790;
	sub_82188338(ctx, base);
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r3,r30,1312
	ctx.r3.s64 = ctx.r30.s64 + 1312;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82248f70
	ctx.lr = 0x820BA7A8;
	sub_82248F70(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r29.u32);
	// stw r9,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r9.u32);
	// stb r29,1396(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1396, ctx.r29.u8);
	// bl 0x820c4ea8
	ctx.lr = 0x820BA7C8;
	sub_820C4EA8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r7,1248(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BA7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lwz r3,1964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x820BA804;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba824
	if (ctx.cr6.eq) goto loc_820BA824;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BA824:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BA83C"))) PPC_WEAK_FUNC(sub_820BA83C);
PPC_FUNC_IMPL(__imp__sub_820BA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA840"))) PPC_WEAK_FUNC(sub_820BA840);
PPC_FUNC_IMPL(__imp__sub_820BA840) {
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
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BA864;
	sub_821883B8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x821883b8
	ctx.lr = 0x820BA86C;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BA874;
	sub_821883B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba890
	if (ctx.cr6.eq) goto loc_820BA890;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BA88C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BA890:
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

__attribute__((alias("__imp__sub_820BA8A8"))) PPC_WEAK_FUNC(sub_820BA8A8);
PPC_FUNC_IMPL(__imp__sub_820BA8A8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// lbz r30,1549(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1549);
	// bl 0x82248f70
	ctx.lr = 0x820BA8D8;
	sub_82248F70(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r30,1549(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1549, ctx.r30.u8);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,1488(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1488, ctx.r11.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,1492(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1492, ctx.r11.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,1476(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1476, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r11,1396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1396, ctx.r11.u8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r11,1557(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1557, ctx.r11.u8);
	// lwz r10,-4984(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4984);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820ba92c
	if (ctx.cr6.eq) goto loc_820BA92C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x820ba930
	if (!ctx.cr6.eq) goto loc_820BA930;
loc_820BA92C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820BA930:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ba940
	if (ctx.cr6.eq) goto loc_820BA940;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_820BA940:
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_820BA95C"))) PPC_WEAK_FUNC(sub_820BA95C);
PPC_FUNC_IMPL(__imp__sub_820BA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA960"))) PPC_WEAK_FUNC(sub_820BA960);
PPC_FUNC_IMPL(__imp__sub_820BA960) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba988
	if (ctx.cr6.eq) goto loc_820BA988;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_820BA988:
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82188208
	ctx.lr = 0x820BA990;
	sub_82188208(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82188208
	ctx.lr = 0x820BA998;
	sub_82188208(ctx, base);
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

__attribute__((alias("__imp__sub_820BA9AC"))) PPC_WEAK_FUNC(sub_820BA9AC);
PPC_FUNC_IMPL(__imp__sub_820BA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA9B0"))) PPC_WEAK_FUNC(sub_820BA9B0);
PPC_FUNC_IMPL(__imp__sub_820BA9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820BA9B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ba9d8
	if (!ctx.cr6.eq) goto loc_820BA9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820af5b8
	ctx.lr = 0x820BA9D8;
	sub_820AF5B8(ctx, base);
loc_820BA9D8:
	// addi r11,r31,1312
	ctx.r11.s64 = ctx.r31.s64 + 1312;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r30.u32);
	// stw r30,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r30.u32);
	// stw r30,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r30.u32);
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// stw r30,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r30.u32);
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820baa14
	if (!ctx.cr6.gt) goto loc_820BAA14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820BAA14:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820baa28
	if (!ctx.cr6.gt) goto loc_820BAA28;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_820BAA28:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820baa38
	if (!ctx.cr6.eq) goto loc_820BAA38;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_820BAA38:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r28,r31,596
	ctx.r28.s64 = ctx.r31.s64 + 596;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bab7c
	if (ctx.cr6.eq) goto loc_820BAB7C;
	// lwz r29,1912(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820baa78
	if (!ctx.cr6.eq) goto loc_820BAA78;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x820BAA64;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820baa74
	if (ctx.cr6.eq) goto loc_820BAA74;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820baa78
	goto loc_820BAA78;
loc_820BAA74:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820BAA78:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820baac8
	if (ctx.cr6.eq) goto loc_820BAAC8;
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82096e80
	ctx.lr = 0x820BAA90;
	sub_82096E80(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stb r3,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r3.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820baac8
	if (!ctx.cr6.eq) goto loc_820BAAC8;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820baac8
	if (!ctx.cr6.eq) goto loc_820BAAC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f15c0
	ctx.lr = 0x820BAAB4;
	sub_820F15C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820baac8
	if (!ctx.cr6.eq) goto loc_820BAAC8;
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82097218
	ctx.lr = 0x820BAAC4;
	sub_82097218(ctx, base);
	// stb r3,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r3.u8);
loc_820BAAC8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820baaec
	if (!ctx.cr6.eq) goto loc_820BAAEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820bab14
	if (ctx.cr6.eq) goto loc_820BAB14;
loc_820BAAEC:
	// bl 0x8215bd60
	ctx.lr = 0x820BAAF0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bab0c
	if (ctx.cr6.eq) goto loc_820BAB0C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r4,r11,0,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// b 0x820bab10
	goto loc_820BAB10;
loc_820BAB0C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820BAB10:
	// bl 0x820c66e8
	ctx.lr = 0x820BAB14;
	sub_820C66E8(ctx, base);
loc_820BAB14:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820bab30
	if (!ctx.cr6.eq) goto loc_820BAB30;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// bl 0x820c66e8
	ctx.lr = 0x820BAB30;
	sub_820C66E8(ctx, base);
loc_820BAB30:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r11.u32);
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r8.u32);
	// stw r10,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r10.u32);
	// lwz r7,36(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// stw r6,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r6.u32);
	// bl 0x820ba660
	ctx.lr = 0x820BAB64;
	sub_820BA660(ctx, base);
	// lbz r5,573(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 573);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bab7c
	if (ctx.cr6.eq) goto loc_820BAB7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef488
	ctx.lr = 0x820BAB7C;
	sub_820EF488(ctx, base);
loc_820BAB7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820BAB84"))) PPC_WEAK_FUNC(sub_820BAB84);
PPC_FUNC_IMPL(__imp__sub_820BAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAB88"))) PPC_WEAK_FUNC(sub_820BAB88);
PPC_FUNC_IMPL(__imp__sub_820BAB88) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820babb4
	if (!ctx.cr6.eq) goto loc_820BABB4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
loc_820BABB4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,1892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820babd0
	if (ctx.cr6.eq) goto loc_820BABD0;
	// lbz r11,585(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 585);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bac20
	if (ctx.cr6.eq) goto loc_820BAC20;
loc_820BABD0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820c65d0
	ctx.lr = 0x820BABD8;
	sub_820C65D0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BABEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ba9b0
	ctx.lr = 0x820BABF4;
	sub_820BA9B0(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BAC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r6,1556(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1556);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820bac20
	if (!ctx.cr6.eq) goto loc_820BAC20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d6bf0
	ctx.lr = 0x820BAC20;
	sub_820D6BF0(ctx, base);
loc_820BAC20:
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

__attribute__((alias("__imp__sub_820BAC34"))) PPC_WEAK_FUNC(sub_820BAC34);
PPC_FUNC_IMPL(__imp__sub_820BAC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAC38"))) PPC_WEAK_FUNC(sub_820BAC38);
PPC_FUNC_IMPL(__imp__sub_820BAC38) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bac60
	if (!ctx.cr6.eq) goto loc_820BAC60;
loc_820BAC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BAC60:
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820BAC70;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bac4c
	if (ctx.cr6.eq) goto loc_820BAC4C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bac4c
	if (ctx.cr6.eq) goto loc_820BAC4C;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAC98"))) PPC_WEAK_FUNC(sub_820BAC98);
PPC_FUNC_IMPL(__imp__sub_820BAC98) {
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
	// lwz r11,344(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,20500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20500, ctx.xer);
	// blt cr6,0x820bacd0
	if (ctx.cr6.lt) goto loc_820BACD0;
	// cmpwi cr6,r11,21500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21500, ctx.xer);
	// bge cr6,0x820bacd0
	if (!ctx.cr6.lt) goto loc_820BACD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BACD0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822e6048
	ctx.lr = 0x820BACD8;
	sub_822E6048(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,6
	ctx.r9.s64 = 6;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BACF8"))) PPC_WEAK_FUNC(sub_820BACF8);
PPC_FUNC_IMPL(__imp__sub_820BACF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820bad00
	sub_820BAD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAD00"))) PPC_WEAK_FUNC(sub_820BAD00);
PPC_FUNC_IMPL(__imp__sub_820BAD00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13056
	ctx.r9.s64 = ctx.r11.s64 + 13056;
	// addi r8,r10,13048
	ctx.r8.s64 = ctx.r10.s64 + 13048;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821857f0
	ctx.lr = 0x820BAD3C;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BAD44;
	sub_821883B8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bad60
	if (ctx.cr6.eq) goto loc_820BAD60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BAD5C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BAD60:
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

__attribute__((alias("__imp__sub_820BAD78"))) PPC_WEAK_FUNC(sub_820BAD78);
PPC_FUNC_IMPL(__imp__sub_820BAD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820BAD80;
	sub_82248768(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BAD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bb084
	if (ctx.cr6.eq) goto loc_820BB084;
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bb084
	if (ctx.cr6.eq) goto loc_820BB084;
	// lwz r10,10720(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10720);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820baf48
	if (!ctx.cr6.eq) goto loc_820BAF48;
	// lwz r26,3020(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3020);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820bb084
	if (ctx.cr6.eq) goto loc_820BB084;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r10,13136
	ctx.r10.s64 = ctx.r10.s64 + 13136;
	// addi r9,r9,13124
	ctx.r9.s64 = ctx.r9.s64 + 13124;
	// addi r8,r8,9000
	ctx.r8.s64 = ctx.r8.s64 + 9000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r7,13116
	ctx.r7.s64 = ctx.r7.s64 + 13116;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r6,r6,13108
	ctx.r6.s64 = ctx.r6.s64 + 13108;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r5,r5,13096
	ctx.r5.s64 = ctx.r5.s64 + 13096;
	// addi r4,r4,8068
	ctx.r4.s64 = ctx.r4.s64 + 8068;
	// addi r3,r3,13088
	ctx.r3.s64 = ctx.r3.s64 + 13088;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r27,r11,1696
	ctx.r27.s64 = ctx.r11.s64 + 1696;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r29,r10,-8
	ctx.r29.s64 = ctx.r10.s64 + -8;
	// addi r30,r24,10692
	ctx.r30.s64 = ctx.r24.s64 + 10692;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r25,1
	ctx.r25.s64 = 1;
loc_820BAE6C:
	// lwz r23,4(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r22,8(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82233920
	ctx.lr = 0x820BAE80;
	sub_82233920(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82233920
	ctx.lr = 0x820BAE90;
	sub_82233920(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c79c8
	ctx.lr = 0x820BAEA8;
	sub_820C79C8(ctx, base);
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bl 0x820c79c8
	ctx.lr = 0x820BAEC4;
	sub_820C79C8(ctx, base);
	// lbz r10,35(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BAEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BAF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BAF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzu r4,24(r29)
	ea = 24 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BAF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r25,28(r30)
	ea = 28 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// bne 0x820bae6c
	if (!ctx.cr0.eq) goto loc_820BAE6C;
loc_820BAF48:
	// addi r27,r24,10728
	ctx.r27.s64 = ctx.r24.s64 + 10728;
	// li r26,2
	ctx.r26.s64 = 2;
loc_820BAF50:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820baf74
	if (!ctx.cr6.eq) goto loc_820BAF74;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820bb078
	if (!ctx.cr6.eq) goto loc_820BB078;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// b 0x820baf8c
	goto loc_820BAF8C;
loc_820BAF74:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820bb078
	if (!ctx.cr6.eq) goto loc_820BB078;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820bb078
	if (!ctx.cr6.eq) goto loc_820BB078;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_820BAF8C:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x820baf9c
	if (!ctx.cr6.eq) goto loc_820BAF9C;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bafa8
	goto loc_820BAFA8;
loc_820BAF9C:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820BAFA8:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BAFB8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820bafb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BAFB8;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r28,r7,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r8,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82096f18
	ctx.lr = 0x820BB038;
	sub_82096F18(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82289c50
	ctx.lr = 0x820BB048;
	sub_82289C50(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BB060;
	sub_82289C50(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BB078;
	sub_82289C50(ctx, base);
loc_820BB078:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// bne 0x820baf50
	if (!ctx.cr0.eq) goto loc_820BAF50;
loc_820BB084:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820BB08C"))) PPC_WEAK_FUNC(sub_820BB08C);
PPC_FUNC_IMPL(__imp__sub_820BB08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB090"))) PPC_WEAK_FUNC(sub_820BB090);
PPC_FUNC_IMPL(__imp__sub_820BB090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BB098;
	sub_82248778(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,84(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,66
	ctx.r24.s64 = 66;
	// addi r25,r11,13156
	ctx.r25.s64 = ctx.r11.s64 + 13156;
loc_820BB0BC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820BB0CC;
	sub_82248910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bb24c
	if (ctx.cr6.lt) goto loc_820BB24C;
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bb24c
	if (ctx.cr6.lt) goto loc_820BB24C;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// stw r28,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BB150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BB170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// bne cr6,0x820bb188
	if (!ctx.cr6.eq) goto loc_820BB188;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb194
	goto loc_820BB194;
loc_820BB188:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB194:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r9.u64);
	// bne cr6,0x820bb1ec
	if (!ctx.cr6.eq) goto loc_820BB1EC;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb1f8
	goto loc_820BB1F8;
loc_820BB1EC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB1F8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r30,80
	ctx.r10.s64 = ctx.r30.s64 + 80;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r9.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,96(r30)
	PPC_STORE_U64(ctx.r30.u32 + 96, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,104(r30)
	PPC_STORE_U64(ctx.r30.u32 + 104, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,120(r30)
	PPC_STORE_U64(ctx.r30.u32 + 120, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,136(r30)
	PPC_STORE_U64(ctx.r30.u32 + 136, ctx.r9.u64);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r8.u32);
loc_820BB24C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,64
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 64, ctx.xer);
	// blt cr6,0x820bb0bc
	if (ctx.cr6.lt) goto loc_820BB0BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,13144
	ctx.r25.s64 = ctx.r11.s64 + 13144;
loc_820BB264:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820BB274;
	sub_82248910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bb3f4
	if (ctx.cr6.lt) goto loc_820BB3F4;
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bb3f4
	if (ctx.cr6.lt) goto loc_820BB3F4;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
	// stw r28,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r28.u32);
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BB2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BB318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// bne cr6,0x820bb330
	if (!ctx.cr6.eq) goto loc_820BB330;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb33c
	goto loc_820BB33C;
loc_820BB330:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB33C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r9.u64);
	// bne cr6,0x820bb394
	if (!ctx.cr6.eq) goto loc_820BB394;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb3a0
	goto loc_820BB3A0;
loc_820BB394:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB3A0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r30,80
	ctx.r10.s64 = ctx.r30.s64 + 80;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r9.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,96(r30)
	PPC_STORE_U64(ctx.r30.u32 + 96, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,104(r30)
	PPC_STORE_U64(ctx.r30.u32 + 104, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,120(r30)
	PPC_STORE_U64(ctx.r30.u32 + 120, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,136(r30)
	PPC_STORE_U64(ctx.r30.u32 + 136, ctx.r9.u64);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r8.u32);
loc_820BB3F4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// blt cr6,0x820bb264
	if (ctx.cr6.lt) goto loc_820BB264;
	// li r4,576
	ctx.r4.s64 = 576;
	// addi r3,r27,10144
	ctx.r3.s64 = ctx.r27.s64 + 10144;
	// bl 0x822aa648
	ctx.lr = 0x820BB40C;
	sub_822AA648(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r27,10192
	ctx.r30.s64 = ctx.r27.s64 + 10192;
	// addi r28,r11,-28672
	ctx.r28.s64 = ctx.r11.s64 + -28672;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
loc_820BB41C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-48(r30)
	PPC_STORE_U32(ctx.r30.u32 + -48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BB450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// stw r3,-44(r30)
	PPC_STORE_U32(ctx.r30.u32 + -44, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820bb56c
	if (ctx.cr6.lt) goto loc_820BB56C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bb56c
	if (ctx.cr6.lt) goto loc_820BB56C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BB47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,-48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r9,-40(r30)
	PPC_STORE_U32(ctx.r30.u32 + -40, ctx.r9.u32);
	// bne cr6,0x820bb498
	if (!ctx.cr6.eq) goto loc_820BB498;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb4a4
	goto loc_820BB4A4;
loc_820BB498:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB4A4:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r30,-32
	ctx.r9.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,-32(r30)
	PPC_STORE_U64(ctx.r30.u32 + -32, ctx.r10.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,-24(r30)
	PPC_STORE_U64(ctx.r30.u32 + -24, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,-16(r30)
	PPC_STORE_U64(ctx.r30.u32 + -16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r4.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r9.u64);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,-44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820BB500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,-44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r6,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r6.u32);
	// bne cr6,0x820bb51c
	if (!ctx.cr6.eq) goto loc_820BB51C;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820bb528
	goto loc_820BB528;
loc_820BB51C:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BB528:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r5.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r4.u64);
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r11.u64);
loc_820BB56C:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r11,r28,36
	ctx.r11.s64 = ctx.r28.s64 + 36;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bb41c
	if (ctx.cr6.lt) goto loc_820BB41C;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r27,10720
	ctx.r3.s64 = ctx.r27.s64 + 10720;
	// bl 0x822aa648
	ctx.lr = 0x820BB58C;
	sub_822AA648(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BB594"))) PPC_WEAK_FUNC(sub_820BB594);
PPC_FUNC_IMPL(__imp__sub_820BB594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB598"))) PPC_WEAK_FUNC(sub_820BB598);
PPC_FUNC_IMPL(__imp__sub_820BB598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x820BB5A0;
	sub_82248754(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82249928
	ctx.lr = 0x820BB5A8;
	sub_82249928(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r29,84(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r18,r11,-28704
	ctx.r18.s64 = ctx.r11.s64 + -28704;
	// lfs f29,11884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11884);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,11312(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11312);
	ctx.f28.f64 = double(temp.f32);
	// stfs f31,280(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,284(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f30,268(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
loc_820BB604:
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r26,r11,10144
	ctx.r26.s64 = ctx.r11.s64 + 10144;
	// lwz r11,10144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820bbca0
	if (ctx.cr6.lt) goto loc_820BBCA0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820bbca0
	if (ctx.cr6.lt) goto loc_820BBCA0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,184(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// lwz r7,192(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,180(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r22,r9,r11
	ctx.r22.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r21,r9,r10
	ctx.r21.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r24,r10,r8
	ctx.r24.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r20,r7,r11
	ctx.r20.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r19,r7,r10
	ctx.r19.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// bgt cr6,0x820bb690
	if (ctx.cr6.gt) goto loc_820BB690;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bb684
	// bdzf 4*cr6+eq,0x820bb68c
	// bne cr6,0x820bb68c
	if (!ctx.cr6.eq) goto loc_820BB68C;
loc_820BB684:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x820bb690
	goto loc_820BB690;
loc_820BB68C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_820BB690:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x820bb6c0
	if (!ctx.cr6.eq) goto loc_820BB6C0;
	// lwz r10,48(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmpwi cr6,r11,2154
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2154, ctx.xer);
	// beq cr6,0x820bbca0
	if (ctx.cr6.eq) goto loc_820BBCA0;
	// cmpwi cr6,r11,2155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2155, ctx.xer);
	// beq cr6,0x820bbca0
	if (ctx.cr6.eq) goto loc_820BBCA0;
	// lwz r11,1360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820bb6ec
	if (!ctx.cr6.eq) goto loc_820BB6EC;
	// b 0x820bbca0
	goto loc_820BBCA0;
loc_820BB6C0:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x820bb6ec
	if (!ctx.cr6.eq) goto loc_820BB6EC;
	// lwz r10,48(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmpwi cr6,r11,2156
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2156, ctx.xer);
	// beq cr6,0x820bbca0
	if (ctx.cr6.eq) goto loc_820BBCA0;
	// cmpwi cr6,r11,2157
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2157, ctx.xer);
	// beq cr6,0x820bbca0
	if (ctx.cr6.eq) goto loc_820BBCA0;
	// lwz r11,1364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bbca0
	if (ctx.cr6.eq) goto loc_820BBCA0;
loc_820BB6EC:
	// ld r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f30,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820BB718;
	sub_82187400(ctx, base);
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// ld r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// stfs f30,332(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820BB744;
	sub_82187400(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lfs f0,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f13,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r27,48
	ctx.r31.s64 = ctx.r27.s64 + 48;
	// addi r30,r24,48
	ctx.r30.s64 = ctx.r24.s64 + 48;
	// ld r16,0(r9)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r15,0(r5)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r16,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r16.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f7,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// std r15,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r15.u64);
	// stfs f5,232(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// ld r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// lfs f2,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// lfs f1,56(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,48(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820BB814;
	sub_820A42E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820a42e0
	ctx.lr = 0x820BB81C;
	sub_820A42E0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820bb938
	if (ctx.cr6.eq) goto loc_820BB938;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// fadds f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f0,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r16,r1,160
	ctx.r16.s64 = ctx.r1.s64 + 160;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lfs f6,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f13,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f3,208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f2,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsubs f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f1,212(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f10,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,0(r16)
	PPC_STORE_U64(ctx.r16.u32 + 0, ctx.r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,8(r16)
	PPC_STORE_U64(ctx.r16.u32 + 8, ctx.r10.u64);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// b 0x820bb9f0
	goto loc_820BB9F0;
loc_820BB938:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r3.u64);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f11,f1,f3
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
loc_820BB9F0:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x820a42e0
	ctx.lr = 0x820BB9F8;
	sub_820A42E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x820BBA00;
	sub_820A42E0(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82192688
	ctx.lr = 0x820BBA10;
	sub_82192688(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82192688
	ctx.lr = 0x820BBA20;
	sub_82192688(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82191f88
	ctx.lr = 0x820BBA2C;
	sub_82191F88(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82191f88
	ctx.lr = 0x820BBA38;
	sub_82191F88(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820bbae4
	if (ctx.cr6.eq) goto loc_820BBAE4;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_820BBA60:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x820bba60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BBA60;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82096f18
	ctx.lr = 0x820BBA78;
	sub_82096F18(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82289c50
	ctx.lr = 0x820BBA88;
	sub_82289C50(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82289c50
	ctx.lr = 0x820BBA98;
	sub_82289C50(ctx, base);
	// lfs f0,628(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,692(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bne cr6,0x820bbab8
	if (!ctx.cr6.eq) goto loc_820BBAB8;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x820bbabc
	goto loc_820BBABC;
loc_820BBAB8:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
loc_820BBABC:
	// fmuls f1,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x820bbad0
	if (!ctx.cr6.lt) goto loc_820BBAD0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x820bbadc
	goto loc_820BBADC;
loc_820BBAD0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820bbadc
	if (!ctx.cr6.gt) goto loc_820BBADC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_820BBADC:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x821876f8
	ctx.lr = 0x820BBAE4;
	sub_821876F8(ctx, base);
loc_820BBAE4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820bbc14
	if (ctx.cr6.eq) goto loc_820BBC14;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820BBB34;
	sub_82289C50(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r18,16
	ctx.r5.s64 = ctx.r18.s64 + 16;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bl 0x820a2b10
	ctx.lr = 0x820BBB58;
	sub_820A2B10(ctx, base);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lfs f12,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// lfs f9,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f7,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,244(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// bl 0x82187200
	ctx.lr = 0x820BBBC0;
	sub_82187200(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x820bbc80
	goto loc_820BBC80;
loc_820BBC14:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820bbc28
	if (!ctx.cr6.eq) goto loc_820BBC28;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// b 0x820bbc34
	goto loc_820BBC34;
loc_820BBC28:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820BBC34:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,440
	ctx.r10.s64 = ctx.r1.s64 + 440;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BBC44:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820bbc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BBC44;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BBC70;
	sub_82289C50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BBC80;
	sub_82289C50(ctx, base);
loc_820BBC80:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BBC90;
	sub_82289C50(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BBCA0;
	sub_82289C50(ctx, base);
loc_820BBCA0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x820bb604
	if (ctx.cr6.lt) goto loc_820BB604;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82249974
	ctx.lr = 0x820BBCB8;
	sub_82249974(ctx, base);
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_820BBCBC"))) PPC_WEAK_FUNC(sub_820BBCBC);
PPC_FUNC_IMPL(__imp__sub_820BBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBCC0"))) PPC_WEAK_FUNC(sub_820BBCC0);
PPC_FUNC_IMPL(__imp__sub_820BBCC0) {
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
	// lis r4,17241
	ctx.r4.s64 = 1129906176;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19534
	ctx.r4.u64 = ctx.r4.u64 | 19534;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820BBCEC;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x82185740
	ctx.lr = 0x820BBCFC;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r9,r11,13056
	ctx.r9.s64 = ctx.r11.s64 + 13056;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r8,r10,13048
	ctx.r8.s64 = ctx.r10.s64 + 13048;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// li r4,10080
	ctx.r4.s64 = 10080;
	// bl 0x822aa648
	ctx.lr = 0x820BBD30;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820bb090
	ctx.lr = 0x820BBD3C;
	sub_820BB090(ctx, base);
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

__attribute__((alias("__imp__sub_820BBD58"))) PPC_WEAK_FUNC(sub_820BBD58);
PPC_FUNC_IMPL(__imp__sub_820BBD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820BBD60;
	sub_82248768(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r10,1224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r28,84(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// ble cr6,0x820bc10c
	if (!ctx.cr6.gt) goto loc_820BC10C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r27,r3,-76
	ctx.r27.s64 = ctx.r3.s64 + -76;
	// addi r26,r11,-28704
	ctx.r26.s64 = ctx.r11.s64 + -28704;
loc_820BBDE8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r24,r1,256
	ctx.r24.s64 = ctx.r1.s64 + 256;
	// lwz r9,180(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lwz r8,184(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r7,192(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r25,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r25.u64);
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzu r10,144(r27)
	ea = 144 + ctx.r27.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// std r6,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r6.u64);
	// stfs f30,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r24,r10,r8
	ctx.r24.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r23,r11,r7
	ctx.r23.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r22,r10,r7
	ctx.r22.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bl 0x82187400
	ctx.lr = 0x820BBE48;
	sub_82187400(ctx, base);
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// ld r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f30,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820BBE74;
	sub_82187400(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r20,0(r3)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// lfs f2,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// std r20,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r20.u64);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fsubs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820BBF44;
	sub_820A42E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a42e0
	ctx.lr = 0x820BBF4C;
	sub_820A42E0(ctx, base);
	// ld r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// ld r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f10,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lfs f1,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820BC00C;
	sub_820A42E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820a42e0
	ctx.lr = 0x820BC014;
	sub_820A42E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82192688
	ctx.lr = 0x820BC024;
	sub_82192688(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82192688
	ctx.lr = 0x820BC034;
	sub_82192688(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82191f88
	ctx.lr = 0x820BC040;
	sub_82191F88(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82191f88
	ctx.lr = 0x820BC04C;
	sub_82191F88(ctx, base);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820BC094;
	sub_82289C50(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r9.u64);
	// stfs f31,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,48(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820BC0C8;
	sub_82289C50(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r6.u64);
	// bl 0x82289c50
	ctx.lr = 0x820BC0EC;
	sub_82289C50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BC0FC;
	sub_82289C50(ctx, base);
	// lwz r5,52(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820bbde8
	if (ctx.cr6.lt) goto loc_820BBDE8;
loc_820BC10C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820bb598
	ctx.lr = 0x820BC114;
	sub_820BB598(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820bad78
	ctx.lr = 0x820BC11C;
	sub_820BAD78(ctx, base);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x822310a0
	ctx.lr = 0x820BC128;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bc144
	if (!ctx.cr6.eq) goto loc_820BC144;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BC144:
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820BC150;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc170
	if (ctx.cr6.eq) goto loc_820BC170;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x820bdf40
	ctx.lr = 0x820BC170;
	sub_820BDF40(ctx, base);
loc_820BC170:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820BC180"))) PPC_WEAK_FUNC(sub_820BC180);
PPC_FUNC_IMPL(__imp__sub_820BC180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820bbd58
	sub_820BBD58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC188"))) PPC_WEAK_FUNC(sub_820BC188);
PPC_FUNC_IMPL(__imp__sub_820BC188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820BC190;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmpwi cr6,r5,512
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 512, ctx.xer);
	// blt cr6,0x820bc1e0
	if (ctx.cr6.lt) goto loc_820BC1E0;
	// cmpwi cr6,r5,3584
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3584, ctx.xer);
	// bgt cr6,0x820bc1e0
	if (ctx.cr6.gt) goto loc_820BC1E0;
	// cmpwi cr6,r5,2596
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2596, ctx.xer);
	// ble cr6,0x820bc1d0
	if (!ctx.cr6.gt) goto loc_820BC1D0;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x820bc1f8
	goto loc_820BC1F8;
loc_820BC1D0:
	// cmpwi cr6,r5,1500
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1500, ctx.xer);
	// bge cr6,0x820bc1f8
	if (!ctx.cr6.lt) goto loc_820BC1F8;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x820bc1f8
	goto loc_820BC1F8;
loc_820BC1E0:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// bl 0x8208e568
	ctx.lr = 0x820BC1E8;
	sub_8208E568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc1f8
	if (ctx.cr6.eq) goto loc_820BC1F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820BC1F8:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820bc218
	if (!ctx.cr6.eq) goto loc_820BC218;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820BC218:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820bc244
	if (ctx.cr6.eq) goto loc_820BC244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc244
	if (ctx.cr6.eq) goto loc_820BC244;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820bc238
	if (ctx.cr6.eq) goto loc_820BC238;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bc248
	if (!ctx.cr6.eq) goto loc_820BC248;
loc_820BC238:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820BC244:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_820BC248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820BC250"))) PPC_WEAK_FUNC(sub_820BC250);
PPC_FUNC_IMPL(__imp__sub_820BC250) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1788);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x820bc268
	if (ctx.cr6.lt) goto loc_820BC268;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BC268:
	// addi r10,r10,442
	ctx.r10.s64 = ctx.r10.s64 + 442;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r10,1788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1788);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,1788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1788, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC288"))) PPC_WEAK_FUNC(sub_820BC288);
PPC_FUNC_IMPL(__imp__sub_820BC288) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC290"))) PPC_WEAK_FUNC(sub_820BC290);
PPC_FUNC_IMPL(__imp__sub_820BC290) {
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
	// bl 0x820aa0c0
	ctx.lr = 0x820BC2A8;
	sub_820AA0C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,1748
	ctx.r10.s64 = ctx.r31.s64 + 1748;
	// addi r9,r11,13164
	ctx.r9.s64 = ctx.r11.s64 + 13164;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r31,1768
	ctx.r10.s64 = ctx.r31.s64 + 1768;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820BC308"))) PPC_WEAK_FUNC(sub_820BC308);
PPC_FUNC_IMPL(__imp__sub_820BC308) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13164
	ctx.r10.s64 = ctx.r11.s64 + 13164;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820ab1d0
	ctx.lr = 0x820BC334;
	sub_820AB1D0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bc350
	if (ctx.cr6.eq) goto loc_820BC350;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BC34C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BC350:
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

__attribute__((alias("__imp__sub_820BC368"))) PPC_WEAK_FUNC(sub_820BC368);
PPC_FUNC_IMPL(__imp__sub_820BC368) {
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
	// bl 0x820a8e68
	ctx.lr = 0x820BC380;
	sub_820A8E68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,1768
	ctx.r10.s64 = ctx.r31.s64 + 1768;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820BC3C8"))) PPC_WEAK_FUNC(sub_820BC3C8);
PPC_FUNC_IMPL(__imp__sub_820BC3C8) {
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
	// lwz r3,1744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bc430
	if (ctx.cr6.eq) goto loc_820BC430;
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bc430
	if (ctx.cr6.eq) goto loc_820BC430;
	// lwz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bc430
	if (ctx.cr6.eq) goto loc_820BC430;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r11,r11,1600
	ctx.r11.s64 = ctx.r11.s64 + 1600;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc424
	if (ctx.cr6.eq) goto loc_820BC424;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820bc44c
	if (!ctx.cr6.eq) goto loc_820BC44C;
loc_820BC424:
	// lwz r11,1316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820bc46c
	if (ctx.cr6.eq) goto loc_820BC46C;
loc_820BC430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BC434:
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
loc_820BC44C:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820bc460
	if (ctx.cr6.eq) goto loc_820BC460;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820bc46c
	if (!ctx.cr6.eq) goto loc_820BC46C;
loc_820BC460:
	// lwz r11,1316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820bc430
	if (!ctx.cr6.eq) goto loc_820BC430;
loc_820BC46C:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lhz r8,1638(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1638);
	// lhz r10,1640(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1640);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820bc430
	if (ctx.cr6.eq) goto loc_820BC430;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bc430
	if (ctx.cr6.eq) goto loc_820BC430;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,13228
	ctx.r11.s64 = ctx.r11.s64 + 13228;
	// addi r9,r9,13208
	ctx.r9.s64 = ctx.r9.s64 + 13208;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r30,-4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x820f03b0
	ctx.lr = 0x820BC4B4;
	sub_820F03B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x820f03b0
	ctx.lr = 0x820BC4C0;
	sub_820F03B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bc434
	goto loc_820BC434;
}

__attribute__((alias("__imp__sub_820BC4C8"))) PPC_WEAK_FUNC(sub_820BC4C8);
PPC_FUNC_IMPL(__imp__sub_820BC4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BC4D0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820bc4ec
	if (!ctx.cr6.eq) goto loc_820BC4EC;
loc_820BC4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BC4EC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821882a0
	ctx.lr = 0x820BC4F4;
	sub_821882A0(ctx, base);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x821882d0
	ctx.lr = 0x820BC500;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc4e0
	if (ctx.cr6.eq) goto loc_820BC4E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc4e0
	if (ctx.cr6.eq) goto loc_820BC4E0;
	// lwz r10,440(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,1788(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x820bc560
	if (!ctx.cr6.gt) goto loc_820BC560;
	// addi r31,r29,1768
	ctx.r31.s64 = ctx.r29.s64 + 1768;
loc_820BC534:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc54c
	if (ctx.cr6.eq) goto loc_820BC54C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BC54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BC54C:
	// lwz r11,1788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x820bc534
	if (ctx.cr6.gt) goto loc_820BC534;
loc_820BC560:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BC56C"))) PPC_WEAK_FUNC(sub_820BC56C);
PPC_FUNC_IMPL(__imp__sub_820BC56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC570"))) PPC_WEAK_FUNC(sub_820BC570);
PPC_FUNC_IMPL(__imp__sub_820BC570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820BC578;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1756);
	// bl 0x8208dfe8
	ctx.lr = 0x820BC58C;
	sub_8208DFE8(ctx, base);
	// li r28,9
	ctx.r28.s64 = 9;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc644
	if (ctx.cr6.eq) goto loc_820BC644;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,1372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1372, ctx.r10.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r9,1360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820bc5c0
	if (!ctx.cr6.eq) goto loc_820BC5C0;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x820bc668
	goto loc_820BC668;
loc_820BC5C0:
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820bc5d8
	if (!ctx.cr6.eq) goto loc_820BC5D8;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x820bc668
	goto loc_820BC668;
loc_820BC5D8:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208dcb8
	ctx.lr = 0x820BC5E0;
	sub_8208DCB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc5f4
	if (ctx.cr6.eq) goto loc_820BC5F4;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x820bc668
	goto loc_820BC668;
loc_820BC5F4:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208dcf0
	ctx.lr = 0x820BC5FC;
	sub_8208DCF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc610
	if (ctx.cr6.eq) goto loc_820BC610;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
loc_820BC608:
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// b 0x820bc66c
	goto loc_820BC66C;
loc_820BC610:
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bc608
	if (ctx.cr6.eq) goto loc_820BC608;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x820bc668
	goto loc_820BC668;
loc_820BC644:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208e568
	ctx.lr = 0x820BC64C;
	sub_8208E568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc66c
	if (ctx.cr6.eq) goto loc_820BC66C;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x820bc66c
	if (!ctx.cr6.eq) goto loc_820BC66C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_820BC668:
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_820BC66C:
	// lwz r30,1752(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x820a8e50
	ctx.lr = 0x820BC678;
	sub_820A8E50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x820d6d90
	ctx.lr = 0x820BC68C;
	sub_820D6D90(ctx, base);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bc6a8
	if (!ctx.cr6.eq) goto loc_820BC6A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820BC6A8:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820BC6B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc6c4
	if (ctx.cr6.eq) goto loc_820BC6C4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bc6c8
	goto loc_820BC6C8;
loc_820BC6C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820BC6C8:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lbz r10,573(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc704
	if (ctx.cr6.eq) goto loc_820BC704;
	// bl 0x820f0948
	ctx.lr = 0x820BC6DC;
	sub_820F0948(ctx, base);
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822e6048
	ctx.lr = 0x820BC6E8;
	sub_822E6048(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc704
	if (ctx.cr6.eq) goto loc_820BC704;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820bc704
	if (ctx.cr6.eq) goto loc_820BC704;
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
loc_820BC704:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820bc784
	if (ctx.cr6.eq) goto loc_820BC784;
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820bc744
	if (!ctx.cr6.gt) goto loc_820BC744;
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x820a8e50
	ctx.lr = 0x820BC72C;
	sub_820A8E50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a80f8
	ctx.lr = 0x820BC73C;
	sub_820A80F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc784
	if (ctx.cr6.eq) goto loc_820BC784;
loc_820BC744:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lwz r9,1756(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r8,1744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r11,26215
	ctx.r6.u64 = ctx.r11.u64 | 26215;
	// mulhw r5,r9,r6
	ctx.r5.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// addi r11,r11,2130
	ctx.r11.s64 = ctx.r11.s64 + 2130;
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// stb r7,1398(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1398, ctx.r7.u8);
loc_820BC784:
	// stw r29,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r29.u32);
	// stw r29,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r29.u32);
	// lwz r3,1756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// bl 0x8208e228
	ctx.lr = 0x820BC794;
	sub_8208E228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc7ac
	if (ctx.cr6.eq) goto loc_820BC7AC;
	// lwz r3,1756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// bl 0x820f23b8
	ctx.lr = 0x820BC7A4;
	sub_820F23B8(ctx, base);
	// stw r3,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r3.u32);
	// stw r29,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r29.u32);
loc_820BC7AC:
	// lwz r3,1756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// bl 0x8208dfe8
	ctx.lr = 0x820BC7B4;
	sub_8208DFE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc7cc
	if (ctx.cr6.eq) goto loc_820BC7CC;
	// lwz r3,1756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// bl 0x820f23b8
	ctx.lr = 0x820BC7C4;
	sub_820F23B8(ctx, base);
	// stw r3,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r3.u32);
	// stw r29,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r29.u32);
loc_820BC7CC:
	// lwz r6,1764(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,1760(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	// lwz r4,1756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x820f03a8
	ctx.lr = 0x820BC7E4;
	sub_820F03A8(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,1484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1484, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820BC7FC"))) PPC_WEAK_FUNC(sub_820BC7FC);
PPC_FUNC_IMPL(__imp__sub_820BC7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC800"))) PPC_WEAK_FUNC(sub_820BC800);
PPC_FUNC_IMPL(__imp__sub_820BC800) {
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
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,1683(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1683);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bc9b4
	if (!ctx.cr6.eq) goto loc_820BC9B4;
	// lwz r3,440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// bl 0x8208e6d0
	ctx.lr = 0x820BC82C;
	sub_8208E6D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bc90c
	if (!ctx.cr6.eq) goto loc_820BC90C;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208e008
	ctx.lr = 0x820BC83C;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bc90c
	if (!ctx.cr6.eq) goto loc_820BC90C;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208e6e8
	ctx.lr = 0x820BC84C;
	sub_8208E6E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bc864
	if (!ctx.cr6.eq) goto loc_820BC864;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208e030
	ctx.lr = 0x820BC85C;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc9b4
	if (ctx.cr6.eq) goto loc_820BC9B4;
loc_820BC864:
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r11,r4,1600
	ctx.r11.s64 = ctx.r4.s64 + 1600;
	// lhz r10,1604(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1604);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x820bc880
	if (ctx.cr6.eq) goto loc_820BC880;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x820bc8f0
	if (!ctx.cr6.eq) goto loc_820BC8F0;
loc_820BC880:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x820BC888;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc8a8
	if (ctx.cr6.eq) goto loc_820BC8A8;
	// li r3,2005
	ctx.r3.s64 = 2005;
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
loc_820BC8A8:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lhz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1604);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820bc8c0
	if (ctx.cr6.eq) goto loc_820BC8C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820bc8d8
	if (!ctx.cr6.eq) goto loc_820BC8D8;
loc_820BC8C0:
	// li r3,2003
	ctx.r3.s64 = 2003;
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
loc_820BC8D8:
	// li r3,2001
	ctx.r3.s64 = 2001;
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
loc_820BC8F0:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc904
	if (ctx.cr6.eq) goto loc_820BC904;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bc9b4
	if (!ctx.cr6.eq) goto loc_820BC9B4;
loc_820BC904:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x820bc9b0
	goto loc_820BC9B0;
loc_820BC90C:
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r11,r4,1600
	ctx.r11.s64 = ctx.r4.s64 + 1600;
	// lhz r10,1604(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1604);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc928
	if (ctx.cr6.eq) goto loc_820BC928;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820bc998
	if (!ctx.cr6.eq) goto loc_820BC998;
loc_820BC928:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x820BC930;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bc950
	if (ctx.cr6.eq) goto loc_820BC950;
	// li r3,2004
	ctx.r3.s64 = 2004;
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
loc_820BC950:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lhz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1604);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820bc968
	if (ctx.cr6.eq) goto loc_820BC968;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820bc980
	if (!ctx.cr6.eq) goto loc_820BC980;
loc_820BC968:
	// li r3,2002
	ctx.r3.s64 = 2002;
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
loc_820BC980:
	// li r3,2000
	ctx.r3.s64 = 2000;
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
loc_820BC998:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820bc9ac
	if (ctx.cr6.eq) goto loc_820BC9AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820bc9b4
	if (!ctx.cr6.eq) goto loc_820BC9B4;
loc_820BC9AC:
	// li r3,32
	ctx.r3.s64 = 32;
loc_820BC9B0:
	// bl 0x820cb9f8
	ctx.lr = 0x820BC9B4;
	sub_820CB9F8(ctx, base);
loc_820BC9B4:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BC9CC"))) PPC_WEAK_FUNC(sub_820BC9CC);
PPC_FUNC_IMPL(__imp__sub_820BC9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC9D0"))) PPC_WEAK_FUNC(sub_820BC9D0);
PPC_FUNC_IMPL(__imp__sub_820BC9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BC9D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,1580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bca14
	if (ctx.cr6.eq) goto loc_820BCA14;
	// lwz r3,1744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// bl 0x8208dbb0
	ctx.lr = 0x820BCA00;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bca14
	if (!ctx.cr6.eq) goto loc_820BCA14;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BCA14:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208dc50
	ctx.lr = 0x820BCA1C;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bca64
	if (ctx.cr6.eq) goto loc_820BCA64;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820bca38
	if (ctx.cr6.eq) goto loc_820BCA38;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820bca64
	if (!ctx.cr6.eq) goto loc_820BCA64;
loc_820BCA38:
	// lbz r3,1(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x820a8e50
	ctx.lr = 0x820BCA40;
	sub_820A8E50(ctx, base);
	// rlwinm r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bca64
	if (ctx.cr6.eq) goto loc_820BCA64;
	// lbz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x820a8e50
	ctx.lr = 0x820BCA54;
	sub_820A8E50(ctx, base);
	// rlwinm r11,r3,0,23,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x180;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bca68
	if (!ctx.cr6.eq) goto loc_820BCA68;
loc_820BCA64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BCA68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BCA70"))) PPC_WEAK_FUNC(sub_820BCA70);
PPC_FUNC_IMPL(__imp__sub_820BCA70) {
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
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// lwz r9,1908(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1908);
	// lwz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 576);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 & ctx.r11.u64;
	// bl 0x8208e6d0
	ctx.lr = 0x820BCAAC;
	sub_8208E6D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcaf0
	if (ctx.cr6.eq) goto loc_820BCAF0;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lhz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bcacc
	if (ctx.cr6.eq) goto loc_820BCACC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bcb18
	if (!ctx.cr6.eq) goto loc_820BCB18;
loc_820BCACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bc570
	ctx.lr = 0x820BCAD4;
	sub_820BC570(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BCAD8:
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
loc_820BCAF0:
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x8208e6e8
	ctx.lr = 0x820BCAF8;
	sub_8208E6E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcb18
	if (ctx.cr6.eq) goto loc_820BCB18;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lhz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1604);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820bcacc
	if (ctx.cr6.eq) goto loc_820BCACC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820bcacc
	if (ctx.cr6.eq) goto loc_820BCACC;
loc_820BCB18:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820bcacc
	if (ctx.cr6.eq) goto loc_820BCACC;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x82097898
	ctx.lr = 0x820BCB2C;
	sub_82097898(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,1756(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x82097a58
	ctx.lr = 0x820BCB48;
	sub_82097A58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcacc
	if (ctx.cr6.eq) goto loc_820BCACC;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r10,1476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1476, ctx.r10.u32);
	// b 0x820bcad8
	goto loc_820BCAD8;
}

__attribute__((alias("__imp__sub_820BCB64"))) PPC_WEAK_FUNC(sub_820BCB64);
PPC_FUNC_IMPL(__imp__sub_820BCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCB68"))) PPC_WEAK_FUNC(sub_820BCB68);
PPC_FUNC_IMPL(__imp__sub_820BCB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820BCB70;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,440(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r3,432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// bl 0x82187220
	ctx.lr = 0x820BCB90;
	sub_82187220(ctx, base);
	// lfs f0,404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lfs f0,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lfs f13,8272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8272);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,1908(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// clrlwi r21,r8,20
	ctx.r21.u64 = ctx.r8.u32 & 0xFFF;
	// bl 0x8208dc50
	ctx.lr = 0x820BCBD8;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcc34
	if (ctx.cr6.eq) goto loc_820BCC34;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1372, ctx.r10.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bcc00
	if (!ctx.cr6.eq) goto loc_820BCC00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820BCC00:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820BCC0C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcc1c
	if (ctx.cr6.eq) goto loc_820BCC1C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bcc20
	goto loc_820BCC20;
loc_820BCC1C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820BCC20:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bcc34
	if (ctx.cr6.eq) goto loc_820BCC34;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820afa08
	ctx.lr = 0x820BCC34;
	sub_820AFA08(ctx, base);
loc_820BCC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x820bc9d0
	ctx.lr = 0x820BCC44;
	sub_820BC9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bccb0
	if (ctx.cr6.eq) goto loc_820BCCB0;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,1372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1372, ctx.r10.u32);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,1568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1568, ctx.r9.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bcc7c
	if (!ctx.cr6.eq) goto loc_820BCC7C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820BCC7C:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820BCC88;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcc98
	if (ctx.cr6.eq) goto loc_820BCC98;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bcc9c
	goto loc_820BCC9C;
loc_820BCC98:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820BCC9C:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bccb0
	if (ctx.cr6.eq) goto loc_820BCCB0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820afa08
	ctx.lr = 0x820BCCB0;
	sub_820AFA08(ctx, base);
loc_820BCCB0:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x820a8e50
	ctx.lr = 0x820BCCBC;
	sub_820A8E50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x820bccd4
	if (!ctx.cr6.eq) goto loc_820BCCD4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x820bcce0
	goto loc_820BCCE0;
loc_820BCCD4:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// bne cr6,0x820bcce0
	if (!ctx.cr6.eq) goto loc_820BCCE0;
	// li r29,2
	ctx.r29.s64 = 2;
loc_820BCCE0:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// bl 0x820a8450
	ctx.lr = 0x820BCCF8;
	sub_820A8450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820a6a70
	ctx.lr = 0x820BCD08;
	sub_820A6A70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820bcd18
	if (!ctx.cr6.lt) goto loc_820BCD18;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
loc_820BCD18:
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x8208dbb0
	ctx.lr = 0x820BCD20;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bcd38
	if (!ctx.cr6.eq) goto loc_820BCD38;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8208e0b0
	ctx.lr = 0x820BCD30;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcd3c
	if (ctx.cr6.eq) goto loc_820BCD3C;
loc_820BCD38:
	// li r28,20
	ctx.r28.s64 = 20;
loc_820BCD3C:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,1372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1372);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820bcde8
	if (!ctx.cr6.eq) goto loc_820BCDE8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// stb r26,1397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1397, ctx.r26.u8);
	// lfs f10,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f12,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,8620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x820bcda4
	if (!ctx.cr6.lt) goto loc_820BCDA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,28(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x820d6d90
	ctx.lr = 0x820BCD98;
	sub_820D6D90(ctx, base);
loc_820BCD98:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCDA4:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r10,1572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1572, ctx.r10.u32);
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x820cb9f8
	ctx.lr = 0x820BCDC0;
	sub_820CB9F8(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x820bcde8
	if (!ctx.cr6.eq) goto loc_820BCDE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a7550
	ctx.lr = 0x820BCDD0;
	sub_820A7550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcde8
	if (ctx.cr6.eq) goto loc_820BCDE8;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r28,20
	ctx.r28.s64 = 20;
	// stb r26,1400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1400, ctx.r26.u8);
loc_820BCDE8:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,1580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1580, ctx.r25.u32);
	// bne cr6,0x820bcdfc
	if (!ctx.cr6.eq) goto loc_820BCDFC;
	// stw r22,1576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1576, ctx.r22.u32);
loc_820BCDFC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x820bce7c
	if (ctx.cr6.eq) goto loc_820BCE7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x820bc188
	ctx.lr = 0x820BCE1C;
	sub_820BC188(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820d7278
	ctx.lr = 0x820BCE30;
	sub_820D7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x821150a8
	ctx.lr = 0x820BCE40;
	sub_821150A8(ctx, base);
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x8208dbb0
	ctx.lr = 0x820BCE48;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bce7c
	if (!ctx.cr6.eq) goto loc_820BCE7C;
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x820a8e50
	ctx.lr = 0x820BCE5C;
	sub_820A8E50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x820d6d90
	ctx.lr = 0x820BCE70;
	sub_820D6D90(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCE7C:
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// blt cr6,0x820bcf70
	if (ctx.cr6.lt) goto loc_820BCF70;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r30,1908(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a8a00
	ctx.lr = 0x820BCEA4;
	sub_820A8A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bcf70
	if (ctx.cr6.eq) goto loc_820BCF70;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stb r26,1399(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1399, ctx.r26.u8);
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x820a80f8
	ctx.lr = 0x820BCEC8;
	sub_820A80F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bced4
	if (ctx.cr6.eq) goto loc_820BCED4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820BCED4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x820bcf44
	if (ctx.cr6.eq) goto loc_820BCF44;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x820bcf18
	if (ctx.cr6.eq) goto loc_820BCF18;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x820bcf70
	if (!ctx.cr6.eq) goto loc_820BCF70;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x820bc188
	ctx.lr = 0x820BCF08;
	sub_820BC188(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r11,2150
	ctx.r3.s64 = ctx.r11.s64 + 2150;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCF18:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,1364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820bcf70
	if (ctx.cr6.eq) goto loc_820BCF70;
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820bcf38
	if (!ctx.cr6.eq) goto loc_820BCF38;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820BCF38:
	// addi r3,r30,2156
	ctx.r3.s64 = ctx.r30.s64 + 2156;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCF44:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820bcf70
	if (ctx.cr6.eq) goto loc_820BCF70;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820bcf64
	if (!ctx.cr6.eq) goto loc_820BCF64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820BCF64:
	// addi r3,r30,2154
	ctx.r3.s64 = ctx.r30.s64 + 2154;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCF70:
	// cmpwi cr6,r21,512
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 512, ctx.xer);
	// blt cr6,0x820bd054
	if (ctx.cr6.lt) goto loc_820BD054;
	// cmpwi cr6,r21,3584
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3584, ctx.xer);
	// bgt cr6,0x820bd054
	if (ctx.cr6.gt) goto loc_820BD054;
	// cmpwi cr6,r21,2596
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2596, ctx.xer);
	// ble cr6,0x820bcfdc
	if (!ctx.cr6.gt) goto loc_820BCFDC;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820bcfd0
	if (ctx.cr6.eq) goto loc_820BCFD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bcfd0
	if (ctx.cr6.eq) goto loc_820BCFD0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820bcfb4
	if (!ctx.cr6.eq) goto loc_820BCFB4;
loc_820BCFA8:
	// addi r3,r28,2105
	ctx.r3.s64 = ctx.r28.s64 + 2105;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCFB4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820bcfc4
	if (ctx.cr6.eq) goto loc_820BCFC4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bcfa8
	if (!ctx.cr6.eq) goto loc_820BCFA8;
loc_820BCFC4:
	// addi r3,r28,2108
	ctx.r3.s64 = ctx.r28.s64 + 2108;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCFD0:
	// addi r3,r28,2101
	ctx.r3.s64 = ctx.r28.s64 + 2101;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BCFDC:
	// cmpwi cr6,r21,1500
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1500, ctx.xer);
	// bge cr6,0x820bd038
	if (!ctx.cr6.lt) goto loc_820BD038;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820bd02c
	if (ctx.cr6.eq) goto loc_820BD02C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd02c
	if (ctx.cr6.eq) goto loc_820BD02C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820bd010
	if (!ctx.cr6.eq) goto loc_820BD010;
loc_820BD004:
	// addi r3,r28,2106
	ctx.r3.s64 = ctx.r28.s64 + 2106;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD010:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820bd020
	if (ctx.cr6.eq) goto loc_820BD020;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bd004
	if (!ctx.cr6.eq) goto loc_820BD004;
loc_820BD020:
	// addi r3,r28,2109
	ctx.r3.s64 = ctx.r28.s64 + 2109;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD02C:
	// addi r3,r28,2102
	ctx.r3.s64 = ctx.r28.s64 + 2102;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD038:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r10,2160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2160, ctx.xer);
	// beq cr6,0x820bcd98
	if (ctx.cr6.eq) goto loc_820BCD98;
	// li r3,2160
	ctx.r3.s64 = 2160;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD054:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820bd09c
	if (ctx.cr6.eq) goto loc_820BD09C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd09c
	if (ctx.cr6.eq) goto loc_820BD09C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820bd080
	if (!ctx.cr6.eq) goto loc_820BD080;
loc_820BD074:
	// addi r3,r28,2104
	ctx.r3.s64 = ctx.r28.s64 + 2104;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD080:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820bd090
	if (ctx.cr6.eq) goto loc_820BD090;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bd074
	if (!ctx.cr6.eq) goto loc_820BD074;
loc_820BD090:
	// addi r3,r28,2107
	ctx.r3.s64 = ctx.r28.s64 + 2107;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_820BD09C:
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x8208e568
	ctx.lr = 0x820BD0A4;
	sub_8208E568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r28,2103
	ctx.r3.s64 = ctx.r28.s64 + 2103;
	// bne cr6,0x820bd0b4
	if (!ctx.cr6.eq) goto loc_820BD0B4;
	// addi r3,r28,2100
	ctx.r3.s64 = ctx.r28.s64 + 2100;
loc_820BD0B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820BD0BC"))) PPC_WEAK_FUNC(sub_820BD0BC);
PPC_FUNC_IMPL(__imp__sub_820BD0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD0C0"))) PPC_WEAK_FUNC(sub_820BD0C0);
PPC_FUNC_IMPL(__imp__sub_820BD0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820BD0C8;
	sub_8224877C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,1744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1744, ctx.r6.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r3,r6,1248
	ctx.r3.s64 = ctx.r6.s64 + 1248;
	// bne cr6,0x820bd0ec
	if (!ctx.cr6.eq) goto loc_820BD0EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820BD0EC:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820BD0F8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd108
	if (ctx.cr6.eq) goto loc_820BD108;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bd10c
	goto loc_820BD10C;
loc_820BD108:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820BD10C:
	// lwz r10,1752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1752);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r8,440(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r6,1744(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// addi r31,r11,13260
	ctx.r31.s64 = ctx.r11.s64 + 13260;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r5,-31536
	ctx.r10.s64 = ctx.r5.s64 + -31536;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r4,1908(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1908);
	// lfs f12,3316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// lwz r26,1908(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1908);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lbz r11,569(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 569);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lfs f11,11480(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11480);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lbz r7,569(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 569);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fmsubs f9,f10,f12,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_820BD1F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BD208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820bd220
	if (!ctx.cr6.eq) goto loc_820BD220;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// blt cr6,0x820bd1f4
	if (ctx.cr6.lt) goto loc_820BD1F4;
loc_820BD220:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820BD228"))) PPC_WEAK_FUNC(sub_820BD228);
PPC_FUNC_IMPL(__imp__sub_820BD228) {
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
	// bl 0x820bc3c8
	ctx.lr = 0x820BD248;
	sub_820BC3C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bd258
	if (ctx.cr6.eq) goto loc_820BD258;
loc_820BD250:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bd33c
	goto loc_820BD33C;
loc_820BD258:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bd26c
	if (!ctx.cr6.eq) goto loc_820BD26C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BD26C:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820BD278;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd288
	if (ctx.cr6.eq) goto loc_820BD288;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bd28c
	goto loc_820BD28C;
loc_820BD288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BD28C:
	// lwz r6,440(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r6,1600
	ctx.r5.s64 = ctx.r6.s64 + 1600;
	// beq cr6,0x820bd2cc
	if (ctx.cr6.eq) goto loc_820BD2CC;
	// bl 0x820bd0c0
	ctx.lr = 0x820BD2A4;
	sub_820BD0C0(ctx, base);
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bd2c0
	if (ctx.cr6.eq) goto loc_820BD2C0;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r9,1744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1744, ctx.r9.u32);
loc_820BD2C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bc570
	ctx.lr = 0x820BD2C8;
	sub_820BC570(ctx, base);
	// b 0x820bd33c
	goto loc_820BD33C;
loc_820BD2CC:
	// bl 0x820bd0c0
	ctx.lr = 0x820BD2D0;
	sub_820BD0C0(ctx, base);
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bd250
	if (ctx.cr6.eq) goto loc_820BD250;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r9,1744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1744, ctx.r9.u32);
	// bl 0x820bca70
	ctx.lr = 0x820BD2F4;
	sub_820BCA70(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd334
	if (ctx.cr6.eq) goto loc_820BD334;
	// lis r4,21318
	ctx.r4.s64 = 1397096448;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,22597
	ctx.r4.u64 = ctx.r4.u64 | 22597;
	// bl 0x821882d0
	ctx.lr = 0x820BD314;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd334
	if (ctx.cr6.eq) goto loc_820BD334;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd334
	if (ctx.cr6.eq) goto loc_820BD334;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x82182ab8
	ctx.lr = 0x820BD334;
	sub_82182AB8(ctx, base);
loc_820BD334:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820BD33C:
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

__attribute__((alias("__imp__sub_820BD354"))) PPC_WEAK_FUNC(sub_820BD354);
PPC_FUNC_IMPL(__imp__sub_820BD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD358"))) PPC_WEAK_FUNC(sub_820BD358);
PPC_FUNC_IMPL(__imp__sub_820BD358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BD360;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,1756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1756, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,1760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1760, ctx.r29.u32);
	// stw r29,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r29.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820BD38C;
	sub_8215BEC8(ctx, base);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820bd3a4
	if (ctx.cr6.eq) goto loc_820BD3A4;
loc_820BD398:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BD3A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882a0
	ctx.lr = 0x820BD3AC;
	sub_821882A0(ctx, base);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x821882d0
	ctx.lr = 0x820BD3B8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd3cc
	if (ctx.cr6.eq) goto loc_820BD3CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bd400
	if (!ctx.cr6.eq) goto loc_820BD400;
loc_820BD3CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882a0
	ctx.lr = 0x820BD3D4;
	sub_821882A0(ctx, base);
	// lis r4,22352
	ctx.r4.s64 = 1464860672;
	// ori r4,r4,20302
	ctx.r4.u64 = ctx.r4.u64 | 20302;
	// bl 0x821882d0
	ctx.lr = 0x820BD3E0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd398
	if (ctx.cr6.eq) goto loc_820BD398;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd398
	if (ctx.cr6.eq) goto loc_820BD398;
loc_820BD3F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BD400:
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,596(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd3f4
	if (ctx.cr6.eq) goto loc_820BD3F4;
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd42c
	if (ctx.cr6.eq) goto loc_820BD42C;
	// lwz r9,836(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd398
	if (ctx.cr6.eq) goto loc_820BD398;
loc_820BD42C:
	// lbz r9,573(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 573);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820bd398
	if (!ctx.cr6.eq) goto loc_820BD398;
	// lwz r9,604(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd450
	if (ctx.cr6.eq) goto loc_820BD450;
	// lwz r9,836(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd398
	if (ctx.cr6.eq) goto loc_820BD398;
loc_820BD450:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820bd464
	if (ctx.cr6.eq) goto loc_820BD464;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820BD464:
	// bl 0x820bd228
	ctx.lr = 0x820BD468;
	sub_820BD228(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820bd480
	if (!ctx.cr6.eq) goto loc_820BD480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820BD480:
	// bl 0x820b7760
	ctx.lr = 0x820BD484;
	sub_820B7760(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd49c
	if (ctx.cr6.eq) goto loc_820BD49C;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lbz r5,1685(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1685);
	// lbz r4,1684(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1684);
	// bl 0x820b7970
	ctx.lr = 0x820BD49C;
	sub_820B7970(ctx, base);
loc_820BD49C:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BD4AC"))) PPC_WEAK_FUNC(sub_820BD4AC);
PPC_FUNC_IMPL(__imp__sub_820BD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD4B0"))) PPC_WEAK_FUNC(sub_820BD4B0);
PPC_FUNC_IMPL(__imp__sub_820BD4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BD4C4"))) PPC_WEAK_FUNC(sub_820BD4C4);
PPC_FUNC_IMPL(__imp__sub_820BD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD4C8"))) PPC_WEAK_FUNC(sub_820BD4C8);
PPC_FUNC_IMPL(__imp__sub_820BD4C8) {
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
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x820BD4F4;
	sub_821859A0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x82188378
	ctx.lr = 0x820BD508;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r9,r11,13320
	ctx.r9.s64 = ctx.r11.s64 + 13320;
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// addi r8,r10,13288
	ctx.r8.s64 = ctx.r10.s64 + 13288;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_820BD54C"))) PPC_WEAK_FUNC(sub_820BD54C);
PPC_FUNC_IMPL(__imp__sub_820BD54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD550"))) PPC_WEAK_FUNC(sub_820BD550);
PPC_FUNC_IMPL(__imp__sub_820BD550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820bd558
	sub_820BD558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD558"))) PPC_WEAK_FUNC(sub_820BD558);
PPC_FUNC_IMPL(__imp__sub_820BD558) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BD57C;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x820BD584;
	sub_82185A50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd5a0
	if (ctx.cr6.eq) goto loc_820BD5A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BD59C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD5A0:
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

__attribute__((alias("__imp__sub_820BD5B8"))) PPC_WEAK_FUNC(sub_820BD5B8);
PPC_FUNC_IMPL(__imp__sub_820BD5B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13336
	ctx.r9.s64 = ctx.r11.s64 + 13336;
	// addi r8,r10,13328
	ctx.r8.s64 = ctx.r10.s64 + 13328;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// bl 0x821b0d28
	ctx.lr = 0x820BD5F4;
	sub_821B0D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820BD5FC;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BD604;
	sub_821883B8(ctx, base);
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

__attribute__((alias("__imp__sub_820BD61C"))) PPC_WEAK_FUNC(sub_820BD61C);
PPC_FUNC_IMPL(__imp__sub_820BD61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD620"))) PPC_WEAK_FUNC(sub_820BD620);
PPC_FUNC_IMPL(__imp__sub_820BD620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820bd708
	sub_820BD708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD628"))) PPC_WEAK_FUNC(sub_820BD628);
PPC_FUNC_IMPL(__imp__sub_820BD628) {
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
	// lis r4,19529
	ctx.r4.s64 = 1279852544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,18264
	ctx.r4.u64 = ctx.r4.u64 | 18264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820BD64C;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82185740
	ctx.lr = 0x820BD65C;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13336
	ctx.r9.s64 = ctx.r11.s64 + 13336;
	// addi r8,r10,13328
	ctx.r8.s64 = ctx.r10.s64 + 13328;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x821b1008
	ctx.lr = 0x820BD67C;
	sub_821B1008(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r10,r31,912
	ctx.r10.s64 = ctx.r31.s64 + 912;
	// stw r7,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// ld r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// ld r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// ld r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r3,864(r31)
	PPC_STORE_U64(ctx.r31.u32 + 864, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r6,840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 840, ctx.r6.u64);
	// std r5,848(r31)
	PPC_STORE_U64(ctx.r31.u32 + 848, ctx.r5.u64);
	// std r4,856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 856, ctx.r4.u64);
	// std r10,872(r31)
	PPC_STORE_U64(ctx.r31.u32 + 872, ctx.r10.u64);
	// std r7,832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 832, ctx.r7.u64);
	// std r9,880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 880, ctx.r9.u64);
	// std r8,888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 888, ctx.r8.u64);
	// ld r5,208(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// ld r6,216(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// std r6,904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 904, ctx.r6.u64);
	// std r5,896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 896, ctx.r5.u64);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820BD708"))) PPC_WEAK_FUNC(sub_820BD708);
PPC_FUNC_IMPL(__imp__sub_820BD708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BD710;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13336
	ctx.r9.s64 = ctx.r11.s64 + 13336;
	// addi r8,r10,13328
	ctx.r8.s64 = ctx.r10.s64 + 13328;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// bl 0x821b0d28
	ctx.lr = 0x820BD740;
	sub_821B0D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820BD748;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BD750;
	sub_821883B8(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bd76c
	if (ctx.cr6.eq) goto loc_820BD76C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BD768;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD76C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BD774"))) PPC_WEAK_FUNC(sub_820BD774);
PPC_FUNC_IMPL(__imp__sub_820BD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD778"))) PPC_WEAK_FUNC(sub_820BD778);
PPC_FUNC_IMPL(__imp__sub_820BD778) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bd820
	if (ctx.cr6.eq) goto loc_820BD820;
	// lwz r11,816(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r11.u32);
	// bl 0x8208fbf8
	ctx.lr = 0x820BD7B0;
	sub_8208FBF8(ctx, base);
	// ld r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 832);
	// std r10,832(r30)
	PPC_STORE_U64(ctx.r30.u32 + 832, ctx.r10.u64);
	// ld r9,840(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 840);
	// std r9,840(r30)
	PPC_STORE_U64(ctx.r30.u32 + 840, ctx.r9.u64);
	// ld r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 848);
	// std r8,848(r30)
	PPC_STORE_U64(ctx.r30.u32 + 848, ctx.r8.u64);
	// ld r7,856(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 856);
	// std r7,856(r30)
	PPC_STORE_U64(ctx.r30.u32 + 856, ctx.r7.u64);
	// ld r6,864(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 864);
	// std r6,864(r30)
	PPC_STORE_U64(ctx.r30.u32 + 864, ctx.r6.u64);
	// ld r5,872(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 872);
	// std r5,872(r30)
	PPC_STORE_U64(ctx.r30.u32 + 872, ctx.r5.u64);
	// ld r4,880(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 880);
	// std r4,880(r30)
	PPC_STORE_U64(ctx.r30.u32 + 880, ctx.r4.u64);
	// ld r3,888(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 888);
	// std r3,888(r30)
	PPC_STORE_U64(ctx.r30.u32 + 888, ctx.r3.u64);
	// ld r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 896);
	// std r11,896(r30)
	PPC_STORE_U64(ctx.r30.u32 + 896, ctx.r11.u64);
	// ld r10,904(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 904);
	// std r10,904(r30)
	PPC_STORE_U64(ctx.r30.u32 + 904, ctx.r10.u64);
	// lwz r9,912(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// stw r9,912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 912, ctx.r9.u32);
	// lwz r8,916(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// stw r8,916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 916, ctx.r8.u32);
	// lwz r7,920(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	// stw r7,920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 920, ctx.r7.u32);
	// lwz r6,924(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// stw r6,924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 924, ctx.r6.u32);
loc_820BD820:
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

__attribute__((alias("__imp__sub_820BD838"))) PPC_WEAK_FUNC(sub_820BD838);
PPC_FUNC_IMPL(__imp__sub_820BD838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-7460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821af190
	sub_821AF190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD854"))) PPC_WEAK_FUNC(sub_820BD854);
PPC_FUNC_IMPL(__imp__sub_820BD854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD858"))) PPC_WEAK_FUNC(sub_820BD858);
PPC_FUNC_IMPL(__imp__sub_820BD858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BD860;
	sub_82248778(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd998
	if (ctx.cr6.eq) goto loc_820BD998;
	// lwz r10,784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820bd998
	if (ctx.cr6.eq) goto loc_820BD998;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd998
	if (ctx.cr6.eq) goto loc_820BD998;
	// ld r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// addi r10,r11,240
	ctx.r10.s64 = ctx.r11.s64 + 240;
	// ld r7,248(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r31,264(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r29,272(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// ld r26,280(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// ld r24,288(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// ld r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f0,2148(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// lfs f13,2144(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// std r31,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r31.u64);
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// std r26,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r26.u64);
	// std r24,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r24.u64);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82082318
	ctx.lr = 0x820BD914;
	sub_82082318(ctx, base);
	// addi r31,r28,800
	ctx.r31.s64 = ctx.r28.s64 + 800;
	// addi r29,r28,880
	ctx.r29.s64 = ctx.r28.s64 + 880;
	// li r30,4
	ctx.r30.s64 = 4;
loc_820BD920:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bd95c
	if (ctx.cr6.eq) goto loc_820BD95C;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820BD948;
	sub_8208EA90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,-768(r31)
	PPC_STORE_U64(ctx.r31.u32 + -768, ctx.r8.u64);
	// std r7,-760(r31)
	PPC_STORE_U64(ctx.r31.u32 + -760, ctx.r7.u64);
loc_820BD95C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x820bd920
	if (!ctx.cr0.eq) goto loc_820BD920;
	// ld r10,872(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 872);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r11,864(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 864);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820BD988;
	sub_8208EA90(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r9.u64);
	// std r8,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r8.u64);
loc_820BD998:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BD9A0"))) PPC_WEAK_FUNC(sub_820BD9A0);
PPC_FUNC_IMPL(__imp__sub_820BD9A0) {
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
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820BD9B8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd9d4
	if (ctx.cr6.eq) goto loc_820BD9D4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BD9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD9E8"))) PPC_WEAK_FUNC(sub_820BD9E8);
PPC_FUNC_IMPL(__imp__sub_820BD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BD9F0;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// li r27,1
	ctx.r27.s64 = 1;
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// li r25,2
	ctx.r25.s64 = 2;
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stb r25,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r25.u8);
	// bl 0x821b02c8
	ctx.lr = 0x820BDA58;
	sub_821B02C8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfs f0,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,48(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820bdaa4
	if (ctx.cr6.eq) goto loc_820BDAA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82233908
	ctx.lr = 0x820BDA7C;
	sub_82233908(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82233b00
	ctx.lr = 0x820BDA9C;
	sub_82233B00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x820bdacc
	goto loc_820BDACC;
loc_820BDAA4:
	// bl 0x821aff78
	ctx.lr = 0x820BDAA8;
	sub_821AFF78(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 388, ctx.r25.u32);
loc_820BDACC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BDAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BDB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820BDB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820bdb40
	if (!ctx.cr6.gt) goto loc_820BDB40;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_820BDB40:
	// bl 0x82183850
	ctx.lr = 0x820BDB44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820bdb5c
	if (ctx.cr6.eq) goto loc_820BDB5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820BDB58;
	sub_82183448(ctx, base);
	// b 0x820bdb68
	goto loc_820BDB68;
loc_820BDB5C:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820BDB68;
	sub_821845A0(ctx, base);
loc_820BDB68:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x820bdbb4
	if (!ctx.cr6.gt) goto loc_820BDBB4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820BDB78:
	// lwz r3,188(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b0218
	ctx.lr = 0x820BDB9C;
	sub_821B0218(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stwx r3,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// blt cr6,0x820bdb78
	if (ctx.cr6.lt) goto loc_820BDB78;
loc_820BDBB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BDBBC"))) PPC_WEAK_FUNC(sub_820BDBBC);
PPC_FUNC_IMPL(__imp__sub_820BDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDBC0"))) PPC_WEAK_FUNC(sub_820BDBC0);
PPC_FUNC_IMPL(__imp__sub_820BDBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BDBC8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820bdd38
	if (ctx.cr6.eq) goto loc_820BDD38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820bdd1c
	if (!ctx.cr6.gt) goto loc_820BDD1C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820BDC00:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820bdd0c
	if (ctx.cr6.eq) goto loc_820BDD0C;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r5.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r4.u64);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r7.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r6.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// ld r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// ld r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r4,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r4.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r6.u64);
	// ld r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r5,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// ld r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// ld r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r4,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r4.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// ld r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r7,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r7.u64);
loc_820BDD0C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x820bdc00
	if (!ctx.cr0.eq) goto loc_820BDC00;
loc_820BDD1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BDD38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BDD40"))) PPC_WEAK_FUNC(sub_820BDD40);
PPC_FUNC_IMPL(__imp__sub_820BDD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820BDD48;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820bdedc
	if (ctx.cr6.eq) goto loc_820BDEDC;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820bde38
	if (!ctx.cr6.eq) goto loc_820BDE38;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820bdedc
	if (!ctx.cr6.gt) goto loc_820BDEDC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_820BDD9C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bde1c
	if (!ctx.cr6.eq) goto loc_820BDE1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bdde4
	if (!ctx.cr6.eq) goto loc_820BDDE4;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x820bddfc
	goto loc_820BDDFC;
loc_820BDDE4:
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_820BDDFC:
	// bl 0x82289c50
	ctx.lr = 0x820BDE00;
	sub_82289C50(ctx, base);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BDE1C;
	sub_82289C50(ctx, base);
loc_820BDE1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x820bdd9c
	if (ctx.cr6.lt) goto loc_820BDD9C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820BDE38:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bdedc
	if (!ctx.cr6.eq) goto loc_820BDEDC;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x820bdedc
	if (!ctx.cr6.gt) goto loc_820BDEDC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_820BDE54:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bdec8
	if (!ctx.cr6.eq) goto loc_820BDEC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820bdec8
	if (ctx.cr6.eq) goto loc_820BDEC8;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,180(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BDEAC;
	sub_82289C50(ctx, base);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x820BDEC8;
	sub_82289C50(ctx, base);
loc_820BDEC8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x820bde54
	if (ctx.cr6.lt) goto loc_820BDE54;
loc_820BDEDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820BDEE4"))) PPC_WEAK_FUNC(sub_820BDEE4);
PPC_FUNC_IMPL(__imp__sub_820BDEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDEE8"))) PPC_WEAK_FUNC(sub_820BDEE8);
PPC_FUNC_IMPL(__imp__sub_820BDEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi. r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_820BDF0C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stb r7,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r7.u8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x820bdf0c
	if (ctx.cr6.lt) goto loc_820BDF0C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BDF3C"))) PPC_WEAK_FUNC(sub_820BDF3C);
PPC_FUNC_IMPL(__imp__sub_820BDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDF40"))) PPC_WEAK_FUNC(sub_820BDF40);
PPC_FUNC_IMPL(__imp__sub_820BDF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820BDF48;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bdfc4
	if (ctx.cr0.eq) goto loc_820BDFC4;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_820BDF70:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdfb8
	if (ctx.cr6.eq) goto loc_820BDFB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bdfa0
	if (ctx.cr6.eq) goto loc_820BDFA0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bdbc0
	ctx.lr = 0x820BDFA0;
	sub_820BDBC0(ctx, base);
loc_820BDFA0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bdfb8
	if (ctx.cr6.eq) goto loc_820BDFB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bdd40
	ctx.lr = 0x820BDFB8;
	sub_820BDD40(ctx, base);
loc_820BDFB8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x820bdf70
	if (!ctx.cr0.eq) goto loc_820BDF70;
loc_820BDFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820BDFCC"))) PPC_WEAK_FUNC(sub_820BDFCC);
PPC_FUNC_IMPL(__imp__sub_820BDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDFD0"))) PPC_WEAK_FUNC(sub_820BDFD0);
PPC_FUNC_IMPL(__imp__sub_820BDFD0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 5;
	// bl 0x822aa648
	ctx.lr = 0x820BE004;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820be064
	if (ctx.cr6.eq) goto loc_820BE064;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-28576
	ctx.r8.s64 = ctx.r8.s64 + -28576;
	// addi r6,r10,-28640
	ctx.r6.s64 = ctx.r10.s64 + -28640;
loc_820BE030:
	// lwz r10,1284(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820be044
	if (!ctx.cr6.eq) goto loc_820BE044;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// b 0x820be048
	goto loc_820BE048;
loc_820BE044:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_820BE048:
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// bdnz 0x820be030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE030;
loc_820BE064:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821cc7d0
	ctx.lr = 0x820BE07C;
	sub_821CC7D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_820BE094"))) PPC_WEAK_FUNC(sub_820BE094);
PPC_FUNC_IMPL(__imp__sub_820BE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE098"))) PPC_WEAK_FUNC(sub_820BE098);
PPC_FUNC_IMPL(__imp__sub_820BE098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820BE0C0:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820be0e4
	if (ctx.cr6.eq) goto loc_820BE0E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x820be0c0
	if (ctx.cr6.lt) goto loc_820BE0C0;
	// blr 
	return;
loc_820BE0E4:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE0F4"))) PPC_WEAK_FUNC(sub_820BE0F4);
PPC_FUNC_IMPL(__imp__sub_820BE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE0F8"))) PPC_WEAK_FUNC(sub_820BE0F8);
PPC_FUNC_IMPL(__imp__sub_820BE0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE10C"))) PPC_WEAK_FUNC(sub_820BE10C);
PPC_FUNC_IMPL(__imp__sub_820BE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE110"))) PPC_WEAK_FUNC(sub_820BE110);
PPC_FUNC_IMPL(__imp__sub_820BE110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820BE138:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820be15c
	if (ctx.cr6.eq) goto loc_820BE15C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x820be138
	if (ctx.cr6.lt) goto loc_820BE138;
	// blr 
	return;
loc_820BE15C:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE16C"))) PPC_WEAK_FUNC(sub_820BE16C);
PPC_FUNC_IMPL(__imp__sub_820BE16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE170"))) PPC_WEAK_FUNC(sub_820BE170);
PPC_FUNC_IMPL(__imp__sub_820BE170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820BE178;
	sub_82248768(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820be3c0
	if (!ctx.cr6.gt) goto loc_820BE3C0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r23,-19048(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2a60
	ctx.lr = 0x820BE1BC;
	sub_821A2A60(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r24,240
	ctx.r4.s64 = ctx.r24.s64 + 240;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820BE1EC;
	sub_8208EA90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187200
	ctx.lr = 0x820BE1F4;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x820be448
	if (!ctx.cr6.gt) goto loc_820BE448;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r24,176
	ctx.r31.s64 = ctx.r24.s64 + 176;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BE210:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820be210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE210;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BE22C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820be22c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE22C;
	// fdivs f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,13368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13368);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// std r7,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
	// std r20,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r20.u64);
	// std r6,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r6.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bl 0x821a3010
	ctx.lr = 0x820BE2D4;
	sub_821A3010(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820be340
	if (ctx.cr6.eq) goto loc_820BE340;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820be310
	if (ctx.cr6.eq) goto loc_820BE310;
	// li r30,5
	ctx.r30.s64 = 5;
loc_820BE2E8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x820be2e8
	if (ctx.cr6.lt) goto loc_820BE2E8;
	// b 0x820be354
	goto loc_820BE354;
loc_820BE310:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820be354
	if (!ctx.cr6.gt) goto loc_820BE354;
	// addi r26,r22,-4
	ctx.r26.s64 = ctx.r22.s64 + -4;
loc_820BE31C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzu r4,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820be31c
	if (!ctx.cr0.eq) goto loc_820BE31C;
	// b 0x820be354
	goto loc_820BE354;
loc_820BE340:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BE354:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// std r9,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r9.u64);
	// std r30,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r30.u64);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// bl 0x821a3010
	ctx.lr = 0x820BE3B0;
	sub_821A3010(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_820BE3C0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820be448
	if (ctx.cr6.eq) goto loc_820BE448;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820be408
	if (ctx.cr6.eq) goto loc_820BE408;
	// li r31,5
	ctx.r31.s64 = 5;
loc_820BE3D4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x820be3d4
	if (ctx.cr6.lt) goto loc_820BE3D4;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_820BE408:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820be45c
	if (!ctx.cr6.gt) goto loc_820BE45C;
	// addi r29,r22,-4
	ctx.r29.s64 = ctx.r22.s64 + -4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_820BE418:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820be418
	if (!ctx.cr0.eq) goto loc_820BE418;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_820BE448:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BE45C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820BE46C"))) PPC_WEAK_FUNC(sub_820BE46C);
PPC_FUNC_IMPL(__imp__sub_820BE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE470"))) PPC_WEAK_FUNC(sub_820BE470);
PPC_FUNC_IMPL(__imp__sub_820BE470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x820bdf40
	sub_820BDF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE47C"))) PPC_WEAK_FUNC(sub_820BE47C);
PPC_FUNC_IMPL(__imp__sub_820BE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE480"))) PPC_WEAK_FUNC(sub_820BE480);
PPC_FUNC_IMPL(__imp__sub_820BE480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x820BE488;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// srawi. r11,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be620
	if (ctx.cr0.eq) goto loc_820BE620;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// lis r23,-32178
	ctx.r23.s64 = -2108817408;
loc_820BE4C4:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820be614
	if (ctx.cr6.eq) goto loc_820BE614;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820be614
	if (ctx.cr6.eq) goto loc_820BE614;
	// lwz r31,-7488(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7488);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BE4F4;
	sub_821AD528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,388(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// bl 0x821add70
	ctx.lr = 0x820BE504;
	sub_821ADD70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820BE510;
	sub_821ADCD0(ctx, base);
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820be53c
	if (!ctx.cr6.eq) goto loc_820BE53C;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BE52C;
	sub_821AD2D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BE538;
	sub_821AD528(ctx, base);
	// b 0x820be574
	goto loc_820BE574;
loc_820BE53C:
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x820be550
	if (ctx.cr6.eq) goto loc_820BE550;
	// cmplwi cr6,r11,20000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20000, ctx.xer);
	// bne cr6,0x820be574
	if (!ctx.cr6.eq) goto loc_820BE574;
	// stw r17,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r17.u32);
loc_820BE550:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BE55C;
	sub_821AD2D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BE568;
	sub_821AD528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x821ad600
	ctx.lr = 0x820BE574;
	sub_821AD600(ctx, base);
loc_820BE574:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// beq cr6,0x820be590
	if (ctx.cr6.eq) goto loc_820BE590;
	// cmplwi cr6,r11,30001
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30001, ctx.xer);
	// beq cr6,0x820be590
	if (ctx.cr6.eq) goto loc_820BE590;
	// cmplwi cr6,r11,30002
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30002, ctx.xer);
	// bne cr6,0x820be5b4
	if (!ctx.cr6.eq) goto loc_820BE5B4;
loc_820BE590:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BE59C;
	sub_821AD2D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BE5A8;
	sub_821AD528(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820BE5B4;
	sub_821AD600(ctx, base);
loc_820BE5B4:
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// bl 0x820be170
	ctx.lr = 0x820BE5E0;
	sub_820BE170(ctx, base);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplwi cr6,r9,20000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20000, ctx.xer);
	// bne cr6,0x820be5f0
	if (!ctx.cr6.eq) goto loc_820BE5F0;
	// stw r27,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r27.u32);
loc_820BE5F0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BE5FC;
	sub_821AD2D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BE608;
	sub_821AD528(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820BE614;
	sub_821AD600(ctx, base);
loc_820BE614:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// bne 0x820be4c4
	if (!ctx.cr0.eq) goto loc_820BE4C4;
loc_820BE620:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_820BE628"))) PPC_WEAK_FUNC(sub_820BE628);
PPC_FUNC_IMPL(__imp__sub_820BE628) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820be6a8
	if (!ctx.cr6.lt) goto loc_820BE6A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be67c
	if (ctx.cr6.eq) goto loc_820BE67C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820BE66C;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820BE67C:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820be694
	if (!ctx.cr6.gt) goto loc_820BE694;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820BE694:
	// bl 0x82080d68
	ctx.lr = 0x820BE698;
	sub_82080D68(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820BE6A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820BE6D0"))) PPC_WEAK_FUNC(sub_820BE6D0);
PPC_FUNC_IMPL(__imp__sub_820BE6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BE6D8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82185740
	ctx.lr = 0x820BE6F8;
	sub_82185740(ctx, base);
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x82188378
	ctx.lr = 0x820BE70C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13404
	ctx.r9.s64 = ctx.r11.s64 + 13404;
	// addi r8,r10,13372
	ctx.r8.s64 = ctx.r10.s64 + 13372;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// lwz r26,12(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820be628
	ctx.lr = 0x820BE754;
	sub_820BE628(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820be790
	if (ctx.cr6.eq) goto loc_820BE790;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_820BE760:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lfs f1,556(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 556);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,84(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x820bd9e8
	ctx.lr = 0x820BE780;
	sub_820BD9E8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x820be760
	if (ctx.cr6.lt) goto loc_820BE760;
loc_820BE790:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BE7A8"))) PPC_WEAK_FUNC(sub_820BE7A8);
PPC_FUNC_IMPL(__imp__sub_820BE7A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820be8c0
	sub_820BE8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE7B0"))) PPC_WEAK_FUNC(sub_820BE7B0);
PPC_FUNC_IMPL(__imp__sub_820BE7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820BE7B8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13404
	ctx.r9.s64 = ctx.r11.s64 + 13404;
	// addi r8,r10,13372
	ctx.r8.s64 = ctx.r10.s64 + 13372;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// srawi. r4,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820be884
	if (ctx.cr0.eq) goto loc_820BE884;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820BE800:
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,3020(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be824
	if (ctx.cr6.eq) goto loc_820BE824;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// bl 0x822338c8
	ctx.lr = 0x820BE824;
	sub_822338C8(ctx, base);
loc_820BE824:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be838
	if (ctx.cr6.eq) goto loc_820BE838;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820BE838;
	sub_82183E40(ctx, base);
loc_820BE838:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be85c
	if (ctx.cr6.eq) goto loc_820BE85C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BE85C:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820be800
	if (ctx.cr6.lt) goto loc_820BE800;
loc_820BE884:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be8a4
	if (ctx.cr6.eq) goto loc_820BE8A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820BE898;
	sub_82183E40(ctx, base);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_820BE8A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821883b8
	ctx.lr = 0x820BE8AC;
	sub_821883B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821857f0
	ctx.lr = 0x820BE8B4;
	sub_821857F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820BE8BC"))) PPC_WEAK_FUNC(sub_820BE8BC);
PPC_FUNC_IMPL(__imp__sub_820BE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE8C0"))) PPC_WEAK_FUNC(sub_820BE8C0);
PPC_FUNC_IMPL(__imp__sub_820BE8C0) {
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
	// bl 0x820be7b0
	ctx.lr = 0x820BE8E0;
	sub_820BE7B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820be8fc
	if (ctx.cr6.eq) goto loc_820BE8FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BE8F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BE8FC:
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

__attribute__((alias("__imp__sub_820BE914"))) PPC_WEAK_FUNC(sub_820BE914);
PPC_FUNC_IMPL(__imp__sub_820BE914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE918"))) PPC_WEAK_FUNC(sub_820BE918);
PPC_FUNC_IMPL(__imp__sub_820BE918) {
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
	// bl 0x820f1b10
	ctx.lr = 0x820BE930;
	sub_820F1B10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// stw r11,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r11.u32);
	// stw r11,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r11.u32);
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820BE95C"))) PPC_WEAK_FUNC(sub_820BE95C);
PPC_FUNC_IMPL(__imp__sub_820BE95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE960"))) PPC_WEAK_FUNC(sub_820BE960);
PPC_FUNC_IMPL(__imp__sub_820BE960) {
	PPC_FUNC_PROLOGUE();
	// b 0x82188450
	sub_82188450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE964"))) PPC_WEAK_FUNC(sub_820BE964);
PPC_FUNC_IMPL(__imp__sub_820BE964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE968"))) PPC_WEAK_FUNC(sub_820BE968);
PPC_FUNC_IMPL(__imp__sub_820BE968) {
	PPC_FUNC_PROLOGUE();
	// b 0x821884c8
	sub_821884C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE96C"))) PPC_WEAK_FUNC(sub_820BE96C);
PPC_FUNC_IMPL(__imp__sub_820BE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE970"))) PPC_WEAK_FUNC(sub_820BE970);
PPC_FUNC_IMPL(__imp__sub_820BE970) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82230d40
	sub_82230D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE978"))) PPC_WEAK_FUNC(sub_820BE978);
PPC_FUNC_IMPL(__imp__sub_820BE978) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x822310a0
	sub_822310A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE980"))) PPC_WEAK_FUNC(sub_820BE980);
PPC_FUNC_IMPL(__imp__sub_820BE980) {
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
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// bl 0x821882d0
	ctx.lr = 0x820BE998;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be9b4
	if (ctx.cr6.eq) goto loc_820BE9B4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BE9B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE9C8"))) PPC_WEAK_FUNC(sub_820BE9C8);
PPC_FUNC_IMPL(__imp__sub_820BE9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BE9D0;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x820f2498
	ctx.lr = 0x820BE9E8;
	sub_820F2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,13464
	ctx.r7.s64 = ctx.r11.s64 + 13464;
	// addi r6,r10,13456
	ctx.r6.s64 = ctx.r10.s64 + 13456;
	// addi r5,r9,13448
	ctx.r5.s64 = ctx.r9.s64 + 13448;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,13416
	ctx.r4.s64 = ctx.r8.s64 + 13416;
	// stw r6,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r5.u32);
	// stw r4,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r4.u32);
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// stw r29,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r29.u32);
	// bl 0x820bd628
	ctx.lr = 0x820BEA28;
	sub_820BD628(ctx, base);
	// stw r29,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1b10
	ctx.lr = 0x820BEA34;
	sub_820F1B10(ctx, base);
	// stw r29,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r29.u32);
	// stw r29,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r29.u32);
	// stw r29,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r29.u32);
	// stw r29,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r29.u32);
	// lbz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r10,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r10.u32);
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lfs f13,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,560(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x821b02c8
	ctx.lr = 0x820BEA70;
	sub_821B02C8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r29,3012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3012, ctx.r29.u32);
	// stw r29,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x820BEA98;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820beaa8
	if (ctx.cr6.eq) goto loc_820BEAA8;
	// stfs f31,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
loc_820BEAA8:
	// lwz r28,48(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820beaf8
	if (ctx.cr6.eq) goto loc_820BEAF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82233908
	ctx.lr = 0x820BEABC;
	sub_82233908(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82233a00
	ctx.lr = 0x820BEAD8;
	sub_82233A00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82233be8
	ctx.lr = 0x820BEAE4;
	sub_82233BE8(ctx, base);
	// stfs f1,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82233bf8
	ctx.lr = 0x820BEAF0;
	sub_82233BF8(ctx, base);
	// stfs f1,560(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// b 0x820beb18
	goto loc_820BEB18;
loc_820BEAF8:
	// bl 0x821aff78
	ctx.lr = 0x820BEAFC;
	sub_821AFF78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEB18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,2116
	ctx.r28.s64 = 2116;
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
loc_820BEB38:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-8540(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8540);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BEB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,2124
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2124, ctx.xer);
	// blt cr6,0x820beb38
	if (ctx.cr6.lt) goto loc_820BEB38;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BEB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1f80
	ctx.lr = 0x820BEB8C;
	sub_820F1F80(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,-444(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820BEB9C;
	sub_82161148(ctx, base);
	// stw r3,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r29.u32);
	// stw r24,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BEBB8"))) PPC_WEAK_FUNC(sub_820BEBB8);
PPC_FUNC_IMPL(__imp__sub_820BEBB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x820bf9d0
	sub_820BF9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEBC0"))) PPC_WEAK_FUNC(sub_820BEBC0);
PPC_FUNC_IMPL(__imp__sub_820BEBC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1248
	ctx.r3.s64 = ctx.r3.s64 + -1248;
	// b 0x820bf9d0
	sub_820BF9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEBC8"))) PPC_WEAK_FUNC(sub_820BEBC8);
PPC_FUNC_IMPL(__imp__sub_820BEBC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1232
	ctx.r3.s64 = ctx.r3.s64 + -1232;
	// b 0x820bf9d0
	sub_820BF9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEBD0"))) PPC_WEAK_FUNC(sub_820BEBD0);
PPC_FUNC_IMPL(__imp__sub_820BEBD0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3020);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,13464
	ctx.r6.s64 = ctx.r10.s64 + 13464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,13456
	ctx.r5.s64 = ctx.r9.s64 + 13456;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r8,13448
	ctx.r4.s64 = ctx.r8.s64 + 13448;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r10,r7,13416
	ctx.r10.s64 = ctx.r7.s64 + 13416;
	// stw r5,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r5.u32);
	// addi r30,r31,1248
	ctx.r30.s64 = ctx.r31.s64 + 1248;
	// stw r4,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r4.u32);
	// stw r10,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// beq cr6,0x820bec40
	if (ctx.cr6.eq) goto loc_820BEC40;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// bl 0x82233810
	ctx.lr = 0x820BEC40;
	sub_82233810(ctx, base);
loc_820BEC40:
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x821882d0
	ctx.lr = 0x820BEC50;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bec5c
	if (ctx.cr6.eq) goto loc_820BEC5C;
	// bl 0x820f6d90
	ctx.lr = 0x820BEC5C;
	sub_820F6D90(ctx, base);
loc_820BEC5C:
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x820bd5b8
	ctx.lr = 0x820BEC64;
	sub_820BD5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1338
	ctx.lr = 0x820BEC6C;
	sub_820F1338(ctx, base);
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

__attribute__((alias("__imp__sub_820BEC84"))) PPC_WEAK_FUNC(sub_820BEC84);
PPC_FUNC_IMPL(__imp__sub_820BEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEC88"))) PPC_WEAK_FUNC(sub_820BEC88);
PPC_FUNC_IMPL(__imp__sub_820BEC88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// li r10,75
	ctx.r10.s64 = 75;
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,72
	ctx.r7.s64 = 72;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// blt cr6,0x820becd4
	if (ctx.cr6.lt) goto loc_820BECD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820becd8
	if (ctx.cr6.lt) goto loc_820BECD8;
loc_820BECD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BECD8:
	// lwz r10,1236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// stw r10,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r10.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82185ba0
	ctx.lr = 0x820BECF4;
	sub_82185BA0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x820BED04;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bed2c
	if (ctx.cr6.eq) goto loc_820BED2C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bed2c
	if (ctx.cr6.eq) goto loc_820BED2C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82185ba0
	ctx.lr = 0x820BED2C;
	sub_82185BA0(ctx, base);
loc_820BED2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820BED44"))) PPC_WEAK_FUNC(sub_820BED44);
PPC_FUNC_IMPL(__imp__sub_820BED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BED48"))) PPC_WEAK_FUNC(sub_820BED48);
PPC_FUNC_IMPL(__imp__sub_820BED48) {
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
	// addi r3,r3,1232
	ctx.r3.s64 = ctx.r3.s64 + 1232;
	// lwz r4,2996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2996);
	// bl 0x82185ba0
	ctx.lr = 0x820BED68;
	sub_82185BA0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x820BED78;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bed94
	if (ctx.cr6.eq) goto loc_820BED94;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bed94
	if (ctx.cr6.eq) goto loc_820BED94;
	// lwz r4,3000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// bl 0x82185ba0
	ctx.lr = 0x820BED94;
	sub_82185BA0(ctx, base);
loc_820BED94:
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

__attribute__((alias("__imp__sub_820BEDA8"))) PPC_WEAK_FUNC(sub_820BEDA8);
PPC_FUNC_IMPL(__imp__sub_820BEDA8) {
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
	// lwz r10,-620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -620);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r8,-428(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -428);
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r8.s64;
	// lbz r10,-4932(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4932);
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x820bee00
	if (!ctx.cr6.eq) goto loc_820BEE00;
	// lwz r11,-628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820bef48
	if (ctx.cr6.gt) goto loc_820BEF48;
loc_820BEE00:
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bee4c
	if (!ctx.cr6.gt) goto loc_820BEE4C;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bee40
	if (ctx.cr6.eq) goto loc_820BEE40;
	// bl 0x8215bd60
	ctx.lr = 0x820BEE1C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bee38
	if (ctx.cr6.eq) goto loc_820BEE38;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r4,r11,0,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// b 0x820bee3c
	goto loc_820BEE3C;
loc_820BEE38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820BEE3C:
	// bl 0x820c66e8
	ctx.lr = 0x820BEE40;
	sub_820C66E8(ctx, base);
loc_820BEE40:
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
loc_820BEE4C:
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820bee6c
	if (ctx.cr6.eq) goto loc_820BEE6C;
	// lwz r11,-1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1216);
	// addi r3,r31,-1216
	ctx.r3.s64 = ctx.r31.s64 + -1216;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEE6C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820bef48
	if (ctx.cr6.eq) goto loc_820BEF48;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820bee8c
	if (!ctx.cr6.eq) goto loc_820BEE8C;
	// lwz r3,748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// b 0x820bee98
	goto loc_820BEE98;
loc_820BEE8C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820beea8
	if (!ctx.cr6.eq) goto loc_820BEEA8;
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
loc_820BEE98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEEA8:
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820beec4
	if (ctx.cr6.eq) goto loc_820BEEC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEEC4:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82188608
	ctx.lr = 0x820BEECC;
	sub_82188608(ctx, base);
	// addi r11,r31,-752
	ctx.r11.s64 = ctx.r31.s64 + -752;
	// addi r11,r31,-768
	ctx.r11.s64 = ctx.r31.s64 + -768;
	// ld r10,-744(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -744);
	// ld r9,-768(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -768);
	// addi r30,r31,-1216
	ctx.r30.s64 = ctx.r31.s64 + -1216;
	// ld r8,-760(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -760);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,-784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,-728(r31)
	PPC_STORE_U64(ctx.r31.u32 + -728, ctx.r10.u64);
	// std r8,-744(r31)
	PPC_STORE_U64(ctx.r31.u32 + -744, ctx.r8.u64);
	// ld r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -752);
	// std r9,-752(r31)
	PPC_STORE_U64(ctx.r31.u32 + -752, ctx.r9.u64);
	// std r11,-736(r31)
	PPC_STORE_U64(ctx.r31.u32 + -736, ctx.r11.u64);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,-768(r31)
	PPC_STORE_U64(ctx.r31.u32 + -768, ctx.r6.u64);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,-760(r31)
	PPC_STORE_U64(ctx.r31.u32 + -760, ctx.r5.u64);
	// lwz r11,-1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1216);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x820bef48
	if (ctx.cr6.lt) goto loc_820BEF48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEF48:
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

__attribute__((alias("__imp__sub_820BEF60"))) PPC_WEAK_FUNC(sub_820BEF60);
PPC_FUNC_IMPL(__imp__sub_820BEF60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820befa0
	if (ctx.cr6.eq) goto loc_820BEFA0;
	// lwz r4,2048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// addi r30,r31,2064
	ctx.r30.s64 = ctx.r31.s64 + 2064;
	// bl 0x82161060
	ctx.lr = 0x820BEF94;
	sub_82161060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bd778
	ctx.lr = 0x820BEFA0;
	sub_820BD778(ctx, base);
loc_820BEFA0:
	// lwz r10,2880(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2880);
	// addi r11,r31,2064
	ctx.r11.s64 = ctx.r31.s64 + 2064;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_820BEFC8"))) PPC_WEAK_FUNC(sub_820BEFC8);
PPC_FUNC_IMPL(__imp__sub_820BEFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820BEFD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf050
	if (ctx.cr6.eq) goto loc_820BF050;
	// lwz r11,1728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820beffc
	if (!ctx.cr6.eq) goto loc_820BEFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BEFFC:
	// lwz r30,1732(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bf044
	if (ctx.cr6.eq) goto loc_820BF044;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r29,r31,1880
	ctx.r29.s64 = ctx.r31.s64 + 1880;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82187220
	ctx.lr = 0x820BF020;
	sub_82187220(ctx, base);
	// stfs f1,1880(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82096ec8
	ctx.lr = 0x820BF02C;
	sub_82096EC8(ctx, base);
	// lwz r4,1284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// lwz r3,1284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// bl 0x8208e438
	ctx.lr = 0x820BF038;
	sub_8208E438(ctx, base);
	// stfs f1,1884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1884, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820BF044:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
loc_820BF050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820BF058"))) PPC_WEAK_FUNC(sub_820BF058);
PPC_FUNC_IMPL(__imp__sub_820BF058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820BF060;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf330
	if (!ctx.cr6.eq) goto loc_820BF330;
	// lwz r11,-636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf330
	if (ctx.cr6.eq) goto loc_820BF330;
	// lwz r11,-620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf330
	if (ctx.cr6.eq) goto loc_820BF330;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lbz r11,-4932(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bf0b0
	if (!ctx.cr6.eq) goto loc_820BF0B0;
	// lwz r11,-644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820bf330
	if (ctx.cr6.gt) goto loc_820BF330;
loc_820BF0B0:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820BF0BC;
	sub_821A2A18(ctx, base);
	// lwz r11,-19048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821a2bf8
	ctx.lr = 0x820BF0CC;
	sub_821A2BF8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820bf0e8
	if (!ctx.cr6.eq) goto loc_820BF0E8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bf0e8
	if (!ctx.cr6.eq) goto loc_820BF0E8;
	// lwz r11,796(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf330
	if (!ctx.cr6.eq) goto loc_820BF330;
loc_820BF0E8:
	// lwz r11,1760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf114
	if (ctx.cr6.eq) goto loc_820BF114;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lwz r4,1760(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1760);
	// bl 0x821a3870
	ctx.lr = 0x820BF114;
	sub_821A3870(ctx, base);
loc_820BF114:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf164
	if (!ctx.cr6.eq) goto loc_820BF164;
	// lwz r11,724(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 724);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820bf164
	if (!ctx.cr6.eq) goto loc_820BF164;
	// bl 0x820ae430
	ctx.lr = 0x820BF134;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf164
	if (ctx.cr6.eq) goto loc_820BF164;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820bf164
	if (ctx.cr6.lt) goto loc_820BF164;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lwz r4,-800(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -800);
	// lfs f1,13532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a3098
	ctx.lr = 0x820BF15C;
	sub_821A3098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf330
	if (ctx.cr6.eq) goto loc_820BF330;
loc_820BF164:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821afb50
	ctx.lr = 0x820BF170;
	sub_821AFB50(ctx, base);
	// lwz r11,-7460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,776(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 776);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821afaf0
	ctx.lr = 0x820BF184;
	sub_821AFAF0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820bf198
	if (!ctx.cr6.eq) goto loc_820BF198;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,832
	ctx.r3.s64 = ctx.r27.s64 + 832;
	// bl 0x820a2850
	ctx.lr = 0x820BF198;
	sub_820A2850(ctx, base);
loc_820BF198:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x820BF1A4;
	sub_821A2B00(ctx, base);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821af2d0
	ctx.lr = 0x820BF1B4;
	sub_821AF2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af490
	ctx.lr = 0x820BF1BC;
	sub_821AF490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821af4e0
	ctx.lr = 0x820BF1C8;
	sub_821AF4E0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,14520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf218
	if (ctx.cr6.eq) goto loc_820BF218;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bf208
	if (ctx.cr6.eq) goto loc_820BF208;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bf208
	if (ctx.cr6.eq) goto loc_820BF208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,13412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af270
	ctx.lr = 0x820BF204;
	sub_821AF270(ctx, base);
	// b 0x820bf224
	goto loc_820BF224;
loc_820BF208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af270
	ctx.lr = 0x820BF214;
	sub_821AF270(ctx, base);
	// b 0x820bf224
	goto loc_820BF224;
loc_820BF218:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x820BF224;
	sub_821A2B00(ctx, base);
loc_820BF224:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,8952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8952);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af330
	ctx.lr = 0x820BF234;
	sub_821AF330(ctx, base);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820BF23C;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820BF250;
	sub_821AF5E0(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,-7488(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad910
	ctx.lr = 0x820BF268;
	sub_821AD910(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820bf294
	if (ctx.cr6.eq) goto loc_820BF294;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x820bf288
	if (!ctx.cr6.eq) goto loc_820BF288;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x820bf2b8
	if (ctx.cr6.eq) goto loc_820BF2B8;
loc_820BF288:
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x820bf2b0
	goto loc_820BF2B0;
loc_820BF294:
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x820bf2a8
	if (!ctx.cr6.eq) goto loc_820BF2A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x820bf2b8
	if (ctx.cr6.eq) goto loc_820BF2B8;
loc_820BF2A8:
	// li r5,90
	ctx.r5.s64 = 90;
	// li r4,38
	ctx.r4.s64 = 38;
loc_820BF2B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad8c8
	ctx.lr = 0x820BF2B8;
	sub_821AD8C8(ctx, base);
loc_820BF2B8:
	// lwz r3,-1152(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1152);
	// bl 0x822310a0
	ctx.lr = 0x820BF2C0;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf2ec
	if (ctx.cr6.eq) goto loc_820BF2EC;
	// addic. r11,r27,-1232
	ctx.xer.ca = ctx.r27.u32 > 1231;
	ctx.r11.s64 = ctx.r27.s64 + -1232;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bne 0x820bf2d8
	if (!ctx.cr0.eq) goto loc_820BF2D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BF2D8:
	// bl 0x8209f640
	ctx.lr = 0x820BF2DC;
	sub_8209F640(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf300
	if (ctx.cr6.eq) goto loc_820BF300;
	// bl 0x820bdfd0
	ctx.lr = 0x820BF2E8;
	sub_820BDFD0(ctx, base);
	// b 0x820bf300
	goto loc_820BF300;
loc_820BF2EC:
	// lwz r3,-1148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BF300:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820BF30C;
	sub_821AF5E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821af270
	ctx.lr = 0x820BF318;
	sub_821AF270(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821af330
	ctx.lr = 0x820BF324;
	sub_821AF330(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821afaf0
	ctx.lr = 0x820BF330;
	sub_821AFAF0(ctx, base);
loc_820BF330:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820BF340"))) PPC_WEAK_FUNC(sub_820BF340);
PPC_FUNC_IMPL(__imp__sub_820BF340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820BF348;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf5ac
	if (!ctx.cr6.eq) goto loc_820BF5AC;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf5ac
	if (ctx.cr6.eq) goto loc_820BF5AC;
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf5ac
	if (ctx.cr6.eq) goto loc_820BF5AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf3c8
	if (!ctx.cr6.eq) goto loc_820BF3C8;
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820bf3c8
	if (!ctx.cr6.eq) goto loc_820BF3C8;
	// bl 0x820ae430
	ctx.lr = 0x820BF398;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf3c8
	if (ctx.cr6.eq) goto loc_820BF3C8;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820bf3c8
	if (ctx.cr6.lt) goto loc_820BF3C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-19048(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19048);
	// lwz r4,432(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// lfs f1,13532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a3098
	ctx.lr = 0x820BF3C0;
	sub_821A3098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf5ac
	if (ctx.cr6.eq) goto loc_820BF5AC;
loc_820BF3C8:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821afb50
	ctx.lr = 0x820BF3D4;
	sub_821AFB50(ctx, base);
	// lwz r11,-7460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,2008(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2008);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821afaf0
	ctx.lr = 0x820BF3E8;
	sub_821AFAF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,2064
	ctx.r3.s64 = ctx.r29.s64 + 2064;
	// bl 0x820a2850
	ctx.lr = 0x820BF3F4;
	sub_820A2850(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820BF404;
	sub_821ADD20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820BF410;
	sub_821ADC30(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x820BF41C;
	sub_821ADC58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x820BF428;
	sub_821ADCA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820BF434;
	sub_821ADCD0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad498
	ctx.lr = 0x820BF444;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820BF450;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x820BF45C;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x820BF468;
	sub_821AD288(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BF474;
	sub_821AD2D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x820BF480;
	sub_821A2B00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af2d0
	ctx.lr = 0x820BF48C;
	sub_821AF2D0(ctx, base);
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820BF494;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820BF4A8;
	sub_821AF5E0(ctx, base);
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x822310a0
	ctx.lr = 0x820BF4B0;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf4ec
	if (ctx.cr6.eq) goto loc_820BF4EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820BF4C4;
	sub_821AD528(ctx, base);
	// li r28,5
	ctx.r28.s64 = 5;
loc_820BF4C8:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x820bf4c8
	if (ctx.cr6.lt) goto loc_820BF4C8;
loc_820BF4EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820BF4F8;
	sub_821AF5E0(ctx, base);
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// addi r3,r29,1248
	ctx.r3.s64 = ctx.r29.s64 + 1248;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820BF508;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf564
	if (ctx.cr6.eq) goto loc_820BF564;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bf564
	if (ctx.cr6.eq) goto loc_820BF564;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820BF524;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820BF538;
	sub_821AF5E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820be480
	ctx.lr = 0x820BF558;
	sub_820BE480(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820BF564;
	sub_821AF5E0(ctx, base);
loc_820BF564:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820BF570;
	sub_821AD498(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820BF57C;
	sub_821AD1F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820BF588;
	sub_821AD240(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820BF594;
	sub_821AD288(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820BF5A0;
	sub_821AD2D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821afaf0
	ctx.lr = 0x820BF5AC;
	sub_821AFAF0(ctx, base);
loc_820BF5AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820BF5B4"))) PPC_WEAK_FUNC(sub_820BF5B4);
PPC_FUNC_IMPL(__imp__sub_820BF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF5B8"))) PPC_WEAK_FUNC(sub_820BF5B8);
PPC_FUNC_IMPL(__imp__sub_820BF5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28512
	ctx.r11.s64 = ctx.r11.s64 + -28512;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_820BF5D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820bf630
	if (ctx.cr6.eq) goto loc_820BF630;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// blt cr6,0x820bf5d8
	if (ctx.cr6.lt) goto loc_820BF5D8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821847a8
	ctx.lr = 0x820BF600;
	sub_821847A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,13536
	ctx.r4.s64 = ctx.r10.s64 + 13536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248910
	ctx.lr = 0x820BF61C;
	sub_82248910(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BF630:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF644"))) PPC_WEAK_FUNC(sub_820BF644);
PPC_FUNC_IMPL(__imp__sub_820BF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF648"))) PPC_WEAK_FUNC(sub_820BF648);
PPC_FUNC_IMPL(__imp__sub_820BF648) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,1248
	ctx.r3.s64 = ctx.r3.s64 + 1248;
	// bne cr6,0x820bf670
	if (!ctx.cr6.eq) goto loc_820BF670;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BF670:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820BF67C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf748
	if (ctx.cr6.eq) goto loc_820BF748;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf748
	if (ctx.cr6.eq) goto loc_820BF748;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820febe0
	ctx.lr = 0x820BF6AC;
	sub_820FEBE0(ctx, base);
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// cmpwi cr6,r3,20500
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20500, ctx.xer);
	// blt cr6,0x820bf6c4
	if (ctx.cr6.lt) goto loc_820BF6C4;
	// cmpwi cr6,r3,21500
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21500, ctx.xer);
	// blt cr6,0x820bf6d0
	if (ctx.cr6.lt) goto loc_820BF6D0;
loc_820BF6C4:
	// bl 0x822e6048
	ctx.lr = 0x820BF6C8;
	sub_822E6048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf6f4
	if (ctx.cr6.eq) goto loc_820BF6F4;
loc_820BF6D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820febe0
	ctx.lr = 0x820BF6EC;
	sub_820FEBE0(ctx, base);
	// li r5,210
	ctx.r5.s64 = 210;
	// b 0x820bf714
	goto loc_820BF714;
loc_820BF6F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820febe0
	ctx.lr = 0x820BF710;
	sub_820FEBE0(ctx, base);
	// li r5,201
	ctx.r5.s64 = 201;
loc_820BF714:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820febe0
	ctx.lr = 0x820BF72C;
	sub_820FEBE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1800
	ctx.r5.s64 = 1800;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820febe0
	ctx.lr = 0x820BF748;
	sub_820FEBE0(ctx, base);
loc_820BF748:
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

__attribute__((alias("__imp__sub_820BF760"))) PPC_WEAK_FUNC(sub_820BF760);
PPC_FUNC_IMPL(__imp__sub_820BF760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r10,-4984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4984);
	// bne cr6,0x820bf77c
	if (!ctx.cr6.eq) goto loc_820BF77C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820bf7b0
	if (ctx.cr6.eq) goto loc_820BF7B0;
loc_820BF77C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820bf78c
	if (!ctx.cr6.eq) goto loc_820BF78C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820bf7b0
	if (ctx.cr6.eq) goto loc_820BF7B0;
loc_820BF78C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820bf7b0
	if (ctx.cr6.eq) goto loc_820BF7B0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820bf7b0
	if (ctx.cr6.eq) goto loc_820BF7B0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x820bf7b0
	if (ctx.cr6.eq) goto loc_820BF7B0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820BF7B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF7B8"))) PPC_WEAK_FUNC(sub_820BF7B8);
PPC_FUNC_IMPL(__imp__sub_820BF7B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf824
	if (ctx.cr6.eq) goto loc_820BF824;
	// lwz r3,1928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf81c
	if (!ctx.cr6.eq) goto loc_820BF81C;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820BF808;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf824
	if (ctx.cr6.eq) goto loc_820BF824;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf824
	if (ctx.cr6.eq) goto loc_820BF824;
loc_820BF81C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82229a68
	ctx.lr = 0x820BF824;
	sub_82229A68(ctx, base);
loc_820BF824:
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

__attribute__((alias("__imp__sub_820BF83C"))) PPC_WEAK_FUNC(sub_820BF83C);
PPC_FUNC_IMPL(__imp__sub_820BF83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF840"))) PPC_WEAK_FUNC(sub_820BF840);
PPC_FUNC_IMPL(__imp__sub_820BF840) {
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
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf8cc
	if (ctx.cr6.eq) goto loc_820BF8CC;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820bf8b4
	if (ctx.cr6.eq) goto loc_820BF8B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820bf8b4
	if (ctx.cr6.eq) goto loc_820BF8B4;
	// lwz r3,1928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf89c
	if (!ctx.cr6.eq) goto loc_820BF89C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e6c8
	ctx.lr = 0x820BF894;
	sub_8209E6C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf8cc
	if (ctx.cr6.eq) goto loc_820BF8CC;
loc_820BF89C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
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
loc_820BF8B4:
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
loc_820BF8CC:
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

__attribute__((alias("__imp__sub_820BF8E4"))) PPC_WEAK_FUNC(sub_820BF8E4);
PPC_FUNC_IMPL(__imp__sub_820BF8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF8E8"))) PPC_WEAK_FUNC(sub_820BF8E8);
PPC_FUNC_IMPL(__imp__sub_820BF8E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf928
	if (ctx.cr6.eq) goto loc_820BF928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820ce0c8
	ctx.lr = 0x820BF920;
	sub_820CE0C8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820bf948
	if (!ctx.cr6.eq) goto loc_820BF948;
loc_820BF928:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,2120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BF948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BF948:
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

__attribute__((alias("__imp__sub_820BF960"))) PPC_WEAK_FUNC(sub_820BF960);
PPC_FUNC_IMPL(__imp__sub_820BF960) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// lwz r10,1956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820bf9c0
	if (!ctx.cr6.eq) goto loc_820BF9C0;
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820BF9A0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14968
	ctx.r4.s64 = ctx.r11.s64 + 14968;
	// bl 0x820bc250
	ctx.lr = 0x820BF9C0;
	sub_820BC250(ctx, base);
loc_820BF9C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF9D0"))) PPC_WEAK_FUNC(sub_820BF9D0);
PPC_FUNC_IMPL(__imp__sub_820BF9D0) {
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
	// bl 0x820bebd0
	ctx.lr = 0x820BF9F0;
	sub_820BEBD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfa0c
	if (ctx.cr6.eq) goto loc_820BFA0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820BFA08;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BFA0C:
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

__attribute__((alias("__imp__sub_820BFA24"))) PPC_WEAK_FUNC(sub_820BFA24);
PPC_FUNC_IMPL(__imp__sub_820BFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFA28"))) PPC_WEAK_FUNC(sub_820BFA28);
PPC_FUNC_IMPL(__imp__sub_820BFA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820BFA30;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,660
	ctx.r30.s64 = ctx.r3.s64 + 660;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1270
	ctx.lr = 0x820BFA44;
	sub_820F1270(ctx, base);
	// addi r26,r31,-1248
	ctx.r26.s64 = ctx.r31.s64 + -1248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820f18a8
	ctx.lr = 0x820BFA54;
	sub_820F18A8(ctx, base);
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
	// lwz r11,-4984(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820bfa6c
	if (ctx.cr6.eq) goto loc_820BFA6C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820bfa80
	if (!ctx.cr6.eq) goto loc_820BFA80;
loc_820BFA6C:
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// bl 0x8216bfb8
	ctx.lr = 0x820BFA74;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820BFA78;
	sub_8215BD28(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
loc_820BFA80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1ce8
	ctx.lr = 0x820BFA88;
	sub_820F1CE8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r24.u32);
	// stw r24,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r24.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r30,756(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82183078
	ctx.lr = 0x820BFAAC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820BFAB8;
	sub_821837D0(ctx, base);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820BFAC8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfad8
	if (ctx.cr6.eq) goto loc_820BFAD8;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820bfadc
	goto loc_820BFADC;
loc_820BFAD8:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_820BFADC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bfb88
	if (ctx.cr6.eq) goto loc_820BFB88;
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// bl 0x8216bfb8
	ctx.lr = 0x820BFB00;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820BFB04;
	sub_8215BD28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bfb3c
	if (ctx.cr6.eq) goto loc_820BFB3C;
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// bl 0x8216bfb8
	ctx.lr = 0x820BFB18;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820BFB1C;
	sub_8215BD28(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BFB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bfb7c
	goto loc_820BFB7C;
loc_820BFB3C:
	// li r3,92
	ctx.r3.s64 = 92;
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lbz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// bl 0x82080000
	ctx.lr = 0x820BFB4C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfb70
	if (ctx.cr6.eq) goto loc_820BFB70;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lwz r7,756(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82214518
	ctx.lr = 0x820BFB68;
	sub_82214518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820bfb74
	goto loc_820BFB74;
loc_820BFB70:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_820BFB74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f1298
	ctx.lr = 0x820BFB7C;
	sub_820F1298(ctx, base);
loc_820BFB7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 248);
	// bl 0x822146d8
	ctx.lr = 0x820BFB88;
	sub_822146D8(ctx, base);
loc_820BFB88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820BFB90;
	sub_821837D0(ctx, base);
	// addi r29,r31,-1248
	ctx.r29.s64 = ctx.r31.s64 + -1248;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFBAC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfbe0
	if (ctx.cr6.eq) goto loc_820BFBE0;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bfbe0
	if (ctx.cr6.eq) goto loc_820BFBE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82100610
	ctx.lr = 0x820BFBDC;
	sub_82100610(ctx, base);
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
loc_820BFBE0:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFBF8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfc20
	if (ctx.cr6.eq) goto loc_820BFC20;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bfc20
	if (ctx.cr6.eq) goto loc_820BFC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bc368
	ctx.lr = 0x820BFC14;
	sub_820BC368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1118
	ctx.lr = 0x820BFC1C;
	sub_820F1118(ctx, base);
	// stw r24,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r24.u32);
loc_820BFC20:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFC38;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfc54
	if (ctx.cr6.eq) goto loc_820BFC54;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfc54
	if (ctx.cr6.eq) goto loc_820BFC54;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_820BFC54:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFC6C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfc90
	if (ctx.cr6.eq) goto loc_820BFC90;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfc90
	if (ctx.cr6.eq) goto loc_820BFC90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFC90:
	// lwz r11,-4984(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4984);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820bfcb0
	if (ctx.cr6.eq) goto loc_820BFCB0;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_820BFCB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfcc0
	if (ctx.cr6.eq) goto loc_820BFCC0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_820BFCC0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820BFCD0;
	sub_82161148(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r3,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r3.u32);
	// lwz r3,-8976(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfcf4
	if (ctx.cr6.eq) goto loc_820BFCF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// bl 0x820ce0c8
	ctx.lr = 0x820BFCF0;
	sub_820CE0C8(ctx, base);
	// b 0x820bfd14
	goto loc_820BFD14;
loc_820BFCF4:
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,2120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BFD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFD14:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820bf960
	ctx.lr = 0x820BFD1C;
	sub_820BF960(ctx, base);
	// stw r24,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r24.u32);
	// stw r24,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r24.u32);
	// stw r24,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820BFD30"))) PPC_WEAK_FUNC(sub_820BFD30);
PPC_FUNC_IMPL(__imp__sub_820BFD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820BFD38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x820f12c8
	ctx.lr = 0x820BFD44;
	sub_820F12C8(ctx, base);
	// addi r30,r28,-1248
	ctx.r30.s64 = ctx.r28.s64 + -1248;
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFD60;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfd84
	if (ctx.cr6.eq) goto loc_820BFD84;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfd84
	if (ctx.cr6.eq) goto loc_820BFD84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFD84:
	// addic. r27,r28,-1248
	ctx.xer.ca = ctx.r28.u32 > 1247;
	ctx.r27.s64 = ctx.r28.s64 + -1248;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x820bfdc0
	if (ctx.cr0.eq) goto loc_820BFDC0;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820BFD9C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfdc0
	if (ctx.cr6.eq) goto loc_820BFDC0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfdc0
	if (ctx.cr6.eq) goto loc_820BFDC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFDC0:
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// lwz r3,716(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// ori r4,r4,20512
	ctx.r4.u64 = ctx.r4.u64 | 20512;
	// bl 0x821882d0
	ctx.lr = 0x820BFDD0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfdf4
	if (ctx.cr6.eq) goto loc_820BFDF4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfdf4
	if (ctx.cr6.eq) goto loc_820BFDF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFDF4:
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFE0C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfe18
	if (ctx.cr6.eq) goto loc_820BFE18;
	// bl 0x820f6d90
	ctx.lr = 0x820BFE18;
	sub_820F6D90(ctx, base);
loc_820BFE18:
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFE30;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfe5c
	if (ctx.cr6.eq) goto loc_820BFE5C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bfe5c
	if (ctx.cr6.eq) goto loc_820BFE5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f15c0
	ctx.lr = 0x820BFE4C;
	sub_820F15C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bfe5c
	if (ctx.cr6.eq) goto loc_820BFE5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1580
	ctx.lr = 0x820BFE5C;
	sub_820F1580(ctx, base);
loc_820BFE5C:
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFE74;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfe90
	if (ctx.cr6.eq) goto loc_820BFE90;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfe90
	if (ctx.cr6.eq) goto loc_820BFE90;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_820BFE90:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820BFEA8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfef0
	if (ctx.cr6.eq) goto loc_820BFEF0;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bfef0
	if (ctx.cr6.eq) goto loc_820BFEF0;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFED4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfef0
	if (ctx.cr6.eq) goto loc_820BFEF0;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bfef0
	if (ctx.cr6.eq) goto loc_820BFEF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f09e8
	ctx.lr = 0x820BFEF0;
	sub_820F09E8(ctx, base);
loc_820BFEF0:
	// bl 0x820f0ef0
	ctx.lr = 0x820BFEF4;
	sub_820F0EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bff34
	if (ctx.cr6.eq) goto loc_820BFF34;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// and r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x820BFF18;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bff34
	if (ctx.cr6.eq) goto loc_820BFF34;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bff34
	if (ctx.cr6.eq) goto loc_820BFF34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f09e8
	ctx.lr = 0x820BFF34;
	sub_820F09E8(ctx, base);
loc_820BFF34:
	// lwz r31,44(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bffa0
	if (ctx.cr6.eq) goto loc_820BFFA0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r11,-28392
	ctx.r29.s64 = ctx.r11.s64 + -28392;
loc_820BFF48:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BFF58:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820bff94
	if (ctx.cr6.eq) goto loc_820BFF94;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x820bff58
	if (ctx.cr6.lt) goto loc_820BFF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188260
	ctx.lr = 0x820BFF7C;
	sub_82188260(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BFF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFF94:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820bff48
	if (!ctx.cr6.eq) goto loc_820BFF48;
loc_820BFFA0:
	// lwz r31,48(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c000c
	if (ctx.cr6.eq) goto loc_820C000C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r11,-28404
	ctx.r29.s64 = ctx.r11.s64 + -28404;
loc_820BFFB4:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BFFC4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820c0000
	if (ctx.cr6.eq) goto loc_820C0000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x820bffc4
	if (ctx.cr6.lt) goto loc_820BFFC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188260
	ctx.lr = 0x820BFFE8;
	sub_82188260(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C0000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C0000:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820bffb4
	if (!ctx.cr6.eq) goto loc_820BFFB4;
loc_820C000C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0028
	if (ctx.cr6.eq) goto loc_820C0028;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// bl 0x820ce0c8
	ctx.lr = 0x820C0028;
	sub_820CE0C8(ctx, base);
loc_820C0028:
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,2120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C0048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820C0050"))) PPC_WEAK_FUNC(sub_820C0050);
PPC_FUNC_IMPL(__imp__sub_820C0050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820C0058;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C0074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c0090
	if (!ctx.cr6.eq) goto loc_820C0090;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820c0090
	if (ctx.cr6.eq) goto loc_820C0090;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x820c025c
	if (!ctx.cr6.eq) goto loc_820C025C;
loc_820C0090:
	// addi r28,r31,1248
	ctx.r28.s64 = ctx.r31.s64 + 1248;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x820C00A4;
	sub_821882D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c00b8
	if (ctx.cr6.eq) goto loc_820C00B8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820c00bc
	goto loc_820C00BC;
loc_820C00B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820C00BC:
	// bl 0x820f1580
	ctx.lr = 0x820C00C0;
	sub_820F1580(ctx, base);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r4,r31,900
	ctx.r4.s64 = ctx.r31.s64 + 900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x820C00D4;
	sub_821847A8(ctx, base);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820C00E4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c00f4
	if (ctx.cr6.eq) goto loc_820C00F4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820c00f8
	goto loc_820C00F8;
loc_820C00F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820C00F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,124(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stw r27,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r27.u32);
	// lfs f0,1552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820c0148
	if (ctx.cr6.eq) goto loc_820C0148;
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x820C0124;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0134
	if (ctx.cr6.eq) goto loc_820C0134;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820c0138
	goto loc_820C0138;
loc_820C0134:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820C0138:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f1,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820efa60
	ctx.lr = 0x820C0148;
	sub_820EFA60(ctx, base);
loc_820C0148:
	// stfs f31,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4c0
	ctx.lr = 0x820C0158;
	sub_820EF4C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4d0
	ctx.lr = 0x820C0164;
	sub_820EF4D0(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x8209eda0
	ctx.lr = 0x820C017C;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x820C0184;
	sub_8208ECD0(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c01ac
	if (ctx.cr6.eq) goto loc_820C01AC;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c01ac
	if (!ctx.cr6.eq) goto loc_820C01AC;
	// stw r29,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef498
	ctx.lr = 0x820C01AC;
	sub_820EF498(ctx, base);
loc_820C01AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e208
	ctx.lr = 0x820C01B4;
	sub_8208E208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c01cc
	if (ctx.cr6.eq) goto loc_820C01CC;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c01cc
	if (!ctx.cr6.eq) goto loc_820C01CC;
	// stw r29,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r29.u32);
loc_820C01CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7938
	ctx.lr = 0x820C01D4;
	sub_820F7938(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r27.u8);
	// stb r11,1945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1945, ctx.r11.u8);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C01F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820C0208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,756(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c022c
	if (!ctx.cr6.eq) goto loc_820C022C;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c022c
	if (!ctx.cr6.eq) goto loc_820C022C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bf648
	ctx.lr = 0x820C022C;
	sub_820BF648(ctx, base);
loc_820C022C:
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x821882d0
	ctx.lr = 0x820C023C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0248
	if (ctx.cr6.eq) goto loc_820C0248;
	// bl 0x820f6d90
	ctx.lr = 0x820C0248;
	sub_820F6D90(ctx, base);
loc_820C0248:
	// lwz r3,1908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c025c
	if (ctx.cr6.eq) goto loc_820C025C;
	// lhz r4,1626(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1626);
	// bl 0x820a8c40
	ctx.lr = 0x820C025C;
	sub_820A8C40(ctx, base);
loc_820C025C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820C0268"))) PPC_WEAK_FUNC(sub_820C0268);
PPC_FUNC_IMPL(__imp__sub_820C0268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820C0270;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249928
	ctx.lr = 0x820C0278;
	sub_82249928(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lfs f29,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfs f28,13576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13576);
	ctx.f28.f64 = double(temp.f32);
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
loc_820C02AC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r28,14
	ctx.r27.s64 = ctx.r28.s64 + 14;
loc_820C02B4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,-8836(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -8836);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r30,848
	ctx.r3.s64 = ctx.r30.s64 + 848;
	// stfs f29,852(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 852, temp.u32);
	// stfs f13,856(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 856, temp.u32);
	// stfs f31,860(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 860, temp.u32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fnmsubs f8,f9,f28,f0
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f28.f64 - ctx.f0.f64)));
	// stfs f8,848(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 848, temp.u32);
	// bl 0x820a5e08
	ctx.lr = 0x820C0300;
	sub_820A5E08(ctx, base);
	// add r9,r27,r29
	ctx.r9.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f30,852(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 852, temp.u32);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 24, ctx.xer);
	// stwx r26,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r26.u32);
	// blt cr6,0x820c02b4
	if (ctx.cr6.lt) goto loc_820C02B4;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r28,96
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 96, ctx.xer);
	// blt cr6,0x820c02ac
	if (ctx.cr6.lt) goto loc_820C02AC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,6996(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,7004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,13572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13572);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,6144
	ctx.r10.s64 = ctx.r31.s64 + 6144;
	// lfs f13,13568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13568);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stfs f0,6992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// stfs f13,7000(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stfs f13,7056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7056, temp.u32);
	// stfs f30,7060(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7060, temp.u32);
	// stfs f13,7064(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7064, temp.u32);
	// stfs f31,7068(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
	// stfs f13,7120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7120, temp.u32);
	// stfs f30,7124(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7124, temp.u32);
	// stfs f0,7128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7128, temp.u32);
	// stfs f31,7132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7132, temp.u32);
	// stfs f0,7184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// stfs f30,7188(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7188, temp.u32);
	// stfs f0,7192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7192, temp.u32);
	// stfs f31,7196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7196, temp.u32);
	// stw r11,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r11.u32);
	// stw r11,7104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7104, ctx.r11.u32);
	// stw r11,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r11.u32);
	// stw r11,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r11.u32);
loc_820C03A4:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// subfe r3,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r4,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r4.u16);
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sthu r7,4(r9)
	// bdnz 0x820c03a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C03A4;
	// li r10,99
	ctx.r10.s64 = 99;
	// sth r26,394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 394, ctx.r26.u16);
	// li r11,72
	ctx.r11.s64 = 72;
	// sth r26,410(r31)
	PPC_STORE_U16(ctx.r31.u32 + 410, ctx.r26.u16);
	// sth r10,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r10.u16);
	// li r5,97
	ctx.r5.s64 = 97;
	// sth r11,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r11.u16);
	// li r6,24
	ctx.r6.s64 = 24;
	// sth r10,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r10.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r11,422(r31)
	PPC_STORE_U16(ctx.r31.u32 + 422, ctx.r11.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,98
	ctx.r7.s64 = 98;
	// sth r8,392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 392, ctx.r8.u16);
	// li r9,48
	ctx.r9.s64 = 48;
	// sth r5,396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 396, ctx.r5.u16);
	// sth r6,398(r31)
	PPC_STORE_U16(ctx.r31.u32 + 398, ctx.r6.u16);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// lfs f30,9052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	ctx.f30.f64 = double(temp.f32);
	// sth r7,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r7.u16);
	// lfs f28,8308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	ctx.f28.f64 = double(temp.f32);
	// sth r9,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r9.u16);
	// sth r8,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r8.u16);
	// sth r5,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r5.u16);
	// sth r6,414(r31)
	PPC_STORE_U16(ctx.r31.u32 + 414, ctx.r6.u16);
	// sth r7,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r7.u16);
	// sth r9,418(r31)
	PPC_STORE_U16(ctx.r31.u32 + 418, ctx.r9.u16);
loc_820C0440:
	// lhz r11,-414(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -414);
	// lhz r10,-416(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -416);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r11,848
	ctx.r4.s64 = ctx.r11.s64 + 848;
	// addi r3,r10,848
	ctx.r3.s64 = ctx.r10.s64 + 848;
	// bl 0x821871a0
	ctx.lr = 0x820C046C;
	sub_821871A0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r26,100
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 100, ctx.xer);
	// blt cr6,0x820c0480
	if (ctx.cr6.lt) goto loc_820C0480;
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// b 0x820c0484
	goto loc_820C0484;
loc_820C0480:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
loc_820C0484:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r26,104
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 104, ctx.xer);
	// blt cr6,0x820c0440
	if (ctx.cr6.lt) goto loc_820C0440;
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r11,r31,828
	ctx.r11.s64 = ctx.r31.s64 + 828;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820C04A4:
	// stfs f29,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f29,40(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f29,36(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f29,60(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f29,56(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f29,52(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfsu f31,64(r11)
	// bdnz 0x820c04a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C04A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,7256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7256, temp.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r10,7248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7248, ctx.r10.u32);
	// lfs f0,13564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7260, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249974
	ctx.lr = 0x820C04EC;
	sub_82249974(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820C04F0"))) PPC_WEAK_FUNC(sub_820C04F0);
PPC_FUNC_IMPL(__imp__sub_820C04F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f12,852(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 852, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,848(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 848, temp.u32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,856(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// stfs f0,860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 860, temp.u32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// bne cr6,0x820c056c
	if (!ctx.cr6.eq) goto loc_820C056C;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8836);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x820c05cc
	goto loc_820C05CC;
loc_820C056C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x820c0588
	if (!ctx.cr6.eq) goto loc_820C0588;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-8836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8836);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x820c05cc
	goto loc_820C05CC;
loc_820C0588:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x820c05a8
	if (!ctx.cr6.eq) goto loc_820C05A8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// b 0x820c05cc
	goto loc_820C05CC;
loc_820C05A8:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x820c05c4
	if (!ctx.cr6.eq) goto loc_820C05C4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-8836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8836);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x820c05cc
	goto loc_820C05CC;
loc_820C05C4:
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
loc_820C05CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r8,60
	ctx.r8.s64 = 60;
	// addi r7,r11,864
	ctx.r7.s64 = ctx.r11.s64 + 864;
	// lfs f12,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,864(r11)
	PPC_STORE_U64(ctx.r11.u32 + 864, ctx.r6.u64);
	// std r5,872(r11)
	PPC_STORE_U64(ctx.r11.u32 + 872, ctx.r5.u64);
	// stw r8,7248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7248, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0614"))) PPC_WEAK_FUNC(sub_820C0614);
PPC_FUNC_IMPL(__imp__sub_820C0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0618"))) PPC_WEAK_FUNC(sub_820C0618);
PPC_FUNC_IMPL(__imp__sub_820C0618) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r4,7252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7252, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13580
	ctx.r10.s64 = ctx.r11.s64 + 13580;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820c0268
	ctx.lr = 0x820C0644;
	sub_820C0268(ctx, base);
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

__attribute__((alias("__imp__sub_820C065C"))) PPC_WEAK_FUNC(sub_820C065C);
PPC_FUNC_IMPL(__imp__sub_820C065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0660"))) PPC_WEAK_FUNC(sub_820C0660);
PPC_FUNC_IMPL(__imp__sub_820C0660) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

