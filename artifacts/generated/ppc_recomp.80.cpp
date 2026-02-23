#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8235EB9C"))) PPC_WEAK_FUNC(sub_8235EB9C);
PPC_FUNC_IMPL(__imp__sub_8235EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EBA0"))) PPC_WEAK_FUNC(sub_8235EBA0);
PPC_FUNC_IMPL(__imp__sub_8235EBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235EBA8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235EBBC;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x8235EBCC;
	sub_82370C48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x8235EBDC;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8235ec1c
	if (ctx.cr6.eq) goto loc_8235EC1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82371ca0
	ctx.lr = 0x8235EBFC;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8235ec1c
	if (ctx.cr6.eq) goto loc_8235EC1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82371ca0
	ctx.lr = 0x8235EC10;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ec2c
	if (!ctx.cr6.eq) goto loc_8235EC2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8235EC1C:
	// bl 0x82372340
	ctx.lr = 0x8235EC20;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8235EC2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235c990
	ctx.lr = 0x8235EC40;
	sub_8235C990(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x8235EC48;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235EC54"))) PPC_WEAK_FUNC(sub_8235EC54);
PPC_FUNC_IMPL(__imp__sub_8235EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EC58"))) PPC_WEAK_FUNC(sub_8235EC58);
PPC_FUNC_IMPL(__imp__sub_8235EC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8235EC60;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82370c48
	ctx.lr = 0x8235EC84;
	sub_82370C48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x8235EC94;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8235ecb4
	if (ctx.cr6.eq) goto loc_8235ECB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82371980
	ctx.lr = 0x8235ECA8;
	sub_82371980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ecc4
	if (!ctx.cr6.eq) goto loc_8235ECC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8235ECB4:
	// bl 0x82372340
	ctx.lr = 0x8235ECB8;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8235ECC4:
	// bl 0x8235bf58
	ctx.lr = 0x8235ECC8;
	sub_8235BF58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235c378
	ctx.lr = 0x8235ECD8;
	sub_8235C378(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c2c8
	ctx.lr = 0x8235ECE8;
	sub_8235C2C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x8235ECF0;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8235ECFC"))) PPC_WEAK_FUNC(sub_8235ECFC);
PPC_FUNC_IMPL(__imp__sub_8235ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235ED00"))) PPC_WEAK_FUNC(sub_8235ED00);
PPC_FUNC_IMPL(__imp__sub_8235ED00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235ED1C;
	sub_8235BF58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235ce80
	ctx.lr = 0x8235ED28;
	sub_8235CE80(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x8235ED3C;
	sub_8235C1B0(ctx, base);
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

__attribute__((alias("__imp__sub_8235ED58"))) PPC_WEAK_FUNC(sub_8235ED58);
PPC_FUNC_IMPL(__imp__sub_8235ED58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235ED74;
	sub_8235BF58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235ce80
	ctx.lr = 0x8235ED80;
	sub_8235CE80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8235c8a0
	ctx.lr = 0x8235ED90;
	sub_8235C8A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x8235EDA4;
	sub_8235C1B0(ctx, base);
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

__attribute__((alias("__imp__sub_8235EDC0"))) PPC_WEAK_FUNC(sub_8235EDC0);
PPC_FUNC_IMPL(__imp__sub_8235EDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235EDC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235EDE0;
	sub_8235BF58(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8235EDE4;
	sub_8235B1F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8235ee00
	if (ctx.cr6.eq) goto loc_8235EE00;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8235EE00:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8235EE10;
	sub_82358508(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8235ee60
	if (!ctx.cr6.gt) goto loc_8235EE60;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235ee44
	if (!ctx.cr6.lt) goto loc_8235EE44;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_8235EE44:
	// cmplwi cr6,r29,25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 25, ctx.xer);
	// beq cr6,0x8235ee60
	if (ctx.cr6.eq) goto loc_8235EE60;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// ble cr6,0x8235ee60
	if (!ctx.cr6.gt) goto loc_8235EE60;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_8235EE60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235EE6C"))) PPC_WEAK_FUNC(sub_8235EE6C);
PPC_FUNC_IMPL(__imp__sub_8235EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EE70"))) PPC_WEAK_FUNC(sub_8235EE70);
PPC_FUNC_IMPL(__imp__sub_8235EE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8235EE78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8235e108
	ctx.lr = 0x8235EE88;
	sub_8235E108(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EE94;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EEA8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EEBC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EED0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EEE4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235EEF8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ef08
	if (!ctx.cr6.eq) goto loc_8235EF08;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8235EF08:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8235EF28"))) PPC_WEAK_FUNC(sub_8235EF28);
PPC_FUNC_IMPL(__imp__sub_8235EF28) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8235EF3C;
	sub_8235BF58(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235c130
	ctx.lr = 0x8235EF48;
	sub_8235C130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c150
	ctx.lr = 0x8235EF50;
	sub_8235C150(ctx, base);
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

__attribute__((alias("__imp__sub_8235EF68"))) PPC_WEAK_FUNC(sub_8235EF68);
PPC_FUNC_IMPL(__imp__sub_8235EF68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235EF84;
	sub_8235BF58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235c8a0
	ctx.lr = 0x8235EF94;
	sub_8235C8A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ce80
	ctx.lr = 0x8235EFA0;
	sub_8235CE80(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x8235EFB4;
	sub_8235C1B0(ctx, base);
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

__attribute__((alias("__imp__sub_8235EFCC"))) PPC_WEAK_FUNC(sub_8235EFCC);
PPC_FUNC_IMPL(__imp__sub_8235EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EFD0"))) PPC_WEAK_FUNC(sub_8235EFD0);
PPC_FUNC_IMPL(__imp__sub_8235EFD0) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8235EFE8;
	sub_8235BF58(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235c228
	ctx.lr = 0x8235EFF4;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235f044
	if (ctx.cr6.eq) goto loc_8235F044;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8235F000:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8235F00C;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f044
	if (!ctx.cr6.eq) goto loc_8235F044;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// blt cr6,0x8235f000
	if (ctx.cr6.lt) goto loc_8235F000;
	// bl 0x8235cf68
	ctx.lr = 0x8235F024;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c270
	ctx.lr = 0x8235F044;
	sub_8235C270(ctx, base);
loc_8235F044:
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

__attribute__((alias("__imp__sub_8235F05C"))) PPC_WEAK_FUNC(sub_8235F05C);
PPC_FUNC_IMPL(__imp__sub_8235F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F060"))) PPC_WEAK_FUNC(sub_8235F060);
PPC_FUNC_IMPL(__imp__sub_8235F060) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31044
	ctx.r9.s64 = ctx.r11.s64 + 31044;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8235f094
	if (ctx.cr6.eq) goto loc_8235F094;
	// bl 0x82357128
	ctx.lr = 0x8235F090;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235F094:
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

__attribute__((alias("__imp__sub_8235F0A8"))) PPC_WEAK_FUNC(sub_8235F0A8);
PPC_FUNC_IMPL(__imp__sub_8235F0A8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31080
	ctx.r9.s64 = ctx.r11.s64 + 31080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8235f0dc
	if (ctx.cr6.eq) goto loc_8235F0DC;
	// bl 0x82357128
	ctx.lr = 0x8235F0D8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235F0DC:
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

__attribute__((alias("__imp__sub_8235F0F0"))) PPC_WEAK_FUNC(sub_8235F0F0);
PPC_FUNC_IMPL(__imp__sub_8235F0F0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31088
	ctx.r9.s64 = ctx.r11.s64 + 31088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8235f124
	if (ctx.cr6.eq) goto loc_8235F124;
	// bl 0x82357128
	ctx.lr = 0x8235F120;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235F124:
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

__attribute__((alias("__imp__sub_8235F138"))) PPC_WEAK_FUNC(sub_8235F138);
PPC_FUNC_IMPL(__imp__sub_8235F138) {
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
	// lwz r3,-5468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f174
	if (ctx.cr6.eq) goto loc_8235F174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5468, ctx.r11.u32);
loc_8235F174:
	// bl 0x8235bf58
	ctx.lr = 0x8235F178;
	sub_8235BF58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f18c
	if (ctx.cr6.eq) goto loc_8235F18C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8237d288
	ctx.lr = 0x8235F18C;
	sub_8237D288(ctx, base);
loc_8235F18C:
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

__attribute__((alias("__imp__sub_8235F1A0"))) PPC_WEAK_FUNC(sub_8235F1A0);
PPC_FUNC_IMPL(__imp__sub_8235F1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235F1A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82362380
	ctx.lr = 0x8235F1B8;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f204
	if (ctx.cr6.eq) goto loc_8235F204;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235f204
	if (ctx.cr6.eq) goto loc_8235F204;
loc_8235F1D8:
	// bl 0x82370538
	ctx.lr = 0x8235F1DC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235F1E0;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8235F1E8;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235f1f8
	if (ctx.cr6.eq) goto loc_8235F1F8;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8235f210
	if (!ctx.cr6.eq) goto loc_8235F210;
loc_8235F1F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8235f1d8
	if (ctx.cr6.lt) goto loc_8235F1D8;
loc_8235F204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8235F210:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235F220"))) PPC_WEAK_FUNC(sub_8235F220);
PPC_FUNC_IMPL(__imp__sub_8235F220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8235F228;
	sub_82248784(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x8235F234;
	sub_8235E108(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r29,r27,40
	ctx.r29.s64 = ctx.r27.s64 + 40;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f258
	if (!ctx.cr6.eq) goto loc_8235F258;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8235f324
	if (!ctx.cr6.eq) goto loc_8235F324;
loc_8235F258:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e790
	ctx.lr = 0x8235F264;
	sub_8235E790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e118
	ctx.lr = 0x8235F278;
	sub_8235E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f300
	if (!ctx.cr6.eq) goto loc_8235F300;
	// bl 0x8235bf58
	ctx.lr = 0x8235F284;
	sub_8235BF58(ctx, base);
	// stw r28,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F298;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f300
	if (!ctx.cr6.eq) goto loc_8235F300;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F2AC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f300
	if (!ctx.cr6.eq) goto loc_8235F300;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235f300
	if (ctx.cr6.eq) goto loc_8235F300;
	// bl 0x82362380
	ctx.lr = 0x8235F2C4;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f300
	if (ctx.cr6.eq) goto loc_8235F300;
	// bl 0x8235cf68
	ctx.lr = 0x8235F2D0;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x8235F2D8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235F2DC;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8235F2E0;
	sub_823708C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235F300:
	// stw r28,208(r27)
	PPC_STORE_U32(ctx.r27.u32 + 208, ctx.r28.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8235F308;
	sub_8235BF58(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8235f318
	if (ctx.cr6.gt) goto loc_8235F318;
	// stw r28,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r28.u32);
loc_8235F318:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e140
	ctx.lr = 0x8235F324;
	sub_8235E140(ctx, base);
loc_8235F324:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235f4ec
	if (!ctx.cr6.gt) goto loc_8235F4EC;
	// bl 0x8235bf58
	ctx.lr = 0x8235F334;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8235f4ec
	if (ctx.cr6.eq) goto loc_8235F4EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8235f4ec
	if (ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F358;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4e8
	if (!ctx.cr6.eq) goto loc_8235F4E8;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F36C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4e8
	if (!ctx.cr6.eq) goto loc_8235F4E8;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F380;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F394;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F3A8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F3BC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F3D0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F3E4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F3F8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f4ec
	if (!ctx.cr6.eq) goto loc_8235F4EC;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235f4e8
	if (ctx.cr6.eq) goto loc_8235F4E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8235F414;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237c490
	ctx.lr = 0x8235F420;
	sub_8237C490(ctx, base);
	// lwz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235f458
	if (!ctx.cr6.eq) goto loc_8235F458;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823692c0
	ctx.lr = 0x8235F438;
	sub_823692C0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235F448:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235f448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F448;
	// b 0x8235f4c4
	goto loc_8235F4C4;
loc_8235F458:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235f490
	if (!ctx.cr6.eq) goto loc_8235F490;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823696b0
	ctx.lr = 0x8235F470;
	sub_823696B0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235F480:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235f480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F480;
	// b 0x8235f4c4
	goto loc_8235F4C4;
loc_8235F490:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8235f4c4
	if (!ctx.cr6.eq) goto loc_8235F4C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823696b0
	ctx.lr = 0x8235F4A8;
	sub_823696B0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235F4B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235f4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F4B8;
loc_8235F4C4:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f4d8
	if (ctx.cr6.eq) goto loc_8235F4D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
loc_8235F4D8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237c1d0
	ctx.lr = 0x8235F4E0;
	sub_8237C1D0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8235F4E8:
	// stw r28,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
loc_8235F4EC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8235F4F4"))) PPC_WEAK_FUNC(sub_8235F4F4);
PPC_FUNC_IMPL(__imp__sub_8235F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F4F8"))) PPC_WEAK_FUNC(sub_8235F4F8);
PPC_FUNC_IMPL(__imp__sub_8235F4F8) {
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
	// bl 0x8235e108
	ctx.lr = 0x8235F514;
	sub_8235E108(ctx, base);
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f534
	if (!ctx.cr6.eq) goto loc_8235F534;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8235f574
	if (!ctx.cr6.eq) goto loc_8235F574;
loc_8235F534:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e790
	ctx.lr = 0x8235F540;
	sub_8235E790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f574
	if (!ctx.cr6.eq) goto loc_8235F574;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e118
	ctx.lr = 0x8235F554;
	sub_8235E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f568
	if (!ctx.cr6.eq) goto loc_8235F568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e158
	ctx.lr = 0x8235F568;
	sub_8235E158(ctx, base);
loc_8235F568:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e140
	ctx.lr = 0x8235F574;
	sub_8235E140(ctx, base);
loc_8235F574:
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

__attribute__((alias("__imp__sub_8235F58C"))) PPC_WEAK_FUNC(sub_8235F58C);
PPC_FUNC_IMPL(__imp__sub_8235F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F590"))) PPC_WEAK_FUNC(sub_8235F590);
PPC_FUNC_IMPL(__imp__sub_8235F590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8235F598;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235F5A8;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8235F5B0;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f694
	if (ctx.cr6.eq) goto loc_8235F694;
	// bl 0x8235b1f8
	ctx.lr = 0x8235F5BC;
	sub_8235B1F8(ctx, base);
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8235f694
	if (!ctx.cr6.eq) goto loc_8235F694;
	// bl 0x82370538
	ctx.lr = 0x8235F5D0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235F5D4;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8235F5D8;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8235F5E4;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235f614
	if (ctx.cr6.eq) goto loc_8235F614;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f600
	if (ctx.cr6.eq) goto loc_8235F600;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r11.u32);
loc_8235F600:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8235b6f0
	ctx.lr = 0x8235F614;
	sub_8235B6F0(ctx, base);
loc_8235F614:
	// lwz r11,4316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235f694
	if (ctx.cr6.eq) goto loc_8235F694;
	// bl 0x82370538
	ctx.lr = 0x8235F624;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235F628;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8235F62C;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c750
	ctx.lr = 0x8235F638;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235f694
	if (ctx.cr6.eq) goto loc_8235F694;
	// addi r31,r30,228
	ctx.r31.s64 = ctx.r30.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x8235F64C;
	sub_82357080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8235f668
	if (!ctx.cr6.eq) goto loc_8235F668;
	// bl 0x8237d130
	ctx.lr = 0x8235F65C;
	sub_8237D130(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8235F668:
	// lfs f31,4320(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4320);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8237d218
	ctx.lr = 0x8235F670;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8235f694
	if (!ctx.cr6.lt) goto loc_8235F694;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e970
	ctx.lr = 0x8235F684;
	sub_8235E970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x8235F68C;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8235F694;
	sub_823A86F8(ctx, base);
loc_8235F694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8235F6A0"))) PPC_WEAK_FUNC(sub_8235F6A0);
PPC_FUNC_IMPL(__imp__sub_8235F6A0) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8235F6BC;
	sub_8235BF58(ctx, base);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82362380
	ctx.lr = 0x8235F6C4;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235f72c
	if (ctx.cr6.eq) goto loc_8235F72C;
	// bl 0x823631e0
	ctx.lr = 0x8235F6D0;
	sub_823631E0(ctx, base);
	// addi r30,r30,240
	ctx.r30.s64 = ctx.r30.s64 + 240;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8235f6f4
	if (ctx.cr6.eq) goto loc_8235F6F4;
	// bl 0x823a86f8
	ctx.lr = 0x8235F6E4;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d1d0
	ctx.lr = 0x8235F6EC;
	sub_8237D1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8235f714
	goto loc_8235F714;
loc_8235F6F4:
	// bl 0x8237d218
	ctx.lr = 0x8235F6F8;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8235f72c
	if (!ctx.cr6.gt) goto loc_8235F72C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8235F710;
	sub_823A86F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_8235F714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235F72C:
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

__attribute__((alias("__imp__sub_8235F744"))) PPC_WEAK_FUNC(sub_8235F744);
PPC_FUNC_IMPL(__imp__sub_8235F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F748"))) PPC_WEAK_FUNC(sub_8235F748);
PPC_FUNC_IMPL(__imp__sub_8235F748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235F750;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235F760;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8235F768;
	sub_8235CF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8235F770;
	sub_82362380(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c4c0
	ctx.lr = 0x8235F780;
	sub_8235C4C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f7b4
	if (!ctx.cr6.eq) goto loc_8235F7B4;
	// bl 0x82370538
	ctx.lr = 0x8235F78C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235F790;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8235F794;
	sub_823708C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235F7B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235F7C0"))) PPC_WEAK_FUNC(sub_8235F7C0);
PPC_FUNC_IMPL(__imp__sub_8235F7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8235F7C8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235F7D8;
	sub_8235BF58(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8235f890
	if (ctx.cr6.gt) goto loc_8235F890;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235f830
	// bdzf 4*cr6+eq,0x8235f830
	// bne cr6,0x8235f85c
	if (!ctx.cr6.eq) goto loc_8235F85C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8235F814;
	sub_82358508(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r10.u32);
	// stw r8,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8235F830:
	// lwz r11,2988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2988);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// bne cr6,0x8235f890
	if (!ctx.cr6.eq) goto loc_8235F890;
	// lwz r11,2980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8235F85C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,2980(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8235F878;
	sub_82358508(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r30,16
	ctx.r11.u64 = ctx.r30.u64 | 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235f88c
	if (!ctx.cr6.eq) goto loc_8235F88C;
	// ori r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 | 32;
loc_8235F88C:
	// stw r11,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r11.u32);
loc_8235F890:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8235F89C"))) PPC_WEAK_FUNC(sub_8235F89C);
PPC_FUNC_IMPL(__imp__sub_8235F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F8A0"))) PPC_WEAK_FUNC(sub_8235F8A0);
PPC_FUNC_IMPL(__imp__sub_8235F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235F8A8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235F8BC;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x8235F8CC;
	sub_82370C48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x8235F8E8;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8235f91c
	if (ctx.cr6.eq) goto loc_8235F91C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82371ca0
	ctx.lr = 0x8235F8FC;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8235f91c
	if (ctx.cr6.eq) goto loc_8235F91C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82371ca0
	ctx.lr = 0x8235F910;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f92c
	if (!ctx.cr6.eq) goto loc_8235F92C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8235F91C:
	// bl 0x82372340
	ctx.lr = 0x8235F920;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8235F92C:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x8235f958
	if (!ctx.cr6.eq) goto loc_8235F958;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef68
	ctx.lr = 0x8235F944;
	sub_8235EF68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x8235F94C;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8235F958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c8a0
	ctx.lr = 0x8235F960;
	sub_8235C8A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x8235F968;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235F974"))) PPC_WEAK_FUNC(sub_8235F974);
PPC_FUNC_IMPL(__imp__sub_8235F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F978"))) PPC_WEAK_FUNC(sub_8235F978);
PPC_FUNC_IMPL(__imp__sub_8235F978) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8235F990;
	sub_8235BF58(ctx, base);
	// stw r31,2992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2992, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8235F9AC"))) PPC_WEAK_FUNC(sub_8235F9AC);
PPC_FUNC_IMPL(__imp__sub_8235F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F9B0"))) PPC_WEAK_FUNC(sub_8235F9B0);
PPC_FUNC_IMPL(__imp__sub_8235F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8235F9B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235F9C4;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x8235F9CC;
	sub_8235E108(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F9D8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fa14
	if (!ctx.cr6.eq) goto loc_8235FA14;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235F9EC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fa14
	if (!ctx.cr6.eq) goto loc_8235FA14;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8235FA00;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235fa14
	if (!ctx.cr6.eq) goto loc_8235FA14;
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fa20
	if (ctx.cr6.eq) goto loc_8235FA20;
loc_8235FA14:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8235FA20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8235FA2C"))) PPC_WEAK_FUNC(sub_8235FA2C);
PPC_FUNC_IMPL(__imp__sub_8235FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FA30"))) PPC_WEAK_FUNC(sub_8235FA30);
PPC_FUNC_IMPL(__imp__sub_8235FA30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235fa78
	// bdzf 4*cr6+eq,0x8235fa8c
	// bdzf 4*cr6+eq,0x8235faa0
	// bdzf 4*cr6+eq,0x8235fab4
	// bne cr6,0x8235fac8
	if (!ctx.cr6.eq) goto loc_8235FAC8;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235FA78:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235FA8C:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235FAA0:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235FAB4:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8235FAC8:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8235FADC"))) PPC_WEAK_FUNC(sub_8235FADC);
PPC_FUNC_IMPL(__imp__sub_8235FADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FAE0"))) PPC_WEAK_FUNC(sub_8235FAE0);
PPC_FUNC_IMPL(__imp__sub_8235FAE0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8235FAFC;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x8235FB08;
	sub_823579A0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823803f8
	ctx.lr = 0x8235FB14;
	sub_823803F8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357360
	ctx.lr = 0x8235FB20;
	sub_82357360(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235FB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823573b0
	ctx.lr = 0x8235FB44;
	sub_823573B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x8235FB4C;
	sub_823579F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_8235FB68"))) PPC_WEAK_FUNC(sub_8235FB68);
PPC_FUNC_IMPL(__imp__sub_8235FB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8235FB70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8235FB7C;
	sub_8235CF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8235FB84;
	sub_8235BF58(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fcdc
	if (ctx.cr6.eq) goto loc_8235FCDC;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// ori r31,r9,7
	ctx.r31.u64 = ctx.r9.u64 | 7;
	// ori r30,r8,2
	ctx.r30.u64 = ctx.r8.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8235fc14
	if (ctx.cr6.gt) goto loc_8235FC14;
	// beq cr6,0x8235fc08
	if (ctx.cr6.eq) goto loc_8235FC08;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8235fc5c
	if (ctx.cr6.gt) goto loc_8235FC5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fbf0
	if (ctx.cr6.eq) goto loc_8235FBF0;
	// bdz 0x8235fc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235FC5C;
	// bdz 0x8235fc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235FC5C;
	// bdz 0x8235fbe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235FBE8;
	// bdz 0x8235fbfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235FBFC;
	// b 0x8235fc5c
	goto loc_8235FC5C;
loc_8235FBE8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x8235fc5c
	goto loc_8235FC5C;
loc_8235FBF0:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r30,r11,7
	ctx.r30.u64 = ctx.r11.u64 | 7;
	// b 0x8235fc58
	goto loc_8235FC58;
loc_8235FBFC:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r30,r11,9
	ctx.r30.u64 = ctx.r11.u64 | 9;
	// b 0x8235fc58
	goto loc_8235FC58;
loc_8235FC08:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r30,r11,8
	ctx.r30.u64 = ctx.r11.u64 | 8;
	// b 0x8235fc58
	goto loc_8235FC58;
loc_8235FC14:
	// addis r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -524288;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235fc50
	if (ctx.cr0.eq) goto loc_8235FC50;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235fc44
	if (ctx.cr6.eq) goto loc_8235FC44;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8235fc5c
	if (!ctx.cr6.eq) goto loc_8235FC5C;
	// lis r31,4096
	ctx.r31.s64 = 268435456;
	// ori r31,r31,6
	ctx.r31.u64 = ctx.r31.u64 | 6;
	// b 0x8235fc5c
	goto loc_8235FC5C;
loc_8235FC44:
	// lis r30,8192
	ctx.r30.s64 = 536870912;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
	// b 0x8235fc5c
	goto loc_8235FC5C;
loc_8235FC50:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r30,r11,3
	ctx.r30.u64 = ctx.r11.u64 | 3;
loc_8235FC58:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8235FC5C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fca8
	if (ctx.cr6.eq) goto loc_8235FCA8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235fca8
	if (ctx.cr6.eq) goto loc_8235FCA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235FC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8235fca8
	if (!ctx.cr6.eq) goto loc_8235FCA8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235FCA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235FCA8:
	// bl 0x82362380
	ctx.lr = 0x8235FCAC;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235fcdc
	if (ctx.cr6.eq) goto loc_8235FCDC;
	// bl 0x82370538
	ctx.lr = 0x8235FCB8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8235FCBC;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8235FCC0;
	sub_823708C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235FCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235FCDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8235FCE8"))) PPC_WEAK_FUNC(sub_8235FCE8);
PPC_FUNC_IMPL(__imp__sub_8235FCE8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8235FD04;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235aa48
	ctx.lr = 0x8235FD10;
	sub_8235AA48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8235fd8c
	if (ctx.cr6.eq) goto loc_8235FD8C;
	// bl 0x8235ac70
	ctx.lr = 0x8235FD28;
	sub_8235AC70(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ac80
	ctx.lr = 0x8235FD34;
	sub_8235AC80(ctx, base);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235aca0
	ctx.lr = 0x8235FD40;
	sub_8235ACA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8235a988
	ctx.lr = 0x8235FD4C;
	sub_8235A988(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8235a998
	ctx.lr = 0x8235FD58;
	sub_8235A998(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8235a9a0
	ctx.lr = 0x8235FD64;
	sub_8235A9A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8235a980
	ctx.lr = 0x8235FD70;
	sub_8235A980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8235a9b0
	ctx.lr = 0x8235FD80;
	sub_8235A9B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8235fdb0
	goto loc_8235FDB0;
loc_8235FD8C:
	// bl 0x8235ac70
	ctx.lr = 0x8235FD90;
	sub_8235AC70(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ac80
	ctx.lr = 0x8235FD9C;
	sub_8235AC80(ctx, base);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235aca0
	ctx.lr = 0x8235FDA8;
	sub_8235ACA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8235FDB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8235FDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235aaf8
	ctx.lr = 0x8235FDC8;
	sub_8235AAF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8235FDE4"))) PPC_WEAK_FUNC(sub_8235FDE4);
PPC_FUNC_IMPL(__imp__sub_8235FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FDE8"))) PPC_WEAK_FUNC(sub_8235FDE8);
PPC_FUNC_IMPL(__imp__sub_8235FDE8) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235fe20
	if (ctx.cr6.eq) goto loc_8235FE20;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8235fe44
	if (!ctx.cr6.eq) goto loc_8235FE44;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x8235fe24
	goto loc_8235FE24;
loc_8235FE20:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_8235FE24:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235fe40
	if (ctx.cr6.eq) goto loc_8235FE40;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8235fe44
	if (!ctx.cr6.eq) goto loc_8235FE44;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8235fe44
	goto loc_8235FE44;
loc_8235FE40:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8235FE44:
	// bl 0x8235cf68
	ctx.lr = 0x8235FE48;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235FE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8235FE7C"))) PPC_WEAK_FUNC(sub_8235FE7C);
PPC_FUNC_IMPL(__imp__sub_8235FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FE80"))) PPC_WEAK_FUNC(sub_8235FE80);
PPC_FUNC_IMPL(__imp__sub_8235FE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8235FE88;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82362380
	ctx.lr = 0x8235FEAC;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ff10
	if (ctx.cr6.eq) goto loc_8235FF10;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8235FEC4;
	sub_82370C48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8235FED0;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8235ff0c
	if (ctx.cr6.eq) goto loc_8235FF0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82371320
	ctx.lr = 0x8235FEE4;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8235ff0c
	if (ctx.cr6.eq) goto loc_8235FF0C;
	// addi r11,r30,0
	ctx.r11.s64 = ctx.r30.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82371010
	ctx.lr = 0x8235FF00;
	sub_82371010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235ff1c
	if (!ctx.cr6.eq) goto loc_8235FF1C;
loc_8235FF08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8235FF0C:
	// bl 0x82372340
	ctx.lr = 0x8235FF10;
	sub_82372340(ctx, base);
loc_8235FF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8235FF1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235ff3c
	if (ctx.cr6.eq) goto loc_8235FF3C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823716b8
	ctx.lr = 0x8235FF34;
	sub_823716B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ff08
	if (ctx.cr6.eq) goto loc_8235FF08;
loc_8235FF3C:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823639c0
	ctx.lr = 0x8235FF5C;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8235ff0c
	if (ctx.cr6.eq) goto loc_8235FF0C;
	// bl 0x82372340
	ctx.lr = 0x8235FF6C;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8235FF78"))) PPC_WEAK_FUNC(sub_8235FF78);
PPC_FUNC_IMPL(__imp__sub_8235FF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8235FF80;
	sub_82248770(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82362380
	ctx.lr = 0x8235FFA4;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360074
	if (ctx.cr6.eq) goto loc_82360074;
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360014
	if (ctx.cr6.eq) goto loc_82360014;
loc_8235FFC0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579a0
	ctx.lr = 0x8235FFC8;
	sub_823579A0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x8235FFD8;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x8235fffc
	if (ctx.cr6.eq) goto loc_8235FFFC;
	// bl 0x82357bb8
	ctx.lr = 0x8235FFE8;
	sub_82357BB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82357048
	ctx.lr = 0x8235FFF0;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82360010
	if (!ctx.cr6.eq) goto loc_82360010;
loc_8235FFFC:
	// bl 0x823579f8
	ctx.lr = 0x82360000;
	sub_823579F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8235ffc0
	if (ctx.cr6.lt) goto loc_8235FFC0;
	// b 0x82360014
	goto loc_82360014;
loc_82360010:
	// bl 0x823579f8
	ctx.lr = 0x82360014;
	sub_823579F8(ctx, base);
loc_82360014:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82360074
	if (ctx.cr6.eq) goto loc_82360074;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82360028;
	sub_82370C48(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x82360034;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82360070
	if (ctx.cr6.eq) goto loc_82360070;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82371320
	ctx.lr = 0x82360048;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82360070
	if (ctx.cr6.eq) goto loc_82360070;
	// addi r11,r27,0
	ctx.r11.s64 = ctx.r27.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82371010
	ctx.lr = 0x82360064;
	sub_82371010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360080
	if (!ctx.cr6.eq) goto loc_82360080;
loc_8236006C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82360070:
	// bl 0x82372340
	ctx.lr = 0x82360074;
	sub_82372340(ctx, base);
loc_82360074:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82360080:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823600a0
	if (ctx.cr6.eq) goto loc_823600A0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823716b8
	ctx.lr = 0x82360098;
	sub_823716B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236006c
	if (ctx.cr6.eq) goto loc_8236006C;
loc_823600A0:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363a90
	ctx.lr = 0x823600C4;
	sub_82363A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82360070
	if (ctx.cr6.eq) goto loc_82360070;
	// bl 0x82372340
	ctx.lr = 0x823600D4;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823600E0"))) PPC_WEAK_FUNC(sub_823600E0);
PPC_FUNC_IMPL(__imp__sub_823600E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823600E8;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82362380
	ctx.lr = 0x8236010C;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360170
	if (ctx.cr6.eq) goto loc_82360170;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82360124;
	sub_82370C48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x82360130;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8236016c
	if (ctx.cr6.eq) goto loc_8236016C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82371320
	ctx.lr = 0x82360144;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8236016c
	if (ctx.cr6.eq) goto loc_8236016C;
	// addi r11,r30,0
	ctx.r11.s64 = ctx.r30.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82371010
	ctx.lr = 0x82360160;
	sub_82371010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236017c
	if (!ctx.cr6.eq) goto loc_8236017C;
loc_82360168:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8236016C:
	// bl 0x82372340
	ctx.lr = 0x82360170;
	sub_82372340(ctx, base);
loc_82360170:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236017C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236019c
	if (ctx.cr6.eq) goto loc_8236019C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823716b8
	ctx.lr = 0x82360194;
	sub_823716B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360168
	if (ctx.cr6.eq) goto loc_82360168;
loc_8236019C:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363b68
	ctx.lr = 0x823601BC;
	sub_82363B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8236016c
	if (ctx.cr6.eq) goto loc_8236016C;
	// bl 0x82372340
	ctx.lr = 0x823601CC;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823601D8"))) PPC_WEAK_FUNC(sub_823601D8);
PPC_FUNC_IMPL(__imp__sub_823601D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823601E0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823601EC;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823602d8
	if (ctx.cr6.eq) goto loc_823602D8;
	// bl 0x82362380
	ctx.lr = 0x823601FC;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823602d8
	if (ctx.cr6.eq) goto loc_823602D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c8a0
	ctx.lr = 0x82360218;
	sub_8235C8A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823602d8
	if (ctx.cr6.eq) goto loc_823602D8;
loc_82360228:
	// bl 0x82370538
	ctx.lr = 0x8236022C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82360230;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x82360238;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823602ac
	if (ctx.cr6.eq) goto loc_823602AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c7e8
	ctx.lr = 0x8236024C;
	sub_8235C7E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823602ac
	if (ctx.cr6.eq) goto loc_823602AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82360260;
	sub_82370C48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8236026C;
	sub_82371320(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x82360278;
	sub_82371320(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363a90
	ctx.lr = 0x8236029C;
	sub_82363A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823602c4
	if (ctx.cr6.eq) goto loc_823602C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823602AC;
	sub_82372340(ctx, base);
loc_823602AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82360228
	if (ctx.cr6.lt) goto loc_82360228;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823602C4:
	// bl 0x82370538
	ctx.lr = 0x823602C8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823602CC;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823602D0;
	sub_823708C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823602D8;
	sub_82372340(ctx, base);
loc_823602D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823602E4"))) PPC_WEAK_FUNC(sub_823602E4);
PPC_FUNC_IMPL(__imp__sub_823602E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823602E8"))) PPC_WEAK_FUNC(sub_823602E8);
PPC_FUNC_IMPL(__imp__sub_823602E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823602F0;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82360300;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823603dc
	if (ctx.cr6.eq) goto loc_823603DC;
	// bl 0x82362380
	ctx.lr = 0x82360310;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823603dc
	if (ctx.cr6.eq) goto loc_823603DC;
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823603bc
	if (ctx.cr6.eq) goto loc_823603BC;
loc_8236032C:
	// bl 0x82370538
	ctx.lr = 0x82360330;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82360334;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8236033C;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823603b0
	if (ctx.cr6.eq) goto loc_823603B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c7e8
	ctx.lr = 0x82360350;
	sub_8235C7E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823603b0
	if (ctx.cr6.eq) goto loc_823603B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82360364;
	sub_82370C48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x82360370;
	sub_82371320(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8236037C;
	sub_82371320(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363a90
	ctx.lr = 0x823603A0;
	sub_82363A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823603c8
	if (ctx.cr6.eq) goto loc_823603C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823603B0;
	sub_82372340(ctx, base);
loc_823603B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8236032c
	if (ctx.cr6.lt) goto loc_8236032C;
loc_823603BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823603C8:
	// bl 0x82370538
	ctx.lr = 0x823603CC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823603D0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823603D4;
	sub_823708C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823603DC;
	sub_82372340(ctx, base);
loc_823603DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823603E8"))) PPC_WEAK_FUNC(sub_823603E8);
PPC_FUNC_IMPL(__imp__sub_823603E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823603F0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// beq cr6,0x8236040c
	if (ctx.cr6.eq) goto loc_8236040C;
	// lis r30,4096
	ctx.r30.s64 = 268435456;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// b 0x82360414
	goto loc_82360414;
loc_8236040C:
	// lis r30,8192
	ctx.r30.s64 = 536870912;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_82360414:
	// bl 0x8235bf58
	ctx.lr = 0x82360418;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x82360420;
	sub_8235E108(ctx, base);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82360434
	if (ctx.cr6.eq) goto loc_82360434;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236046c
	if (!ctx.cr6.eq) goto loc_8236046C;
loc_82360434:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c270
	ctx.lr = 0x82360444;
	sub_8235C270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236dd50
	ctx.lr = 0x82360450;
	sub_8236DD50(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,136
	ctx.r10.s64 = ctx.r29.s64 + 136;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82360460:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82360460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82360460;
loc_8236046C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82360478"))) PPC_WEAK_FUNC(sub_82360478);
PPC_FUNC_IMPL(__imp__sub_82360478) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823604e8
	if (!ctx.cr6.lt) goto loc_823604E8;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823604e8
	if (ctx.cr6.eq) goto loc_823604E8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823604dc
	if (!ctx.cr6.lt) goto loc_823604DC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x823604DC;
	sub_82358520(ctx, base);
loc_823604DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823604E8:
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

__attribute__((alias("__imp__sub_823604FC"))) PPC_WEAK_FUNC(sub_823604FC);
PPC_FUNC_IMPL(__imp__sub_823604FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360500"))) PPC_WEAK_FUNC(sub_82360500);
PPC_FUNC_IMPL(__imp__sub_82360500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82360508;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82360520
	if (!ctx.cr6.eq) goto loc_82360520;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82360520:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82360538
	if (!ctx.cr0.eq) goto loc_82360538;
loc_8236052C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82360538:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82360540;
	sub_823570E0(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82360558;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82360564;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236052c
	if (ctx.cr6.eq) goto loc_8236052C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82360578;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823605b4
	if (ctx.cr6.eq) goto loc_823605B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x8236059C;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823605b4
	if (ctx.cr6.eq) goto loc_823605B4;
	// bl 0x82357240
	ctx.lr = 0x823605AC;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823605B4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823605C8"))) PPC_WEAK_FUNC(sub_823605C8);
PPC_FUNC_IMPL(__imp__sub_823605C8) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823585a0
	ctx.lr = 0x823605EC;
	sub_823585A0(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360618
	if (ctx.cr6.eq) goto loc_82360618;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82360618:
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

__attribute__((alias("__imp__sub_82360630"))) PPC_WEAK_FUNC(sub_82360630);
PPC_FUNC_IMPL(__imp__sub_82360630) {
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
	// addi r31,r3,116
	ctx.r31.s64 = ctx.r3.s64 + 116;
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x82360664
	if (ctx.cr6.eq) goto loc_82360664;
	// bl 0x82357240
	ctx.lr = 0x82360660;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82360664:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82360684"))) PPC_WEAK_FUNC(sub_82360684);
PPC_FUNC_IMPL(__imp__sub_82360684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360688"))) PPC_WEAK_FUNC(sub_82360688);
PPC_FUNC_IMPL(__imp__sub_82360688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82360690;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823606B4;
	sub_823A86F8(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// beq cr6,0x823606e0
	if (ctx.cr6.eq) goto loc_823606E0;
	// bl 0x82357240
	ctx.lr = 0x823606DC;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_823606E0:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x8235bf58
	ctx.lr = 0x823606EC;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x823606F4;
	sub_8235E108(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82360700;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236076c
	if (!ctx.cr6.eq) goto loc_8236076C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82360714;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236076c
	if (!ctx.cr6.eq) goto loc_8236076C;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236076c
	if (ctx.cr6.eq) goto loc_8236076C;
	// bl 0x82362380
	ctx.lr = 0x8236072C;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236076c
	if (ctx.cr6.eq) goto loc_8236076C;
	// bl 0x82370538
	ctx.lr = 0x82360738;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8236073C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82360740;
	sub_823708C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82360748;
	sub_8235CF68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236076c
	if (ctx.cr6.eq) goto loc_8236076C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236076C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236076C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82360774"))) PPC_WEAK_FUNC(sub_82360774);
PPC_FUNC_IMPL(__imp__sub_82360774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360778"))) PPC_WEAK_FUNC(sub_82360778);
PPC_FUNC_IMPL(__imp__sub_82360778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82360780;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823607AC;
	sub_823A86F8(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// beq cr6,0x823607d8
	if (ctx.cr6.eq) goto loc_823607D8;
	// bl 0x82357240
	ctx.lr = 0x823607D4;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_823607D8:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x8235bf58
	ctx.lr = 0x823607E4;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x823607EC;
	sub_8235E108(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823607F8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236085c
	if (!ctx.cr6.eq) goto loc_8236085C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236080C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236085c
	if (!ctx.cr6.eq) goto loc_8236085C;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236085c
	if (ctx.cr6.eq) goto loc_8236085C;
	// bl 0x82362380
	ctx.lr = 0x82360824;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236085c
	if (ctx.cr6.eq) goto loc_8236085C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82360854
	if (ctx.cr6.eq) goto loc_82360854;
	// bl 0x8235cf68
	ctx.lr = 0x8236083C;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82360854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82360854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b08
	ctx.lr = 0x8236085C;
	sub_82365B08(ctx, base);
loc_8236085C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82360864"))) PPC_WEAK_FUNC(sub_82360864);
PPC_FUNC_IMPL(__imp__sub_82360864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360868"))) PPC_WEAK_FUNC(sub_82360868);
PPC_FUNC_IMPL(__imp__sub_82360868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82360870;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82360880;
	sub_8235CF68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360964
	if (ctx.cr6.eq) goto loc_82360964;
	// bl 0x8235bf58
	ctx.lr = 0x8236088C;
	sub_8235BF58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360964
	if (ctx.cr6.eq) goto loc_82360964;
	// bl 0x82362380
	ctx.lr = 0x82360898;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360964
	if (ctx.cr6.eq) goto loc_82360964;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82360964
	if (!ctx.cr6.eq) goto loc_82360964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x823608B8;
	sub_823579A0(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823608BC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823608C0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823608C4;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362660
	ctx.lr = 0x823608D4;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82360960
	if (ctx.cr6.eq) goto loc_82360960;
	// bl 0x82357bb8
	ctx.lr = 0x823608E4;
	sub_82357BB8(ctx, base);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// bl 0x82357048
	ctx.lr = 0x823608EC;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236095c
	if (!ctx.cr6.eq) goto loc_8236095C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x823579a0
	ctx.lr = 0x82360900;
	sub_823579A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82360954
	if (ctx.cr6.eq) goto loc_82360954;
loc_8236090C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362660
	ctx.lr = 0x8236091C;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236093c
	if (ctx.cr6.eq) goto loc_8236093C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357bb8
	ctx.lr = 0x8236092C;
	sub_82357BB8(ctx, base);
	// addi r4,r27,32
	ctx.r4.s64 = ctx.r27.s64 + 32;
	// bl 0x82357048
	ctx.lr = 0x82360934;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236094c
	if (!ctx.cr6.eq) goto loc_8236094C;
loc_8236093C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8236090c
	if (ctx.cr6.lt) goto loc_8236090C;
	// b 0x82360954
	goto loc_82360954;
loc_8236094C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82360970
	if (!ctx.cr6.eq) goto loc_82360970;
loc_82360954:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579f8
	ctx.lr = 0x8236095C;
	sub_823579F8(ctx, base);
loc_8236095C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82360960:
	// bl 0x823579f8
	ctx.lr = 0x82360964;
	sub_823579F8(ctx, base);
loc_82360964:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82360970:
	// bl 0x82370538
	ctx.lr = 0x82360974;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82360978;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x8236097C;
	sub_82370898(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82360954
	if (ctx.cr6.eq) goto loc_82360954;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82360998
	if (ctx.cr6.eq) goto loc_82360998;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823609f0
	if (ctx.cr6.eq) goto loc_823609F0;
loc_82360998:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823609f0
	if (ctx.cr6.eq) goto loc_823609F0;
	// stw r31,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r31.u32);
	// addi r31,r28,88
	ctx.r31.s64 = ctx.r28.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x823609B4;
	sub_82357080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823609c4
	if (!ctx.cr6.eq) goto loc_823609C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x823609C4;
	sub_8237D130(ctx, base);
loc_823609C4:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823609dc
	if (!ctx.cr6.eq) goto loc_823609DC;
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// b 0x823609ec
	goto loc_823609EC;
loc_823609DC:
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// stw r11,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823609f0
	if (ctx.cr6.eq) goto loc_823609F0;
loc_823609EC:
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
loc_823609F0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579f8
	ctx.lr = 0x823609F8;
	sub_823579F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x82360A00;
	sub_823579F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82360A0C"))) PPC_WEAK_FUNC(sub_82360A0C);
PPC_FUNC_IMPL(__imp__sub_82360A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360A10"))) PPC_WEAK_FUNC(sub_82360A10);
PPC_FUNC_IMPL(__imp__sub_82360A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82360A18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82360A2C;
	sub_8235BF58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360a8c
	if (ctx.cr6.eq) goto loc_82360A8C;
	// bl 0x82362380
	ctx.lr = 0x82360A38;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360a8c
	if (ctx.cr6.eq) goto loc_82360A8C;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823602e8
	ctx.lr = 0x82360A54;
	sub_823602E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef68
	ctx.lr = 0x82360A60;
	sub_8235EF68(ctx, base);
	// bl 0x8235cf68
	ctx.lr = 0x82360A64;
	sub_8235CF68(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r9,6
	ctx.r7.u64 = ctx.r9.u64 | 6;
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82360A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82360A98"))) PPC_WEAK_FUNC(sub_82360A98);
PPC_FUNC_IMPL(__imp__sub_82360A98) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823602e8
	ctx.lr = 0x82360ABC;
	sub_823602E8(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x82360AC0;
	sub_8235BF58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235c8a0
	ctx.lr = 0x82360AD0;
	sub_8235C8A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ce80
	ctx.lr = 0x82360ADC;
	sub_8235CE80(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x82360AF0;
	sub_8235C1B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82360B0C"))) PPC_WEAK_FUNC(sub_82360B0C);
PPC_FUNC_IMPL(__imp__sub_82360B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360B10"))) PPC_WEAK_FUNC(sub_82360B10);
PPC_FUNC_IMPL(__imp__sub_82360B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82360B18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82360B28;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360b60
	if (ctx.cr6.eq) goto loc_82360B60;
	// bl 0x82362380
	ctx.lr = 0x82360B38;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360b60
	if (ctx.cr6.eq) goto loc_82360B60;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c8a0
	ctx.lr = 0x82360B50;
	sub_8235C8A0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x823602e8
	ctx.lr = 0x82360B60;
	sub_823602E8(ctx, base);
loc_82360B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82360B6C"))) PPC_WEAK_FUNC(sub_82360B6C);
PPC_FUNC_IMPL(__imp__sub_82360B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360B70"))) PPC_WEAK_FUNC(sub_82360B70);
PPC_FUNC_IMPL(__imp__sub_82360B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82360B78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82360bb4
	if (ctx.cr6.gt) goto loc_82360BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82360500
	ctx.lr = 0x82360BA0;
	sub_82360500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360bb4
	if (!ctx.cr6.eq) goto loc_82360BB4;
loc_82360BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82360BB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82360ba8
	if (ctx.cr6.eq) goto loc_82360BA8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82360C00"))) PPC_WEAK_FUNC(sub_82360C00);
PPC_FUNC_IMPL(__imp__sub_82360C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82360C08;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82360c6c
	if (ctx.cr6.eq) goto loc_82360C6C;
loc_82360C2C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82360C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360c78
	if (!ctx.cr6.eq) goto loc_82360C78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82360c2c
	if (!ctx.cr6.eq) goto loc_82360C2C;
loc_82360C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82360C78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82360C84"))) PPC_WEAK_FUNC(sub_82360C84);
PPC_FUNC_IMPL(__imp__sub_82360C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360C88"))) PPC_WEAK_FUNC(sub_82360C88);
PPC_FUNC_IMPL(__imp__sub_82360C88) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,31100
	ctx.r10.s64 = ctx.r11.s64 + 31100;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823a3da0
	ctx.lr = 0x82360CB8;
	sub_823A3DA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82360cd0
	if (ctx.cr6.eq) goto loc_82360CD0;
	// bl 0x82357128
	ctx.lr = 0x82360CCC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82360CD0:
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

__attribute__((alias("__imp__sub_82360CE8"))) PPC_WEAK_FUNC(sub_82360CE8);
PPC_FUNC_IMPL(__imp__sub_82360CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82360CF0;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,31088
	ctx.r8.s64 = ctx.r11.s64 + 31088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r7,r10,31080
	ctx.r7.s64 = ctx.r10.s64 + 31080;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r5,r9,31100
	ctx.r5.s64 = ctx.r9.s64 + 31100;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r6,31044
	ctx.r7.s64 = ctx.r6.s64 + 31044;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r4,31200
	ctx.r6.s64 = ctx.r4.s64 + 31200;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// addi r5,r3,31184
	ctx.r5.s64 = ctx.r3.s64 + 31184;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r4,r11,31176
	ctx.r4.s64 = ctx.r11.s64 + 31176;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// addi r3,r10,31156
	ctx.r3.s64 = ctx.r10.s64 + 31156;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// addi r11,r9,31120
	ctx.r11.s64 = ctx.r9.s64 + 31120;
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r18,r30,88
	ctx.r18.s64 = ctx.r30.s64 + 88;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// addi r21,r30,8
	ctx.r21.s64 = ctx.r30.s64 + 8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addi r20,r30,32
	ctx.r20.s64 = ctx.r30.s64 + 32;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// addi r26,r30,40
	ctx.r26.s64 = ctx.r30.s64 + 40;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// addi r25,r30,60
	ctx.r25.s64 = ctx.r30.s64 + 60;
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// addi r17,r30,4
	ctx.r17.s64 = ctx.r30.s64 + 4;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82360DD8;
	sub_823A86F8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// addi r28,r30,116
	ctx.r28.s64 = ctx.r30.s64 + 116;
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// addi r24,r30,136
	ctx.r24.s64 = ctx.r30.s64 + 136;
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// addi r23,r30,172
	ctx.r23.s64 = ctx.r30.s64 + 172;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// stw r9,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r9.u32);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
	// stw r31,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// stw r31,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r31.u32);
	// stw r31,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r31.u32);
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
	// stw r31,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r31.u32);
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
	// addi r16,r30,196
	ctx.r16.s64 = ctx.r30.s64 + 196;
	// stw r31,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r31.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82360E4C;
	sub_823A86F8(ctx, base);
	// stw r31,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r31.u32);
	// addi r19,r30,212
	ctx.r19.s64 = ctx.r30.s64 + 212;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82360E5C;
	sub_823A86F8(ctx, base);
	// addi r3,r30,228
	ctx.r3.s64 = ctx.r30.s64 + 228;
	// bl 0x823a86f8
	ctx.lr = 0x82360E64;
	sub_823A86F8(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x823a86f8
	ctx.lr = 0x82360E6C;
	sub_823A86F8(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x82360E70;
	sub_8235BF58(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x82360E78;
	sub_8235E108(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82360E80;
	sub_8235CF68(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x8235dd58
	ctx.lr = 0x82360E8C;
	sub_8235DD58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8235de08
	ctx.lr = 0x82360E98;
	sub_8235DE08(ctx, base);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82360EA8;
	sub_823A86F8(ctx, base);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// beq cr6,0x82360ed0
	if (ctx.cr6.eq) goto loc_82360ED0;
	// bl 0x82357240
	ctx.lr = 0x82360ECC;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82360ED0:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x823585a0
	ctx.lr = 0x82360EE4;
	sub_823585A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235e140
	ctx.lr = 0x82360EF0;
	sub_8235E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235e140
	ctx.lr = 0x82360EFC;
	sub_8235E140(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235e140
	ctx.lr = 0x82360F08;
	sub_8235E140(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235e140
	ctx.lr = 0x82360F14;
	sub_8235E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r29,8(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82360F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82360F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822565c8
	ctx.lr = 0x82360F50;
	sub_822565C8(ctx, base);
	// stw r3,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r3.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82360F5C;
	sub_823A86F8(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x82360F60;
	sub_8235B1F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8235b208
	ctx.lr = 0x82360F68;
	sub_8235B208(ctx, base);
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8237d170
	ctx.lr = 0x82360F74;
	sub_8237D170(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82360F7C;
	sub_823A86F8(ctx, base);
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r31.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360F90"))) PPC_WEAK_FUNC(sub_82360F90);
PPC_FUNC_IMPL(__imp__sub_82360F90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82361c00
	sub_82361C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360F98"))) PPC_WEAK_FUNC(sub_82360F98);
PPC_FUNC_IMPL(__imp__sub_82360F98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82361c00
	sub_82361C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FA0"))) PPC_WEAK_FUNC(sub_82360FA0);
PPC_FUNC_IMPL(__imp__sub_82360FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361c00
	sub_82361C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FA8"))) PPC_WEAK_FUNC(sub_82360FA8);
PPC_FUNC_IMPL(__imp__sub_82360FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82361c00
	sub_82361C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FB0"))) PPC_WEAK_FUNC(sub_82360FB0);
PPC_FUNC_IMPL(__imp__sub_82360FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82360FB8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,31200
	ctx.r6.s64 = ctx.r11.s64 + 31200;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r5,r10,31184
	ctx.r5.s64 = ctx.r10.s64 + 31184;
	// addi r4,r9,31176
	ctx.r4.s64 = ctx.r9.s64 + 31176;
	// addi r3,r8,31156
	ctx.r3.s64 = ctx.r8.s64 + 31156;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// addi r11,r7,31120
	ctx.r11.s64 = ctx.r7.s64 + 31120;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// bl 0x8235bf58
	ctx.lr = 0x82361010;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82361018;
	sub_8235CF68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235dee0
	ctx.lr = 0x82361024;
	sub_8235DEE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e050
	ctx.lr = 0x82361030;
	sub_8235E050(ctx, base);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82361048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82361060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361088
	if (ctx.cr6.eq) goto loc_82361088;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82361088
	if (ctx.cr6.eq) goto loc_82361088;
	// bl 0x82256f70
	ctx.lr = 0x8236107C;
	sub_82256F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361088
	if (ctx.cr6.eq) goto loc_82361088;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
loc_82361088:
	// bl 0x8235b1f8
	ctx.lr = 0x8236108C;
	sub_8235B1F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235b240
	ctx.lr = 0x82361094;
	sub_8235B240(ctx, base);
	// addi r30,r31,228
	ctx.r30.s64 = ctx.r31.s64 + 228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x823610A0;
	sub_8237D170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823610A8;
	sub_823A86F8(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x823ab568
	ctx.lr = 0x823610B0;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab568
	ctx.lr = 0x823610B8;
	sub_823AB568(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x823ab568
	ctx.lr = 0x823610C0;
	sub_823AB568(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x823ab568
	ctx.lr = 0x823610C8;
	sub_823AB568(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823610e4
	if (ctx.cr6.eq) goto loc_823610E4;
	// bl 0x82357240
	ctx.lr = 0x823610E0;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_823610E4:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// bl 0x823ab568
	ctx.lr = 0x823610F4;
	sub_823AB568(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31044
	ctx.r9.s64 = ctx.r11.s64 + 31044;
	// addi r8,r10,31100
	ctx.r8.s64 = ctx.r10.s64 + 31100;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// bl 0x823a3da0
	ctx.lr = 0x82361114;
	sub_823A3DA0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r7,31080
	ctx.r4.s64 = ctx.r7.s64 + 31080;
	// addi r3,r6,31088
	ctx.r3.s64 = ctx.r6.s64 + 31088;
	// addi r11,r5,-1704
	ctx.r11.s64 = ctx.r5.s64 + -1704;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82361140"))) PPC_WEAK_FUNC(sub_82361140);
PPC_FUNC_IMPL(__imp__sub_82361140) {
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
	// bl 0x8235bf58
	ctx.lr = 0x82361158;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823611c8
	if (ctx.cr6.eq) goto loc_823611C8;
	// bl 0x8237d9c0
	ctx.lr = 0x82361168;
	sub_8237D9C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823611c4
	if (ctx.cr6.eq) goto loc_823611C4;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r3,-5468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823611cc
	if (!ctx.cr6.eq) goto loc_823611CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236118C;
	sub_823570E0(ctx, base);
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x823570f0
	ctx.lr = 0x82361194;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823611a8
	if (ctx.cr6.eq) goto loc_823611A8;
	// bl 0x82360ce8
	ctx.lr = 0x823611A0;
	sub_82360CE8(ctx, base);
	// stw r3,-5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5468, ctx.r3.u32);
	// b 0x823611b0
	goto loc_823611B0;
loc_823611A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5468, ctx.r11.u32);
loc_823611B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823611B8;
	sub_823570E0(ctx, base);
	// lwz r3,-5468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823611cc
	if (!ctx.cr6.eq) goto loc_823611CC;
loc_823611C4:
	// bl 0x8235f138
	ctx.lr = 0x823611C8;
	sub_8235F138(ctx, base);
loc_823611C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823611CC:
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

__attribute__((alias("__imp__sub_823611E4"))) PPC_WEAK_FUNC(sub_823611E4);
PPC_FUNC_IMPL(__imp__sub_823611E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823611E8"))) PPC_WEAK_FUNC(sub_823611E8);
PPC_FUNC_IMPL(__imp__sub_823611E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823611F0;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82361200;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x82361208;
	sub_8235E108(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82361230
	if (!ctx.cr6.eq) goto loc_82361230;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823612b4
	if (!ctx.cr6.eq) goto loc_823612B4;
loc_82361230:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e790
	ctx.lr = 0x8236123C;
	sub_8235E790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e118
	ctx.lr = 0x82361250;
	sub_8235E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361298
	if (!ctx.cr6.eq) goto loc_82361298;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e158
	ctx.lr = 0x82361264;
	sub_8235E158(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e160
	ctx.lr = 0x82361274;
	sub_8235E160(ctx, base);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82361298
	if (ctx.cr6.eq) goto loc_82361298;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361298
	if (!ctx.cr6.eq) goto loc_82361298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360688
	ctx.lr = 0x82361298;
	sub_82360688(ctx, base);
loc_82361298:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823612A8;
	sub_823A86F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e140
	ctx.lr = 0x823612B4;
	sub_8235E140(ctx, base);
loc_823612B4:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823612d8
	if (!ctx.cr6.eq) goto loc_823612D8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c048
	ctx.lr = 0x823612C8;
	sub_8235C048(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x823612e8
	goto loc_823612E8;
loc_823612D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2972(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2972);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_823612E8:
	// addi r26,r31,88
	ctx.r26.s64 = ctx.r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d218
	ctx.lr = 0x823612F4;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82361310
	if (!ctx.cr6.lt) goto loc_82361310;
loc_823612FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360688
	ctx.lr = 0x82361304;
	sub_82360688(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82361310:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236131C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361330;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361344;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361358;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236136C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361380;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361394;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823614a4
	if (!ctx.cr6.eq) goto loc_823614A4;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823613A8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236149c
	if (!ctx.cr6.eq) goto loc_8236149C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823613BC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236149c
	if (!ctx.cr6.eq) goto loc_8236149C;
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236149c
	if (ctx.cr6.eq) goto loc_8236149C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823614a4
	if (ctx.cr6.eq) goto loc_823614A4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823614a4
	if (ctx.cr6.eq) goto loc_823614A4;
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c420
	ctx.lr = 0x823613F4;
	sub_8235C420(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823612fc
	if (ctx.cr6.eq) goto loc_823612FC;
	// bl 0x8235cf68
	ctx.lr = 0x82361404;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823612fc
	if (ctx.cr6.eq) goto loc_823612FC;
	// bl 0x82362380
	ctx.lr = 0x82361428;
	sub_82362380(ctx, base);
loc_82361428:
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x823612fc
	if (ctx.cr6.eq) goto loc_823612FC;
	// bl 0x82370538
	ctx.lr = 0x8236143C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82361440;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x82361448;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361428
	if (ctx.cr6.eq) goto loc_82361428;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82369bf0
	ctx.lr = 0x82361460;
	sub_82369BF0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82361470:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82361470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82361470;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82361484;
	sub_823A86F8(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236149C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e900
	ctx.lr = 0x823614A4;
	sub_8235E900(ctx, base);
loc_823614A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823614B0"))) PPC_WEAK_FUNC(sub_823614B0);
PPC_FUNC_IMPL(__imp__sub_823614B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823614B8;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823614C4;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x823614CC;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x823614D4;
	sub_82362380(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// beq cr6,0x823614f8
	if (ctx.cr6.eq) goto loc_823614F8;
	// bl 0x82370538
	ctx.lr = 0x823614EC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823614F0;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x823614F4;
	sub_82370898(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_823614F8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823616e4
	if (!ctx.cr6.eq) goto loc_823616E4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823616e4
	if (ctx.cr6.eq) goto loc_823616E4;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x823615d8
	if (ctx.cr6.gt) goto loc_823615D8;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82361980
	if (!ctx.cr6.eq) goto loc_82361980;
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d218
	ctx.lr = 0x82361538;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82361594
	if (!ctx.cr6.gt) goto loc_82361594;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361554;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361584
	if (!ctx.cr6.eq) goto loc_82361584;
	// bl 0x82370538
	ctx.lr = 0x82361560;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82361564;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82361568;
	sub_823708C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82360b70
	ctx.lr = 0x82361584;
	sub_82360B70(ctx, base);
loc_82361584:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d170
	ctx.lr = 0x8236158C;
	sub_8237D170(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82361594;
	sub_823A86F8(ctx, base);
loc_82361594:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823631e0
	ctx.lr = 0x8236159C;
	sub_823631E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x823615c4
	if (ctx.cr6.eq) goto loc_823615C4;
	// bl 0x82357080
	ctx.lr = 0x823615AC;
	sub_82357080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361980
	if (!ctx.cr6.eq) goto loc_82361980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x823615BC;
	sub_8237D130(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823615C4:
	// bl 0x8237d170
	ctx.lr = 0x823615C8;
	sub_8237D170(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823615D0;
	sub_823A86F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823615D8:
	// bl 0x8235bf58
	ctx.lr = 0x823615DC;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823615EC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361744
	if (!ctx.cr6.eq) goto loc_82361744;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361600;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361744
	if (!ctx.cr6.eq) goto loc_82361744;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8236161c
	if (!ctx.cr6.eq) goto loc_8236161C;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361744
	if (ctx.cr6.eq) goto loc_82361744;
loc_8236161C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823605c8
	ctx.lr = 0x82361628;
	sub_823605C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r28,r8,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// bne cr6,0x82361694
	if (!ctx.cr6.eq) goto loc_82361694;
	// bl 0x8235cf68
	ctx.lr = 0x82361658;
	sub_8235CF68(ctx, base);
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8236167c
	if (!ctx.cr6.eq) goto loc_8236167C;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x82361674;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8236167C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x8236168C;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82361694:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823616ac
	if (ctx.cr6.eq) goto loc_823616AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82360478
	ctx.lr = 0x823616AC;
	sub_82360478(ctx, base);
loc_823616AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236d340
	ctx.lr = 0x823616C0;
	sub_8236D340(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823616D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823616d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823616D0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823616E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e790
	ctx.lr = 0x823616F0;
	sub_8235E790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361980
	if (!ctx.cr6.eq) goto loc_82361980;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e118
	ctx.lr = 0x82361704;
	sub_8235E118(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e158
	ctx.lr = 0x82361714;
	sub_8235E158(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e160
	ctx.lr = 0x82361720;
	sub_8235E160(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e140
	ctx.lr = 0x8236172C;
	sub_8235E140(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82361754
	if (!ctx.cr6.eq) goto loc_82361754;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8235e900
	ctx.lr = 0x82361744;
	sub_8235E900(ctx, base);
loc_82361744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360630
	ctx.lr = 0x8236174C;
	sub_82360630(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82361754:
	// bl 0x8235cf68
	ctx.lr = 0x82361758;
	sub_8235CF68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r25,164(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r26,156(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bne cr6,0x823617bc
	if (!ctx.cr6.eq) goto loc_823617BC;
loc_82361780:
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// bne cr6,0x823617a4
	if (!ctx.cr6.eq) goto loc_823617A4;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x8236179C;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823617A4:
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x823617B4;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823617BC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361804
	if (!ctx.cr6.eq) goto loc_82361804;
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// bne cr6,0x823617ec
	if (!ctx.cr6.eq) goto loc_823617EC;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x823617E4;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823617EC:
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x823617FC;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82361804:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82361814
	if (!ctx.cr6.eq) goto loc_82361814;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82361980
	if (ctx.cr6.eq) goto loc_82361980;
loc_82361814:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82361858
	if (!ctx.cr6.eq) goto loc_82361858;
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82361840
	if (!ctx.cr6.eq) goto loc_82361840;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x82361838;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82361840:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360778
	ctx.lr = 0x82361850;
	sub_82360778(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82361858:
	// bl 0x82370538
	ctx.lr = 0x8236185C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82361860;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82361864;
	sub_82370898(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r3,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bne cr6,0x82361894
	if (!ctx.cr6.eq) goto loc_82361894;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823618a0
	goto loc_823618A0;
loc_82361894:
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_823618A0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823618bc
	if (!ctx.cr6.eq) goto loc_823618BC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823618bc
	if (!ctx.cr6.eq) goto loc_823618BC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x823618c0
	if (ctx.cr6.eq) goto loc_823618C0;
loc_823618BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823618C0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823618cc
	if (!ctx.cr6.eq) goto loc_823618CC;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
loc_823618CC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361944
	if (ctx.cr6.eq) goto loc_82361944;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357080
	ctx.lr = 0x823618E0;
	sub_82357080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823618f0
	if (!ctx.cr6.eq) goto loc_823618F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x823618F0;
	sub_8237D130(ctx, base);
loc_823618F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f1a0
	ctx.lr = 0x82361904;
	sub_8235F1A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361780
	if (ctx.cr6.eq) goto loc_82361780;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82361780
	if (ctx.cr6.eq) goto loc_82361780;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8236192c
	if (ctx.cr6.eq) goto loc_8236192C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82361944
	if (ctx.cr6.eq) goto loc_82361944;
loc_8236192C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82361944
	if (ctx.cr6.eq) goto loc_82361944;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82361944:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne cr6,0x82361964
	if (!ctx.cr6.eq) goto loc_82361964;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// b 0x82361968
	goto loc_82361968;
loc_82361964:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82361968:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82361980:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82361988"))) PPC_WEAK_FUNC(sub_82361988);
PPC_FUNC_IMPL(__imp__sub_82361988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82361990;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x82362380
	ctx.lr = 0x823619AC;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823619d0
	if (ctx.cr6.eq) goto loc_823619D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823619d0
	if (!ctx.cr6.eq) goto loc_823619D0;
	// bl 0x82370538
	ctx.lr = 0x823619C4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823619C8;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823619CC;
	sub_823708C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823619D0:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360b70
	ctx.lr = 0x823619EC;
	sub_82360B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361a68
	if (!ctx.cr6.eq) goto loc_82361A68;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82361A10;
	sub_823A86F8(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// beq cr6,0x82361a38
	if (ctx.cr6.eq) goto loc_82361A38;
	// bl 0x82357240
	ctx.lr = 0x82361A34;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82361A38:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// beq cr6,0x82361a68
	if (ctx.cr6.eq) goto loc_82361A68;
	// bl 0x8235cf68
	ctx.lr = 0x82361A4C;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82361A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82361A74"))) PPC_WEAK_FUNC(sub_82361A74);
PPC_FUNC_IMPL(__imp__sub_82361A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361A78"))) PPC_WEAK_FUNC(sub_82361A78);
PPC_FUNC_IMPL(__imp__sub_82361A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82361A80;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,860(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82361b20
	if (ctx.cr6.eq) goto loc_82361B20;
	// lwz r8,856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82361AA8:
	// ldx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82361ad0
	if (ctx.cr6.eq) goto loc_82361AD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82361aa8
	if (ctx.cr6.lt) goto loc_82361AA8;
	// b 0x82361b20
	goto loc_82361B20;
loc_82361AD0:
	// lwz r10,860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// addi r31,r30,852
	ctx.r31.s64 = ctx.r30.s64 + 852;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82361b20
	if (!ctx.cr6.lt) goto loc_82361B20;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82361b20
	if (ctx.cr6.eq) goto loc_82361B20;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82361b14
	if (!ctx.cr6.lt) goto loc_82361B14;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358520
	ctx.lr = 0x82361B14;
	sub_82358520(ctx, base);
loc_82361B14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82361B20:
	// lwz r27,860(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// addi r31,r30,852
	ctx.r31.s64 = ctx.r30.s64 + 852;
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82361bc0
	if (ctx.cr6.gt) goto loc_82361BC0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add. r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82361bf0
	if (ctx.cr0.eq) goto loc_82361BF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82361B54;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82361B64;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82361B70;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82361bf0
	if (ctx.cr6.eq) goto loc_82361BF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82361B84;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82361bb8
	if (ctx.cr6.eq) goto loc_82361BB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x82361BA0;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361bb8
	if (ctx.cr6.eq) goto loc_82361BB8;
	// bl 0x82357240
	ctx.lr = 0x82361BB0;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82361BB8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82361BC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361bf0
	if (ctx.cr6.eq) goto loc_82361BF0;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r27,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stdx r10,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82361BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82361BFC"))) PPC_WEAK_FUNC(sub_82361BFC);
PPC_FUNC_IMPL(__imp__sub_82361BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361C00"))) PPC_WEAK_FUNC(sub_82361C00);
PPC_FUNC_IMPL(__imp__sub_82361C00) {
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
	// bl 0x82360fb0
	ctx.lr = 0x82361C20;
	sub_82360FB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361c38
	if (ctx.cr6.eq) goto loc_82361C38;
	// bl 0x82357128
	ctx.lr = 0x82361C34;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82361C38:
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

__attribute__((alias("__imp__sub_82361C50"))) PPC_WEAK_FUNC(sub_82361C50);
PPC_FUNC_IMPL(__imp__sub_82361C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82361C58;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82361C64;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361c84
	if (ctx.cr6.eq) goto loc_82361C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82361C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f220
	ctx.lr = 0x82361C8C;
	sub_8235F220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823611e8
	ctx.lr = 0x82361C94;
	sub_823611E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823614b0
	ctx.lr = 0x82361C9C;
	sub_823614B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f4f8
	ctx.lr = 0x82361CA4;
	sub_8235F4F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f590
	ctx.lr = 0x82361CAC;
	sub_8235F590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235efd0
	ctx.lr = 0x82361CB4;
	sub_8235EFD0(ctx, base);
	// lwz r11,4332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361cc8
	if (ctx.cr6.eq) goto loc_82361CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f6a0
	ctx.lr = 0x82361CC8;
	sub_8235F6A0(ctx, base);
loc_82361CC8:
	// bl 0x8235b1f8
	ctx.lr = 0x82361CCC;
	sub_8235B1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235ba18
	ctx.lr = 0x82361CD4;
	sub_8235BA18(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b640
	ctx.lr = 0x82361CE0;
	sub_8235B640(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82361db4
	if (ctx.cr6.eq) goto loc_82361DB4;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361d7c
	if (ctx.cr6.eq) goto loc_82361D7C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82361d7c
	if (ctx.cr6.eq) goto loc_82361D7C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241e0ac
	ctx.lr = 0x82361D20;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361d7c
	if (ctx.cr6.eq) goto loc_82361D7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82361d7c
	if (!ctx.cr6.eq) goto loc_82361D7C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82361D3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256340
	ctx.lr = 0x82361D44;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361d50
	if (ctx.cr6.eq) goto loc_82361D50;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82361D50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82361d3c
	if (ctx.cr6.lt) goto loc_82361D3C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82361d7c
	if (!ctx.cr6.eq) goto loc_82361D7C;
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82361D70;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x82361D78;
	sub_8237D130(ctx, base);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
loc_82361D7C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361db4
	if (!ctx.cr6.eq) goto loc_82361DB4;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d218
	ctx.lr = 0x82361D94;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82361db4
	if (!ctx.cr6.gt) goto loc_82361DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x82361DAC;
	sub_8237D170(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82361DB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82361DBC"))) PPC_WEAK_FUNC(sub_82361DBC);
PPC_FUNC_IMPL(__imp__sub_82361DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361DC0"))) PPC_WEAK_FUNC(sub_82361DC0);
PPC_FUNC_IMPL(__imp__sub_82361DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82361DC8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82361DDC;
	sub_8235BF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x82361DF4;
	sub_82370C48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x82361E04;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82361e24
	if (ctx.cr6.eq) goto loc_82361E24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82371ca0
	ctx.lr = 0x82361E18;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361e34
	if (!ctx.cr6.eq) goto loc_82361E34;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82361E24:
	// bl 0x82372340
	ctx.lr = 0x82361E28;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82361E34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361a78
	ctx.lr = 0x82361E44;
	sub_82361A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ce80
	ctx.lr = 0x82361E50;
	sub_8235CE80(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x82361E58;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82361E64"))) PPC_WEAK_FUNC(sub_82361E64);
PPC_FUNC_IMPL(__imp__sub_82361E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361E68"))) PPC_WEAK_FUNC(sub_82361E68);
PPC_FUNC_IMPL(__imp__sub_82361E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82361E70;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82361E80;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x82361E88;
	sub_82362380(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235ce80
	ctx.lr = 0x82361E94;
	sub_8235CE80(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x82361EA8;
	sub_8235C1B0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,812
	ctx.r3.s64 = ctx.r28.s64 + 812;
	// bl 0x82224948
	ctx.lr = 0x82361EB8;
	sub_82224948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361fb4
	if (!ctx.cr6.eq) goto loc_82361FB4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82361EDC;
	sub_823A86F8(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// beq cr6,0x82361f08
	if (ctx.cr6.eq) goto loc_82361F08;
	// bl 0x82357240
	ctx.lr = 0x82361F04;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82361F08:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x8235e108
	ctx.lr = 0x82361F14;
	sub_8235E108(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361F20;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361fb4
	if (!ctx.cr6.eq) goto loc_82361FB4;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82361F34;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82361fb4
	if (!ctx.cr6.eq) goto loc_82361FB4;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361fb4
	if (ctx.cr6.eq) goto loc_82361FB4;
	// bl 0x82362380
	ctx.lr = 0x82361F4C;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361fb4
	if (ctx.cr6.eq) goto loc_82361FB4;
	// bl 0x82370538
	ctx.lr = 0x82361F5C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82361F60;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82361F64;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82361fb4
	if (ctx.cr6.eq) goto loc_82361FB4;
	// bl 0x8235cf68
	ctx.lr = 0x82361F70;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x82361F78;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82361F7C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82361F80;
	sub_823708C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82361FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b08
	ctx.lr = 0x82361FA8;
	sub_82365B08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82361FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82361FC0"))) PPC_WEAK_FUNC(sub_82361FC0);
PPC_FUNC_IMPL(__imp__sub_82361FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82361FC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82362380
	ctx.lr = 0x82361FD4;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82361fe8
	if (!ctx.cr6.eq) goto loc_82361FE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82361FE8:
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82362020
	if (ctx.cr6.eq) goto loc_82362020;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82361FF8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ab568
	ctx.lr = 0x82362014;
	sub_823AB568(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82361ff8
	if (!ctx.cr0.eq) goto loc_82361FF8;
loc_82362020:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236202C"))) PPC_WEAK_FUNC(sub_8236202C);
PPC_FUNC_IMPL(__imp__sub_8236202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362030"))) PPC_WEAK_FUNC(sub_82362030);
PPC_FUNC_IMPL(__imp__sub_82362030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r4,-6
	ctx.r10.s64 = ctx.r4.s64 + -6;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82362238
	if (ctx.cr6.gt) goto loc_82362238;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8320
	ctx.r12.s64 = ctx.r12.s64 + 8320;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,8464(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8464);
	// lwz r17,8496(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8496);
	// lwz r17,8432(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8432);
	// lwz r17,8448(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8448);
	// lwz r17,8480(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8480);
	// lwz r17,8760(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8760);
	// lwz r17,8760(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8760);
	// lwz r17,8760(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8760);
	// lwz r17,8524(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8524);
	// lwz r17,8540(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8540);
	// lwz r17,8556(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8556);
	// lwz r17,8556(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8556);
	// lwz r17,8556(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8556);
	// lwz r17,8556(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8556);
	// lwz r17,8416(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8416);
	// lwz r17,8400(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8400);
	// lwz r17,8580(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8580);
	// lwz r17,8660(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8660);
	// lwz r17,8740(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8740);
	// lwz r17,8740(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8740);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ea20
	ctx.lr = 0x823620DC;
	sub_8235EA20(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235f748
	ctx.lr = 0x823620EC;
	sub_8235F748(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235eba0
	ctx.lr = 0x823620FC;
	sub_8235EBA0(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235f8a0
	ctx.lr = 0x8236210C;
	sub_8235F8A0(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc0
	ctx.lr = 0x8236211C;
	sub_82361DC0(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ec58
	ctx.lr = 0x8236212C;
	sub_8235EC58(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// bl 0x8235bf58
	ctx.lr = 0x82362134;
	sub_8235BF58(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,872
	ctx.r3.s64 = ctx.r3.s64 + 872;
	// bl 0x82224948
	ctx.lr = 0x82362144;
	sub_82224948(ctx, base);
loc_82362144:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ed00
	ctx.lr = 0x82362158;
	sub_8235ED00(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ed58
	ctx.lr = 0x82362168;
	sub_8235ED58(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8235f7c0
	ctx.lr = 0x82362180;
	sub_8235F7C0(ctx, base);
	// b 0x82362238
	goto loc_82362238;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bl 0x82362380
	ctx.lr = 0x8236218C;
	sub_82362380(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362190;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362194;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82362198;
	sub_823708C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82362144
	if (ctx.cr6.eq) goto loc_82362144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// bl 0x8235cf68
	ctx.lr = 0x823621AC;
	sub_8235CF68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823621C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// b 0x82362238
	goto loc_82362238;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bl 0x82362380
	ctx.lr = 0x823621DC;
	sub_82362380(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823621E0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823621E4;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823621E8;
	sub_823708C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82362144
	if (ctx.cr6.eq) goto loc_82362144;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// bl 0x8235cf68
	ctx.lr = 0x823621FC;
	sub_8235CF68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82362210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// b 0x82362238
	goto loc_82362238;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8235edc0
	ctx.lr = 0x82362238;
	sub_8235EDC0(ctx, base);
loc_82362238:
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

__attribute__((alias("__imp__sub_82362250"))) PPC_WEAK_FUNC(sub_82362250);
PPC_FUNC_IMPL(__imp__sub_82362250) {
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
	// bl 0x8235bf58
	ctx.lr = 0x82362264;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82362274;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236227C;
	sub_8235BFA8(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82256338
	ctx.lr = 0x8236228C;
	sub_82256338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823622a0
	if (!ctx.cr6.eq) goto loc_823622A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823622a8
	goto loc_823622A8;
loc_823622A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,4393
	ctx.r4.s64 = ctx.r11.s64 + 4393;
loc_823622A8:
	// bl 0x8235c3d0
	ctx.lr = 0x823622AC;
	sub_8235C3D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235bfb0
	ctx.lr = 0x823622B4;
	sub_8235BFB0(ctx, base);
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

__attribute__((alias("__imp__sub_823622C8"))) PPC_WEAK_FUNC(sub_823622C8);
PPC_FUNC_IMPL(__imp__sub_823622C8) {
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
	// bl 0x8235bf58
	ctx.lr = 0x823622E4;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823622fc
	if (!ctx.cr6.eq) goto loc_823622FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356e70
	ctx.lr = 0x823622F8;
	sub_82356E70(ctx, base);
	// b 0x82362364
	goto loc_82362364;
loc_823622FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235bfb8
	ctx.lr = 0x82362308;
	sub_8235BFB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8235bfa8
	ctx.lr = 0x82362318;
	sub_8235BFA8(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256578
	ctx.lr = 0x82362324;
	sub_82256578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82362350
	if (!ctx.cr6.eq) goto loc_82362350;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356f88
	ctx.lr = 0x82362338;
	sub_82356F88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82357068
	ctx.lr = 0x82362344;
	sub_82357068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c3d8
	ctx.lr = 0x82362350;
	sub_8235C3D8(ctx, base);
loc_82362350:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357068
	ctx.lr = 0x8236235C;
	sub_82357068(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x82362364;
	sub_82356EB8(ctx, base);
loc_82362364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82362380"))) PPC_WEAK_FUNC(sub_82362380);
PPC_FUNC_IMPL(__imp__sub_82362380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-5464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236238C"))) PPC_WEAK_FUNC(sub_8236238C);
PPC_FUNC_IMPL(__imp__sub_8236238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362390"))) PPC_WEAK_FUNC(sub_82362390);
PPC_FUNC_IMPL(__imp__sub_82362390) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82370538
	ctx.lr = 0x823623B0;
	sub_82370538(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,10412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82370920
	ctx.lr = 0x823623D0;
	sub_82370920(ctx, base);
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

__attribute__((alias("__imp__sub_823623E8"))) PPC_WEAK_FUNC(sub_823623E8);
PPC_FUNC_IMPL(__imp__sub_823623E8) {
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
	// bl 0x8235b1f8
	ctx.lr = 0x82362400;
	sub_8235B1F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235b6b8
	ctx.lr = 0x82362408;
	sub_8235B6B8(ctx, base);
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

__attribute__((alias("__imp__sub_8236241C"))) PPC_WEAK_FUNC(sub_8236241C);
PPC_FUNC_IMPL(__imp__sub_8236241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362420"))) PPC_WEAK_FUNC(sub_82362420);
PPC_FUNC_IMPL(__imp__sub_82362420) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31328
	ctx.r9.s64 = ctx.r11.s64 + 31328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82362454
	if (ctx.cr6.eq) goto loc_82362454;
	// bl 0x82357128
	ctx.lr = 0x82362450;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82362454:
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

__attribute__((alias("__imp__sub_82362468"))) PPC_WEAK_FUNC(sub_82362468);
PPC_FUNC_IMPL(__imp__sub_82362468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82362470;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823624dc
	if (ctx.cr6.eq) goto loc_823624DC;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x823624bc
	if (ctx.cr0.lt) goto loc_823624BC;
loc_823624A8:
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237dfa0
	ctx.lr = 0x823624B4;
	sub_8237DFA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x823624a8
	if (!ctx.cr0.lt) goto loc_823624A8;
loc_823624BC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823624d0
	if (ctx.cr6.eq) goto loc_823624D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357128
	ctx.lr = 0x823624D0;
	sub_82357128(ctx, base);
loc_823624D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823624DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237dfa0
	ctx.lr = 0x823624E4;
	sub_8237DFA0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823624f8
	if (ctx.cr6.eq) goto loc_823624F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357128
	ctx.lr = 0x823624F8;
	sub_82357128(ctx, base);
loc_823624F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82362504"))) PPC_WEAK_FUNC(sub_82362504);
PPC_FUNC_IMPL(__imp__sub_82362504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362508"))) PPC_WEAK_FUNC(sub_82362508);
PPC_FUNC_IMPL(__imp__sub_82362508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82362510;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32177
	ctx.r28.s64 = -2108751872;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236253c
	if (ctx.cr6.eq) goto loc_8236253C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82357128
	ctx.lr = 0x82362534;
	sub_82357128(ctx, base);
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// stw r27,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r27.u32);
loc_8236253C:
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236255c
	if (ctx.cr6.eq) goto loc_8236255C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82357128
	ctx.lr = 0x82362554;
	sub_82357128(ctx, base);
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// stw r27,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r27.u32);
loc_8236255C:
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823625b0
	if (ctx.cr6.eq) goto loc_823625B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823625a8
	if (ctx.cr6.eq) goto loc_823625A8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823625a4
	if (ctx.cr6.eq) goto loc_823625A4;
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
	ctx.lr = 0x823625A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823625a8
	goto loc_823625A8;
loc_823625A4:
	// bl 0x82080060
	ctx.lr = 0x823625A8;
	sub_82080060(ctx, base);
loc_823625A8:
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// stw r27,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r27.u32);
loc_823625B0:
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82362608
	if (ctx.cr6.eq) goto loc_82362608;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362600
	if (ctx.cr6.eq) goto loc_82362600;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// mulli r10,r9,148
	ctx.r10.s64 = ctx.r9.s64 * 148;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x823625f8
	if (ctx.cr0.lt) goto loc_823625F8;
loc_823625E4:
	// addi r30,r30,-148
	ctx.r30.s64 = ctx.r30.s64 + -148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab568
	ctx.lr = 0x823625F0;
	sub_823AB568(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x823625e4
	if (!ctx.cr0.lt) goto loc_823625E4;
loc_823625F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357128
	ctx.lr = 0x82362600;
	sub_82357128(ctx, base);
loc_82362600:
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// stw r27,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r27.u32);
loc_82362608:
	// bl 0x82370538
	ctx.lr = 0x8236260C;
	sub_82370538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236262c
	if (ctx.cr6.eq) goto loc_8236262C;
	// lwz r11,-5464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82362628
	if (!ctx.cr6.eq) goto loc_82362628;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82362628:
	// bl 0x82370708
	ctx.lr = 0x8236262C;
	sub_82370708(ctx, base);
loc_8236262C:
	// bl 0x823704b8
	ctx.lr = 0x82362630;
	sub_823704B8(ctx, base);
	// lwz r3,-5464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362658
	if (ctx.cr6.eq) goto loc_82362658;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82362650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-5464(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5464, ctx.r27.u32);
loc_82362658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82362660"))) PPC_WEAK_FUNC(sub_82362660);
PPC_FUNC_IMPL(__imp__sub_82362660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82362668;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82362704
	if (!ctx.cr6.gt) goto loc_82362704;
	// bl 0x82370538
	ctx.lr = 0x82362684;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362690;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362704
	if (ctx.cr6.eq) goto loc_82362704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823708e8
	ctx.lr = 0x823626B8;
	sub_823708E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362704
	if (ctx.cr6.eq) goto loc_82362704;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362704
	if (ctx.cr6.eq) goto loc_82362704;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362704
	if (ctx.cr6.eq) goto loc_82362704;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x823626E4;
	sub_82370C48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82372388
	ctx.lr = 0x823626F4;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362710
	if (!ctx.cr6.eq) goto loc_82362710;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82362700:
	// bl 0x82372340
	ctx.lr = 0x82362704;
	sub_82372340(ctx, base);
loc_82362704:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82362710:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82362728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82362700
	if (ctx.cr6.eq) goto loc_82362700;
	// bl 0x82372340
	ctx.lr = 0x82362738;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82362744"))) PPC_WEAK_FUNC(sub_82362744);
PPC_FUNC_IMPL(__imp__sub_82362744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362748"))) PPC_WEAK_FUNC(sub_82362748);
PPC_FUNC_IMPL(__imp__sub_82362748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82362750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82362774
	if (ctx.cr6.gt) goto loc_82362774;
loc_82362768:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82362774:
	// bl 0x82370538
	ctx.lr = 0x82362778;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362784;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362768
	if (ctx.cr6.eq) goto loc_82362768;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370bd0
	ctx.lr = 0x8236279C;
	sub_82370BD0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823627AC"))) PPC_WEAK_FUNC(sub_823627AC);
PPC_FUNC_IMPL(__imp__sub_823627AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823627B0"))) PPC_WEAK_FUNC(sub_823627B0);
PPC_FUNC_IMPL(__imp__sub_823627B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823627B8;
	sub_8224878C(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8236284c
	if (!ctx.cr6.eq) goto loc_8236284C;
	// bl 0x82370538
	ctx.lr = 0x823627D4;
	sub_82370538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x823627DC;
	sub_82370868(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x823627E8;
	sub_82370C48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x823627F4;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82362848
	if (ctx.cr6.eq) goto loc_82362848;
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82371320
	ctx.lr = 0x82362808;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362844
	if (ctx.cr6.eq) goto loc_82362844;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237ea18
	ctx.lr = 0x82362818;
	sub_8237EA18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r11,2424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2424, ctx.r11.u8);
	// stw r11,2428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2428, ctx.r11.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8237e958
	ctx.lr = 0x82362834;
	sub_8237E958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362858
	if (!ctx.cr6.eq) goto loc_82362858;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237e850
	ctx.lr = 0x82362844;
	sub_8237E850(ctx, base);
loc_82362844:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82362848:
	// bl 0x82372340
	ctx.lr = 0x8236284C;
	sub_82372340(ctx, base);
loc_8236284C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82362858:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823705a8
	ctx.lr = 0x82362864;
	sub_823705A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237e850
	ctx.lr = 0x82362870;
	sub_8237E850(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82362878;
	sub_82372340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82362884"))) PPC_WEAK_FUNC(sub_82362884);
PPC_FUNC_IMPL(__imp__sub_82362884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362888"))) PPC_WEAK_FUNC(sub_82362888);
PPC_FUNC_IMPL(__imp__sub_82362888) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823628b8
	if (ctx.cr6.eq) goto loc_823628B8;
loc_823628B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823628d8
	goto loc_823628D8;
loc_823628B8:
	// bl 0x82370538
	ctx.lr = 0x823628BC;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x823628C4;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823628b0
	if (ctx.cr6.eq) goto loc_823628B0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_823628D8:
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

__attribute__((alias("__imp__sub_823628F0"))) PPC_WEAK_FUNC(sub_823628F0);
PPC_FUNC_IMPL(__imp__sub_823628F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82362910:
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82362924
	if (ctx.cr6.eq) goto loc_82362924;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
loc_82362924:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82362910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362930"))) PPC_WEAK_FUNC(sub_82362930);
PPC_FUNC_IMPL(__imp__sub_82362930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2416(r1)
	ea = -2416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82362964
	if (ctx.cr6.eq) goto loc_82362964;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82362964:
	// bl 0x82370538
	ctx.lr = 0x82362968;
	sub_82370538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x82362970;
	sub_82370868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ea18
	ctx.lr = 0x82362978;
	sub_8237EA18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2392, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823705a8
	ctx.lr = 0x82362994;
	sub_823705A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x823629A0;
	sub_8237E850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823629B8"))) PPC_WEAK_FUNC(sub_823629B8);
PPC_FUNC_IMPL(__imp__sub_823629B8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823629e8
	if (ctx.cr6.eq) goto loc_823629E8;
loc_823629E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82362a08
	goto loc_82362A08;
loc_823629E8:
	// bl 0x82370538
	ctx.lr = 0x823629EC;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x823629F4;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823629e0
	if (ctx.cr6.eq) goto loc_823629E0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82362A08:
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

__attribute__((alias("__imp__sub_82362A20"))) PPC_WEAK_FUNC(sub_82362A20);
PPC_FUNC_IMPL(__imp__sub_82362A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82362A38:
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82362a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362A4C"))) PPC_WEAK_FUNC(sub_82362A4C);
PPC_FUNC_IMPL(__imp__sub_82362A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362A50"))) PPC_WEAK_FUNC(sub_82362A50);
PPC_FUNC_IMPL(__imp__sub_82362A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82362A58;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82370538
	ctx.lr = 0x82362A68;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362A6C;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362A74;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362a88
	if (!ctx.cr6.eq) goto loc_82362A88;
loc_82362A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82362A88:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mulli r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 * 148;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82362a7c
	if (ctx.cr6.eq) goto loc_82362A7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82362af4
	if (ctx.cr6.lt) goto loc_82362AF4;
	// mulli r5,r30,37
	ctx.r5.s64 = ctx.r30.s64 * 37;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
loc_82362AC4:
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// blt cr6,0x82362ac4
	if (ctx.cr6.lt) goto loc_82362AC4;
loc_82362AF4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82362b10
	if (!ctx.cr6.lt) goto loc_82362B10;
	// mulli r9,r30,37
	ctx.r9.s64 = ctx.r30.s64 * 37;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82362B10:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8224b370
	ctx.lr = 0x82362B1C;
	sub_8224B370(ctx, base);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdiv f0,f1,f13
	ctx.f0.f64 = ctx.f1.f64 / ctx.f13.f64;
	// lfd f13,29640(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29640);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f13,28248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28248);
	// ble cr6,0x82362b60
	if (!ctx.cr6.gt) goto loc_82362B60;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82362B60:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82362B78"))) PPC_WEAK_FUNC(sub_82362B78);
PPC_FUNC_IMPL(__imp__sub_82362B78) {
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
	// bl 0x82370538
	ctx.lr = 0x82362B98;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362B9C;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362BA4;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82362c0c
	if (ctx.cr6.eq) goto loc_82362C0C;
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82362c0c
	if (ctx.cr6.eq) goto loc_82362C0C;
	// mulli r11,r31,37
	ctx.r11.s64 = ctx.r31.s64 * 37;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
loc_82362BD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82362be8
	if (!ctx.cr6.eq) goto loc_82362BE8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82362c00
	goto loc_82362C00;
loc_82362BE8:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82362c00
	if (!ctx.cr6.gt) goto loc_82362C00;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82362C00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82362bd4
	if (ctx.cr6.lt) goto loc_82362BD4;
loc_82362C0C:
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

__attribute__((alias("__imp__sub_82362C24"))) PPC_WEAK_FUNC(sub_82362C24);
PPC_FUNC_IMPL(__imp__sub_82362C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362C28"))) PPC_WEAK_FUNC(sub_82362C28);
PPC_FUNC_IMPL(__imp__sub_82362C28) {
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
	// bl 0x82370538
	ctx.lr = 0x82362C48;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362C4C;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362C54;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82362ca8
	if (ctx.cr6.eq) goto loc_82362CA8;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362ca8
	if (ctx.cr6.eq) goto loc_82362CA8;
	// mulli r8,r31,37
	ctx.r8.s64 = ctx.r31.s64 * 37;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
loc_82362C88:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82362ca0
	if (!ctx.cr6.lt) goto loc_82362CA0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82362CA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82362c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362C88;
loc_82362CA8:
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

__attribute__((alias("__imp__sub_82362CC0"))) PPC_WEAK_FUNC(sub_82362CC0);
PPC_FUNC_IMPL(__imp__sub_82362CC0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82362cec
	if (ctx.cr6.eq) goto loc_82362CEC;
loc_82362CD8:
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
loc_82362CEC:
	// bl 0x82370538
	ctx.lr = 0x82362CF0;
	sub_82370538(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362cd8
	if (ctx.cr6.eq) goto loc_82362CD8;
	// bl 0x82370828
	ctx.lr = 0x82362CFC;
	sub_82370828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362D0C"))) PPC_WEAK_FUNC(sub_82362D0C);
PPC_FUNC_IMPL(__imp__sub_82362D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362D10"))) PPC_WEAK_FUNC(sub_82362D10);
PPC_FUNC_IMPL(__imp__sub_82362D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82362D18;
	sub_8224877C(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x82370538
	ctx.lr = 0x82362D38;
	sub_82370538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x82362D40;
	sub_82370868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362dfc
	if (ctx.cr6.eq) goto loc_82362DFC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82362da8
	if (!ctx.cr6.eq) goto loc_82362DA8;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// ble cr6,0x82362d5c
	if (!ctx.cr6.gt) goto loc_82362D5C;
	// li r31,100
	ctx.r31.s64 = 100;
loc_82362D5C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82362d94
	if (ctx.cr6.lt) goto loc_82362D94;
	// beq cr6,0x82362d84
	if (ctx.cr6.eq) goto loc_82362D84;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bge cr6,0x82362dfc
	if (!ctx.cr6.lt) goto loc_82362DFC;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823709c8
	ctx.lr = 0x82362D80;
	sub_823709C8(ctx, base);
	// b 0x82362da0
	goto loc_82362DA0;
loc_82362D84:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370a20
	ctx.lr = 0x82362D90;
	sub_82370A20(ctx, base);
	// b 0x82362da0
	goto loc_82362DA0;
loc_82362D94:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370980
	ctx.lr = 0x82362DA0;
	sub_82370980(ctx, base);
loc_82362DA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362dfc
	if (ctx.cr6.eq) goto loc_82362DFC;
loc_82362DA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ea18
	ctx.lr = 0x82362DB0;
	sub_8237EA18(ctx, base);
	// stw r28,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r28.u32);
	// stb r26,2392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2392, ctx.r26.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237e678
	ctx.lr = 0x82362DC0;
	sub_8237E678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362e08
	if (ctx.cr6.eq) goto loc_82362E08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237e518
	ctx.lr = 0x82362DD0;
	sub_8237E518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237e678
	ctx.lr = 0x82362DDC;
	sub_8237E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8237e958
	ctx.lr = 0x82362DEC;
	sub_8237E958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362e08
	if (!ctx.cr6.eq) goto loc_82362E08;
loc_82362DF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x82362DFC;
	sub_8237E850(ctx, base);
loc_82362DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82362E08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237dcd8
	ctx.lr = 0x82362E10;
	sub_8237DCD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362e44
	if (ctx.cr6.eq) goto loc_82362E44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237dea8
	ctx.lr = 0x82362E20;
	sub_8237DEA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237dcd8
	ctx.lr = 0x82362E2C;
	sub_8237DCD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8237e9b8
	ctx.lr = 0x82362E3C;
	sub_8237E9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362df4
	if (ctx.cr6.eq) goto loc_82362DF4;
loc_82362E44:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82362e80
	if (ctx.cr6.lt) goto loc_82362E80;
	// beq cr6,0x82362e70
	if (ctx.cr6.eq) goto loc_82362E70;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bge cr6,0x82362e90
	if (!ctx.cr6.lt) goto loc_82362E90;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823705e0
	ctx.lr = 0x82362E6C;
	sub_823705E0(ctx, base);
	// b 0x82362e8c
	goto loc_82362E8C;
loc_82362E70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370670
	ctx.lr = 0x82362E7C;
	sub_82370670(ctx, base);
	// b 0x82362e8c
	goto loc_82362E8C;
loc_82362E80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823705a8
	ctx.lr = 0x82362E8C;
	sub_823705A8(ctx, base);
loc_82362E8C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82362E90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x82362E98;
	sub_8237E850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82362EA4"))) PPC_WEAK_FUNC(sub_82362EA4);
PPC_FUNC_IMPL(__imp__sub_82362EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362EA8"))) PPC_WEAK_FUNC(sub_82362EA8);
PPC_FUNC_IMPL(__imp__sub_82362EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82362EB0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mulli r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 * 148;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82363044
	if (!ctx.cr6.eq) goto loc_82363044;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mulli r9,r4,37
	ctx.r9.s64 = ctx.r4.s64 * 37;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r5,r10,7
	ctx.r5.s64 = ctx.r10.s64 + 7;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// ble cr6,0x82362f34
	if (!ctx.cr6.gt) goto loc_82362F34;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82362F34:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// ble cr6,0x82362f50
	if (!ctx.cr6.gt) goto loc_82362F50;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
loc_82362F50:
	// bl 0x8235bf58
	ctx.lr = 0x82362F54;
	sub_8235BF58(ctx, base);
	// bl 0x8235c190
	ctx.lr = 0x82362F58;
	sub_8235C190(ctx, base);
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82363040
	if (ctx.cr6.eq) goto loc_82363040;
loc_82362F6C:
	// bl 0x82370538
	ctx.lr = 0x82362F70;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362F74;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82362F78;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82363034
	if (ctx.cr6.eq) goto loc_82363034;
	// bl 0x82370538
	ctx.lr = 0x82362F84;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82362F88;
	sub_82370538(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823707c8
	ctx.lr = 0x82362F90;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363034
	if (ctx.cr6.eq) goto loc_82363034;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x82363008
	if (ctx.cr6.eq) goto loc_82363008;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// beq cr6,0x82362fd4
	if (ctx.cr6.eq) goto loc_82362FD4;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bne cr6,0x82363034
	if (!ctx.cr6.eq) goto loc_82363034;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362a50
	ctx.lr = 0x82362FBC;
	sub_82362A50(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82363034
	if (!ctx.cr6.lt) goto loc_82363034;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362a50
	ctx.lr = 0x82362FD0;
	sub_82362A50(ctx, base);
	// b 0x82363030
	goto loc_82363030;
loc_82362FD4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82362fe4
	if (!ctx.cr6.lt) goto loc_82362FE4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82362FE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362c28
	ctx.lr = 0x82362FF0;
	sub_82362C28(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82363034
	if (!ctx.cr6.lt) goto loc_82363034;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362c28
	ctx.lr = 0x82363004;
	sub_82362C28(ctx, base);
	// b 0x82363030
	goto loc_82363030;
loc_82363008:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363024
	if (ctx.cr6.eq) goto loc_82363024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b78
	ctx.lr = 0x8236301C;
	sub_82362B78(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82363034
	if (!ctx.cr6.gt) goto loc_82363034;
loc_82363024:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b78
	ctx.lr = 0x82363030;
	sub_82362B78(ctx, base);
loc_82363030:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82363034:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82362f6c
	if (ctx.cr6.lt) goto loc_82362F6C;
loc_82363040:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_82363044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82363050"))) PPC_WEAK_FUNC(sub_82363050);
PPC_FUNC_IMPL(__imp__sub_82363050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82363058;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363064;
	sub_8235BF58(ctx, base);
	// lwz r26,56(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823630d8
	if (ctx.cr6.eq) goto loc_823630D8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82363080:
	// bl 0x82370538
	ctx.lr = 0x82363084;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82363088;
	sub_82370538(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823707c8
	ctx.lr = 0x82363090;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823630c8
	if (ctx.cr6.eq) goto loc_823630C8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// bl 0x8235c190
	ctx.lr = 0x823630AC;
	sub_8235C190(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x823630c4
	if (!ctx.cr6.eq) goto loc_823630C4;
	// bl 0x823a86f8
	ctx.lr = 0x823630C0;
	sub_823A86F8(ctx, base);
	// b 0x823630c8
	goto loc_823630C8;
loc_823630C4:
	// bl 0x8237d130
	ctx.lr = 0x823630C8;
	sub_8237D130(ctx, base);
loc_823630C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82363080
	if (ctx.cr6.lt) goto loc_82363080;
loc_823630D8:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// bl 0x82370538
	ctx.lr = 0x823630E8;
	sub_82370538(ctx, base);
	// bl 0x82370768
	ctx.lr = 0x823630EC;
	sub_82370768(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8236312c
	if (!ctx.cr6.eq) goto loc_8236312C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236312c
	if (ctx.cr6.eq) goto loc_8236312C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82363110:
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82363124
	if (ctx.cr6.eq) goto loc_82363124;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82363124:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363110;
loc_8236312C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82363134"))) PPC_WEAK_FUNC(sub_82363134);
PPC_FUNC_IMPL(__imp__sub_82363134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363138"))) PPC_WEAK_FUNC(sub_82363138);
PPC_FUNC_IMPL(__imp__sub_82363138) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82363160
	if (ctx.cr6.eq) goto loc_82363160;
loc_82363158:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823631c8
	goto loc_823631C8;
loc_82363160:
	// bl 0x8235bf58
	ctx.lr = 0x82363164;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8236316C;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x82363174;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82363190
	if (ctx.cr6.eq) goto loc_82363190;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823631c8
	goto loc_823631C8;
loc_82363190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b558
	ctx.lr = 0x82363198;
	sub_8235B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363158
	if (!ctx.cr6.eq) goto loc_82363158;
	// lwz r11,2996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82363158
	if (!ctx.cr6.eq) goto loc_82363158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235bab0
	ctx.lr = 0x823631B4;
	sub_8235BAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363158
	if (!ctx.cr6.eq) goto loc_82363158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x823631C4;
	sub_8235B8E8(ctx, base);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_823631C8:
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

__attribute__((alias("__imp__sub_823631E0"))) PPC_WEAK_FUNC(sub_823631E0);
PPC_FUNC_IMPL(__imp__sub_823631E0) {
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
	// bl 0x8235b1f8
	ctx.lr = 0x823631F4;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x823631FC;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82363220
	if (ctx.cr6.eq) goto loc_82363220;
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
loc_82363220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x82363228;
	sub_8235B8E8(ctx, base);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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

__attribute__((alias("__imp__sub_82363240"))) PPC_WEAK_FUNC(sub_82363240);
PPC_FUNC_IMPL(__imp__sub_82363240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363248;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363254;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8236325C;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x82363264;
	sub_82370538(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823632d8
	if (ctx.cr6.eq) goto loc_823632D8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82363294
	if (ctx.cr6.eq) goto loc_82363294;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82363368
	if (!ctx.cr6.eq) goto loc_82363368;
	// bl 0x82370580
	ctx.lr = 0x82363284;
	sub_82370580(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82363294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b580
	ctx.lr = 0x8236329C;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363368
	if (!ctx.cr6.eq) goto loc_82363368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x823632AC;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x823632c8
	if (ctx.cr6.eq) goto loc_823632C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x823632C0;
	sub_8235B9C8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_823632C8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823632D8:
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823632ec
	if (ctx.cr6.eq) goto loc_823632EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823632c8
	if (!ctx.cr6.eq) goto loc_823632C8;
loc_823632EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x823632F4;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,8
	ctx.r29.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82363308
	if (!ctx.cr6.eq) goto loc_82363308;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_82363308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b580
	ctx.lr = 0x82363310;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82363368
	if (!ctx.cr6.eq) goto loc_82363368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x82363320;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82363338
	if (!ctx.cr6.eq) goto loc_82363338;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82363338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x82363340;
	sub_8235B9C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b368
	ctx.lr = 0x82363348;
	sub_8235B368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363360
	if (ctx.cr6.eq) goto loc_82363360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x82363358;
	sub_8235B9C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82363360:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82363368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82363370"))) PPC_WEAK_FUNC(sub_82363370);
PPC_FUNC_IMPL(__imp__sub_82363370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363378;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82363388;
	sub_8235CF68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x82363390;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82363394;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82363398;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823633e0
	if (ctx.cr6.eq) goto loc_823633E0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823633e0
	if (ctx.cr6.eq) goto loc_823633E0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823633e0
	if (ctx.cr6.eq) goto loc_823633E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823633E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823633E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823633EC"))) PPC_WEAK_FUNC(sub_823633EC);
PPC_FUNC_IMPL(__imp__sub_823633EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823633F0"))) PPC_WEAK_FUNC(sub_823633F0);
PPC_FUNC_IMPL(__imp__sub_823633F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363404"))) PPC_WEAK_FUNC(sub_82363404);
PPC_FUNC_IMPL(__imp__sub_82363404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363408"))) PPC_WEAK_FUNC(sub_82363408);
PPC_FUNC_IMPL(__imp__sub_82363408) {
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
	// bl 0x82370538
	ctx.lr = 0x82363428;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8236342C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82363430;
	sub_823708C0(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8236345C"))) PPC_WEAK_FUNC(sub_8236345C);
PPC_FUNC_IMPL(__imp__sub_8236345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363460"))) PPC_WEAK_FUNC(sub_82363460);
PPC_FUNC_IMPL(__imp__sub_82363460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363468;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363478;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823634e4
	if (!ctx.cr6.eq) goto loc_823634E4;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bne cr6,0x823634e4
	if (!ctx.cr6.eq) goto loc_823634E4;
	// bl 0x82370538
	ctx.lr = 0x82363494;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82363498;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8236349C;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x823634A8;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823634d0
	if (!ctx.cr6.eq) goto loc_823634D0;
	// bl 0x82370538
	ctx.lr = 0x823634B4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823634B8;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823634BC;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c750
	ctx.lr = 0x823634C8;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823634e4
	if (ctx.cr6.eq) goto loc_823634E4;
loc_823634D0:
	// bl 0x82370538
	ctx.lr = 0x823634D4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823634D8;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823634DC;
	sub_823708C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823634E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823634F0"))) PPC_WEAK_FUNC(sub_823634F0);
PPC_FUNC_IMPL(__imp__sub_823634F0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82363534
	if (ctx.cr6.eq) goto loc_82363534;
	// bl 0x8235cf68
	ctx.lr = 0x82363510;
	sub_8235CF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363518;
	sub_8235BF58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,3000(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3000);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82363534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363534:
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

__attribute__((alias("__imp__sub_8236354C"))) PPC_WEAK_FUNC(sub_8236354C);
PPC_FUNC_IMPL(__imp__sub_8236354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363550"))) PPC_WEAK_FUNC(sub_82363550);
PPC_FUNC_IMPL(__imp__sub_82363550) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363598
	if (ctx.cr6.eq) goto loc_82363598;
loc_82363574:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236358C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82363574
	if (!ctx.cr6.eq) goto loc_82363574;
loc_82363598:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823635C0"))) PPC_WEAK_FUNC(sub_823635C0);
PPC_FUNC_IMPL(__imp__sub_823635C0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,31324
	ctx.r10.s64 = ctx.r11.s64 + 31324;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237dfa0
	ctx.lr = 0x823635F0;
	sub_8237DFA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82363608
	if (ctx.cr6.eq) goto loc_82363608;
	// bl 0x82357128
	ctx.lr = 0x82363604;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82363608:
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

__attribute__((alias("__imp__sub_82363620"))) PPC_WEAK_FUNC(sub_82363620);
PPC_FUNC_IMPL(__imp__sub_82363620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363628;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x8236363C;
	sub_823570E0(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823570f0
	ctx.lr = 0x82363644;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363678
	if (ctx.cr6.eq) goto loc_82363678;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,31324
	ctx.r10.s64 = ctx.r11.s64 + 31324;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237e610
	ctx.lr = 0x82363668;
	sub_8237E610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x8236367c
	goto loc_8236367C;
loc_82363678:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236367C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82363684;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82363698
	if (!ctx.cr6.eq) goto loc_82363698;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82363698:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823636B0"))) PPC_WEAK_FUNC(sub_823636B0);
PPC_FUNC_IMPL(__imp__sub_823636B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823636B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236370c
	if (ctx.cr6.eq) goto loc_8236370C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823636E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823636f4
	if (ctx.cr6.eq) goto loc_823636F4;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_823636F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363700
	if (ctx.cr6.eq) goto loc_82363700;
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
loc_82363700:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_8236370C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82363714"))) PPC_WEAK_FUNC(sub_82363714);
PPC_FUNC_IMPL(__imp__sub_82363714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363718"))) PPC_WEAK_FUNC(sub_82363718);
PPC_FUNC_IMPL(__imp__sub_82363718) {
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
	// addi r31,r3,832
	ctx.r31.s64 = ctx.r3.s64 + 832;
	// lwz r3,836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8236374c
	if (ctx.cr6.eq) goto loc_8236374C;
	// bl 0x82357240
	ctx.lr = 0x82363748;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8236374C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8236376C"))) PPC_WEAK_FUNC(sub_8236376C);
PPC_FUNC_IMPL(__imp__sub_8236376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363770"))) PPC_WEAK_FUNC(sub_82363770);
PPC_FUNC_IMPL(__imp__sub_82363770) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823637b8
	if (ctx.cr6.eq) goto loc_823637B8;
loc_82363794:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823637AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82363794
	if (!ctx.cr6.eq) goto loc_82363794;
loc_823637B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823637E0"))) PPC_WEAK_FUNC(sub_823637E0);
PPC_FUNC_IMPL(__imp__sub_823637E0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237e5a8
	ctx.lr = 0x82363810;
	sub_8237E5A8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82363828
	if (ctx.cr6.eq) goto loc_82363828;
	// bl 0x82357128
	ctx.lr = 0x82363824;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82363828:
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

__attribute__((alias("__imp__sub_82363840"))) PPC_WEAK_FUNC(sub_82363840);
PPC_FUNC_IMPL(__imp__sub_82363840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363848;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x8236385C;
	sub_823570E0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823570f0
	ctx.lr = 0x82363864;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363898
	if (ctx.cr6.eq) goto loc_82363898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237e7c0
	ctx.lr = 0x82363888;
	sub_8237E7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x8236389c
	goto loc_8236389C;
loc_82363898:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236389C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823638A4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823638b8
	if (!ctx.cr6.eq) goto loc_823638B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823638B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823638D0"))) PPC_WEAK_FUNC(sub_823638D0);
PPC_FUNC_IMPL(__imp__sub_823638D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823638D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236392c
	if (ctx.cr6.eq) goto loc_8236392C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	ctx.lr = 0x82363908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82363914
	if (ctx.cr6.eq) goto loc_82363914;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82363914:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363920
	if (ctx.cr6.eq) goto loc_82363920;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
loc_82363920:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_8236392C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82363934"))) PPC_WEAK_FUNC(sub_82363934);
PPC_FUNC_IMPL(__imp__sub_82363934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363938"))) PPC_WEAK_FUNC(sub_82363938);
PPC_FUNC_IMPL(__imp__sub_82363938) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823639a8
	if (!ctx.cr6.lt) goto loc_823639A8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82363994
	if (!ctx.cr6.lt) goto loc_82363994;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// twllei r11,0
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// twllei r11,0
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82363994:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82224348
	ctx.lr = 0x8236399C;
	sub_82224348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823639ac
	if (ctx.cr6.eq) goto loc_823639AC;
loc_823639A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823639AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823639BC"))) PPC_WEAK_FUNC(sub_823639BC);
PPC_FUNC_IMPL(__imp__sub_823639BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823639C0"))) PPC_WEAK_FUNC(sub_823639C0);
PPC_FUNC_IMPL(__imp__sub_823639C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823639C8;
	sub_8224877C(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82363a04
	if (ctx.cr6.eq) goto loc_82363A04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82363a04
	if (!ctx.cr6.eq) goto loc_82363A04;
loc_823639F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82363A04:
	// cmplwi cr6,r31,1024
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1024, ctx.xer);
	// bgt cr6,0x823639f8
	if (ctx.cr6.gt) goto loc_823639F8;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823639f8
	if (!ctx.cr6.eq) goto loc_823639F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82363A20;
	sub_8237DD00(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82363a40
	if (ctx.cr6.eq) goto loc_82363A40;
	// bl 0x8237e410
	ctx.lr = 0x82363A3C;
	sub_8237E410(ctx, base);
	// b 0x82363a44
	goto loc_82363A44;
loc_82363A40:
	// bl 0x8237ddc8
	ctx.lr = 0x82363A44;
	sub_8237DDC8(ctx, base);
loc_82363A44:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363a78
	if (ctx.cr6.eq) goto loc_82363A78;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362d10
	ctx.lr = 0x82363A6C;
	sub_82362D10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82363a7c
	if (!ctx.cr6.eq) goto loc_82363A7C;
loc_82363A78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82363A7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x82363A84;
	sub_8237DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82363A90"))) PPC_WEAK_FUNC(sub_82363A90);
PPC_FUNC_IMPL(__imp__sub_82363A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82363A98;
	sub_82248778(ctx, base);
	// stwu r1,-2480(r1)
	ea = -2480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82363ad8
	if (ctx.cr6.eq) goto loc_82363AD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82363ad8
	if (!ctx.cr6.eq) goto loc_82363AD8;
loc_82363ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82363AD8:
	// cmplwi cr6,r31,1024
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1024, ctx.xer);
	// bgt cr6,0x82363acc
	if (ctx.cr6.gt) goto loc_82363ACC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82363acc
	if (!ctx.cr6.eq) goto loc_82363ACC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82363AF4;
	sub_8237DD00(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82363b14
	if (ctx.cr6.eq) goto loc_82363B14;
	// bl 0x8237e410
	ctx.lr = 0x82363B10;
	sub_8237E410(ctx, base);
	// b 0x82363b18
	goto loc_82363B18;
loc_82363B14:
	// bl 0x8237ddc8
	ctx.lr = 0x82363B18;
	sub_8237DDC8(ctx, base);
loc_82363B18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363b4c
	if (ctx.cr6.eq) goto loc_82363B4C;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362d10
	ctx.lr = 0x82363B40;
	sub_82362D10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82363b50
	if (!ctx.cr6.eq) goto loc_82363B50;
loc_82363B4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82363B50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x82363B58;
	sub_8237DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82363B64"))) PPC_WEAK_FUNC(sub_82363B64);
PPC_FUNC_IMPL(__imp__sub_82363B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363B68"))) PPC_WEAK_FUNC(sub_82363B68);
PPC_FUNC_IMPL(__imp__sub_82363B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82363B70;
	sub_8224877C(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82363bac
	if (ctx.cr6.eq) goto loc_82363BAC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82363bac
	if (!ctx.cr6.eq) goto loc_82363BAC;
loc_82363BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82363BAC:
	// cmplwi cr6,r31,1024
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1024, ctx.xer);
	// bgt cr6,0x82363ba0
	if (ctx.cr6.gt) goto loc_82363BA0;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82363ba0
	if (!ctx.cr6.eq) goto loc_82363BA0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82363BC8;
	sub_8237DD00(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82363be8
	if (ctx.cr6.eq) goto loc_82363BE8;
	// bl 0x8237e410
	ctx.lr = 0x82363BE4;
	sub_8237E410(ctx, base);
	// b 0x82363bec
	goto loc_82363BEC;
loc_82363BE8:
	// bl 0x8237ddc8
	ctx.lr = 0x82363BEC;
	sub_8237DDC8(ctx, base);
loc_82363BEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363c20
	if (ctx.cr6.eq) goto loc_82363C20;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362d10
	ctx.lr = 0x82363C14;
	sub_82362D10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82363c24
	if (!ctx.cr6.eq) goto loc_82363C24;
loc_82363C20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82363C24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x82363C2C;
	sub_8237DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82363C38"))) PPC_WEAK_FUNC(sub_82363C38);
PPC_FUNC_IMPL(__imp__sub_82363C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82363C40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x82363C50;
	sub_8235CF68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363C58;
	sub_8235BF58(ctx, base);
	// bl 0x8235c190
	ctx.lr = 0x82363C5C;
	sub_8235C190(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mulli r30,r28,148
	ctx.r30.s64 = ctx.r28.s64 * 148;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x82363c78
	if (!ctx.cr6.eq) goto loc_82363C78;
	// bl 0x823a86f8
	ctx.lr = 0x82363C74;
	sub_823A86F8(ctx, base);
	// b 0x82363c7c
	goto loc_82363C7C;
loc_82363C78:
	// bl 0x8237d130
	ctx.lr = 0x82363C7C;
	sub_8237D130(ctx, base);
loc_82363C7C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823585a0
	ctx.lr = 0x82363CC4;
	sub_823585A0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363d4c
	if (ctx.cr6.eq) goto loc_82363D4C;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82363CDC:
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82363cfc
	if (ctx.cr6.eq) goto loc_82363CFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82363cdc
	if (ctx.cr6.lt) goto loc_82363CDC;
	// b 0x82363d4c
	goto loc_82363D4C;
loc_82363CFC:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82363d4c
	if (!ctx.cr6.lt) goto loc_82363D4C;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82363d4c
	if (ctx.cr6.eq) goto loc_82363D4C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82363d40
	if (!ctx.cr6.lt) goto loc_82363D40;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x82363D40;
	sub_82358520(ctx, base);
loc_82363D40:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82363D4C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82363d80
	if (ctx.cr6.eq) goto loc_82363D80;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82363D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363D80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82363D8C"))) PPC_WEAK_FUNC(sub_82363D8C);
PPC_FUNC_IMPL(__imp__sub_82363D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363D90"))) PPC_WEAK_FUNC(sub_82363D90);
PPC_FUNC_IMPL(__imp__sub_82363D90) {
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
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82363e20
	if (ctx.cr6.eq) goto loc_82363E20;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82363e20
	if (!ctx.cr6.eq) goto loc_82363E20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dd00
	ctx.lr = 0x82363DD8;
	sub_8237DD00(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237e410
	ctx.lr = 0x82363DF0;
	sub_8237E410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363e18
	if (ctx.cr6.eq) goto loc_82363E18;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362d10
	ctx.lr = 0x82363E18;
	sub_82362D10(ctx, base);
loc_82363E18:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dd60
	ctx.lr = 0x82363E20;
	sub_8237DD60(ctx, base);
loc_82363E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
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

__attribute__((alias("__imp__sub_82363E3C"))) PPC_WEAK_FUNC(sub_82363E3C);
PPC_FUNC_IMPL(__imp__sub_82363E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363E40"))) PPC_WEAK_FUNC(sub_82363E40);
PPC_FUNC_IMPL(__imp__sub_82363E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82363E48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82363138
	ctx.lr = 0x82363E5C;
	sub_82363138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363e70
	if (ctx.cr6.eq) goto loc_82363E70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82363E70:
	// bl 0x8235b1f8
	ctx.lr = 0x82363E74;
	sub_8235B1F8(ctx, base);
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x8235b3a8
	ctx.lr = 0x82363E84;
	sub_8235B3A8(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82363E98"))) PPC_WEAK_FUNC(sub_82363E98);
PPC_FUNC_IMPL(__imp__sub_82363E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82363EA0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82363138
	ctx.lr = 0x82363EB8;
	sub_82363138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82363ecc
	if (ctx.cr6.eq) goto loc_82363ECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82363ECC:
	// bl 0x8235b1f8
	ctx.lr = 0x82363ED0;
	sub_8235B1F8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8235b3f8
	ctx.lr = 0x82363EE4;
	sub_8235B3F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82363EEC"))) PPC_WEAK_FUNC(sub_82363EEC);
PPC_FUNC_IMPL(__imp__sub_82363EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363EF0"))) PPC_WEAK_FUNC(sub_82363EF0);
PPC_FUNC_IMPL(__imp__sub_82363EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82363EF8;
	sub_82248778(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-2496(r1)
	ea = -2496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82363F0C;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x82363F14;
	sub_8235E108(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F20;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F34;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F48;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F5C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F70;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82363F84;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82364108
	if (!ctx.cr6.eq) goto loc_82364108;
	// lwz r25,56(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82364108
	if (ctx.cr6.eq) goto loc_82364108;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// lfs f30,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_82363FC4:
	// bl 0x82370538
	ctx.lr = 0x82363FC8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82363FCC;
	sub_82370538(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823707c8
	ctx.lr = 0x82363FD4;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823640f8
	if (ctx.cr6.eq) goto loc_823640F8;
	// bl 0x82370538
	ctx.lr = 0x82363FE0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82363FE4;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82363FE8;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823640f8
	if (ctx.cr6.eq) goto loc_823640F8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8237d218
	ctx.lr = 0x82363FFC;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x823640f8
	if (ctx.cr6.eq) goto loc_823640F8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8237d218
	ctx.lr = 0x82364028;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x823640f8
	if (ctx.cr6.lt) goto loc_823640F8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r29,r11,12
	ctx.xer.ca = ctx.r11.u32 > 4294967283;
	ctx.r29.s64 = ctx.r11.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823640f8
	if (ctx.cr0.eq) goto loc_823640F8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823640f8
	if (!ctx.cr6.eq) goto loc_823640F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82364054;
	sub_8237DD00(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e410
	ctx.lr = 0x82364068;
	sub_8237E410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236409c
	if (ctx.cr6.eq) goto loc_8236409C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362d10
	ctx.lr = 0x82364090;
	sub_82362D10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// bne cr6,0x823640a0
	if (!ctx.cr6.eq) goto loc_823640A0;
loc_8236409C:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823640A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x823640A8;
	sub_8237DD60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823640f8
	if (ctx.cr6.eq) goto loc_823640F8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r27,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r27.u32);
	// bl 0x8235c190
	ctx.lr = 0x823640DC;
	sub_8235C190(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bne cr6,0x823640f4
	if (!ctx.cr6.eq) goto loc_823640F4;
	// bl 0x823a86f8
	ctx.lr = 0x823640F0;
	sub_823A86F8(ctx, base);
	// b 0x823640f8
	goto loc_823640F8;
loc_823640F4:
	// bl 0x8237d130
	ctx.lr = 0x823640F8;
	sub_8237D130(ctx, base);
loc_823640F8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82363fc4
	if (ctx.cr6.lt) goto loc_82363FC4;
loc_82364108:
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82364118"))) PPC_WEAK_FUNC(sub_82364118);
PPC_FUNC_IMPL(__imp__sub_82364118) {
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
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823641b8
	if (ctx.cr6.eq) goto loc_823641B8;
	// lwz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82364148:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82364168
	if (ctx.cr6.eq) goto loc_82364168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82364148
	if (ctx.cr6.lt) goto loc_82364148;
	// b 0x823641b8
	goto loc_823641B8;
loc_82364168:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r31,r30,76
	ctx.r31.s64 = ctx.r30.s64 + 76;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823641b8
	if (!ctx.cr6.lt) goto loc_823641B8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823641b8
	if (ctx.cr6.eq) goto loc_823641B8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823641ac
	if (!ctx.cr6.lt) goto loc_823641AC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x823641AC;
	sub_82358520(ctx, base);
loc_823641AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823641B8:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x823641d0
	if (ctx.cr6.gt) goto loc_823641D0;
	// bl 0x8235bf58
	ctx.lr = 0x823641C8;
	sub_8235BF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r11.u32);
loc_823641D0:
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

__attribute__((alias("__imp__sub_823641EC"))) PPC_WEAK_FUNC(sub_823641EC);
PPC_FUNC_IMPL(__imp__sub_823641EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823641F0"))) PPC_WEAK_FUNC(sub_823641F0);
PPC_FUNC_IMPL(__imp__sub_823641F0) {
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
	// bl 0x82363620
	ctx.lr = 0x82364208;
	sub_82363620(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364224
	if (!ctx.cr6.eq) goto loc_82364224;
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
loc_82364224:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236423c
	if (ctx.cr6.eq) goto loc_8236423C;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
loc_8236423C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364250
	if (!ctx.cr6.eq) goto loc_82364250;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82364250:
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

__attribute__((alias("__imp__sub_82364268"))) PPC_WEAK_FUNC(sub_82364268);
PPC_FUNC_IMPL(__imp__sub_82364268) {
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
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823642b8
	if (ctx.cr6.eq) goto loc_823642B8;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// bl 0x823638d0
	ctx.lr = 0x82364294;
	sub_823638D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823642b4
	if (!ctx.cr6.eq) goto loc_823642B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823642b4
	if (!ctx.cr6.eq) goto loc_823642B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823642B4:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823642B8:
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

__attribute__((alias("__imp__sub_823642D0"))) PPC_WEAK_FUNC(sub_823642D0);
PPC_FUNC_IMPL(__imp__sub_823642D0) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364320
	if (ctx.cr6.eq) goto loc_82364320;
	// lwz r30,44(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// bl 0x823636b0
	ctx.lr = 0x823642FC;
	sub_823636B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236431c
	if (!ctx.cr6.eq) goto loc_8236431C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236431c
	if (!ctx.cr6.eq) goto loc_8236431C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8236431C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82364320:
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

__attribute__((alias("__imp__sub_82364338"))) PPC_WEAK_FUNC(sub_82364338);
PPC_FUNC_IMPL(__imp__sub_82364338) {
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
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364388
	if (ctx.cr6.eq) goto loc_82364388;
	// lwz r30,48(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// bl 0x823636b0
	ctx.lr = 0x82364364;
	sub_823636B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82364384
	if (!ctx.cr6.eq) goto loc_82364384;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82364384
	if (!ctx.cr6.eq) goto loc_82364384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82364384:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82364388:
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

__attribute__((alias("__imp__sub_823643A0"))) PPC_WEAK_FUNC(sub_823643A0);
PPC_FUNC_IMPL(__imp__sub_823643A0) {
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
	// bl 0x82363840
	ctx.lr = 0x823643B8;
	sub_82363840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823643d4
	if (!ctx.cr6.eq) goto loc_823643D4;
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
loc_823643D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823643ec
	if (ctx.cr6.eq) goto loc_823643EC;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
loc_823643EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364400
	if (!ctx.cr6.eq) goto loc_82364400;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82364400:
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

__attribute__((alias("__imp__sub_82364418"))) PPC_WEAK_FUNC(sub_82364418);
PPC_FUNC_IMPL(__imp__sub_82364418) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364468
	if (ctx.cr6.eq) goto loc_82364468;
	// lwz r30,76(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// bl 0x823638d0
	ctx.lr = 0x82364444;
	sub_823638D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82364464
	if (!ctx.cr6.eq) goto loc_82364464;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82364464
	if (!ctx.cr6.eq) goto loc_82364464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82364464:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82364468:
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

__attribute__((alias("__imp__sub_82364480"))) PPC_WEAK_FUNC(sub_82364480);
PPC_FUNC_IMPL(__imp__sub_82364480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82364488;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82364518
	if (ctx.cr6.eq) goto loc_82364518;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823644b8
	if (ctx.cr6.eq) goto loc_823644B8;
	// bl 0x82357240
	ctx.lr = 0x823644B4;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823644B8:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823644d8
	if (!ctx.cr6.eq) goto loc_823644D8;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823644D8:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364518
	if (ctx.cr6.eq) goto loc_82364518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363938
	ctx.lr = 0x823644F0;
	sub_82363938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364500
	if (!ctx.cr6.eq) goto loc_82364500;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82364500:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82358508
	ctx.lr = 0x82364514;
	sub_82358508(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82364518:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82364524"))) PPC_WEAK_FUNC(sub_82364524);
PPC_FUNC_IMPL(__imp__sub_82364524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364528"))) PPC_WEAK_FUNC(sub_82364528);
PPC_FUNC_IMPL(__imp__sub_82364528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82364530;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,31088
	ctx.r7.s64 = ctx.r11.s64 + 31088;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,10184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r11,r10,31328
	ctx.r11.s64 = ctx.r10.s64 + 31328;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r10,r9,31044
	ctx.r10.s64 = ctx.r9.s64 + 31044;
	// addi r9,r6,31480
	ctx.r9.s64 = ctx.r6.s64 + 31480;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r6,r3,31380
	ctx.r6.s64 = ctx.r3.s64 + 31380;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r8,r5,31464
	ctx.r8.s64 = ctx.r5.s64 + 31464;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r7,r4,31416
	ctx.r7.s64 = ctx.r4.s64 + 31416;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823645CC;
	sub_823A86F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
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
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x8235cf68
	ctx.lr = 0x8236464C;
	sub_8235CF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235de08
	ctx.lr = 0x82364658;
	sub_8235DE08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235dd58
	ctx.lr = 0x82364664;
	sub_8235DD58(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x82364668;
	sub_8235B1F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235b208
	ctx.lr = 0x82364670;
	sub_8235B208(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x82364674;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r30.u32);
	// stw r30,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r30.u32);
	// stw r30,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r30.u32);
	// bl 0x8235c218
	ctx.lr = 0x82364688;
	sub_8235C218(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c2b8
	ctx.lr = 0x82364690;
	sub_8235C2B8(ctx, base);
	// li r4,480
	ctx.r4.s64 = 480;
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bl 0x823585a0
	ctx.lr = 0x8236469C;
	sub_823585A0(ctx, base);
	// addi r29,r29,832
	ctx.r29.s64 = ctx.r29.s64 + 832;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823646b8
	if (ctx.cr6.eq) goto loc_823646B8;
	// bl 0x82357240
	ctx.lr = 0x823646B4;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_823646B8:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823646CC"))) PPC_WEAK_FUNC(sub_823646CC);
PPC_FUNC_IMPL(__imp__sub_823646CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823646D0"))) PPC_WEAK_FUNC(sub_823646D0);
PPC_FUNC_IMPL(__imp__sub_823646D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x823658f8
	sub_823658F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823646D8"))) PPC_WEAK_FUNC(sub_823646D8);
PPC_FUNC_IMPL(__imp__sub_823646D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823658f8
	sub_823658F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823646E0"))) PPC_WEAK_FUNC(sub_823646E0);
PPC_FUNC_IMPL(__imp__sub_823646E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x823658f8
	sub_823658F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823646E8"))) PPC_WEAK_FUNC(sub_823646E8);
PPC_FUNC_IMPL(__imp__sub_823646E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823646F0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,31480
	ctx.r7.s64 = ctx.r11.s64 + 31480;
	// addi r6,r10,31464
	ctx.r6.s64 = ctx.r10.s64 + 31464;
	// addi r5,r9,31416
	ctx.r5.s64 = ctx.r9.s64 + 31416;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,31380
	ctx.r4.s64 = ctx.r8.s64 + 31380;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// addi r26,r3,12
	ctx.r26.s64 = ctx.r3.s64 + 12;
	// bl 0x8235cf68
	ctx.lr = 0x82364734;
	sub_8235CF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235e050
	ctx.lr = 0x82364740;
	sub_8235E050(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235dee0
	ctx.lr = 0x8236474C;
	sub_8235DEE0(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x82364750;
	sub_8235B1F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235b240
	ctx.lr = 0x82364758;
	sub_8235B240(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82363770
	ctx.lr = 0x82364760;
	sub_82363770(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82363770
	ctx.lr = 0x82364768;
	sub_82363770(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82363550
	ctx.lr = 0x82364770;
	sub_82363550(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364790
	if (ctx.cr6.eq) goto loc_82364790;
	// bl 0x82357240
	ctx.lr = 0x8236478C;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82364790:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// beq cr6,0x823647b4
	if (ctx.cr6.eq) goto loc_823647B4;
	// bl 0x82357240
	ctx.lr = 0x823647B0;
	sub_82357240(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_823647B4:
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// bl 0x823ab568
	ctx.lr = 0x823647C4;
	sub_823AB568(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r11,31044
	ctx.r7.s64 = ctx.r11.s64 + 31044;
	// addi r6,r10,31328
	ctx.r6.s64 = ctx.r10.s64 + 31328;
	// addi r5,r9,31088
	ctx.r5.s64 = ctx.r9.s64 + 31088;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-1704
	ctx.r4.s64 = ctx.r8.s64 + -1704;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823647FC"))) PPC_WEAK_FUNC(sub_823647FC);
PPC_FUNC_IMPL(__imp__sub_823647FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364800"))) PPC_WEAK_FUNC(sub_82364800);
PPC_FUNC_IMPL(__imp__sub_82364800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82364808;
	sub_82248774(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364af4
	if (ctx.cr6.eq) goto loc_82364AF4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364af4
	if (ctx.cr6.eq) goto loc_82364AF4;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// lwz r3,-5464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364af8
	if (!ctx.cr6.eq) goto loc_82364AF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82364844;
	sub_823570E0(ctx, base);
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x823570f0
	ctx.lr = 0x8236484C;
	sub_823570F0(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236486c
	if (ctx.cr6.eq) goto loc_8236486C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82364528
	ctx.lr = 0x82364864;
	sub_82364528(ctx, base);
	// stw r3,-5464(r27)
	PPC_STORE_U32(ctx.r27.u32 + -5464, ctx.r3.u32);
	// b 0x82364874
	goto loc_82364874;
loc_8236486C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,-5464(r27)
	PPC_STORE_U32(ctx.r27.u32 + -5464, ctx.r24.u32);
loc_82364874:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236487C;
	sub_823570E0(ctx, base);
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364af8
	if (ctx.cr6.eq) goto loc_82364AF8;
	// bl 0x82370ad8
	ctx.lr = 0x82364890;
	sub_82370AD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x823648b0
	if (!ctx.cr6.eq) goto loc_823648B0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_823648B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823706d0
	ctx.lr = 0x823648B8;
	sub_823706D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82370920
	ctx.lr = 0x823648E0;
	sub_82370920(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x823648E8;
	sub_823570E0(ctx, base);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823570f0
	ctx.lr = 0x823648F4;
	sub_823570F0(ctx, base);
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// stw r3,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823570f0
	ctx.lr = 0x82364904;
	sub_823570F0(ctx, base);
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82364914;
	sub_823570E0(ctx, base);
	// lwz r10,-5464(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364964
	if (ctx.cr6.eq) goto loc_82364964;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// b 0x82364948
	goto loc_82364948;
loc_82364944:
	// lwz r10,-5464(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
loc_82364948:
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwz r10,-5464(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stwx r24,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82364944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364944;
loc_82364964:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236496C;
	sub_823570E0(ctx, base);
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// li r26,-5
	ctx.r26.s64 = -5;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236499c
	if (ctx.cr6.gt) goto loc_8236499C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x823649a0
	if (!ctx.cr6.gt) goto loc_823649A0;
loc_8236499C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_823649A0:
	// bl 0x823570f0
	ctx.lr = 0x823649A4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823649dc
	if (ctx.cr6.eq) goto loc_823649DC;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addic. r31,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r31.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x823649d4
	if (ctx.cr0.lt) goto loc_823649D4;
loc_823649C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237dc10
	ctx.lr = 0x823649C8;
	sub_8237DC10(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bge 0x823649c0
	if (!ctx.cr0.lt) goto loc_823649C0;
loc_823649D4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x823649e0
	goto loc_823649E0;
loc_823649DC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_823649E0:
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// bl 0x823570e0
	ctx.lr = 0x823649F0;
	sub_823570E0(ctx, base);
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364a44
	if (ctx.cr6.eq) goto loc_82364A44;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x82364a18
	goto loc_82364A18;
loc_82364A14:
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
loc_82364A18:
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8237e018
	ctx.lr = 0x82364A2C;
	sub_8237E018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82364a14
	if (ctx.cr6.lt) goto loc_82364A14;
loc_82364A44:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82364A4C;
	sub_823570E0(ctx, base);
	// lis r11,442
	ctx.r11.s64 = 28966912;
	// ori r10,r11,53137
	ctx.r10.u64 = ctx.r11.u64 | 53137;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82364a6c
	if (ctx.cr6.gt) goto loc_82364A6C;
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82364a70
	if (!ctx.cr6.gt) goto loc_82364A70;
loc_82364A6C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82364A70:
	// bl 0x823570f0
	ctx.lr = 0x82364A74;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364aac
	if (ctx.cr6.eq) goto loc_82364AAC;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addic. r31,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r31.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82364aa4
	if (ctx.cr0.lt) goto loc_82364AA4;
loc_82364A90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82364A98;
	sub_823A86F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// bge 0x82364a90
	if (!ctx.cr0.lt) goto loc_82364A90;
loc_82364AA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82364ab0
	goto loc_82364AB0;
loc_82364AAC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82364AB0:
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// bl 0x823570e0
	ctx.lr = 0x82364AC0;
	sub_823570E0(ctx, base);
	// lwz r11,-5464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364af0
	if (ctx.cr6.eq) goto loc_82364AF0;
	// bl 0x8235bf58
	ctx.lr = 0x82364AD4;
	sub_8235BF58(ctx, base);
	// bl 0x8235c048
	ctx.lr = 0x82364AD8;
	sub_8235C048(ctx, base);
	// lwz r3,-5464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// bl 0x82362390
	ctx.lr = 0x82364AE0;
	sub_82362390(ctx, base);
	// lwz r3,-5464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5464);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364AF0:
	// bl 0x82362508
	ctx.lr = 0x82364AF4;
	sub_82362508(ctx, base);
loc_82364AF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82364B04"))) PPC_WEAK_FUNC(sub_82364B04);
PPC_FUNC_IMPL(__imp__sub_82364B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364B08"))) PPC_WEAK_FUNC(sub_82364B08);
PPC_FUNC_IMPL(__imp__sub_82364B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82364B10;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364b48
	if (ctx.cr6.eq) goto loc_82364B48;
loc_82364B2C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82364b98
	if (ctx.cr6.eq) goto loc_82364B98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364b2c
	if (!ctx.cr6.eq) goto loc_82364B2C;
loc_82364B48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dc10
	ctx.lr = 0x82364B50;
	sub_8237DC10(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e018
	ctx.lr = 0x82364B60;
	sub_8237E018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364b7c
	if (!ctx.cr6.eq) goto loc_82364B7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82364B6C:
	// bl 0x8237dfa0
	ctx.lr = 0x82364B70;
	sub_8237DFA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82364B7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x823641f0
	ctx.lr = 0x82364B88;
	sub_823641F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82364b6c
	if (ctx.cr6.eq) goto loc_82364B6C;
	// bl 0x8237dfa0
	ctx.lr = 0x82364B98;
	sub_8237DFA0(ctx, base);
loc_82364B98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82364BA4"))) PPC_WEAK_FUNC(sub_82364BA4);
PPC_FUNC_IMPL(__imp__sub_82364BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364BA8"))) PPC_WEAK_FUNC(sub_82364BA8);
PPC_FUNC_IMPL(__imp__sub_82364BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82364BB0;
	sub_82248774(ctx, base);
	// stwu r1,-2784(r1)
	ea = -2784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364bf0
	if (ctx.cr6.eq) goto loc_82364BF0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364BF0:
	// bl 0x8235b1f8
	ctx.lr = 0x82364BF4;
	sub_8235B1F8(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82364BF8;
	sub_82370538(ctx, base);
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// addi r27,r26,56
	ctx.r27.s64 = ctx.r26.s64 + 56;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82364c2c
	if (ctx.cr6.eq) goto loc_82364C2C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82364C14:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8237dc48
	ctx.lr = 0x82364C20;
	sub_8237DC48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// bne 0x82364c14
	if (!ctx.cr0.eq) goto loc_82364C14;
loc_82364C2C:
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82363550
	ctx.lr = 0x82364C34;
	sub_82363550(ctx, base);
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// bl 0x82363770
	ctx.lr = 0x82364C3C;
	sub_82363770(ctx, base);
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x82363770
	ctx.lr = 0x82364C44;
	sub_82363770(ctx, base);
	// lwz r28,56(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364cb0
	if (ctx.cr6.eq) goto loc_82364CB0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82364C54:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82364C60;
	sub_823A86F8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r4,120
	ctx.r4.s64 = 120;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823585a0
	ctx.lr = 0x82364CA4;
	sub_823585A0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bne 0x82364c54
	if (!ctx.cr0.eq) goto loc_82364C54;
loc_82364CB0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579a0
	ctx.lr = 0x82364CB8;
	sub_823579A0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823622c8
	ctx.lr = 0x82364CC0;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823803f8
	ctx.lr = 0x82364CCC;
	sub_823803F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82356eb8
	ctx.lr = 0x82364CD4;
	sub_82356EB8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823622c8
	ctx.lr = 0x82364CDC;
	sub_823622C8(ctx, base);
	// bl 0x82356608
	ctx.lr = 0x82364CE0;
	sub_82356608(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82356eb8
	ctx.lr = 0x82364CE8;
	sub_82356EB8(ctx, base);
	// bl 0x82362250
	ctx.lr = 0x82364CEC;
	sub_82362250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82357c28
	ctx.lr = 0x82364CFC;
	sub_82357C28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355af0
	ctx.lr = 0x82364D04;
	sub_82355AF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364d2c
	if (!ctx.cr6.eq) goto loc_82364D2C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ab0
	ctx.lr = 0x82364D14;
	sub_82355AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ad0
	ctx.lr = 0x82364D20;
	sub_82355AD0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bgt cr6,0x82364d30
	if (ctx.cr6.gt) goto loc_82364D30;
loc_82364D2C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82364D30:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82356610
	ctx.lr = 0x82364D38;
	sub_82356610(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82364D44;
	sub_82370C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82357a98
	ctx.lr = 0x82364D50;
	sub_82357A98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364d80
	if (!ctx.cr6.eq) goto loc_82364D80;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// bl 0x82372340
	ctx.lr = 0x82364D6C;
	sub_82372340(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579f8
	ctx.lr = 0x82364D74;
	sub_823579F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364D80:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237efc8
	ctx.lr = 0x82364D8C;
	sub_8237EFC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237f168
	ctx.lr = 0x82364DA0;
	sub_8237F168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364dd8
	if (!ctx.cr6.eq) goto loc_82364DD8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// bl 0x8237eff8
	ctx.lr = 0x82364DBC;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82364DC4;
	sub_82372340(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579f8
	ctx.lr = 0x82364DCC;
	sub_823579F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364DD8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370c48
	ctx.lr = 0x82364DE4;
	sub_82370C48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823a43c8
	ctx.lr = 0x82364DEC;
	sub_823A43C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371010
	ctx.lr = 0x82364DF8;
	sub_82371010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82364e14
	if (ctx.cr6.eq) goto loc_82364E14;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237f250
	ctx.lr = 0x82364E0C;
	sub_8237F250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364e4c
	if (!ctx.cr6.eq) goto loc_82364E4C;
loc_82364E14:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// bl 0x82372340
	ctx.lr = 0x82364E28;
	sub_82372340(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237eff8
	ctx.lr = 0x82364E30;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82364E38;
	sub_82372340(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579f8
	ctx.lr = 0x82364E40;
	sub_823579F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364E4C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8237ece8
	ctx.lr = 0x82364E54;
	sub_8237ECE8(ctx, base);
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82370360
	ctx.lr = 0x82364E60;
	sub_82370360(ctx, base);
	// lwz r11,224(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// bl 0x82355a80
	ctx.lr = 0x82364E70;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x82364E80;
	sub_82370360(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// bl 0x8237ec18
	ctx.lr = 0x82364E98;
	sub_8237EC18(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8237ec80
	ctx.lr = 0x82364EA8;
	sub_8237EC80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355a90
	ctx.lr = 0x82364EB0;
	sub_82355A90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355a88
	ctx.lr = 0x82364EBC;
	sub_82355A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8237ef18
	ctx.lr = 0x82364ECC;
	sub_8237EF18(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370548
	ctx.lr = 0x82364ED8;
	sub_82370548(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364f14
	if (!ctx.cr6.eq) goto loc_82364F14;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8237eda0
	ctx.lr = 0x82364EE8;
	sub_8237EDA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372340
	ctx.lr = 0x82364EF0;
	sub_82372340(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237eff8
	ctx.lr = 0x82364EF8;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82364F00;
	sub_82372340(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579f8
	ctx.lr = 0x82364F08;
	sub_823579F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82364F14:
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x8237d130
	ctx.lr = 0x82364F1C;
	sub_8237D130(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x8237eda0
	ctx.lr = 0x82364F2C;
	sub_8237EDA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372340
	ctx.lr = 0x82364F34;
	sub_82372340(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237eff8
	ctx.lr = 0x82364F3C;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82364F44;
	sub_82372340(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823579f8
	ctx.lr = 0x82364F4C;
	sub_823579F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2784
	ctx.r1.s64 = ctx.r1.s64 + 2784;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82364F58"))) PPC_WEAK_FUNC(sub_82364F58);
PPC_FUNC_IMPL(__imp__sub_82364F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82364F60;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82365084
	if (ctx.cr6.eq) goto loc_82365084;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82365084
	if (ctx.cr6.eq) goto loc_82365084;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82365084
	if (ctx.cr6.eq) goto loc_82365084;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82365084
	if (ctx.cr6.eq) goto loc_82365084;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365084
	if (ctx.cr6.eq) goto loc_82365084;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364fc0
	if (ctx.cr6.eq) goto loc_82364FC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82364FB0:
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82364fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364FB0;
loc_82364FC0:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// beq cr6,0x82364ff4
	if (ctx.cr6.eq) goto loc_82364FF4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82364FDC:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8237dc48
	ctx.lr = 0x82364FE8;
	sub_8237DC48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// bne 0x82364fdc
	if (!ctx.cr0.eq) goto loc_82364FDC;
loc_82364FF4:
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82363550
	ctx.lr = 0x82364FFC;
	sub_82363550(ctx, base);
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// bl 0x82363770
	ctx.lr = 0x82365004;
	sub_82363770(ctx, base);
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x82363770
	ctx.lr = 0x8236500C;
	sub_82363770(ctx, base);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// lwz r28,56(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82365020:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8236502C;
	sub_823A86F8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r4,120
	ctx.r4.s64 = 120;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823585a0
	ctx.lr = 0x82365070;
	sub_823585A0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bne 0x82365020
	if (!ctx.cr0.eq) goto loc_82365020;
loc_8236507C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82365084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236508C"))) PPC_WEAK_FUNC(sub_8236508C);
PPC_FUNC_IMPL(__imp__sub_8236508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365090"))) PPC_WEAK_FUNC(sub_82365090);
PPC_FUNC_IMPL(__imp__sub_82365090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82365098;
	sub_82248788(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823650A8;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x823650B0;
	sub_8235C0D8(ctx, base);
	// bl 0x82355af0
	ctx.lr = 0x823650B4;
	sub_82355AF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237c190
	ctx.lr = 0x823650C0;
	sub_8237C190(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355fd8
	ctx.lr = 0x823650CC;
	sub_82355FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823650f8
	if (!ctx.cr6.eq) goto loc_823650F8;
loc_823650D4:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82364f58
	ctx.lr = 0x823650E4;
	sub_82364F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237c1d0
	ctx.lr = 0x823650EC;
	sub_8237C1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823650F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ac8
	ctx.lr = 0x82365104;
	sub_82355AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ad8
	ctx.lr = 0x82365110;
	sub_82355AD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ae8
	ctx.lr = 0x8236511C;
	sub_82355AE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c068
	ctx.lr = 0x82365128;
	sub_8235C068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823650d4
	if (ctx.cr6.eq) goto loc_823650D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355b50
	ctx.lr = 0x82365138;
	sub_82355B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c050
	ctx.lr = 0x82365144;
	sub_8235C050(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355b30
	ctx.lr = 0x8236514C;
	sub_82355B30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82365170
	if (ctx.cr6.eq) goto loc_82365170;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r10.u32);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82355b28
	ctx.lr = 0x82365170;
	sub_82355B28(ctx, base);
loc_82365170:
	// bl 0x82370538
	ctx.lr = 0x82365174;
	sub_82370538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x8236517C;
	sub_82370868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355b38
	ctx.lr = 0x82365184;
	sub_82355B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370790
	ctx.lr = 0x82365190;
	sub_82370790(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237c1d0
	ctx.lr = 0x82365198;
	sub_8237C1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823651A4"))) PPC_WEAK_FUNC(sub_823651A4);
PPC_FUNC_IMPL(__imp__sub_823651A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823651A8"))) PPC_WEAK_FUNC(sub_823651A8);
PPC_FUNC_IMPL(__imp__sub_823651A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823651B0;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x823651BC;
	sub_82370538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823651C4;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82370ab0
	ctx.lr = 0x823651D0;
	sub_82370AB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,56(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r29,840(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82365264
	if (ctx.cr6.eq) goto loc_82365264;
loc_823651E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82365258
	if (ctx.cr6.eq) goto loc_82365258;
	// lwz r9,836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823651F8:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r10,132
	ctx.r6.s64 = ctx.r10.s64 + 132;
	// lwz r4,136(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r5,132(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8236524c
	if (ctx.cr6.eq) goto loc_8236524C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823651f8
	if (ctx.cr6.lt) goto loc_823651F8;
	// b 0x82365258
	goto loc_82365258;
loc_8236524C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82370a68
	ctx.lr = 0x82365258;
	sub_82370A68(ctx, base);
loc_82365258:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823651e4
	if (ctx.cr6.lt) goto loc_823651E4;
loc_82365264:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82370740
	ctx.lr = 0x8236526C;
	sub_82370740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236527c
	if (!ctx.cr6.eq) goto loc_8236527C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236527C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82365298"))) PPC_WEAK_FUNC(sub_82365298);
PPC_FUNC_IMPL(__imp__sub_82365298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823652A0;
	sub_8224878C(ctx, base);
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x823652AC;
	sub_82370538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x823652B4;
	sub_82370868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823652d4
	if (!ctx.cr6.eq) goto loc_823652D4;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82364f58
	ctx.lr = 0x823652CC;
	sub_82364F58(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823652D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ea18
	ctx.lr = 0x823652DC;
	sub_8237EA18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,2392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2392, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370670
	ctx.lr = 0x823652F8;
	sub_82370670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82365308
	if (ctx.cr6.eq) goto loc_82365308;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
loc_82365308:
	// bl 0x8237e850
	ctx.lr = 0x8236530C;
	sub_8237E850(ctx, base);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82365314"))) PPC_WEAK_FUNC(sub_82365314);
PPC_FUNC_IMPL(__imp__sub_82365314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365318"))) PPC_WEAK_FUNC(sub_82365318);
PPC_FUNC_IMPL(__imp__sub_82365318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82365320;
	sub_82248780(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x8236532C;
	sub_82370538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x82365334;
	sub_82370868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365354
	if (!ctx.cr6.eq) goto loc_82365354;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82364f58
	ctx.lr = 0x8236534C;
	sub_82364F58(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82365354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ea18
	ctx.lr = 0x8236535C;
	sub_8237EA18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2392, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823705a8
	ctx.lr = 0x82365378;
	sub_823705A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82365438
	if (ctx.cr6.eq) goto loc_82365438;
	// bl 0x8235bf58
	ctx.lr = 0x82365384;
	sub_8235BF58(ctx, base);
	// lwz r27,56(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82365430
	if (ctx.cr6.eq) goto loc_82365430;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823653A0:
	// bl 0x82370538
	ctx.lr = 0x823653A4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823653A8;
	sub_82370538(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823707c8
	ctx.lr = 0x823653B0;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82365420
	if (ctx.cr6.eq) goto loc_82365420;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c190
	ctx.lr = 0x823653C0;
	sub_8235C190(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x823653d8
	if (!ctx.cr6.eq) goto loc_823653D8;
	// bl 0x823a86f8
	ctx.lr = 0x823653D4;
	sub_823A86F8(ctx, base);
	// b 0x823653dc
	goto loc_823653DC;
loc_823653D8:
	// bl 0x8237d130
	ctx.lr = 0x823653DC;
	sub_8237D130(ctx, base);
loc_823653DC:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r4,120
	ctx.r4.s64 = 120;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823585a0
	ctx.lr = 0x82365420;
	sub_823585A0(ctx, base);
loc_82365420:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823653a0
	if (ctx.cr6.lt) goto loc_823653A0;
loc_82365430:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82365438:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x82365440;
	sub_8237E850(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82365448"))) PPC_WEAK_FUNC(sub_82365448);
PPC_FUNC_IMPL(__imp__sub_82365448) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x8237d218
	ctx.lr = 0x82365464;
	sub_8237D218(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82365480
	if (!ctx.cr6.lt) goto loc_82365480;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82364f58
	ctx.lr = 0x82365480;
	sub_82364F58(ctx, base);
loc_82365480:
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

__attribute__((alias("__imp__sub_82365494"))) PPC_WEAK_FUNC(sub_82365494);
PPC_FUNC_IMPL(__imp__sub_82365494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365498"))) PPC_WEAK_FUNC(sub_82365498);
PPC_FUNC_IMPL(__imp__sub_82365498) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823654c4
	if (ctx.cr6.eq) goto loc_823654C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823654c4
	if (ctx.cr6.eq) goto loc_823654C4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x82364f58
	ctx.lr = 0x823654C4;
	sub_82364F58(ctx, base);
loc_823654C4:
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

__attribute__((alias("__imp__sub_823654D8"))) PPC_WEAK_FUNC(sub_823654D8);
PPC_FUNC_IMPL(__imp__sub_823654D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823654E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8236555c
	if (ctx.cr6.eq) goto loc_8236555C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8236555c
	if (ctx.cr6.eq) goto loc_8236555C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8236555c
	if (ctx.cr6.eq) goto loc_8236555C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8236555c
	if (ctx.cr6.eq) goto loc_8236555C;
	// bl 0x8235bf58
	ctx.lr = 0x8236551C;
	sub_8235BF58(ctx, base);
	// lwz r5,1920(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82365544
	if (!ctx.cr6.lt) goto loc_82365544;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82364f58
	ctx.lr = 0x82365538;
	sub_82364F58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82365544:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236555c
	if (ctx.cr6.eq) goto loc_8236555C;
	// addi r4,r3,896
	ctx.r4.s64 = ctx.r3.s64 + 896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x8236555C;
	sub_82358508(ctx, base);
loc_8236555C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82365568"))) PPC_WEAK_FUNC(sub_82365568);
PPC_FUNC_IMPL(__imp__sub_82365568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82365570;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823655e0
	if (ctx.cr6.eq) goto loc_823655E0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823655e0
	if (ctx.cr6.eq) goto loc_823655E0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823655e0
	if (ctx.cr6.eq) goto loc_823655E0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823655e0
	if (ctx.cr6.eq) goto loc_823655E0;
	// bl 0x8235bf58
	ctx.lr = 0x823655A8;
	sub_8235BF58(ctx, base);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8235bf58
	ctx.lr = 0x823655B0;
	sub_8235BF58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8235c4c0
	ctx.lr = 0x823655BC;
	sub_8235C4C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823655e0
	if (!ctx.cr6.eq) goto loc_823655E0;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82364f58
	ctx.lr = 0x823655D4;
	sub_82364F58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823655E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823655EC"))) PPC_WEAK_FUNC(sub_823655EC);
PPC_FUNC_IMPL(__imp__sub_823655EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823655F0"))) PPC_WEAK_FUNC(sub_823655F0);
PPC_FUNC_IMPL(__imp__sub_823655F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823655F8;
	sub_8224878C(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82365634
	if (ctx.cr6.eq) goto loc_82365634;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82365620
	if (!ctx.cr6.eq) goto loc_82365620;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_82365620:
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x82364f58
	ctx.lr = 0x82365628;
	sub_82364F58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82365634:
	// bl 0x82370538
	ctx.lr = 0x82365638;
	sub_82370538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,30604
	ctx.r30.s64 = ctx.r11.s64 + 30604;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82370088
	ctx.lr = 0x82365650;
	sub_82370088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370898
	ctx.lr = 0x82365658;
	sub_82370898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82370bd0
	ctx.lr = 0x82365668;
	sub_82370BD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365684
	if (!ctx.cr6.eq) goto loc_82365684;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82364f58
	ctx.lr = 0x82365680;
	sub_82364F58(ctx, base);
	// b 0x8236570c
	goto loc_8236570C;
loc_82365684:
	// bl 0x8235bf58
	ctx.lr = 0x82365688;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x82365690;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82356318
	ctx.lr = 0x8236569C;
	sub_82356318(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823561e0
	ctx.lr = 0x823656A8;
	sub_823561E0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c068
	ctx.lr = 0x823656B4;
	sub_8235C068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823656d0
	if (!ctx.cr6.eq) goto loc_823656D0;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82364f58
	ctx.lr = 0x823656CC;
	sub_82364F58(ctx, base);
	// b 0x82365704
	goto loc_82365704;
loc_823656D0:
	// bl 0x82370538
	ctx.lr = 0x823656D4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823656D8;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x823656DC;
	sub_82370898(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x823656E4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823656E8;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x823656EC;
	sub_823708C0(ctx, base);
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_82365704:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82355de8
	ctx.lr = 0x8236570C;
	sub_82355DE8(ctx, base);
loc_8236570C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823700d8
	ctx.lr = 0x82365718;
	sub_823700D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82365724"))) PPC_WEAK_FUNC(sub_82365724);
PPC_FUNC_IMPL(__imp__sub_82365724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365728"))) PPC_WEAK_FUNC(sub_82365728);
PPC_FUNC_IMPL(__imp__sub_82365728) {
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
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bge cr6,0x823657fc
	if (!ctx.cr6.lt) goto loc_823657FC;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823657fc
	if (ctx.cr6.gt) goto loc_823657FC;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22368
	ctx.r12.s64 = ctx.r12.s64 + 22368;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,22412(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22412);
	// lwz r17,22420(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22420);
	// lwz r17,22432(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22432);
	// lwz r17,22444(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22444);
	// lwz r17,22456(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22456);
	// lwz r17,22516(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22516);
	// lwz r17,22468(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22468);
	// lwz r17,22480(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22480);
	// lwz r17,22492(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22492);
	// lwz r17,22504(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22504);
	// lwz r17,22516(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22516);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// b 0x823657f8
	goto loc_823657F8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x823657fc
	goto loc_823657FC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
loc_823657F8:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823657FC:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82364f58
	ctx.lr = 0x82365804;
	sub_82364F58(ctx, base);
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

__attribute__((alias("__imp__sub_82365818"))) PPC_WEAK_FUNC(sub_82365818);
PPC_FUNC_IMPL(__imp__sub_82365818) {
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
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,140
	ctx.r31.s64 = ctx.r3.s64 + 140;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236586c
	if (ctx.cr6.eq) goto loc_8236586C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,76(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// bl 0x823638d0
	ctx.lr = 0x82365848;
	sub_823638D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82365868
	if (!ctx.cr6.eq) goto loc_82365868;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82365868
	if (!ctx.cr6.eq) goto loc_82365868;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82365868:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8236586C:
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

__attribute__((alias("__imp__sub_82365884"))) PPC_WEAK_FUNC(sub_82365884);
PPC_FUNC_IMPL(__imp__sub_82365884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365888"))) PPC_WEAK_FUNC(sub_82365888);
PPC_FUNC_IMPL(__imp__sub_82365888) {
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
	// lwz r4,160(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r31,r3,156
	ctx.r31.s64 = ctx.r3.s64 + 156;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823658dc
	if (ctx.cr6.eq) goto loc_823658DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,76(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// bl 0x823638d0
	ctx.lr = 0x823658B8;
	sub_823638D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823658d8
	if (!ctx.cr6.eq) goto loc_823658D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823658d8
	if (!ctx.cr6.eq) goto loc_823658D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823658D8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823658DC:
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

__attribute__((alias("__imp__sub_823658F4"))) PPC_WEAK_FUNC(sub_823658F4);
PPC_FUNC_IMPL(__imp__sub_823658F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823658F8"))) PPC_WEAK_FUNC(sub_823658F8);
PPC_FUNC_IMPL(__imp__sub_823658F8) {
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
	// bl 0x823646e8
	ctx.lr = 0x82365918;
	sub_823646E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365930
	if (ctx.cr6.eq) goto loc_82365930;
	// bl 0x82357128
	ctx.lr = 0x8236592C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82365930:
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

__attribute__((alias("__imp__sub_82365948"))) PPC_WEAK_FUNC(sub_82365948);
PPC_FUNC_IMPL(__imp__sub_82365948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82365954:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82365978
	if (ctx.cr6.eq) goto loc_82365978;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365954
	if (!ctx.cr6.eq) goto loc_82365954;
	// blr 
	return;
loc_82365978:
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8236598c
	if (!ctx.cr6.eq) goto loc_8236598C;
	// b 0x823642d0
	sub_823642D0(ctx, base);
	return;
loc_8236598C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8236599c
	if (!ctx.cr6.eq) goto loc_8236599C;
	// b 0x82364338
	sub_82364338(ctx, base);
	return;
loc_8236599C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x823636b0
	sub_823636B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823659A4"))) PPC_WEAK_FUNC(sub_823659A4);
PPC_FUNC_IMPL(__imp__sub_823659A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823659A8"))) PPC_WEAK_FUNC(sub_823659A8);
PPC_FUNC_IMPL(__imp__sub_823659A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823659B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,144(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82365a50
	if (ctx.cr6.eq) goto loc_82365A50;
loc_823659C8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,76(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823659f4
	if (ctx.cr6.eq) goto loc_823659F4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82365a48
	if (!ctx.cr6.eq) goto loc_82365A48;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// b 0x82365a10
	goto loc_82365A10;
loc_823659F4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82365a48
	if (!ctx.cr6.eq) goto loc_82365A48;
	// bl 0x82370538
	ctx.lr = 0x82365A04;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82365A08;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82365A0C;
	sub_82370898(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
loc_82365A10:
	// bne cr6,0x82365a48
	if (!ctx.cr6.eq) goto loc_82365A48;
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365a2c
	if (!ctx.cr6.eq) goto loc_82365A2C;
	// bl 0x82364418
	ctx.lr = 0x82365A28;
	sub_82364418(ctx, base);
	// b 0x82365a48
	goto loc_82365A48;
loc_82365A2C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365a40
	if (!ctx.cr6.eq) goto loc_82365A40;
	// bl 0x82364268
	ctx.lr = 0x82365A3C;
	sub_82364268(ctx, base);
	// b 0x82365a48
	goto loc_82365A48;
loc_82365A40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823638d0
	ctx.lr = 0x82365A48;
	sub_823638D0(ctx, base);
loc_82365A48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823659c8
	if (!ctx.cr6.eq) goto loc_823659C8;
loc_82365A50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82365A58"))) PPC_WEAK_FUNC(sub_82365A58);
PPC_FUNC_IMPL(__imp__sub_82365A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82365A60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82365b00
	if (ctx.cr6.eq) goto loc_82365B00;
loc_82365A78:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,76(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82365aa4
	if (ctx.cr6.eq) goto loc_82365AA4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82365af8
	if (!ctx.cr6.eq) goto loc_82365AF8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// b 0x82365ac0
	goto loc_82365AC0;
loc_82365AA4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82365af8
	if (!ctx.cr6.eq) goto loc_82365AF8;
	// bl 0x82370538
	ctx.lr = 0x82365AB4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82365AB8;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82365ABC;
	sub_82370898(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
loc_82365AC0:
	// bne cr6,0x82365af8
	if (!ctx.cr6.eq) goto loc_82365AF8;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365adc
	if (!ctx.cr6.eq) goto loc_82365ADC;
	// bl 0x82364418
	ctx.lr = 0x82365AD8;
	sub_82364418(ctx, base);
	// b 0x82365af8
	goto loc_82365AF8;
loc_82365ADC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365af0
	if (!ctx.cr6.eq) goto loc_82365AF0;
	// bl 0x82364268
	ctx.lr = 0x82365AEC;
	sub_82364268(ctx, base);
	// b 0x82365af8
	goto loc_82365AF8;
loc_82365AF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823638d0
	ctx.lr = 0x82365AF8;
	sub_823638D0(ctx, base);
loc_82365AF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82365a78
	if (!ctx.cr6.eq) goto loc_82365A78;
loc_82365B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82365B08"))) PPC_WEAK_FUNC(sub_82365B08);
PPC_FUNC_IMPL(__imp__sub_82365B08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x82364f58
	sub_82364F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365B18"))) PPC_WEAK_FUNC(sub_82365B18);
PPC_FUNC_IMPL(__imp__sub_82365B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82365B20;
	sub_82248778(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82365b54
	if (ctx.cr6.eq) goto loc_82365B54;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82365b90
	if (ctx.cr6.eq) goto loc_82365B90;
loc_82365B54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e528
	ctx.lr = 0x82365B5C;
	sub_8237E528(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237deb0
	ctx.lr = 0x82365B80;
	sub_8237DEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365b9c
	if (!ctx.cr6.eq) goto loc_82365B9C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x82365B90;
	sub_8237E5A8(ctx, base);
loc_82365B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82365B9C:
	// cmplwi cr6,r24,6
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 6, ctx.xer);
	// beq cr6,0x82365bcc
	if (ctx.cr6.eq) goto loc_82365BCC;
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 8, ctx.xer);
	// beq cr6,0x82365bc4
	if (ctx.cr6.eq) goto loc_82365BC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8237e5a8
	ctx.lr = 0x82365BB8;
	sub_8237E5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82365BC4:
	// addi r3,r25,156
	ctx.r3.s64 = ctx.r25.s64 + 156;
	// b 0x82365bd0
	goto loc_82365BD0;
loc_82365BCC:
	// addi r3,r25,140
	ctx.r3.s64 = ctx.r25.s64 + 140;
loc_82365BD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823643a0
	ctx.lr = 0x82365BD8;
	sub_823643A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x82365BE4;
	sub_8237E5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82365BF0"))) PPC_WEAK_FUNC(sub_82365BF0);
PPC_FUNC_IMPL(__imp__sub_82365BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82365BF8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82365c2c
	if (ctx.cr6.eq) goto loc_82365C2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82365C14:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8237dc48
	ctx.lr = 0x82365C20;
	sub_8237DC48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82365c14
	if (!ctx.cr0.eq) goto loc_82365C14;
loc_82365C2C:
	// addi r3,r29,124
	ctx.r3.s64 = ctx.r29.s64 + 124;
	// bl 0x82363550
	ctx.lr = 0x82365C34;
	sub_82363550(ctx, base);
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x82363770
	ctx.lr = 0x82365C3C;
	sub_82363770(ctx, base);
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// bl 0x82363770
	ctx.lr = 0x82365C44;
	sub_82363770(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82365c8c
	if (!ctx.cr6.eq) goto loc_82365C8C;
	// bl 0x8235cf68
	ctx.lr = 0x82365C54;
	sub_8235CF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x82365C5C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82365C60;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82365C64;
	sub_823708C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82365C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82365C8C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364f58
	ctx.lr = 0x82365C98;
	sub_82364F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82365CA0"))) PPC_WEAK_FUNC(sub_82365CA0);
PPC_FUNC_IMPL(__imp__sub_82365CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82365CA8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82370c48
	ctx.lr = 0x82365CC4;
	sub_82370C48(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82365cdc
	if (ctx.cr6.eq) goto loc_82365CDC;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_82365CDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x82365CE4;
	sub_82372388(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365d10
	if (ctx.cr6.eq) goto loc_82365D10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371ca0
	ctx.lr = 0x82365D04;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82365d14
	if (!ctx.cr6.eq) goto loc_82365D14;
loc_82365D10:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82365D14:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x82365d34
	if (ctx.cr6.eq) goto loc_82365D34;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371ca0
	ctx.lr = 0x82365D2C;
	sub_82371CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365d58
	if (!ctx.cr6.eq) goto loc_82365D58;
loc_82365D34:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x82365D44;
	sub_82365BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x82365D4C;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82365D58:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,116(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82365d7c
	if (!ctx.cr6.lt) goto loc_82365D7C;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
loc_82365D7C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x82365D84;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82365D90"))) PPC_WEAK_FUNC(sub_82365D90);
PPC_FUNC_IMPL(__imp__sub_82365D90) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82224948
	ctx.lr = 0x82365DB4;
	sub_82224948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365de4
	if (!ctx.cr6.eq) goto loc_82365DE4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82365DCC;
	sub_82365BF0(ctx, base);
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
loc_82365DE4:
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

__attribute__((alias("__imp__sub_82365DFC"))) PPC_WEAK_FUNC(sub_82365DFC);
PPC_FUNC_IMPL(__imp__sub_82365DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365E00"))) PPC_WEAK_FUNC(sub_82365E00);
PPC_FUNC_IMPL(__imp__sub_82365E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82365E08;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82370c48
	ctx.lr = 0x82365E24;
	sub_82370C48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372388
	ctx.lr = 0x82365E34;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82365e60
	if (!ctx.cr6.eq) goto loc_82365E60;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82364f58
	ctx.lr = 0x82365E4C;
	sub_82364F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82365E54;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82365E60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82365090
	ctx.lr = 0x82365E68;
	sub_82365090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365e94
	if (!ctx.cr6.eq) goto loc_82365E94;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82364f58
	ctx.lr = 0x82365E80;
	sub_82364F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82365E88;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82365E94:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82365ec4
	if (ctx.cr6.eq) goto loc_82365EC4;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82364f58
	ctx.lr = 0x82365EB0;
	sub_82364F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82365EB8;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82365EC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82372340
	ctx.lr = 0x82365ED4;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82365EE0"))) PPC_WEAK_FUNC(sub_82365EE0);
PPC_FUNC_IMPL(__imp__sub_82365EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82365EE8;
	sub_82248788(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82365EF8;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x82365F08;
	sub_82370C48(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82365f20
	if (ctx.cr6.eq) goto loc_82365F20;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_82365F20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372388
	ctx.lr = 0x82365F28;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82365f54
	if (!ctx.cr6.eq) goto loc_82365F54;
loc_82365F30:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x82365F40;
	sub_82365BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x82365F48;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82365F54:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371ca0
	ctx.lr = 0x82365F64;
	sub_82371CA0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365f90
	if (ctx.cr6.eq) goto loc_82365F90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371808
	ctx.lr = 0x82365F84;
	sub_82371808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82365f94
	if (!ctx.cr6.eq) goto loc_82365F94;
loc_82365F90:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82365F94:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823585a0
	ctx.lr = 0x82365FA0;
	sub_823585A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365fd4
	if (ctx.cr6.eq) goto loc_82365FD4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82365f30
	if (ctx.cr6.eq) goto loc_82365F30;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372270
	ctx.lr = 0x82365FCC;
	sub_82372270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82365fd8
	goto loc_82365FD8;
loc_82365FD4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82365FD8:
	// beq cr6,0x82365f30
	if (ctx.cr6.eq) goto loc_82365F30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8235c130
	ctx.lr = 0x82365FE8;
	sub_8235C130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366000
	if (ctx.cr6.eq) goto loc_82366000;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x82366008
	goto loc_82366008;
loc_82366000:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82366008:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c538
	ctx.lr = 0x82366010;
	sub_8235C538(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// bl 0x82372340
	ctx.lr = 0x82366020;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236602C"))) PPC_WEAK_FUNC(sub_8236602C);
PPC_FUNC_IMPL(__imp__sub_8236602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366030"))) PPC_WEAK_FUNC(sub_82366030);
PPC_FUNC_IMPL(__imp__sub_82366030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82366038;
	sub_82248784(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236604C;
	sub_8235CF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82366058;
	sub_8237DD00(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236606c
	if (ctx.cr6.eq) goto loc_8236606C;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8236606C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e4b0
	ctx.lr = 0x82366074;
	sub_8237E4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823660a0
	if (ctx.cr6.eq) goto loc_823660A0;
	// lhz r5,2310(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82366090
	if (ctx.cr6.eq) goto loc_82366090;
	// addi r4,r31,1158
	ctx.r4.s64 = ctx.r31.s64 + 1158;
loc_82366090:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237de48
	ctx.lr = 0x82366098;
	sub_8237DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823660c4
	if (!ctx.cr6.eq) goto loc_823660C4;
loc_823660A0:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x823660B0;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x823660B8;
	sub_8237DD60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823660C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8237e490
	ctx.lr = 0x823660D0;
	sub_8237E490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ddc0
	ctx.lr = 0x823660DC;
	sub_8237DDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcd8
	ctx.lr = 0x823660E8;
	sub_8237DCD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366118
	if (ctx.cr6.eq) goto loc_82366118;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dea8
	ctx.lr = 0x823660F8;
	sub_8237DEA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366118
	if (ctx.cr6.eq) goto loc_82366118;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcd8
	ctx.lr = 0x82366108;
	sub_8237DCD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dea8
	ctx.lr = 0x82366114;
	sub_8237DEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82366118:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236613C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x82366144;
	sub_8237DD60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82366150"))) PPC_WEAK_FUNC(sub_82366150);
PPC_FUNC_IMPL(__imp__sub_82366150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82366158;
	sub_82248784(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236616C;
	sub_8235CF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd00
	ctx.lr = 0x82366178;
	sub_8237DD00(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236618c
	if (ctx.cr6.eq) goto loc_8236618C;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8236618C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e4b0
	ctx.lr = 0x82366194;
	sub_8237E4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823661c0
	if (ctx.cr6.eq) goto loc_823661C0;
	// lhz r5,2310(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823661b0
	if (ctx.cr6.eq) goto loc_823661B0;
	// addi r4,r31,1158
	ctx.r4.s64 = ctx.r31.s64 + 1158;
loc_823661B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237de48
	ctx.lr = 0x823661B8;
	sub_8237DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823661e4
	if (!ctx.cr6.eq) goto loc_823661E4;
loc_823661C0:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x823661D0;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x823661D8;
	sub_8237DD60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823661E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8237e490
	ctx.lr = 0x823661F0;
	sub_8237E490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ddc0
	ctx.lr = 0x823661FC;
	sub_8237DDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcd8
	ctx.lr = 0x82366208;
	sub_8237DCD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366238
	if (ctx.cr6.eq) goto loc_82366238;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dea8
	ctx.lr = 0x82366218;
	sub_8237DEA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366238
	if (ctx.cr6.eq) goto loc_82366238;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcd8
	ctx.lr = 0x82366228;
	sub_8237DCD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dea8
	ctx.lr = 0x82366234;
	sub_8237DEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82366238:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dd60
	ctx.lr = 0x82366264;
	sub_8237DD60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82366270"))) PPC_WEAK_FUNC(sub_82366270);
PPC_FUNC_IMPL(__imp__sub_82366270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82366278;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r25,8(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lhz r24,12(r5)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r28,14(r5)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8237e330
	ctx.lr = 0x823662A0;
	sub_8237E330(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ddc0
	ctx.lr = 0x823662AC;
	sub_8237DDC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823662d8
	if (!ctx.cr6.eq) goto loc_823662D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823662d8
	if (!ctx.cr6.eq) goto loc_823662D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237dcd8
	ctx.lr = 0x823662C8;
	sub_8237DCD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237dea8
	ctx.lr = 0x823662D4;
	sub_8237DEA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_823662D8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236632c
	if (!ctx.cr6.eq) goto loc_8236632C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236632c
	if (!ctx.cr6.eq) goto loc_8236632C;
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366310
	if (ctx.cr6.eq) goto loc_82366310;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82366310:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// clrlwi r5,r28,16
	ctx.r5.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237e158
	ctx.lr = 0x82366324;
	sub_8237E158(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366398
	if (ctx.cr6.eq) goto loc_82366398;
loc_8236632C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82366398
	if (!ctx.cr6.eq) goto loc_82366398;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82366398
	if (!ctx.cr6.eq) goto loc_82366398;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82366398
	if (!ctx.cr6.eq) goto loc_82366398;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r31,r24,16
	ctx.r31.u64 = ctx.r24.u32 & 0xFFFF;
	// bl 0x8237e258
	ctx.lr = 0x82366360;
	sub_8237E258(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82366398
	if (!ctx.cr6.eq) goto loc_82366398;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237e278
	ctx.lr = 0x82366370;
	sub_8237E278(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82366398
	if (!ctx.cr6.eq) goto loc_82366398;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237e198
	ctx.lr = 0x82366390;
	sub_8237E198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823663a8
	if (!ctx.cr6.eq) goto loc_823663A8;
loc_82366398:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x823663A8;
	sub_82365BF0(ctx, base);
loc_823663A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823663B0"))) PPC_WEAK_FUNC(sub_823663B0);
PPC_FUNC_IMPL(__imp__sub_823663B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823663B8;
	sub_82248780(ctx, base);
	// stwu r1,-2496(r1)
	ea = -2496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823663D0;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82366490
	if (!ctx.cr6.eq) goto loc_82366490;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82366490
	if (!ctx.cr6.eq) goto loc_82366490;
	// bl 0x82370538
	ctx.lr = 0x823663EC;
	sub_82370538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82370868
	ctx.lr = 0x823663F4;
	sub_82370868(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82366400;
	sub_82370C48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82366414
	if (ctx.cr6.eq) goto loc_82366414;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82366418
	if (!ctx.cr6.eq) goto loc_82366418;
loc_82366414:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82366418:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x82366424;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366444
	if (ctx.cr6.eq) goto loc_82366444;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371010
	ctx.lr = 0x82366438;
	sub_82371010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82366448
	if (!ctx.cr6.eq) goto loc_82366448;
loc_82366444:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366448:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82366470
	if (ctx.cr6.eq) goto loc_82366470;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366478
	if (ctx.cr6.eq) goto loc_82366478;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823716b8
	ctx.lr = 0x82366468;
	sub_823716B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82366474
	goto loc_82366474;
loc_82366470:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82366474:
	// bne cr6,0x8236649c
	if (!ctx.cr6.eq) goto loc_8236649C;
loc_82366478:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82366488;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82366490;
	sub_82372340(ctx, base);
loc_82366490:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236649C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237ea18
	ctx.lr = 0x823664A4;
	sub_8237EA18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r11,2424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2424, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,2428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2428, ctx.r10.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8237e958
	ctx.lr = 0x823664C4;
	sub_8237E958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823664e8
	if (!ctx.cr6.eq) goto loc_823664E8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_823664D0:
	// bl 0x8237e850
	ctx.lr = 0x823664D4;
	sub_8237E850(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823664DC;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823664E8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823705a8
	ctx.lr = 0x823664F4;
	sub_823705A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x823664d0
	if (ctx.cr6.eq) goto loc_823664D0;
	// bl 0x8237e850
	ctx.lr = 0x82366504;
	sub_8237E850(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8236650C;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82366518"))) PPC_WEAK_FUNC(sub_82366518);
PPC_FUNC_IMPL(__imp__sub_82366518) {
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
	// bl 0x8235b1f8
	ctx.lr = 0x82366534;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235ba40
	ctx.lr = 0x8236653C;
	sub_8235BA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366598
	if (!ctx.cr6.eq) goto loc_82366598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8236654C;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82366590
	if (!ctx.cr6.eq) goto loc_82366590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba68
	ctx.lr = 0x82366560;
	sub_8235BA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366590
	if (ctx.cr6.eq) goto loc_82366590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x82366570;
	sub_8235B9C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8b8
	ctx.lr = 0x82366578;
	sub_8235B8B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366590
	if (!ctx.cr6.eq) goto loc_82366590;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82366590;
	sub_82365BF0(ctx, base);
loc_82366590:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82366598:
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

__attribute__((alias("__imp__sub_823665B0"))) PPC_WEAK_FUNC(sub_823665B0);
PPC_FUNC_IMPL(__imp__sub_823665B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823665B8;
	sub_8224877C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4800(r1)
	ea = -4800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82370538
	ctx.lr = 0x823665D0;
	sub_82370538(ctx, base);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d218
	ctx.lr = 0x823665E0;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82366600
	if (!ctx.cr6.gt) goto loc_82366600;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82366894
	if (!ctx.cr6.gt) goto loc_82366894;
loc_82366600:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8237dc68
	ctx.lr = 0x8236660C;
	sub_8237DC68(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// subf. r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// sth r7,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r7.u16);
	// sth r6,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r6.u16);
	// bne 0x82366640
	if (!ctx.cr0.eq) goto loc_82366640;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82366650
	goto loc_82366650;
loc_82366640:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// li r29,1024
	ctx.r29.s64 = 1024;
	// bgt cr6,0x82366650
	if (ctx.cr6.gt) goto loc_82366650;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82366650:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x823666ac
	if (ctx.cr6.eq) goto loc_823666AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236667c
	if (ctx.cr6.eq) goto loc_8236667C;
	// bl 0x8237e2b0
	ctx.lr = 0x82366678;
	sub_8237E2B0(ctx, base);
	// b 0x82366680
	goto loc_82366680;
loc_8236667C:
	// bl 0x8237ddc8
	ctx.lr = 0x82366680;
	sub_8237DDC8(ctx, base);
loc_82366680:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666ac
	if (!ctx.cr6.eq) goto loc_823666AC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82365bf0
	ctx.lr = 0x8236669C;
	sub_82365BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dcc8
	ctx.lr = 0x823666A4;
	sub_8237DCC8(ctx, base);
	// addi r1,r1,4800
	ctx.r1.s64 = ctx.r1.s64 + 4800;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823666AC:
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x8237ea18
	ctx.lr = 0x823666B4;
	sub_8237EA18(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r28,4728(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4728, ctx.r28.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,4732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4732, ctx.r10.u32);
	// beq cr6,0x823666f8
	if (ctx.cr6.eq) goto loc_823666F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237e3b8
	ctx.lr = 0x823666D0;
	sub_8237E3B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357358
	ctx.lr = 0x823666DC;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8237e958
	ctx.lr = 0x823666EC;
	sub_8237E958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823666fc
	if (!ctx.cr6.eq) goto loc_823666FC;
loc_823666F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823666FC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8236674c
	if (!ctx.cr6.eq) goto loc_8236674C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236674c
	if (ctx.cr6.eq) goto loc_8236674C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366748
	if (ctx.cr6.eq) goto loc_82366748;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dea8
	ctx.lr = 0x82366720;
	sub_8237DEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dcf8
	ctx.lr = 0x8236672C;
	sub_8237DCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8237e9b8
	ctx.lr = 0x8236673C;
	sub_8237E9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8236674c
	if (!ctx.cr6.eq) goto loc_8236674C;
loc_82366748:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236674C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x823667d8
	if (ctx.cr6.gt) goto loc_823667D8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82366784
	// bdzf 4*cr6+eq,0x8236679c
	// bne cr6,0x823667b8
	if (!ctx.cr6.eq) goto loc_823667B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823667d8
	if (ctx.cr6.eq) goto loc_823667D8;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823705a8
	ctx.lr = 0x82366780;
	sub_823705A8(ctx, base);
	// b 0x823667d0
	goto loc_823667D0;
loc_82366784:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823667d8
	if (ctx.cr6.eq) goto loc_823667D8;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370670
	ctx.lr = 0x82366798;
	sub_82370670(ctx, base);
	// b 0x823667d0
	goto loc_823667D0;
loc_8236679C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823667d8
	if (ctx.cr6.eq) goto loc_823667D8;
	// addi r5,r1,2416
	ctx.r5.s64 = ctx.r1.s64 + 2416;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823705e0
	ctx.lr = 0x823667B4;
	sub_823705E0(ctx, base);
	// b 0x823667d0
	goto loc_823667D0;
loc_823667B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823667d8
	if (ctx.cr6.eq) goto loc_823667D8;
	// addi r5,r1,2416
	ctx.r5.s64 = ctx.r1.s64 + 2416;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370628
	ctx.lr = 0x823667D0;
	sub_82370628(ctx, base);
loc_823667D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236685c
	if (!ctx.cr6.eq) goto loc_8236685C;
loc_823667D8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,30
	ctx.r30.s64 = 30;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82366830
	if (ctx.cr6.eq) goto loc_82366830;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370958
	ctx.lr = 0x823667F8;
	sub_82370958(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,19336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82366830
	if (!ctx.cr6.gt) goto loc_82366830;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370958
	ctx.lr = 0x82366824;
	sub_82370958(ctx, base);
	// mulli r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 * 30;
	// li r10,8000
	ctx.r10.s64 = 8000;
	// divwu r30,r11,r10
	ctx.r30.u32 = ctx.r11.u32 / ctx.r10.u32;
loc_82366830:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82366848
	if (!ctx.cr6.gt) goto loc_82366848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d130
	ctx.lr = 0x82366844;
	sub_8237D130(ctx, base);
	// b 0x82366884
	goto loc_82366884;
loc_82366848:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82365bf0
	ctx.lr = 0x82366858;
	sub_82365BF0(ctx, base);
	// b 0x82366884
	goto loc_82366884;
loc_8236685C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82366884;
	sub_823A86F8(ctx, base);
loc_82366884:
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x8237e850
	ctx.lr = 0x8236688C;
	sub_8237E850(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237dcc8
	ctx.lr = 0x82366894;
	sub_8237DCC8(ctx, base);
loc_82366894:
	// addi r1,r1,4800
	ctx.r1.s64 = ctx.r1.s64 + 4800;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8236689C"))) PPC_WEAK_FUNC(sub_8236689C);
PPC_FUNC_IMPL(__imp__sub_8236689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823668A0"))) PPC_WEAK_FUNC(sub_823668A0);
PPC_FUNC_IMPL(__imp__sub_823668A0) {
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823668e8
	if (ctx.cr6.gt) goto loc_823668E8;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x823668D4;
	sub_82365BF0(ctx, base);
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
loc_823668E8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82366944
	if (ctx.cr6.eq) goto loc_82366944;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8236692c
	if (ctx.cr6.eq) goto loc_8236692C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82366914
	if (ctx.cr6.eq) goto loc_82366914;
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
loc_82366914:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bl 0x82362ea8
	ctx.lr = 0x8236691C;
	sub_82362EA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236692C:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bl 0x82363d90
	ctx.lr = 0x82366934;
	sub_82363D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82366944:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bl 0x82365e00
	ctx.lr = 0x8236694C;
	sub_82365E00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236695C"))) PPC_WEAK_FUNC(sub_8236695C);
PPC_FUNC_IMPL(__imp__sub_8236695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366960"))) PPC_WEAK_FUNC(sub_82366960);
PPC_FUNC_IMPL(__imp__sub_82366960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82366968;
	sub_8224877C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82366b78
	if (ctx.cr6.eq) goto loc_82366B78;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82366b78
	if (ctx.cr6.eq) goto loc_82366B78;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82366b78
	if (ctx.cr6.eq) goto loc_82366B78;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82366b78
	if (ctx.cr6.eq) goto loc_82366B78;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237efc8
	ctx.lr = 0x823669BC;
	sub_8237EFC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370c48
	ctx.lr = 0x823669C8;
	sub_82370C48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82372388
	ctx.lr = 0x823669D8;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366a08
	if (ctx.cr6.eq) goto loc_82366A08;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371808
	ctx.lr = 0x823669EC;
	sub_82371808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366a08
	if (ctx.cr6.eq) goto loc_82366A08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237f2d8
	ctx.lr = 0x82366A00;
	sub_8237F2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366a38
	if (!ctx.cr6.eq) goto loc_82366A38;
loc_82366A08:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// bl 0x82372340
	ctx.lr = 0x82366A24;
	sub_82372340(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237eff8
	ctx.lr = 0x82366A2C;
	sub_8237EFF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82366A38:
	// bl 0x8235bf58
	ctx.lr = 0x82366A3C;
	sub_8235BF58(ctx, base);
	// lwz r11,1928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366b54
	if (!ctx.cr6.eq) goto loc_82366B54;
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366b54
	if (!ctx.cr6.eq) goto loc_82366B54;
	// bl 0x8235c0d8
	ctx.lr = 0x82366A5C;
	sub_8235C0D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366a98
	if (ctx.cr6.eq) goto loc_82366A98;
	// bl 0x82355ac0
	ctx.lr = 0x82366A70;
	sub_82355AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366ab0
	if (ctx.cr6.eq) goto loc_82366AB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x82366A80;
	sub_82355AC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x82366A8C;
	sub_82355AE0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82366ab0
	if (ctx.cr6.gt) goto loc_82366AB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82366A98:
	// bl 0x82355ab0
	ctx.lr = 0x82366A9C;
	sub_82355AB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x82366AA8;
	sub_82355AD0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82366b54
	if (!ctx.cr6.gt) goto loc_82366B54;
loc_82366AB0:
	// bl 0x8235e108
	ctx.lr = 0x82366AB4;
	sub_8235E108(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x8235e2a8
	ctx.lr = 0x82366ABC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366ad0
	if (ctx.cr6.eq) goto loc_82366AD0;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// b 0x82366b5c
	goto loc_82366B5C;
loc_82366AD0:
	// bl 0x8235cf68
	ctx.lr = 0x82366AD4;
	sub_8235CF68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823ac6b8
	ctx.lr = 0x82366AE4;
	sub_823AC6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237f1e0
	ctx.lr = 0x82366AF4;
	sub_8237F1E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r3,r27,76
	ctx.r3.s64 = ctx.r27.s64 + 76;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82224948
	ctx.lr = 0x82366B2C;
	sub_82224948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366b48
	if (!ctx.cr6.eq) goto loc_82366B48;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r3,r27,-8
	ctx.r3.s64 = ctx.r27.s64 + -8;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82366B44;
	sub_82365BF0(ctx, base);
	// b 0x82366b68
	goto loc_82366B68;
loc_82366B48:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1936(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1936, ctx.r11.u32);
	// b 0x82366b68
	goto loc_82366B68;
loc_82366B54:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r9,r11,3
	ctx.r9.u64 = ctx.r11.u64 | 3;
loc_82366B5C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82366B68:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x82366B70;
	sub_82372340(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237eff8
	ctx.lr = 0x82366B78;
	sub_8237EFF8(ctx, base);
loc_82366B78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82366B84"))) PPC_WEAK_FUNC(sub_82366B84);
PPC_FUNC_IMPL(__imp__sub_82366B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366B88"))) PPC_WEAK_FUNC(sub_82366B88);
PPC_FUNC_IMPL(__imp__sub_82366B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82366B90;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mulli r30,r4,148
	ctx.r30.s64 = ctx.r4.s64 * 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8237d170
	ctx.lr = 0x82366BAC;
	sub_8237D170(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823585a0
	ctx.lr = 0x82366BF4;
	sub_823585A0(ctx, base);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823659a8
	ctx.lr = 0x82366C08;
	sub_823659A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82365a58
	ctx.lr = 0x82366C14;
	sub_82365A58(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8237dc48
	ctx.lr = 0x82366C2C;
	sub_8237DC48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365948
	ctx.lr = 0x82366C38;
	sub_82365948(ctx, base);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// bl 0x82370538
	ctx.lr = 0x82366C50;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366C54;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82366C58;
	sub_82370898(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// lis r23,8192
	ctx.r23.s64 = 536870912;
	// bne cr6,0x82366c6c
	if (!ctx.cr6.eq) goto loc_82366C6C;
	// ori r23,r23,11
	ctx.r23.u64 = ctx.r23.u64 | 11;
	// b 0x82366c70
	goto loc_82366C70;
loc_82366C6C:
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
loc_82366C70:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stwx r28,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// bl 0x8235cf68
	ctx.lr = 0x82366CA0;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82366CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82370538
	ctx.lr = 0x82366CC0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366CC4;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82366CC8;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82366d0c
	if (ctx.cr6.eq) goto loc_82366D0C;
	// bl 0x82370538
	ctx.lr = 0x82366CE0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366CE4;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82366CE8;
	sub_82370898(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82366e60
	if (!ctx.cr6.eq) goto loc_82366E60;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82364f58
	ctx.lr = 0x82366D00;
	sub_82364F58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82366D0C:
	// bl 0x8235bf58
	ctx.lr = 0x82366D10;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82366d28
	if (ctx.cr6.eq) goto loc_82366D28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82366e60
	if (!ctx.cr6.eq) goto loc_82366E60;
loc_82366D28:
	// bl 0x82370538
	ctx.lr = 0x82366D2C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366D30;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x82366D34;
	sub_82370800(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82366e60
	if (!ctx.cr6.lt) goto loc_82366E60;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
	// lwz r25,48(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82366db8
	if (ctx.cr6.eq) goto loc_82366DB8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82366D60:
	// bl 0x82370538
	ctx.lr = 0x82366D64;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366D68;
	sub_82370538(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823707c8
	ctx.lr = 0x82366D70;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366da8
	if (ctx.cr6.eq) goto loc_82366DA8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// bl 0x8235c190
	ctx.lr = 0x82366D8C;
	sub_8235C190(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bne cr6,0x82366da4
	if (!ctx.cr6.eq) goto loc_82366DA4;
	// bl 0x823a86f8
	ctx.lr = 0x82366DA0;
	sub_823A86F8(ctx, base);
	// b 0x82366da8
	goto loc_82366DA8;
loc_82366DA4:
	// bl 0x8237d130
	ctx.lr = 0x82366DA8;
	sub_8237D130(ctx, base);
loc_82366DA8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82366d60
	if (ctx.cr6.lt) goto loc_82366D60;
loc_82366DB8:
	// bl 0x82370538
	ctx.lr = 0x82366DBC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366DC0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82366DC4;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c750
	ctx.lr = 0x82366DD0;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366dfc
	if (ctx.cr6.eq) goto loc_82366DFC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,3000(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3000);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82366DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_82366DFC:
	// bl 0x82370538
	ctx.lr = 0x82366E00;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366E04;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82366E08;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x82366E14;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366e3c
	if (!ctx.cr6.eq) goto loc_82366E3C;
	// bl 0x82370538
	ctx.lr = 0x82366E20;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366E24;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82366E28;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c750
	ctx.lr = 0x82366E34;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
loc_82366E3C:
	// bl 0x82370538
	ctx.lr = 0x82366E40;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366E44;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82366E48;
	sub_823708C0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82366e58
	if (!ctx.cr6.eq) goto loc_82366E58;
	// cmplwi cr6,r23,12
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 12, ctx.xer);
	// beq cr6,0x82366e60
	if (ctx.cr6.eq) goto loc_82366E60;
loc_82366E58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82366E60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82366E6C"))) PPC_WEAK_FUNC(sub_82366E6C);
PPC_FUNC_IMPL(__imp__sub_82366E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366E70"))) PPC_WEAK_FUNC(sub_82366E70);
PPC_FUNC_IMPL(__imp__sub_82366E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82366e90
	if (!ctx.cr6.lt) goto loc_82366E90;
loc_82366E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82366E90:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82366e88
	if (!ctx.cr6.eq) goto loc_82366E88;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82366e88
	if (!ctx.cr6.lt) goto loc_82366E88;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82365b18
	sub_82365B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366EBC"))) PPC_WEAK_FUNC(sub_82366EBC);
PPC_FUNC_IMPL(__imp__sub_82366EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366EC0"))) PPC_WEAK_FUNC(sub_82366EC0);
PPC_FUNC_IMPL(__imp__sub_82366EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82366EC8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82370538
	ctx.lr = 0x82366EE8;
	sub_82370538(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82366f00
	if (!ctx.cr6.lt) goto loc_82366F00;
loc_82366EF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82366F00:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82366ef4
	if (!ctx.cr6.eq) goto loc_82366EF4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82366ef4
	if (!ctx.cr6.lt) goto loc_82366EF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823707c8
	ctx.lr = 0x82366F20;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366ef4
	if (ctx.cr6.eq) goto loc_82366EF4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b18
	ctx.lr = 0x82366F4C;
	sub_82365B18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82366F54"))) PPC_WEAK_FUNC(sub_82366F54);
PPC_FUNC_IMPL(__imp__sub_82366F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366F58"))) PPC_WEAK_FUNC(sub_82366F58);
PPC_FUNC_IMPL(__imp__sub_82366F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82366F60;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82370538
	ctx.lr = 0x82366F7C;
	sub_82370538(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82366f98
	if (!ctx.cr6.lt) goto loc_82366F98;
loc_82366F8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82366F98:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82366f8c
	if (!ctx.cr6.eq) goto loc_82366F8C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82366f8c
	if (!ctx.cr6.lt) goto loc_82366F8C;
	// bl 0x82370538
	ctx.lr = 0x82366FB4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82366FB8;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82366FBC;
	sub_82370898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823707c8
	ctx.lr = 0x82366FC8;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366f8c
	if (ctx.cr6.eq) goto loc_82366F8C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365b18
	ctx.lr = 0x82366FF4;
	sub_82365B18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82366FFC"))) PPC_WEAK_FUNC(sub_82366FFC);
PPC_FUNC_IMPL(__imp__sub_82366FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367000"))) PPC_WEAK_FUNC(sub_82367000);
PPC_FUNC_IMPL(__imp__sub_82367000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82367008;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236703c
	if (ctx.cr6.eq) goto loc_8236703C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8236703c
	if (!ctx.cr6.eq) goto loc_8236703C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236703C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e528
	ctx.lr = 0x82367044;
	sub_8237E528(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237deb0
	ctx.lr = 0x82367068;
	sub_8237DEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367084
	if (!ctx.cr6.eq) goto loc_82367084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x82367078;
	sub_8237E5A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82367084:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,156
	ctx.r3.s64 = ctx.r26.s64 + 156;
	// bl 0x823643a0
	ctx.lr = 0x82367090;
	sub_823643A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x8236709C;
	sub_8237E5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823670A8"))) PPC_WEAK_FUNC(sub_823670A8);
PPC_FUNC_IMPL(__imp__sub_823670A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823670B0;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82370538
	ctx.lr = 0x823670D0;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x823670D8;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367130
	if (ctx.cr6.eq) goto loc_82367130;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823670f0
	if (ctx.cr6.eq) goto loc_823670F0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82367130
	if (ctx.cr6.eq) goto loc_82367130;
loc_823670F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e528
	ctx.lr = 0x823670F8;
	sub_8237E528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237deb0
	ctx.lr = 0x82367120;
	sub_8237DEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236713c
	if (!ctx.cr6.eq) goto loc_8236713C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x82367130;
	sub_8237E5A8(ctx, base);
loc_82367130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236713C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,156
	ctx.r3.s64 = ctx.r26.s64 + 156;
	// bl 0x823643a0
	ctx.lr = 0x82367148;
	sub_823643A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e5a8
	ctx.lr = 0x82367154;
	sub_8237E5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82367160"))) PPC_WEAK_FUNC(sub_82367160);
PPC_FUNC_IMPL(__imp__sub_82367160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82367168;
	sub_82248784(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236717C;
	sub_8235CF68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dc68
	ctx.lr = 0x82367188;
	sub_8237DC68(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236719c
	if (ctx.cr6.eq) goto loc_8236719C;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8236719C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e350
	ctx.lr = 0x823671A4;
	sub_8237E350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823671d0
	if (ctx.cr6.eq) goto loc_823671D0;
	// lhz r5,2310(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823671c0
	if (ctx.cr6.eq) goto loc_823671C0;
	// addi r4,r31,1158
	ctx.r4.s64 = ctx.r31.s64 + 1158;
loc_823671C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237de48
	ctx.lr = 0x823671C8;
	sub_8237DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823671f4
	if (!ctx.cr6.eq) goto loc_823671F4;
loc_823671D0:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x823671E0;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcc8
	ctx.lr = 0x823671E8;
	sub_8237DCC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823671F4:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82366270
	ctx.lr = 0x8236721C;
	sub_82366270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e140
	ctx.lr = 0x82367224;
	sub_8237E140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367274
	if (ctx.cr6.eq) goto loc_82367274;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82367268
	if (!ctx.cr6.eq) goto loc_82367268;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8236724c
	if (ctx.cr6.eq) goto loc_8236724C;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_8236724C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82367268:
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8237dc48
	ctx.lr = 0x82367274;
	sub_8237DC48(ctx, base);
loc_82367274:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcc8
	ctx.lr = 0x8236727C;
	sub_8237DCC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82367288"))) PPC_WEAK_FUNC(sub_82367288);
PPC_FUNC_IMPL(__imp__sub_82367288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82367290;
	sub_82248788(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8235cf68
	ctx.lr = 0x823672A4;
	sub_8235CF68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dc68
	ctx.lr = 0x823672B0;
	sub_8237DC68(ctx, base);
	// lhz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823672c4
	if (ctx.cr6.eq) goto loc_823672C4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_823672C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e350
	ctx.lr = 0x823672CC;
	sub_8237E350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823672f8
	if (ctx.cr6.eq) goto loc_823672F8;
	// lhz r5,2310(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823672e8
	if (ctx.cr6.eq) goto loc_823672E8;
	// addi r4,r31,1158
	ctx.r4.s64 = ctx.r31.s64 + 1158;
loc_823672E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237de48
	ctx.lr = 0x823672F0;
	sub_8237DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236731c
	if (!ctx.cr6.eq) goto loc_8236731C;
loc_823672F8:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x82367308;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcc8
	ctx.lr = 0x82367310;
	sub_8237DCC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236731C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364b08
	ctx.lr = 0x8236732C;
	sub_82364B08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367358
	if (!ctx.cr6.eq) goto loc_82367358;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82367344;
	sub_82365BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcc8
	ctx.lr = 0x8236734C;
	sub_8237DCC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82367358:
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367384
	if (ctx.cr6.eq) goto loc_82367384;
loc_82367364:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823673fc
	if (ctx.cr6.eq) goto loc_823673FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367364
	if (!ctx.cr6.eq) goto loc_82367364;
loc_82367384:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82367388:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82366270
	ctx.lr = 0x8236739C;
	sub_82366270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e140
	ctx.lr = 0x823673A4;
	sub_8237E140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823673e8
	if (ctx.cr6.eq) goto loc_823673E8;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823673c0
	if (ctx.cr6.eq) goto loc_823673C0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_823673C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823673DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365948
	ctx.lr = 0x823673E8;
	sub_82365948(ctx, base);
loc_823673E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237dcc8
	ctx.lr = 0x823673F0;
	sub_8237DCC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823673FC:
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// b 0x82367388
	goto loc_82367388;
}

__attribute__((alias("__imp__sub_82367404"))) PPC_WEAK_FUNC(sub_82367404);
PPC_FUNC_IMPL(__imp__sub_82367404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367408"))) PPC_WEAK_FUNC(sub_82367408);
PPC_FUNC_IMPL(__imp__sub_82367408) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82367464
	if (!ctx.cr6.eq) goto loc_82367464;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367464
	if (ctx.cr6.eq) goto loc_82367464;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823665b0
	ctx.lr = 0x8236744C;
	sub_823665B0(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82367464
	if (!ctx.cr6.eq) goto loc_82367464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365818
	ctx.lr = 0x82367464;
	sub_82365818(ctx, base);
loc_82367464:
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

__attribute__((alias("__imp__sub_8236747C"))) PPC_WEAK_FUNC(sub_8236747C);
PPC_FUNC_IMPL(__imp__sub_8236747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367480"))) PPC_WEAK_FUNC(sub_82367480);
PPC_FUNC_IMPL(__imp__sub_82367480) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823674d0
	if (ctx.cr6.eq) goto loc_823674D0;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823665b0
	ctx.lr = 0x823674B8;
	sub_823665B0(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823674d0
	if (!ctx.cr6.eq) goto loc_823674D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365888
	ctx.lr = 0x823674D0;
	sub_82365888(ctx, base);
loc_823674D0:
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

__attribute__((alias("__imp__sub_823674E8"))) PPC_WEAK_FUNC(sub_823674E8);
PPC_FUNC_IMPL(__imp__sub_823674E8) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823675ac
	if (ctx.cr6.eq) goto loc_823675AC;
	// bl 0x82370538
	ctx.lr = 0x82367510;
	sub_82370538(ctx, base);
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x823708c0
	ctx.lr = 0x82367518;
	sub_823708C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82367530
	if (ctx.cr6.eq) goto loc_82367530;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823675ac
	if (!ctx.cr6.eq) goto loc_823675AC;
loc_82367530:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8236753C;
	sub_82370C48(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x82367540;
	sub_8235BF58(ctx, base);
	// bl 0x8235c0d8
	ctx.lr = 0x82367544;
	sub_8235C0D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82367574
	if (!ctx.cr6.eq) goto loc_82367574;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82365bf0
	ctx.lr = 0x82367570;
	sub_82365BF0(ctx, base);
	// b 0x823675a4
	goto loc_823675A4;
loc_82367574:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823670a8
	ctx.lr = 0x82367590;
	sub_823670A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823675a4
	if (ctx.cr6.eq) goto loc_823675A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82373768
	ctx.lr = 0x823675A4;
	sub_82373768(ctx, base);
loc_823675A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823675AC;
	sub_82372340(ctx, base);
loc_823675AC:
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

__attribute__((alias("__imp__sub_823675C4"))) PPC_WEAK_FUNC(sub_823675C4);
PPC_FUNC_IMPL(__imp__sub_823675C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823675C8"))) PPC_WEAK_FUNC(sub_823675C8);
PPC_FUNC_IMPL(__imp__sub_823675C8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82367614
	if (ctx.cr6.eq) goto loc_82367614;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82367614
	if (ctx.cr6.eq) goto loc_82367614;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82367614
	if (ctx.cr6.eq) goto loc_82367614;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82367614
	if (ctx.cr6.eq) goto loc_82367614;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82367628
	if (ctx.cr6.gt) goto loc_82367628;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82365bf0
	ctx.lr = 0x82367614;
	sub_82365BF0(ctx, base);
loc_82367614:
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
loc_82367628:
	// lbz r11,2312(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82367750
	if (ctx.cr6.gt) goto loc_82367750;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236767c
	// bdzf 4*cr6+eq,0x823676a0
	// bdzf 4*cr6+eq,0x823676bc
	// bdzf 4*cr6+eq,0x823676d8
	// bdzf 4*cr6+eq,0x823676f4
	// bdzf 4*cr6+eq,0x82367710
	// bdzf 4*cr6+eq,0x8236772c
	// bne cr6,0x82367748
	if (!ctx.cr6.eq) goto loc_82367748;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82365ca0
	ctx.lr = 0x82367668;
	sub_82365CA0(ctx, base);
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
loc_8236767C:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823676A0:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82365d90
	ctx.lr = 0x823676A8;
	sub_82365D90(ctx, base);
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
loc_823676BC:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82363c38
	ctx.lr = 0x823676C4;
	sub_82363C38(ctx, base);
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
loc_823676D8:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82365ee0
	ctx.lr = 0x823676E0;
	sub_82365EE0(ctx, base);
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
loc_823676F4:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82367160
	ctx.lr = 0x823676FC;
	sub_82367160(ctx, base);
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
loc_82367710:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82366030
	ctx.lr = 0x82367718;
	sub_82366030(ctx, base);
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
loc_8236772C:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82367288
	ctx.lr = 0x82367734;
	sub_82367288(ctx, base);
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
loc_82367748:
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x82366150
	ctx.lr = 0x82367750;
	sub_82366150(ctx, base);
loc_82367750:
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

__attribute__((alias("__imp__sub_82367764"))) PPC_WEAK_FUNC(sub_82367764);
PPC_FUNC_IMPL(__imp__sub_82367764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367768"))) PPC_WEAK_FUNC(sub_82367768);
PPC_FUNC_IMPL(__imp__sub_82367768) {
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
	// bl 0x82370538
	ctx.lr = 0x82367784;
	sub_82370538(ctx, base);
	// bl 0x823706a8
	ctx.lr = 0x82367788;
	sub_823706A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823677c4
	if (!ctx.cr6.eq) goto loc_823677C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367480
	ctx.lr = 0x8236779C;
	sub_82367480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367408
	ctx.lr = 0x823677A4;
	sub_82367408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363ef0
	ctx.lr = 0x823677AC;
	sub_82363EF0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366518
	ctx.lr = 0x823677C0;
	sub_82366518(ctx, base);
	// b 0x82367838
	goto loc_82367838;
loc_823677C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367480
	ctx.lr = 0x823677D4;
	sub_82367480(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x823677ec
	if (!ctx.cr6.eq) goto loc_823677EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365298
	ctx.lr = 0x823677E8;
	sub_82365298(ctx, base);
	// b 0x823677fc
	goto loc_823677FC;
loc_823677EC:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x823677fc
	if (!ctx.cr6.eq) goto loc_823677FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365318
	ctx.lr = 0x823677FC;
	sub_82365318(ctx, base);
loc_823677FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367810
	if (ctx.cr6.eq) goto loc_82367810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366518
	ctx.lr = 0x82367810;
	sub_82366518(ctx, base);
loc_82367810:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// beq cr6,0x82367838
	if (ctx.cr6.eq) goto loc_82367838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365448
	ctx.lr = 0x82367838;
	sub_82365448(ctx, base);
loc_82367838:
	// bl 0x8235b1f8
	ctx.lr = 0x8236783C;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x82367840;
	sub_8235BF58(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367860
	if (ctx.cr6.eq) goto loc_82367860;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82367860
	if (!ctx.cr6.gt) goto loc_82367860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823674e8
	ctx.lr = 0x82367860;
	sub_823674E8(ctx, base);
loc_82367860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363240
	ctx.lr = 0x82367868;
	sub_82363240(ctx, base);
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

