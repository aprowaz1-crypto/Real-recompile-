#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8222C940"))) PPC_WEAK_FUNC(sub_8222C940);
PPC_FUNC_IMPL(__imp__sub_8222C940) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,1362
	ctx.r10.s64 = 1362;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222C98C;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c9c4
	if (ctx.cr6.eq) goto loc_8222C9C4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C9A4;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C9B4;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C9C4;
	sub_82227CC8(ctx, base);
loc_8222C9C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8222C9E0"))) PPC_WEAK_FUNC(sub_8222C9E0);
PPC_FUNC_IMPL(__imp__sub_8222C9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1363
	ctx.r11.s64 = 1363;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221608
	ctx.lr = 0x8222CA20;
	sub_82221608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CA30"))) PPC_WEAK_FUNC(sub_8222CA30);
PPC_FUNC_IMPL(__imp__sub_8222CA30) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8222c1d8
	sub_8222C1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CA38"))) PPC_WEAK_FUNC(sub_8222CA38);
PPC_FUNC_IMPL(__imp__sub_8222CA38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1376
	ctx.r10.s64 = 1376;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222CA84;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cabc
	if (ctx.cr6.eq) goto loc_8222CABC;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222CA9C;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222CAAC;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222CABC;
	sub_82227CC8(ctx, base);
loc_8222CABC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8222CAD8"))) PPC_WEAK_FUNC(sub_8222CAD8);
PPC_FUNC_IMPL(__imp__sub_8222CAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1377
	ctx.r11.s64 = 1377;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221608
	ctx.lr = 0x8222CB18;
	sub_82221608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CB28"))) PPC_WEAK_FUNC(sub_8222CB28);
PPC_FUNC_IMPL(__imp__sub_8222CB28) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,1378
	ctx.r10.s64 = 1378;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222CB74;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cbac
	if (ctx.cr6.eq) goto loc_8222CBAC;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222CB8C;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222CB9C;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222CBAC;
	sub_82227CC8(ctx, base);
loc_8222CBAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8222CBC8"))) PPC_WEAK_FUNC(sub_8222CBC8);
PPC_FUNC_IMPL(__imp__sub_8222CBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1379
	ctx.r11.s64 = 1379;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221608
	ctx.lr = 0x8222CC08;
	sub_82221608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CC18"))) PPC_WEAK_FUNC(sub_8222CC18);
PPC_FUNC_IMPL(__imp__sub_8222CC18) {
	PPC_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8222c1d8
	sub_8222C1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CC20"))) PPC_WEAK_FUNC(sub_8222CC20);
PPC_FUNC_IMPL(__imp__sub_8222CC20) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1536
	ctx.r10.s64 = 1536;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222CC6C;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cca4
	if (ctx.cr6.eq) goto loc_8222CCA4;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222CC84;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222CC94;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222CCA4;
	sub_82227CC8(ctx, base);
loc_8222CCA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8222CCC0"))) PPC_WEAK_FUNC(sub_8222CCC0);
PPC_FUNC_IMPL(__imp__sub_8222CCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1537
	ctx.r11.s64 = 1537;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221608
	ctx.lr = 0x8222CD00;
	sub_82221608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD10"))) PPC_WEAK_FUNC(sub_8222CD10);
PPC_FUNC_IMPL(__imp__sub_8222CD10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1552
	ctx.r10.s64 = 1552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222CD5C;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cdb4
	if (ctx.cr6.eq) goto loc_8222CDB4;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222CD74;
	sub_820EF498(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222CD84;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222CD94;
	sub_82227CC8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222CDA4;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222CDB4;
	sub_82227CC8(ctx, base);
loc_8222CDB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8222CDD0"))) PPC_WEAK_FUNC(sub_8222CDD0);
PPC_FUNC_IMPL(__imp__sub_8222CDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1553
	ctx.r11.s64 = 1553;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221608
	ctx.lr = 0x8222CE10;
	sub_82221608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CE20"))) PPC_WEAK_FUNC(sub_8222CE20);
PPC_FUNC_IMPL(__imp__sub_8222CE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222CE28;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222ce70
	if (!ctx.cr6.gt) goto loc_8222CE70;
loc_8222CE44:
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ea8
	ctx.lr = 0x8222CE54;
	sub_82227EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ce60
	if (ctx.cr6.eq) goto loc_8222CE60;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8222CE60:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222ce44
	if (ctx.cr6.lt) goto loc_8222CE44;
loc_8222CE70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222CE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r9,r29,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r29.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222CE98"))) PPC_WEAK_FUNC(sub_8222CE98);
PPC_FUNC_IMPL(__imp__sub_8222CE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222CEA0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x8222CEB8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222cf48
	if (!ctx.cr6.eq) goto loc_8222CF48;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,2308
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2308, ctx.xer);
	// bne cr6,0x8222cf14
	if (!ctx.cr6.eq) goto loc_8222CF14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222CEE0;
	sub_82227D48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2308
	ctx.r5.s64 = 2308;
	// bl 0x821847a8
	ctx.lr = 0x8222CEEC;
	sub_821847A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222CEF8;
	sub_82227D48(ctx, base);
	// addi r27,r3,456
	ctx.r27.s64 = ctx.r3.s64 + 456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227db0
	ctx.lr = 0x8222CF08;
	sub_82227DB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82227bd8
	ctx.lr = 0x8222CF10;
	sub_82227BD8(ctx, base);
	// b 0x8222cf18
	goto loc_8222CF18;
loc_8222CF14:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8222CF18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227f98
	ctx.lr = 0x8222CF24;
	sub_82227F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cf48
	if (ctx.cr6.eq) goto loc_8222CF48;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822225f8
	ctx.lr = 0x8222CF3C;
	sub_822225F8(ctx, base);
	// addi r10,r30,597
	ctx.r10.s64 = ctx.r30.s64 + 597;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u64);
loc_8222CF48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222CF54"))) PPC_WEAK_FUNC(sub_8222CF54);
PPC_FUNC_IMPL(__imp__sub_8222CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222CF58"))) PPC_WEAK_FUNC(sub_8222CF58);
PPC_FUNC_IMPL(__imp__sub_8222CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222CF60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8222CF74;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222cf94
	if (!ctx.cr6.eq) goto loc_8222CF94;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227e98
	ctx.lr = 0x8222CF94;
	sub_82227E98(ctx, base);
loc_8222CF94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222CFA0"))) PPC_WEAK_FUNC(sub_8222CFA0);
PPC_FUNC_IMPL(__imp__sub_8222CFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8222CFA8;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222d044
	if (!ctx.cr6.gt) goto loc_8222D044;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r27,2308
	ctx.r27.s64 = 2308;
loc_8222CFCC:
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82227d48
	ctx.lr = 0x8222CFE8;
	sub_82227D48(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8222d00c
	if (!ctx.cr6.eq) goto loc_8222D00C;
	// bl 0x822215b8
	ctx.lr = 0x8222D008;
	sub_822215B8(ctx, base);
	// b 0x8222d010
	goto loc_8222D010;
loc_8222D00C:
	// bl 0x82221608
	ctx.lr = 0x8222D010;
	sub_82221608(ctx, base);
loc_8222D010:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d028
	if (!ctx.cr6.eq) goto loc_8222D028;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D028:
	// bl 0x82227cb8
	ctx.lr = 0x8222D02C;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D034;
	sub_82227C80(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222cfcc
	if (ctx.cr6.lt) goto loc_8222CFCC;
loc_8222D044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8222D068"))) PPC_WEAK_FUNC(sub_8222D068);
PPC_FUNC_IMPL(__imp__sub_8222D068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D070;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82227f98
	ctx.lr = 0x8222D094;
	sub_82227F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d130
	if (!ctx.cr6.eq) goto loc_8222D130;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227d58
	ctx.lr = 0x8222D0AC;
	sub_82227D58(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x822225f8
	ctx.lr = 0x8222D0BC;
	sub_822225F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,597
	ctx.r9.s64 = ctx.r11.s64 + 597;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r7,r30
	PPC_STORE_U64(ctx.r7.u32 + ctx.r30.u32, ctx.r10.u64);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r4,512
	ctx.r6.s64 = ctx.r4.s64 + 512;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82227d48
	ctx.lr = 0x8222D0EC;
	sub_82227D48(ctx, base);
	// li r4,2308
	ctx.r4.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D108;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d120
	if (!ctx.cr6.eq) goto loc_8222D120;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D120:
	// bl 0x82227cb8
	ctx.lr = 0x8222D124;
	sub_82227CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D12C;
	sub_82227C80(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8222D130:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D154"))) PPC_WEAK_FUNC(sub_8222D154);
PPC_FUNC_IMPL(__imp__sub_8222D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D158"))) PPC_WEAK_FUNC(sub_8222D158);
PPC_FUNC_IMPL(__imp__sub_8222D158) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222D184;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222d1a4
	if (ctx.cr6.eq) goto loc_8222D1A4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222d1b0
	if (!ctx.cr6.eq) goto loc_8222D1B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8222d1a8
	goto loc_8222D1A8;
loc_8222D1A4:
	// li r4,4
	ctx.r4.s64 = 4;
loc_8222D1A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222D1B0;
	sub_820EF498(ctx, base);
loc_8222D1B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222D1C0;
	sub_82227CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8222D1DC"))) PPC_WEAK_FUNC(sub_8222D1DC);
PPC_FUNC_IMPL(__imp__sub_8222D1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D1E0"))) PPC_WEAK_FUNC(sub_8222D1E0);
PPC_FUNC_IMPL(__imp__sub_8222D1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D1E8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822285a8
	ctx.lr = 0x8222D204;
	sub_822285A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222d290
	if (ctx.cr6.eq) goto loc_8222D290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82228558
	ctx.lr = 0x8222D218;
	sub_82228558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228658
	ctx.lr = 0x8222D22C;
	sub_82228658(ctx, base);
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D248;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D268;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d280
	if (!ctx.cr6.eq) goto loc_8222D280;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D280:
	// bl 0x82227cb8
	ctx.lr = 0x8222D284;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D28C;
	sub_82227C80(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8222D290:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D2B4"))) PPC_WEAK_FUNC(sub_8222D2B4);
PPC_FUNC_IMPL(__imp__sub_8222D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D2B8"))) PPC_WEAK_FUNC(sub_8222D2B8);
PPC_FUNC_IMPL(__imp__sub_8222D2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D2C0;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227ea8
	ctx.lr = 0x8222D2E4;
	sub_82227EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222d368
	if (ctx.cr6.eq) goto loc_8222D368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82227ac0
	ctx.lr = 0x8222D2F4;
	sub_82227AC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228658
	ctx.lr = 0x8222D304;
	sub_82228658(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,512
	ctx.r10.s64 = ctx.r30.s64 + 512;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D320;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D340;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d358
	if (!ctx.cr6.eq) goto loc_8222D358;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D358:
	// bl 0x82227cb8
	ctx.lr = 0x8222D35C;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D364;
	sub_82227C80(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222D368:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D38C"))) PPC_WEAK_FUNC(sub_8222D38C);
PPC_FUNC_IMPL(__imp__sub_8222D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D390"))) PPC_WEAK_FUNC(sub_8222D390);
PPC_FUNC_IMPL(__imp__sub_8222D390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D398;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228558
	ctx.lr = 0x8222D3B0;
	sub_82228558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822286c8
	ctx.lr = 0x8222D3C4;
	sub_822286C8(ctx, base);
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D3E0;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D400;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d418
	if (!ctx.cr6.eq) goto loc_8222D418;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D418:
	// bl 0x82227cb8
	ctx.lr = 0x8222D41C;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D424;
	sub_82227C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D448"))) PPC_WEAK_FUNC(sub_8222D448);
PPC_FUNC_IMPL(__imp__sub_8222D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222D450;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82228558
	ctx.lr = 0x8222D464;
	sub_82228558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227e98
	ctx.lr = 0x8222D478;
	sub_82227E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227e70
	ctx.lr = 0x8222D484;
	sub_82227E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,544
	ctx.r10.s64 = ctx.r31.s64 + 544;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D4BC;
	sub_822215B8(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222D4E0"))) PPC_WEAK_FUNC(sub_8222D4E0);
PPC_FUNC_IMPL(__imp__sub_8222D4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D4E8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227ea8
	ctx.lr = 0x8222D50C;
	sub_82227EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222d56c
	if (ctx.cr6.eq) goto loc_8222D56C;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227e98
	ctx.lr = 0x8222D524;
	sub_82227E98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227e70
	ctx.lr = 0x8222D530;
	sub_82227E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,544
	ctx.r10.s64 = ctx.r30.s64 + 544;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D568;
	sub_822215B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222D56C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D590"))) PPC_WEAK_FUNC(sub_8222D590);
PPC_FUNC_IMPL(__imp__sub_8222D590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222D598;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228558
	ctx.lr = 0x8222D5AC;
	sub_82228558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82227e98
	ctx.lr = 0x8222D5C0;
	sub_82227E98(ctx, base);
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D5DC;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D5FC;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d614
	if (!ctx.cr6.eq) goto loc_8222D614;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D614:
	// bl 0x82227cb8
	ctx.lr = 0x8222D618;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D620;
	sub_82227C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222D644"))) PPC_WEAK_FUNC(sub_8222D644);
PPC_FUNC_IMPL(__imp__sub_8222D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D648"))) PPC_WEAK_FUNC(sub_8222D648);
PPC_FUNC_IMPL(__imp__sub_8222D648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222D650;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227ea8
	ctx.lr = 0x8222D674;
	sub_82227EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222d6f0
	if (ctx.cr6.eq) goto loc_8222D6F0;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227e98
	ctx.lr = 0x8222D68C;
	sub_82227E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,512
	ctx.r10.s64 = ctx.r30.s64 + 512;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D6A8;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D6C8;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d6e0
	if (!ctx.cr6.eq) goto loc_8222D6E0;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D6E0:
	// bl 0x82227cb8
	ctx.lr = 0x8222D6E4;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D6EC;
	sub_82227C80(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222D6F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222D714"))) PPC_WEAK_FUNC(sub_8222D714);
PPC_FUNC_IMPL(__imp__sub_8222D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D718"))) PPC_WEAK_FUNC(sub_8222D718);
PPC_FUNC_IMPL(__imp__sub_8222D718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222D720;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82228558
	ctx.lr = 0x8222D734;
	sub_82228558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228728
	ctx.lr = 0x8222D748;
	sub_82228728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227e70
	ctx.lr = 0x8222D754;
	sub_82227E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,544
	ctx.r10.s64 = ctx.r31.s64 + 544;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D78C;
	sub_822215B8(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222D7B0"))) PPC_WEAK_FUNC(sub_8222D7B0);
PPC_FUNC_IMPL(__imp__sub_8222D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222D7B8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d864
	if (!ctx.cr6.eq) goto loc_8222D864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82228558
	ctx.lr = 0x8222D7EC;
	sub_82228558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228728
	ctx.lr = 0x8222D800;
	sub_82228728(ctx, base);
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D81C;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D83C;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d854
	if (!ctx.cr6.eq) goto loc_8222D854;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D854:
	// bl 0x82227cb8
	ctx.lr = 0x8222D858;
	sub_82227CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D860;
	sub_82227C80(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8222D864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222D888"))) PPC_WEAK_FUNC(sub_8222D888);
PPC_FUNC_IMPL(__imp__sub_8222D888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222D890;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8222D8A0;
	sub_8215BD60(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222da98
	if (!ctx.cr6.eq) goto loc_8222DA98;
	// bl 0x8215bd60
	ctx.lr = 0x8222D8B0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222da98
	if (!ctx.cr6.eq) goto loc_8222DA98;
	// bl 0x8215bd60
	ctx.lr = 0x8222D8C0;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222d990
	if (ctx.cr6.eq) goto loc_8222D990;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222d990
	if (!ctx.cr6.gt) goto loc_8222D990;
loc_8222D8DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227f98
	ctx.lr = 0x8222D8E8;
	sub_82227F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222d904
	if (ctx.cr6.eq) goto loc_8222D904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227fd8
	ctx.lr = 0x8222D8FC;
	sub_82227FD8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222d918
	if (ctx.cr6.eq) goto loc_8222D918;
loc_8222D904:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222d8dc
	if (ctx.cr6.lt) goto loc_8222D8DC;
	// b 0x8222d990
	goto loc_8222D990;
loc_8222D918:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8222d990
	if (ctx.cr6.eq) goto loc_8222D990;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D92C;
	sub_82227D48(ctx, base);
	// bl 0x82228178
	ctx.lr = 0x8222D930;
	sub_82228178(ctx, base);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227d48
	ctx.lr = 0x8222D94C;
	sub_82227D48(ctx, base);
	// li r9,2308
	ctx.r9.s64 = 2308;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x8222D96C;
	sub_822215B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8222d984
	if (!ctx.cr6.eq) goto loc_8222D984;
	// li r5,3
	ctx.r5.s64 = 3;
loc_8222D984:
	// bl 0x82227cb8
	ctx.lr = 0x8222D988;
	sub_82227CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222D990;
	sub_82227C80(ctx, base);
loc_8222D990:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8222d9c0
	if (!ctx.cr6.lt) goto loc_8222D9C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227e70
	ctx.lr = 0x8222D9A4;
	sub_82227E70(ctx, base);
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bne cr6,0x8222d9c0
	if (!ctx.cr6.eq) goto loc_8222D9C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222D9C0:
	// bl 0x8215bd60
	ctx.lr = 0x8222D9C4;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222da98
	if (!ctx.cr6.eq) goto loc_8222DA98;
	// bl 0x82354838
	ctx.lr = 0x8222D9D4;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222da88
	if (ctx.cr6.eq) goto loc_8222DA88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579a0
	ctx.lr = 0x8222D9E8;
	sub_823579A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823558e0
	ctx.lr = 0x8222D9F8;
	sub_823558E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222da80
	if (ctx.cr6.eq) goto loc_8222DA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823548c8
	ctx.lr = 0x8222DA08;
	sub_823548C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8235a590
	ctx.lr = 0x8222DA10;
	sub_8235A590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222da80
	if (!ctx.cr6.eq) goto loc_8222DA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823548c8
	ctx.lr = 0x8222DA20;
	sub_823548C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82356608
	ctx.lr = 0x8222DA30;
	sub_82356608(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8222DA38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222da5c
	if (ctx.cr6.eq) goto loc_8222DA5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222da38
	if (ctx.cr6.eq) goto loc_8222DA38;
loc_8222DA5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222da80
	if (ctx.cr6.eq) goto loc_8222DA80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356608
	ctx.lr = 0x8222DA6C;
	sub_82356608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82228440
	ctx.lr = 0x8222DA80;
	sub_82228440(ctx, base);
loc_8222DA80:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579f8
	ctx.lr = 0x8222DA88;
	sub_823579F8(ctx, base);
loc_8222DA88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ca8
	ctx.lr = 0x8222DA90;
	sub_82227CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222DA98;
	sub_82227C80(ctx, base);
loc_8222DA98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222DAA0"))) PPC_WEAK_FUNC(sub_8222DAA0);
PPC_FUNC_IMPL(__imp__sub_8222DAA0) {
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
	ctx.lr = 0x8222DAB0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8222dac8
	if (ctx.cr6.eq) goto loc_8222DAC8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x8222DAC4;
	sub_82183448(ctx, base);
	// b 0x8222dad0
	goto loc_8222DAD0;
loc_8222DAC8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8222DAD0;
	sub_821845A0(ctx, base);
loc_8222DAD0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8222db08
	if (ctx.cr6.eq) goto loc_8222DB08;
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
	// stw r3,-720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222DB08:
	// stw r11,-720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -720, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222DB1C"))) PPC_WEAK_FUNC(sub_8222DB1C);
PPC_FUNC_IMPL(__imp__sub_8222DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DB20"))) PPC_WEAK_FUNC(sub_8222DB20);
PPC_FUNC_IMPL(__imp__sub_8222DB20) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x8222DB50;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222dc40
	if (ctx.cr6.eq) goto loc_8222DC40;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x8222dc40
	if (ctx.cr6.gt) goto loc_8222DC40;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222dba0
	// bdzf 4*cr6+eq,0x8222dbc4
	// bdzf 4*cr6+eq,0x8222dbe8
	// bdzf 4*cr6+eq,0x8222dc0c
	// bne cr6,0x8222dc30
	if (!ctx.cr6.eq) goto loc_8222DC30;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222dc40
	if (!ctx.cr6.eq) goto loc_8222DC40;
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
loc_8222DBA0:
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8222dc40
	if (ctx.cr6.gt) goto loc_8222DC40;
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
loc_8222DBC4:
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8222dc40
	if (ctx.cr6.gt) goto loc_8222DC40;
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
loc_8222DBE8:
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8222dc40
	if (ctx.cr6.gt) goto loc_8222DC40;
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
loc_8222DC0C:
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8222dc40
	if (ctx.cr6.gt) goto loc_8222DC40;
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
loc_8222DC30:
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8222dc44
	if (!ctx.cr6.gt) goto loc_8222DC44;
loc_8222DC40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DC44:
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

__attribute__((alias("__imp__sub_8222DC58"))) PPC_WEAK_FUNC(sub_8222DC58);
PPC_FUNC_IMPL(__imp__sub_8222DC58) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222dca4
	if (ctx.cr6.eq) goto loc_8222DCA4;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82170998
	ctx.lr = 0x8222DC94;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dca4
	if (ctx.cr6.eq) goto loc_8222DCA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222dcdc
	goto loc_8222DCDC;
loc_8222DCA4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x8222DCC0;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222dcd8
	if (ctx.cr6.eq) goto loc_8222DCD8;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222dcdc
	if (!ctx.cr6.eq) goto loc_8222DCDC;
loc_8222DCD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DCDC:
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

__attribute__((alias("__imp__sub_8222DCF4"))) PPC_WEAK_FUNC(sub_8222DCF4);
PPC_FUNC_IMPL(__imp__sub_8222DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DCF8"))) PPC_WEAK_FUNC(sub_8222DCF8);
PPC_FUNC_IMPL(__imp__sub_8222DCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222DD00;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222DD10;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dd60
	if (ctx.cr6.eq) goto loc_8222DD60;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222dd60
	if (ctx.cr6.eq) goto loc_8222DD60;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222DD40;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dd60
	if (ctx.cr6.eq) goto loc_8222DD60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222DD54;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8222dd64
	if (!ctx.cr6.eq) goto loc_8222DD64;
loc_8222DD60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222DD6C"))) PPC_WEAK_FUNC(sub_8222DD6C);
PPC_FUNC_IMPL(__imp__sub_8222DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DD70"))) PPC_WEAK_FUNC(sub_8222DD70);
PPC_FUNC_IMPL(__imp__sub_8222DD70) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8222dd94
	if (ctx.cr6.lt) goto loc_8222DD94;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// blt cr6,0x8222ddac
	if (ctx.cr6.lt) goto loc_8222DDAC;
loc_8222DD94:
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
loc_8222DDAC:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1124);
	// bl 0x82236360
	ctx.lr = 0x8222DDC4;
	sub_82236360(ctx, base);
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222dd94
	if (!ctx.cr6.lt) goto loc_8222DD94;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
}

__attribute__((alias("__imp__sub_8222DDE8"))) PPC_WEAK_FUNC(sub_8222DDE8);
PPC_FUNC_IMPL(__imp__sub_8222DDE8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82248f70
	ctx.lr = 0x8222DE1C;
	sub_82248F70(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82084690
	ctx.lr = 0x8222DE30;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ded0
	if (ctx.cr6.eq) goto loc_8222DED0;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x8222ded0
	if (ctx.cr6.gt) goto loc_8222DED0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222de70
	// bdzf 4*cr6+eq,0x8222de84
	// bdzf 4*cr6+eq,0x8222de98
	// bdzf 4*cr6+eq,0x8222deac
	// bne cr6,0x8222dec0
	if (!ctx.cr6.eq) goto loc_8222DEC0;
	// lbz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222ded0
	if (!ctx.cr6.eq) goto loc_8222DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222ded4
	goto loc_8222DED4;
loc_8222DE70:
	// lbz r10,183(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8222ded0
	if (ctx.cr6.gt) goto loc_8222DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222ded4
	goto loc_8222DED4;
loc_8222DE84:
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8222ded0
	if (ctx.cr6.gt) goto loc_8222DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222ded4
	goto loc_8222DED4;
loc_8222DE98:
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8222ded0
	if (ctx.cr6.gt) goto loc_8222DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222ded4
	goto loc_8222DED4;
loc_8222DEAC:
	// lbz r10,186(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8222ded0
	if (ctx.cr6.gt) goto loc_8222DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222ded4
	goto loc_8222DED4;
loc_8222DEC0:
	// lbz r10,187(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 187);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8222ded4
	if (!ctx.cr6.gt) goto loc_8222DED4;
loc_8222DED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DED4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8222DEEC"))) PPC_WEAK_FUNC(sub_8222DEEC);
PPC_FUNC_IMPL(__imp__sub_8222DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DEF0"))) PPC_WEAK_FUNC(sub_8222DEF0);
PPC_FUNC_IMPL(__imp__sub_8222DEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,15472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222df50
	if (ctx.cr6.eq) goto loc_8222DF50;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// ori r8,r10,34464
	ctx.r8.u64 = ctx.r10.u64 | 34464;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82170998
	ctx.lr = 0x8222DF30;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222df50
	if (ctx.cr6.eq) goto loc_8222DF50;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8222DF50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82248f70
	ctx.lr = 0x8222DF68;
	sub_82248F70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8eb0
	ctx.lr = 0x8222DF74;
	sub_820B8EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222df8c
	if (ctx.cr6.eq) goto loc_8222DF8C;
	// lbz r10,193(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 193);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222df90
	if (!ctx.cr6.eq) goto loc_8222DF90;
loc_8222DF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DF90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222DFA4"))) PPC_WEAK_FUNC(sub_8222DFA4);
PPC_FUNC_IMPL(__imp__sub_8222DFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DFA8"))) PPC_WEAK_FUNC(sub_8222DFA8);
PPC_FUNC_IMPL(__imp__sub_8222DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222DFB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222DFC0;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e018
	if (ctx.cr6.eq) goto loc_8222E018;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222e018
	if (ctx.cr6.eq) goto loc_8222E018;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// ori r9,r11,34464
	ctx.r9.u64 = ctx.r11.u64 | 34464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222DFF8;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e018
	if (ctx.cr6.eq) goto loc_8222E018;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222E00C;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8222e01c
	if (!ctx.cr6.eq) goto loc_8222E01C;
loc_8222E018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222E01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222E024"))) PPC_WEAK_FUNC(sub_8222E024);
PPC_FUNC_IMPL(__imp__sub_8222E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E028"))) PPC_WEAK_FUNC(sub_8222E028);
PPC_FUNC_IMPL(__imp__sub_8222E028) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_8222E050:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8222e070
	if (ctx.cr6.eq) goto loc_8222E070;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8222e050
	if (ctx.cr6.lt) goto loc_8222E050;
	// blr 
	return;
loc_8222E070:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222E080"))) PPC_WEAK_FUNC(sub_8222E080);
PPC_FUNC_IMPL(__imp__sub_8222E080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222E094"))) PPC_WEAK_FUNC(sub_8222E094);
PPC_FUNC_IMPL(__imp__sub_8222E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E098"))) PPC_WEAK_FUNC(sub_8222E098);
PPC_FUNC_IMPL(__imp__sub_8222E098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222E0A8"))) PPC_WEAK_FUNC(sub_8222E0A8);
PPC_FUNC_IMPL(__imp__sub_8222E0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222E0B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222e1d0
	if (ctx.cr6.eq) goto loc_8222E1D0;
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// blt cr6,0x8222e10c
	if (ctx.cr6.lt) goto loc_8222E10C;
	// cmpwi cr6,r3,1029
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1029, ctx.xer);
	// bgt cr6,0x8222e10c
	if (ctx.cr6.gt) goto loc_8222E10C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e1d0
	if (ctx.cr6.eq) goto loc_8222E1D0;
	// addi r4,r31,-950
	ctx.r4.s64 = ctx.r31.s64 + -950;
	// bl 0x82170978
	ctx.lr = 0x8222E104;
	sub_82170978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E10C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222e134
	if (!ctx.cr6.lt) goto loc_8222E134;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222e134
	if (ctx.cr6.eq) goto loc_8222E134;
loc_8222E128:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E134:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222e16c
	if (ctx.cr6.eq) goto loc_8222E16C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170998
	ctx.lr = 0x8222E150;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e16c
	if (ctx.cr6.eq) goto loc_8222E16C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222E164;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e128
	if (!ctx.cr6.eq) goto loc_8222E128;
loc_8222E16C:
	// cmpwi cr6,r31,1030
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1030, ctx.xer);
	// blt cr6,0x8222e198
	if (ctx.cr6.lt) goto loc_8222E198;
	// cmpwi cr6,r31,1039
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1039, ctx.xer);
	// bgt cr6,0x8222e198
	if (ctx.cr6.gt) goto loc_8222E198;
	// addi r4,r31,-1020
	ctx.r4.s64 = ctx.r31.s64 + -1020;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222e1d0
	if (ctx.cr6.eq) goto loc_8222E1D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170980
	ctx.lr = 0x8222E190;
	sub_82170980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E198:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8222e1d0
	if (ctx.cr6.lt) goto loc_8222E1D0;
	// cmpwi cr6,r31,88
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 88, ctx.xer);
	// bge cr6,0x8222e1d0
	if (!ctx.cr6.lt) goto loc_8222E1D0;
	// cmplwi cr6,r31,88
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 88, ctx.xer);
	// bge cr6,0x8222e1d0
	if (!ctx.cr6.lt) goto loc_8222E1D0;
	// bl 0x82163ee8
	ctx.lr = 0x8222E1B4;
	sub_82163EE8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// and r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 & ctx.r29.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222E1DC"))) PPC_WEAK_FUNC(sub_8222E1DC);
PPC_FUNC_IMPL(__imp__sub_8222E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E1E0"))) PPC_WEAK_FUNC(sub_8222E1E0);
PPC_FUNC_IMPL(__imp__sub_8222E1E0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8222e25c
	if (ctx.cr6.lt) goto loc_8222E25C;
	// cmplwi cr6,r3,88
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 88, ctx.xer);
	// bge cr6,0x8222e25c
	if (!ctx.cr6.lt) goto loc_8222E25C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222e25c
	if (ctx.cr6.eq) goto loc_8222E25C;
	// bl 0x8222e0a8
	ctx.lr = 0x8222E22C;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e25c
	if (!ctx.cr6.eq) goto loc_8222E25C;
	// bl 0x82163ee8
	ctx.lr = 0x8222E238;
	sub_82163EE8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// bl 0x8222ef88
	ctx.lr = 0x8222E250;
	sub_8222EF88(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x8222E254;
	sub_82163EE8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_8222E25C:
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

__attribute__((alias("__imp__sub_8222E274"))) PPC_WEAK_FUNC(sub_8222E274);
PPC_FUNC_IMPL(__imp__sub_8222E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E278"))) PPC_WEAK_FUNC(sub_8222E278);
PPC_FUNC_IMPL(__imp__sub_8222E278) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222E294:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e0a8
	ctx.lr = 0x8222E2A0;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e2bc
	if (ctx.cr6.eq) goto loc_8222E2BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e0a8
	ctx.lr = 0x8222E2B4;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e2e4
	if (ctx.cr6.eq) goto loc_8222E2E4;
loc_8222E2BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,88
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 88, ctx.xer);
	// blt cr6,0x8222e294
	if (ctx.cr6.lt) goto loc_8222E294;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222E2CC:
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
loc_8222E2E4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e1e0
	ctx.lr = 0x8222E2F0;
	sub_8222E1E0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e308
	if (!ctx.cr6.eq) goto loc_8222E308;
loc_8222E300:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222e330
	goto loc_8222E330;
loc_8222E308:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8222e300
	if (ctx.cr6.lt) goto loc_8222E300;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8222e300
	if (!ctx.cr6.lt) goto loc_8222E300;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_8222E330:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8222E348;
	sub_8215BD08(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
	// b 0x8222e2cc
	goto loc_8222E2CC;
}

__attribute__((alias("__imp__sub_8222E35C"))) PPC_WEAK_FUNC(sub_8222E35C);
PPC_FUNC_IMPL(__imp__sub_8222E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E360"))) PPC_WEAK_FUNC(sub_8222E360);
PPC_FUNC_IMPL(__imp__sub_8222E360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222E368;
	sub_8224878C(ctx, base);
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
	// bl 0x8222dc58
	ctx.lr = 0x8222E37C;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e398
	if (ctx.cr6.eq) goto loc_8222E398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dcf8
	ctx.lr = 0x8222E390;
	sub_8222DCF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E398:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222dd70
	ctx.lr = 0x8222E3B8;
	sub_8222DD70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e3c8
	if (!ctx.cr6.eq) goto loc_8222E3C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222E3C8:
	// bl 0x82163ee8
	ctx.lr = 0x8222E3CC;
	sub_82163EE8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r9,r9,200
	ctx.r9.s64 = ctx.r9.s64 * 200;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 88);
	// and r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 & ctx.r29.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222E3FC"))) PPC_WEAK_FUNC(sub_8222E3FC);
PPC_FUNC_IMPL(__imp__sub_8222E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E400"))) PPC_WEAK_FUNC(sub_8222E400);
PPC_FUNC_IMPL(__imp__sub_8222E400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222E408;
	sub_8224878C(ctx, base);
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
	// bl 0x8222dc58
	ctx.lr = 0x8222E41C;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e480
	if (!ctx.cr6.eq) goto loc_8222E480;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222dd70
	ctx.lr = 0x8222E444;
	sub_8222DD70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e480
	if (ctx.cr6.eq) goto loc_8222E480;
	// bl 0x82163ee8
	ctx.lr = 0x8222E450;
	sub_82163EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 * 200;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lbz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stb r7,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r7.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222E478;
	sub_82163EE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_8222E480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222E488"))) PPC_WEAK_FUNC(sub_8222E488);
PPC_FUNC_IMPL(__imp__sub_8222E488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8222E490;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r9,30500
	ctx.r9.s64 = 30500;
	// addi r8,r11,9652
	ctx.r8.s64 = ctx.r11.s64 + 9652;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r18,1124(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1124);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r10,-8540(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8540);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r17,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r17.u32);
	// addi r15,r10,1696
	ctx.r15.s64 = ctx.r10.s64 + 1696;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8222E4D8;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1792
	ctx.r4.s64 = 1792;
	// addi r14,r11,-712
	ctx.r14.s64 = ctx.r11.s64 + -712;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822aa648
	ctx.lr = 0x8222E4F4;
	sub_822AA648(ctx, base);
	// lis r27,15
	ctx.r27.s64 = 983040;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r27,26960
	ctx.r27.u64 = ctx.r27.u64 | 26960;
	// lis r19,-32180
	ctx.r19.s64 = -2108948480;
	// ori r20,r11,61424
	ctx.r20.u64 = ctx.r11.u64 | 61424;
loc_8222E510:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822361c8
	ctx.lr = 0x8222E528;
	sub_822361C8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82234518
	ctx.lr = 0x8222E530;
	sub_82234518(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e7f8
	if (ctx.cr6.eq) goto loc_8222E7F8;
	// rlwinm r11,r23,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFFFF00;
	// add r22,r11,r14
	ctx.r22.u64 = ctx.r11.u64 + ctx.r14.u64;
loc_8222E548:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82236148
	ctx.lr = 0x8222E554;
	sub_82236148(ctx, base);
	// lwz r11,15472(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15472);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e578
	if (ctx.cr6.eq) goto loc_8222E578;
	// add r4,r27,r3
	ctx.r4.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82170998
	ctx.lr = 0x8222E570;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e7ec
	if (!ctx.cr6.eq) goto loc_8222E7EC;
loc_8222E578:
	// lwz r11,-8540(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8540);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222E590;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e5a4
	if (ctx.cr6.eq) goto loc_8222E5A4;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e7ec
	if (!ctx.cr6.eq) goto loc_8222E7EC;
loc_8222E5A4:
	// lwz r3,15472(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e5c0
	if (ctx.cr6.eq) goto loc_8222E5C0;
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x82170998
	ctx.lr = 0x8222E5B8;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e5ec
	if (!ctx.cr6.eq) goto loc_8222E5EC;
loc_8222E5C0:
	// lwz r11,-8540(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8540);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222E5D8;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e648
	if (ctx.cr6.eq) goto loc_8222E648;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e648
	if (ctx.cr6.eq) goto loc_8222E648;
loc_8222E5EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222E5F8;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e608
	if (!ctx.cr6.eq) goto loc_8222E608;
loc_8222E600:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222e690
	goto loc_8222E690;
loc_8222E608:
	// lwz r30,15472(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222e600
	if (ctx.cr6.eq) goto loc_8222E600;
	// add r31,r27,r29
	ctx.r31.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222E624;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e600
	if (ctx.cr6.eq) goto loc_8222E600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222E638;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e600
	if (ctx.cr6.eq) goto loc_8222E600;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x8222e690
	goto loc_8222E690;
loc_8222E648:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222e7ec
	if (ctx.cr6.lt) goto loc_8222E7EC;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8222e7ec
	if (!ctx.cr6.lt) goto loc_8222E7EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,1124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222E66C;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222e7ec
	if (!ctx.cr6.lt) goto loc_8222E7EC;
	// bl 0x82163ee8
	ctx.lr = 0x8222E67C;
	sub_82163EE8(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_8222E690:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222e7ec
	if (ctx.cr6.eq) goto loc_8222E7EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222E6A4;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e708
	if (ctx.cr6.eq) goto loc_8222E708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222E6B8;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e6c8
	if (!ctx.cr6.eq) goto loc_8222E6C8;
loc_8222E6C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222e750
	goto loc_8222E750;
loc_8222E6C8:
	// lwz r30,15472(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222e6c0
	if (ctx.cr6.eq) goto loc_8222E6C0;
	// add r31,r27,r29
	ctx.r31.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222E6E4;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e6c0
	if (ctx.cr6.eq) goto loc_8222E6C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222E6F8;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e6c0
	if (ctx.cr6.eq) goto loc_8222E6C0;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x8222e750
	goto loc_8222E750;
loc_8222E708:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222e758
	if (ctx.cr6.lt) goto loc_8222E758;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8222e758
	if (!ctx.cr6.lt) goto loc_8222E758;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,1124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222E72C;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222e758
	if (!ctx.cr6.lt) goto loc_8222E758;
	// bl 0x82163ee8
	ctx.lr = 0x8222E73C;
	sub_82163EE8(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_8222E750:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222e7ec
	if (!ctx.cr6.eq) goto loc_8222E7EC;
loc_8222E758:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222E764;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222e7c0
	if (!ctx.cr6.eq) goto loc_8222E7C0;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222e7c0
	if (ctx.cr6.lt) goto loc_8222E7C0;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8222e7c0
	if (!ctx.cr6.lt) goto loc_8222E7C0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,1124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222E790;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222e7c0
	if (!ctx.cr6.lt) goto loc_8222E7C0;
	// bl 0x82163ee8
	ctx.lr = 0x8222E7A0;
	sub_82163EE8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222E7BC;
	sub_82163EE8(ctx, base);
	// stw r17,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r17.u32);
loc_8222E7C0:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x820c7d98
	ctx.lr = 0x8222E7DC;
	sub_820C7D98(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,256
	ctx.r22.s64 = ctx.r22.s64 + 256;
	// cmplwi cr6,r23,7
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 7, ctx.xer);
	// bge cr6,0x8222e814
	if (!ctx.cr6.lt) goto loc_8222E814;
loc_8222E7EC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8222e548
	if (ctx.cr6.lt) goto loc_8222E548;
loc_8222E7F8:
	// cmplwi cr6,r23,7
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 7, ctx.xer);
	// bge cr6,0x8222e814
	if (!ctx.cr6.lt) goto loc_8222E814;
	// addi r27,r27,10000
	ctx.r27.s64 = ctx.r27.s64 + 10000;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,200
	ctx.r26.s64 = ctx.r26.s64 + 200;
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x8222e510
	if (ctx.cr6.lt) goto loc_8222E510;
loc_8222E814:
	// addic r11,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// subfe r3,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E824"))) PPC_WEAK_FUNC(sub_8222E824);
PPC_FUNC_IMPL(__imp__sub_8222E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E828"))) PPC_WEAK_FUNC(sub_8222E828);
PPC_FUNC_IMPL(__imp__sub_8222E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222E830;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_8222E844:
	// bl 0x82163df0
	ctx.lr = 0x8222E848;
	sub_82163DF0(ctx, base);
	// lwz r11,-8540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222E864;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e8bc
	if (ctx.cr6.eq) goto loc_8222E8BC;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x8222e8bc
	if (ctx.cr6.gt) goto loc_8222E8BC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222e8c8
	// bdzf 4*cr6+eq,0x8222e8d4
	// bdzf 4*cr6+eq,0x8222e8e0
	// bdzf 4*cr6+eq,0x8222e8ec
	// bne cr6,0x8222e8f8
	if (!ctx.cr6.eq) goto loc_8222E8F8;
	// lbz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222e908
	if (ctx.cr6.eq) goto loc_8222E908;
	// bl 0x820c7360
	ctx.lr = 0x8222E8A0;
	sub_820C7360(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8222e8bc
	if (ctx.cr6.eq) goto loc_8222E8BC;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222e908
	if (ctx.cr6.eq) goto loc_8222E908;
loc_8222E8BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222E8C8:
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// lwz r10,8520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8520);
	// b 0x8222e900
	goto loc_8222E900;
loc_8222E8D4:
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lwz r10,8528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	// b 0x8222e900
	goto loc_8222E900;
loc_8222E8E0:
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lwz r10,8536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// b 0x8222e900
	goto loc_8222E900;
loc_8222E8EC:
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// lwz r10,8544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// b 0x8222e900
	goto loc_8222E900;
loc_8222E8F8:
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// lwz r10,8552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8552);
loc_8222E900:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222e8bc
	if (ctx.cr6.lt) goto loc_8222E8BC;
loc_8222E908:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x8222e844
	if (ctx.cr6.lt) goto loc_8222E844;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222E920"))) PPC_WEAK_FUNC(sub_8222E920);
PPC_FUNC_IMPL(__imp__sub_8222E920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222E928;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_8222E93C:
	// bl 0x82163df0
	ctx.lr = 0x8222E940;
	sub_82163DF0(ctx, base);
	// lwz r11,-8540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222E95C;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e9b4
	if (ctx.cr6.eq) goto loc_8222E9B4;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x8222e9b4
	if (ctx.cr6.gt) goto loc_8222E9B4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222e9c0
	// bdzf 4*cr6+eq,0x8222e9cc
	// bdzf 4*cr6+eq,0x8222e9d8
	// bdzf 4*cr6+eq,0x8222e9e4
	// bne cr6,0x8222e9f0
	if (!ctx.cr6.eq) goto loc_8222E9F0;
	// lbz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ea00
	if (ctx.cr6.eq) goto loc_8222EA00;
	// bl 0x820c7360
	ctx.lr = 0x8222E998;
	sub_820C7360(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8222e9b4
	if (ctx.cr6.eq) goto loc_8222E9B4;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222ea00
	if (ctx.cr6.eq) goto loc_8222EA00;
loc_8222E9B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222E9C0:
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// lwz r10,8520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8520);
	// b 0x8222e9f8
	goto loc_8222E9F8;
loc_8222E9CC:
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lwz r10,8528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	// b 0x8222e9f8
	goto loc_8222E9F8;
loc_8222E9D8:
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lwz r10,8536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// b 0x8222e9f8
	goto loc_8222E9F8;
loc_8222E9E4:
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// lwz r10,8544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// b 0x8222e9f8
	goto loc_8222E9F8;
loc_8222E9F0:
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// lwz r10,8552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8552);
loc_8222E9F8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222e9b4
	if (ctx.cr6.lt) goto loc_8222E9B4;
loc_8222EA00:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8222e93c
	if (ctx.cr6.lt) goto loc_8222E93C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222EA18"))) PPC_WEAK_FUNC(sub_8222EA18);
PPC_FUNC_IMPL(__imp__sub_8222EA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222EA20;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
loc_8222EA34:
	// lwz r11,-8540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8540);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222EA4C;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ea84
	if (ctx.cr6.eq) goto loc_8222EA84;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bgt cr6,0x8222ea84
	if (ctx.cr6.gt) goto loc_8222EA84;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222ea90
	// bdzf 4*cr6+eq,0x8222ea98
	// bdzf 4*cr6+eq,0x8222eaa0
	// bdzf 4*cr6+eq,0x8222eaa8
	// bne cr6,0x8222eab0
	if (!ctx.cr6.eq) goto loc_8222EAB0;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222eabc
	if (ctx.cr6.eq) goto loc_8222EABC;
loc_8222EA84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222EA90:
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// b 0x8222eab4
	goto loc_8222EAB4;
loc_8222EA98:
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// b 0x8222eab4
	goto loc_8222EAB4;
loc_8222EAA0:
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// b 0x8222eab4
	goto loc_8222EAB4;
loc_8222EAA8:
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// b 0x8222eab4
	goto loc_8222EAB4;
loc_8222EAB0:
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
loc_8222EAB4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8222ea84
	if (ctx.cr6.gt) goto loc_8222EA84;
loc_8222EABC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x8222ea34
	if (ctx.cr6.lt) goto loc_8222EA34;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222EAD4"))) PPC_WEAK_FUNC(sub_8222EAD4);
PPC_FUNC_IMPL(__imp__sub_8222EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EAD8"))) PPC_WEAK_FUNC(sub_8222EAD8);
PPC_FUNC_IMPL(__imp__sub_8222EAD8) {
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
	// bl 0x8222dc58
	ctx.lr = 0x8222EAF8;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222eb14
	if (ctx.cr6.eq) goto loc_8222EB14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dcf8
	ctx.lr = 0x8222EB0C;
	sub_8222DCF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222eb28
	if (ctx.cr6.eq) goto loc_8222EB28;
loc_8222EB14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e920
	ctx.lr = 0x8222EB20;
	sub_8222E920(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8222EB28:
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

__attribute__((alias("__imp__sub_8222EB40"))) PPC_WEAK_FUNC(sub_8222EB40);
PPC_FUNC_IMPL(__imp__sub_8222EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222EB48;
	sub_82248788(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8222EB58:
	// bl 0x82163df0
	ctx.lr = 0x8222EB5C;
	sub_82163DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82248f70
	ctx.lr = 0x8222EB74;
	sub_82248F70(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084690
	ctx.lr = 0x8222EB88;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ebe0
	if (ctx.cr6.eq) goto loc_8222EBE0;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bgt cr6,0x8222ebe0
	if (ctx.cr6.gt) goto loc_8222EBE0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222ebec
	// bdzf 4*cr6+eq,0x8222ebf8
	// bdzf 4*cr6+eq,0x8222ec04
	// bdzf 4*cr6+eq,0x8222ec10
	// bne cr6,0x8222ec1c
	if (!ctx.cr6.eq) goto loc_8222EC1C;
	// lbz r3,182(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ec2c
	if (ctx.cr6.eq) goto loc_8222EC2C;
	// bl 0x820c7360
	ctx.lr = 0x8222EBC4;
	sub_820C7360(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8222ebe0
	if (ctx.cr6.eq) goto loc_8222EBE0;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222ec2c
	if (ctx.cr6.eq) goto loc_8222EC2C;
loc_8222EBE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222EBEC:
	// lbz r9,183(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// lwz r10,8520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8520);
	// b 0x8222ec24
	goto loc_8222EC24;
loc_8222EBF8:
	// lbz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// lwz r10,8528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	// b 0x8222ec24
	goto loc_8222EC24;
loc_8222EC04:
	// lbz r9,185(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// lwz r10,8536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// b 0x8222ec24
	goto loc_8222EC24;
loc_8222EC10:
	// lbz r9,186(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// lwz r10,8544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// b 0x8222ec24
	goto loc_8222EC24;
loc_8222EC1C:
	// lbz r9,187(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 187);
	// lwz r10,8552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8552);
loc_8222EC24:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8222ebe0
	if (ctx.cr6.lt) goto loc_8222EBE0;
loc_8222EC2C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8222eb58
	if (ctx.cr6.lt) goto loc_8222EB58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222EC44"))) PPC_WEAK_FUNC(sub_8222EC44);
PPC_FUNC_IMPL(__imp__sub_8222EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EC48"))) PPC_WEAK_FUNC(sub_8222EC48);
PPC_FUNC_IMPL(__imp__sub_8222EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222EC50;
	sub_82248788(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8222EC60:
	// bl 0x82163df0
	ctx.lr = 0x8222EC64;
	sub_82163DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82248f70
	ctx.lr = 0x8222EC7C;
	sub_82248F70(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084690
	ctx.lr = 0x8222EC90;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ece8
	if (ctx.cr6.eq) goto loc_8222ECE8;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bgt cr6,0x8222ece8
	if (ctx.cr6.gt) goto loc_8222ECE8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222ecf4
	// bdzf 4*cr6+eq,0x8222ed00
	// bdzf 4*cr6+eq,0x8222ed0c
	// bdzf 4*cr6+eq,0x8222ed18
	// bne cr6,0x8222ed24
	if (!ctx.cr6.eq) goto loc_8222ED24;
	// lbz r3,182(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ed34
	if (ctx.cr6.eq) goto loc_8222ED34;
	// bl 0x820c7360
	ctx.lr = 0x8222ECCC;
	sub_820C7360(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8222ece8
	if (ctx.cr6.eq) goto loc_8222ECE8;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222ed34
	if (ctx.cr6.eq) goto loc_8222ED34;
loc_8222ECE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222ECF4:
	// lbz r9,183(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// lwz r10,8520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8520);
	// b 0x8222ed2c
	goto loc_8222ED2C;
loc_8222ED00:
	// lbz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// lwz r10,8528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	// b 0x8222ed2c
	goto loc_8222ED2C;
loc_8222ED0C:
	// lbz r9,185(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// lwz r10,8536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// b 0x8222ed2c
	goto loc_8222ED2C;
loc_8222ED18:
	// lbz r9,186(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// lwz r10,8544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// b 0x8222ed2c
	goto loc_8222ED2C;
loc_8222ED24:
	// lbz r9,187(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 187);
	// lwz r10,8552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8552);
loc_8222ED2C:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8222ece8
	if (ctx.cr6.lt) goto loc_8222ECE8;
loc_8222ED34:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8222ec60
	if (ctx.cr6.lt) goto loc_8222EC60;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222ED4C"))) PPC_WEAK_FUNC(sub_8222ED4C);
PPC_FUNC_IMPL(__imp__sub_8222ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ED50"))) PPC_WEAK_FUNC(sub_8222ED50);
PPC_FUNC_IMPL(__imp__sub_8222ED50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222ED58;
	sub_8224878C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8222ED68:
	// li r5,114
	ctx.r5.s64 = 114;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82248f70
	ctx.lr = 0x8222ED7C;
	sub_82248F70(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82084690
	ctx.lr = 0x8222ED90;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222edc8
	if (ctx.cr6.eq) goto loc_8222EDC8;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x8222edc8
	if (ctx.cr6.gt) goto loc_8222EDC8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222edd4
	// bdzf 4*cr6+eq,0x8222eddc
	// bdzf 4*cr6+eq,0x8222ede4
	// bdzf 4*cr6+eq,0x8222edec
	// bne cr6,0x8222edf4
	if (!ctx.cr6.eq) goto loc_8222EDF4;
	// lbz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ee00
	if (ctx.cr6.eq) goto loc_8222EE00;
loc_8222EDC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222EDD4:
	// lbz r10,183(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// b 0x8222edf8
	goto loc_8222EDF8;
loc_8222EDDC:
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// b 0x8222edf8
	goto loc_8222EDF8;
loc_8222EDE4:
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// b 0x8222edf8
	goto loc_8222EDF8;
loc_8222EDEC:
	// lbz r10,186(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// b 0x8222edf8
	goto loc_8222EDF8;
loc_8222EDF4:
	// lbz r10,187(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 187);
loc_8222EDF8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8222edc8
	if (ctx.cr6.gt) goto loc_8222EDC8;
loc_8222EE00:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8222ed68
	if (ctx.cr6.lt) goto loc_8222ED68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222EE18"))) PPC_WEAK_FUNC(sub_8222EE18);
PPC_FUNC_IMPL(__imp__sub_8222EE18) {
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
	// bl 0x8222def0
	ctx.lr = 0x8222EE38;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ee54
	if (ctx.cr6.eq) goto loc_8222EE54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dfa8
	ctx.lr = 0x8222EE4C;
	sub_8222DFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ee68
	if (ctx.cr6.eq) goto loc_8222EE68;
loc_8222EE54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ec48
	ctx.lr = 0x8222EE60;
	sub_8222EC48(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8222EE68:
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

__attribute__((alias("__imp__sub_8222EE80"))) PPC_WEAK_FUNC(sub_8222EE80);
PPC_FUNC_IMPL(__imp__sub_8222EE80) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8222e028
	ctx.lr = 0x8222EEA0;
	sub_8222E028(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8222eec4
	if (!ctx.cr6.eq) goto loc_8222EEC4;
loc_8222EEAC:
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
loc_8222EEC4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82084920
	ctx.lr = 0x8222EED0;
	sub_82084920(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222eeac
	if (ctx.cr6.eq) goto loc_8222EEAC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
}

__attribute__((alias("__imp__sub_8222EEF4"))) PPC_WEAK_FUNC(sub_8222EEF4);
PPC_FUNC_IMPL(__imp__sub_8222EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EEF8"))) PPC_WEAK_FUNC(sub_8222EEF8);
PPC_FUNC_IMPL(__imp__sub_8222EEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8222EF00;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r11,-720(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ef80
	if (ctx.cr6.eq) goto loc_8222EF80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8222EF28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222ef64
	if (ctx.cr6.eq) goto loc_8222EF64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8222ef64
	if (ctx.cr6.lt) goto loc_8222EF64;
	// cmplwi cr6,r31,88
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 88, ctx.xer);
	// bge cr6,0x8222ef64
	if (!ctx.cr6.lt) goto loc_8222EF64;
	// bl 0x82163ee8
	ctx.lr = 0x8222EF50;
	sub_82163EE8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stb r29,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r29.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222EF5C;
	sub_82163EE8(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// lwz r11,-720(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -720);
loc_8222EF64:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,352
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 352, ctx.xer);
	// blt cr6,0x8222ef28
	if (ctx.cr6.lt) goto loc_8222EF28;
	// bl 0x82163ee8
	ctx.lr = 0x8222EF7C;
	sub_82163EE8(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
loc_8222EF80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8222EF88"))) PPC_WEAK_FUNC(sub_8222EF88);
PPC_FUNC_IMPL(__imp__sub_8222EF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8222EF90;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,-720(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r26,8(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8222f074
	if (!ctx.cr6.gt) goto loc_8222F074;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8222EFB4:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8222efdc
	if (ctx.cr6.eq) goto loc_8222EFDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8222efb4
	if (ctx.cr6.lt) goto loc_8222EFB4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8222EFDC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8222EFEC:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8222f074
	if (ctx.cr6.eq) goto loc_8222F074;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8222f068
	if (ctx.cr6.lt) goto loc_8222F068;
	// cmplwi cr6,r31,88
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 88, ctx.xer);
	// bge cr6,0x8222f068
	if (!ctx.cr6.lt) goto loc_8222F068;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222f068
	if (ctx.cr6.eq) goto loc_8222F068;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e0a8
	ctx.lr = 0x8222F038;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f064
	if (!ctx.cr6.eq) goto loc_8222F064;
	// bl 0x82163ee8
	ctx.lr = 0x8222F044;
	sub_82163EE8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// bl 0x8222ef88
	ctx.lr = 0x8222F05C;
	sub_8222EF88(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x8222F060;
	sub_82163EE8(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
loc_8222F064:
	// lwz r8,-720(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
loc_8222F068:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8222efec
	if (ctx.cr6.lt) goto loc_8222EFEC;
loc_8222F074:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8222F07C"))) PPC_WEAK_FUNC(sub_8222F07C);
PPC_FUNC_IMPL(__imp__sub_8222F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F080"))) PPC_WEAK_FUNC(sub_8222F080);
PPC_FUNC_IMPL(__imp__sub_8222F080) {
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
	// bl 0x82230c80
	ctx.lr = 0x8222F098;
	sub_82230C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f0e4
	if (ctx.cr6.eq) goto loc_8222F0E4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f0cc
	if (ctx.cr6.eq) goto loc_8222F0CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170978
	ctx.lr = 0x8222F0B8;
	sub_82170978(ctx, base);
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
loc_8222F0CC:
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
loc_8222F0E4:
	// cmpwi cr6,r31,101
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 101, ctx.xer);
	// beq cr6,0x8222f16c
	if (ctx.cr6.eq) goto loc_8222F16C;
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 103, ctx.xer);
	// bne cr6,0x8222f1a0
	if (!ctx.cr6.eq) goto loc_8222F1A0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222f0cc
	if (ctx.cr6.eq) goto loc_8222F0CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222f128
	if (!ctx.cr6.gt) goto loc_8222F128;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222f1a0
	if (!ctx.cr6.eq) goto loc_8222F1A0;
loc_8222F128:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r31,15472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222f160
	if (ctx.cr6.eq) goto loc_8222F160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F144;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f160
	if (ctx.cr6.eq) goto loc_8222F160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170990
	ctx.lr = 0x8222F158;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f1a0
	if (!ctx.cr6.eq) goto loc_8222F1A0;
loc_8222F160:
	// bl 0x82163ee8
	ctx.lr = 0x8222F164;
	sub_82163EE8(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222f1f8
	goto loc_8222F1F8;
loc_8222F16C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222f0cc
	if (ctx.cr6.eq) goto loc_8222F0CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8222f1b8
	if (!ctx.cr6.gt) goto loc_8222F1B8;
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f1b8
	if (ctx.cr6.eq) goto loc_8222F1B8;
loc_8222F1A0:
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
loc_8222F1B8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r31,15472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222f1f0
	if (ctx.cr6.eq) goto loc_8222F1F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F1D4;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f1f0
	if (ctx.cr6.eq) goto loc_8222F1F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170990
	ctx.lr = 0x8222F1E8;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f1a0
	if (!ctx.cr6.eq) goto loc_8222F1A0;
loc_8222F1F0:
	// bl 0x82163ee8
	ctx.lr = 0x8222F1F4;
	sub_82163EE8(ctx, base);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
loc_8222F1F8:
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_8222F210"))) PPC_WEAK_FUNC(sub_8222F210);
PPC_FUNC_IMPL(__imp__sub_8222F210) {
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
	// bl 0x82230448
	ctx.lr = 0x8222F228;
	sub_82230448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f274
	if (ctx.cr6.eq) goto loc_8222F274;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f25c
	if (ctx.cr6.eq) goto loc_8222F25C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170980
	ctx.lr = 0x8222F248;
	sub_82170980(ctx, base);
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
loc_8222F25C:
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
loc_8222F274:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8222f2b0
	if (!ctx.cr6.eq) goto loc_8222F2B0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222f25c
	if (ctx.cr6.eq) goto loc_8222F25C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x8222f2c8
	if (!ctx.cr6.gt) goto loc_8222F2C8;
	// lbz r11,61(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 61);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f2c8
	if (ctx.cr6.eq) goto loc_8222F2C8;
loc_8222F2B0:
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
loc_8222F2C8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r31,15472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222f300
	if (ctx.cr6.eq) goto loc_8222F300;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F2E4;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f300
	if (ctx.cr6.eq) goto loc_8222F300;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170990
	ctx.lr = 0x8222F2F8;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f2b0
	if (!ctx.cr6.eq) goto loc_8222F2B0;
loc_8222F300:
	// bl 0x82163ee8
	ctx.lr = 0x8222F304;
	sub_82163EE8(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_8222F320"))) PPC_WEAK_FUNC(sub_8222F320);
PPC_FUNC_IMPL(__imp__sub_8222F320) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 10;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// addi r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 + 14;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r7,3(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r5.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,5(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// lbz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lbz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r6,9(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r8,13(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r6.u16);
	// lbz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r5,15(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// lbz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222F41C"))) PPC_WEAK_FUNC(sub_8222F41C);
PPC_FUNC_IMPL(__imp__sub_8222F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F420"))) PPC_WEAK_FUNC(sub_8222F420);
PPC_FUNC_IMPL(__imp__sub_8222F420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222F428;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8222F434;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x8222F440;
	sub_821837D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222f458
	if (!ctx.cr6.eq) goto loc_8222F458;
	// bl 0x8222daa0
	ctx.lr = 0x8222F454;
	sub_8222DAA0(ctx, base);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
loc_8222F458:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
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
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222f4cc
	if (!ctx.cr6.eq) goto loc_8222F4CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222f4cc
	if (!ctx.cr6.gt) goto loc_8222F4CC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8222f4bc
	if (!ctx.cr6.gt) goto loc_8222F4BC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222F4BC:
	// bl 0x82080d68
	ctx.lr = 0x8222F4C0;
	sub_82080D68(ctx, base);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
loc_8222F4CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222f534
	if (!ctx.cr6.gt) goto loc_8222F534;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_8222F4E8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// lwz r11,-720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -720);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8222f4e8
	if (ctx.cr6.lt) goto loc_8222F4E8;
loc_8222F534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222F53C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222F544"))) PPC_WEAK_FUNC(sub_8222F544);
PPC_FUNC_IMPL(__imp__sub_8222F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F548"))) PPC_WEAK_FUNC(sub_8222F548);
PPC_FUNC_IMPL(__imp__sub_8222F548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222F550;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8222F55C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x8222F568;
	sub_821837D0(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222f580
	if (!ctx.cr6.eq) goto loc_8222F580;
	// bl 0x8222daa0
	ctx.lr = 0x8222F57C;
	sub_8222DAA0(ctx, base);
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
loc_8222F580:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
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
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222f600
	if (!ctx.cr6.eq) goto loc_8222F600;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222f600
	if (!ctx.cr6.gt) goto loc_8222F600;
	// lis r11,3640
	ctx.r11.s64 = 238551040;
	// ori r9,r11,58254
	ctx.r9.u64 = ctx.r11.u64 | 58254;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8222f5ec
	if (ctx.cr6.gt) goto loc_8222F5EC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8222f5f0
	goto loc_8222F5F0;
loc_8222F5EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222F5F0:
	// bl 0x82080d68
	ctx.lr = 0x8222F5F4;
	sub_82080D68(ctx, base);
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
loc_8222F600:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222f668
	if (!ctx.cr6.gt) goto loc_8222F668;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222F618:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222F630:
	// lhzu r11,2(r9)
	// sthu r11,2(r10)
	// bdnz 0x8222f630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F630;
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8222f320
	ctx.lr = 0x8222F64C;
	sub_8222F320(ctx, base);
	// lwz r11,-720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -720);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,18
	ctx.r30.s64 = ctx.r30.s64 + 18;
	// addi r31,r31,18
	ctx.r31.s64 = ctx.r31.s64 + 18;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8222f618
	if (ctx.cr6.lt) goto loc_8222F618;
loc_8222F668:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222F670;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222F678"))) PPC_WEAK_FUNC(sub_8222F678);
PPC_FUNC_IMPL(__imp__sub_8222F678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8222F680;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r25,15
	ctx.r25.s64 = 983040;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r25,r25,26960
	ctx.r25.u64 = ctx.r25.u64 | 26960;
	// lis r20,-32180
	ctx.r20.s64 = -2108948480;
	// ori r21,r11,61424
	ctx.r21.u64 = ctx.r11.u64 | 61424;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
loc_8222F6AC:
	// lwz r11,-8540(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8540);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c6780
	ctx.lr = 0x8222F6C0;
	sub_820C6780(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222f988
	if (!ctx.cr6.gt) goto loc_8222F988;
loc_8222F6D4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,1124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236320
	ctx.lr = 0x8222F6E8;
	sub_82236320(ctx, base);
	// lwz r11,15472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15472);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f70c
	if (ctx.cr6.eq) goto loc_8222F70C;
	// add r4,r25,r3
	ctx.r4.u64 = ctx.r25.u64 + ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F704;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f738
	if (!ctx.cr6.eq) goto loc_8222F738;
loc_8222F70C:
	// lwz r11,-8540(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8540);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222F724;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f7c8
	if (ctx.cr6.eq) goto loc_8222F7C8;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f7c8
	if (ctx.cr6.eq) goto loc_8222F7C8;
loc_8222F738:
	// lwz r3,15472(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f754
	if (ctx.cr6.eq) goto loc_8222F754;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F74C;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f788
	if (!ctx.cr6.eq) goto loc_8222F788;
loc_8222F754:
	// lwz r11,-8540(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8540);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c79c8
	ctx.lr = 0x8222F76C;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f780
	if (ctx.cr6.eq) goto loc_8222F780;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222f788
	if (!ctx.cr6.eq) goto loc_8222F788;
loc_8222F780:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222f810
	goto loc_8222F810;
loc_8222F788:
	// lwz r29,15472(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15472);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222f780
	if (ctx.cr6.eq) goto loc_8222F780;
	// add r31,r25,r30
	ctx.r31.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222F7A4;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f780
	if (ctx.cr6.eq) goto loc_8222F780;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170990
	ctx.lr = 0x8222F7B8;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f780
	if (ctx.cr6.eq) goto loc_8222F780;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8222f810
	goto loc_8222F810;
loc_8222F7C8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222f818
	if (ctx.cr6.lt) goto loc_8222F818;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8222f818
	if (!ctx.cr6.lt) goto loc_8222F818;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,1124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222F7EC;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222f818
	if (!ctx.cr6.lt) goto loc_8222F818;
	// bl 0x82163ee8
	ctx.lr = 0x8222F7FC;
	sub_82163EE8(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_8222F810:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222f978
	if (!ctx.cr6.eq) goto loc_8222F978;
loc_8222F818:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222e828
	ctx.lr = 0x8222F824;
	sub_8222E828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f894
	if (ctx.cr6.eq) goto loc_8222F894;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222F838;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f894
	if (!ctx.cr6.eq) goto loc_8222F894;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222f894
	if (ctx.cr6.lt) goto loc_8222F894;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8222f894
	if (!ctx.cr6.lt) goto loc_8222F894;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,1124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222F864;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222f894
	if (!ctx.cr6.lt) goto loc_8222F894;
	// bl 0x82163ee8
	ctx.lr = 0x8222F874;
	sub_82163EE8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222F890;
	sub_82163EE8(ctx, base);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
loc_8222F894:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222ea18
	ctx.lr = 0x8222F8A0;
	sub_8222EA18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f978
	if (ctx.cr6.eq) goto loc_8222F978;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222F8B4;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f910
	if (!ctx.cr6.eq) goto loc_8222F910;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222f910
	if (ctx.cr6.lt) goto loc_8222F910;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8222f910
	if (!ctx.cr6.lt) goto loc_8222F910;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,1124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222F8E0;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222f910
	if (!ctx.cr6.lt) goto loc_8222F910;
	// bl 0x82163ee8
	ctx.lr = 0x8222F8F0;
	sub_82163EE8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222F90C;
	sub_82163EE8(ctx, base);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
loc_8222F910:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dc58
	ctx.lr = 0x8222F91C;
	sub_8222DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f978
	if (!ctx.cr6.eq) goto loc_8222F978;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x8222f978
	if (ctx.cr6.lt) goto loc_8222F978;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8222f978
	if (!ctx.cr6.lt) goto loc_8222F978;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,1124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8222F948;
	sub_82236360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bge cr6,0x8222f978
	if (!ctx.cr6.lt) goto loc_8222F978;
	// bl 0x82163ee8
	ctx.lr = 0x8222F958;
	sub_82163EE8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222F974;
	sub_82163EE8(ctx, base);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
loc_8222F978:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222f6d4
	if (ctx.cr6.lt) goto loc_8222F6D4;
loc_8222F988:
	// addi r25,r25,10000
	ctx.r25.s64 = ctx.r25.s64 + 10000;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,200
	ctx.r26.s64 = ctx.r26.s64 + 200;
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8222f6ac
	if (ctx.cr6.lt) goto loc_8222F6AC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8222F9A4"))) PPC_WEAK_FUNC(sub_8222F9A4);
PPC_FUNC_IMPL(__imp__sub_8222F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F9A8"))) PPC_WEAK_FUNC(sub_8222F9A8);
PPC_FUNC_IMPL(__imp__sub_8222F9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222F9B0;
	sub_8224878C(ctx, base);
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
	// bl 0x8222def0
	ctx.lr = 0x8222F9C4;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f9e0
	if (ctx.cr6.eq) goto loc_8222F9E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dfa8
	ctx.lr = 0x8222F9D8;
	sub_8222DFA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222F9E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222ee80
	ctx.lr = 0x8222FA00;
	sub_8222EE80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fa10
	if (!ctx.cr6.eq) goto loc_8222FA10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222FA10:
	// bl 0x82163ee8
	ctx.lr = 0x8222FA14;
	sub_82163EE8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,2088(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2088);
	// and r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 & ctx.r29.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222FA44"))) PPC_WEAK_FUNC(sub_8222FA44);
PPC_FUNC_IMPL(__imp__sub_8222FA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FA48"))) PPC_WEAK_FUNC(sub_8222FA48);
PPC_FUNC_IMPL(__imp__sub_8222FA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222FA50;
	sub_8224878C(ctx, base);
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
	// bl 0x8222def0
	ctx.lr = 0x8222FA64;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fac8
	if (!ctx.cr6.eq) goto loc_8222FAC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222ee80
	ctx.lr = 0x8222FA8C;
	sub_8222EE80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fac8
	if (ctx.cr6.eq) goto loc_8222FAC8;
	// bl 0x82163ee8
	ctx.lr = 0x8222FA98;
	sub_82163EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 * 100;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2096
	ctx.r10.s64 = ctx.r11.s64 + 2096;
	// lbz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2096);
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stb r7,2096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2096, ctx.r7.u8);
	// bl 0x82163ee8
	ctx.lr = 0x8222FAC0;
	sub_82163EE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_8222FAC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222FAD0"))) PPC_WEAK_FUNC(sub_8222FAD0);
PPC_FUNC_IMPL(__imp__sub_8222FAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8222FAD8;
	sub_82248750(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,30501
	ctx.r10.s64 = 30501;
	// addi r9,r11,9652
	ctx.r9.s64 = ctx.r11.s64 + 9652;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// bl 0x8215bd08
	ctx.lr = 0x8222FB10;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1792
	ctx.r4.s64 = 1792;
	// addi r16,r11,-712
	ctx.r16.s64 = ctx.r11.s64 + -712;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822aa648
	ctx.lr = 0x8222FB2C;
	sub_822AA648(ctx, base);
	// li r18,2
	ctx.r18.s64 = 2;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r17,r1,88
	ctx.r17.s64 = ctx.r1.s64 + 88;
	// ori r20,r11,34464
	ctx.r20.u64 = ctx.r11.u64 | 34464;
loc_8222FB48:
	// lwz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82182e90
	ctx.lr = 0x8222FB50;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8222FB58;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x8222FB68;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8222FB6C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r15,r11,27,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8222FB78;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8222FB80;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8222FB84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8222fb9c
	if (ctx.cr6.eq) goto loc_8222FB9C;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x82183448
	ctx.lr = 0x8222FB98;
	sub_82183448(ctx, base);
	// b 0x8222fba4
	goto loc_8222FBA4;
loc_8222FB9C:
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821845a0
	ctx.lr = 0x8222FBA4;
	sub_821845A0(ctx, base);
loc_8222FBA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82084748
	ctx.lr = 0x8222FBB8;
	sub_82084748(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222fd58
	if (ctx.cr6.eq) goto loc_8222FD58;
	// rlwinm r11,r25,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFFFF00;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// add r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 + ctx.r16.u64;
loc_8222FBD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fd44
	if (ctx.cr6.eq) goto loc_8222FD44;
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FBF0;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fd44
	if (!ctx.cr6.eq) goto loc_8222FD44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FC04;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fc74
	if (ctx.cr6.eq) goto loc_8222FC74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FC18;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fc28
	if (!ctx.cr6.eq) goto loc_8222FC28;
loc_8222FC20:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x8222fcf4
	goto loc_8222FCF4;
loc_8222FC28:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222fc20
	if (ctx.cr6.eq) goto loc_8222FC20;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222FC50;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fc20
	if (ctx.cr6.eq) goto loc_8222FC20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222FC64;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fc20
	if (ctx.cr6.eq) goto loc_8222FC20;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8222fcf4
	goto loc_8222FCF4;
loc_8222FC74:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
loc_8222FC8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8222fcac
	if (ctx.cr6.eq) goto loc_8222FCAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8222fc8c
	if (ctx.cr6.lt) goto loc_8222FC8C;
	// b 0x8222fd44
	goto loc_8222FD44;
loc_8222FCAC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8222fd44
	if (ctx.cr6.eq) goto loc_8222FD44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084920
	ctx.lr = 0x8222FCCC;
	sub_82084920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222fd44
	if (ctx.cr6.eq) goto loc_8222FD44;
	// bl 0x82163ee8
	ctx.lr = 0x8222FCDC;
	sub_82163EE8(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,2088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2088);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_8222FCF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222fd44
	if (ctx.cr6.eq) goto loc_8222FD44;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f9a8
	ctx.lr = 0x8222FD0C;
	sub_8222F9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fd44
	if (!ctx.cr6.eq) goto loc_8222FD44;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fa48
	ctx.lr = 0x8222FD24;
	sub_8222FA48(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820844f8
	ctx.lr = 0x8222FD34;
	sub_820844F8(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// cmplwi cr6,r25,7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 7, ctx.xer);
	// bge cr6,0x8222fd54
	if (!ctx.cr6.lt) goto loc_8222FD54;
loc_8222FD44:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8222fbd4
	if (ctx.cr6.lt) goto loc_8222FBD4;
loc_8222FD54:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222FD58:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8222fd6c
	if (ctx.cr6.eq) goto loc_8222FD6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82183e40
	ctx.lr = 0x8222FD6C;
	sub_82183E40(ctx, base);
loc_8222FD6C:
	// cmplwi cr6,r25,7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 7, ctx.xer);
	// bge cr6,0x8222fdb8
	if (!ctx.cr6.lt) goto loc_8222FDB8;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// blt cr6,0x8222fd88
	if (ctx.cr6.lt) goto loc_8222FD88;
	// bne cr6,0x8222fd90
	if (!ctx.cr6.eq) goto loc_8222FD90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222fd8c
	goto loc_8222FD8C;
loc_8222FD88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222FD8C:
	// bl 0x821830f8
	ctx.lr = 0x8222FD90;
	sub_821830F8(ctx, base);
loc_8222FD90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222FD98;
	sub_821837D0(ctx, base);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// blt cr6,0x8222fb48
	if (ctx.cr6.lt) goto loc_8222FB48;
	// addic r11,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// subfe r3,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8222FDB8:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// blt cr6,0x8222fdcc
	if (ctx.cr6.lt) goto loc_8222FDCC;
	// bne cr6,0x8222fdd4
	if (!ctx.cr6.eq) goto loc_8222FDD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222fdd0
	goto loc_8222FDD0;
loc_8222FDCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222FDD0:
	// bl 0x821830f8
	ctx.lr = 0x8222FDD4;
	sub_821830F8(ctx, base);
loc_8222FDD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222FDDC;
	sub_821837D0(ctx, base);
	// addic r11,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// subfe r3,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FDEC"))) PPC_WEAK_FUNC(sub_8222FDEC);
PPC_FUNC_IMPL(__imp__sub_8222FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FDF0"))) PPC_WEAK_FUNC(sub_8222FDF0);
PPC_FUNC_IMPL(__imp__sub_8222FDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x8222FDF8;
	sub_82248758(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r16,-32180
	ctx.r16.s64 = -2108948480;
	// ori r22,r11,34464
	ctx.r22.u64 = ctx.r11.u64 | 34464;
loc_8222FE24:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82182e90
	ctx.lr = 0x8222FE2C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8222FE34;
	sub_82183078(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222FE40;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8222FE44;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8222FE50;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8222FE58;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8222FE5C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8222fe74
	if (ctx.cr6.eq) goto loc_8222FE74;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x82183448
	ctx.lr = 0x8222FE70;
	sub_82183448(ctx, base);
	// b 0x8222fe7c
	goto loc_8222FE7C;
loc_8222FE74:
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821845a0
	ctx.lr = 0x8222FE7C;
	sub_821845A0(ctx, base);
loc_8222FE7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82084748
	ctx.lr = 0x8222FE90;
	sub_82084748(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822301c4
	if (ctx.cr6.eq) goto loc_822301C4;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_8222FEA0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822301b8
	if (ctx.cr6.eq) goto loc_822301B8;
	// lhz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FEBC;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ff28
	if (ctx.cr6.eq) goto loc_8222FF28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FED0;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fee0
	if (!ctx.cr6.eq) goto loc_8222FEE0;
loc_8222FED8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8222ffa8
	goto loc_8222FFA8;
loc_8222FEE0:
	// lwz r30,15472(r16)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r16.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222fed8
	if (ctx.cr6.eq) goto loc_8222FED8;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170998
	ctx.lr = 0x8222FF04;
	sub_82170998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fed8
	if (ctx.cr6.eq) goto loc_8222FED8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170990
	ctx.lr = 0x8222FF18;
	sub_82170990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222fed8
	if (ctx.cr6.eq) goto loc_8222FED8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8222ffa8
	goto loc_8222FFA8;
loc_8222FF28:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_8222FF40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8222ff60
	if (ctx.cr6.eq) goto loc_8222FF60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8222ff40
	if (ctx.cr6.lt) goto loc_8222FF40;
	// b 0x8222ffb0
	goto loc_8222FFB0;
loc_8222FF60:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8222ffb0
	if (ctx.cr6.eq) goto loc_8222FFB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084920
	ctx.lr = 0x8222FF80;
	sub_82084920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222ffb0
	if (ctx.cr6.eq) goto loc_8222FFB0;
	// bl 0x82163ee8
	ctx.lr = 0x8222FF90;
	sub_82163EE8(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,2088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2088);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_8222FFA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822301b8
	if (!ctx.cr6.eq) goto loc_822301B8;
loc_8222FFB0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb40
	ctx.lr = 0x8222FFBC;
	sub_8222EB40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82230064
	if (ctx.cr6.eq) goto loc_82230064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x8222FFD0;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82230064
	if (!ctx.cr6.eq) goto loc_82230064;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_8222FFF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82230010
	if (ctx.cr6.eq) goto loc_82230010;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8222fff0
	if (ctx.cr6.lt) goto loc_8222FFF0;
	// b 0x82230064
	goto loc_82230064;
loc_82230010:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82230064
	if (ctx.cr6.eq) goto loc_82230064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084920
	ctx.lr = 0x82230030;
	sub_82084920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82230064
	if (ctx.cr6.eq) goto loc_82230064;
	// bl 0x82163ee8
	ctx.lr = 0x82230040;
	sub_82163EE8(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2096
	ctx.r10.s64 = ctx.r11.s64 + 2096;
	// lbz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2096);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,2096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2096, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x82230060;
	sub_82163EE8(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_82230064:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ed50
	ctx.lr = 0x82230070;
	sub_8222ED50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822301b8
	if (ctx.cr6.eq) goto loc_822301B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x82230084;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82230118
	if (!ctx.cr6.eq) goto loc_82230118;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
loc_822300A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x822300c4
	if (ctx.cr6.eq) goto loc_822300C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x822300a4
	if (ctx.cr6.lt) goto loc_822300A4;
	// b 0x82230118
	goto loc_82230118;
loc_822300C4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82230118
	if (ctx.cr6.eq) goto loc_82230118;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084920
	ctx.lr = 0x822300E4;
	sub_82084920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82230118
	if (ctx.cr6.eq) goto loc_82230118;
	// bl 0x82163ee8
	ctx.lr = 0x822300F4;
	sub_82163EE8(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2096
	ctx.r10.s64 = ctx.r11.s64 + 2096;
	// lbz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2096);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,2096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2096, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x82230114;
	sub_82163EE8(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_82230118:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222def0
	ctx.lr = 0x82230124;
	sub_8222DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822301b8
	if (!ctx.cr6.eq) goto loc_822301B8;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
loc_82230144:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82230164
	if (ctx.cr6.eq) goto loc_82230164;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82230144
	if (ctx.cr6.lt) goto loc_82230144;
	// b 0x822301b8
	goto loc_822301B8;
loc_82230164:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x822301b8
	if (ctx.cr6.eq) goto loc_822301B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084920
	ctx.lr = 0x82230184;
	sub_82084920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822301b8
	if (ctx.cr6.eq) goto loc_822301B8;
	// bl 0x82163ee8
	ctx.lr = 0x82230194;
	sub_82163EE8(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2096
	ctx.r10.s64 = ctx.r11.s64 + 2096;
	// lbz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2096);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,2096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2096, ctx.r9.u8);
	// bl 0x82163ee8
	ctx.lr = 0x822301B4;
	sub_82163EE8(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_822301B8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// bne 0x8222fea0
	if (!ctx.cr0.eq) goto loc_8222FEA0;
loc_822301C4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822301d8
	if (ctx.cr6.eq) goto loc_822301D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82183e40
	ctx.lr = 0x822301D8;
	sub_82183E40(ctx, base);
loc_822301D8:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// blt cr6,0x822301ec
	if (ctx.cr6.lt) goto loc_822301EC;
	// bne cr6,0x822301f4
	if (!ctx.cr6.eq) goto loc_822301F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822301f0
	goto loc_822301F0;
loc_822301EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822301F0:
	// bl 0x821830f8
	ctx.lr = 0x822301F4;
	sub_821830F8(ctx, base);
loc_822301F4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821837d0
	ctx.lr = 0x822301FC;
	sub_821837D0(ctx, base);
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// bne 0x8222fe24
	if (!ctx.cr0.eq) goto loc_8222FE24;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_82230210"))) PPC_WEAK_FUNC(sub_82230210);
PPC_FUNC_IMPL(__imp__sub_82230210) {
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
	// bl 0x8222f678
	ctx.lr = 0x82230220;
	sub_8222F678(ctx, base);
	// bl 0x8222fdf0
	ctx.lr = 0x82230224;
	sub_8222FDF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230234"))) PPC_WEAK_FUNC(sub_82230234);
PPC_FUNC_IMPL(__imp__sub_82230234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230238"))) PPC_WEAK_FUNC(sub_82230238);
PPC_FUNC_IMPL(__imp__sub_82230238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,1084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230244"))) PPC_WEAK_FUNC(sub_82230244);
PPC_FUNC_IMPL(__imp__sub_82230244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230248"))) PPC_WEAK_FUNC(sub_82230248);
PPC_FUNC_IMPL(__imp__sub_82230248) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,1084(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1084);
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82230280
	if (!ctx.cr6.gt) goto loc_82230280;
loc_82230264:
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82230288
	if (ctx.cr6.eq) goto loc_82230288;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82230264
	if (ctx.cr6.lt) goto loc_82230264;
loc_82230280:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_82230288:
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230290"))) PPC_WEAK_FUNC(sub_82230290);
PPC_FUNC_IMPL(__imp__sub_82230290) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,1084(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1084);
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822302c8
	if (!ctx.cr6.gt) goto loc_822302C8;
loc_822302AC:
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822302d0
	if (ctx.cr6.eq) goto loc_822302D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822302ac
	if (ctx.cr6.lt) goto loc_822302AC;
loc_822302C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822302D0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822302D8"))) PPC_WEAK_FUNC(sub_822302D8);
PPC_FUNC_IMPL(__imp__sub_822302D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82232d88
	ctx.lr = 0x822302F4;
	sub_82232D88(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82230370
	if (ctx.cr6.lt) goto loc_82230370;
	// beq cr6,0x82230348
	if (ctx.cr6.eq) goto loc_82230348;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82230324
	if (ctx.cr6.lt) goto loc_82230324;
loc_8223030C:
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
loc_82230324:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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
loc_82230348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230290
	ctx.lr = 0x82230350;
	sub_82230290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223030c
	if (ctx.cr6.eq) goto loc_8223030C;
	// lbz r3,25(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
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
loc_82230370:
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
}

__attribute__((alias("__imp__sub_82230388"))) PPC_WEAK_FUNC(sub_82230388);
PPC_FUNC_IMPL(__imp__sub_82230388) {
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
	// bl 0x82230290
	ctx.lr = 0x82230398;
	sub_82230290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822303b4
	if (ctx.cr6.eq) goto loc_822303B4;
	// lbz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822303B4:
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

__attribute__((alias("__imp__sub_822303C8"))) PPC_WEAK_FUNC(sub_822303C8);
PPC_FUNC_IMPL(__imp__sub_822303C8) {
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
	// bl 0x82230290
	ctx.lr = 0x822303D8;
	sub_82230290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822303f4
	if (ctx.cr6.eq) goto loc_822303F4;
	// lbz r3,27(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822303F4:
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

__attribute__((alias("__imp__sub_82230408"))) PPC_WEAK_FUNC(sub_82230408);
PPC_FUNC_IMPL(__imp__sub_82230408) {
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
	// bl 0x82230290
	ctx.lr = 0x82230418;
	sub_82230290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230434
	if (ctx.cr6.eq) goto loc_82230434;
	// lbz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82230434:
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

__attribute__((alias("__imp__sub_82230448"))) PPC_WEAK_FUNC(sub_82230448);
PPC_FUNC_IMPL(__imp__sub_82230448) {
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
	// bl 0x82230290
	ctx.lr = 0x82230458;
	sub_82230290(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230474
	if (ctx.cr6.eq) goto loc_82230474;
	// lbz r3,30(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82230474:
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

__attribute__((alias("__imp__sub_82230488"))) PPC_WEAK_FUNC(sub_82230488);
PPC_FUNC_IMPL(__imp__sub_82230488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82230490;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822304b0
	if (ctx.cr6.eq) goto loc_822304B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822304B0;
	sub_82183E40(ctx, base);
loc_822304B0:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r7,93(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r5,95(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// bl 0x82183078
	ctx.lr = 0x822304F8;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x82230504;
	sub_821837D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lis r4,2047
	ctx.r4.s64 = 134152192;
	// rlwinm r29,r11,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 65535;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r11,1084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1084, ctx.r11.u32);
	// ble cr6,0x82230528
	if (!ctx.cr6.gt) goto loc_82230528;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82230528:
	// bl 0x82183850
	ctx.lr = 0x8223052C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82230544
	if (ctx.cr6.eq) goto loc_82230544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82230540;
	sub_82183448(ctx, base);
	// b 0x82230550
	goto loc_82230550;
loc_82230544:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82230550;
	sub_821845A0(ctx, base);
loc_82230550:
	// lwz r10,1084(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1084);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// stw r3,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822305d8
	if (!ctx.cr6.gt) goto loc_822305D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8223056C:
	// lwz r9,1080(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82230584:
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82230584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230584;
	// lwz r10,1080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r10,1084(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1084);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8223056c
	if (ctx.cr6.lt) goto loc_8223056C;
loc_822305D8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r27,15472(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223064c
	if (ctx.cr6.eq) goto loc_8223064C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8223064c
	if (!ctx.cr6.gt) goto loc_8223064C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822305F8:
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,30(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223063c
	if (ctx.cr6.eq) goto loc_8223063C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// bl 0x82170988
	ctx.lr = 0x82230618;
	sub_82170988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82230638
	if (!ctx.cr6.eq) goto loc_82230638;
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r26,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r26.u8);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r26,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r26.u8);
loc_82230638:
	// lwz r10,1084(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1084);
loc_8223063C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822305f8
	if (ctx.cr6.lt) goto loc_822305F8;
loc_8223064C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82230654;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223065C"))) PPC_WEAK_FUNC(sub_8223065C);
PPC_FUNC_IMPL(__imp__sub_8223065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230660"))) PPC_WEAK_FUNC(sub_82230660);
PPC_FUNC_IMPL(__imp__sub_82230660) {
	PPC_FUNC_PROLOGUE();
	// b 0x82230488
	sub_82230488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82230664"))) PPC_WEAK_FUNC(sub_82230664);
PPC_FUNC_IMPL(__imp__sub_82230664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230668"))) PPC_WEAK_FUNC(sub_82230668);
PPC_FUNC_IMPL(__imp__sub_82230668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,756
	ctx.r10.s64 = ctx.r4.s64 * 756;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230678"))) PPC_WEAK_FUNC(sub_82230678);
PPC_FUNC_IMPL(__imp__sub_82230678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,756
	ctx.r10.s64 = ctx.r4.s64 * 756;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223068C"))) PPC_WEAK_FUNC(sub_8223068C);
PPC_FUNC_IMPL(__imp__sub_8223068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230690"))) PPC_WEAK_FUNC(sub_82230690);
PPC_FUNC_IMPL(__imp__sub_82230690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,756
	ctx.r10.s64 = ctx.r4.s64 * 756;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822306A8"))) PPC_WEAK_FUNC(sub_822306A8);
PPC_FUNC_IMPL(__imp__sub_822306A8) {
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
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x822306CC;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822306ec
	if (ctx.cr6.eq) goto loc_822306EC;
	// li r5,752
	ctx.r5.s64 = 752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82230740
	goto loc_82230740;
loc_822306EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82230c00
	ctx.lr = 0x822306F4;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82230718
	if (ctx.cr6.eq) goto loc_82230718;
	// bl 0x8209eda0
	ctx.lr = 0x82230704;
	sub_8209EDA0(ctx, base);
	// bl 0x82163e58
	ctx.lr = 0x82230708;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,752
	ctx.r5.s64 = 752;
	// b 0x82230740
	goto loc_82230740;
loc_82230718:
	// bl 0x82164ad8
	ctx.lr = 0x8223071C;
	sub_82164AD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// bl 0x821847a8
	ctx.lr = 0x8223072C;
	sub_821847A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82164a48
	ctx.lr = 0x82230734;
	sub_82164A48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
loc_82230740:
	// bl 0x821847a8
	ctx.lr = 0x82230744;
	sub_821847A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230f68
	ctx.lr = 0x8223074C;
	sub_82230F68(ctx, base);
	// stw r3,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8223076C"))) PPC_WEAK_FUNC(sub_8223076C);
PPC_FUNC_IMPL(__imp__sub_8223076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230770"))) PPC_WEAK_FUNC(sub_82230770);
PPC_FUNC_IMPL(__imp__sub_82230770) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230798
	if (ctx.cr6.eq) goto loc_82230798;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82230798;
	sub_82183E40(ctx, base);
loc_82230798:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822307B4"))) PPC_WEAK_FUNC(sub_822307B4);
PPC_FUNC_IMPL(__imp__sub_822307B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822307B8"))) PPC_WEAK_FUNC(sub_822307B8);
PPC_FUNC_IMPL(__imp__sub_822307B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822307C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x822307D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822307ec
	if (ctx.cr6.eq) goto loc_822307EC;
	// li r3,6804
	ctx.r3.s64 = 6804;
	// bl 0x82183448
	ctx.lr = 0x822307E8;
	sub_82183448(ctx, base);
	// b 0x822307f4
	goto loc_822307F4;
loc_822307EC:
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x821845a0
	ctx.lr = 0x822307F4;
	sub_821845A0(ctx, base);
loc_822307F4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230848
	if (ctx.cr6.eq) goto loc_82230848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82230808:
	// addi r11,r31,752
	ctx.r11.s64 = ctx.r31.s64 + 752;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// bl 0x8214a400
	ctx.lr = 0x82230814;
	sub_8214A400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164060
	ctx.lr = 0x8223081C;
	sub_82164060(ctx, base);
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82230828;
	sub_822AA648(ctx, base);
	// stw r29,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,756
	ctx.r31.s64 = ctx.r31.s64 + 756;
	// bge 0x82230808
	if (!ctx.cr0.lt) goto loc_82230808;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82230848:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223085C"))) PPC_WEAK_FUNC(sub_8223085C);
PPC_FUNC_IMPL(__imp__sub_8223085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230860"))) PPC_WEAK_FUNC(sub_82230860);
PPC_FUNC_IMPL(__imp__sub_82230860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82230868;
	sub_82248788(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8214a400
	ctx.lr = 0x82230884;
	sub_8214A400(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82164060
	ctx.lr = 0x8223088C;
	sub_82164060(ctx, base);
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x82230898;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,756
	ctx.r4.s64 = 756;
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x822308AC;
	sub_822AA648(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822306a8
	ctx.lr = 0x822308C0;
	sub_822306A8(ctx, base);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// li r10,5
	ctx.r10.s64 = 5;
	// divw. r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822308d8
	if (!ctx.cr0.lt) goto loc_822308D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822308e4
	goto loc_822308E4;
loc_822308D8:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x822308e4
	if (!ctx.cr6.gt) goto loc_822308E4;
	// li r11,19
	ctx.r11.s64 = 19;
loc_822308E4:
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822308fc
	if (!ctx.cr0.lt) goto loc_822308FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82230908
	goto loc_82230908;
loc_822308FC:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x82230908
	if (!ctx.cr6.gt) goto loc_82230908;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82230908:
	// lbz r7,98(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82230920
	if (!ctx.cr0.lt) goto loc_82230920;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8223092c
	goto loc_8223092C;
loc_82230920:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x8223092c
	if (!ctx.cr6.gt) goto loc_8223092C;
	// li r11,19
	ctx.r11.s64 = 19;
loc_8223092C:
	// lbz r7,99(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82230944
	if (!ctx.cr0.lt) goto loc_82230944;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82230950
	goto loc_82230950;
loc_82230944:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x82230950
	if (!ctx.cr6.gt) goto loc_82230950;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82230950:
	// lbz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82230968
	if (!ctx.cr0.lt) goto loc_82230968;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82230974
	goto loc_82230974;
loc_82230968:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x82230974
	if (!ctx.cr6.gt) goto loc_82230974;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82230974:
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8223098c
	if (!ctx.cr0.lt) goto loc_8223098C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82230998
	goto loc_82230998;
loc_8223098C:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x82230998
	if (!ctx.cr6.gt) goto loc_82230998;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82230998:
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822309b0
	if (!ctx.cr0.lt) goto loc_822309B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822309bc
	goto loc_822309BC;
loc_822309B0:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x822309bc
	if (!ctx.cr6.gt) goto loc_822309BC;
	// li r11,19
	ctx.r11.s64 = 19;
loc_822309BC:
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822309d4
	if (!ctx.cr0.lt) goto loc_822309D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822309e0
	goto loc_822309E0;
loc_822309D4:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x822309e0
	if (!ctx.cr6.gt) goto loc_822309E0;
	// li r11,19
	ctx.r11.s64 = 19;
loc_822309E0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r31,r31,756
	ctx.r31.s64 = ctx.r31.s64 * 756;
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// li r5,752
	ctx.r5.s64 = 752;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x82230A00;
	sub_821847A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,848(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r8,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r8.u32);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82230A1C"))) PPC_WEAK_FUNC(sub_82230A1C);
PPC_FUNC_IMPL(__imp__sub_82230A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230A20"))) PPC_WEAK_FUNC(sub_82230A20);
PPC_FUNC_IMPL(__imp__sub_82230A20) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230a58
	if (ctx.cr6.eq) goto loc_82230A58;
	// bl 0x8218c460
	ctx.lr = 0x82230A48;
	sub_8218C460(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82230a58
	if (ctx.cr6.gt) goto loc_82230A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82230a60
	goto loc_82230A60;
loc_82230A58:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,9680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9680);
loc_82230A60:
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

__attribute__((alias("__imp__sub_82230A78"))) PPC_WEAK_FUNC(sub_82230A78);
PPC_FUNC_IMPL(__imp__sub_82230A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// ori r10,r11,52429
	ctx.r10.u64 = ctx.r11.u64 | 52429;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230A9C"))) PPC_WEAK_FUNC(sub_82230A9C);
PPC_FUNC_IMPL(__imp__sub_82230A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230AA0"))) PPC_WEAK_FUNC(sub_82230AA0);
PPC_FUNC_IMPL(__imp__sub_82230AA0) {
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
	// bl 0x82165300
	ctx.lr = 0x82230AB0;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,30
	ctx.r3.s64 = ctx.r3.s64 + 30;
	// bne cr6,0x82230ac0
	if (!ctx.cr6.eq) goto loc_82230AC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82230AC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230AD0"))) PPC_WEAK_FUNC(sub_82230AD0);
PPC_FUNC_IMPL(__imp__sub_82230AD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82230ae4
	if (!ctx.cr6.eq) goto loc_82230AE4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,9680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9680);
	// blr 
	return;
loc_82230AE4:
	// addi r3,r3,30
	ctx.r3.s64 = ctx.r3.s64 + 30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230AEC"))) PPC_WEAK_FUNC(sub_82230AEC);
PPC_FUNC_IMPL(__imp__sub_82230AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230AF0"))) PPC_WEAK_FUNC(sub_82230AF0);
PPC_FUNC_IMPL(__imp__sub_82230AF0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230b44
	if (ctx.cr6.eq) goto loc_82230B44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82230b44
	if (ctx.cr6.eq) goto loc_82230B44;
	// addi r31,r3,30
	ctx.r31.s64 = ctx.r3.s64 + 30;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82230B28;
	sub_822AA648(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230a20
	ctx.lr = 0x82230B34;
	sub_82230A20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x82230B44;
	sub_8218A128(ctx, base);
loc_82230B44:
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

__attribute__((alias("__imp__sub_82230B5C"))) PPC_WEAK_FUNC(sub_82230B5C);
PPC_FUNC_IMPL(__imp__sub_82230B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230B60"))) PPC_WEAK_FUNC(sub_82230B60);
PPC_FUNC_IMPL(__imp__sub_82230B60) {
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
	// bl 0x82165300
	ctx.lr = 0x82230B70;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// bne cr6,0x82230b80
	if (!ctx.cr6.eq) goto loc_82230B80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82230B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230B90"))) PPC_WEAK_FUNC(sub_82230B90);
PPC_FUNC_IMPL(__imp__sub_82230B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82165300
	sub_82165300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82230B94"))) PPC_WEAK_FUNC(sub_82230B94);
PPC_FUNC_IMPL(__imp__sub_82230B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230B98"))) PPC_WEAK_FUNC(sub_82230B98);
PPC_FUNC_IMPL(__imp__sub_82230B98) {
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
	// bl 0x82164ad8
	ctx.lr = 0x82230BB0;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230bdc
	if (ctx.cr6.eq) goto loc_82230BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82230BC0;
	sub_82164AD8(ctx, base);
	// lbz r11,390(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 390);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
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
loc_82230BDC:
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_82230BF4"))) PPC_WEAK_FUNC(sub_82230BF4);
PPC_FUNC_IMPL(__imp__sub_82230BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230BF8"))) PPC_WEAK_FUNC(sub_82230BF8);
PPC_FUNC_IMPL(__imp__sub_82230BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,225
	ctx.r3.s64 = 225;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230C00"))) PPC_WEAK_FUNC(sub_82230C00);
PPC_FUNC_IMPL(__imp__sub_82230C00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82230c14
	if (ctx.cr6.lt) goto loc_82230C14;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82230C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230C1C"))) PPC_WEAK_FUNC(sub_82230C1C);
PPC_FUNC_IMPL(__imp__sub_82230C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230C20"))) PPC_WEAK_FUNC(sub_82230C20);
PPC_FUNC_IMPL(__imp__sub_82230C20) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82230c68
	if (ctx.cr6.lt) goto loc_82230C68;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x82230c68
	if (!ctx.cr6.lt) goto loc_82230C68;
	// bl 0x82165300
	ctx.lr = 0x82230C40;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230c68
	if (ctx.cr6.eq) goto loc_82230C68;
	// lbz r11,415(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 415);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82230C68:
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

__attribute__((alias("__imp__sub_82230C7C"))) PPC_WEAK_FUNC(sub_82230C7C);
PPC_FUNC_IMPL(__imp__sub_82230C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230C80"))) PPC_WEAK_FUNC(sub_82230C80);
PPC_FUNC_IMPL(__imp__sub_82230C80) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82230cd4
	if (ctx.cr6.lt) goto loc_82230CD4;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x82230cd4
	if (!ctx.cr6.lt) goto loc_82230CD4;
	// bl 0x82165300
	ctx.lr = 0x82230CA0;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230cd4
	if (ctx.cr6.eq) goto loc_82230CD4;
	// lbz r11,415(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 415);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82230cd4
	if (ctx.cr6.lt) goto loc_82230CD4;
	// beq cr6,0x82230cc0
	if (ctx.cr6.eq) goto loc_82230CC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82230cd4
	if (ctx.cr6.lt) goto loc_82230CD4;
loc_82230CC0:
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
loc_82230CD4:
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

__attribute__((alias("__imp__sub_82230CE8"))) PPC_WEAK_FUNC(sub_82230CE8);
PPC_FUNC_IMPL(__imp__sub_82230CE8) {
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
	// bl 0x82164ad8
	ctx.lr = 0x82230CF8;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82230d10
	if (!ctx.cr6.eq) goto loc_82230D10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82230D10:
	// lbz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 416);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82230D2C"))) PPC_WEAK_FUNC(sub_82230D2C);
PPC_FUNC_IMPL(__imp__sub_82230D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230D30"))) PPC_WEAK_FUNC(sub_82230D30);
PPC_FUNC_IMPL(__imp__sub_82230D30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-120
	ctx.r11.s64 = ctx.r3.s64 + -120;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230D40"))) PPC_WEAK_FUNC(sub_82230D40);
PPC_FUNC_IMPL(__imp__sub_82230D40) {
	PPC_FUNC_PROLOGUE();
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r3,4999
	ctx.xer.ca = ctx.r3.u32 <= 4999;
	ctx.r11.s64 = 4999 - ctx.r3.s64;
	// subfze r3,r10
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230D50"))) PPC_WEAK_FUNC(sub_82230D50);
PPC_FUNC_IMPL(__imp__sub_82230D50) {
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
	// bl 0x82164ad8
	ctx.lr = 0x82230D70;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82230d80
	if (!ctx.cr6.eq) goto loc_82230D80;
loc_82230D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82230dbc
	goto loc_82230DBC;
loc_82230D80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82230D88;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230d78
	if (ctx.cr6.eq) goto loc_82230D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82230D98;
	sub_82164AD8(ctx, base);
	// lhz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// bl 0x82164ad8
	ctx.lr = 0x82230DA8;
	sub_82164AD8(ctx, base);
	// lhz r10,400(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 400);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82230DBC:
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

__attribute__((alias("__imp__sub_82230DD4"))) PPC_WEAK_FUNC(sub_82230DD4);
PPC_FUNC_IMPL(__imp__sub_82230DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230DD8"))) PPC_WEAK_FUNC(sub_82230DD8);
PPC_FUNC_IMPL(__imp__sub_82230DD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// divwu r3,r3,r11
	ctx.r3.u32 = ctx.r3.u32 / ctx.r11.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230DE4"))) PPC_WEAK_FUNC(sub_82230DE4);
PPC_FUNC_IMPL(__imp__sub_82230DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230DE8"))) PPC_WEAK_FUNC(sub_82230DE8);
PPC_FUNC_IMPL(__imp__sub_82230DE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// cmplwi cr6,r3,4999
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4999, ctx.xer);
	// divwu r3,r3,r11
	ctx.r3.u32 = ctx.r3.u32 / ctx.r11.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230DF8"))) PPC_WEAK_FUNC(sub_82230DF8);
PPC_FUNC_IMPL(__imp__sub_82230DF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// blt cr6,0x82230e08
	if (ctx.cr6.lt) goto loc_82230E08;
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
loc_82230E08:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,9688
	ctx.r9.s64 = ctx.r11.s64 + 9688;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230E1C"))) PPC_WEAK_FUNC(sub_82230E1C);
PPC_FUNC_IMPL(__imp__sub_82230E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230E20"))) PPC_WEAK_FUNC(sub_82230E20);
PPC_FUNC_IMPL(__imp__sub_82230E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,10144
	ctx.r9.s64 = ctx.r11.s64 + 10144;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230E34"))) PPC_WEAK_FUNC(sub_82230E34);
PPC_FUNC_IMPL(__imp__sub_82230E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230E38"))) PPC_WEAK_FUNC(sub_82230E38);
PPC_FUNC_IMPL(__imp__sub_82230E38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// blt cr6,0x82230e48
	if (ctx.cr6.lt) goto loc_82230E48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82230E48:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10512
	ctx.r10.s64 = ctx.r11.s64 + 10512;
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230E64"))) PPC_WEAK_FUNC(sub_82230E64);
PPC_FUNC_IMPL(__imp__sub_82230E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230E68"))) PPC_WEAK_FUNC(sub_82230E68);
PPC_FUNC_IMPL(__imp__sub_82230E68) {
	PPC_FUNC_PROLOGUE();
	// li r11,125
	ctx.r11.s64 = 125;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82230e78
	if (ctx.cr6.eq) goto loc_82230E78;
	// li r11,132
	ctx.r11.s64 = 132;
loc_82230E78:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r3,r11,50
	ctx.r3.s64 = ctx.r11.s64 + 50;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230E8C"))) PPC_WEAK_FUNC(sub_82230E8C);
PPC_FUNC_IMPL(__imp__sub_82230E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230E90"))) PPC_WEAK_FUNC(sub_82230E90);
PPC_FUNC_IMPL(__imp__sub_82230E90) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230EB4"))) PPC_WEAK_FUNC(sub_82230EB4);
PPC_FUNC_IMPL(__imp__sub_82230EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230EB8"))) PPC_WEAK_FUNC(sub_82230EB8);
PPC_FUNC_IMPL(__imp__sub_82230EB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// cmplwi cr6,r3,4999
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4999, ctx.xer);
	// mulli r8,r9,100
	ctx.r8.s64 = ctx.r9.s64 * 100;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// divwu r3,r7,r10
	ctx.r3.u32 = ctx.r7.u32 / ctx.r10.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230ED8"))) PPC_WEAK_FUNC(sub_82230ED8);
PPC_FUNC_IMPL(__imp__sub_82230ED8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x82230f00
	if (ctx.cr6.lt) goto loc_82230F00;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x82230f00
	if (!ctx.cr6.lt) goto loc_82230F00;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82230F00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82230f4c
	if (ctx.cr6.lt) goto loc_82230F4C;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bge cr6,0x82230f14
	if (!ctx.cr6.lt) goto loc_82230F14;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82230F14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82230f4c
	if (ctx.cr6.lt) goto loc_82230F4C;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x82230f4c
	if (!ctx.cr6.lt) goto loc_82230F4C;
	// bl 0x82165300
	ctx.lr = 0x82230F28;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230f4c
	if (ctx.cr6.eq) goto loc_82230F4C;
	// lbz r11,415(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 415);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82230f50
	if (!ctx.cr6.eq) goto loc_82230F50;
loc_82230F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82230F50:
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

__attribute__((alias("__imp__sub_82230F64"))) PPC_WEAK_FUNC(sub_82230F64);
PPC_FUNC_IMPL(__imp__sub_82230F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230F68"))) PPC_WEAK_FUNC(sub_82230F68);
PPC_FUNC_IMPL(__imp__sub_82230F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,3(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lfs f0,-600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -600);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f13,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82230FE4"))) PPC_WEAK_FUNC(sub_82230FE4);
PPC_FUNC_IMPL(__imp__sub_82230FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230FE8"))) PPC_WEAK_FUNC(sub_82230FE8);
PPC_FUNC_IMPL(__imp__sub_82230FE8) {
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
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// blt cr6,0x82231010
	if (ctx.cr6.lt) goto loc_82231010;
loc_82230FFC:
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
loc_82231010:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82231034
	if (ctx.cr6.lt) goto loc_82231034;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bge cr6,0x82231034
	if (!ctx.cr6.lt) goto loc_82231034;
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
loc_82231034:
	// bl 0x82164ad8
	ctx.lr = 0x82231038;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230ffc
	if (ctx.cr6.eq) goto loc_82230FFC;
	// lbz r11,414(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 414);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8223105C"))) PPC_WEAK_FUNC(sub_8223105C);
PPC_FUNC_IMPL(__imp__sub_8223105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231060"))) PPC_WEAK_FUNC(sub_82231060);
PPC_FUNC_IMPL(__imp__sub_82231060) {
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
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x8223108c
	if (ctx.cr6.lt) goto loc_8223108C;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x8223108c
	if (!ctx.cr6.lt) goto loc_8223108C;
	// bl 0x82230c20
	ctx.lr = 0x82231080;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82231090
	if (ctx.cr6.eq) goto loc_82231090;
loc_8223108C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82231090:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822310A0"))) PPC_WEAK_FUNC(sub_822310A0);
PPC_FUNC_IMPL(__imp__sub_822310A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// cmplwi cr6,r3,4999
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4999, ctx.xer);
	// divwu r3,r3,r11
	ctx.r3.u32 = ctx.r3.u32 / ctx.r11.u32;
	// b 0x82230fe8
	sub_82230FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822310B0"))) PPC_WEAK_FUNC(sub_822310B0);
PPC_FUNC_IMPL(__imp__sub_822310B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x822310e0
	if (ctx.cr6.lt) goto loc_822310E0;
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// bge cr6,0x822310e0
	if (!ctx.cr6.lt) goto loc_822310E0;
	// bl 0x82230c20
	ctx.lr = 0x822310D8;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82231184
	if (ctx.cr6.eq) goto loc_82231184;
loc_822310E0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82231118
	if (ctx.cr6.lt) goto loc_82231118;
	// cmpwi cr6,r31,225
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 225, ctx.xer);
	// bge cr6,0x82231118
	if (!ctx.cr6.lt) goto loc_82231118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82165300
	ctx.lr = 0x822310F8;
	sub_82165300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82231118
	if (ctx.cr6.eq) goto loc_82231118;
	// lbz r11,415(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 415);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82231184
	if (!ctx.cr6.eq) goto loc_82231184;
loc_82231118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82231120;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82231134
	if (ctx.cr6.eq) goto loc_82231134;
	// lbz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231184
	if (!ctx.cr6.eq) goto loc_82231184;
loc_82231134:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8223116c
	if (ctx.cr6.lt) goto loc_8223116C;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x8223116c
	if (!ctx.cr6.lt) goto loc_8223116C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x8223114C;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223116c
	if (ctx.cr6.eq) goto loc_8223116C;
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
loc_8223116C:
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
loc_82231184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164ad8
	ctx.lr = 0x8223118C;
	sub_82164AD8(ctx, base);
	// lbz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 392);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822311B0"))) PPC_WEAK_FUNC(sub_822311B0);
PPC_FUNC_IMPL(__imp__sub_822311B0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,13
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 13, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bgt cr6,0x822312e4
	if (ctx.cr6.gt) goto loc_822312E4;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4584
	ctx.r12.s64 = ctx.r12.s64 + 4584;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,4640(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// lwz r17,4648(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4648);
	// lwz r17,4656(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4656);
	// lwz r17,4664(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4664);
	// lwz r17,4672(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4672);
	// lwz r17,4680(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// lwz r17,4688(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4688);
	// lwz r17,4696(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4696);
	// lwz r17,4704(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4704);
	// lwz r17,4712(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// lwz r17,4720(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4720);
	// lwz r17,4764(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4764);
	// lwz r17,4816(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4816);
	// lwz r17,4824(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4824);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x822312dc
	goto loc_822312DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820c9e18
	ctx.lr = 0x82231278;
	sub_820C9E18(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f0,-604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -604);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x822312dc
	goto loc_822312DC;
	// li r4,19
	ctx.r4.s64 = 19;
loc_822312DC:
	// addi r3,r11,968
	ctx.r3.s64 = ctx.r11.s64 + 968;
	// bl 0x820c6d40
	ctx.lr = 0x822312E4;
	sub_820C6D40(ctx, base);
loc_822312E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822312F4"))) PPC_WEAK_FUNC(sub_822312F4);
PPC_FUNC_IMPL(__imp__sub_822312F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822312F8"))) PPC_WEAK_FUNC(sub_822312F8);
PPC_FUNC_IMPL(__imp__sub_822312F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82231300;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82231340
	if (!ctx.cr6.eq) goto loc_82231340;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82231340:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x8223134C;
	sub_822AA648(ctx, base);
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x822314b4
	if (ctx.cr6.eq) goto loc_822314B4;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// beq cr6,0x8223145c
	if (ctx.cr6.eq) goto loc_8223145C;
	// cmpwi cr6,r29,13
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 13, ctx.xer);
	// beq cr6,0x822313bc
	if (ctx.cr6.eq) goto loc_822313BC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8223139c
	if (ctx.cr6.eq) goto loc_8223139C;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-580
	ctx.r5.s64 = ctx.r11.s64 + -580;
	// bl 0x8218a5f0
	ctx.lr = 0x8223138C;
	sub_8218A5F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223139C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// bl 0x8218a5f0
	ctx.lr = 0x822313AC;
	sub_8218A5F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822313BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822313cc
	if (ctx.cr6.eq) goto loc_822313CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x822313e0
	goto loc_822313E0;
loc_822313CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164ad8
	ctx.lr = 0x822313D4;
	sub_82164AD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822313e4
	if (ctx.cr6.eq) goto loc_822313E4;
loc_822313E0:
	// lbz r11,413(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 413);
loc_822313E4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82231434
	if (ctx.cr6.lt) goto loc_82231434;
	// bne cr6,0x8223151c
	if (!ctx.cr6.eq) goto loc_8223151C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,20034
	ctx.r4.s64 = 20034;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8223140C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82231424;
	sub_8218A5F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82231434:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r25
	ctx.r5.s64 = ctx.r25.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084038
	ctx.lr = 0x8223144C;
	sub_82084038(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223145C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82231494
	if (ctx.cr6.eq) goto loc_82231494;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,-588
	ctx.r5.s64 = ctx.r11.s64 + -588;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8218a5f0
	ctx.lr = 0x82231484;
	sub_8218A5F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82231494:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-596
	ctx.r5.s64 = ctx.r11.s64 + -596;
	// bl 0x8218a5f0
	ctx.lr = 0x822314A4;
	sub_8218A5F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822314B4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822314ec
	if (ctx.cr6.lt) goto loc_822314EC;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// bge cr6,0x822314ec
	if (!ctx.cr6.lt) goto loc_822314EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,8324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x82084228
	ctx.lr = 0x822314DC;
	sub_82084228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822314EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164ad8
	ctx.lr = 0x822314F4;
	sub_82164AD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223151c
	if (ctx.cr6.eq) goto loc_8223151C;
	// lbz r7,389(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 389);
	// li r8,4
	ctx.r8.s64 = 4;
	// lbz r6,291(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 291);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,97(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// bl 0x82083ae8
	ctx.lr = 0x8223151C;
	sub_82083AE8(ctx, base);
loc_8223151C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223152C"))) PPC_WEAK_FUNC(sub_8223152C);
PPC_FUNC_IMPL(__imp__sub_8223152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231530"))) PPC_WEAK_FUNC(sub_82231530);
PPC_FUNC_IMPL(__imp__sub_82231530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82231538;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82231558
	if (ctx.cr6.lt) goto loc_82231558;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blt cr6,0x82231640
	if (ctx.cr6.lt) goto loc_82231640;
loc_82231558:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,-8964
	ctx.r31.s64 = ctx.r11.s64 + -8964;
	// beq cr6,0x822315b8
	if (ctx.cr6.eq) goto loc_822315B8;
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// lwz r3,-8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8964);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8209f008
	ctx.lr = 0x82231598;
	sub_8209F008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x822315A4;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822315f0
	if (ctx.cr6.eq) goto loc_822315F0;
loc_822315AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822315B8:
	// li r28,6
	ctx.r28.s64 = 6;
loc_822315BC:
	// add r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8209f008
	ctx.lr = 0x822315D0;
	sub_8209F008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x822315DC;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822315ac
	if (!ctx.cr6.eq) goto loc_822315AC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bge cr6,0x822315bc
	if (!ctx.cr6.lt) goto loc_822315BC;
loc_822315F0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82231634
	if (ctx.cr6.eq) goto loc_82231634;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8209f008
	ctx.lr = 0x82231608;
	sub_8209F008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x82231614;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82231634
	if (!ctx.cr6.eq) goto loc_82231634;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82231530
	ctx.lr = 0x8223162C;
	sub_82231530(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82231634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82231640:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82231664"))) PPC_WEAK_FUNC(sub_82231664);
PPC_FUNC_IMPL(__imp__sub_82231664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231668"))) PPC_WEAK_FUNC(sub_82231668);
PPC_FUNC_IMPL(__imp__sub_82231668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82231670;
	sub_82248788(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-8540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223169c
	if (!ctx.cr6.eq) goto loc_8223169C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8223169C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822316c0
	if (ctx.cr6.lt) goto loc_822316C0;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x822316c0
	if (!ctx.cr6.lt) goto loc_822316C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x822316B8;
	sub_82163E58(ctx, base);
	// lwz r11,-8540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8540);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822316C0:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,1696
	ctx.r30.s64 = ctx.r11.s64 + 1696;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822316D8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822316d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822316D8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8260
	ctx.lr = 0x822316F0;
	sub_820C8260(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c7290
	ctx.lr = 0x822316F8;
	sub_820C7290(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x82231710;
	sub_820CA128(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82231730
	if (ctx.cr6.eq) goto loc_82231730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822311b0
	ctx.lr = 0x82231728;
	sub_822311B0(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82231730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82231738;
	sub_82164AD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822311b0
	ctx.lr = 0x82231744;
	sub_822311B0(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223174C"))) PPC_WEAK_FUNC(sub_8223174C);
PPC_FUNC_IMPL(__imp__sub_8223174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231750"))) PPC_WEAK_FUNC(sub_82231750);
PPC_FUNC_IMPL(__imp__sub_82231750) {
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
	// bl 0x82231668
	ctx.lr = 0x82231760;
	sub_82231668(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223177C"))) PPC_WEAK_FUNC(sub_8223177C);
PPC_FUNC_IMPL(__imp__sub_8223177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231780"))) PPC_WEAK_FUNC(sub_82231780);
PPC_FUNC_IMPL(__imp__sub_82231780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82231788;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x82231668
	ctx.lr = 0x822317A4;
	sub_82231668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231668
	ctx.lr = 0x822317B4;
	sub_82231668(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822312f8
	ctx.lr = 0x822317DC;
	sub_822312F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822317E8"))) PPC_WEAK_FUNC(sub_822317E8);
PPC_FUNC_IMPL(__imp__sub_822317E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822317F0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x82231668
	ctx.lr = 0x8223180C;
	sub_82231668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231668
	ctx.lr = 0x8223181C;
	sub_82231668(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822312f8
	ctx.lr = 0x82231844;
	sub_822312F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82231850"))) PPC_WEAK_FUNC(sub_82231850);
PPC_FUNC_IMPL(__imp__sub_82231850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82231858;
	sub_82248788(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231888
	if (!ctx.cr6.eq) goto loc_82231888;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82231888:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1696
	ctx.r31.s64 = ctx.r11.s64 + 1696;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822318A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822318a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822318A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c8438
	ctx.lr = 0x822318B8;
	sub_820C8438(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c7290
	ctx.lr = 0x822318C0;
	sub_820C7290(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca128
	ctx.lr = 0x822318D8;
	sub_820CA128(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822311b0
	ctx.lr = 0x822318E8;
	sub_822311B0(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822318F0"))) PPC_WEAK_FUNC(sub_822318F0);
PPC_FUNC_IMPL(__imp__sub_822318F0) {
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
	// bl 0x82231850
	ctx.lr = 0x82231900;
	sub_82231850(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223191C"))) PPC_WEAK_FUNC(sub_8223191C);
PPC_FUNC_IMPL(__imp__sub_8223191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231920"))) PPC_WEAK_FUNC(sub_82231920);
PPC_FUNC_IMPL(__imp__sub_82231920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82231928;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82231850
	ctx.lr = 0x82231948;
	sub_82231850(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231850
	ctx.lr = 0x8223195C;
	sub_82231850(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822312f8
	ctx.lr = 0x82231984;
	sub_822312F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82231990"))) PPC_WEAK_FUNC(sub_82231990);
PPC_FUNC_IMPL(__imp__sub_82231990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82231998;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82231850
	ctx.lr = 0x822319B8;
	sub_82231850(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231850
	ctx.lr = 0x822319CC;
	sub_82231850(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822312f8
	ctx.lr = 0x822319F4;
	sub_822312F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82231A00"))) PPC_WEAK_FUNC(sub_82231A00);
PPC_FUNC_IMPL(__imp__sub_82231A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82231A08;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r11,135
	ctx.r11.s64 = 135;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r28,r3,876
	ctx.r28.s64 = ctx.r3.s64 + 876;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// li r29,8
	ctx.r29.s64 = 8;
	// li r26,512
	ctx.r26.s64 = 512;
loc_82231A38:
	// stw r26,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r26.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// bl 0x822aa648
	ctx.lr = 0x82231A64;
	sub_822AA648(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x82231A70;
	sub_822AA648(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r30,8(r28)
	ea = 8 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// bne 0x82231a38
	if (!ctx.cr0.eq) goto loc_82231A38;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82231A8C"))) PPC_WEAK_FUNC(sub_82231A8C);
PPC_FUNC_IMPL(__imp__sub_82231A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231A90"))) PPC_WEAK_FUNC(sub_82231A90);
PPC_FUNC_IMPL(__imp__sub_82231A90) {
	PPC_FUNC_PROLOGUE();
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231A9C"))) PPC_WEAK_FUNC(sub_82231A9C);
PPC_FUNC_IMPL(__imp__sub_82231A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231AA0"))) PPC_WEAK_FUNC(sub_82231AA0);
PPC_FUNC_IMPL(__imp__sub_82231AA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231AA8"))) PPC_WEAK_FUNC(sub_82231AA8);
PPC_FUNC_IMPL(__imp__sub_82231AA8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82233448
	ctx.lr = 0x82231AC8;
	sub_82233448(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82231ADC:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x82231af8
	if (!ctx.cr6.lt) goto loc_82231AF8;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// b 0x82231afc
	goto loc_82231AFC;
loc_82231AF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82231AFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82231adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231ADC;
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

__attribute__((alias("__imp__sub_82231B1C"))) PPC_WEAK_FUNC(sub_82231B1C);
PPC_FUNC_IMPL(__imp__sub_82231B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231B20"))) PPC_WEAK_FUNC(sub_82231B20);
PPC_FUNC_IMPL(__imp__sub_82231B20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,50
	ctx.r11.s64 = ctx.r4.s64 + 50;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231B30"))) PPC_WEAK_FUNC(sub_82231B30);
PPC_FUNC_IMPL(__imp__sub_82231B30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231B38"))) PPC_WEAK_FUNC(sub_82231B38);
PPC_FUNC_IMPL(__imp__sub_82231B38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231B40"))) PPC_WEAK_FUNC(sub_82231B40);
PPC_FUNC_IMPL(__imp__sub_82231B40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,50
	ctx.r11.s64 = ctx.r4.s64 + 50;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231B50"))) PPC_WEAK_FUNC(sub_82231B50);
PPC_FUNC_IMPL(__imp__sub_82231B50) {
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
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,752
	ctx.r5.s64 = 752;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// bl 0x821847a8
	ctx.lr = 0x82231B7C;
	sub_821847A8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82231B98"))) PPC_WEAK_FUNC(sub_82231B98);
PPC_FUNC_IMPL(__imp__sub_82231B98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x8216be50
	sub_8216BE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231BAC"))) PPC_WEAK_FUNC(sub_82231BAC);
PPC_FUNC_IMPL(__imp__sub_82231BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231BB0"))) PPC_WEAK_FUNC(sub_82231BB0);
PPC_FUNC_IMPL(__imp__sub_82231BB0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x8216be60
	sub_8216BE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231BC4"))) PPC_WEAK_FUNC(sub_82231BC4);
PPC_FUNC_IMPL(__imp__sub_82231BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231BC8"))) PPC_WEAK_FUNC(sub_82231BC8);
PPC_FUNC_IMPL(__imp__sub_82231BC8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x8216be70
	sub_8216BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231BE8"))) PPC_WEAK_FUNC(sub_82231BE8);
PPC_FUNC_IMPL(__imp__sub_82231BE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32288
	ctx.r3.s64 = ctx.r3.s64 + 32288;
	// b 0x82231a00
	sub_82231A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231BF0"))) PPC_WEAK_FUNC(sub_82231BF0);
PPC_FUNC_IMPL(__imp__sub_82231BF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32288
	ctx.r3.s64 = ctx.r3.s64 + 32288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231BF8"))) PPC_WEAK_FUNC(sub_82231BF8);
PPC_FUNC_IMPL(__imp__sub_82231BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32316);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,32304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32304);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,4146
	ctx.r9.s64 = ctx.r11.s64 + 4146;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82231c34
	if (ctx.cr6.eq) goto loc_82231C34;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231c2c
	if (!ctx.cr6.eq) goto loc_82231C2C;
	// stw r7,32320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32320, ctx.r7.u32);
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x82231c34
	goto loc_82231C34;
loc_82231C2C:
	// stw r8,32320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32320, ctx.r8.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82231C34:
	// lwz r11,32424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32424);
	// lwz r10,32412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32412);
	// addi r9,r11,4146
	ctx.r9.s64 = ctx.r11.s64 + 4146;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82231c68
	if (ctx.cr6.eq) goto loc_82231C68;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231c60
	if (!ctx.cr6.eq) goto loc_82231C60;
	// stw r7,32428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32428, ctx.r7.u32);
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x82231c68
	goto loc_82231C68;
loc_82231C60:
	// stw r8,32428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32428, ctx.r8.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82231C68:
	// lwz r11,32532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32532);
	// lwz r10,32520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32520);
	// addi r9,r11,4146
	ctx.r9.s64 = ctx.r11.s64 + 4146;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82231c9c
	if (ctx.cr6.eq) goto loc_82231C9C;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231c94
	if (!ctx.cr6.eq) goto loc_82231C94;
	// stw r7,32536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32536, ctx.r7.u32);
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x82231c9c
	goto loc_82231C9C;
loc_82231C94:
	// stw r8,32536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32536, ctx.r8.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82231C9C:
	// lwz r11,32640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32640);
	// lwz r10,32628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32628);
	// addi r9,r11,4146
	ctx.r9.s64 = ctx.r11.s64 + 4146;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82231cd0
	if (ctx.cr6.eq) goto loc_82231CD0;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231cc8
	if (!ctx.cr6.eq) goto loc_82231CC8;
	// stw r7,32644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32644, ctx.r7.u32);
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x82231cd0
	goto loc_82231CD0;
loc_82231CC8:
	// stw r8,32644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32644, ctx.r8.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82231CD0:
	// lwz r11,32748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32748);
	// lwz r10,32736(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32736);
	// addi r9,r11,4146
	ctx.r9.s64 = ctx.r11.s64 + 4146;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82231d04
	if (ctx.cr6.eq) goto loc_82231D04;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231cfc
	if (!ctx.cr6.eq) goto loc_82231CFC;
	// stw r7,32752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32752, ctx.r7.u32);
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x82231d04
	goto loc_82231D04;
loc_82231CFC:
	// stw r8,32752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32752, ctx.r8.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82231D04:
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-32692
	ctx.r11.s64 = ctx.r11.s64 + -32692;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,4146
	ctx.r6.s64 = ctx.r10.s64 + 4146;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82231d38
	if (!ctx.cr6.eq) goto loc_82231D38;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// blr 
	return;
loc_82231D38:
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231D44"))) PPC_WEAK_FUNC(sub_82231D44);
PPC_FUNC_IMPL(__imp__sub_82231D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231D48"))) PPC_WEAK_FUNC(sub_82231D48);
PPC_FUNC_IMPL(__imp__sub_82231D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32304);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// beq cr6,0x82231d6c
	if (ctx.cr6.eq) goto loc_82231D6C;
	// lwz r10,32316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32316);
	// stw r11,32320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32320, ctx.r11.u32);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82231D6C:
	// lwz r10,32412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32412);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// beq cr6,0x82231d8c
	if (ctx.cr6.eq) goto loc_82231D8C;
	// stw r11,32428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32428, ctx.r11.u32);
	// lwz r10,32424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32424);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82231D8C:
	// lwz r10,32520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32520);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// beq cr6,0x82231dac
	if (ctx.cr6.eq) goto loc_82231DAC;
	// stw r11,32536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32536, ctx.r11.u32);
	// lwz r10,32532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32532);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82231DAC:
	// lwz r10,32628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32628);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// beq cr6,0x82231dcc
	if (ctx.cr6.eq) goto loc_82231DCC;
	// stw r11,32644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32644, ctx.r11.u32);
	// lwz r10,32640(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32640);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82231DCC:
	// lwz r10,32736(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32736);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// beq cr6,0x82231dec
	if (ctx.cr6.eq) goto loc_82231DEC;
	// stw r11,32752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32752, ctx.r11.u32);
	// lwz r10,32748(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32748);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82231DEC:
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-32692
	ctx.r10.s64 = ctx.r10.s64 + -32692;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,4146
	ctx.r10.s64 = ctx.r10.s64 + 4146;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231E18"))) PPC_WEAK_FUNC(sub_82231E18);
PPC_FUNC_IMPL(__imp__sub_82231E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82231E20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,32288
	ctx.r31.s64 = ctx.r3.s64 + 32288;
	// li r30,29
	ctx.r30.s64 = 29;
loc_82231E30:
	// addi r31,r31,-1040
	ctx.r31.s64 = ctx.r31.s64 + -1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82231E3C;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82231e30
	if (!ctx.cr0.lt) goto loc_82231E30;
	// addi r29,r29,240
	ctx.r29.s64 = ctx.r29.s64 + 240;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,848
	ctx.r31.s64 = ctx.r29.s64 + 848;
loc_82231E50:
	// addi r31,r31,-276
	ctx.r31.s64 = ctx.r31.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82231E5C;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82231e50
	if (!ctx.cr0.lt) goto loc_82231E50;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x8209eda0
	ctx.lr = 0x82231E6C;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82231E74"))) PPC_WEAK_FUNC(sub_82231E74);
PPC_FUNC_IMPL(__imp__sub_82231E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231E78"))) PPC_WEAK_FUNC(sub_82231E78);
PPC_FUNC_IMPL(__imp__sub_82231E78) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,1096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1096, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231E88"))) PPC_WEAK_FUNC(sub_82231E88);
PPC_FUNC_IMPL(__imp__sub_82231E88) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,1101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1101, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231E98"))) PPC_WEAK_FUNC(sub_82231E98);
PPC_FUNC_IMPL(__imp__sub_82231E98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,1109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1109, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231EA8"))) PPC_WEAK_FUNC(sub_82231EA8);
PPC_FUNC_IMPL(__imp__sub_82231EA8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,1328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1328, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231EB8"))) PPC_WEAK_FUNC(sub_82231EB8);
PPC_FUNC_IMPL(__imp__sub_82231EB8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,1332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1332, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231EC8"))) PPC_WEAK_FUNC(sub_82231EC8);
PPC_FUNC_IMPL(__imp__sub_82231EC8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,1336(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1336, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231ED8"))) PPC_WEAK_FUNC(sub_82231ED8);
PPC_FUNC_IMPL(__imp__sub_82231ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82231EE0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,225
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 225, ctx.xer);
	// blt cr6,0x82231f10
	if (ctx.cr6.lt) goto loc_82231F10;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82231F08;
	sub_8216BFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82231F10:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231530
	ctx.lr = 0x82231F20;
	sub_82231530(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82231f38
	if (!ctx.cr6.eq) goto loc_82231F38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230b90
	ctx.lr = 0x82231F34;
	sub_82230B90(ctx, base);
	// lbz r29,21(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
loc_82231F38:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// beq cr6,0x82231f7c
	if (ctx.cr6.eq) goto loc_82231F7C;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// lbz r8,130(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 130);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lbz r7,136(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// lbz r6,113(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 113);
	// stb r6,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// lbz r5,114(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82231F7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82231FA4"))) PPC_WEAK_FUNC(sub_82231FA4);
PPC_FUNC_IMPL(__imp__sub_82231FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231FA8"))) PPC_WEAK_FUNC(sub_82231FA8);
PPC_FUNC_IMPL(__imp__sub_82231FA8) {
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
	// bl 0x8215bd60
	ctx.lr = 0x82231FC0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82232040
	if (!ctx.cr6.eq) goto loc_82232040;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82232040
	if (ctx.cr6.gt) goto loc_82232040;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8176
	ctx.r12.s64 = ctx.r12.s64 + 8176;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8256);
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
	// lwz r17,8232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8232);
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
loc_82232040:
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

__attribute__((alias("__imp__sub_82232058"))) PPC_WEAK_FUNC(sub_82232058);
PPC_FUNC_IMPL(__imp__sub_82232058) {
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
	// lwz r10,1104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x82232084
	if (ctx.cr6.eq) goto loc_82232084;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82232084:
	// lwz r10,2144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x82232094
	if (ctx.cr6.eq) goto loc_82232094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82232094:
	// lwz r10,3184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3184);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x822320a4
	if (ctx.cr6.eq) goto loc_822320A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822320A4:
	// lwz r10,4224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x822320b4
	if (ctx.cr6.eq) goto loc_822320B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822320B4:
	// lwz r10,5264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5264);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x822320c4
	if (ctx.cr6.eq) goto loc_822320C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822320C4:
	// lwz r10,6304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6304);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1096
	ctx.r11.s64 = ctx.r30.s64 + 1096;
loc_822320D0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,51200
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 51200, ctx.xer);
	// beq cr6,0x822320e8
	if (ctx.cr6.eq) goto loc_822320E8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x822320f8
	if (ctx.cr6.eq) goto loc_822320F8;
loc_822320E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x822320d0
	if (ctx.cr6.lt) goto loc_822320D0;
loc_822320F8:
	// addi r31,r30,260
	ctx.r31.s64 = ctx.r30.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82232104;
	sub_8216BFD0(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// li r3,30
	ctx.r3.s64 = 30;
	// stb r11,303(r30)
	PPC_STORE_U8(ctx.r30.u32 + 303, ctx.r11.u8);
	// bl 0x8215bd28
	ctx.lr = 0x82232114;
	sub_8215BD28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,276
	ctx.r5.s64 = 276;
	// bl 0x821847a8
	ctx.lr = 0x82232120;
	sub_821847A8(ctx, base);
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

__attribute__((alias("__imp__sub_82232138"))) PPC_WEAK_FUNC(sub_82232138);
PPC_FUNC_IMPL(__imp__sub_82232138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82232140;
	sub_82248780(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8223214C;
	sub_8215BEC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// bl 0x821847a8
	ctx.lr = 0x82232164;
	sub_821847A8(ctx, base);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// li r4,480
	ctx.r4.s64 = 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82232174;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215be98
	ctx.lr = 0x8223217C;
	sub_8215BE98(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r30,580
	ctx.r3.s64 = ctx.r30.s64 + 580;
	// bl 0x821847a8
	ctx.lr = 0x8223218C;
	sub_821847A8(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// addi r3,r30,656
	ctx.r3.s64 = ctx.r30.s64 + 656;
	// bl 0x821847a8
	ctx.lr = 0x8223219C;
	sub_821847A8(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_822321AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215bd28
	ctx.lr = 0x822321B4;
	sub_8215BD28(ctx, base);
	// bl 0x8216bfd0
	ctx.lr = 0x822321B8;
	sub_8216BFD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x8215bd28
	ctx.lr = 0x822321C4;
	sub_8215BD28(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r28,43(r3)
	PPC_STORE_U8(ctx.r3.u32 + 43, ctx.r28.u8);
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// blt cr6,0x822321ac
	if (ctx.cr6.lt) goto loc_822321AC;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82232214
	if (ctx.cr6.eq) goto loc_82232214;
	// lbz r11,1101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1101);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,1100(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1100);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x82232214
	if (!ctx.cr6.eq) goto loc_82232214;
	// lbz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1092);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_82232214:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82232250
	if (ctx.cr6.eq) goto loc_82232250;
	// lbz r11,2141(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2141);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,2140(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2140);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x82232250
	if (!ctx.cr6.eq) goto loc_82232250;
	// lbz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2132);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_82232250:
	// lwz r11,3184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x8223228c
	if (ctx.cr6.eq) goto loc_8223228C;
	// lbz r11,3181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3181);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,3180(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3180);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x8223228c
	if (!ctx.cr6.eq) goto loc_8223228C;
	// lbz r11,3172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3172);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_8223228C:
	// lwz r11,4224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4224);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x822322c8
	if (ctx.cr6.eq) goto loc_822322C8;
	// lbz r11,4221(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4221);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,4220(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4220);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x822322c8
	if (!ctx.cr6.eq) goto loc_822322C8;
	// lbz r11,4212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4212);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_822322C8:
	// lwz r11,5264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5264);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82232304
	if (ctx.cr6.eq) goto loc_82232304;
	// lbz r11,5261(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5261);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,5260(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5260);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x82232304
	if (!ctx.cr6.eq) goto loc_82232304;
	// lbz r11,5252(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5252);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_82232304:
	// lwz r11,6304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82232340
	if (ctx.cr6.eq) goto loc_82232340;
	// lbz r11,6301(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6301);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,6300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6300);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// bne cr6,0x82232340
	if (!ctx.cr6.eq) goto loc_82232340;
	// lbz r11,6292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6292);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
loc_82232340:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r31,1088
	ctx.r28.s64 = ctx.r31.s64 + 1088;
loc_82232348:
	// cmplwi cr6,r29,30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 30, ctx.xer);
	// bge cr6,0x82232378
	if (!ctx.cr6.lt) goto loc_82232378;
	// stb r29,43(r28)
	PPC_STORE_U8(ctx.r28.u32 + 43, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215bd28
	ctx.lr = 0x8223235C;
	sub_8215BD28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,276
	ctx.r5.s64 = 276;
	// bl 0x821847a8
	ctx.lr = 0x82232368;
	sub_821847A8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1040
	ctx.r28.s64 = ctx.r28.s64 + 1040;
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// blt cr6,0x82232348
	if (ctx.cr6.lt) goto loc_82232348;
loc_82232378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232058
	ctx.lr = 0x82232380;
	sub_82232058(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stb r11,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r11.u8);
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// stb r26,70(r30)
	PPC_STORE_U8(ctx.r30.u32 + 70, ctx.r26.u8);
	// stb r26,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r26.u8);
	// stb r27,71(r30)
	PPC_STORE_U8(ctx.r30.u32 + 71, ctx.r27.u8);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822323c0
	if (ctx.cr6.eq) goto loc_822323C0;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822323c0
	if (ctx.cr6.eq) goto loc_822323C0;
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822323c0
	if (!ctx.cr6.eq) goto loc_822323C0;
	// stb r26,71(r30)
	PPC_STORE_U8(ctx.r30.u32 + 71, ctx.r26.u8);
loc_822323C0:
	// stb r26,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r9.u8);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,85(r30)
	PPC_STORE_U8(ctx.r30.u32 + 85, ctx.r6.u8);
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,86(r30)
	PPC_STORE_U8(ctx.r30.u32 + 86, ctx.r11.u8);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,87(r30)
	PPC_STORE_U8(ctx.r30.u32 + 87, ctx.r8.u8);
	// bl 0x82231fa8
	ctx.lr = 0x8223240C;
	sub_82231FA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82232438
	if (ctx.cr6.eq) goto loc_82232438;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82232438
	if (ctx.cr6.eq) goto loc_82232438;
	// stb r27,90(r30)
	PPC_STORE_U8(ctx.r30.u32 + 90, ctx.r27.u8);
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// stb r11,91(r30)
	PPC_STORE_U8(ctx.r30.u32 + 91, ctx.r11.u8);
	// lbz r10,181(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// stb r10,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r10.u8);
	// b 0x82232448
	goto loc_82232448;
loc_82232438:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r26,90(r30)
	PPC_STORE_U8(ctx.r30.u32 + 90, ctx.r26.u8);
	// stb r11,91(r30)
	PPC_STORE_U8(ctx.r30.u32 + 91, ctx.r11.u8);
	// stb r11,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r11.u8);
loc_82232448:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// stb r26,93(r30)
	PPC_STORE_U8(ctx.r30.u32 + 93, ctx.r26.u8);
	// lwz r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r8,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r8.u8);
	// lbz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// stb r6,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r6.u8);
	// lwz r27,1088(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1088);
	// bl 0x8216bf50
	ctx.lr = 0x8223247C;
	sub_8216BF50(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
loc_82232484:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8215bd28
	ctx.lr = 0x8223248C;
	sub_8215BD28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x822324e4
	if (ctx.cr6.eq) goto loc_822324E4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bge cr6,0x822324c0
	if (!ctx.cr6.lt) goto loc_822324C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 * 1040;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822324c0
	if (ctx.cr6.eq) goto loc_822324C0;
	// addi r28,r11,1376
	ctx.r28.s64 = ctx.r11.s64 + 1376;
loc_822324C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8215bd28
	ctx.lr = 0x822324C8;
	sub_8215BD28(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230de8
	ctx.lr = 0x822324D0;
	sub_82230DE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82230860
	ctx.lr = 0x822324E4;
	sub_82230860(ctx, base);
loc_822324E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x82232484
	if (ctx.cr6.lt) goto loc_82232484;
	// bl 0x8215bd18
	ctx.lr = 0x822324F8;
	sub_8215BD18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x82232500;
	sub_8215BD28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215bd18
	ctx.lr = 0x82232508;
	sub_8215BD18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162470
	ctx.lr = 0x82232510;
	sub_82162470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,9108
	ctx.r5.s64 = 9108;
	// bl 0x821847a8
	ctx.lr = 0x8223251C;
	sub_821847A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223252C"))) PPC_WEAK_FUNC(sub_8223252C);
PPC_FUNC_IMPL(__imp__sub_8223252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232530"))) PPC_WEAK_FUNC(sub_82232530);
PPC_FUNC_IMPL(__imp__sub_82232530) {
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
	// bl 0x82232138
	ctx.lr = 0x82232540;
	sub_82232138(ctx, base);
	// bl 0x8215bd40
	ctx.lr = 0x82232544;
	sub_8215BD40(ctx, base);
	// bl 0x821714e8
	ctx.lr = 0x82232548;
	sub_821714E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232558"))) PPC_WEAK_FUNC(sub_82232558);
PPC_FUNC_IMPL(__imp__sub_82232558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82232560;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8223256C;
	sub_8215BEC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r21,r3,100
	ctx.r21.s64 = ctx.r3.s64 + 100;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822327a0
	if (!ctx.cr6.eq) goto loc_822327A0;
	// lwz r11,32288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822327a0
	if (!ctx.cr6.eq) goto loc_822327A0;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r8,303(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r22,r11,-5052
	ctx.r22.s64 = ctx.r11.s64 + -5052;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r25,16170
	ctx.r25.s64 = 16170;
	// stw r10,32296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32296, ctx.r10.u32);
	// stw r9,32292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32292, ctx.r9.u32);
	// addi r26,r30,1096
	ctx.r26.s64 = ctx.r30.s64 + 1096;
	// stw r8,32300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32300, ctx.r8.u32);
	// addi r28,r30,32312
	ctx.r28.s64 = ctx.r30.s64 + 32312;
	// li r20,-1
	ctx.r20.s64 = -1;
loc_822325C4:
	// lwz r11,268(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,-8(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8, ctx.r11.u32);
	// bl 0x8216c098
	ctx.lr = 0x822325D4;
	sub_8216C098(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82232680
	if (ctx.cr6.eq) goto loc_82232680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216c098
	ctx.lr = 0x822325E4;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x822325E8;
	sub_8215BD28(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230eb8
	ctx.lr = 0x822325F0;
	sub_82230EB8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r11.u32);
	// lbz r10,5(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lbz r7,-4(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + -4);
	// stw r7,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r7.u32);
	// lbz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82232620
	if (!ctx.cr6.eq) goto loc_82232620;
	// stw r20,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r20.u32);
loc_82232620:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232634
	if (ctx.cr6.eq) goto loc_82232634;
	// lbz r11,570(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_82232634:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,22
	ctx.r31.s64 = 22;
loc_8223263C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216c098
	ctx.lr = 0x82232644;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82232648;
	sub_8215BD28(ctx, base);
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// lhzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// blt cr6,0x8223263c
	if (ctx.cr6.lt) goto loc_8223263C;
	// bl 0x8215bec8
	ctx.lr = 0x8223266C;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r23
	ctx.r11.u64 = ctx.r3.u64 + ctx.r23.u64;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82248a40
	ctx.lr = 0x82232680;
	sub_82248A40(ctx, base);
loc_82232680:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r11,r22,24
	ctx.r11.s64 = ctx.r22.s64 + 24;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,1040
	ctx.r26.s64 = ctx.r26.s64 + 1040;
	// addi r25,r25,54
	ctx.r25.s64 = ctx.r25.s64 + 54;
	// addi r23,r23,52
	ctx.r23.s64 = ctx.r23.s64 + 52;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822325c4
	if (ctx.cr6.lt) goto loc_822325C4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8223279c
	if (ctx.cr6.gt) goto loc_8223279C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822326dc
	// bdzf 4*cr6+eq,0x822326dc
	// bdzf 4*cr6+eq,0x82232734
	// bdzf 4*cr6+eq,0x8223279c
	// bdzf 4*cr6+eq,0x8223279c
	// bdzf 4*cr6+eq,0x8223279c
	// bne cr6,0x82232734
	if (!ctx.cr6.eq) goto loc_82232734;
loc_822326DC:
	// lbz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8209eda0
	ctx.lr = 0x822326E8;
	sub_8209EDA0(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x822326EC;
	sub_8215BD28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x82231bf8
	ctx.lr = 0x82232700;
	sub_82231BF8(ctx, base);
	// lbz r8,8(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// mulli r11,r7,108
	ctx.r11.s64 = ctx.r7.s64 * 108;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r31,32332(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32332, ctx.r31.u32);
	// lbz r5,9(r21)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r21.u32 + 9);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r31,32332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32332, ctx.r31.u32);
	// stw r31,32288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32288, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82232734:
	// lbz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82232794
	if (ctx.cr6.eq) goto loc_82232794;
	// bl 0x8216c098
	ctx.lr = 0x82232748;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8223274C;
	sub_8215BD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x82231bf8
	ctx.lr = 0x82232760;
	sub_82231BF8(ctx, base);
	// lbz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r11,r8,108
	ctx.r11.s64 = ctx.r8.s64 * 108;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r31,32332(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32332, ctx.r31.u32);
	// lbz r6,9(r21)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r21.u32 + 9);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// mulli r11,r5,108
	ctx.r11.s64 = ctx.r5.s64 * 108;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r31,32332(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32332, ctx.r31.u32);
	// stw r31,32288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32288, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82232794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231d48
	ctx.lr = 0x8223279C;
	sub_82231D48(ctx, base);
loc_8223279C:
	// stw r31,32288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32288, ctx.r31.u32);
loc_822327A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_822327A8"))) PPC_WEAK_FUNC(sub_822327A8);
PPC_FUNC_IMPL(__imp__sub_822327A8) {
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
	// mulli r11,r4,1040
	ctx.r11.s64 = ctx.r4.s64 * 1040;
	// cmpwi cr6,r5,225
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 225, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x8223280c
	if (!ctx.cr6.eq) goto loc_8223280C;
	// addi r31,r11,1088
	ctx.r31.s64 = ctx.r11.s64 + 1088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x822327D4;
	sub_8216BFD0(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r4,752
	ctx.r4.s64 = 752;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x822aa648
	ctx.lr = 0x822327F8;
	sub_822AA648(ctx, base);
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
loc_8223280C:
	// stw r5,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r5.u32);
	// addi r4,r11,1088
	ctx.r4.s64 = ctx.r11.s64 + 1088;
	// bl 0x82231ed8
	ctx.lr = 0x82232818;
	sub_82231ED8(ctx, base);
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

__attribute__((alias("__imp__sub_8223282C"))) PPC_WEAK_FUNC(sub_8223282C);
PPC_FUNC_IMPL(__imp__sub_8223282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232830"))) PPC_WEAK_FUNC(sub_82232830);
PPC_FUNC_IMPL(__imp__sub_82232830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82232838;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// addi r31,r3,260
	ctx.r31.s64 = ctx.r3.s64 + 260;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82232850;
	sub_8216BFD0(ctx, base);
	// lwz r30,248(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// cmpwi cr6,r30,225
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 225, ctx.xer);
	// beq cr6,0x822328bc
	if (ctx.cr6.eq) goto loc_822328BC;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r30,225
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 225, ctx.xer);
	// stw r28,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r28.u32);
	// blt cr6,0x8223287c
	if (ctx.cr6.lt) goto loc_8223287C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82232874;
	sub_8216BFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8223287C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231530
	ctx.lr = 0x8223288C;
	sub_82231530(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230b90
	ctx.lr = 0x82232898;
	sub_82230B90(ctx, base);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
loc_822328BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822328C4"))) PPC_WEAK_FUNC(sub_822328C4);
PPC_FUNC_IMPL(__imp__sub_822328C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822328C8"))) PPC_WEAK_FUNC(sub_822328C8);
PPC_FUNC_IMPL(__imp__sub_822328C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822328D0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r4,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// addi r28,r3,252
	ctx.r28.s64 = ctx.r3.s64 + 252;
	// stw r26,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r26.u32);
	// addi r31,r3,556
	ctx.r31.s64 = ctx.r3.s64 + 556;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r24,4
	ctx.r24.s64 = 4;
loc_822328F8:
	// addi r27,r31,-20
	ctx.r27.s64 = ctx.r31.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82232904;
	sub_8216BFD0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,225
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 225, ctx.xer);
	// beq cr6,0x82232978
	if (ctx.cr6.eq) goto loc_82232978;
	// stw r24,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r24.u32);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r29,225
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 225, ctx.xer);
	// blt cr6,0x8223292c
	if (ctx.cr6.lt) goto loc_8223292C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216bfd0
	ctx.lr = 0x82232928;
	sub_8216BFD0(ctx, base);
	// b 0x82232978
	goto loc_82232978;
loc_8223292C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82231530
	ctx.lr = 0x8223293C;
	sub_82231530(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230b90
	ctx.lr = 0x82232948;
	sub_82230B90(ctx, base);
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r26,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r26.u8);
	// stb r26,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r26.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r9,130(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 130);
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
	// lbz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// stb r8,-19(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19, ctx.r8.u8);
	// lbz r7,113(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 113);
	// stb r7,-18(r31)
	PPC_STORE_U8(ctx.r31.u32 + -18, ctx.r7.u8);
	// lbz r6,114(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 114);
	// stb r6,-17(r31)
	PPC_STORE_U8(ctx.r31.u32 + -17, ctx.r6.u8);
loc_82232978:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// bne 0x822328f8
	if (!ctx.cr0.eq) goto loc_822328F8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82232990"))) PPC_WEAK_FUNC(sub_82232990);
PPC_FUNC_IMPL(__imp__sub_82232990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82232998;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,240
	ctx.r31.s64 = ctx.r3.s64 + 240;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8216c0e8
	ctx.lr = 0x822329BC;
	sub_8216C0E8(ctx, base);
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822329C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c0e8
	ctx.lr = 0x822329CC;
	sub_8216C0E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// bge 0x822329c4
	if (!ctx.cr0.lt) goto loc_822329C4;
	// addi r31,r29,1088
	ctx.r31.s64 = ctx.r29.s64 + 1088;
	// li r30,29
	ctx.r30.s64 = 29;
loc_822329E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216c0e8
	ctx.lr = 0x822329E8;
	sub_8216C0E8(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x8214a400
	ctx.lr = 0x822329F0;
	sub_8214A400(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x82164060
	ctx.lr = 0x822329F8;
	sub_82164060(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1040
	ctx.r31.s64 = ctx.r31.s64 + 1040;
	// bge 0x822329e0
	if (!ctx.cr0.lt) goto loc_822329E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82232A10"))) PPC_WEAK_FUNC(sub_82232A10);
PPC_FUNC_IMPL(__imp__sub_82232A10) {
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
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232A2C;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232830
	ctx.lr = 0x82232A38;
	sub_82232830(ctx, base);
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

__attribute__((alias("__imp__sub_82232A4C"))) PPC_WEAK_FUNC(sub_82232A4C);
PPC_FUNC_IMPL(__imp__sub_82232A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232A50"))) PPC_WEAK_FUNC(sub_82232A50);
PPC_FUNC_IMPL(__imp__sub_82232A50) {
	PPC_FUNC_PROLOGUE();
	// li r4,225
	ctx.r4.s64 = 225;
	// b 0x82232830
	sub_82232830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82232A58"))) PPC_WEAK_FUNC(sub_82232A58);
PPC_FUNC_IMPL(__imp__sub_82232A58) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232A7C;
	sub_82230BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232A8C;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822328c8
	ctx.lr = 0x82232A9C;
	sub_822328C8(ctx, base);
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

__attribute__((alias("__imp__sub_82232AB4"))) PPC_WEAK_FUNC(sub_82232AB4);
PPC_FUNC_IMPL(__imp__sub_82232AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232AB8"))) PPC_WEAK_FUNC(sub_82232AB8);
PPC_FUNC_IMPL(__imp__sub_82232AB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,225
	ctx.r5.s64 = 225;
	// li r4,225
	ctx.r4.s64 = 225;
	// b 0x822328c8
	sub_822328C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82232AC4"))) PPC_WEAK_FUNC(sub_82232AC4);
PPC_FUNC_IMPL(__imp__sub_82232AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232AC8"))) PPC_WEAK_FUNC(sub_82232AC8);
PPC_FUNC_IMPL(__imp__sub_82232AC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82232d88
	ctx.lr = 0x82232AEC;
	sub_82232D88(ctx, base);
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// bne cr6,0x82232b00
	if (!ctx.cr6.eq) goto loc_82232B00;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// b 0x82232b04
	goto loc_82232B04;
loc_82232B00:
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
loc_82232B04:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232B0C;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232830
	ctx.lr = 0x82232B18;
	sub_82232830(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232B24;
	sub_82230BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232B34;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822328c8
	ctx.lr = 0x82232B44;
	sub_822328C8(ctx, base);
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

__attribute__((alias("__imp__sub_82232B5C"))) PPC_WEAK_FUNC(sub_82232B5C);
PPC_FUNC_IMPL(__imp__sub_82232B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232B60"))) PPC_WEAK_FUNC(sub_82232B60);
PPC_FUNC_IMPL(__imp__sub_82232B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82232B68;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x82232ba4
	if (!ctx.cr6.eq) goto loc_82232BA4;
	// bl 0x82163ee8
	ctx.lr = 0x82232B88;
	sub_82163EE8(ctx, base);
	// addi r5,r3,2296
	ctx.r5.s64 = ctx.r3.s64 + 2296;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822334b0
	ctx.lr = 0x82232B98;
	sub_822334B0(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82232B9C;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// b 0x82232bb4
	goto loc_82232BB4;
loc_82232BA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x822334b0
	ctx.lr = 0x82232BB0;
	sub_822334B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82232BB4:
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821847a8
	ctx.lr = 0x82232BC0;
	sub_821847A8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82232BC4;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2372
	ctx.r4.s64 = ctx.r3.s64 + 2372;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x821847a8
	ctx.lr = 0x82232BD4;
	sub_821847A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stb r27,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r27.u32);
	// stw r27,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r27.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stb r11,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r11.u8);
	// stb r11,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r11.u8);
	// stb r11,183(r31)
	PPC_STORE_U8(ctx.r31.u32 + 183, ctx.r11.u8);
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82231aa8
	ctx.lr = 0x82232C1C;
	sub_82231AA8(ctx, base);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82232d88
	ctx.lr = 0x82232C34;
	sub_82232D88(ctx, base);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// bl 0x82230bf8
	ctx.lr = 0x82232C40;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232830
	ctx.lr = 0x82232C4C;
	sub_82232830(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232C58;
	sub_82230BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82230bf8
	ctx.lr = 0x82232C68;
	sub_82230BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822328c8
	ctx.lr = 0x82232C78;
	sub_822328C8(ctx, base);
	// addi r30,r31,1368
	ctx.r30.s64 = ctx.r31.s64 + 1368;
	// li r28,30
	ctx.r28.s64 = 30;
	// li r26,512
	ctx.r26.s64 = 512;
loc_82232C84:
	// addi r3,r30,-280
	ctx.r3.s64 = ctx.r30.s64 + -280;
	// bl 0x8216bfd0
	ctx.lr = 0x82232C8C;
	sub_8216BFD0(ctx, base);
	// stw r26,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r26.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// li r4,752
	ctx.r4.s64 = 752;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x82232CA4;
	sub_822AA648(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1040
	ctx.r30.s64 = ctx.r30.s64 + 1040;
	// bne 0x82232c84
	if (!ctx.cr0.eq) goto loc_82232C84;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
loc_82232CB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82232dd8
	ctx.lr = 0x82232CC4;
	sub_82232DD8(ctx, base);
	// stb r3,1045(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1045, ctx.r3.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82232da8
	ctx.lr = 0x82232CD4;
	sub_82232DA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,1040(r29)
	ea = 1040 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82232cb8
	if (ctx.cr6.lt) goto loc_82232CB8;
	// addi r3,r31,32288
	ctx.r3.s64 = ctx.r31.s64 + 32288;
	// bl 0x82231a00
	ctx.lr = 0x82232CEC;
	sub_82231A00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82232CF4"))) PPC_WEAK_FUNC(sub_82232CF4);
PPC_FUNC_IMPL(__imp__sub_82232CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232CF8"))) PPC_WEAK_FUNC(sub_82232CF8);
PPC_FUNC_IMPL(__imp__sub_82232CF8) {
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
	// bl 0x82183850
	ctx.lr = 0x82232D0C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82232d24
	if (ctx.cr6.eq) goto loc_82232D24;
	// li r3,18360
	ctx.r3.s64 = 18360;
	// bl 0x82183448
	ctx.lr = 0x82232D20;
	sub_82183448(ctx, base);
	// b 0x82232d2c
	goto loc_82232D2C;
loc_82232D24:
	// li r3,1148
	ctx.r3.s64 = 1148;
	// bl 0x821845a0
	ctx.lr = 0x82232D2C;
	sub_821845A0(ctx, base);
loc_82232D2C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82232d68
	if (ctx.cr6.eq) goto loc_82232D68;
	// li r4,9720
	ctx.r4.s64 = 9720;
	// bl 0x822aa648
	ctx.lr = 0x82232D40;
	sub_822AA648(ctx, base);
	// li r4,8640
	ctx.r4.s64 = 8640;
	// addi r3,r31,9720
	ctx.r3.s64 = ctx.r31.s64 + 9720;
	// bl 0x822aa648
	ctx.lr = 0x82232D4C;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r31,1096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1096, ctx.r31.u32);
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
loc_82232D68:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1096, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82232D88"))) PPC_WEAK_FUNC(sub_82232D88);
PPC_FUNC_IMPL(__imp__sub_82232D88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,1096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1096);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232DA4"))) PPC_WEAK_FUNC(sub_82232DA4);
PPC_FUNC_IMPL(__imp__sub_82232DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232DA8"))) PPC_WEAK_FUNC(sub_82232DA8);
PPC_FUNC_IMPL(__imp__sub_82232DA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,1096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232DD8"))) PPC_WEAK_FUNC(sub_82232DD8);
PPC_FUNC_IMPL(__imp__sub_82232DD8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,1096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,19(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232E04"))) PPC_WEAK_FUNC(sub_82232E04);
PPC_FUNC_IMPL(__imp__sub_82232E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232E08"))) PPC_WEAK_FUNC(sub_82232E08);
PPC_FUNC_IMPL(__imp__sub_82232E08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,1096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1096);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232E2C"))) PPC_WEAK_FUNC(sub_82232E2C);
PPC_FUNC_IMPL(__imp__sub_82232E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232E30"))) PPC_WEAK_FUNC(sub_82232E30);
PPC_FUNC_IMPL(__imp__sub_82232E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,9720
	ctx.r3.s64 = ctx.r11.s64 + 9720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232E48"))) PPC_WEAK_FUNC(sub_82232E48);
PPC_FUNC_IMPL(__imp__sub_82232E48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lbz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r6,11(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r5,10(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r8,14(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lbz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r6,17(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lbz r9,39(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// lbz r8,38(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lbz r5,42(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lbz r4,41(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// lbz r6,43(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lbz r9,51(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// lbz r8,50(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// lbz r7,49(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// lbz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r6,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r6.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// lbz r4,53(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// lbz r9,55(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// lbz r6,59(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 59);
	// lbz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lbz r4,58(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// lbz r7,57(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lbz r9,62(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// lbz r8,63(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 63);
	// lbz r7,61(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// lbz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// lbz r5,67(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 67);
	// lbz r4,66(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233048"))) PPC_WEAK_FUNC(sub_82233048);
PPC_FUNC_IMPL(__imp__sub_82233048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82233050;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// li r30,135
	ctx.r30.s64 = 135;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82233064:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82233074;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232e48
	ctx.lr = 0x8223307C;
	sub_82232E48(ctx, base);
	// stb r28,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r28.u8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x82233064
	if (!ctx.cr0.eq) goto loc_82233064;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82233098"))) PPC_WEAK_FUNC(sub_82233098);
PPC_FUNC_IMPL(__imp__sub_82233098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822330A0;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,2394
	ctx.r31.s64 = 2394;
	// addi r28,r3,9720
	ctx.r28.s64 = ctx.r3.s64 + 9720;
loc_822330B4:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x822330C4;
	sub_82248A40(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x822330C8;
	sub_82163EE8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822335a0
	ctx.lr = 0x822330D8;
	sub_822335A0(ctx, base);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpwi cr6,r31,3339
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3339, ctx.xer);
	// blt cr6,0x822330b4
	if (ctx.cr6.lt) goto loc_822330B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822331c8
	ctx.lr = 0x822330FC;
	sub_822331C8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82233100;
	sub_82163EE8(ctx, base);
	// addi r3,r3,3339
	ctx.r3.s64 = ctx.r3.s64 + 3339;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82233408
	ctx.lr = 0x8223310C;
	sub_82233408(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82233114"))) PPC_WEAK_FUNC(sub_82233114);
PPC_FUNC_IMPL(__imp__sub_82233114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233118"))) PPC_WEAK_FUNC(sub_82233118);
PPC_FUNC_IMPL(__imp__sub_82233118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82233120;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82233130;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x8223313C;
	sub_821837D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82233154
	if (!ctx.cr6.eq) goto loc_82233154;
	// bl 0x82232cf8
	ctx.lr = 0x82233150;
	sub_82232CF8(ctx, base);
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
loc_82233154:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82233048
	ctx.lr = 0x82233160;
	sub_82233048(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82233168;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

