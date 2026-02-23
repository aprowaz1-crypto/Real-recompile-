#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8218DAD8"))) PPC_WEAK_FUNC(sub_8218DAD8);
PPC_FUNC_IMPL(__imp__sub_8218DAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218DAE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218db34
	if (!ctx.cr6.gt) goto loc_8218DB34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8218DAFC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218db20
	if (ctx.cr6.eq) goto loc_8218DB20;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218DB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218DB20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218dafc
	if (ctx.cr6.lt) goto loc_8218DAFC;
loc_8218DB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218DB3C"))) PPC_WEAK_FUNC(sub_8218DB3C);
PPC_FUNC_IMPL(__imp__sub_8218DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DB40"))) PPC_WEAK_FUNC(sub_8218DB40);
PPC_FUNC_IMPL(__imp__sub_8218DB40) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,29252
	ctx.r10.s64 = ctx.r11.s64 + 29252;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82088268
	ctx.lr = 0x8218DB70;
	sub_82088268(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82088268
	ctx.lr = 0x8218DB78;
	sub_82088268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218dd78
	ctx.lr = 0x8218DB80;
	sub_8218DD78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218db9c
	if (ctx.cr6.eq) goto loc_8218DB9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218DB98;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218DB9C:
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

__attribute__((alias("__imp__sub_8218DBB4"))) PPC_WEAK_FUNC(sub_8218DBB4);
PPC_FUNC_IMPL(__imp__sub_8218DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DBB8"))) PPC_WEAK_FUNC(sub_8218DBB8);
PPC_FUNC_IMPL(__imp__sub_8218DBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218DBC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218dbe0
	if (ctx.cr6.eq) goto loc_8218DBE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218DBE0:
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,4
	ctx.r28.s64 = 4;
	// stwx r31,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r31.u32);
	// bl 0x82088650
	ctx.lr = 0x8218DBF0;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x8218DBF8;
	sub_82182F58(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821837d0
	ctx.lr = 0x8218DC00;
	sub_821837D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218dc18
	if (ctx.cr6.eq) goto loc_8218DC18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218DC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218DC18:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r27,21788(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21788);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218e120
	ctx.lr = 0x8218DC28;
	sub_8218E120(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8218DC2C:
	// lwzx r30,r28,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218dc50
	if (!ctx.cr6.eq) goto loc_8218DC50;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x820882b0
	ctx.lr = 0x8218DC48;
	sub_820882B0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82257118
	ctx.lr = 0x8218DC50;
	sub_82257118(ctx, base);
loc_8218DC50:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218dc68
	if (ctx.cr6.eq) goto loc_8218DC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218DC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218DC68:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82185500
	ctx.lr = 0x8218DC74;
	sub_82185500(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218dc8c
	if (!ctx.cr6.eq) goto loc_8218DC8C;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82088758
	ctx.lr = 0x8218DC8C;
	sub_82088758(ctx, base);
loc_8218DC8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218e120
	ctx.lr = 0x8218DC94;
	sub_8218E120(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8218dc2c
	goto loc_8218DC2C;
}

__attribute__((alias("__imp__sub_8218DCA4"))) PPC_WEAK_FUNC(sub_8218DCA4);
PPC_FUNC_IMPL(__imp__sub_8218DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DCA8"))) PPC_WEAK_FUNC(sub_8218DCA8);
PPC_FUNC_IMPL(__imp__sub_8218DCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218DCB0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82183850
	ctx.lr = 0x8218DCC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218dce0
	if (ctx.cr6.eq) goto loc_8218DCE0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8218DCDC;
	sub_82183448(ctx, base);
	// b 0x8218dce8
	goto loc_8218DCE8;
loc_8218DCE0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8218DCE8;
	sub_821845A0(ctx, base);
loc_8218DCE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218dd04
	if (ctx.cr6.eq) goto loc_8218DD04;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218d898
	ctx.lr = 0x8218DD04;
	sub_8218D898(ctx, base);
loc_8218DD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218DD0C"))) PPC_WEAK_FUNC(sub_8218DD0C);
PPC_FUNC_IMPL(__imp__sub_8218DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DD10"))) PPC_WEAK_FUNC(sub_8218DD10);
PPC_FUNC_IMPL(__imp__sub_8218DD10) {
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
	// bl 0x8218d950
	ctx.lr = 0x8218DD30;
	sub_8218D950(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218dd4c
	if (ctx.cr6.eq) goto loc_8218DD4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218DD48;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218DD4C:
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

__attribute__((alias("__imp__sub_8218DD64"))) PPC_WEAK_FUNC(sub_8218DD64);
PPC_FUNC_IMPL(__imp__sub_8218DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DD68"))) PPC_WEAK_FUNC(sub_8218DD68);
PPC_FUNC_IMPL(__imp__sub_8218DD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21784, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218DD74"))) PPC_WEAK_FUNC(sub_8218DD74);
PPC_FUNC_IMPL(__imp__sub_8218DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DD78"))) PPC_WEAK_FUNC(sub_8218DD78);
PPC_FUNC_IMPL(__imp__sub_8218DD78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,29260
	ctx.r9.s64 = ctx.r10.s64 + 29260;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82088268
	sub_82088268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218DD90"))) PPC_WEAK_FUNC(sub_8218DD90);
PPC_FUNC_IMPL(__imp__sub_8218DD90) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r11,21784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21784);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,21784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21784, ctx.r11.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x820885f0
	ctx.lr = 0x8218DDDC;
	sub_820885F0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82088398
	ctx.lr = 0x8218DDE8;
	sub_82088398(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820884b0
	ctx.lr = 0x8218DDF4;
	sub_820884B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8218DE08;
	sub_820882B8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8218DE24"))) PPC_WEAK_FUNC(sub_8218DE24);
PPC_FUNC_IMPL(__imp__sub_8218DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DE28"))) PPC_WEAK_FUNC(sub_8218DE28);
PPC_FUNC_IMPL(__imp__sub_8218DE28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82088358
	sub_82088358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218DE30"))) PPC_WEAK_FUNC(sub_8218DE30);
PPC_FUNC_IMPL(__imp__sub_8218DE30) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,29264
	ctx.r10.s64 = ctx.r11.s64 + 29264;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241e07c
	ctx.lr = 0x8218DE58;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,3840
	ctx.r5.s64 = 3840;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x8218DE68;
	sub_82248F70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,3880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3880, ctx.r11.u64);
	// std r11,3888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3888, ctx.r11.u64);
	// std r11,3896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3896, ctx.r11.u64);
	// std r11,3904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3904, ctx.r11.u64);
	// std r11,3912(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3912, ctx.r11.u64);
	// std r11,3920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3920, ctx.r11.u64);
	// stw r31,21788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21788, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8218DEA8"))) PPC_WEAK_FUNC(sub_8218DEA8);
PPC_FUNC_IMPL(__imp__sub_8218DEA8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r6,970
	ctx.r11.s64 = ctx.r6.s64 + 970;
	// addi r10,r6,976
	ctx.r10.s64 = ctx.r6.s64 + 976;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218DEC4"))) PPC_WEAK_FUNC(sub_8218DEC4);
PPC_FUNC_IMPL(__imp__sub_8218DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DEC8"))) PPC_WEAK_FUNC(sub_8218DEC8);
PPC_FUNC_IMPL(__imp__sub_8218DEC8) {
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
	// addi r31,r3,3880
	ctx.r31.s64 = ctx.r3.s64 + 3880;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8218DEE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218defc
	if (ctx.cr6.eq) goto loc_8218DEFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218DEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218DEFC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8218dee4
	if (!ctx.cr0.eq) goto loc_8218DEE4;
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

__attribute__((alias("__imp__sub_8218DF20"))) PPC_WEAK_FUNC(sub_8218DF20);
PPC_FUNC_IMPL(__imp__sub_8218DF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218DF28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218DF40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
loc_8218DF48:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r28,r10
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8218df78
	if (ctx.cr6.eq) goto loc_8218DF78;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x8218df48
	if (ctx.cr6.lt) goto loc_8218DF48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218DF6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218DF78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218DF80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218DF9C"))) PPC_WEAK_FUNC(sub_8218DF9C);
PPC_FUNC_IMPL(__imp__sub_8218DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DFA0"))) PPC_WEAK_FUNC(sub_8218DFA0);
PPC_FUNC_IMPL(__imp__sub_8218DFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218DFA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8218DFB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218dfe0
	if (ctx.cr6.eq) goto loc_8218DFE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820882b0
	ctx.lr = 0x8218DFD0;
	sub_820882B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218dfe0
	if (!ctx.cr6.eq) goto loc_8218DFE0;
	// bl 0x82257150
	ctx.lr = 0x8218DFE0;
	sub_82257150(ctx, base);
loc_8218DFE0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// bne 0x8218dfb8
	if (!ctx.cr0.eq) goto loc_8218DFB8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218DFF4"))) PPC_WEAK_FUNC(sub_8218DFF4);
PPC_FUNC_IMPL(__imp__sub_8218DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218DFF8"))) PPC_WEAK_FUNC(sub_8218DFF8);
PPC_FUNC_IMPL(__imp__sub_8218DFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218E000;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8218E010:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218e028
	if (ctx.cr6.eq) goto loc_8218E028;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82088758
	ctx.lr = 0x8218E028;
	sub_82088758(ctx, base);
loc_8218E028:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// bne 0x8218e010
	if (!ctx.cr0.eq) goto loc_8218E010;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218E03C"))) PPC_WEAK_FUNC(sub_8218E03C);
PPC_FUNC_IMPL(__imp__sub_8218E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E040"))) PPC_WEAK_FUNC(sub_8218E040);
PPC_FUNC_IMPL(__imp__sub_8218E040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218E048;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218E064;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248f70
	ctx.lr = 0x8218E08C;
	sub_82248F70(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 + 28;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r10,29284
	ctx.r4.s64 = ctx.r10.s64 + 29284;
	// bl 0x82248910
	ctx.lr = 0x8218E0A4;
	sub_82248910(ctx, base);
	// std r26,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r26.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8218E0BC;
	sub_820882B8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// addi r4,r9,29268
	ctx.r4.s64 = ctx.r9.s64 + 29268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82248910
	ctx.lr = 0x8218E0E0;
	sub_82248910(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8218E0F4;
	sub_820882B8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218E118;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8218E120"))) PPC_WEAK_FUNC(sub_8218E120);
PPC_FUNC_IMPL(__imp__sub_8218E120) {
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
	// bl 0x82088650
	ctx.lr = 0x8218E138;
	sub_82088650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x8218df20
	ctx.lr = 0x8218E148;
	sub_8218DF20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218e184
	if (ctx.cr6.eq) goto loc_8218E184;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82088758
	ctx.lr = 0x8218E164;
	sub_82088758(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820882b0
	ctx.lr = 0x8218E170;
	sub_820882B0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
loc_8218E184:
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

__attribute__((alias("__imp__sub_8218E198"))) PPC_WEAK_FUNC(sub_8218E198);
PPC_FUNC_IMPL(__imp__sub_8218E198) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,29260
	ctx.r10.s64 = ctx.r11.s64 + 29260;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82088268
	ctx.lr = 0x8218E1C8;
	sub_82088268(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218e1e4
	if (ctx.cr6.eq) goto loc_8218E1E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218E1E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218E1E4:
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

__attribute__((alias("__imp__sub_8218E1FC"))) PPC_WEAK_FUNC(sub_8218E1FC);
PPC_FUNC_IMPL(__imp__sub_8218E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E200"))) PPC_WEAK_FUNC(sub_8218E200);
PPC_FUNC_IMPL(__imp__sub_8218E200) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29260
	ctx.r9.s64 = ctx.r10.s64 + 29260;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8218dd90
	ctx.lr = 0x8218E234;
	sub_8218DD90(ctx, base);
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

__attribute__((alias("__imp__sub_8218E24C"))) PPC_WEAK_FUNC(sub_8218E24C);
PPC_FUNC_IMPL(__imp__sub_8218E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E250"))) PPC_WEAK_FUNC(sub_8218E250);
PPC_FUNC_IMPL(__imp__sub_8218E250) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r11,29264
	ctx.r9.s64 = ctx.r11.s64 + 29264;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,21788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21788, ctx.r11.u32);
	// beq cr6,0x8218e294
	if (ctx.cr6.eq) goto loc_8218E294;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218E290;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218E294:
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

__attribute__((alias("__imp__sub_8218E2A8"))) PPC_WEAK_FUNC(sub_8218E2A8);
PPC_FUNC_IMPL(__imp__sub_8218E2A8) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218E2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8218e2e0
	if (!ctx.cr6.eq) goto loc_8218E2E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8218E2E0:
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

__attribute__((alias("__imp__sub_8218E2F4"))) PPC_WEAK_FUNC(sub_8218E2F4);
PPC_FUNC_IMPL(__imp__sub_8218E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E2F8"))) PPC_WEAK_FUNC(sub_8218E2F8);
PPC_FUNC_IMPL(__imp__sub_8218E2F8) {
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
	// bl 0x8241dd2c
	ctx.lr = 0x8218E318;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x8218e338
	if (!ctx.cr6.eq) goto loc_8218E338;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x8218e360
	goto loc_8218E360;
loc_8218E338:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e35c
	if (ctx.cr6.eq) goto loc_8218E35C;
loc_8218E348:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218e348
	if (!ctx.cr6.eq) goto loc_8218E348;
loc_8218E35C:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8218E360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218E368;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8218E388"))) PPC_WEAK_FUNC(sub_8218E388);
PPC_FUNC_IMPL(__imp__sub_8218E388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218E390;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x8218E3A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8218e3c8
	if (!ctx.cr6.eq) goto loc_8218E3C8;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_8218E3C0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218e3d8
	if (ctx.cr6.eq) goto loc_8218E3D8;
loc_8218E3C8:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218e3c0
	if (!ctx.cr6.eq) goto loc_8218E3C0;
	// b 0x8218e404
	goto loc_8218E404;
loc_8218E3D8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e3ec
	if (ctx.cr6.eq) goto loc_8218E3EC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8218E3EC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e400
	if (ctx.cr6.eq) goto loc_8218E400;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_8218E400:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8218E404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218E40C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218E420"))) PPC_WEAK_FUNC(sub_8218E420);
PPC_FUNC_IMPL(__imp__sub_8218E420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218E428;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e4a4
	if (ctx.cr6.eq) goto loc_8218E4A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218E44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218E458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218e494
	if (ctx.cr6.eq) goto loc_8218E494;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e388
	ctx.lr = 0x8218E488;
	sub_8218E388(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218E494;
	sub_82183E40(ctx, base);
loc_8218E494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218E49C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_8218E4A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218E4AC"))) PPC_WEAK_FUNC(sub_8218E4AC);
PPC_FUNC_IMPL(__imp__sub_8218E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E4B0"))) PPC_WEAK_FUNC(sub_8218E4B0);
PPC_FUNC_IMPL(__imp__sub_8218E4B0) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,21792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21792, ctx.r30.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218e4ec
	if (ctx.cr6.eq) goto loc_8218E4EC;
	// bl 0x8241dd3c
	ctx.lr = 0x8218E4E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8218E4EC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218e4fc
	if (ctx.cr6.eq) goto loc_8218E4FC;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8218E4FC:
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

__attribute__((alias("__imp__sub_8218E514"))) PPC_WEAK_FUNC(sub_8218E514);
PPC_FUNC_IMPL(__imp__sub_8218E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E518"))) PPC_WEAK_FUNC(sub_8218E518);
PPC_FUNC_IMPL(__imp__sub_8218E518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218E520;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,52(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x8218E53C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218E548;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8218E54C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218e564
	if (ctx.cr6.eq) goto loc_8218E564;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8218E560;
	sub_82183448(ctx, base);
	// b 0x8218e56c
	goto loc_8218E56C;
loc_8218E564:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8218E56C;
	sub_821845A0(ctx, base);
loc_8218E56C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8218E57C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218e57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E57C;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// beq cr6,0x8218e59c
	if (ctx.cr6.eq) goto loc_8218E59C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x8218e5a4
	goto loc_8218E5A4;
loc_8218E59C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8218E5A4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218e2f8
	ctx.lr = 0x8218E5B0;
	sub_8218E2F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218E5B8;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218E5C4"))) PPC_WEAK_FUNC(sub_8218E5C4);
PPC_FUNC_IMPL(__imp__sub_8218E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E5C8"))) PPC_WEAK_FUNC(sub_8218E5C8);
PPC_FUNC_IMPL(__imp__sub_8218E5C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,11096
	ctx.r9.s64 = ctx.r11.s64 + 11096;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r7,-7512
	ctx.r4.s64 = ctx.r7.s64 + -7512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,21792(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21792);
	// bl 0x8218e518
	ctx.lr = 0x8218E60C;
	sub_8218E518(ctx, base);
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

__attribute__((alias("__imp__sub_8218E624"))) PPC_WEAK_FUNC(sub_8218E624);
PPC_FUNC_IMPL(__imp__sub_8218E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E628"))) PPC_WEAK_FUNC(sub_8218E628);
PPC_FUNC_IMPL(__imp__sub_8218E628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218E630;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82081590
	ctx.lr = 0x8218E650;
	sub_82081590(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r31,21792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21792, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218E678"))) PPC_WEAK_FUNC(sub_8218E678);
PPC_FUNC_IMPL(__imp__sub_8218E678) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8218E68C"))) PPC_WEAK_FUNC(sub_8218E68C);
PPC_FUNC_IMPL(__imp__sub_8218E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E690"))) PPC_WEAK_FUNC(sub_8218E690);
PPC_FUNC_IMPL(__imp__sub_8218E690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218E6A0"))) PPC_WEAK_FUNC(sub_8218E6A0);
PPC_FUNC_IMPL(__imp__sub_8218E6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218E6A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218e714
	if (ctx.cr6.eq) goto loc_8218E714;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8218e714
	if (!ctx.cr6.gt) goto loc_8218E714;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8218E6D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e700
	if (ctx.cr6.eq) goto loc_8218E700;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218e700
	if (ctx.cr6.eq) goto loc_8218E700;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218E700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218E700:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8218e6d0
	if (!ctx.cr0.eq) goto loc_8218E6D0;
loc_8218E714:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218e728
	if (ctx.cr6.eq) goto loc_8218E728;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218E728;
	sub_82183E40(ctx, base);
loc_8218E728:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218E734"))) PPC_WEAK_FUNC(sub_8218E734);
PPC_FUNC_IMPL(__imp__sub_8218E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E738"))) PPC_WEAK_FUNC(sub_8218E738);
PPC_FUNC_IMPL(__imp__sub_8218E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218E740;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x8218E748;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218e760
	if (ctx.cr6.eq) goto loc_8218E760;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8218E75C;
	sub_82183448(ctx, base);
	// b 0x8218e768
	goto loc_8218E768;
loc_8218E760:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8218E768;
	sub_821845A0(ctx, base);
loc_8218E768:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218e7c8
	if (ctx.cr6.eq) goto loc_8218E7C8;
	// bl 0x8219be90
	ctx.lr = 0x8218E778;
	sub_8219BE90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821855f0
	ctx.lr = 0x8218E784;
	sub_821855F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r10,r11,29300
	ctx.r10.s64 = ctx.r11.s64 + 29300;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8219be68
	ctx.lr = 0x8218E7A4;
	sub_8219BE68(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lwsync 
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,21796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21796, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218E7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218E7D4"))) PPC_WEAK_FUNC(sub_8218E7D4);
PPC_FUNC_IMPL(__imp__sub_8218E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E7D8"))) PPC_WEAK_FUNC(sub_8218E7D8);
PPC_FUNC_IMPL(__imp__sub_8218E7D8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,29300
	ctx.r10.s64 = ctx.r11.s64 + 29300;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8218e818
	if (ctx.cr6.eq) goto loc_8218E818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218E818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218E818:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8218e6a0
	ctx.lr = 0x8218E828;
	sub_8218E6A0(ctx, base);
	// lwsync 
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,21796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21796, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8218E840;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x8218E848;
	sub_82185670(ctx, base);
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

__attribute__((alias("__imp__sub_8218E85C"))) PPC_WEAK_FUNC(sub_8218E85C);
PPC_FUNC_IMPL(__imp__sub_8218E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E860"))) PPC_WEAK_FUNC(sub_8218E860);
PPC_FUNC_IMPL(__imp__sub_8218E860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218E868;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8218e6a0
	ctx.lr = 0x8218E878;
	sub_8218E6A0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8218e8ac
	if (!ctx.cr6.gt) goto loc_8218E8AC;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8218E8AC:
	// bl 0x82183850
	ctx.lr = 0x8218E8B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8218e8c8
	if (ctx.cr6.eq) goto loc_8218E8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8218E8C4;
	sub_82183448(ctx, base);
	// b 0x8218e8d4
	goto loc_8218E8D4;
loc_8218E8C8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8218E8D4;
	sub_821845A0(ctx, base);
loc_8218E8D4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// ble cr6,0x8218e918
	if (!ctx.cr6.gt) goto loc_8218E918;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8218E8E4:
	// bl 0x82198448
	ctx.lr = 0x8218E8E8;
	sub_82198448(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 728);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8218E90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8218e8e4
	if (!ctx.cr0.eq) goto loc_8218E8E4;
loc_8218E918:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218E92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218E934"))) PPC_WEAK_FUNC(sub_8218E934);
PPC_FUNC_IMPL(__imp__sub_8218E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E938"))) PPC_WEAK_FUNC(sub_8218E938);
PPC_FUNC_IMPL(__imp__sub_8218E938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218E950"))) PPC_WEAK_FUNC(sub_8218E950);
PPC_FUNC_IMPL(__imp__sub_8218E950) {
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
	// bl 0x8218e7d8
	ctx.lr = 0x8218E970;
	sub_8218E7D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218e98c
	if (ctx.cr6.eq) goto loc_8218E98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218E988;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218E98C:
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

__attribute__((alias("__imp__sub_8218E9A4"))) PPC_WEAK_FUNC(sub_8218E9A4);
PPC_FUNC_IMPL(__imp__sub_8218E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218E9A8"))) PPC_WEAK_FUNC(sub_8218E9A8);
PPC_FUNC_IMPL(__imp__sub_8218E9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218E9B0;
	sub_8224877C(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218e9d4
	if (!ctx.cr6.eq) goto loc_8218E9D4;
loc_8218E9C8:
	// li r3,-9999
	ctx.r3.s64 = -9999;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8218E9D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8218e9c8
	if (ctx.cr6.eq) goto loc_8218E9C8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// bl 0x822aa648
	ctx.lr = 0x8218E9FC;
	sub_822AA648(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8219c310
	ctx.lr = 0x8218EA0C;
	sub_8219C310(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8219bef0
	ctx.lr = 0x8218EA20;
	sub_8219BEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x8218ea40
	if (!ctx.cr6.eq) goto loc_8218EA40;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8219c1f8
	ctx.lr = 0x8218EA34;
	sub_8219C1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218ea50
	if (ctx.cr6.eq) goto loc_8218EA50;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_8218EA40:
	// bl 0x8219c280
	ctx.lr = 0x8218EA44;
	sub_8219C280(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8218EA50:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,2047
	ctx.r10.s64 = ctx.r11.s64 + 2047;
	// rlwinm r31,r10,0,0,20
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184710
	ctx.lr = 0x8218EA70;
	sub_82184710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8219c100
	ctx.lr = 0x8218EA8C;
	sub_8219C100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x8218eb8c
	if (!ctx.cr6.eq) goto loc_8218EB8C;
	// bl 0x8219bff8
	ctx.lr = 0x8218EA9C;
	sub_8219BFF8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8219c280
	ctx.lr = 0x8218EAA4;
	sub_8219C280(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822aa648
	ctx.lr = 0x8218EAB0;
	sub_822AA648(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8219c310
	ctx.lr = 0x8218EAB8;
	sub_8219C310(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8219bef0
	ctx.lr = 0x8218EACC;
	sub_8219BEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8218eb8c
	if (!ctx.cr6.eq) goto loc_8218EB8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c1f8
	ctx.lr = 0x8218EAE0;
	sub_8219C1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218eb88
	if (!ctx.cr6.eq) goto loc_8218EB88;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8218eb00
	if (ctx.cr6.eq) goto loc_8218EB00;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// b 0x8218eb88
	goto loc_8218EB88;
loc_8218EB00:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184710
	ctx.lr = 0x8218EB10;
	sub_82184710(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8219c100
	ctx.lr = 0x8218EB2C;
	sub_8219C100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8218eb8c
	if (!ctx.cr6.eq) goto loc_8218EB8C;
	// bl 0x8219bff8
	ctx.lr = 0x8218EB3C;
	sub_8219BFF8(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218eb7c
	if (ctx.cr6.eq) goto loc_8218EB7C;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
loc_8218EB5C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8218eb7c
	if (!ctx.cr0.eq) goto loc_8218EB7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8218eb5c
	if (!ctx.cr6.eq) goto loc_8218EB5C;
loc_8218EB7C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8218eb88
	if (!ctx.cr6.eq) goto loc_8218EB88;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_8218EB88:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8218EB8C:
	// bl 0x8219c280
	ctx.lr = 0x8218EB90;
	sub_8219C280(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8218eba4
	if (ctx.cr6.eq) goto loc_8218EBA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218EBA4;
	sub_82183E40(ctx, base);
loc_8218EBA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8218ebb8
	if (ctx.cr6.eq) goto loc_8218EBB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218EBB8;
	sub_82183E40(ctx, base);
loc_8218EBB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8218EBC4"))) PPC_WEAK_FUNC(sub_8218EBC4);
PPC_FUNC_IMPL(__imp__sub_8218EBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EBC8"))) PPC_WEAK_FUNC(sub_8218EBC8);
PPC_FUNC_IMPL(__imp__sub_8218EBC8) {
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218ebfc
	if (!ctx.cr6.eq) goto loc_8218EBFC;
	// li r3,-9999
	ctx.r3.s64 = -9999;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218EBFC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8225c1d0
	ctx.lr = 0x8218EC08;
	sub_8225C1D0(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-9999
	ctx.r10.s64 = -9999;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218EC2C"))) PPC_WEAK_FUNC(sub_8218EC2C);
PPC_FUNC_IMPL(__imp__sub_8218EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EC30"))) PPC_WEAK_FUNC(sub_8218EC30);
PPC_FUNC_IMPL(__imp__sub_8218EC30) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218ec7c
	if (ctx.cr6.eq) goto loc_8218EC7C;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82259c00
	ctx.lr = 0x8218EC6C;
	sub_82259C00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218ec7c
	if (!ctx.cr6.eq) goto loc_8218EC7C;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x8218ec80
	goto loc_8218EC80;
loc_8218EC7C:
	// li r3,-9999
	ctx.r3.s64 = -9999;
loc_8218EC80:
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

__attribute__((alias("__imp__sub_8218EC98"))) PPC_WEAK_FUNC(sub_8218EC98);
PPC_FUNC_IMPL(__imp__sub_8218EC98) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218ecc4
	if (!ctx.cr6.eq) goto loc_8218ECC4;
	// li r3,-9999
	ctx.r3.s64 = -9999;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218ECC4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82259d60
	ctx.lr = 0x8218ECCC;
	sub_82259D60(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-9999
	ctx.r10.s64 = -9999;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218ECF0"))) PPC_WEAK_FUNC(sub_8218ECF0);
PPC_FUNC_IMPL(__imp__sub_8218ECF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218ed10
	if (ctx.cr6.eq) goto loc_8218ED10;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218ed10
	if (!ctx.cr6.eq) goto loc_8218ED10;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,1000
	ctx.r3.u64 = ctx.r3.u64 | 1000;
	// blr 
	return;
loc_8218ED10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218ED18"))) PPC_WEAK_FUNC(sub_8218ED18);
PPC_FUNC_IMPL(__imp__sub_8218ED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218ED20;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8218ed40
	if (!ctx.cr6.eq) goto loc_8218ED40;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8218ED40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218ED48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218ed64
	if (ctx.cr6.eq) goto loc_8218ED64;
	// bl 0x8225b738
	ctx.lr = 0x8218ED60;
	sub_8225B738(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_8218ED64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8218eda4
	if (!ctx.cr6.eq) goto loc_8218EDA4;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8218ED78;
	sub_822AA648(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_8218EDA4:
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8225dee8
	ctx.lr = 0x8218EDBC;
	sub_8225DEE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218eddc
	if (!ctx.cr6.eq) goto loc_8218EDDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8225f7a8
	ctx.lr = 0x8218EDD0;
	sub_8225F7A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8218eddc
	if (ctx.cr6.lt) goto loc_8218EDDC;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_8218EDDC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218edfc
	if (ctx.cr6.eq) goto loc_8218EDFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82259c00
	ctx.lr = 0x8218EDF0;
	sub_82259C00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218edfc
	if (!ctx.cr6.eq) goto loc_8218EDFC;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_8218EDFC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// bl 0x82259e10
	ctx.lr = 0x8218EE0C;
	sub_82259E10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218EE14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218EE24"))) PPC_WEAK_FUNC(sub_8218EE24);
PPC_FUNC_IMPL(__imp__sub_8218EE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EE28"))) PPC_WEAK_FUNC(sub_8218EE28);
PPC_FUNC_IMPL(__imp__sub_8218EE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218EE30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8218ee4c
	if (!ctx.cr6.eq) goto loc_8218EE4C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8218EE4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218EE54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218ee70
	if (ctx.cr6.eq) goto loc_8218EE70;
	// bl 0x8225b738
	ctx.lr = 0x8218EE6C;
	sub_8225B738(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_8218EE70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218EE78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218EE88"))) PPC_WEAK_FUNC(sub_8218EE88);
PPC_FUNC_IMPL(__imp__sub_8218EE88) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,29320
	ctx.r9.s64 = ctx.r11.s64 + 29320;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8218eec0
	if (ctx.cr6.eq) goto loc_8218EEC0;
	// bl 0x8225b738
	ctx.lr = 0x8218EEBC;
	sub_8225B738(ctx, base);
	// bl 0x8225f7f0
	ctx.lr = 0x8218EEC0;
	sub_8225F7F0(ctx, base);
loc_8218EEC0:
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-20432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20432, ctx.r30.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218eeec
	if (ctx.cr6.eq) goto loc_8218EEEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218EEE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8218EEEC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218eefc
	if (ctx.cr6.eq) goto loc_8218EEFC;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8218EEFC:
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

__attribute__((alias("__imp__sub_8218EF14"))) PPC_WEAK_FUNC(sub_8218EF14);
PPC_FUNC_IMPL(__imp__sub_8218EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EF18"))) PPC_WEAK_FUNC(sub_8218EF18);
PPC_FUNC_IMPL(__imp__sub_8218EF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218EF20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x8218EF40;
	sub_82081590(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,29320
	ctx.r9.s64 = ctx.r10.s64 + 29320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,-20432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20432, ctx.r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8218ed18
	ctx.lr = 0x8218EF68;
	sub_8218ED18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218EF74"))) PPC_WEAK_FUNC(sub_8218EF74);
PPC_FUNC_IMPL(__imp__sub_8218EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EF78"))) PPC_WEAK_FUNC(sub_8218EF78);
PPC_FUNC_IMPL(__imp__sub_8218EF78) {
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
	// bl 0x8218ee88
	ctx.lr = 0x8218EF98;
	sub_8218EE88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218efb4
	if (ctx.cr6.eq) goto loc_8218EFB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218EFB0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218EFB4:
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

__attribute__((alias("__imp__sub_8218EFCC"))) PPC_WEAK_FUNC(sub_8218EFCC);
PPC_FUNC_IMPL(__imp__sub_8218EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218EFD0"))) PPC_WEAK_FUNC(sub_8218EFD0);
PPC_FUNC_IMPL(__imp__sub_8218EFD0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82088210
	ctx.lr = 0x8218EFE8;
	sub_82088210(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r10,r31,21800
	ctx.r10.s64 = ctx.r31.s64 + 21800;
	// lfd f0,29328(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29328);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f0.u64);
	// bl 0x82088248
	ctx.lr = 0x8218F010;
	sub_82088248(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,21800(r31)
	PPC_STORE_U64(ctx.r31.u32 + 21800, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_8218F02C"))) PPC_WEAK_FUNC(sub_8218F02C);
PPC_FUNC_IMPL(__imp__sub_8218F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F030"))) PPC_WEAK_FUNC(sub_8218F030);
PPC_FUNC_IMPL(__imp__sub_8218F030) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225f838
	ctx.lr = 0x8218F04C;
	sub_8225F838(ctx, base);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8218F0AC"))) PPC_WEAK_FUNC(sub_8218F0AC);
PPC_FUNC_IMPL(__imp__sub_8218F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F0B0"))) PPC_WEAK_FUNC(sub_8218F0B0);
PPC_FUNC_IMPL(__imp__sub_8218F0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218F0B8"))) PPC_WEAK_FUNC(sub_8218F0B8);
PPC_FUNC_IMPL(__imp__sub_8218F0B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x8218f030
	ctx.lr = 0x8218F0F0;
	sub_8218F030(ctx, base);
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

__attribute__((alias("__imp__sub_8218F108"))) PPC_WEAK_FUNC(sub_8218F108);
PPC_FUNC_IMPL(__imp__sub_8218F108) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r11,21816(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 21816);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,21816(r9)
	PPC_STORE_U64(ctx.r9.u32 + 21816, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218F124"))) PPC_WEAK_FUNC(sub_8218F124);
PPC_FUNC_IMPL(__imp__sub_8218F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F128"))) PPC_WEAK_FUNC(sub_8218F128);
PPC_FUNC_IMPL(__imp__sub_8218F128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// b 0x8218ce78
	sub_8218CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218F144"))) PPC_WEAK_FUNC(sub_8218F144);
PPC_FUNC_IMPL(__imp__sub_8218F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F148"))) PPC_WEAK_FUNC(sub_8218F148);
PPC_FUNC_IMPL(__imp__sub_8218F148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// b 0x8218ce78
	sub_8218CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218F164"))) PPC_WEAK_FUNC(sub_8218F164);
PPC_FUNC_IMPL(__imp__sub_8218F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F168"))) PPC_WEAK_FUNC(sub_8218F168);
PPC_FUNC_IMPL(__imp__sub_8218F168) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r3,21776(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21776);
	// blt cr6,0x8218f1a8
	if (ctx.cr6.lt) goto loc_8218F1A8;
	// beq cr6,0x8218f1a0
	if (ctx.cr6.eq) goto loc_8218F1A0;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x8218f1ac
	if (!ctx.cr6.lt) goto loc_8218F1AC;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x8218f1ac
	goto loc_8218F1AC;
loc_8218F1A0:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x8218f1ac
	goto loc_8218F1AC;
loc_8218F1A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8218F1AC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8218d198
	ctx.lr = 0x8218F1C0;
	sub_8218D198(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8218F1D8"))) PPC_WEAK_FUNC(sub_8218F1D8);
PPC_FUNC_IMPL(__imp__sub_8218F1D8) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r3,21776(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21776);
	// blt cr6,0x8218f218
	if (ctx.cr6.lt) goto loc_8218F218;
	// beq cr6,0x8218f210
	if (ctx.cr6.eq) goto loc_8218F210;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x8218f21c
	if (!ctx.cr6.lt) goto loc_8218F21C;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x8218f21c
	goto loc_8218F21C;
loc_8218F210:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x8218f21c
	goto loc_8218F21C;
loc_8218F218:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8218F21C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8218d198
	ctx.lr = 0x8218F230;
	sub_8218D198(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8218F248"))) PPC_WEAK_FUNC(sub_8218F248);
PPC_FUNC_IMPL(__imp__sub_8218F248) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r6,r5,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,21776(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218cf70
	ctx.lr = 0x8218F280;
	sub_8218CF70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218f2a0
	if (ctx.cr6.eq) goto loc_8218F2A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218d278
	ctx.lr = 0x8218F298;
	sub_8218D278(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// rlwinm r3,r11,21,11,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
loc_8218F2A0:
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

__attribute__((alias("__imp__sub_8218F2B8"))) PPC_WEAK_FUNC(sub_8218F2B8);
PPC_FUNC_IMPL(__imp__sub_8218F2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218F2C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,21776(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d218
	ctx.lr = 0x8218F2E4;
	sub_8218D218(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r28,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 11) & 0xFFFFF800;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218cf70
	ctx.lr = 0x8218F2FC;
	sub_8218CF70(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218F30C"))) PPC_WEAK_FUNC(sub_8218F30C);
PPC_FUNC_IMPL(__imp__sub_8218F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F310"))) PPC_WEAK_FUNC(sub_8218F310);
PPC_FUNC_IMPL(__imp__sub_8218F310) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d028
	ctx.lr = 0x8218F330;
	sub_8218D028(ctx, base);
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

__attribute__((alias("__imp__sub_8218F344"))) PPC_WEAK_FUNC(sub_8218F344);
PPC_FUNC_IMPL(__imp__sub_8218F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F348"))) PPC_WEAK_FUNC(sub_8218F348);
PPC_FUNC_IMPL(__imp__sub_8218F348) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d028
	ctx.lr = 0x8218F368;
	sub_8218D028(ctx, base);
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

__attribute__((alias("__imp__sub_8218F37C"))) PPC_WEAK_FUNC(sub_8218F37C);
PPC_FUNC_IMPL(__imp__sub_8218F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F380"))) PPC_WEAK_FUNC(sub_8218F380);
PPC_FUNC_IMPL(__imp__sub_8218F380) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d0b8
	ctx.lr = 0x8218F3A0;
	sub_8218D0B8(ctx, base);
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

__attribute__((alias("__imp__sub_8218F3B4"))) PPC_WEAK_FUNC(sub_8218F3B4);
PPC_FUNC_IMPL(__imp__sub_8218F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F3B8"))) PPC_WEAK_FUNC(sub_8218F3B8);
PPC_FUNC_IMPL(__imp__sub_8218F3B8) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d0b8
	ctx.lr = 0x8218F3D8;
	sub_8218D0B8(ctx, base);
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

__attribute__((alias("__imp__sub_8218F3EC"))) PPC_WEAK_FUNC(sub_8218F3EC);
PPC_FUNC_IMPL(__imp__sub_8218F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F3F0"))) PPC_WEAK_FUNC(sub_8218F3F0);
PPC_FUNC_IMPL(__imp__sub_8218F3F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,21776(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21776);
	// bl 0x8218d2e8
	ctx.lr = 0x8218F418;
	sub_8218D2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218f454
	if (ctx.cr6.eq) goto loc_8218F454;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8218f440
	if (!ctx.cr6.eq) goto loc_8218F440;
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
loc_8218F440:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8218F454:
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

__attribute__((alias("__imp__sub_8218F468"))) PPC_WEAK_FUNC(sub_8218F468);
PPC_FUNC_IMPL(__imp__sub_8218F468) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218f484
	if (!ctx.cr6.eq) goto loc_8218F484;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8218F484:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d278
	ctx.lr = 0x8218F494;
	sub_8218D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218F4A4"))) PPC_WEAK_FUNC(sub_8218F4A4);
PPC_FUNC_IMPL(__imp__sub_8218F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F4A8"))) PPC_WEAK_FUNC(sub_8218F4A8);
PPC_FUNC_IMPL(__imp__sub_8218F4A8) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// lwz r3,21776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// bl 0x8218d3a0
	ctx.lr = 0x8218F4CC;
	sub_8218D3A0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8218f504
	if (ctx.cr6.gt) goto loc_8218F504;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8218f4f0
	// bdzf 4*cr6+eq,0x8218f4f8
	// bne cr6,0x8218f500
	if (!ctx.cr6.eq) goto loc_8218F500;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8218f504
	goto loc_8218F504;
loc_8218F4F0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8218f504
	goto loc_8218F504;
loc_8218F4F8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8218f504
	goto loc_8218F504;
loc_8218F500:
	// li r31,3
	ctx.r31.s64 = 3;
loc_8218F504:
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

__attribute__((alias("__imp__sub_8218F51C"))) PPC_WEAK_FUNC(sub_8218F51C);
PPC_FUNC_IMPL(__imp__sub_8218F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F520"))) PPC_WEAK_FUNC(sub_8218F520);
PPC_FUNC_IMPL(__imp__sub_8218F520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218F528;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,511
	ctx.r6.s64 = 511;
	// lwz r3,21776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21776);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x8218ce78
	ctx.lr = 0x8218F558;
	sub_8218CE78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218f5b4
	if (ctx.cr6.eq) goto loc_8218F5B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,21776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21776);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218d278
	ctx.lr = 0x8218F574;
	sub_8218D278(ctx, base);
	// lwz r11,21776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21776);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8218d028
	ctx.lr = 0x8218F58C;
	sub_8218D028(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218f598
	if (ctx.cr6.eq) goto loc_8218F598;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8218F598:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8218f5a8
	if (ctx.cr6.eq) goto loc_8218F5A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8218F5A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218F5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218F5C0"))) PPC_WEAK_FUNC(sub_8218F5C0);
PPC_FUNC_IMPL(__imp__sub_8218F5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21828, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218F5CC"))) PPC_WEAK_FUNC(sub_8218F5CC);
PPC_FUNC_IMPL(__imp__sub_8218F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218F5D0"))) PPC_WEAK_FUNC(sub_8218F5D0);
PPC_FUNC_IMPL(__imp__sub_8218F5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218F5D8;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
loc_8218F60C:
	// clrlwi r26,r30,16
	ctx.r26.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82186ba8
	ctx.lr = 0x8218F618;
	sub_82186BA8(ctx, base);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82186c20
	ctx.lr = 0x8218F630;
	sub_82186C20(ctx, base);
	// lfs f12,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r30,4096
	ctx.r30.s64 = ctx.r30.s64 + 4096;
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfsu f30,16(r31)
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8218f60c
	if (ctx.cr6.lt) goto loc_8218F60C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lfs f31,29336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29336);
	ctx.f31.f64 = double(temp.f32);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
loc_8218F678:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820804f8
	ctx.lr = 0x8218F680;
	sub_820804F8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8218f698
	if (!ctx.cr6.eq) goto loc_8218F698;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821876f8
	ctx.lr = 0x8218F694;
	sub_821876F8(ctx, base);
	// b 0x8218f6ac
	goto loc_8218F6AC;
loc_8218F698:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8218f6ac
	if (!ctx.cr6.eq) goto loc_8218F6AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821874f8
	ctx.lr = 0x8218F6AC;
	sub_821874F8(ctx, base);
loc_8218F6AC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,21824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21824);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x8218f704
	if (ctx.cr6.eq) goto loc_8218F704;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218F704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218F704:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8218f678
	if (ctx.cr6.lt) goto loc_8218F678;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218F720"))) PPC_WEAK_FUNC(sub_8218F720);
PPC_FUNC_IMPL(__imp__sub_8218F720) {
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
	// bl 0x8218faa0
	ctx.lr = 0x8218F734;
	sub_8218FAA0(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// lwz r9,7096(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7096);
	// cmpwi cr6,r9,624
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 624, ctx.xer);
	// blt cr6,0x8218f82c
	if (ctx.cr6.lt) goto loc_8218F82C;
	// cmpwi cr6,r9,625
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 625, ctx.xer);
	// bne cr6,0x8218f780
	if (!ctx.cr6.eq) goto loc_8218F780;
	// li r9,623
	ctx.r9.s64 = 623;
	// li r8,4981
	ctx.r8.s64 = 4981;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,3533
	ctx.r9.u64 = ctx.r9.u64 | 3533;
loc_8218F770:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218f770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F770;
loc_8218F780:
	// li r9,227
	ctx.r9.s64 = 227;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r6,r9,7100
	ctx.r6.s64 = ctx.r9.s64 + 7100;
loc_8218F794:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,1588(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218f794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F794;
	// li r9,396
	ctx.r9.s64 = 396;
	// addi r10,r11,908
	ctx.r10.s64 = ctx.r11.s64 + 908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218F7D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-908(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -908);
	// rlwimi r9,r8,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// rlwinm r4,r9,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218f7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F7D0;
	// lwz r8,2492(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2492);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,1584(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// rlwimi r10,r8,0,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r8,r10,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// stw r10,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r10.u32);
loc_8218F82C:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lis r12,-198
	ctx.r12.s64 = -12976128;
	// stw r10,7096(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7096, ctx.r10.u32);
	// ori r12,r12,22701
	ctx.r12.u64 = ctx.r12.u64 | 22701;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r6,r7,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1FFFFF;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// rlwinm r10,r11,15,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFE0000;
	// rlwinm r10,r10,0,13,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// xor r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x8218fae0
	ctx.lr = 0x8218F86C;
	sub_8218FAE0(ctx, base);
	// rlwinm r9,r31,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// xor r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8218F888"))) PPC_WEAK_FUNC(sub_8218F888);
PPC_FUNC_IMPL(__imp__sub_8218F888) {
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
	// bl 0x8218faa0
	ctx.lr = 0x8218F89C;
	sub_8218FAA0(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// lwz r9,7096(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7096);
	// cmpwi cr6,r9,624
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 624, ctx.xer);
	// blt cr6,0x8218f994
	if (ctx.cr6.lt) goto loc_8218F994;
	// cmpwi cr6,r9,625
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 625, ctx.xer);
	// bne cr6,0x8218f8e8
	if (!ctx.cr6.eq) goto loc_8218F8E8;
	// li r9,623
	ctx.r9.s64 = 623;
	// li r8,4981
	ctx.r8.s64 = 4981;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,3533
	ctx.r9.u64 = ctx.r9.u64 | 3533;
loc_8218F8D8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218f8d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F8D8;
loc_8218F8E8:
	// li r9,227
	ctx.r9.s64 = 227;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r6,r9,7108
	ctx.r6.s64 = ctx.r9.s64 + 7108;
loc_8218F8FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,1588(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218f8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F8FC;
	// li r9,396
	ctx.r9.s64 = 396;
	// addi r10,r11,908
	ctx.r10.s64 = ctx.r11.s64 + 908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218F938:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-908(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -908);
	// rlwimi r9,r8,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// rlwinm r4,r9,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218f938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F938;
	// lwz r8,2492(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2492);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,1584(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// rlwimi r10,r8,0,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r8,r10,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// stw r10,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r10.u32);
loc_8218F994:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lis r12,-198
	ctx.r12.s64 = -12976128;
	// stw r10,7096(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7096, ctx.r10.u32);
	// ori r12,r12,22701
	ctx.r12.u64 = ctx.r12.u64 | 22701;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r6,r7,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1FFFFF;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// rlwinm r10,r11,15,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFE0000;
	// rlwinm r10,r10,0,13,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// xor r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x8218fae0
	ctx.lr = 0x8218F9D4;
	sub_8218FAE0(ctx, base);
	// rlwinm r9,r31,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// xor r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,29340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_8218FA10"))) PPC_WEAK_FUNC(sub_8218FA10);
PPC_FUNC_IMPL(__imp__sub_8218FA10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x82081590
	ctx.lr = 0x8218FA3C;
	sub_82081590(ctx, base);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// li r11,623
	ctx.r11.s64 = 623;
	// addi r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 + 624;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// stw r10,21832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21832, ctx.r10.u32);
	// addi r5,r8,21832
	ctx.r5.s64 = ctx.r8.s64 + 21832;
	// li r9,624
	ctx.r9.s64 = 624;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,24328(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24328, ctx.r31.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r9,7096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7096, ctx.r9.u32);
	// ori r10,r10,3533
	ctx.r10.u64 = ctx.r10.u64 | 3533;
loc_8218FA74:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218fa74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FA74;
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

__attribute__((alias("__imp__sub_8218FAA0"))) PPC_WEAK_FUNC(sub_8218FAA0);
PPC_FUNC_IMPL(__imp__sub_8218FAA0) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r31,26848(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218FAC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_8218FADC"))) PPC_WEAK_FUNC(sub_8218FADC);
PPC_FUNC_IMPL(__imp__sub_8218FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218FAE0"))) PPC_WEAK_FUNC(sub_8218FAE0);
PPC_FUNC_IMPL(__imp__sub_8218FAE0) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r31,26848(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218FB00;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
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

__attribute__((alias("__imp__sub_8218FB1C"))) PPC_WEAK_FUNC(sub_8218FB1C);
PPC_FUNC_IMPL(__imp__sub_8218FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218FB20"))) PPC_WEAK_FUNC(sub_8218FB20);
PPC_FUNC_IMPL(__imp__sub_8218FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218FB28;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,26848(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218FB40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r11,623
	ctx.r11.s64 = 623;
	// addi r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 + 624;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// stw r10,24336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24336, ctx.r10.u32);
	// addi r5,r8,24336
	ctx.r5.s64 = ctx.r8.s64 + 24336;
	// li r9,624
	ctx.r9.s64 = 624;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r9,7116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 7116, ctx.r9.u32);
	// ori r10,r10,3533
	ctx.r10.u64 = ctx.r10.u64 | 3533;
loc_8218FB78:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218fb78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FB78;
	// lwz r31,26848(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218FB94;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218FBA4"))) PPC_WEAK_FUNC(sub_8218FBA4);
PPC_FUNC_IMPL(__imp__sub_8218FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218FBA8"))) PPC_WEAK_FUNC(sub_8218FBA8);
PPC_FUNC_IMPL(__imp__sub_8218FBA8) {
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
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// lwz r31,26848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218FBCC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r11,r11,24336
	ctx.r11.s64 = ctx.r11.s64 + 24336;
	// lwz r10,7116(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7116);
	// cmpwi cr6,r10,624
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 624, ctx.xer);
	// blt cr6,0x8218fccc
	if (ctx.cr6.lt) goto loc_8218FCCC;
	// cmpwi cr6,r10,625
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 625, ctx.xer);
	// bne cr6,0x8218fc20
	if (!ctx.cr6.eq) goto loc_8218FC20;
	// li r9,623
	ctx.r9.s64 = 623;
	// li r8,4981
	ctx.r8.s64 = 4981;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,3533
	ctx.r9.u64 = ctx.r9.u64 | 3533;
loc_8218FC10:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218fc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FC10;
loc_8218FC20:
	// li r9,227
	ctx.r9.s64 = 227;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r6,r9,7120
	ctx.r6.s64 = ctx.r9.s64 + 7120;
loc_8218FC34:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,1588(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218fc34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FC34;
	// li r9,396
	ctx.r9.s64 = 396;
	// addi r10,r11,908
	ctx.r10.s64 = ctx.r11.s64 + 908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218FC70:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-908(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -908);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218fc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FC70;
	// lwz r8,2492(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2492);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,1584(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// rlwimi r9,r8,0,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r8,r9,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// stw r9,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r9.u32);
loc_8218FCCC:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,26848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
	// lis r12,-198
	ctx.r12.s64 = -12976128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r12,r12,22701
	ctx.r12.u64 = ctx.r12.u64 | 22701;
	// stw r10,7116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7116, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r8,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// xor r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r10,r11,15,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFE0000;
	// rlwinm r10,r10,0,13,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// xor r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218FD14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rlwinm r9,r30,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// xor r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8218FD3C"))) PPC_WEAK_FUNC(sub_8218FD3C);
PPC_FUNC_IMPL(__imp__sub_8218FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218FD40"))) PPC_WEAK_FUNC(sub_8218FD40);
PPC_FUNC_IMPL(__imp__sub_8218FD40) {
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
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// lwz r31,26848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218FD64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r11,r11,24336
	ctx.r11.s64 = ctx.r11.s64 + 24336;
	// lwz r10,7116(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7116);
	// cmpwi cr6,r10,624
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 624, ctx.xer);
	// blt cr6,0x8218fe64
	if (ctx.cr6.lt) goto loc_8218FE64;
	// cmpwi cr6,r10,625
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 625, ctx.xer);
	// bne cr6,0x8218fdb8
	if (!ctx.cr6.eq) goto loc_8218FDB8;
	// li r9,623
	ctx.r9.s64 = 623;
	// li r8,4981
	ctx.r8.s64 = 4981;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,3533
	ctx.r9.u64 = ctx.r9.u64 | 3533;
loc_8218FDA8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218fda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FDA8;
loc_8218FDB8:
	// li r9,227
	ctx.r9.s64 = 227;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r6,r9,7128
	ctx.r6.s64 = ctx.r9.s64 + 7128;
loc_8218FDCC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,1588(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218fdcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FDCC;
	// li r9,396
	ctx.r9.s64 = 396;
	// addi r10,r11,908
	ctx.r10.s64 = ctx.r11.s64 + 908;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8218FE08:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-908(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -908);
	// rlwimi r8,r9,0,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r3,r8,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// xor r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8218fe08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FE08;
	// lwz r8,2492(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2492);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,1584(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// rlwimi r9,r8,0,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r8,r9,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// stw r9,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r9.u32);
loc_8218FE64:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,26848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
	// lis r12,-198
	ctx.r12.s64 = -12976128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r12,r12,22701
	ctx.r12.u64 = ctx.r12.u64 | 22701;
	// stw r10,7116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7116, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r8,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// xor r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r10,r11,15,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFE0000;
	// rlwinm r10,r10,0,13,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// xor r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218FEAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rlwinm r9,r30,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// xor r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,29340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_8218FEF4"))) PPC_WEAK_FUNC(sub_8218FEF4);
PPC_FUNC_IMPL(__imp__sub_8218FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218FEF8"))) PPC_WEAK_FUNC(sub_8218FEF8);
PPC_FUNC_IMPL(__imp__sub_8218FEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218FF00;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82183850
	ctx.lr = 0x8218FF10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218ff28
	if (ctx.cr6.eq) goto loc_8218FF28;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x8218FF24;
	sub_82183448(ctx, base);
	// b 0x8218ff30
	goto loc_8218FF30;
loc_8218FF28:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8218FF30;
	sub_821845A0(ctx, base);
loc_8218FF30:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x8218ff5c
	if (ctx.cr6.eq) goto loc_8218FF5C;
	// stw r27,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r27.u32);
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// bl 0x82081590
	ctx.lr = 0x8218FF4C;
	sub_82081590(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r30,r11,26848
	ctx.r30.s64 = ctx.r11.s64 + 26848;
	// stw r31,26848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26848, ctx.r31.u32);
	// b 0x8218ff6c
	goto loc_8218FF6C;
loc_8218FF5C:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r30,r10,26848
	ctx.r30.s64 = ctx.r10.s64 + 26848;
	// stw r27,26848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26848, ctx.r27.u32);
loc_8218FF6C:
	// bl 0x82183850
	ctx.lr = 0x8218FF70;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218ff88
	if (ctx.cr6.eq) goto loc_8218FF88;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x8218FF84;
	sub_82183448(ctx, base);
	// b 0x8218ff90
	goto loc_8218FF90;
loc_8218FF88:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8218FF90;
	sub_821845A0(ctx, base);
loc_8218FF90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218ffa0
	if (ctx.cr6.eq) goto loc_8218FFA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8218fa10
	ctx.lr = 0x8218FFA0;
	sub_8218FA10(ctx, base);
loc_8218FFA0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218FFAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r11,623
	ctx.r11.s64 = 623;
	// addi r10,r29,624
	ctx.r10.s64 = ctx.r29.s64 + 624;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// stw r10,24336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24336, ctx.r10.u32);
	// addi r4,r8,24336
	ctx.r4.s64 = ctx.r8.s64 + 24336;
	// li r9,624
	ctx.r9.s64 = 624;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// std r28,26832(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26832, ctx.r28.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,7116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7116, ctx.r9.u32);
	// ori r10,r10,3533
	ctx.r10.u64 = ctx.r10.u64 | 3533;
loc_8218FFEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8218ffec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218FFEC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,26844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26844, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82190014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82190020"))) PPC_WEAK_FUNC(sub_82190020);
PPC_FUNC_IMPL(__imp__sub_82190020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82190028;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// lwz r31,26848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82190084
	if (ctx.cr6.eq) goto loc_82190084;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82190058
	if (ctx.cr6.eq) goto loc_82190058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82190054;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82190058:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82190068
	if (ctx.cr6.eq) goto loc_82190068;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82190068:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82190074;
	sub_82183E40(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,26848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26848, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82190084:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26848, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82190094"))) PPC_WEAK_FUNC(sub_82190094);
PPC_FUNC_IMPL(__imp__sub_82190094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190098"))) PPC_WEAK_FUNC(sub_82190098);
PPC_FUNC_IMPL(__imp__sub_82190098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821900A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,16
	ctx.r28.s64 = ctx.r4.s64 + 16;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821871a0
	ctx.lr = 0x821900C0;
	sub_821871A0(ctx, base);
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82190198
	if (ctx.cr6.lt) goto loc_82190198;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82190108
	if (!ctx.cr6.lt) goto loc_82190108;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r10,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r10.u64);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82190108:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8219014c
	if (!ctx.cr6.gt) goto loc_8219014C;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r7,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r7.u64);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
loc_8219014C:
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// beq cr6,0x82190198
	if (ctx.cr6.eq) goto loc_82190198;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// bl 0x82186cd8
	ctx.lr = 0x82190198;
	sub_82186CD8(ctx, base);
loc_82190198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821901A0"))) PPC_WEAK_FUNC(sub_821901A0);
PPC_FUNC_IMPL(__imp__sub_821901A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821901A8;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821901D8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ldx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r10.u64);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// bl 0x8208ea90
	ctx.lr = 0x821901F8;
	sub_8208EA90(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f11,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,-4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,-8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// fneg f4,f8
	ctx.f4.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f4,-4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// ble cr6,0x8219029c
	if (!ctx.cr6.gt) goto loc_8219029C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x821901d8
	if (ctx.cr6.lt) goto loc_821901D8;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x8219028c
	if (!ctx.cr6.gt) goto loc_8219028C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8219028C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8219029C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821902B0"))) PPC_WEAK_FUNC(sub_821902B0);
PPC_FUNC_IMPL(__imp__sub_821902B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fadds f7,f3,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadds f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f5,f1,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82190324
	if (!ctx.cr6.lt) goto loc_82190324;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82190324:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x82190334
	if (!ctx.cr6.gt) goto loc_82190334;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82190334:
	// fcmpu cr6,f4,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f8.f64);
	// bge cr6,0x82190344
	if (!ctx.cr6.lt) goto loc_82190344;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82190344:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82190354
	if (!ctx.cr6.gt) goto loc_82190354;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82190354:
	// fcmpu cr6,f3,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// bge cr6,0x82190364
	if (!ctx.cr6.lt) goto loc_82190364;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82190364:
	// fcmpu cr6,f6,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// ble cr6,0x82190374
	if (!ctx.cr6.gt) goto loc_82190374;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82190374:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82190394
	if (ctx.cr6.eq) goto loc_82190394;
	// fadds f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82190394:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821903ac
	if (ctx.cr6.eq) goto loc_821903AC;
	// fadds f13,f4,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_821903AC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821903c4
	if (ctx.cr6.eq) goto loc_821903C4;
	// fadds f13,f3,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_821903C4:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821903e4
	if (!ctx.cr6.lt) goto loc_821903E4;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_821903E4:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82190400"))) PPC_WEAK_FUNC(sub_82190400);
PPC_FUNC_IMPL(__imp__sub_82190400) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821871a0
	ctx.lr = 0x82190428;
	sub_821871A0(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82190444
	if (ctx.cr6.lt) goto loc_82190444;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82190444:
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

__attribute__((alias("__imp__sub_8219045C"))) PPC_WEAK_FUNC(sub_8219045C);
PPC_FUNC_IMPL(__imp__sub_8219045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190460"))) PPC_WEAK_FUNC(sub_82190460);
PPC_FUNC_IMPL(__imp__sub_82190460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f31,f2,f11
	ctx.f31.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f1,f10,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmuls f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fsubs f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fmuls f8,f31,f1
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f13,f3,f5,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 - ctx.f2.f64));
	// fmsubs f12,f6,f11,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f8.f64));
	// fmsubs f11,f7,f9,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821904ec
	if (ctx.cr6.lt) goto loc_821904EC;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821904ec
	if (ctx.cr6.lt) goto loc_821904EC;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82190504
	if (!ctx.cr6.lt) goto loc_82190504;
loc_821904EC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82190510
	if (ctx.cr6.gt) goto loc_82190510;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82190510
	if (ctx.cr6.gt) goto loc_82190510;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82190510
	if (ctx.cr6.gt) goto loc_82190510;
loc_82190504:
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82190510:
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219051C"))) PPC_WEAK_FUNC(sub_8219051C);
PPC_FUNC_IMPL(__imp__sub_8219051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190520"))) PPC_WEAK_FUNC(sub_82190520);
PPC_FUNC_IMPL(__imp__sub_82190520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82190548"))) PPC_WEAK_FUNC(sub_82190548);
PPC_FUNC_IMPL(__imp__sub_82190548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82190574
	if (!ctx.cr6.lt) goto loc_82190574;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82190574:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821905c0
	if (ctx.cr6.gt) goto loc_821905C0;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82190594
	if (!ctx.cr6.lt) goto loc_82190594;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82190594:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821905c0
	if (ctx.cr6.gt) goto loc_821905C0;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821905b4
	if (!ctx.cr6.lt) goto loc_821905B4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821905B4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_821905C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821905C8"))) PPC_WEAK_FUNC(sub_821905C8);
PPC_FUNC_IMPL(__imp__sub_821905C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821905f4
	if (!ctx.cr6.lt) goto loc_821905F4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821905F4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82190640
	if (ctx.cr6.gt) goto loc_82190640;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82190614
	if (!ctx.cr6.lt) goto loc_82190614;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82190614:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82190640
	if (ctx.cr6.gt) goto loc_82190640;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82190634
	if (!ctx.cr6.lt) goto loc_82190634;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82190634:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82190640:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82190648"))) PPC_WEAK_FUNC(sub_82190648);
PPC_FUNC_IMPL(__imp__sub_82190648) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82190674
	if (ctx.cr6.eq) goto loc_82190674;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82190674;
	sub_82183E40(ctx, base);
loc_82190674:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82190690
	if (ctx.cr6.eq) goto loc_82190690;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82190690;
	sub_82183E40(ctx, base);
loc_82190690:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821906B4"))) PPC_WEAK_FUNC(sub_821906B4);
PPC_FUNC_IMPL(__imp__sub_821906B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821906B8"))) PPC_WEAK_FUNC(sub_821906B8);
PPC_FUNC_IMPL(__imp__sub_821906B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8219074c
	if (!ctx.cr6.gt) goto loc_8219074C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821906EC:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82190738
	if (ctx.cr6.eq) goto loc_82190738;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219072c
	if (!ctx.cr6.eq) goto loc_8219072C;
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// std r10,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r10.u64);
	// ld r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r5,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r5.u64);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// b 0x82190734
	goto loc_82190734;
loc_8219072C:
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// bl 0x821902b0
	ctx.lr = 0x82190734;
	sub_821902B0(ctx, base);
loc_82190734:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82190738:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821906ec
	if (ctx.cr6.lt) goto loc_821906EC;
loc_8219074C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82190760"))) PPC_WEAK_FUNC(sub_82190760);
PPC_FUNC_IMPL(__imp__sub_82190760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82190768;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r22,r5,16
	ctx.r22.s64 = ctx.r5.s64 + 16;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82190548
	ctx.lr = 0x82190794;
	sub_82190548(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82190884
	if (ctx.cr6.eq) goto loc_82190884;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82190884
	if (!ctx.cr6.gt) goto loc_82190884;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821907B8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82190850
	if (ctx.cr6.eq) goto loc_82190850;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821905c8
	ctx.lr = 0x821907D4;
	sub_821905C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82190850
	if (ctx.cr6.eq) goto loc_82190850;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82190850
	if (!ctx.cr6.gt) goto loc_82190850;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821907F0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8219083c
	if (ctx.cr6.eq) goto loc_8219083C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219083c
	if (!ctx.cr6.eq) goto loc_8219083C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x821871a0
	ctx.lr = 0x82190828;
	sub_821871A0(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82190874
	if (ctx.cr6.lt) goto loc_82190874;
loc_8219083C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821907f0
	if (ctx.cr6.lt) goto loc_821907F0;
loc_82190850:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821907b8
	if (ctx.cr6.lt) goto loc_821907B8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82190874:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r24,1(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1, ctx.r24.u8);
	// stb r28,2(r23)
	PPC_STORE_U8(ctx.r23.u32 + 2, ctx.r28.u8);
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
loc_82190884:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82190894"))) PPC_WEAK_FUNC(sub_82190894);
PPC_FUNC_IMPL(__imp__sub_82190894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190898"))) PPC_WEAK_FUNC(sub_82190898);
PPC_FUNC_IMPL(__imp__sub_82190898) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,29604
	ctx.r6.s64 = ctx.r9.s64 + 29604;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stb r5,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r5.u8);
	// bgt cr6,0x82190918
	if (ctx.cr6.gt) goto loc_82190918;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8219092c
	if (!ctx.cr6.lt) goto loc_8219092C;
loc_82190918:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x821909e0
	if (!ctx.cr6.eq) goto loc_821909E0;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821909e0
	if (!ctx.cr6.eq) goto loc_821909E0;
loc_8219092C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82190944;
	sub_8208EA90(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821909d8
	if (!ctx.cr6.lt) goto loc_821909D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821909d8
	if (ctx.cr6.lt) goto loc_821909D8;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82190980
	if (ctx.cr6.lt) goto loc_82190980;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x82190984
	goto loc_82190984;
loc_82190980:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82190984:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82190998
	if (ctx.cr6.lt) goto loc_82190998;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x8219099c
	goto loc_8219099C;
loc_82190998:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8219099C:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x821909e0
	if (ctx.cr6.gt) goto loc_821909E0;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x821909e0
	if (ctx.cr6.gt) goto loc_821909E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// bgt cr6,0x821909e0
	if (ctx.cr6.gt) goto loc_821909E0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x821909e0
	if (ctx.cr6.gt) goto loc_821909E0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
loc_821909D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821909e4
	goto loc_821909E4;
loc_821909E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821909E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82190A00"))) PPC_WEAK_FUNC(sub_82190A00);
PPC_FUNC_IMPL(__imp__sub_82190A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82190A08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,29608
	ctx.r9.s64 = ctx.r11.s64 + 29608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82190a6c
	if (!ctx.cr6.gt) goto loc_82190A6C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82190A34:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82190a50
	if (ctx.cr6.eq) goto loc_82190A50;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x82190A50;
	sub_82183E40(ctx, base);
loc_82190A50:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82190a34
	if (ctx.cr6.lt) goto loc_82190A34;
loc_82190A6C:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82190a80
	if (ctx.cr6.eq) goto loc_82190A80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82190A80;
	sub_82183E40(ctx, base);
loc_82190A80:
	// stw r28,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821883b8
	ctx.lr = 0x82190A8C;
	sub_821883B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82190A94"))) PPC_WEAK_FUNC(sub_82190A94);
PPC_FUNC_IMPL(__imp__sub_82190A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190A98"))) PPC_WEAK_FUNC(sub_82190A98);
PPC_FUNC_IMPL(__imp__sub_82190A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82190AA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82190ad0
	if (!ctx.cr6.eq) goto loc_82190AD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82190AD0:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82190aec
	if (!ctx.cr6.gt) goto loc_82190AEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82190AEC:
	// bl 0x82080d68
	ctx.lr = 0x82190AF0;
	sub_82080D68(ctx, base);
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82190b0c
	if (!ctx.cr6.gt) goto loc_82190B0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82190B0C:
	// bl 0x82080d68
	ctx.lr = 0x82190B10;
	sub_82080D68(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82190b48
	if (ctx.cr6.eq) goto loc_82190B48;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82190b40
	if (ctx.cr0.lt) goto loc_82190B40;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-64
	ctx.r11.s64 = ctx.r3.s64 + -64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,29604
	ctx.r10.s64 = ctx.r10.s64 + 29604;
loc_82190B38:
	// stwu r10,64(r11)
	ea = 64 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82190b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190B38;
loc_82190B40:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82190b4c
	goto loc_82190B4C;
loc_82190B48:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82190B4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// lfs f13,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82190c68
	if (ctx.cr6.lt) goto loc_82190C68;
	// addi r30,r29,-3
	ctx.r30.s64 = ctx.r29.s64 + -3;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82190B78:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r9,192
	ctx.r5.s64 = ctx.r9.s64 + 192;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r8,-4
	ctx.r4.s64 = ctx.r8.s64 + -4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// stwx r10,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stwx r3,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// blt cr6,0x82190b78
	if (ctx.cr6.lt) goto loc_82190B78;
loc_82190C68:
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82190cbc
	if (!ctx.cr6.lt) goto loc_82190CBC;
	// subf r11,r6,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r6.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82190C80:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bdnz 0x82190c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190C80;
loc_82190CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82190CC4"))) PPC_WEAK_FUNC(sub_82190CC4);
PPC_FUNC_IMPL(__imp__sub_82190CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82190CC8"))) PPC_WEAK_FUNC(sub_82190CC8);
PPC_FUNC_IMPL(__imp__sub_82190CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82190CD0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f12,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f9,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_82190D2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821871a0
	ctx.lr = 0x82190D38;
	sub_821871A0(ctx, base);
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82190d64
	if (ctx.cr6.lt) goto loc_82190D64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x82190d2c
	if (ctx.cr6.lt) goto loc_82190D2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82190D64:
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// bl 0x82187200
	ctx.lr = 0x82190DD4;
	sub_82187200(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82190dec
	if (!ctx.cr6.gt) goto loc_82190DEC;
	// fdivs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// b 0x82190df0
	goto loc_82190DF0;
loc_82190DEC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82190DF0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lfs f7,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f6,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fadds f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// std r7,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r7.u64);
	// stfs f13,28(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82190E78"))) PPC_WEAK_FUNC(sub_82190E78);
PPC_FUNC_IMPL(__imp__sub_82190E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82190E80;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f10,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f9,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_82190EEC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82190f00
	if (!ctx.cr6.eq) goto loc_82190F00;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x82190f1c
	goto loc_82190F1C;
loc_82190F00:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82190f14
	if (!ctx.cr6.eq) goto loc_82190F14;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x82190f1c
	goto loc_82190F1C;
loc_82190F14:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82190F1C:
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// bl 0x82187270
	ctx.lr = 0x82190F50;
	sub_82187270(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x82190F5C;
	sub_821875F8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82190F68;
	sub_8208EA90(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x82190F8C;
	sub_8208EA90(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x8208ea90
	ctx.lr = 0x82190FAC;
	sub_8208EA90(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82190fec
	if (ctx.cr6.lt) goto loc_82190FEC;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82190fec
	if (ctx.cr6.gt) goto loc_82190FEC;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x82190FE0;
	sub_82187200(ctx, base);
	// lfs f12,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82191008
	if (ctx.cr6.lt) goto loc_82191008;
loc_82190FEC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82190eec
	if (ctx.cr6.lt) goto loc_82190EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82191008:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x82191010;
	sub_820A42E0(ctx, base);
	// lfs f12,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x8219104C;
	sub_82096F18(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82191058;
	sub_8208EA90(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219107C"))) PPC_WEAK_FUNC(sub_8219107C);
PPC_FUNC_IMPL(__imp__sub_8219107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191080"))) PPC_WEAK_FUNC(sub_82191080);
PPC_FUNC_IMPL(__imp__sub_82191080) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f0,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82248a40
	ctx.lr = 0x821910D8;
	sub_82248A40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82096f18
	ctx.lr = 0x821910E4;
	sub_82096F18(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ea90
	ctx.lr = 0x821910F4;
	sub_8208EA90(ctx, base);
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82191114"))) PPC_WEAK_FUNC(sub_82191114);
PPC_FUNC_IMPL(__imp__sub_82191114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191118"))) PPC_WEAK_FUNC(sub_82191118);
PPC_FUNC_IMPL(__imp__sub_82191118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82191120;
	sub_82248770(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,21586
	ctx.r4.s64 = 1414660096;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,18768
	ctx.r4.u64 = ctx.r4.u64 | 18768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x82191144;
	sub_82188378(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,29608
	ctx.r9.s64 = ctx.r11.s64 + 29608;
	// addi r8,r10,29604
	ctx.r8.s64 = ctx.r10.s64 + 29604;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// lbz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// lbz r3,7(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lbz r5,5(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lbz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821911a8
	if (!ctx.cr6.gt) goto loc_821911A8;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_821911A8:
	// bl 0x82183850
	ctx.lr = 0x821911AC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821911c4
	if (ctx.cr6.eq) goto loc_821911C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821911C0;
	sub_82183448(ctx, base);
	// b 0x821911d0
	goto loc_821911D0;
loc_821911C4:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821911D0;
	sub_821845A0(ctx, base);
loc_821911D0:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821915c8
	if (!ctx.cr6.gt) goto loc_821915C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821911F4:
	// bl 0x82183850
	ctx.lr = 0x821911F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82191210
	if (ctx.cr6.eq) goto loc_82191210;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82183448
	ctx.lr = 0x8219120C;
	sub_82183448(ctx, base);
	// b 0x82191218
	goto loc_82191218;
loc_82191210:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x82191218;
	sub_821845A0(ctx, base);
loc_82191218:
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,96
	ctx.r5.s64 = 96;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82248a40
	ctx.lr = 0x82191248;
	sub_82248A40(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82191254:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bdnz 0x82191254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191254;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwzx r30,r30,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r26,24(r30)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r25,32(r30)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ld r24,40(r30)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// ld r23,48(r30)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// ld r22,56(r30)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r26,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r26.u64);
	// std r25,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r25.u64);
	// std r24,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r24.u64);
	// std r23,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r23.u64);
	// std r22,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r22.u64);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x821913A8;
	sub_82096F18(ctx, base);
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821913FC;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8208ea90
	ctx.lr = 0x82191408;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8208ea90
	ctx.lr = 0x82191414;
	sub_8208EA90(ctx, base);
	// lfs f3,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// bne cr6,0x82191450
	if (!ctx.cr6.eq) goto loc_82191450;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8219148c
	goto loc_8219148C;
loc_82191450:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x82191464
	if (!ctx.cr6.gt) goto loc_82191464;
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
loc_82191464:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// ble cr6,0x82191478
	if (!ctx.cr6.gt) goto loc_82191478;
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
loc_82191478:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// ble cr6,0x8219148c
	if (!ctx.cr6.gt) goto loc_8219148C;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
loc_8219148C:
	// lfs f9,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x821914a0
	if (!ctx.cr6.gt) goto loc_821914A0;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_821914A0:
	// lfs f10,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x821914b4
	if (!ctx.cr6.gt) goto loc_821914B4;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_821914B4:
	// lfs f11,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821914c8
	if (!ctx.cr6.gt) goto loc_821914C8;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821914C8:
	// lfs f5,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// ble cr6,0x821914d8
	if (!ctx.cr6.gt) goto loc_821914D8;
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_821914D8:
	// lfs f6,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// ble cr6,0x821914e8
	if (!ctx.cr6.gt) goto loc_821914E8;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_821914E8:
	// lfs f7,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x821914f8
	if (!ctx.cr6.gt) goto loc_821914F8;
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821914F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82191528
	if (!ctx.cr6.eq) goto loc_82191528;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82191564
	goto loc_82191564;
loc_82191528:
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x8219153c
	if (!ctx.cr6.lt) goto loc_8219153C;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
loc_8219153C:
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bge cr6,0x82191550
	if (!ctx.cr6.lt) goto loc_82191550;
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
loc_82191550:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x82191564
	if (!ctx.cr6.lt) goto loc_82191564;
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
loc_82191564:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x82191574
	if (!ctx.cr6.lt) goto loc_82191574;
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_82191574:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82191584
	if (!ctx.cr6.lt) goto loc_82191584;
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_82191584:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82191594
	if (!ctx.cr6.lt) goto loc_82191594;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82191594:
	// fcmpu cr6,f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bge cr6,0x821915a0
	if (!ctx.cr6.lt) goto loc_821915A0;
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_821915A0:
	// fcmpu cr6,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bge cr6,0x821915ac
	if (!ctx.cr6.lt) goto loc_821915AC;
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_821915AC:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x821915b8
	if (!ctx.cr6.lt) goto loc_821915B8;
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821915B8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821911f4
	if (ctx.cr6.lt) goto loc_821911F4;
loc_821915C8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821871a0
	ctx.lr = 0x821915D4;
	sub_821871A0(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f5,80(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r7.u64);
	// std r8,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r8.u64);
	// std r8,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r8.u64);
	// ld r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r5,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r5.u64);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,144(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r4,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r4.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// std r27,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r27.u64);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82191680"))) PPC_WEAK_FUNC(sub_82191680);
PPC_FUNC_IMPL(__imp__sub_82191680) {
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
	// bl 0x82190a00
	ctx.lr = 0x821916A0;
	sub_82190A00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821916bc
	if (ctx.cr6.eq) goto loc_821916BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821916B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821916BC:
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

__attribute__((alias("__imp__sub_821916D4"))) PPC_WEAK_FUNC(sub_821916D4);
PPC_FUNC_IMPL(__imp__sub_821916D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821916D8"))) PPC_WEAK_FUNC(sub_821916D8);
PPC_FUNC_IMPL(__imp__sub_821916D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821916E0;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,92(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82191720
	if (!ctx.cr6.eq) goto loc_82191720;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
loc_82191720:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x821917d0
	if (ctx.cr6.eq) goto loc_821917D0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821917b8
	if (ctx.cr6.eq) goto loc_821917B8;
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r6,r7,29604
	ctx.r6.s64 = ctx.r7.s64 + 29604;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// std r10,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// bl 0x8208ea90
	ctx.lr = 0x82191778;
	sub_8208EA90(ctx, base);
	// stfs f31,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821919cc
	if (!ctx.cr6.eq) goto loc_821919CC;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82190460
	ctx.lr = 0x8219179C;
	sub_82190460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r3,r11,8
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFFFF;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821917B8:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x821917d0
	if (ctx.cr6.eq) goto loc_821917D0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821919cc
	if (!ctx.cr6.eq) goto loc_821919CC;
loc_821917D0:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r6,r8,29604
	ctx.r6.s64 = ctx.r8.s64 + 29604;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// bl 0x8208ea90
	ctx.lr = 0x82191818;
	sub_8208EA90(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821918bc
	if (!ctx.cr6.eq) goto loc_821918BC;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82190460
	ctx.lr = 0x8219183C;
	sub_82190460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82191860:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82191860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191860;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x82191888;
	sub_82096F18(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82191894;
	sub_8208EA90(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r3,r7,8
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFFFF;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821918BC:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82191944
	if (!ctx.cr6.eq) goto loc_82191944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190cc8
	ctx.lr = 0x821918D0;
	sub_82190CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821918E8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821918e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821918E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x82191910;
	sub_82096F18(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x8219191C;
	sub_8208EA90(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r3,r7,8
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFFFF;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82191944:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x821919cc
	if (!ctx.cr6.eq) goto loc_821919CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190e78
	ctx.lr = 0x82191958;
	sub_82190E78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821919cc
	if (ctx.cr6.eq) goto loc_821919CC;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82191970:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82191970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191970;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x82191998;
	sub_82096F18(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x821919A4;
	sub_8208EA90(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r3,r7,8
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFFFF;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821919CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821919DC"))) PPC_WEAK_FUNC(sub_821919DC);
PPC_FUNC_IMPL(__imp__sub_821919DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821919E0"))) PPC_WEAK_FUNC(sub_821919E0);
PPC_FUNC_IMPL(__imp__sub_821919E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x821919E8;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,180(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82191af4
	if (!ctx.cr6.eq) goto loc_82191AF4;
	// lwz r24,176(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191a3c
	if (!ctx.cr6.gt) goto loc_82191A3C;
	// addi r30,r22,-4
	ctx.r30.s64 = ctx.r22.s64 + -4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82191A28:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82190898
	ctx.lr = 0x82191A34;
	sub_82190898(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82191a28
	if (!ctx.cr0.eq) goto loc_82191A28;
loc_82191A3C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82191c60
	if (ctx.cr6.eq) goto loc_82191C60;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191c00
	if (!ctx.cr6.gt) goto loc_82191C00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
loc_82191A70:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lbz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82191bdc
	if (ctx.cr6.eq) goto loc_82191BDC;
	// ld r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x821916d8
	ctx.lr = 0x82191AAC;
	sub_821916D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191bdc
	if (ctx.cr6.eq) goto loc_82191BDC;
	// clrlwi r11,r3,8
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFFFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82191ac8
	if (ctx.cr6.eq) goto loc_82191AC8;
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
loc_82191AC8:
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82191bb0
	if (!ctx.cr6.eq) goto loc_82191BB0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f31
	ctx.cr6.compare(ctx.f31.f64, ctx.f31.f64);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// stfs f13,24(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// blt cr6,0x82191b70
	if (ctx.cr6.lt) goto loc_82191B70;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82191b74
	goto loc_82191B74;
loc_82191AF4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191b24
	if (!ctx.cr6.gt) goto loc_82191B24;
	// addi r30,r23,-2
	ctx.r30.s64 = ctx.r23.s64 + -2;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82191B04:
	// lhzu r11,2(r30)
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// bl 0x82190898
	ctx.lr = 0x82191B1C;
	sub_82190898(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82191b04
	if (!ctx.cr0.eq) goto loc_82191B04;
loc_82191B24:
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x82191a3c
	if (ctx.cr6.eq) goto loc_82191A3C;
	// lwz r9,180(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 180);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191a3c
	if (!ctx.cr6.gt) goto loc_82191A3C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_82191B44:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lbz r5,95(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 95);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82191b64
	if (!ctx.cr6.eq) goto loc_82191B64;
	// stb r20,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r20.u8);
loc_82191B64:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82191b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82191B44;
	// b 0x82191a3c
	goto loc_82191A3C;
loc_82191B70:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_82191B74:
	// fcmpu cr6,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f31.f64);
	// blt cr6,0x82191b84
	if (ctx.cr6.lt) goto loc_82191B84;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x82191b88
	goto loc_82191B88;
loc_82191B84:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_82191B88:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82191ba4
	if (!ctx.cr6.lt) goto loc_82191BA4;
	// fcmpu cr6,f31,f31
	ctx.cr6.compare(ctx.f31.f64, ctx.f31.f64);
	// blt cr6,0x82191ba0
	if (ctx.cr6.lt) goto loc_82191BA0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191BA0:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_82191BA4:
	// lfs f13,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,20(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
loc_82191BB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191bdc
	if (ctx.cr6.eq) goto loc_82191BDC;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82191bdc
	if (ctx.cr6.eq) goto loc_82191BDC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r21,192
	ctx.r4.s64 = ctx.r21.s64 + 192;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// bl 0x82191080
	ctx.lr = 0x82191BDC;
	sub_82191080(ctx, base);
loc_82191BDC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82191a70
	if (!ctx.cr0.eq) goto loc_82191A70;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82191c00
	if (ctx.cr6.eq) goto loc_82191C00;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82191C00:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191d20
	if (!ctx.cr6.gt) goto loc_82191D20;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82191C10:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// bl 0x821916d8
	ctx.lr = 0x82191C2C;
	sub_821916D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82191c50
	if (!ctx.cr6.eq) goto loc_82191C50;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82191c10
	if (ctx.cr6.lt) goto loc_82191C10;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82191C50:
	// oris r3,r3,512
	ctx.r3.u64 = ctx.r3.u64 | 33554432;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82191C60:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191cb0
	if (!ctx.cr6.gt) goto loc_82191CB0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82191C70:
	// ld r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x821916d8
	ctx.lr = 0x82191C94;
	sub_821916D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82191d30
	if (!ctx.cr6.eq) goto loc_82191D30;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82191c70
	if (ctx.cr6.lt) goto loc_82191C70;
loc_82191CB0:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191ce8
	if (!ctx.cr6.gt) goto loc_82191CE8;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82191CC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821916d8
	ctx.lr = 0x82191CD0;
	sub_821916D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82191ddc
	if (!ctx.cr6.eq) goto loc_82191DDC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82191cc0
	if (ctx.cr6.lt) goto loc_82191CC0;
loc_82191CE8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82191d20
	if (!ctx.cr6.gt) goto loc_82191D20;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82191CF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821916d8
	ctx.lr = 0x82191D08;
	sub_821916D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82191c50
	if (!ctx.cr6.eq) goto loc_82191C50;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82191cf8
	if (ctx.cr6.lt) goto loc_82191CF8;
loc_82191D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82191D30:
	// rlwinm r11,r29,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82191da8
	if (!ctx.cr6.eq) goto loc_82191DA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// blt cr6,0x82191d68
	if (ctx.cr6.lt) goto loc_82191D68;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82191d6c
	goto loc_82191D6C;
loc_82191D68:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82191D6C:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// blt cr6,0x82191d7c
	if (ctx.cr6.lt) goto loc_82191D7C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82191d80
	goto loc_82191D80;
loc_82191D7C:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82191D80:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82191d9c
	if (!ctx.cr6.lt) goto loc_82191D9C;
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// blt cr6,0x82191d98
	if (ctx.cr6.lt) goto loc_82191D98;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82191d9c
	goto loc_82191D9C;
loc_82191D98:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82191D9C:
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,20(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
loc_82191DA8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191dcc
	if (ctx.cr6.eq) goto loc_82191DCC;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82191dcc
	if (ctx.cr6.eq) goto loc_82191DCC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r21,192
	ctx.r4.s64 = ctx.r21.s64 + 192;
	// lwzx r3,r11,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// bl 0x82191080
	ctx.lr = 0x82191DCC;
	sub_82191080(ctx, base);
loc_82191DCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82191DDC:
	// oris r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 16777216;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82191DEC"))) PPC_WEAK_FUNC(sub_82191DEC);
PPC_FUNC_IMPL(__imp__sub_82191DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191DF0"))) PPC_WEAK_FUNC(sub_82191DF0);
PPC_FUNC_IMPL(__imp__sub_82191DF0) {
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
	// bl 0x82189548
	ctx.lr = 0x82191E00;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191e0c
	if (ctx.cr6.eq) goto loc_82191E0C;
	// bl 0x8219ac80
	ctx.lr = 0x82191E0C;
	sub_8219AC80(ctx, base);
loc_82191E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82191E1C"))) PPC_WEAK_FUNC(sub_82191E1C);
PPC_FUNC_IMPL(__imp__sub_82191E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191E20"))) PPC_WEAK_FUNC(sub_82191E20);
PPC_FUNC_IMPL(__imp__sub_82191E20) {
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
	// bl 0x82189548
	ctx.lr = 0x82191E30;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191e4c
	if (ctx.cr6.eq) goto loc_82191E4C;
	// bl 0x8219ab40
	ctx.lr = 0x82191E3C;
	sub_8219AB40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82191E4C:
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

__attribute__((alias("__imp__sub_82191E60"))) PPC_WEAK_FUNC(sub_82191E60);
PPC_FUNC_IMPL(__imp__sub_82191E60) {
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
	// bl 0x82189548
	ctx.lr = 0x82191E70;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191e8c
	if (ctx.cr6.eq) goto loc_82191E8C;
	// bl 0x8219ab48
	ctx.lr = 0x82191E7C;
	sub_8219AB48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82191E8C:
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

__attribute__((alias("__imp__sub_82191EA0"))) PPC_WEAK_FUNC(sub_82191EA0);
PPC_FUNC_IMPL(__imp__sub_82191EA0) {
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
	// bl 0x82189548
	ctx.lr = 0x82191EB0;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191ed0
	if (ctx.cr6.eq) goto loc_82191ED0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82191ed0
	if (ctx.cr6.lt) goto loc_82191ED0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82191ed4
	if (!ctx.cr6.gt) goto loc_82191ED4;
loc_82191ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82191ED4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82191EE4"))) PPC_WEAK_FUNC(sub_82191EE4);
PPC_FUNC_IMPL(__imp__sub_82191EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191EE8"))) PPC_WEAK_FUNC(sub_82191EE8);
PPC_FUNC_IMPL(__imp__sub_82191EE8) {
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
	// bl 0x82189548
	ctx.lr = 0x82191EF8;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191f20
	if (ctx.cr6.eq) goto loc_82191F20;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82191F20:
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

__attribute__((alias("__imp__sub_82191F34"))) PPC_WEAK_FUNC(sub_82191F34);
PPC_FUNC_IMPL(__imp__sub_82191F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191F38"))) PPC_WEAK_FUNC(sub_82191F38);
PPC_FUNC_IMPL(__imp__sub_82191F38) {
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
	// bl 0x82189548
	ctx.lr = 0x82191F48;
	sub_82189548(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191f70
	if (ctx.cr6.eq) goto loc_82191F70;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82191F70:
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

__attribute__((alias("__imp__sub_82191F84"))) PPC_WEAK_FUNC(sub_82191F84);
PPC_FUNC_IMPL(__imp__sub_82191F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82191F88"))) PPC_WEAK_FUNC(sub_82191F88);
PPC_FUNC_IMPL(__imp__sub_82191F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f13,48(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,52(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,56(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fmuls f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,60(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// fmuls f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f8,f3,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fsubs f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// stfs f7,36(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// fadds f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f3,16(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fsubs f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,32(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f1,40(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192064"))) PPC_WEAK_FUNC(sub_82192064);
PPC_FUNC_IMPL(__imp__sub_82192064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82192068"))) PPC_WEAK_FUNC(sub_82192068);
PPC_FUNC_IMPL(__imp__sub_82192068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x82191f88
	ctx.lr = 0x82192090;
	sub_82191F88(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r6.u64);
	// std r5,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r5.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821920B4"))) PPC_WEAK_FUNC(sub_821920B4);
PPC_FUNC_IMPL(__imp__sub_821920B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821920B8"))) PPC_WEAK_FUNC(sub_821920B8);
PPC_FUNC_IMPL(__imp__sub_821920B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x82192128;
	sub_82187400(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192138"))) PPC_WEAK_FUNC(sub_82192138);
PPC_FUNC_IMPL(__imp__sub_82192138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249908
	ctx.lr = 0x8219214C;
	sub_82249908(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f28,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// lfs f25,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f25,f28
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// lfs f27,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f29,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// lfs f30,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f22,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f24,f27,f13
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f11,f23,f29,f12
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f1,f22,f30,f11
	ctx.f1.f64 = double(float(ctx.f22.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821921ac
	if (!ctx.cr6.lt) goto loc_821921AC;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f29,f29
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f28,f28
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f27,f27
	ctx.f27.u64 = ctx.f27.u64 ^ 0x8000000000000000;
loc_821921AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lfs f0,-23584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23584);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82192250
	if (!ctx.cr6.gt) goto loc_82192250;
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82192214
	if (!ctx.cr6.gt) goto loc_82192214;
	// bl 0x82249b48
	ctx.lr = 0x821921D8;
	sub_82249B48(ctx, base);
	// frsp f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f1.f64));
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82249e70
	ctx.lr = 0x821921E4;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fdivs f20,f31,f0
	ctx.f20.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f1,f13,f21
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// bl 0x82249e70
	ctx.lr = 0x821921F8;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f21,f26
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f26.f64));
	// fmuls f31,f12,f20
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// bl 0x82249e70
	ctx.lr = 0x82192208;
	sub_82249E70(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f11,f20
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// b 0x8219221c
	goto loc_8219221C;
loc_82192214:
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
loc_8219221C:
	// fmuls f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fmuls f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f11,f31,f28
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// fmuls f10,f31,f27
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmadds f9,f22,f0,f13
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f8,f23,f0,f12
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f7,f25,f0,f11
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f6,f24,f0,f10
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x821922c4
	goto loc_821922C4;
loc_82192250:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fneg f13,f27
	ctx.f13.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// lfs f31,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82249e70
	ctx.lr = 0x82192284;
	sub_82249E70(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f26,f31
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// bl 0x82249e70
	ctx.lr = 0x82192290;
	sub_82249E70(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f27,f30
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f27,f28
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f4,f8,f11,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f3,f6,f11,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f2,f27,f29,f5
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 + ctx.f5.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_821922C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249954
	ctx.lr = 0x821922D0;
	sub_82249954(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821922E0"))) PPC_WEAK_FUNC(sub_821922E0);
PPC_FUNC_IMPL(__imp__sub_821922E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821922E8;
	sub_82248784(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,-120
	ctx.r10.s64 = ctx.r1.s64 + -120;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821922F8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821922f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821922F8;
	// lfs f10,-72(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8219238c
	if (!ctx.cr6.gt) goto loc_8219238C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f0,f10,f2
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219238C:
	// li r9,0
	ctx.r9.s64 = 0;
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8219239c
	if (!ctx.cr6.gt) goto loc_8219239C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8219239C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821923bc
	if (!ctx.cr6.gt) goto loc_821923BC;
	// li r9,2
	ctx.r9.s64 = 2;
loc_821923BC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,7152
	ctx.r6.s64 = ctx.r11.s64 + 7152;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r1,-112
	ctx.r4.s64 = ctx.r1.s64 + -112;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f12,r30,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,2144(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfsx f11,r28,r31
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfsx f10,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// lfsx f8,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// lfs f0,8060(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r30,r28
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// lfsx f3,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f7,r7,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfsx f5,r8,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfsx f4,r6,r3
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821924C8"))) PPC_WEAK_FUNC(sub_821924C8);
PPC_FUNC_IMPL(__imp__sub_821924C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f0,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820a42e0
	ctx.lr = 0x82192508;
	sub_820A42E0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82192510;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82249f50
	ctx.lr = 0x82192540;
	sub_82249F50(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192560"))) PPC_WEAK_FUNC(sub_82192560);
PPC_FUNC_IMPL(__imp__sub_82192560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x8219259C;
	sub_82249E70(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82249f50
	ctx.lr = 0x821925BC;
	sub_82249F50(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// bl 0x82249e70
	ctx.lr = 0x821925E0;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82249f50
	ctx.lr = 0x821925F4;
	sub_82249F50(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// bl 0x82249e70
	ctx.lr = 0x8219261C;
	sub_82249E70(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82249f50
	ctx.lr = 0x8219262C;
	sub_82249F50(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821920b8
	ctx.lr = 0x82192654;
	sub_821920B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821920b8
	ctx.lr = 0x82192664;
	sub_821920B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192684"))) PPC_WEAK_FUNC(sub_82192684);
PPC_FUNC_IMPL(__imp__sub_82192684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82192688"))) PPC_WEAK_FUNC(sub_82192688);
PPC_FUNC_IMPL(__imp__sub_82192688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82192690;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmsubs f5,f13,f7,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f10.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f4,f0,f9,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f3,f11,f12,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x82187200
	ctx.lr = 0x8219270C;
	sub_82187200(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,30764(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30764);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82192740
	if (!ctx.cr6.lt) goto loc_82192740;
loc_8219271C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82192740:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x82192748;
	sub_820A42E0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8219271c
	if (ctx.cr6.gt) goto loc_8219271C;
	// bl 0x82249b48
	ctx.lr = 0x82192778;
	sub_82249B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8219279c
	if (!ctx.cr6.gt) goto loc_8219279C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8219271c
	if (ctx.cr6.lt) goto loc_8219271C;
loc_8219279C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821924c8
	ctx.lr = 0x821927A8;
	sub_821924C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821927B4"))) PPC_WEAK_FUNC(sub_821927B4);
PPC_FUNC_IMPL(__imp__sub_821927B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821927B8"))) PPC_WEAK_FUNC(sub_821927B8);
PPC_FUNC_IMPL(__imp__sub_821927B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82192560
	sub_82192560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821927C8"))) PPC_WEAK_FUNC(sub_821927C8);
PPC_FUNC_IMPL(__imp__sub_821927C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821927D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subfc r9,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// eqv r8,r5,r11
	// addi r28,r10,29688
	ctx.r28.s64 = ctx.r10.s64 + 29688;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82192808;
	sub_8209EDA0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subfc r3,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r11,r11,r31
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x8219282C;
	sub_8209EDA0(ctx, base);
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r4,r8,29656
	ctx.r4.s64 = ctx.r8.s64 + 29656;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subfe r3,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8209eda0
	ctx.lr = 0x82192848;
	sub_8209EDA0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82192864:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82192864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192864;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82192894
	if (!ctx.cr6.gt) goto loc_82192894;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82192880:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u32);
	// bdnz 0x82192880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82192880;
loc_82192894:
	// lwsync 
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,26852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26852, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821928AC"))) PPC_WEAK_FUNC(sub_821928AC);
PPC_FUNC_IMPL(__imp__sub_821928AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821928B0"))) PPC_WEAK_FUNC(sub_821928B0);
PPC_FUNC_IMPL(__imp__sub_821928B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821928B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subfc r9,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r29,r7,29720
	ctx.r29.s64 = ctx.r7.s64 + 29720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// adde r3,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821928EC;
	sub_8209EDA0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subfc r6,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r3,r11,r31
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82192910;
	sub_8209EDA0(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82192930
	if (!ctx.cr6.eq) goto loc_82192930;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82192930:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82192940"))) PPC_WEAK_FUNC(sub_82192940);
PPC_FUNC_IMPL(__imp__sub_82192940) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x821929f0
	if (ctx.cr6.gt) goto loc_821929F0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82192980
	if (ctx.cr6.lt) goto loc_82192980;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82192980
	if (ctx.cr6.gt) goto loc_82192980;
	// li r9,7
	ctx.r9.s64 = 7;
loc_82192980:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x8219298c
	if (!ctx.cr6.eq) goto loc_8219298C;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
loc_8219298C:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82192998
	if (!ctx.cr6.eq) goto loc_82192998;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
loc_82192998:
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821929e4
	if (ctx.cr6.eq) goto loc_821929E4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x821929e4
	if (!ctx.cr6.eq) goto loc_821929E4;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x821929c4
	if (ctx.cr6.eq) goto loc_821929C4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x821929cc
	if (!ctx.cr6.eq) goto loc_821929CC;
loc_821929C4:
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r9,r8,3,28,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
loc_821929CC:
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x821929dc
	if (ctx.cr6.eq) goto loc_821929DC;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// bne cr6,0x821929e4
	if (!ctx.cr6.eq) goto loc_821929E4;
loc_821929DC:
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
loc_821929E4:
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_821929F0:
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821929F8"))) PPC_WEAK_FUNC(sub_821929F8);
PPC_FUNC_IMPL(__imp__sub_821929F8) {
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
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r9,1820
	ctx.r9.s64 = 119275520;
	// stw r4,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// addi r7,r10,17096
	ctx.r7.s64 = ctx.r10.s64 + 17096;
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// ori r5,r9,29127
	ctx.r5.u64 = ctx.r9.u64 | 29127;
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r11.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// bgt cr6,0x82192a60
	if (ctx.cr6.gt) goto loc_82192A60;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82192a64
	goto loc_82192A64;
loc_82192A60:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82192A64:
	// bl 0x82183850
	ctx.lr = 0x82192A68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82192a88
	if (ctx.cr6.eq) goto loc_82192A88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82192A7C;
	sub_82183448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x82192a9c
	goto loc_82192A9C;
loc_82192A88:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82192A94;
	sub_821845A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82192A9C:
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

__attribute__((alias("__imp__sub_82192AB8"))) PPC_WEAK_FUNC(sub_82192AB8);
PPC_FUNC_IMPL(__imp__sub_82192AB8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,17096
	ctx.r10.s64 = ctx.r11.s64 + 17096;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82192aec
	if (ctx.cr6.eq) goto loc_82192AEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82192AEC;
	sub_82183E40(ctx, base);
loc_82192AEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82192B08"))) PPC_WEAK_FUNC(sub_82192B08);
PPC_FUNC_IMPL(__imp__sub_82192B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82192B10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82192b30
	if (ctx.cr6.gt) goto loc_82192B30;
loc_82192B24:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82192B30:
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,32
	ctx.r28.s64 = 32;
loc_82192B3C:
	// stw r31,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82192b90
	if (!ctx.cr6.gt) goto loc_82192B90;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82192B68:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r31,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r31.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r31,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82192b68
	if (ctx.cr6.lt) goto loc_82192B68;
loc_82192B90:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// subf. r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82192b24
	if (!ctx.cr0.gt) goto loc_82192B24;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82192ca8
	if (!ctx.cr6.gt) goto loc_82192CA8;
loc_82192BAC:
	// lwz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r9.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82192c7c
	if (ctx.cr6.eq) goto loc_82192C7C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82192c8c
	if (ctx.cr6.eq) goto loc_82192C8C;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82192bf4
	if (!ctx.cr6.eq) goto loc_82192BF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82192c68
	goto loc_82192C68;
loc_82192BF4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82192c68
	if (!ctx.cr6.eq) goto loc_82192C68;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82192c08
	if (!ctx.cr6.eq) goto loc_82192C08;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82192C08:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82192c48
	if (ctx.cr6.eq) goto loc_82192C48;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmpwi cr6,r10,129
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 129, ctx.xer);
	// bne cr6,0x82192c2c
	if (!ctx.cr6.eq) goto loc_82192C2C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bne cr6,0x82192c2c
	if (!ctx.cr6.eq) goto loc_82192C2C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82192C2C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82192C30:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82192c60
	if (!ctx.cr6.eq) goto loc_82192C60;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82192c68
	if (ctx.cr6.eq) goto loc_82192C68;
	// stbx r28,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u8);
	// b 0x82192c64
	goto loc_82192C64;
loc_82192C48:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82192c30
	if (ctx.cr6.eq) goto loc_82192C30;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82192c6c
	goto loc_82192C6C;
loc_82192C60:
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
loc_82192C64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82192C68:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82192C6C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82192bac
	if (ctx.cr6.lt) goto loc_82192BAC;
	// b 0x82192c8c
	goto loc_82192C8C;
loc_82192C7C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// stw r10,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
loc_82192C8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82192ca8
	if (!ctx.cr6.gt) goto loc_82192CA8;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82192ca8
	if (!ctx.cr6.eq) goto loc_82192CA8;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82192CA8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stbx r31,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r31.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82192d60
	if (ctx.cr6.lt) goto loc_82192D60;
loc_82192CC0:
	// lbzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x82192cec
	if (!ctx.cr6.eq) goto loc_82192CEC;
	// lwz r4,532(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82192940
	ctx.lr = 0x82192CDC;
	sub_82192940(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// b 0x82192d3c
	goto loc_82192D3C;
loc_82192CEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82192cfc
	if (!ctx.cr6.eq) goto loc_82192CFC;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bne cr6,0x82192d4c
	if (!ctx.cr6.eq) goto loc_82192D4C;
loc_82192CFC:
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r31,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r31.u8);
loc_82192D3C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82192cc0
	if (!ctx.cr6.gt) goto loc_82192CC0;
	// b 0x82192d60
	goto loc_82192D60;
loc_82192D4C:
	// lwz r4,532(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// bl 0x82192940
	ctx.lr = 0x82192D54;
	sub_82192940(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
loc_82192D60:
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// beq cr6,0x82192b3c
	if (ctx.cr6.eq) goto loc_82192B3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82192D84"))) PPC_WEAK_FUNC(sub_82192D84);
PPC_FUNC_IMPL(__imp__sub_82192D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82192D88"))) PPC_WEAK_FUNC(sub_82192D88);
PPC_FUNC_IMPL(__imp__sub_82192D88) {
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
	// lwz r9,532(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82192eec
	if (!ctx.cr6.gt) goto loc_82192EEC;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x82192dc8
	if (!ctx.cr6.lt) goto loc_82192DC8;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// b 0x82192dcc
	goto loc_82192DCC;
loc_82192DC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82192DCC:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82192e68
	if (ctx.cr6.eq) goto loc_82192E68;
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82192ef0
	if (ctx.cr6.eq) goto loc_82192EF0;
loc_82192DE8:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82192e08
	if (ctx.cr6.lt) goto loc_82192E08;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x82192e08
	if (ctx.cr6.gt) goto loc_82192E08;
	// addi r9,r11,-87
	ctx.r9.s64 = ctx.r11.s64 + -87;
	// rldicr r8,r3,4,59
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_82192E08:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82192e28
	if (ctx.cr6.lt) goto loc_82192E28;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x82192e28
	if (ctx.cr6.gt) goto loc_82192E28;
	// addi r9,r11,-55
	ctx.r9.s64 = ctx.r11.s64 + -55;
	// rldicr r8,r3,4,59
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_82192E28:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82192e48
	if (ctx.cr6.lt) goto loc_82192E48;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82192e48
	if (ctx.cr6.gt) goto loc_82192E48;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// rldicr r9,r3,4,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82192E48:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82192de8
	if (!ctx.cr6.eq) goto loc_82192DE8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82192E68:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82192ec4
	if (ctx.cr6.eq) goto loc_82192EC4;
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82192ef0
	if (ctx.cr6.eq) goto loc_82192EF0;
loc_82192E84:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82192ea4
	if (ctx.cr6.lt) goto loc_82192EA4;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bgt cr6,0x82192ea4
	if (ctx.cr6.gt) goto loc_82192EA4;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// rldicr r9,r3,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82192EA4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82192e84
	if (!ctx.cr6.eq) goto loc_82192E84;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82192EC4:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82192eec
	if (ctx.cr6.eq) goto loc_82192EEC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8224a688
	ctx.lr = 0x82192ED8;
	sub_8224A688(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82192EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82192EF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192F00"))) PPC_WEAK_FUNC(sub_82192F00);
PPC_FUNC_IMPL(__imp__sub_82192F00) {
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
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82192f68
	if (!ctx.cr6.lt) goto loc_82192F68;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82192f68
	if (ctx.cr6.eq) goto loc_82192F68;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8224b290
	ctx.lr = 0x82192F54;
	sub_8224B290(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82192F68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192F80"))) PPC_WEAK_FUNC(sub_82192F80);
PPC_FUNC_IMPL(__imp__sub_82192F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82192fc8
	if (!ctx.cr6.lt) goto loc_82192FC8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82192fc8
	if (ctx.cr6.eq) goto loc_82192FC8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82192FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82192FD0"))) PPC_WEAK_FUNC(sub_82192FD0);
PPC_FUNC_IMPL(__imp__sub_82192FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82192ff4
	if (!ctx.cr6.gt) goto loc_82192FF4;
loc_82192FE8:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x82192fe8
	if (ctx.cr6.gt) goto loc_82192FE8;
loc_82192FF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82193004:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82193004
	if (ctx.cr6.lt) goto loc_82193004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193014"))) PPC_WEAK_FUNC(sub_82193014);
PPC_FUNC_IMPL(__imp__sub_82193014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193018"))) PPC_WEAK_FUNC(sub_82193018);
PPC_FUNC_IMPL(__imp__sub_82193018) {
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
	// bl 0x821855f0
	ctx.lr = 0x82193030;
	sub_821855F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r8,r10,29752
	ctx.r8.s64 = ctx.r10.s64 + 29752;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// stw r11,26864(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26864, ctx.r11.u32);
	// lis r4,-32179
	ctx.r4.s64 = -2108882944;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,27064
	ctx.r8.s64 = ctx.r5.s64 + 27064;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,26860(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26860, ctx.r10.u32);
	// stw r11,27096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27096, ctx.r11.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r9,26856(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26856, ctx.r9.u32);
loc_8219307C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8219307c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219307C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r3,r11,26872
	ctx.r3.s64 = ctx.r11.s64 + 26872;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82193098;
	sub_82248F70(ctx, base);
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

__attribute__((alias("__imp__sub_821930B0"))) PPC_WEAK_FUNC(sub_821930B0);
PPC_FUNC_IMPL(__imp__sub_821930B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27064
	ctx.r9.s64 = ctx.r11.s64 + 27064;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821930C4"))) PPC_WEAK_FUNC(sub_821930C4);
PPC_FUNC_IMPL(__imp__sub_821930C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821930C8"))) PPC_WEAK_FUNC(sub_821930C8);
PPC_FUNC_IMPL(__imp__sub_821930C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,26872
	ctx.r6.s64 = ctx.r7.s64 + 26872;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,26872(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26872, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r7.u32);
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// stw r8,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// stw r11,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r11.u32);
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// stw r10,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r10.u32);
	// stw r9,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r9.u32);
	// stw r8,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r8.u32);
	// stw r11,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r11.u32);
	// stw r7,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r7.u32);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// stw r9,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r9.u32);
	// stw r8,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r8.u32);
	// stw r11,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r11.u32);
	// stw r7,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r7.u32);
	// stw r10,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r10.u32);
	// stw r9,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r9.u32);
	// stw r8,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r8.u32);
	// stw r11,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r11.u32);
	// stw r7,120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 120, ctx.r7.u32);
	// stw r10,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r10.u32);
	// stw r9,128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 128, ctx.r9.u32);
	// stw r8,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r8.u32);
	// stw r11,136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 136, ctx.r11.u32);
	// stw r7,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r7.u32);
	// stw r10,156(r6)
	PPC_STORE_U32(ctx.r6.u32 + 156, ctx.r10.u32);
	// stw r9,152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 152, ctx.r9.u32);
	// stw r8,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, ctx.r8.u32);
	// stw r11,160(r6)
	PPC_STORE_U32(ctx.r6.u32 + 160, ctx.r11.u32);
	// stw r7,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r7.u32);
	// stw r10,180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 180, ctx.r10.u32);
	// stw r9,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r9.u32);
	// stw r8,172(r6)
	PPC_STORE_U32(ctx.r6.u32 + 172, ctx.r8.u32);
	// stw r11,184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193188"))) PPC_WEAK_FUNC(sub_82193188);
PPC_FUNC_IMPL(__imp__sub_82193188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82193190;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,26872
	ctx.r10.s64 = ctx.r10.s64 + 26872;
	// addi r27,r11,27064
	ctx.r27.s64 = ctx.r11.s64 + 27064;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
loc_821931B4:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x82193280
	if (!ctx.cr6.lt) goto loc_82193280;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// beq cr6,0x82193274
	if (ctx.cr6.eq) goto loc_82193274;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82193274
	if (ctx.cr6.eq) goto loc_82193274;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82193270
	if (ctx.cr6.eq) goto loc_82193270;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// bge cr6,0x8219321c
	if (!ctx.cr6.lt) goto loc_8219321C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r10,14,16,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r5,r6,7
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// sth r5,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
loc_8219321C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82193248
	if (ctx.cr6.lt) goto loc_82193248;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82193248:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82193264
	if (ctx.cr6.lt) goto loc_82193264;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
loc_82193264:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82193274
	goto loc_82193274;
loc_82193270:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82193274:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256e50
	ctx.lr = 0x82193280;
	sub_82256E50(ctx, base);
loc_82193280:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821931b4
	if (ctx.cr6.lt) goto loc_821931B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821932A0"))) PPC_WEAK_FUNC(sub_821932A0);
PPC_FUNC_IMPL(__imp__sub_821932A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,27096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219332c
	if (ctx.cr6.eq) goto loc_8219332C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27064
	ctx.r9.s64 = ctx.r11.s64 + 27064;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8219332c
	if (ctx.cr6.eq) goto loc_8219332C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8219332c
	if (ctx.cr6.lt) goto loc_8219332C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bge cr6,0x8219332c
	if (!ctx.cr6.lt) goto loc_8219332C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,26872
	ctx.r11.s64 = ctx.r7.s64 + 26872;
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
loc_8219332C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193334"))) PPC_WEAK_FUNC(sub_82193334);
PPC_FUNC_IMPL(__imp__sub_82193334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193338"))) PPC_WEAK_FUNC(sub_82193338);
PPC_FUNC_IMPL(__imp__sub_82193338) {
	PPC_FUNC_PROLOGUE();
	// b 0x82193188
	sub_82193188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219333C"))) PPC_WEAK_FUNC(sub_8219333C);
PPC_FUNC_IMPL(__imp__sub_8219333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193340"))) PPC_WEAK_FUNC(sub_82193340);
PPC_FUNC_IMPL(__imp__sub_82193340) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// addi r10,r11,29752
	ctx.r10.s64 = ctx.r11.s64 + 29752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,26864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219337c
	if (ctx.cr6.eq) goto loc_8219337C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8219337C;
	sub_82183E40(ctx, base);
loc_8219337C:
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26864, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,27096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27096, ctx.r10.u32);
	// bl 0x82185670
	ctx.lr = 0x82193398;
	sub_82185670(ctx, base);
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

__attribute__((alias("__imp__sub_821933B0"))) PPC_WEAK_FUNC(sub_821933B0);
PPC_FUNC_IMPL(__imp__sub_821933B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821933B8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,26864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821933dc
	if (ctx.cr6.eq) goto loc_821933DC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821933DC;
	sub_82183E40(ctx, base);
loc_821933DC:
	// lis r28,-32179
	ctx.r28.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26864, ctx.r11.u32);
	// stw r10,27096(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27096, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x821933F4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8219340c
	if (ctx.cr6.eq) goto loc_8219340C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82193408;
	sub_82183448(ctx, base);
	// b 0x82193418
	goto loc_82193418;
loc_8219340C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82193418;
	sub_821845A0(ctx, base);
loc_82193418:
	// stw r3,26864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26864, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x82193428;
	sub_82248A40(ctx, base);
	// lwz r11,26864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r11,26860(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26860, ctx.r11.u32);
	// stw r7,26856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26856, ctx.r7.u32);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82193588
	if (!ctx.cr6.eq) goto loc_82193588;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r5,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r5.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,26860(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26860);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r6,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,26860(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26860);
	// lwz r8,26864(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x821935d4
	if (!ctx.cr6.gt) goto loc_821935D4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821934D0:
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r5,1(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sthx r4,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u16);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r4,5(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lbz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r3,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r3.u16);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r5,6(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// addi r7,r9,6
	ctx.r7.s64 = ctx.r9.s64 + 6;
	// lbz r6,7(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r4,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r4.u16);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,6(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bdnz 0x821934d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821934D0;
	// b 0x821935d4
	goto loc_821935D4;
loc_82193588:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ble cr6,0x821935d4
	if (!ctx.cr6.gt) goto loc_821935D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_821935AC:
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,26856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,6(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bdnz 0x821935ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821935AC;
loc_821935D4:
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r7,26872
	ctx.r6.s64 = ctx.r7.s64 + 26872;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,26872(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26872, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r7,120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 120, ctx.r7.u32);
	// stw r10,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r10.u32);
	// stw r9,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r9.u32);
	// stw r8,27096(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27096, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219361C"))) PPC_WEAK_FUNC(sub_8219361C);
PPC_FUNC_IMPL(__imp__sub_8219361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193620"))) PPC_WEAK_FUNC(sub_82193620);
PPC_FUNC_IMPL(__imp__sub_82193620) {
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
	// bl 0x82193340
	ctx.lr = 0x82193640;
	sub_82193340(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219365c
	if (ctx.cr6.eq) goto loc_8219365C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82193658;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219365C:
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

__attribute__((alias("__imp__sub_82193674"))) PPC_WEAK_FUNC(sub_82193674);
PPC_FUNC_IMPL(__imp__sub_82193674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193678"))) PPC_WEAK_FUNC(sub_82193678);
PPC_FUNC_IMPL(__imp__sub_82193678) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r7,26872
	ctx.r5.s64 = ctx.r7.s64 + 26872;
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// stw r11,27096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27096, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r10,26864(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26864, ctx.r10.u32);
	// stw r9,26872(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26872, ctx.r9.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// stw r8,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r8.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// stw r8,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r8.u32);
	// stw r10,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r10.u32);
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r11.u32);
	// stw r9,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r9.u32);
	// stw r8,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r8.u32);
	// stw r10,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r10.u32);
	// stw r11,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r11.u32);
	// stw r9,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r9.u32);
	// stw r8,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r8.u32);
	// stw r10,88(r5)
	PPC_STORE_U32(ctx.r5.u32 + 88, ctx.r10.u32);
	// stw r11,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r11.u32);
	// stw r9,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r9.u32);
	// stw r8,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r8.u32);
	// stw r10,100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 100, ctx.r10.u32);
	// stw r11,120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 120, ctx.r11.u32);
	// stw r9,112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 112, ctx.r9.u32);
	// stw r8,132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 132, ctx.r8.u32);
	// stw r10,128(r5)
	PPC_STORE_U32(ctx.r5.u32 + 128, ctx.r10.u32);
	// stw r11,136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 136, ctx.r11.u32);
	// stw r9,124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 124, ctx.r9.u32);
	// stw r8,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r8.u32);
	// stw r10,156(r5)
	PPC_STORE_U32(ctx.r5.u32 + 156, ctx.r10.u32);
	// stw r11,148(r5)
	PPC_STORE_U32(ctx.r5.u32 + 148, ctx.r11.u32);
	// stw r9,152(r5)
	PPC_STORE_U32(ctx.r5.u32 + 152, ctx.r9.u32);
	// stw r8,160(r5)
	PPC_STORE_U32(ctx.r5.u32 + 160, ctx.r8.u32);
	// stw r10,168(r5)
	PPC_STORE_U32(ctx.r5.u32 + 168, ctx.r10.u32);
	// stw r11,180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 180, ctx.r11.u32);
	// stw r10,176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 176, ctx.r10.u32);
	// stw r9,172(r5)
	PPC_STORE_U32(ctx.r5.u32 + 172, ctx.r9.u32);
	// stw r11,184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 184, ctx.r11.u32);
	// b 0x821933b0
	sub_821933B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82193744"))) PPC_WEAK_FUNC(sub_82193744);
PPC_FUNC_IMPL(__imp__sub_82193744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193748"))) PPC_WEAK_FUNC(sub_82193748);
PPC_FUNC_IMPL(__imp__sub_82193748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82193750;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82193760;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82193768;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82193774;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82193788;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82193794;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821937b0
	if (ctx.cr6.eq) goto loc_821937B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x821937A8;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821937b4
	goto loc_821937B4;
loc_821937B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821937B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821937C0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821937dc
	if (ctx.cr6.eq) goto loc_821937DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x821937D4;
	sub_8218ABC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821937e0
	goto loc_821937E0;
loc_821937DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821937E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82193678
	ctx.lr = 0x821937E8;
	sub_82193678(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821937F4;
	sub_82183E40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x821937FC;
	sub_8218A7F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82193804;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219380C"))) PPC_WEAK_FUNC(sub_8219380C);
PPC_FUNC_IMPL(__imp__sub_8219380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193810"))) PPC_WEAK_FUNC(sub_82193810);
PPC_FUNC_IMPL(__imp__sub_82193810) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r31,4096
	ctx.r31.s64 = 4096;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821938C4"))) PPC_WEAK_FUNC(sub_821938C4);
PPC_FUNC_IMPL(__imp__sub_821938C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821938C8"))) PPC_WEAK_FUNC(sub_821938C8);
PPC_FUNC_IMPL(__imp__sub_821938C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821938EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821938ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821938EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821938F8"))) PPC_WEAK_FUNC(sub_821938F8);
PPC_FUNC_IMPL(__imp__sub_821938F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82193964
	if (ctx.cr0.lt) goto loc_82193964;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82193914:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82193958
	if (ctx.cr6.lt) goto loc_82193958;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82193958:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// bge 0x82193914
	if (!ctx.cr0.lt) goto loc_82193914;
loc_82193964:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219396C"))) PPC_WEAK_FUNC(sub_8219396C);
PPC_FUNC_IMPL(__imp__sub_8219396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193970"))) PPC_WEAK_FUNC(sub_82193970);
PPC_FUNC_IMPL(__imp__sub_82193970) {
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
	// beq cr6,0x8219399c
	if (ctx.cr6.eq) goto loc_8219399C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8219399C;
	sub_82183E40(ctx, base);
loc_8219399C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821939b8
	if (ctx.cr6.eq) goto loc_821939B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821939B8;
	sub_82183E40(ctx, base);
loc_821939B8:
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

__attribute__((alias("__imp__sub_821939D4"))) PPC_WEAK_FUNC(sub_821939D4);
PPC_FUNC_IMPL(__imp__sub_821939D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821939D8"))) PPC_WEAK_FUNC(sub_821939D8);
PPC_FUNC_IMPL(__imp__sub_821939D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821939E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82193a80
	if (ctx.cr6.eq) goto loc_82193A80;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82193a5c
	if (ctx.cr0.lt) goto loc_82193A5C;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82193A20:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193a38
	if (ctx.cr6.eq) goto loc_82193A38;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82193A38;
	sub_82183E40(ctx, base);
loc_82193A38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193a50
	if (ctx.cr6.eq) goto loc_82193A50;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82193A50;
	sub_82183E40(ctx, base);
loc_82193A50:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bge 0x82193a20
	if (!ctx.cr0.lt) goto loc_82193A20;
loc_82193A5C:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82193a74
	if (ctx.cr6.eq) goto loc_82193A74;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82193A74;
	sub_82183E40(ctx, base);
loc_82193A74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82193A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82193970
	ctx.lr = 0x82193A88;
	sub_82193970(ctx, base);
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82193aa0
	if (ctx.cr6.eq) goto loc_82193AA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82193AA0;
	sub_82183E40(ctx, base);
loc_82193AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82193AAC"))) PPC_WEAK_FUNC(sub_82193AAC);
PPC_FUNC_IMPL(__imp__sub_82193AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193AB0"))) PPC_WEAK_FUNC(sub_82193AB0);
PPC_FUNC_IMPL(__imp__sub_82193AB0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193ad8
	if (ctx.cr6.eq) goto loc_82193AD8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821939d8
	ctx.lr = 0x82193AD8;
	sub_821939D8(ctx, base);
loc_82193AD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82193AF4"))) PPC_WEAK_FUNC(sub_82193AF4);
PPC_FUNC_IMPL(__imp__sub_82193AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193AF8"))) PPC_WEAK_FUNC(sub_82193AF8);
PPC_FUNC_IMPL(__imp__sub_82193AF8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// bge cr6,0x82193b24
	if (!ctx.cr6.lt) goto loc_82193B24;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82193bcc
	if (!ctx.cr6.eq) goto loc_82193BCC;
loc_82193B24:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821938f8
	ctx.lr = 0x82193B2C;
	sub_821938F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82193bc8
	if (ctx.cr6.lt) goto loc_82193BC8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82193bc8
	if (!ctx.cr6.gt) goto loc_82193BC8;
loc_82193B60:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82193b90
	if (!ctx.cr6.lt) goto loc_82193B90;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82193b94
	goto loc_82193B94;
loc_82193B90:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82193B94:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82193b60
	if (ctx.cr6.lt) goto loc_82193B60;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82193bc8
	if (!ctx.cr6.lt) goto loc_82193BC8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82193bc8
	if (!ctx.cr6.eq) goto loc_82193BC8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82193bcc
	if (!ctx.cr6.lt) goto loc_82193BCC;
loc_82193BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82193BCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193BDC"))) PPC_WEAK_FUNC(sub_82193BDC);
PPC_FUNC_IMPL(__imp__sub_82193BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193BE0"))) PPC_WEAK_FUNC(sub_82193BE0);
PPC_FUNC_IMPL(__imp__sub_82193BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82193BE8;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x8218c430
	ctx.lr = 0x82193C04;
	sub_8218C430(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82193d68
	if (ctx.cr6.eq) goto loc_82193D68;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r20,r31,-2
	ctx.r20.s64 = ctx.r31.s64 + -2;
	// ori r18,r11,57344
	ctx.r18.u64 = ctx.r11.u64 | 57344;
loc_82193C38:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x82193d68
	if (ctx.cr6.gt) goto loc_82193D68;
	// lhzu r31,2(r20)
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bge cr6,0x82193c64
	if (!ctx.cr6.lt) goto loc_82193C64;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82193d20
	if (!ctx.cr6.eq) goto loc_82193D20;
loc_82193C64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821938f8
	ctx.lr = 0x82193C70;
	sub_821938F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82193d14
	if (ctx.cr6.lt) goto loc_82193D14;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82193d14
	if (!ctx.cr6.gt) goto loc_82193D14;
loc_82193CA4:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82193cd4
	if (!ctx.cr6.lt) goto loc_82193CD4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82193cd8
	goto loc_82193CD8;
loc_82193CD4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82193CD8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82193ca4
	if (ctx.cr6.lt) goto loc_82193CA4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82193d14
	if (!ctx.cr6.lt) goto loc_82193D14;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82193d14
	if (!ctx.cr6.eq) goto loc_82193D14;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82193d14
	if (ctx.cr6.lt) goto loc_82193D14;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82193d20
	if (!ctx.cr6.eq) goto loc_82193D20;
loc_82193D14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82193af8
	ctx.lr = 0x82193D20;
	sub_82193AF8(ctx, base);
loc_82193D20:
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82193d38
	if (ctx.cr6.lt) goto loc_82193D38;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82193d4c
	goto loc_82193D4C;
loc_82193D38:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bne cr6,0x82193d80
	if (!ctx.cr6.eq) goto loc_82193D80;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82193D44:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82193D4C:
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82193d5c
	if (!ctx.cr6.gt) goto loc_82193D5C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82193D5C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r24
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82193c38
	if (ctx.cr6.lt) goto loc_82193C38;
loc_82193D68:
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// stw r26,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r26.u32);
	// stw r25,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_82193D80:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82193d44
	if (ctx.cr6.eq) goto loc_82193D44;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82193d4c
	goto loc_82193D4C;
}

__attribute__((alias("__imp__sub_82193D98"))) PPC_WEAK_FUNC(sub_82193D98);
PPC_FUNC_IMPL(__imp__sub_82193D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82193ea8
	if (!ctx.cr6.gt) goto loc_82193EA8;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
loc_82193DB8:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82193ea8
	if (ctx.cr6.eq) goto loc_82193EA8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82193e98
	if (!ctx.cr6.gt) goto loc_82193E98;
loc_82193DD8:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82193e04
	if (!ctx.cr6.lt) goto loc_82193E04;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82193e08
	goto loc_82193E08;
loc_82193E04:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82193E08:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82193dd8
	if (ctx.cr6.lt) goto loc_82193DD8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82193e98
	if (!ctx.cr6.lt) goto loc_82193E98;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82193e98
	if (!ctx.cr6.eq) goto loc_82193E98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82193e90
	if (ctx.cr6.eq) goto loc_82193E90;
	// bge cr6,0x82193eb8
	if (!ctx.cr6.lt) goto loc_82193EB8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82193e98
	if (!ctx.cr6.lt) goto loc_82193E98;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82193E60:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82193e98
	if (!ctx.cr6.eq) goto loc_82193E98;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82193e8c
	if (ctx.cr6.eq) goto loc_82193E8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82193e60
	if (ctx.cr6.lt) goto loc_82193E60;
	// b 0x82193e98
	goto loc_82193E98;
loc_82193E8C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82193E90:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82193ef8
	if (!ctx.cr6.lt) goto loc_82193EF8;
loc_82193E98:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82193db8
	if (ctx.cr6.lt) goto loc_82193DB8;
loc_82193EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82193EB8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82193e98
	if (ctx.cr0.lt) goto loc_82193E98;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82193ED0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82193e98
	if (!ctx.cr6.eq) goto loc_82193E98;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82193e90
	if (ctx.cr6.eq) goto loc_82193E90;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bge 0x82193ed0
	if (!ctx.cr0.lt) goto loc_82193ED0;
	// b 0x82193e98
	goto loc_82193E98;
loc_82193EF8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193F18"))) PPC_WEAK_FUNC(sub_82193F18);
PPC_FUNC_IMPL(__imp__sub_82193F18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82193F20;
	sub_82248788(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r9,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r9.u32);
	// lbz r9,-41(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -41);
	// lbz r31,-42(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -42);
	// lbz r30,-43(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -43);
	// lbz r29,-44(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + -44);
	// stw r10,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// stb r8,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r8.u8);
	// stb r7,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r7.u8);
	// stb r6,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r6.u8);
	// stb r28,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r28.u8);
	// lwz r8,-44(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// lbz r11,-47(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -47);
	// lbz r4,-46(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -46);
	// lbz r5,-45(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -45);
	// lbz r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -48);
	// stb r9,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r9.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r11.u8);
	// lbz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r4,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r4.u8);
	// stb r31,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r31.u8);
	// stb r30,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r30.u8);
	// stb r29,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r29.u8);
	// lwz r4,-48(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stb r5,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r5.u8);
	// stb r10,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r10.u8);
	// lwz r5,-44(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r7,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r7.u8);
	// stb r11,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r11.u8);
	// stb r8,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r8.u8);
	// stb r6,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r6.u8);
	// lwz r10,-44(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82193FD8"))) PPC_WEAK_FUNC(sub_82193FD8);
PPC_FUNC_IMPL(__imp__sub_82193FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82193FE0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82193f18
	ctx.lr = 0x82193FEC;
	sub_82193F18(ctx, base);
	// lhz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lhz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r4,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r4.u8);
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lhz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// stb r29,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r29.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r4,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r4.u16);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// sth r6,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r6.u16);
	// sth r5,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r5.u16);
	// ble cr6,0x821940cc
	if (!ctx.cr6.gt) goto loc_821940CC;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
loc_8219408C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lbz r6,89(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r5,91(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8219408c
	if (ctx.cr6.lt) goto loc_8219408C;
loc_821940CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821940D4"))) PPC_WEAK_FUNC(sub_821940D4);
PPC_FUNC_IMPL(__imp__sub_821940D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821940D8"))) PPC_WEAK_FUNC(sub_821940D8);
PPC_FUNC_IMPL(__imp__sub_821940D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821940E0;
	sub_82248750(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r5.u32);
	// stw r7,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r4,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r9,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r9.u32);
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r7,-201(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -201);
	// lbz r6,-202(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -202);
	// lbz r5,-203(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -203);
	// lbz r4,-204(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -204);
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// stb r7,-204(r1)
	PPC_STORE_U8(ctx.r1.u32 + -204, ctx.r7.u8);
	// stb r6,-203(r1)
	PPC_STORE_U8(ctx.r1.u32 + -203, ctx.r6.u8);
	// stb r5,-202(r1)
	PPC_STORE_U8(ctx.r1.u32 + -202, ctx.r5.u8);
	// stb r4,-201(r1)
	PPC_STORE_U8(ctx.r1.u32 + -201, ctx.r4.u8);
	// lbz r14,-179(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + -179);
	// lbz r25,-185(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + -185);
	// lbz r24,-186(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + -186);
	// lbz r11,-197(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -197);
	// lbz r10,-198(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -198);
	// lbz r7,-199(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -199);
	// lbz r6,-200(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -200);
	// lbz r5,-193(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -193);
	// lbz r4,-194(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -194);
	// lbz r31,-195(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -195);
	// lbz r30,-196(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -196);
	// lbz r29,-189(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + -189);
	// lbz r28,-190(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + -190);
	// lbz r27,-191(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + -191);
	// lbz r26,-192(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + -192);
	// lbz r23,-187(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + -187);
	// lbz r22,-188(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + -188);
	// lbz r21,-181(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + -181);
	// lbz r20,-182(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + -182);
	// lwz r17,-204(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lbz r19,-183(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + -183);
	// lbz r18,-184(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + -184);
	// lbz r16,-177(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + -177);
	// lbz r15,-178(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + -178);
	// stb r14,-208(r1)
	PPC_STORE_U8(ctx.r1.u32 + -208, ctx.r14.u8);
	// lbz r14,-180(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + -180);
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// stw r8,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// stb r11,-188(r1)
	PPC_STORE_U8(ctx.r1.u32 + -188, ctx.r11.u8);
	// stb r10,-187(r1)
	PPC_STORE_U8(ctx.r1.u32 + -187, ctx.r10.u8);
	// stb r7,-186(r1)
	PPC_STORE_U8(ctx.r1.u32 + -186, ctx.r7.u8);
	// stb r6,-185(r1)
	PPC_STORE_U8(ctx.r1.u32 + -185, ctx.r6.u8);
	// stb r5,-192(r1)
	PPC_STORE_U8(ctx.r1.u32 + -192, ctx.r5.u8);
	// stb r4,-191(r1)
	PPC_STORE_U8(ctx.r1.u32 + -191, ctx.r4.u8);
	// stb r31,-190(r1)
	PPC_STORE_U8(ctx.r1.u32 + -190, ctx.r31.u8);
	// stb r30,-189(r1)
	PPC_STORE_U8(ctx.r1.u32 + -189, ctx.r30.u8);
	// stb r29,-196(r1)
	PPC_STORE_U8(ctx.r1.u32 + -196, ctx.r29.u8);
	// stb r28,-195(r1)
	PPC_STORE_U8(ctx.r1.u32 + -195, ctx.r28.u8);
	// stb r27,-194(r1)
	PPC_STORE_U8(ctx.r1.u32 + -194, ctx.r27.u8);
	// stb r26,-193(r1)
	PPC_STORE_U8(ctx.r1.u32 + -193, ctx.r26.u8);
	// stb r25,-200(r1)
	PPC_STORE_U8(ctx.r1.u32 + -200, ctx.r25.u8);
	// stb r24,-199(r1)
	PPC_STORE_U8(ctx.r1.u32 + -199, ctx.r24.u8);
	// stb r23,-198(r1)
	PPC_STORE_U8(ctx.r1.u32 + -198, ctx.r23.u8);
	// stb r22,-197(r1)
	PPC_STORE_U8(ctx.r1.u32 + -197, ctx.r22.u8);
	// stb r21,-204(r1)
	PPC_STORE_U8(ctx.r1.u32 + -204, ctx.r21.u8);
	// stb r20,-203(r1)
	PPC_STORE_U8(ctx.r1.u32 + -203, ctx.r20.u8);
	// stb r19,-202(r1)
	PPC_STORE_U8(ctx.r1.u32 + -202, ctx.r19.u8);
	// stb r18,-201(r1)
	PPC_STORE_U8(ctx.r1.u32 + -201, ctx.r18.u8);
	// stw r17,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r17.u32);
	// stb r16,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r16.u8);
	// stb r15,-163(r1)
	PPC_STORE_U8(ctx.r1.u32 + -163, ctx.r15.u8);
	// lbz r11,-208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -208);
	// lbz r10,-173(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -173);
	// lbz r9,-174(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -174);
	// lbz r8,-175(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -175);
	// lbz r7,-176(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -176);
	// stb r11,-162(r1)
	PPC_STORE_U8(ctx.r1.u32 + -162, ctx.r11.u8);
	// lbz r6,-169(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -169);
	// lbz r5,-170(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -170);
	// lbz r4,-171(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -171);
	// lbz r11,-172(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -172);
	// lbz r31,-165(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -165);
	// lbz r30,-166(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -166);
	// lbz r29,-167(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + -167);
	// lbz r28,-168(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + -168);
	// lbz r27,-177(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + -177);
	// lbz r26,-178(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + -178);
	// lbz r25,-179(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + -179);
	// lbz r24,-180(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + -180);
	// lbz r23,-181(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + -181);
	// lbz r22,-182(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + -182);
	// lbz r21,-183(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + -183);
	// lbz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + -184);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r18,52(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stb r10,-168(r1)
	PPC_STORE_U8(ctx.r1.u32 + -168, ctx.r10.u8);
	// stb r23,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r23.u8);
	// stb r9,-167(r1)
	PPC_STORE_U8(ctx.r1.u32 + -167, ctx.r9.u8);
	// stw r20,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r20.u32);
	// stw r18,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r18.u32);
	// stb r8,-166(r1)
	PPC_STORE_U8(ctx.r1.u32 + -166, ctx.r8.u8);
	// stb r7,-165(r1)
	PPC_STORE_U8(ctx.r1.u32 + -165, ctx.r7.u8);
	// stb r6,-172(r1)
	PPC_STORE_U8(ctx.r1.u32 + -172, ctx.r6.u8);
	// stb r5,-171(r1)
	PPC_STORE_U8(ctx.r1.u32 + -171, ctx.r5.u8);
	// stb r4,-170(r1)
	PPC_STORE_U8(ctx.r1.u32 + -170, ctx.r4.u8);
	// stb r31,-176(r1)
	PPC_STORE_U8(ctx.r1.u32 + -176, ctx.r31.u8);
	// stb r30,-175(r1)
	PPC_STORE_U8(ctx.r1.u32 + -175, ctx.r30.u8);
	// stb r29,-174(r1)
	PPC_STORE_U8(ctx.r1.u32 + -174, ctx.r29.u8);
	// stb r27,-184(r1)
	PPC_STORE_U8(ctx.r1.u32 + -184, ctx.r27.u8);
	// stb r26,-183(r1)
	PPC_STORE_U8(ctx.r1.u32 + -183, ctx.r26.u8);
	// stb r25,-182(r1)
	PPC_STORE_U8(ctx.r1.u32 + -182, ctx.r25.u8);
	// stb r22,-159(r1)
	PPC_STORE_U8(ctx.r1.u32 + -159, ctx.r22.u8);
	// stb r21,-158(r1)
	PPC_STORE_U8(ctx.r1.u32 + -158, ctx.r21.u8);
	// stb r19,-157(r1)
	PPC_STORE_U8(ctx.r1.u32 + -157, ctx.r19.u8);
	// stb r14,-161(r1)
	PPC_STORE_U8(ctx.r1.u32 + -161, ctx.r14.u8);
	// stb r11,-169(r1)
	PPC_STORE_U8(ctx.r1.u32 + -169, ctx.r11.u8);
	// stb r28,-173(r1)
	PPC_STORE_U8(ctx.r1.u32 + -173, ctx.r28.u8);
	// stb r24,-181(r1)
	PPC_STORE_U8(ctx.r1.u32 + -181, ctx.r24.u8);
	// lwz r10,-188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r8,-196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r7,-200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r6,-204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lbz r31,-177(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -177);
	// lbz r30,-178(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -178);
	// lbz r29,-179(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + -179);
	// lbz r27,-180(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + -180);
	// lbz r26,-153(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + -153);
	// lbz r25,-154(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + -154);
	// lbz r23,-155(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + -155);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r5,-164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r11,-172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r24,-184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r24,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r24.u32);
	// stb r31,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r31.u8);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stb r30,-159(r1)
	PPC_STORE_U8(ctx.r1.u32 + -159, ctx.r30.u8);
	// stb r29,-158(r1)
	PPC_STORE_U8(ctx.r1.u32 + -158, ctx.r29.u8);
	// stb r27,-157(r1)
	PPC_STORE_U8(ctx.r1.u32 + -157, ctx.r27.u8);
	// stb r26,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r26.u8);
	// lbz r9,-156(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -156);
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stb r25,-163(r1)
	PPC_STORE_U8(ctx.r1.u32 + -163, ctx.r25.u8);
	// stb r23,-162(r1)
	PPC_STORE_U8(ctx.r1.u32 + -162, ctx.r23.u8);
	// stb r9,-161(r1)
	PPC_STORE_U8(ctx.r1.u32 + -161, ctx.r9.u8);
	// lwz r7,-164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219438C"))) PPC_WEAK_FUNC(sub_8219438C);
PPC_FUNC_IMPL(__imp__sub_8219438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194390"))) PPC_WEAK_FUNC(sub_82194390);
PPC_FUNC_IMPL(__imp__sub_82194390) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82193f18
	ctx.lr = 0x821943A8;
	sub_82193F18(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lbz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r11,r31,34
	ctx.r11.s64 = ctx.r31.s64 + 34;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lbz r11,19(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r4,23(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lbz r6,21(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r7,27(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lbz r6,26(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r9,25(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lbz r4,29(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// lbz r8,30(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// lbz r9,31(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r7,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r7.u16);
	// lbz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lbz r6,33(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// lbz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// lbz r11,35(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r9,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r9.u16);
	// lbz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r8,41(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r6.u16);
	// lbz r4,42(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// lbz r5,43(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// bl 0x821940d8
	ctx.lr = 0x821944DC;
	sub_821940D8(ctx, base);
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

__attribute__((alias("__imp__sub_821944F0"))) PPC_WEAK_FUNC(sub_821944F0);
PPC_FUNC_IMPL(__imp__sub_821944F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821944F8;
	sub_82248788(ctx, base);
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r29,2(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r7,-56(r1)
	PPC_STORE_U16(ctx.r1.u32 + -56, ctx.r7.u16);
	// lbz r31,-56(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -56);
	// lbz r30,-55(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -55);
	// sth r11,-64(r1)
	PPC_STORE_U16(ctx.r1.u32 + -64, ctx.r11.u16);
	// sth r10,-62(r1)
	PPC_STORE_U16(ctx.r1.u32 + -62, ctx.r10.u16);
	// sth r9,-60(r1)
	PPC_STORE_U16(ctx.r1.u32 + -60, ctx.r9.u16);
	// sth r8,-58(r1)
	PPC_STORE_U16(ctx.r1.u32 + -58, ctx.r8.u16);
	// sth r29,-56(r1)
	PPC_STORE_U16(ctx.r1.u32 + -56, ctx.r29.u16);
	// lbz r4,-61(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -61);
	// lbz r11,-62(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -62);
	// lbz r10,-59(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -59);
	// lbz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -60);
	// lbz r8,-57(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -57);
	// lbz r7,-58(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -58);
	// lbz r29,-56(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + -56);
	// lbz r6,-63(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -63);
	// lbz r5,-64(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -64);
	// lbz r28,-55(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + -55);
	// stb r5,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r5.u8);
	// stb r4,-58(r1)
	PPC_STORE_U8(ctx.r1.u32 + -58, ctx.r4.u8);
	// stb r11,-57(r1)
	PPC_STORE_U8(ctx.r1.u32 + -57, ctx.r11.u8);
	// stb r10,-60(r1)
	PPC_STORE_U8(ctx.r1.u32 + -60, ctx.r10.u8);
	// stb r9,-59(r1)
	PPC_STORE_U8(ctx.r1.u32 + -59, ctx.r9.u8);
	// stb r28,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r28.u8);
	// stb r30,-64(r1)
	PPC_STORE_U8(ctx.r1.u32 + -64, ctx.r30.u8);
	// stb r8,-62(r1)
	PPC_STORE_U8(ctx.r1.u32 + -62, ctx.r8.u8);
	// stb r7,-61(r1)
	PPC_STORE_U8(ctx.r1.u32 + -61, ctx.r7.u8);
	// stb r31,-63(r1)
	PPC_STORE_U8(ctx.r1.u32 + -63, ctx.r31.u8);
	// stb r29,-53(r1)
	PPC_STORE_U8(ctx.r1.u32 + -53, ctx.r29.u8);
	// lhz r5,-58(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -58);
	// lhz r4,-60(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -60);
	// lhz r11,-62(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -62);
	// lhz r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -64);
	// lhz r9,-54(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -54);
	// stb r6,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r6.u8);
	// lhz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -56);
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821945BC"))) PPC_WEAK_FUNC(sub_821945BC);
PPC_FUNC_IMPL(__imp__sub_821945BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821945C0"))) PPC_WEAK_FUNC(sub_821945C0);
PPC_FUNC_IMPL(__imp__sub_821945C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x821945C8;
	sub_8224875C(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x82194ae8
	if (!ctx.cr6.eq) goto loc_82194AE8;
	// lwz r31,88(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// li r18,-1
	ctx.r18.s64 = -1;
	// ori r22,r11,43690
	ctx.r22.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bgt cr6,0x8219462c
	if (ctx.cr6.gt) goto loc_8219462C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82194630
	if (!ctx.cr6.gt) goto loc_82194630;
loc_8219462C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82194630:
	// bl 0x82080d68
	ctx.lr = 0x82194634;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// beq cr6,0x82194670
	if (ctx.cr6.eq) goto loc_82194670;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82194668
	if (ctx.cr0.lt) goto loc_82194668;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219465C:
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// stwu r20,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219465c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219465C;
loc_82194668:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82194674
	goto loc_82194674;
loc_82194670:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82194674:
	// stw r31,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r31.u32);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82194930
	if (!ctx.cr6.gt) goto loc_82194930;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// addi r24,r23,92
	ctx.r24.s64 = ctx.r23.s64 + 92;
	// ori r19,r10,21845
	ctx.r19.u64 = ctx.r10.u64 | 21845;
	// lfs f29,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
loc_8219469C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lhz r8,42(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// fdivs f31,f29,f9
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f30,f29,f10
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// bgt cr6,0x82194718
	if (ctx.cr6.gt) goto loc_82194718;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8219471c
	goto loc_8219471C;
loc_82194718:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_8219471C:
	// bl 0x82183850
	ctx.lr = 0x82194720;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82194738
	if (ctx.cr6.eq) goto loc_82194738;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82194734;
	sub_82183448(ctx, base);
	// b 0x82194744
	goto loc_82194744;
loc_82194738:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82194744;
	sub_821845A0(ctx, base);
loc_82194744:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ble cr6,0x82194864
	if (!ctx.cr6.gt) goto loc_82194864;
	// addi r11,r28,-10
	ctx.r11.s64 = ctx.r28.s64 + -10;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
loc_82194774:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r9,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f2,128(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// sth r4,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r4.u16);
	// lhzu r7,16(r11)
	// sth r7,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r7.u16);
	// lhzu r7,2(r6)
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82194774
	if (ctx.cr6.lt) goto loc_82194774;
loc_82194864:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82194918
	if (ctx.cr6.eq) goto loc_82194918;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x82194888
	if (ctx.cr6.gt) goto loc_82194888;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8219488c
	goto loc_8219488C;
loc_82194888:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_8219488C:
	// bl 0x82183850
	ctx.lr = 0x82194890;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821948a8
	if (ctx.cr6.eq) goto loc_821948A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821948A4;
	sub_82183448(ctx, base);
	// b 0x821948b4
	goto loc_821948B4;
loc_821948A8:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821948B4;
	sub_821845A0(ctx, base);
loc_821948B4:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ble cr6,0x82194918
	if (!ctx.cr6.gt) goto loc_82194918;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821948E0:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lhz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lhzu r7,8(r10)
	// sth r7,8(r8)
	PPC_STORE_U16(ctx.r8.u32 + 8, ctx.r7.u16);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821948e0
	if (ctx.cr6.lt) goto loc_821948E0;
loc_82194918:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8219469c
	if (ctx.cr6.lt) goto loc_8219469C;
loc_82194930:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82193810
	ctx.lr = 0x82194938;
	sub_82193810(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r31,r11,57351
	ctx.r31.u64 = ctx.r11.u64 | 57351;
	// ori r3,r10,57363
	ctx.r3.u64 = ctx.r10.u64 | 57363;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r9,57352
	ctx.r11.u64 = ctx.r9.u64 | 57352;
	// ori r10,r8,57364
	ctx.r10.u64 = ctx.r8.u64 | 57364;
	// ori r9,r7,57353
	ctx.r9.u64 = ctx.r7.u64 | 57353;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ori r8,r6,57365
	ctx.r8.u64 = ctx.r6.u64 | 57365;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ori r7,r5,57354
	ctx.r7.u64 = ctx.r5.u64 | 57354;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ori r6,r4,57366
	ctx.r6.u64 = ctx.r4.u64 | 57366;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82198360
	ctx.lr = 0x8219499C;
	sub_82198360(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821983d0
	ctx.lr = 0x821949A4;
	sub_821983D0(ctx, base);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_821949B8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82194a34
	if (ctx.cr6.gt) goto loc_82194A34;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821949e4
	// bdzf 4*cr6+eq,0x821949ec
	// bne cr6,0x821949f4
	if (!ctx.cr6.eq) goto loc_821949F4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x821949f8
	goto loc_821949F8;
loc_821949E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x821949f8
	goto loc_821949F8;
loc_821949EC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x821949f8
	goto loc_821949F8;
loc_821949F4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821949F8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82194a08
	if (!ctx.cr6.eq) goto loc_82194A08;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x82194a34
	goto loc_82194A34;
loc_82194A08:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82194a18
	if (!ctx.cr6.eq) goto loc_82194A18;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82194a34
	goto loc_82194A34;
loc_82194A18:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82194a28
	if (!ctx.cr6.eq) goto loc_82194A28;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82194a34
	goto loc_82194A34;
loc_82194A28:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82194a34
	if (!ctx.cr6.eq) goto loc_82194A34;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82194A34:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// blt cr6,0x821949b8
	if (ctx.cr6.lt) goto loc_821949B8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82194A58:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82193af8
	ctx.lr = 0x82194A68;
	sub_82193AF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82193af8
	ctx.lr = 0x82194A78;
	sub_82193AF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82194ab0
	if (ctx.cr6.eq) goto loc_82194AB0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82194ab0
	if (ctx.cr6.eq) goto loc_82194AB0;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82194ab0
	if (ctx.cr6.eq) goto loc_82194AB0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82194AA0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82194aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82194AA0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82194AB0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82194a58
	if (!ctx.cr0.eq) goto loc_82194A58;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82194ae8
	if (ctx.cr6.eq) goto loc_82194AE8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r31,r17,8
	ctx.r31.s64 = ctx.r17.s64 + 8;
loc_82194AD0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82193af8
	ctx.lr = 0x82194AD8;
	sub_82193AF8(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// blt cr6,0x82194ad0
	if (ctx.cr6.lt) goto loc_82194AD0;
loc_82194AE8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82194AFC"))) PPC_WEAK_FUNC(sub_82194AFC);
PPC_FUNC_IMPL(__imp__sub_82194AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194B00"))) PPC_WEAK_FUNC(sub_82194B00);
PPC_FUNC_IMPL(__imp__sub_82194B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82194B08;
	sub_8224878C(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r30,2128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2128, ctx.r30.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c590
	ctx.lr = 0x82194B30;
	sub_8218C590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82194b54
	if (!ctx.cr6.eq) goto loc_82194B54;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82193be0
	ctx.lr = 0x82194B4C;
	sub_82193BE0(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82194B54:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82194B6C"))) PPC_WEAK_FUNC(sub_82194B6C);
PPC_FUNC_IMPL(__imp__sub_82194B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194B70"))) PPC_WEAK_FUNC(sub_82194B70);
PPC_FUNC_IMPL(__imp__sub_82194B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82194B78;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82194cc4
	if (ctx.cr6.eq) goto loc_82194CC4;
	// bl 0x82193fd8
	ctx.lr = 0x82194B90;
	sub_82193FD8(ctx, base);
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82194cc4
	if (!ctx.cr6.gt) goto loc_82194CC4;
	// addi r25,r26,92
	ctx.r25.s64 = ctx.r26.s64 + 92;
loc_82194BA4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82194cc4
	if (!ctx.cr6.lt) goto loc_82194CC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82194390
	ctx.lr = 0x82194BBC;
	sub_82194390(ctx, base);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82194c18
	if (!ctx.cr6.gt) goto loc_82194C18;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
loc_82194BE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821944f0
	ctx.lr = 0x82194BEC;
	sub_821944F0(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sthu r9,2(r30)
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82194be4
	if (ctx.cr6.lt) goto loc_82194BE4;
loc_82194C18:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82194cb0
	if (ctx.cr6.eq) goto loc_82194CB0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ble cr6,0x82194cb0
	if (!ctx.cr6.gt) goto loc_82194CB0;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_82194C40:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sthu r6,8(r9)
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// stb r4,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r4.u8);
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sthu r3,8(r11)
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82194c40
	if (ctx.cr6.lt) goto loc_82194C40;
loc_82194CB0:
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82194ba4
	if (ctx.cr6.lt) goto loc_82194BA4;
loc_82194CC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82194CCC"))) PPC_WEAK_FUNC(sub_82194CCC);
PPC_FUNC_IMPL(__imp__sub_82194CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194CD0"))) PPC_WEAK_FUNC(sub_82194CD0);
PPC_FUNC_IMPL(__imp__sub_82194CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r9,r10,-14444
	ctx.r9.s64 = ctx.r10.s64 + -14444;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194CFC"))) PPC_WEAK_FUNC(sub_82194CFC);
PPC_FUNC_IMPL(__imp__sub_82194CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194D00"))) PPC_WEAK_FUNC(sub_82194D00);
PPC_FUNC_IMPL(__imp__sub_82194D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82194d24
	if (!ctx.cr6.gt) goto loc_82194D24;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82194D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194D2C"))) PPC_WEAK_FUNC(sub_82194D2C);
PPC_FUNC_IMPL(__imp__sub_82194D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194D30"))) PPC_WEAK_FUNC(sub_82194D30);
PPC_FUNC_IMPL(__imp__sub_82194D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// twllei r9,0
	// divwu r7,r8,r9
	ctx.r7.u32 = ctx.r8.u32 / ctx.r9.u32;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194D68"))) PPC_WEAK_FUNC(sub_82194D68);
PPC_FUNC_IMPL(__imp__sub_82194D68) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82194dd4
	if (!ctx.cr6.lt) goto loc_82194DD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821847a8
	ctx.lr = 0x82194DA8;
	sub_821847A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// twllei r7,0
	// divwu r6,r8,r7
	ctx.r6.u32 = ctx.r8.u32 / ctx.r7.u32;
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r3,r4,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r4.s64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
loc_82194DD4:
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

__attribute__((alias("__imp__sub_82194DE8"))) PPC_WEAK_FUNC(sub_82194DE8);
PPC_FUNC_IMPL(__imp__sub_82194DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82194dfc
	if (ctx.cr6.lt) goto loc_82194DFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82194DFC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r9,0
	// divwu r6,r8,r9
	ctx.r6.u32 = ctx.r8.u32 / ctx.r9.u32;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194E2C"))) PPC_WEAK_FUNC(sub_82194E2C);
PPC_FUNC_IMPL(__imp__sub_82194E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194E30"))) PPC_WEAK_FUNC(sub_82194E30);
PPC_FUNC_IMPL(__imp__sub_82194E30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194E60"))) PPC_WEAK_FUNC(sub_82194E60);
PPC_FUNC_IMPL(__imp__sub_82194E60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82194e70
	if (!ctx.cr6.eq) goto loc_82194E70;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82194e74
	goto loc_82194E74;
loc_82194E70:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82194E74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82194e94
	if (ctx.cr6.eq) goto loc_82194E94;
loc_82194E7C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82194e7c
	if (!ctx.cr6.eq) goto loc_82194E7C;
loc_82194E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194E9C"))) PPC_WEAK_FUNC(sub_82194E9C);
PPC_FUNC_IMPL(__imp__sub_82194E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194EA0"))) PPC_WEAK_FUNC(sub_82194EA0);
PPC_FUNC_IMPL(__imp__sub_82194EA0) {
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
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82183850
	ctx.lr = 0x82194EC4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82194edc
	if (ctx.cr6.eq) goto loc_82194EDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82194ED8;
	sub_82183448(ctx, base);
	// b 0x82194ee8
	goto loc_82194EE8;
loc_82194EDC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82194EE8;
	sub_821845A0(ctx, base);
loc_82194EE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82194F0C"))) PPC_WEAK_FUNC(sub_82194F0C);
PPC_FUNC_IMPL(__imp__sub_82194F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194F10"))) PPC_WEAK_FUNC(sub_82194F10);
PPC_FUNC_IMPL(__imp__sub_82194F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82194F18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x82194f58
	if (ctx.cr6.eq) goto loc_82194F58;
loc_82194F40:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x82194F4C;
	sub_82183E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82194f40
	if (!ctx.cr6.eq) goto loc_82194F40;
loc_82194F58:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82194F64"))) PPC_WEAK_FUNC(sub_82194F64);
PPC_FUNC_IMPL(__imp__sub_82194F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

