#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82367880"))) PPC_WEAK_FUNC(sub_82367880);
PPC_FUNC_IMPL(__imp__sub_82367880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82367888;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82367898;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x823678A0;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823678e0
	if (ctx.cr6.eq) goto loc_823678E0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823678e0
	if (ctx.cr6.eq) goto loc_823678E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x823678C0;
	sub_823579A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x823678D0;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823678ec
	if (!ctx.cr6.eq) goto loc_823678EC;
	// bl 0x823579f8
	ctx.lr = 0x823678E0;
	sub_823579F8(ctx, base);
loc_823678E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823678EC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82357bb8
	ctx.lr = 0x823678F4;
	sub_82357BB8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236790C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x82367914;
	sub_823579F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82367920"))) PPC_WEAK_FUNC(sub_82367920);
PPC_FUNC_IMPL(__imp__sub_82367920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82367928;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82367934;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8236793C;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236797c
	if (ctx.cr6.eq) goto loc_8236797C;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236797c
	if (ctx.cr6.eq) goto loc_8236797C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x8236795C;
	sub_823579A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x8236796C;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82367988
	if (!ctx.cr6.eq) goto loc_82367988;
	// bl 0x823579f8
	ctx.lr = 0x8236797C;
	sub_823579F8(ctx, base);
loc_8236797C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82367988:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82357bb8
	ctx.lr = 0x82367990;
	sub_82357BB8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823679A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x823679B0;
	sub_823579F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823679BC"))) PPC_WEAK_FUNC(sub_823679BC);
PPC_FUNC_IMPL(__imp__sub_823679BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823679C0"))) PPC_WEAK_FUNC(sub_823679C0);
PPC_FUNC_IMPL(__imp__sub_823679C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823679C8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823679D4;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x823679DC;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367a1c
	if (ctx.cr6.eq) goto loc_82367A1C;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82367a1c
	if (ctx.cr6.eq) goto loc_82367A1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x823679FC;
	sub_823579A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x82367A0C;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82367a28
	if (!ctx.cr6.eq) goto loc_82367A28;
	// bl 0x823579f8
	ctx.lr = 0x82367A1C;
	sub_823579F8(ctx, base);
loc_82367A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82367A28:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82357bb8
	ctx.lr = 0x82367A30;
	sub_82357BB8(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82367A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x82367A50;
	sub_823579F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82367A5C"))) PPC_WEAK_FUNC(sub_82367A5C);
PPC_FUNC_IMPL(__imp__sub_82367A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367A60"))) PPC_WEAK_FUNC(sub_82367A60);
PPC_FUNC_IMPL(__imp__sub_82367A60) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82367AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82367AC4"))) PPC_WEAK_FUNC(sub_82367AC4);
PPC_FUNC_IMPL(__imp__sub_82367AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367AC8"))) PPC_WEAK_FUNC(sub_82367AC8);
PPC_FUNC_IMPL(__imp__sub_82367AC8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31580
	ctx.r9.s64 = ctx.r11.s64 + 31580;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823700d8
	ctx.lr = 0x82367B08;
	sub_823700D8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823579f8
	ctx.lr = 0x82367B10;
	sub_823579F8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82367b28
	if (ctx.cr6.eq) goto loc_82367B28;
	// bl 0x82357128
	ctx.lr = 0x82367B24;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82367B28:
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

__attribute__((alias("__imp__sub_82367B40"))) PPC_WEAK_FUNC(sub_82367B40);
PPC_FUNC_IMPL(__imp__sub_82367B40) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,31596
	ctx.r9.s64 = ctx.r11.s64 + 31596;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x8235a518
	ctx.lr = 0x82367B84;
	sub_8235A518(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8237c190
	ctx.lr = 0x82367B8C;
	sub_8237C190(ctx, base);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8237efc8
	ctx.lr = 0x82367BA0;
	sub_8237EFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82367BBC"))) PPC_WEAK_FUNC(sub_82367BBC);
PPC_FUNC_IMPL(__imp__sub_82367BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367BC0"))) PPC_WEAK_FUNC(sub_82367BC0);
PPC_FUNC_IMPL(__imp__sub_82367BC0) {
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
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// addi r10,r11,31596
	ctx.r10.s64 = ctx.r11.s64 + 31596;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237eff8
	ctx.lr = 0x82367BF0;
	sub_8237EFF8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8237c1d0
	ctx.lr = 0x82367BF8;
	sub_8237C1D0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8235a538
	ctx.lr = 0x82367C00;
	sub_8235A538(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31588
	ctx.r7.s64 = ctx.r9.s64 + 31588;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82367c24
	if (ctx.cr6.eq) goto loc_82367C24;
	// bl 0x82357128
	ctx.lr = 0x82367C20;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82367C24:
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

__attribute__((alias("__imp__sub_82367C3C"))) PPC_WEAK_FUNC(sub_82367C3C);
PPC_FUNC_IMPL(__imp__sub_82367C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367C40"))) PPC_WEAK_FUNC(sub_82367C40);
PPC_FUNC_IMPL(__imp__sub_82367C40) {
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
	// bl 0x8237c700
	ctx.lr = 0x82367C58;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31604
	ctx.r10.s64 = ctx.r11.s64 + 31604;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380308
	ctx.lr = 0x82367C6C;
	sub_82380308(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x8237f408
	ctx.lr = 0x82367C74;
	sub_8237F408(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x8237ff88
	ctx.lr = 0x82367C7C;
	sub_8237FF88(ctx, base);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// bl 0x8237ff88
	ctx.lr = 0x82367C84;
	sub_8237FF88(ctx, base);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x8237fbc8
	ctx.lr = 0x82367C8C;
	sub_8237FBC8(ctx, base);
	// addi r3,r31,1256
	ctx.r3.s64 = ctx.r31.s64 + 1256;
	// bl 0x82367b40
	ctx.lr = 0x82367C94;
	sub_82367B40(ctx, base);
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x8237c5a0
	ctx.lr = 0x82367C9C;
	sub_8237C5A0(ctx, base);
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x8237f9a8
	ctx.lr = 0x82367CA4;
	sub_8237F9A8(ctx, base);
	// addi r3,r31,2796
	ctx.r3.s64 = ctx.r31.s64 + 2796;
	// bl 0x8237f788
	ctx.lr = 0x82367CAC;
	sub_8237F788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82367CD0"))) PPC_WEAK_FUNC(sub_82367CD0);
PPC_FUNC_IMPL(__imp__sub_82367CD0) {
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
	// addi r3,r3,2796
	ctx.r3.s64 = ctx.r3.s64 + 2796;
	// addi r10,r11,31604
	ctx.r10.s64 = ctx.r11.s64 + 31604;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237f808
	ctx.lr = 0x82367CFC;
	sub_8237F808(ctx, base);
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x8237f9e0
	ctx.lr = 0x82367D04;
	sub_8237F9E0(ctx, base);
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x8237c648
	ctx.lr = 0x82367D0C;
	sub_8237C648(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r30,r31,1256
	ctx.r30.s64 = ctx.r31.s64 + 1256;
	// addi r8,r9,31596
	ctx.r8.s64 = ctx.r9.s64 + 31596;
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// stw r8,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r8.u32);
	// bl 0x8237eff8
	ctx.lr = 0x82367D24;
	sub_8237EFF8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8237c1d0
	ctx.lr = 0x82367D2C;
	sub_8237C1D0(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8235a538
	ctx.lr = 0x82367D34;
	sub_8235A538(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// addi r6,r7,31588
	ctx.r6.s64 = ctx.r7.s64 + 31588;
	// stw r6,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r6.u32);
	// bl 0x8237fc38
	ctx.lr = 0x82367D48;
	sub_8237FC38(ctx, base);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// bl 0x82380030
	ctx.lr = 0x82367D50;
	sub_82380030(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82380030
	ctx.lr = 0x82367D58;
	sub_82380030(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x8237f488
	ctx.lr = 0x82367D60;
	sub_8237F488(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82380388
	ctx.lr = 0x82367D68;
	sub_82380388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x82367D70;
	sub_8237C738(ctx, base);
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

__attribute__((alias("__imp__sub_82367D88"))) PPC_WEAK_FUNC(sub_82367D88);
PPC_FUNC_IMPL(__imp__sub_82367D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82367D90;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8235e108
	ctx.lr = 0x82367DA8;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82367DB0;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82367DC4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367DD8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367DEC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E00;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E14;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E28;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E3C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E50;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E64;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367e80
	if (!ctx.cr6.eq) goto loc_82367E80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82367E78;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367e84
	if (ctx.cr6.eq) goto loc_82367E84;
loc_82367E80:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82367E84:
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x82367E94;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367ec8
	if (ctx.cr6.eq) goto loc_82367EC8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367EB0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82367eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367EB0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82367EC8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82367f20
	if (ctx.cr6.eq) goto loc_82367F20;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82367ee0
	if (ctx.cr6.eq) goto loc_82367EE0;
	// cmplwi cr6,r25,512
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 512, ctx.xer);
	// ble cr6,0x82367f28
	if (!ctx.cr6.gt) goto loc_82367F28;
loc_82367EE0:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82367EF8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367F08:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82367f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367F08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82367F20:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82367ee0
	if (!ctx.cr6.eq) goto loc_82367EE0;
loc_82367F28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82355ab0
	ctx.lr = 0x82367F30;
	sub_82355AB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82367f88
	if (!ctx.cr6.eq) goto loc_82367F88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82355ac0
	ctx.lr = 0x82367F40;
	sub_82355AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82367f88
	if (!ctx.cr6.eq) goto loc_82367F88;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82367F60;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367F70:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82367f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367F70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82367F88:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82355ab0
	ctx.lr = 0x82367F90;
	sub_82355AB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82355ac0
	ctx.lr = 0x82367F9C;
	sub_82355AC0(ctx, base);
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bff8
	ctx.lr = 0x82367FA8;
	sub_8235BFF8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82367ff0
	if (!ctx.cr6.lt) goto loc_82367FF0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82367FC8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367FD8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82367fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367FD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82367FF0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236803c
	if (!ctx.cr6.eq) goto loc_8236803C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368014;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368024:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236803C:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368088
	if (ctx.cr6.eq) goto loc_82368088;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368060;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368070:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368070;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368088:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823680d0
	if (!ctx.cr6.eq) goto loc_823680D0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823680A8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823680B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823680b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823680B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823680D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x823680D8;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x823680E0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823680f4
	if (ctx.cr6.eq) goto loc_823680F4;
	// bl 0x82367c40
	ctx.lr = 0x823680EC;
	sub_82367C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823680f8
	goto loc_823680F8;
loc_823680F4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823680F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82368100;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82368148
	if (!ctx.cr6.eq) goto loc_82368148;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368120;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368130:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368148:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// bl 0x8235bfa8
	ctx.lr = 0x82368154;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x82368160;
	sub_82380450(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236816C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x82368178;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x82368180;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x82368188;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823803f8
	ctx.lr = 0x82368194;
	sub_823803F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236819C;
	sub_82356EB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82356610
	ctx.lr = 0x823681A8;
	sub_82356610(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380210
	ctx.lr = 0x823681B4;
	sub_82380210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823681ec
	if (ctx.cr6.eq) goto loc_823681EC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380260
	ctx.lr = 0x823681CC;
	sub_82380260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823681ec
	if (ctx.cr6.eq) goto loc_823681EC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c4c0
	ctx.lr = 0x823681E4;
	sub_8235C4C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368244
	if (!ctx.cr6.eq) goto loc_82368244;
loc_823681EC:
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
	ctx.lr = 0x82368204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236821C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236822C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236822c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236822C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368244:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82368254;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823682b4
	if (!ctx.cr6.eq) goto loc_823682B4;
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
	ctx.lr = 0x82368274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236828C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236829C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236829c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236829C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823682B4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x823682C4;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823682D4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823682d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823682D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823682EC"))) PPC_WEAK_FUNC(sub_823682EC);
PPC_FUNC_IMPL(__imp__sub_823682EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823682F0"))) PPC_WEAK_FUNC(sub_823682F0);
PPC_FUNC_IMPL(__imp__sub_823682F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823682F8;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x82368308;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82368310;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82368324;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368338;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236834C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368360;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368374;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368388;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236839C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823683B0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823683C4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823683d0
	if (ctx.cr6.eq) goto loc_823683D0;
loc_823683CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823683D0:
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x823683E0;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368414
	if (ctx.cr6.eq) goto loc_82368414;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823683FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823683fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823683FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82368414:
	// bl 0x82362380
	ctx.lr = 0x82368418;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368460
	if (!ctx.cr6.eq) goto loc_82368460;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368438;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368448:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82368460:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823684ac
	if (!ctx.cr6.eq) goto loc_823684AC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368484;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368494:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368494;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823684AC:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823684f8
	if (!ctx.cr6.eq) goto loc_823684F8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823684D0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823684E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823684e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823684E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823684F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82368540
	if (!ctx.cr6.eq) goto loc_82368540;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368518;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368528:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82368540:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82368548;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x82368550;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82368564
	if (ctx.cr6.eq) goto loc_82368564;
	// bl 0x82367c40
	ctx.lr = 0x8236855C;
	sub_82367C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82368568
	goto loc_82368568;
loc_82368564:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82368568:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82368570;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823685b8
	if (!ctx.cr6.eq) goto loc_823685B8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368590;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823685A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823685a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823685A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823685B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// bl 0x8235bfa8
	ctx.lr = 0x823685C4;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x823685D0;
	sub_82380450(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x823685DC;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x823685E8;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x823685F0;
	sub_82358390(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82356610
	ctx.lr = 0x823685FC;
	sub_82356610(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380210
	ctx.lr = 0x82368608;
	sub_82380210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368668
	if (!ctx.cr6.eq) goto loc_82368668;
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
	ctx.lr = 0x82368628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368640;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368650:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368650;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82368668:
	// addi r29,r30,2768
	ctx.r29.s64 = ctx.r30.s64 + 2768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fa38
	ctx.lr = 0x82368674;
	sub_8237FA38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8237f8e0
	ctx.lr = 0x82368680;
	sub_8237F8E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82368690;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823686f0
	if (!ctx.cr6.eq) goto loc_823686F0;
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
	ctx.lr = 0x823686B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823686C8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823686D8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823686d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823686D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823686F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x82368700;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368710:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368710;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82368728"))) PPC_WEAK_FUNC(sub_82368728);
PPC_FUNC_IMPL(__imp__sub_82368728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82368730;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8235e108
	ctx.lr = 0x82368748;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82368750;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82368764;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368778;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236878C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823687A0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823687B4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823687C8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823687DC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823687F0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236880c
	if (!ctx.cr6.eq) goto loc_8236880C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368804;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368810
	if (ctx.cr6.eq) goto loc_82368810;
loc_8236880C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82368810:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x82368820;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368854
	if (ctx.cr6.eq) goto loc_82368854;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236883C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236883c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236883C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368854:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82368ae0
	if (ctx.cr6.eq) goto loc_82368AE0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82368ae0
	if (ctx.cr6.eq) goto loc_82368AE0;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823688b0
	if (!ctx.cr6.eq) goto loc_823688B0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368888;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368898:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368898;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823688B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823688f8
	if (!ctx.cr6.eq) goto loc_823688F8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823688D0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823688E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823688e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823688E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823688F8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82368910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368958
	if (!ctx.cr6.eq) goto loc_82368958;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368930;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368940:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368940;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368958:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82368960;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x82368968;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236897c
	if (ctx.cr6.eq) goto loc_8236897C;
	// bl 0x82367c40
	ctx.lr = 0x82368974;
	sub_82367C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82368980
	goto loc_82368980;
loc_8236897C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82368980:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82368988;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823689d0
	if (!ctx.cr6.eq) goto loc_823689D0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823689A8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823689B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823689b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823689B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823689D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r29,272
	ctx.r30.s64 = ctx.r29.s64 + 272;
	// bl 0x8235bfa8
	ctx.lr = 0x823689DC;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380450
	ctx.lr = 0x823689E8;
	sub_82380450(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x823689F4;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237f4f8
	ctx.lr = 0x82368A00;
	sub_8237F4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x82368A08;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237f530
	ctx.lr = 0x82368A14;
	sub_8237F530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8237f770
	ctx.lr = 0x82368A20;
	sub_8237F770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8237f398
	ctx.lr = 0x82368A2C;
	sub_8237F398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82356610
	ctx.lr = 0x82368A38;
	sub_82356610(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82368A48;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368aa8
	if (!ctx.cr6.eq) goto loc_82368AA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82368A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368A80;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368A90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368A90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368AA8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x82368AB8;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368AC8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368AC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82368AE0:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368AF8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368B08:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368B08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82368B20"))) PPC_WEAK_FUNC(sub_82368B20);
PPC_FUNC_IMPL(__imp__sub_82368B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82368B28;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8235e108
	ctx.lr = 0x82368B3C;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82368B44;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82368B58;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368B6C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368B80;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368B94;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368BA8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368BBC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368BD0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368BE4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368c00
	if (!ctx.cr6.eq) goto loc_82368C00;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82368BF8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368c04
	if (ctx.cr6.eq) goto loc_82368C04;
loc_82368C00:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82368C04:
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x82368C14;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368c48
	if (ctx.cr6.eq) goto loc_82368C48;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368C30:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368C30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368C48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82368c90
	if (!ctx.cr6.eq) goto loc_82368C90;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368C68;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368C78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368C78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368C90:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368cdc
	if (!ctx.cr6.eq) goto loc_82368CDC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368CB4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368CC4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368CC4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368CDC:
	// lwz r11,788(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368d28
	if (ctx.cr6.eq) goto loc_82368D28;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368D00;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368D10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368D10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368D28:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82368d70
	if (!ctx.cr6.eq) goto loc_82368D70;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368D48;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368D58:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368D58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368D70:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82368D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82368dd0
	if (!ctx.cr6.eq) goto loc_82368DD0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368DA8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368DB8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368DB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368DD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82368DD8;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x82368DE0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82368df4
	if (ctx.cr6.eq) goto loc_82368DF4;
	// bl 0x82367c40
	ctx.lr = 0x82368DEC;
	sub_82367C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82368df8
	goto loc_82368DF8;
loc_82368DF4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82368DF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82368E00;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82368e48
	if (!ctx.cr6.eq) goto loc_82368E48;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368E20;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368E30:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368E30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368E48:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r29,272
	ctx.r30.s64 = ctx.r29.s64 + 272;
	// bl 0x8235bfa8
	ctx.lr = 0x82368E54;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380450
	ctx.lr = 0x82368E60;
	sub_82380450(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x82368E6C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237f4f8
	ctx.lr = 0x82368E78;
	sub_8237F4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x82368E80;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237f530
	ctx.lr = 0x82368E8C;
	sub_8237F530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8237f568
	ctx.lr = 0x82368E98;
	sub_8237F568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8237f398
	ctx.lr = 0x82368EA4;
	sub_8237F398(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82368EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356610
	ctx.lr = 0x82368EC4;
	sub_82356610(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82368ED4;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368f34
	if (!ctx.cr6.eq) goto loc_82368F34;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82368EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82368F0C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368F1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368F1C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82368F34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x82368F44;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368F54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368F54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82368F6C"))) PPC_WEAK_FUNC(sub_82368F6C);
PPC_FUNC_IMPL(__imp__sub_82368F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368F70"))) PPC_WEAK_FUNC(sub_82368F70);
PPC_FUNC_IMPL(__imp__sub_82368F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82368F78;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x82368F84;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82368F8C;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82368FA0;
	sub_8235E2A8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r5,19
	ctx.r5.s64 = 19;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x82368FBC;
	sub_8235E7D0(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82368ff0
	if (ctx.cr6.eq) goto loc_82368FF0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368FD8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82368fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368FD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82368FF0:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236903c
	if (!ctx.cr6.eq) goto loc_8236903C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369014;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369024:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236903C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82369084
	if (!ctx.cr6.eq) goto loc_82369084;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236905C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236906C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236906c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236906C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82369084:
	// bl 0x82362380
	ctx.lr = 0x82369088;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823690d0
	if (!ctx.cr6.eq) goto loc_823690D0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823690A8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823690B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823690b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823690B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823690D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x823690D8;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x823690E0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823690f4
	if (ctx.cr6.eq) goto loc_823690F4;
	// bl 0x82367c40
	ctx.lr = 0x823690EC;
	sub_82367C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823690f8
	goto loc_823690F8;
loc_823690F4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823690F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82369100;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82369148
	if (!ctx.cr6.eq) goto loc_82369148;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369120;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369130:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369130;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82369148:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// bl 0x8235bfa8
	ctx.lr = 0x82369154;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82380450
	ctx.lr = 0x82369160;
	sub_82380450(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236916C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237fd80
	ctx.lr = 0x82369178;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x82369180;
	sub_82358390(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82356610
	ctx.lr = 0x8236918C;
	sub_82356610(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x82369194;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82380210
	ctx.lr = 0x823691A0;
	sub_82380210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369200
	if (!ctx.cr6.eq) goto loc_82369200;
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
	ctx.lr = 0x823691C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823691D8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823691E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823691e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823691E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82369200:
	// addi r28,r30,2768
	ctx.r28.s64 = ctx.r30.s64 + 2768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237fa38
	ctx.lr = 0x8236920C;
	sub_8237FA38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8237f8e0
	ctx.lr = 0x82369218;
	sub_8237F8E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82369228;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369288
	if (!ctx.cr6.eq) goto loc_82369288;
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
	ctx.lr = 0x82369248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369260;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369270:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82369288:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x82369298;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823692A8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823692a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823692A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823692C0"))) PPC_WEAK_FUNC(sub_823692C0);
PPC_FUNC_IMPL(__imp__sub_823692C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823692C8;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x823692D8;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823692E0;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x823692F4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369308;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236931C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369330;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369344;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369358;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236936C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369388
	if (!ctx.cr6.eq) goto loc_82369388;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369380;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236938c
	if (ctx.cr6.eq) goto loc_8236938C;
loc_82369388:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236938C:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x8236939C;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823693d0
	if (ctx.cr6.eq) goto loc_823693D0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823693B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823693b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823693B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823693D0:
	// bl 0x82362380
	ctx.lr = 0x823693D4;
	sub_82362380(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369420
	if (!ctx.cr6.eq) goto loc_82369420;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823693F8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369408:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369408;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369420:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236946c
	if (!ctx.cr6.eq) goto loc_8236946C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369444;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369454:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369454;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236946C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823694b4
	if (!ctx.cr6.eq) goto loc_823694B4;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236948C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236949C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236949c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236949C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823694B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x823694BC;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x823694C4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823694d8
	if (ctx.cr6.eq) goto loc_823694D8;
	// bl 0x82367c40
	ctx.lr = 0x823694D0;
	sub_82367C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823694dc
	goto loc_823694DC;
loc_823694D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823694DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823694E4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236952c
	if (!ctx.cr6.eq) goto loc_8236952C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369504;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369514:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369514;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236952C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// bl 0x8235bfa8
	ctx.lr = 0x82369538;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x82369544;
	sub_82380450(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x82369550;
	sub_82358260(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236955C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x82369568;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x82369570;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x82369578;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd88
	ctx.lr = 0x82369584;
	sub_8237FD88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236958C;
	sub_82356EB8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd20
	ctx.lr = 0x82369598;
	sub_8237FD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823695f8
	if (!ctx.cr6.eq) goto loc_823695F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823695B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823695D0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823695E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823695e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823695E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823695F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x82369604;
	sub_82358260(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82369614;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369674
	if (!ctx.cr6.eq) goto loc_82369674;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82369634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236964C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236965C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236965c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236965C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369674:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x82369684;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369694:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823696AC"))) PPC_WEAK_FUNC(sub_823696AC);
PPC_FUNC_IMPL(__imp__sub_823696AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823696B0"))) PPC_WEAK_FUNC(sub_823696B0);
PPC_FUNC_IMPL(__imp__sub_823696B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823696B8;
	sub_82248778(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x8235e108
	ctx.lr = 0x823696CC;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823696D4;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x823696E8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x823696FC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369710;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369724;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369738;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236974C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369760;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236977c
	if (!ctx.cr6.eq) goto loc_8236977C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369774;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82369780
	if (ctx.cr6.eq) goto loc_82369780;
loc_8236977C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82369780:
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235e7d0
	ctx.lr = 0x82369790;
	sub_8235E7D0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823697c4
	if (ctx.cr6.eq) goto loc_823697C4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823697AC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823697ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823697AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823697C4:
	// bl 0x82362380
	ctx.lr = 0x823697C8;
	sub_82362380(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369814
	if (!ctx.cr6.eq) goto loc_82369814;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823697EC;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823697FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823697fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823697FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369814:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369860
	if (!ctx.cr6.eq) goto loc_82369860;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369838;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369848:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369860:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823698a8
	if (!ctx.cr6.eq) goto loc_823698A8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369880;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369890:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369890;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823698A8:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823698f4
	if (ctx.cr6.eq) goto loc_823698F4;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823698CC;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823698DC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823698dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823698DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823698F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82369994
	if (ctx.cr6.eq) goto loc_82369994;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369948
	if (!ctx.cr6.eq) goto loc_82369948;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369920;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369930:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369930;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369948:
	// lwz r11,1928(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1928);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82369994
	if (!ctx.cr6.eq) goto loc_82369994;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236996C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236997C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236997c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236997C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369994:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236999C;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x823699A4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823699b8
	if (ctx.cr6.eq) goto loc_823699B8;
	// bl 0x82367c40
	ctx.lr = 0x823699B0;
	sub_82367C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823699bc
	goto loc_823699BC;
loc_823699B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823699BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823699C4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82369a0c
	if (!ctx.cr6.eq) goto loc_82369A0C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x823699E4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823699F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823699f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823699F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369A0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r30,728
	ctx.r29.s64 = ctx.r30.s64 + 728;
	// bl 0x8235bfa8
	ctx.lr = 0x82369A18;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x82369A24;
	sub_82380450(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x82369A30;
	sub_82358260(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235bf68
	ctx.lr = 0x82369A3C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x82369A48;
	sub_8237FD80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358390
	ctx.lr = 0x82369A50;
	sub_82358390(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823622c8
	ctx.lr = 0x82369A58;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd88
	ctx.lr = 0x82369A64;
	sub_8237FD88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356eb8
	ctx.lr = 0x82369A6C;
	sub_82356EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x82369A74;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237c490
	ctx.lr = 0x82369A80;
	sub_8237C490(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd20
	ctx.lr = 0x82369A8C;
	sub_8237FD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369af4
	if (!ctx.cr6.eq) goto loc_82369AF4;
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
	ctx.lr = 0x82369AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369AC4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369AD4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369AD4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237c1d0
	ctx.lr = 0x82369AE8;
	sub_8237C1D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369AF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x82369B00;
	sub_82358260(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82369b10
	if (ctx.cr6.eq) goto loc_82369B10;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82369B10:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82369b1c
	if (ctx.cr6.eq) goto loc_82369B1C;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_82369B1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd70
	ctx.lr = 0x82369B24;
	sub_8237FD70(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x82369B34;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369b9c
	if (!ctx.cr6.eq) goto loc_82369B9C;
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
	ctx.lr = 0x82369B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369B6C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369B7C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369B7C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237c1d0
	ctx.lr = 0x82369B90;
	sub_8237C1D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82369B9C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x82369BAC;
	sub_8235E330(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,2832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2832, ctx.r9.u32);
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// stw r8,1932(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1932, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82369BCC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82369bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369BCC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237c1d0
	ctx.lr = 0x82369BE0;
	sub_8237C1D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82369BEC"))) PPC_WEAK_FUNC(sub_82369BEC);
PPC_FUNC_IMPL(__imp__sub_82369BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369BF0"))) PPC_WEAK_FUNC(sub_82369BF0);
PPC_FUNC_IMPL(__imp__sub_82369BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82369BF8;
	sub_8224877C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8235e108
	ctx.lr = 0x82369C0C;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82369C14;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C28;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C3C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C50;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C64;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C78;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369C8C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369CA0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369CB4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369cd0
	if (!ctx.cr6.eq) goto loc_82369CD0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x82369CC8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82369cd4
	if (ctx.cr6.eq) goto loc_82369CD4;
loc_82369CD0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82369CD4:
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235e7d0
	ctx.lr = 0x82369CE4;
	sub_8235E7D0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369d18
	if (ctx.cr6.eq) goto loc_82369D18;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369D00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369D18:
	// bl 0x82362380
	ctx.lr = 0x82369D1C;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82369d68
	if (!ctx.cr6.eq) goto loc_82369D68;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369D40;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369D50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369D68:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579a0
	ctx.lr = 0x82369D70;
	sub_823579A0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x82369D80;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369dd0
	if (!ctx.cr6.eq) goto loc_82369DD0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369DA0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369DB0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369DB0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369DC4;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369DD0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369e24
	if (!ctx.cr6.eq) goto loc_82369E24;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369DF4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369E04:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369e04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369E04;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369E18;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369E24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c420
	ctx.lr = 0x82369E2C;
	sub_8235C420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369e7c
	if (!ctx.cr6.eq) goto loc_82369E7C;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369E4C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369E5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369E5C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369E70;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369E7C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82369ecc
	if (!ctx.cr6.eq) goto loc_82369ECC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369E9C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369EAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369EAC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369EC0;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369ECC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82369f84
	if (ctx.cr6.eq) goto loc_82369F84;
	// bl 0x82370538
	ctx.lr = 0x82369ED8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82369EDC;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82369EE0;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82369f30
	if (!ctx.cr6.eq) goto loc_82369F30;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369F00;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369F10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369F10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369F24;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369F30:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369f84
	if (!ctx.cr6.eq) goto loc_82369F84;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369F54;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369F64:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369F64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369F78;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82369F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82369F8C;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x82369F94;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82369fa8
	if (ctx.cr6.eq) goto loc_82369FA8;
	// bl 0x82367c40
	ctx.lr = 0x82369FA0;
	sub_82367C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82369fac
	goto loc_82369FAC;
loc_82369FA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82369FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82369FB4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236a004
	if (!ctx.cr6.eq) goto loc_8236A004;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x82369FD4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369FE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82369fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369FE4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x82369FF8;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236A004:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236A00C;
	sub_8235BFA8(ctx, base);
	// stb r3,1264(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1264, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236A018;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1288
	ctx.r3.s64 = ctx.r30.s64 + 1288;
	// bl 0x8237c248
	ctx.lr = 0x8236A024;
	sub_8237C248(ctx, base);
	// stw r26,1268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1268, ctx.r26.u32);
	// bl 0x82370538
	ctx.lr = 0x8236A02C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8236A030;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8236A034;
	sub_823708C0(ctx, base);
	// subf r11,r3,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r3.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r9.u32);
	// bl 0x82356608
	ctx.lr = 0x8236A04C;
	sub_82356608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,1272
	ctx.r3.s64 = ctx.r30.s64 + 1272;
	// bl 0x8235a878
	ctx.lr = 0x8236A058;
	sub_8235A878(ctx, base);
	// stw r25,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r25.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,1920(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1920);
	// addi r4,r28,896
	ctx.r4.s64 = ctx.r28.s64 + 896;
	// addi r3,r30,1464
	ctx.r3.s64 = ctx.r30.s64 + 1464;
	// bl 0x8237f168
	ctx.lr = 0x8236A070;
	sub_8237F168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a0c0
	if (!ctx.cr6.eq) goto loc_8236A0C0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236A090;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236A0A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236a0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236A0A0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x8236A0B4;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236A0C0:
	// addi r5,r30,1256
	ctx.r5.s64 = ctx.r30.s64 + 1256;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A0D0;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a138
	if (!ctx.cr6.eq) goto loc_8236A138;
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
	ctx.lr = 0x8236A0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236A108;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236A118:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236a118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236A118;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x8236A12C;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236A138:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236A148;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236A158:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236a158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236A158;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x8236A16C;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8236A178"))) PPC_WEAK_FUNC(sub_8236A178);
PPC_FUNC_IMPL(__imp__sub_8236A178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236A180;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236A190;
	sub_8235E108(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8236a280
	if (ctx.cr6.gt) goto loc_8236A280;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24132
	ctx.r12.s64 = ctx.r12.s64 + -24132;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-24080(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24080);
	// lwz r17,-24080(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24080);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-24080(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24080);
	// lwz r17,-24080(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24080);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-23936(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -23936);
	// lwz r17,-24008(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24008);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A1FC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a22c
	if (!ctx.cr6.eq) goto loc_8236A22C;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A210;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a22c
	if (!ctx.cr6.eq) goto loc_8236A22C;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A224;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a280
	if (ctx.cr6.eq) goto loc_8236A280;
loc_8236A22C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A244;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a22c
	if (!ctx.cr6.eq) goto loc_8236A22C;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A258;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a22c
	if (!ctx.cr6.eq) goto loc_8236A22C;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236A26C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a280
	if (ctx.cr6.eq) goto loc_8236A280;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236A280:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c798
	ctx.lr = 0x8236A28C;
	sub_8237C798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236A294"))) PPC_WEAK_FUNC(sub_8236A294);
PPC_FUNC_IMPL(__imp__sub_8236A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A298"))) PPC_WEAK_FUNC(sub_8236A298);
PPC_FUNC_IMPL(__imp__sub_8236A298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236A2A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236a2f4
	if (ctx.cr6.eq) goto loc_8236A2F4;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,2828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2828, ctx.r10.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236A2CC;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a404
	if (!ctx.cr6.eq) goto loc_8236A404;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236A2F4:
	// bl 0x8235bf58
	ctx.lr = 0x8236A2F8;
	sub_8235BF58(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357600
	ctx.lr = 0x8236A308;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8236A310;
	sub_82355AB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8236A31C;
	sub_82355AC0(ctx, base);
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,892(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// bl 0x8235c048
	ctx.lr = 0x8236A32C;
	sub_8235C048(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82364800
	ctx.lr = 0x8236A338;
	sub_82364800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8236a37c
	if (!ctx.cr6.eq) goto loc_8236A37C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 | 1;
	// stw r30,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r30.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236A35C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a404
	if (!ctx.cr6.eq) goto loc_8236A404;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236A37C:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A384;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a3d0
	if (!ctx.cr6.eq) goto loc_8236A3D0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A3A8;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a3d0
	if (!ctx.cr6.eq) goto loc_8236A3D0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236A3D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1928, ctx.r11.u32);
	// addi r3,r30,616
	ctx.r3.s64 = ctx.r30.s64 + 616;
	// stw r11,1932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1932, ctx.r11.u32);
	// bl 0x82355b28
	ctx.lr = 0x8236A3E8;
	sub_82355B28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 784, ctx.r11.u32);
	// bl 0x82357600
	ctx.lr = 0x8236A3F8;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c068
	ctx.lr = 0x8236A404;
	sub_8235C068(ctx, base);
loc_8236A404:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236A410"))) PPC_WEAK_FUNC(sub_8236A410);
PPC_FUNC_IMPL(__imp__sub_8236A410) {
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
	// addi r5,r3,472
	ctx.r5.s64 = ctx.r3.s64 + 472;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A434;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a488
	if (!ctx.cr6.eq) goto loc_8236A488;
	// bl 0x82362508
	ctx.lr = 0x8236A440;
	sub_82362508(ctx, base);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8236A44C;
	sub_823A43C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236a46c
	if (ctx.cr6.eq) goto loc_8236A46C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A464;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a488
	if (!ctx.cr6.eq) goto loc_8236A488;
loc_8236A46C:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x8236a48c
	goto loc_8236A48C;
loc_8236A488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A48C:
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

__attribute__((alias("__imp__sub_8236A4A4"))) PPC_WEAK_FUNC(sub_8236A4A4);
PPC_FUNC_IMPL(__imp__sub_8236A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A4A8"))) PPC_WEAK_FUNC(sub_8236A4A8);
PPC_FUNC_IMPL(__imp__sub_8236A4A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,2828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2828, ctx.r11.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8236A4C8;
	sub_8235BF58(ctx, base);
	// bl 0x8235c0e0
	ctx.lr = 0x8236A4CC;
	sub_8235C0E0(ctx, base);
	// bl 0x82362508
	ctx.lr = 0x8236A4D0;
	sub_82362508(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A4E0;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a514
	if (!ctx.cr6.eq) goto loc_8236A514;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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
loc_8236A514:
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

__attribute__((alias("__imp__sub_8236A52C"))) PPC_WEAK_FUNC(sub_8236A52C);
PPC_FUNC_IMPL(__imp__sub_8236A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A530"))) PPC_WEAK_FUNC(sub_8236A530);
PPC_FUNC_IMPL(__imp__sub_8236A530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236A538;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236A544;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362508
	ctx.lr = 0x8236A54C;
	sub_82362508(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,1924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1924, ctx.r31.u32);
	// stw r31,1928(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1928, ctx.r31.u32);
	// stw r31,1932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1932, ctx.r31.u32);
	// stw r31,1936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1936, ctx.r31.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8236a580
	if (ctx.cr6.eq) goto loc_8236A580;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8236a580
	if (ctx.cr6.eq) goto loc_8236A580;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8236a580
	if (ctx.cr6.eq) goto loc_8236A580;
	// bl 0x8235bf58
	ctx.lr = 0x8236A580;
	sub_8235BF58(ctx, base);
loc_8236A580:
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A590;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a5b4
	if (!ctx.cr6.eq) goto loc_8236A5B4;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236A5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236A5C0"))) PPC_WEAK_FUNC(sub_8236A5C0);
PPC_FUNC_IMPL(__imp__sub_8236A5C0) {
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
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8236a608
	if (ctx.cr6.eq) goto loc_8236A608;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8236a608
	if (ctx.cr6.eq) goto loc_8236A608;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8236a608
	if (ctx.cr6.eq) goto loc_8236A608;
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
loc_8236A608:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236A620;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a654
	if (!ctx.cr6.eq) goto loc_8236A654;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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
loc_8236A654:
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

__attribute__((alias("__imp__sub_8236A66C"))) PPC_WEAK_FUNC(sub_8236A66C);
PPC_FUNC_IMPL(__imp__sub_8236A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A670"))) PPC_WEAK_FUNC(sub_8236A670);
PPC_FUNC_IMPL(__imp__sub_8236A670) {
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
	// bl 0x8235cf68
	ctx.lr = 0x8236A68C;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236A694;
	sub_8235BF58(ctx, base);
	// addi r4,r31,1288
	ctx.r4.s64 = ctx.r31.s64 + 1288;
	// bl 0x8235c068
	ctx.lr = 0x8236A69C;
	sub_8235C068(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236A6B4;
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

__attribute__((alias("__imp__sub_8236A6D0"))) PPC_WEAK_FUNC(sub_8236A6D0);
PPC_FUNC_IMPL(__imp__sub_8236A6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236A6D8;
	sub_82248788(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2832);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r9,r10,6
	ctx.r9.u64 = ctx.r10.u64 | 6;
	// stw r11,2832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2832, ctx.r11.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8236a840
	if (!ctx.cr6.eq) goto loc_8236A840;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8236a840
	if (ctx.cr6.lt) goto loc_8236A840;
	// bl 0x8235bf58
	ctx.lr = 0x8236A70C;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8236A714;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a740
	if (!ctx.cr6.eq) goto loc_8236A740;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236A740:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r30,728
	ctx.r31.s64 = ctx.r30.s64 + 728;
	// bl 0x8235bfa8
	ctx.lr = 0x8236A74C;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82380450
	ctx.lr = 0x8236A758;
	sub_82380450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x8236A764;
	sub_82358260(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236A770;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd80
	ctx.lr = 0x8236A77C;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236A784;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x8236A78C;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd88
	ctx.lr = 0x8236A798;
	sub_8237FD88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236A7A0;
	sub_82356EB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236A7A8;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c490
	ctx.lr = 0x8236A7B4;
	sub_8237C490(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd20
	ctx.lr = 0x8236A7C0;
	sub_8237FD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a7f0
	if (!ctx.cr6.eq) goto loc_8236A7F0;
loc_8236A7C8:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// bl 0x8237c1d0
	ctx.lr = 0x8236A7E4;
	sub_8237C1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236A7F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x8236A7FC;
	sub_82358260(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A80C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a7c8
	if (ctx.cr6.eq) goto loc_8236A7C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x8235acb8
	ctx.lr = 0x8236A82C;
	sub_8235ACB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c1d0
	ctx.lr = 0x8236A834;
	sub_8237C1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236A840:
	// bl 0x8235bf58
	ctx.lr = 0x8236A844;
	sub_8235BF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236A858"))) PPC_WEAK_FUNC(sub_8236A858);
PPC_FUNC_IMPL(__imp__sub_8236A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236A860;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236A86C;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236A874;
	sub_8235BF58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,3000(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236A894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c908
	ctx.lr = 0x8236A8A0;
	sub_8235C908(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236A8A4;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236A8B0;
	sub_8235C048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362390
	ctx.lr = 0x8236A8B8;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236A8BC;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236A8C8;
	sub_8235C048(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,10412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236A8E8;
	sub_8235B5A8(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A8F8;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a920
	if (!ctx.cr6.eq) goto loc_8236A920;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236A920:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236A92C"))) PPC_WEAK_FUNC(sub_8236A92C);
PPC_FUNC_IMPL(__imp__sub_8236A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A930"))) PPC_WEAK_FUNC(sub_8236A930);
PPC_FUNC_IMPL(__imp__sub_8236A930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236A938;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236A948;
	sub_8235CF68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236A950;
	sub_8235BF58(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,3000(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236A970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c908
	ctx.lr = 0x8236A97C;
	sub_8235C908(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236A980;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236A98C;
	sub_8235C048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362390
	ctx.lr = 0x8236A994;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236A998;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236A9A4;
	sub_8235C048(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,10412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236A9C4;
	sub_8235B5A8(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236A9D4;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a9fc
	if (!ctx.cr6.eq) goto loc_8236A9FC;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236A9FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236AA08"))) PPC_WEAK_FUNC(sub_8236AA08);
PPC_FUNC_IMPL(__imp__sub_8236AA08) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236AA24;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236aa6c
	if (ctx.cr6.eq) goto loc_8236AA6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8236aa6c
	if (ctx.cr6.eq) goto loc_8236AA6C;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236AA48;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236aaa0
	if (!ctx.cr6.eq) goto loc_8236AAA0;
loc_8236AA50:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x8236aaa4
	goto loc_8236AAA4;
loc_8236AA6C:
	// addi r30,r31,1496
	ctx.r30.s64 = ctx.r31.s64 + 1496;
	// bl 0x8235c0d8
	ctx.lr = 0x8236AA74;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236AA80;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236aa50
	if (ctx.cr6.eq) goto loc_8236AA50;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236AA98;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236aa50
	if (ctx.cr6.eq) goto loc_8236AA50;
loc_8236AAA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236AAA4:
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

__attribute__((alias("__imp__sub_8236AABC"))) PPC_WEAK_FUNC(sub_8236AABC);
PPC_FUNC_IMPL(__imp__sub_8236AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236AAC0"))) PPC_WEAK_FUNC(sub_8236AAC0);
PPC_FUNC_IMPL(__imp__sub_8236AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236AAC8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,31580
	ctx.r10.s64 = ctx.r11.s64 + 31580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823579a0
	ctx.lr = 0x8236AAF4;
	sub_823579A0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x8236AB0C;
	sub_82370088(ctx, base);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236AB20;
	sub_82357C30(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8236AB2C;
	sub_82370360(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236AB40"))) PPC_WEAK_FUNC(sub_8236AB40);
PPC_FUNC_IMPL(__imp__sub_8236AB40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236AB70;
	sub_82357C30(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// bl 0x82370360
	ctx.lr = 0x8236AB7C;
	sub_82370360(ctx, base);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8236ABA0"))) PPC_WEAK_FUNC(sub_8236ABA0);
PPC_FUNC_IMPL(__imp__sub_8236ABA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8236ABA8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236ac40
	if (ctx.cr6.eq) goto loc_8236AC40;
	// add r24,r4,r6
	ctx.r24.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mulli r29,r5,120
	ctx.r29.s64 = ctx.r5.s64 * 120;
	// mulli r27,r4,120
	ctx.r27.s64 = ctx.r4.s64 * 120;
loc_8236ABD0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236ABF0;
	sub_82357C30(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x82370360
	ctx.lr = 0x8236ABFC;
	sub_82370360(ctx, base);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r10,r28,r25
	ctx.r10.u64 = ctx.r28.u64 + ctx.r25.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// stw r9,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r9.u32);
	// ble cr6,0x8236ac2c
	if (!ctx.cr6.gt) goto loc_8236AC2C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236AC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236AC2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,120
	ctx.r27.s64 = ctx.r27.s64 + 120;
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8236abd0
	if (ctx.cr6.lt) goto loc_8236ABD0;
loc_8236AC40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8236AC48"))) PPC_WEAK_FUNC(sub_8236AC48);
PPC_FUNC_IMPL(__imp__sub_8236AC48) {
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
	// bl 0x82367cd0
	ctx.lr = 0x8236AC68;
	sub_82367CD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ac80
	if (ctx.cr6.eq) goto loc_8236AC80;
	// bl 0x82357128
	ctx.lr = 0x8236AC7C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236AC80:
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

__attribute__((alias("__imp__sub_8236AC98"))) PPC_WEAK_FUNC(sub_8236AC98);
PPC_FUNC_IMPL(__imp__sub_8236AC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8236ACA0;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236ACB8;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236ACC0;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236ACD4;
	sub_8235E2A8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r5,18
	ctx.r5.s64 = 18;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236ACF0;
	sub_8235E7D0(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236ad24
	if (ctx.cr6.eq) goto loc_8236AD24;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236AD0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ad0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AD0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AD24:
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ad70
	if (ctx.cr6.eq) goto loc_8236AD70;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236AD48;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236AD58:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ad58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AD58;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AD70:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8236adb8
	if (!ctx.cr6.eq) goto loc_8236ADB8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236AD90;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236ADA0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ada0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236ADA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236ADB8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82355a80
	ctx.lr = 0x8236ADC0;
	sub_82355A80(ctx, base);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82370450
	ctx.lr = 0x8236ADCC;
	sub_82370450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236ae14
	if (ctx.cr6.eq) goto loc_8236AE14;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236ADEC;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236ADFC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236adfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236ADFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AE14:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236AE1C;
	sub_823570E0(ctx, base);
	// li r3,2840
	ctx.r3.s64 = 2840;
	// bl 0x823570f0
	ctx.lr = 0x8236AE24;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ae38
	if (ctx.cr6.eq) goto loc_8236AE38;
	// bl 0x82367c40
	ctx.lr = 0x8236AE30;
	sub_82367C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8236ae3c
	goto loc_8236AE3C;
loc_8236AE38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236AE3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236AE44;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236ae90
	if (!ctx.cr6.eq) goto loc_8236AE90;
	// bl 0x82362508
	ctx.lr = 0x8236AE50;
	sub_82362508(ctx, base);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236AE68;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236AE78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ae78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AE78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AE90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// bl 0x8235bfa8
	ctx.lr = 0x8236AE9C;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x8236AEA8;
	sub_82380450(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236AEB4;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x8236AEC0;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236AEC8;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x8236AED0;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823803f8
	ctx.lr = 0x8236AEDC;
	sub_823803F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236AEE4;
	sub_82356EB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82356610
	ctx.lr = 0x8236AEF0;
	sub_82356610(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380210
	ctx.lr = 0x8236AEFC;
	sub_82380210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236af1c
	if (ctx.cr6.eq) goto loc_8236AF1C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380260
	ctx.lr = 0x8236AF14;
	sub_82380260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236af74
	if (!ctx.cr6.eq) goto loc_8236AF74;
loc_8236AF1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236AF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236AF4C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236AF5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236af5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AF5C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AF74:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,784(r28)
	PPC_STORE_U32(ctx.r28.u32 + 784, ctx.r11.u32);
	// bl 0x82357600
	ctx.lr = 0x8236AF84;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c068
	ctx.lr = 0x8236AF90;
	sub_8235C068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236aff0
	if (!ctx.cr6.eq) goto loc_8236AFF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236AFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236AFC8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236AFD8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236afd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AFD8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236AFF0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236B000;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236b060
	if (!ctx.cr6.eq) goto loc_8236B060;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236B020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236B038;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236B048:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236b048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B048;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236B060:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236B070;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236B080:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236b080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B080;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8236B098"))) PPC_WEAK_FUNC(sub_8236B098);
PPC_FUNC_IMPL(__imp__sub_8236B098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236B0A0;
	sub_82248788(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236b0f4
	if (ctx.cr6.eq) goto loc_8236B0F4;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,2828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2828, ctx.r10.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236B0CC;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236b188
	if (!ctx.cr6.eq) goto loc_8236B188;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236B0F4:
	// bl 0x8235bf58
	ctx.lr = 0x8236B0F8;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236B100;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c490
	ctx.lr = 0x8236B10C;
	sub_8237C490(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,1924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1924, ctx.r11.u32);
	// bl 0x82355ac8
	ctx.lr = 0x8236B120;
	sub_82355AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82355ad8
	ctx.lr = 0x8236B12C;
	sub_82355AD8(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236B130;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236b194
	if (!ctx.cr6.eq) goto loc_8236B194;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r10.u32);
loc_8236B14C:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8237c8c8
	ctx.lr = 0x8236B154;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x8236b184
	if (!ctx.cr6.eq) goto loc_8236B184;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x8237c1d0
	ctx.lr = 0x8236B178;
	sub_8237C1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236B184:
	// bl 0x8237c1d0
	ctx.lr = 0x8236B188;
	sub_8237C1D0(ctx, base);
loc_8236B188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236B194:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// bl 0x8235bfa8
	ctx.lr = 0x8236B1A0;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380450
	ctx.lr = 0x8236B1AC;
	sub_82380450(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8236B1B8;
	sub_823A43C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358260
	ctx.lr = 0x8236B1C4;
	sub_82358260(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236B1D0;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd80
	ctx.lr = 0x8236B1DC;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236B1E4;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x8236B1EC;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd88
	ctx.lr = 0x8236B1F8;
	sub_8237FD88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236B200;
	sub_82356EB8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd20
	ctx.lr = 0x8236B20C;
	sub_8237FD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8236b22c
	if (!ctx.cr6.eq) goto loc_8236B22C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r10.u32);
	// b 0x8236b14c
	goto loc_8236B14C;
loc_8236B22C:
	// bl 0x8236a410
	ctx.lr = 0x8236B230;
	sub_8236A410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c1d0
	ctx.lr = 0x8236B23C;
	sub_8237C1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236B248"))) PPC_WEAK_FUNC(sub_8236B248);
PPC_FUNC_IMPL(__imp__sub_8236B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236B250;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31580
	ctx.r9.s64 = ctx.r11.s64 + 31580;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823579a0
	ctx.lr = 0x8236B27C;
	sub_823579A0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r7,r8,30604
	ctx.r7.s64 = ctx.r8.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// bl 0x82370088
	ctx.lr = 0x8236B294;
	sub_82370088(ctx, base);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236B2A8;
	sub_82357C30(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// bl 0x82370360
	ctx.lr = 0x8236B2B4;
	sub_82370360(ctx, base);
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236B2C8"))) PPC_WEAK_FUNC(sub_8236B2C8);
PPC_FUNC_IMPL(__imp__sub_8236B2C8) {
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
	// lwz r9,820(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236b370
	if (ctx.cr6.eq) goto loc_8236B370;
	// lwz r8,816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8236B2F0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8236b320
	if (ctx.cr6.eq) goto loc_8236B320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8236b2f0
	if (ctx.cr6.lt) goto loc_8236B2F0;
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
loc_8236B320:
	// lwz r10,820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// addi r31,r3,812
	ctx.r31.s64 = ctx.r3.s64 + 812;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236b370
	if (!ctx.cr6.lt) goto loc_8236B370;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236b370
	if (ctx.cr6.eq) goto loc_8236B370;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236b364
	if (!ctx.cr6.lt) goto loc_8236B364;
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
	ctx.lr = 0x8236B364;
	sub_82358520(ctx, base);
loc_8236B364:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8236B370:
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

__attribute__((alias("__imp__sub_8236B384"))) PPC_WEAK_FUNC(sub_8236B384);
PPC_FUNC_IMPL(__imp__sub_8236B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236B388"))) PPC_WEAK_FUNC(sub_8236B388);
PPC_FUNC_IMPL(__imp__sub_8236B388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8236B390;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8236b3a8
	if (!ctx.cr6.eq) goto loc_8236B3A8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8236B3A8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add. r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8236b3c0
	if (!ctx.cr0.eq) goto loc_8236B3C0;
loc_8236B3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236B3C0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8236B3C8;
	sub_823570E0(ctx, base);
	// mulli r31,r24,120
	ctx.r31.s64 = ctx.r24.s64 * 120;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x8236B3D8;
	sub_82357208(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236B3E4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8236b3b4
	if (ctx.cr6.eq) goto loc_8236B3B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823585a0
	ctx.lr = 0x8236B3F8;
	sub_823585A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b4ac
	if (ctx.cr6.eq) goto loc_8236B4AC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8236b494
	if (!ctx.cr6.gt) goto loc_8236B494;
	// addi r31,r25,16
	ctx.r31.s64 = ctx.r25.s64 + 16;
	// subfic r26,r25,-16
	ctx.xer.ca = ctx.r25.u32 <= 4294967280;
	ctx.r26.s64 = -16 - ctx.r25.s64;
loc_8236B41C:
	// addic. r11,r31,-16
	ctx.xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236b430
	if (ctx.cr0.eq) goto loc_8236B430;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8236b248
	ctx.lr = 0x8236B430;
	sub_8236B248(ctx, base);
loc_8236B430:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r28,r26,r31
	ctx.r28.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236B450;
	sub_82357C30(ctx, base);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82370360
	ctx.lr = 0x8236B45C;
	sub_82370360(ctx, base);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236B480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8236b41c
	if (ctx.cr6.lt) goto loc_8236B41C;
loc_8236B494:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b4ac
	if (ctx.cr6.eq) goto loc_8236B4AC;
	// bl 0x82357240
	ctx.lr = 0x8236B4A4;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8236B4AC:
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8236B4C0"))) PPC_WEAK_FUNC(sub_8236B4C0);
PPC_FUNC_IMPL(__imp__sub_8236B4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236B4C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236B4D4;
	sub_8235BF58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235c908
	ctx.lr = 0x8236B4E0;
	sub_8235C908(ctx, base);
	// lwz r11,2828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2828);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b4f8
	if (ctx.cr6.eq) goto loc_8236B4F8;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
loc_8236B4F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0e0
	ctx.lr = 0x8236B500;
	sub_8235C0E0(ctx, base);
	// addi r29,r28,792
	ctx.r29.s64 = ctx.r28.s64 + 792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239df00
	ctx.lr = 0x8236B50C;
	sub_8239DF00(ctx, base);
	// lwz r3,796(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b520
	if (ctx.cr6.eq) goto loc_8236B520;
	// bl 0x82357240
	ctx.lr = 0x8236B51C;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8236B520:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,812
	ctx.r30.s64 = ctx.r28.s64 + 812;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,816(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 820, ctx.r31.u32);
	// beq cr6,0x8236b544
	if (ctx.cr6.eq) goto loc_8236B544;
	// bl 0x82357240
	ctx.lr = 0x8236B540;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8236B544:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236B558"))) PPC_WEAK_FUNC(sub_8236B558);
PPC_FUNC_IMPL(__imp__sub_8236B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236B560;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236b59c
	if (ctx.cr6.gt) goto loc_8236B59C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b388
	ctx.lr = 0x8236B588;
	sub_8236B388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b59c
	if (!ctx.cr6.eq) goto loc_8236B59C;
loc_8236B590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236B59C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b590
	if (ctx.cr6.eq) goto loc_8236B590;
	// mulli r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 * 120;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8236b5c0
	if (ctx.cr0.eq) goto loc_8236B5C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b248
	ctx.lr = 0x8236B5C0;
	sub_8236B248(ctx, base);
loc_8236B5C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ab40
	ctx.lr = 0x8236B5CC;
	sub_8236AB40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236B5E4"))) PPC_WEAK_FUNC(sub_8236B5E4);
PPC_FUNC_IMPL(__imp__sub_8236B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236B5E8"))) PPC_WEAK_FUNC(sub_8236B5E8);
PPC_FUNC_IMPL(__imp__sub_8236B5E8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// bgt cr6,0x8236b69c
	if (ctx.cr6.gt) goto loc_8236B69C;
	// beq cr6,0x8236b694
	if (ctx.cr6.eq) goto loc_8236B694;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8236b6ac
	if (ctx.cr6.gt) goto loc_8236B6AC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18896
	ctx.r12.s64 = ctx.r12.s64 + -18896;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// lwz r17,-18820(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18820);
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// lwz r17,-18828(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18828);
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// lwz r17,-18812(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18812);
	// lwz r17,-18772(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18772);
	// lwz r17,-18804(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18804);
	// lwz r17,-18852(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -18852);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// bl 0x8236b4c0
	ctx.lr = 0x8236B678;
	sub_8236B4C0(ctx, base);
	// b 0x8236b6a8
	goto loc_8236B6A8;
	// bl 0x8236a4a8
	ctx.lr = 0x8236B680;
	sub_8236A4A8(ctx, base);
	// b 0x8236b6a8
	goto loc_8236B6A8;
	// bl 0x8236a5c0
	ctx.lr = 0x8236B688;
	sub_8236A5C0(ctx, base);
	// b 0x8236b6a8
	goto loc_8236B6A8;
	// bl 0x8236a6d0
	ctx.lr = 0x8236B690;
	sub_8236A6D0(ctx, base);
	// b 0x8236b6a8
	goto loc_8236B6A8;
loc_8236B694:
	// bl 0x8236a930
	ctx.lr = 0x8236B698;
	sub_8236A930(ctx, base);
	// b 0x8236b6a8
	goto loc_8236B6A8;
loc_8236B69C:
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// bne cr6,0x8236b6ac
	if (!ctx.cr6.eq) goto loc_8236B6AC;
	// bl 0x8236aa08
	ctx.lr = 0x8236B6A8;
	sub_8236AA08(ctx, base);
loc_8236B6A8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8236B6AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236B6C0"))) PPC_WEAK_FUNC(sub_8236B6C0);
PPC_FUNC_IMPL(__imp__sub_8236B6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8236B6C8;
	sub_82248768(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236B6D4;
	sub_8235BF58(ctx, base);
	// addi r25,r22,472
	ctx.r25.s64 = ctx.r22.s64 + 472;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82357608
	ctx.lr = 0x8236B6E4;
	sub_82357608(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x823ac650
	ctx.lr = 0x8236B6F8;
	sub_823AC650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b800
	if (ctx.cr6.eq) goto loc_8236B800;
loc_8236B700:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237ff00
	ctx.lr = 0x8236B70C;
	sub_8237FF00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236b2c8
	ctx.lr = 0x8236B718;
	sub_8236B2C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fd90
	ctx.lr = 0x8236B724;
	sub_8237FD90(ctx, base);
	// lwz r27,800(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236b7ec
	if (ctx.cr6.eq) goto loc_8236B7EC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8236B73C:
	// lwz r11,796(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 796);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// bl 0x82357bb8
	ctx.lr = 0x8236B750;
	sub_82357BB8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357bb8
	ctx.lr = 0x8236B75C;
	sub_82357BB8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82357048
	ctx.lr = 0x8236B764;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b780
	if (!ctx.cr6.eq) goto loc_8236B780;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8236b73c
	if (ctx.cr6.lt) goto loc_8236B73C;
	// b 0x8236b7ec
	goto loc_8236B7EC;
loc_8236B780:
	// lwz r11,800(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// addi r30,r24,792
	ctx.r30.s64 = ctx.r24.s64 + 792;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236b7ec
	if (!ctx.cr6.lt) goto loc_8236B7EC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236b7ec
	if (ctx.cr6.eq) goto loc_8236B7EC;
	// mulli r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 * 120;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236B7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8236b7e0
	if (!ctx.cr6.lt) goto loc_8236B7E0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236aba0
	ctx.lr = 0x8236B7E0;
	sub_8236ABA0(ctx, base);
loc_8236B7E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8236B7EC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823ac650
	ctx.lr = 0x8236B7F8;
	sub_823AC650(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8236b700
	if (ctx.cr6.lt) goto loc_8236B700;
loc_8236B800:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x823ac5c0
	ctx.lr = 0x8236B80C;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b988
	if (ctx.cr6.eq) goto loc_8236B988;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r24,792
	ctx.r29.s64 = ctx.r24.s64 + 792;
	// addi r28,r11,30604
	ctx.r28.s64 = ctx.r11.s64 + 30604;
	// addi r27,r10,31580
	ctx.r27.s64 = ctx.r10.s64 + 31580;
loc_8236B828:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237ff70
	ctx.lr = 0x8236B834;
	sub_8237FF70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fdc0
	ctx.lr = 0x8236B844;
	sub_8237FDC0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fdd8
	ctx.lr = 0x8236B854;
	sub_8237FDD8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579a0
	ctx.lr = 0x8236B864;
	sub_823579A0(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82370088
	ctx.lr = 0x8236B870;
	sub_82370088(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357c30
	ctx.lr = 0x8236B880;
	sub_82357C30(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82370360
	ctx.lr = 0x8236B88C;
	sub_82370360(ctx, base);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236b8c0
	if (ctx.cr6.gt) goto loc_8236B8C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b388
	ctx.lr = 0x8236B8B0;
	sub_8236B388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b8c0
	if (!ctx.cr6.eq) goto loc_8236B8C0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x8236b954
	goto loc_8236B954;
loc_8236B8C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236b8d4
	if (!ctx.cr6.eq) goto loc_8236B8D4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x8236b954
	goto loc_8236B954;
loc_8236B8D4:
	// mulli r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 * 120;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8236b91c
	if (ctx.cr0.eq) goto loc_8236B91C;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823579a0
	ctx.lr = 0x8236B8F4;
	sub_823579A0(ctx, base);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8236B904;
	sub_82370088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357c30
	ctx.lr = 0x8236B910;
	sub_82357C30(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82370360
	ctx.lr = 0x8236B91C;
	sub_82370360(ctx, base);
loc_8236B91C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236B930;
	sub_82357C30(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82370360
	ctx.lr = 0x8236B93C;
	sub_82370360(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_8236B954:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// bl 0x823700d8
	ctx.lr = 0x8236B964;
	sub_823700D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579f8
	ctx.lr = 0x8236B96C;
	sub_823579F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236b9e8
	if (ctx.cr6.eq) goto loc_8236B9E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823ac5c0
	ctx.lr = 0x8236B980;
	sub_823AC5C0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8236b828
	if (ctx.cr6.lt) goto loc_8236B828;
loc_8236B988:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1928(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1928);
	// bl 0x82355b28
	ctx.lr = 0x8236B994;
	sub_82355B28(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c068
	ctx.lr = 0x8236B9A0;
	sub_8235C068(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8236b9bc
	if (ctx.cr6.eq) goto loc_8236B9BC;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8236b9bc
	if (ctx.cr6.eq) goto loc_8236B9BC;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x8236ba40
	if (!ctx.cr6.eq) goto loc_8236BA40;
loc_8236B9BC:
	// bl 0x82362380
	ctx.lr = 0x8236B9C0;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b9e0
	if (ctx.cr6.eq) goto loc_8236B9E0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236ba34
	if (!ctx.cr6.eq) goto loc_8236BA34;
loc_8236B9E0:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// b 0x8236b9ec
	goto loc_8236B9EC;
loc_8236B9E8:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
loc_8236B9EC:
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r5,r22,40
	ctx.r5.s64 = ctx.r22.s64 + 40;
	// stw r10,2828(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2828, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236BA04;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236ba28
	if (!ctx.cr6.eq) goto loc_8236BA28;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r23,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r23.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8236BA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8236BA34:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c908
	ctx.lr = 0x8236BA40;
	sub_8235C908(ctx, base);
loc_8236BA40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8236BA4C"))) PPC_WEAK_FUNC(sub_8236BA4C);
PPC_FUNC_IMPL(__imp__sub_8236BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236BA50"))) PPC_WEAK_FUNC(sub_8236BA50);
PPC_FUNC_IMPL(__imp__sub_8236BA50) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// bgt cr6,0x8236bb14
	if (ctx.cr6.gt) goto loc_8236BB14;
	// beq cr6,0x8236bb0c
	if (ctx.cr6.eq) goto loc_8236BB0C;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8236bb24
	if (ctx.cr6.gt) goto loc_8236BB24;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17776
	ctx.r12.s64 = ctx.r12.s64 + -17776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-17732(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17732);
	// lwz r17,-17716(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17716);
	// lwz r17,-17716(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17716);
	// lwz r17,-17684(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17684);
	// lwz r17,-17676(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17676);
	// lwz r17,-17724(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17724);
	// lwz r17,-17708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17708);
	// lwz r17,-17668(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17668);
	// lwz r17,-17628(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17628);
	// lwz r17,-17708(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17708);
	// lwz r17,-17660(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17660);
	// bl 0x8236a298
	ctx.lr = 0x8236BAC0;
	sub_8236A298(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
	// bl 0x8236b4c0
	ctx.lr = 0x8236BAC8;
	sub_8236B4C0(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x8237f3a0
	ctx.lr = 0x8236BAD4;
	sub_8237F3A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// bl 0x8236b098
	ctx.lr = 0x8236BAF0;
	sub_8236B098(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
	// bl 0x8236a530
	ctx.lr = 0x8236BAF8;
	sub_8236A530(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
	// bl 0x8236b6c0
	ctx.lr = 0x8236BB00;
	sub_8236B6C0(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
	// bl 0x8236a670
	ctx.lr = 0x8236BB08;
	sub_8236A670(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
loc_8236BB0C:
	// bl 0x8236a858
	ctx.lr = 0x8236BB10;
	sub_8236A858(ctx, base);
	// b 0x8236bb20
	goto loc_8236BB20;
loc_8236BB14:
	// cmpwi cr6,r4,53
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 53, ctx.xer);
	// bne cr6,0x8236bb24
	if (!ctx.cr6.eq) goto loc_8236BB24;
	// bl 0x8236aa08
	ctx.lr = 0x8236BB20;
	sub_8236AA08(ctx, base);
loc_8236BB20:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8236BB24:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236BB38"))) PPC_WEAK_FUNC(sub_8236BB38);
PPC_FUNC_IMPL(__imp__sub_8236BB38) {
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
	// bl 0x8237c700
	ctx.lr = 0x8236BB50;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31636
	ctx.r10.s64 = ctx.r11.s64 + 31636;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380460
	ctx.lr = 0x8236BB64;
	sub_82380460(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237c5a0
	ctx.lr = 0x8236BB6C;
	sub_8237C5A0(ctx, base);
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// bl 0x82380308
	ctx.lr = 0x8236BB74;
	sub_82380308(ctx, base);
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

__attribute__((alias("__imp__sub_8236BB8C"))) PPC_WEAK_FUNC(sub_8236BB8C);
PPC_FUNC_IMPL(__imp__sub_8236BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236BB90"))) PPC_WEAK_FUNC(sub_8236BB90);
PPC_FUNC_IMPL(__imp__sub_8236BB90) {
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
	// addi r3,r3,1440
	ctx.r3.s64 = ctx.r3.s64 + 1440;
	// addi r10,r11,31636
	ctx.r10.s64 = ctx.r11.s64 + 31636;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380388
	ctx.lr = 0x8236BBC0;
	sub_82380388(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237c648
	ctx.lr = 0x8236BBC8;
	sub_8237C648(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82380528
	ctx.lr = 0x8236BBD0;
	sub_82380528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x8236BBD8;
	sub_8237C738(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236bbf0
	if (ctx.cr6.eq) goto loc_8236BBF0;
	// bl 0x82357128
	ctx.lr = 0x8236BBEC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236BBF0:
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

__attribute__((alias("__imp__sub_8236BC08"))) PPC_WEAK_FUNC(sub_8236BC08);
PPC_FUNC_IMPL(__imp__sub_8236BC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8236BC10;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236BC20;
	sub_8235E108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236BC28;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236BC3C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236bc58
	if (!ctx.cr6.eq) goto loc_8236BC58;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236BC50;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236bc5c
	if (ctx.cr6.eq) goto loc_8236BC5C;
loc_8236BC58:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236BC5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x8236BC6C;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236bca0
	if (ctx.cr6.eq) goto loc_8236BCA0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BC88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bc88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BC88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BCA0:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236bcec
	if (ctx.cr6.eq) goto loc_8236BCEC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BCC4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BCD4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bcd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BCD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BCEC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8236bd34
	if (!ctx.cr6.eq) goto loc_8236BD34;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BD0C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BD1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BD1C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BD34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357c90
	ctx.lr = 0x8236BD3C;
	sub_82357C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236bd84
	if (!ctx.cr6.eq) goto loc_8236BD84;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BD5C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BD6C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bd6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BD6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BD84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236BD8C;
	sub_823570E0(ctx, base);
	// li r3,1672
	ctx.r3.s64 = 1672;
	// bl 0x823570f0
	ctx.lr = 0x8236BD94;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236bda8
	if (ctx.cr6.eq) goto loc_8236BDA8;
	// bl 0x8236bb38
	ctx.lr = 0x8236BDA0;
	sub_8236BB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8236bdac
	goto loc_8236BDAC;
loc_8236BDA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236BDAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236BDB4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236bdfc
	if (!ctx.cr6.eq) goto loc_8236BDFC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BDD4;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BDE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bde4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BDE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BDFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// bl 0x8235bfa8
	ctx.lr = 0x8236BE08;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x8236BE14;
	sub_82380450(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82380598
	ctx.lr = 0x8236BE20;
	sub_82380598(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357358
	ctx.lr = 0x8236BE28;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823584f0
	ctx.lr = 0x8236BE34;
	sub_823584F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235c398
	ctx.lr = 0x8236BE40;
	sub_8235C398(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x8236BE48;
	sub_823AC6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235bff0
	ctx.lr = 0x8236BE54;
	sub_8235BFF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236BE64;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236bec4
	if (!ctx.cr6.eq) goto loc_8236BEC4;
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
	ctx.lr = 0x8236BE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BE9C;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BEAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236beac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BEAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236BEC4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236BED4;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BEE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BEE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8236BEFC"))) PPC_WEAK_FUNC(sub_8236BEFC);
PPC_FUNC_IMPL(__imp__sub_8236BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236BF00"))) PPC_WEAK_FUNC(sub_8236BF00);
PPC_FUNC_IMPL(__imp__sub_8236BF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236BF08;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236BF14;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236BF1C;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236BF30;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236bf4c
	if (!ctx.cr6.eq) goto loc_8236BF4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236BF44;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236bf50
	if (ctx.cr6.eq) goto loc_8236BF50;
loc_8236BF4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236BF50:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x8236BF60;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236bf94
	if (ctx.cr6.eq) goto loc_8236BF94;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BF7C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bf7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BF7C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236BF94:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236bfe0
	if (!ctx.cr6.eq) goto loc_8236BFE0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236BFB8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BFC8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BFC8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236BFE0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8236c028
	if (!ctx.cr6.eq) goto loc_8236C028;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C000;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C010:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C010;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C028:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236C030;
	sub_823570E0(ctx, base);
	// li r3,1672
	ctx.r3.s64 = 1672;
	// bl 0x823570f0
	ctx.lr = 0x8236C038;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c04c
	if (ctx.cr6.eq) goto loc_8236C04C;
	// bl 0x8236bb38
	ctx.lr = 0x8236C044;
	sub_8236BB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8236c050
	goto loc_8236C050;
loc_8236C04C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236C050:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236C058;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236c0a0
	if (!ctx.cr6.eq) goto loc_8236C0A0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C078;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C088:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C0A0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358170
	ctx.lr = 0x8236C0A8;
	sub_82358170(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236C0B4;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823582c8
	ctx.lr = 0x8236C0C0;
	sub_823582C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236C0C8;
	sub_82358390(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380598
	ctx.lr = 0x8236C0D8;
	sub_82380598(ctx, base);
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236c298
	if (ctx.cr6.eq) goto loc_8236C298;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8236c298
	if (ctx.cr6.eq) goto loc_8236C298;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236c220
	if (!ctx.cr6.eq) goto loc_8236C220;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,1440
	ctx.r29.s64 = ctx.r31.s64 + 1440;
	// bl 0x8235bfa8
	ctx.lr = 0x8236C100;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x8236C10C;
	sub_82380450(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236C118;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x8236C124;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236C12C;
	sub_82358390(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236C134;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380210
	ctx.lr = 0x8236C140;
	sub_82380210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236c1a8
	if (!ctx.cr6.eq) goto loc_8236C1A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C178;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C188:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C188;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C19C;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C1A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C1B8;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c390
	if (!ctx.cr6.eq) goto loc_8236C390;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C1F0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C200:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C200;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C214;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C220:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C230;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c390
	if (!ctx.cr6.eq) goto loc_8236C390;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C268;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C278:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C278;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C28C;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C298:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// bl 0x8235c0d8
	ctx.lr = 0x8236C2A4;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236C2B0;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236c318
	if (!ctx.cr6.eq) goto loc_8236C318;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C2E8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C2F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c2f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C2F8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C30C;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C318:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C328;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c390
	if (!ctx.cr6.eq) goto loc_8236C390;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C360;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C370:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C370;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C384;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236C390:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236C3A0;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C3B0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C3B0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x8236C3C4;
	sub_823581E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236C3D0"))) PPC_WEAK_FUNC(sub_8236C3D0);
PPC_FUNC_IMPL(__imp__sub_8236C3D0) {
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
	// bl 0x8235e108
	ctx.lr = 0x8236C3F0;
	sub_8235E108(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236c414
	if (!ctx.cr6.eq) goto loc_8236C414;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235e258
	ctx.lr = 0x8236C404;
	sub_8235E258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236c414
	if (ctx.cr6.eq) goto loc_8236C414;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236c428
	goto loc_8236C428;
loc_8236C414:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236C428:
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

__attribute__((alias("__imp__sub_8236C440"))) PPC_WEAK_FUNC(sub_8236C440);
PPC_FUNC_IMPL(__imp__sub_8236C440) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236C450;
	sub_8235BF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8236C46C"))) PPC_WEAK_FUNC(sub_8236C46C);
PPC_FUNC_IMPL(__imp__sub_8236C46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236C470"))) PPC_WEAK_FUNC(sub_8236C470);
PPC_FUNC_IMPL(__imp__sub_8236C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236C478;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236C484;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362508
	ctx.lr = 0x8236C48C;
	sub_82362508(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1924, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8236c4b4
	if (ctx.cr6.eq) goto loc_8236C4B4;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8236c4b4
	if (ctx.cr6.eq) goto loc_8236C4B4;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8236c4b4
	if (ctx.cr6.eq) goto loc_8236C4B4;
	// bl 0x8235bf58
	ctx.lr = 0x8236C4B4;
	sub_8235BF58(ctx, base);
loc_8236C4B4:
	// addi r5,r31,1440
	ctx.r5.s64 = ctx.r31.s64 + 1440;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C4C4;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c4e8
	if (!ctx.cr6.eq) goto loc_8236C4E8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236C4E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236C4F4"))) PPC_WEAK_FUNC(sub_8236C4F4);
PPC_FUNC_IMPL(__imp__sub_8236C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236C4F8"))) PPC_WEAK_FUNC(sub_8236C4F8);
PPC_FUNC_IMPL(__imp__sub_8236C4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236C500;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236C50C;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236C514;
	sub_8235BF58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,3000(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c908
	ctx.lr = 0x8236C540;
	sub_8235C908(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236C544;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236C550;
	sub_8235C048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362390
	ctx.lr = 0x8236C558;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236C55C;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236C568;
	sub_8235C048(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,10412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236C588;
	sub_8235B5A8(ctx, base);
	// addi r5,r31,1440
	ctx.r5.s64 = ctx.r31.s64 + 1440;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C598;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c5c0
	if (!ctx.cr6.eq) goto loc_8236C5C0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236C5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236C5CC"))) PPC_WEAK_FUNC(sub_8236C5CC);
PPC_FUNC_IMPL(__imp__sub_8236C5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236C5D0"))) PPC_WEAK_FUNC(sub_8236C5D0);
PPC_FUNC_IMPL(__imp__sub_8236C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236C5D8;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236C5E4;
	sub_8235BF58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235c908
	ctx.lr = 0x8236C5F0;
	sub_8235C908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0e0
	ctx.lr = 0x8236C5F8;
	sub_8235C0E0(ctx, base);
	// addi r29,r28,792
	ctx.r29.s64 = ctx.r28.s64 + 792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239df00
	ctx.lr = 0x8236C604;
	sub_8239DF00(ctx, base);
	// lwz r3,796(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 796);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c61c
	if (ctx.cr6.eq) goto loc_8236C61C;
	// bl 0x82357240
	ctx.lr = 0x8236C618;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8236C61C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,812
	ctx.r30.s64 = ctx.r28.s64 + 812;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,816(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 820, ctx.r31.u32);
	// beq cr6,0x8236c640
	if (ctx.cr6.eq) goto loc_8236C640;
	// bl 0x82357240
	ctx.lr = 0x8236C63C;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8236C640:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bl 0x82358170
	ctx.lr = 0x8236C650;
	sub_82358170(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236C65C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823582c8
	ctx.lr = 0x8236C668;
	sub_823582C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236C670;
	sub_82358390(ctx, base);
	// addi r31,r27,40
	ctx.r31.s64 = ctx.r27.s64 + 40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82380598
	ctx.lr = 0x8236C680;
	sub_82380598(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C690;
	sub_8237C8C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823581e0
	ctx.lr = 0x8236C698;
	sub_823581E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236C6A4"))) PPC_WEAK_FUNC(sub_8236C6A4);
PPC_FUNC_IMPL(__imp__sub_8236C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236C6A8"))) PPC_WEAK_FUNC(sub_8236C6A8);
PPC_FUNC_IMPL(__imp__sub_8236C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236C6B0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236C6C0;
	sub_8235BF58(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bgt cr6,0x8236c780
	if (ctx.cr6.gt) goto loc_8236C780;
	// beq cr6,0x8236c770
	if (ctx.cr6.eq) goto loc_8236C770;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8236c70c
	if (ctx.cr6.eq) goto loc_8236C70C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8236c700
	if (!ctx.cr6.eq) goto loc_8236C700;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8236C700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236C70C:
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357600
	ctx.lr = 0x8236C718;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357068
	ctx.lr = 0x8236C724;
	sub_82357068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c3d8
	ctx.lr = 0x8236C730;
	sub_8235C3D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357608
	ctx.lr = 0x8236C738;
	sub_82357608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8235c3d0
	ctx.lr = 0x8236C748;
	sub_8235C3D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355a88
	ctx.lr = 0x8236C750;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8236C760;
	sub_82370360(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236C770:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236c470
	ctx.lr = 0x8236C778;
	sub_8236C470(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236C780:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x8236c7a0
	if (ctx.cr6.eq) goto loc_8236C7A0;
	// cmpwi cr6,r30,41
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 41, ctx.xer);
	// bne cr6,0x8236c700
	if (!ctx.cr6.eq) goto loc_8236C700;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236c4f8
	ctx.lr = 0x8236C798;
	sub_8236C4F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236C7A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236c5d0
	ctx.lr = 0x8236C7A8;
	sub_8236C5D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236C7B0"))) PPC_WEAK_FUNC(sub_8236C7B0);
PPC_FUNC_IMPL(__imp__sub_8236C7B0) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r11,31668
	ctx.r10.s64 = ctx.r11.s64 + 31668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380690
	ctx.lr = 0x8236C7E0;
	sub_82380690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x8236C7E8;
	sub_8237C738(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236c800
	if (ctx.cr6.eq) goto loc_8236C800;
	// bl 0x82357128
	ctx.lr = 0x8236C7FC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236C800:
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

__attribute__((alias("__imp__sub_8236C818"))) PPC_WEAK_FUNC(sub_8236C818);
PPC_FUNC_IMPL(__imp__sub_8236C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8236C820;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236C838;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236C840;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235e7d0
	ctx.lr = 0x8236C854;
	sub_8235E7D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c888
	if (ctx.cr6.eq) goto loc_8236C888;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C870:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C870;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236C888:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236C890;
	sub_823570E0(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x823570f0
	ctx.lr = 0x8236C898;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236c8c0
	if (ctx.cr6.eq) goto loc_8236C8C0;
	// bl 0x8237c700
	ctx.lr = 0x8236C8A8;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31668
	ctx.r10.s64 = ctx.r11.s64 + 31668;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380628
	ctx.lr = 0x8236C8BC;
	sub_82380628(ctx, base);
	// b 0x8236c8c4
	goto loc_8236C8C4;
loc_8236C8C0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236C8C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236C8CC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236c914
	if (!ctx.cr6.eq) goto loc_8236C914;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C8EC;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C8FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C8FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236C914:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236C91C;
	sub_8235BFA8(ctx, base);
	// stb r3,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236C92C;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823584e0
	ctx.lr = 0x8236C938;
	sub_823584E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236C940;
	sub_82358390(ctx, base);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236C95C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c9bc
	if (!ctx.cr6.eq) goto loc_8236C9BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236C97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236C994;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C9A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c9a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C9A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236C9BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236C9CC;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236C9DC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236c9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C9DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8236C9F4"))) PPC_WEAK_FUNC(sub_8236C9F4);
PPC_FUNC_IMPL(__imp__sub_8236C9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236C9F8"))) PPC_WEAK_FUNC(sub_8236C9F8);
PPC_FUNC_IMPL(__imp__sub_8236C9F8) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r11,31700
	ctx.r10.s64 = ctx.r11.s64 + 31700;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380a98
	ctx.lr = 0x8236CA28;
	sub_82380A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x8236CA30;
	sub_8237C738(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236ca48
	if (ctx.cr6.eq) goto loc_8236CA48;
	// bl 0x82357128
	ctx.lr = 0x8236CA44;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236CA48:
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

__attribute__((alias("__imp__sub_8236CA60"))) PPC_WEAK_FUNC(sub_8236CA60);
PPC_FUNC_IMPL(__imp__sub_8236CA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8236CA68;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236CA7C;
	sub_8235E108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236CA84;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CA98;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cb04
	if (!ctx.cr6.eq) goto loc_8236CB04;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CAAC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cb04
	if (!ctx.cr6.eq) goto loc_8236CB04;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CAC0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cb04
	if (!ctx.cr6.eq) goto loc_8236CB04;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CAD4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cb04
	if (!ctx.cr6.eq) goto loc_8236CB04;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CAE8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cb04
	if (!ctx.cr6.eq) goto loc_8236CB04;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CAFC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236cb08
	if (ctx.cr6.eq) goto loc_8236CB08;
loc_8236CB04:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236CB08:
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236CB18;
	sub_8235E7D0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236cc44
	if (!ctx.cr6.eq) goto loc_8236CC44;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236cb54
	if (!ctx.cr6.eq) goto loc_8236CB54;
loc_8236CB30:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236CB48;
	sub_8235E3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236CB54:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236cb30
	if (ctx.cr6.eq) goto loc_8236CB30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236CB64;
	sub_823570E0(ctx, base);
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x823570f0
	ctx.lr = 0x8236CB6C;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236cb94
	if (ctx.cr6.eq) goto loc_8236CB94;
	// bl 0x8237c700
	ctx.lr = 0x8236CB7C;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31700
	ctx.r10.s64 = ctx.r11.s64 + 31700;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380a00
	ctx.lr = 0x8236CB90;
	sub_82380A00(ctx, base);
	// b 0x8236cb98
	goto loc_8236CB98;
loc_8236CB94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236CB98:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236CBA0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236cbe8
	if (ctx.cr6.eq) goto loc_8236CBE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236CBB0;
	sub_8235BFA8(ctx, base);
	// stb r3,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r3.u8);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82380b28
	ctx.lr = 0x8236CBC8;
	sub_82380B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cc0c
	if (!ctx.cr6.eq) goto loc_8236CC0C;
loc_8236CBD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236CBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236CBE8:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236CC00;
	sub_8235E3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236CC0C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82380948
	ctx.lr = 0x8236CC1C;
	sub_82380948(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236CC2C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236cbd0
	if (ctx.cr6.eq) goto loc_8236CBD0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236CC44;
	sub_8235E330(ctx, base);
loc_8236CC44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8236CC50"))) PPC_WEAK_FUNC(sub_8236CC50);
PPC_FUNC_IMPL(__imp__sub_8236CC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8236CC58;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236CC74;
	sub_8235E108(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236CC7C;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CC90;
	sub_8235E2A8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ccb0
	if (!ctx.cr6.eq) goto loc_8236CCB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CCA8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236ccb4
	if (ctx.cr6.eq) goto loc_8236CCB4;
loc_8236CCB0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8236CCB4:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// beq cr6,0x8236cd00
	if (ctx.cr6.eq) goto loc_8236CD00;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x8235e7d0
	ctx.lr = 0x8236CCE0;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236CCF0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ccf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CCF0;
	// b 0x8236cd24
	goto loc_8236CD24;
loc_8236CD00:
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x8235e7d0
	ctx.lr = 0x8236CD08;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236CD18:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236cd18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CD18;
loc_8236CD24:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236cea0
	if (!ctx.cr6.eq) goto loc_8236CEA0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236ce88
	if (ctx.cr6.eq) goto loc_8236CE88;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8236ce88
	if (ctx.cr6.eq) goto loc_8236CE88;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236cd58
	if (!ctx.cr6.eq) goto loc_8236CD58;
loc_8236CD4C:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// b 0x8236ce90
	goto loc_8236CE90;
loc_8236CD58:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236cd4c
	if (ctx.cr6.eq) goto loc_8236CD4C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8236cd84
	if (ctx.cr6.eq) goto loc_8236CD84;
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8236cd84
	if (ctx.cr6.eq) goto loc_8236CD84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236cd84
	if (ctx.cr6.eq) goto loc_8236CD84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236cd4c
	if (!ctx.cr6.eq) goto loc_8236CD4C;
loc_8236CD84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236CD8C;
	sub_823570E0(ctx, base);
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x823570f0
	ctx.lr = 0x8236CD94;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236cdbc
	if (ctx.cr6.eq) goto loc_8236CDBC;
	// bl 0x8237c700
	ctx.lr = 0x8236CDA4;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31700
	ctx.r10.s64 = ctx.r11.s64 + 31700;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380a00
	ctx.lr = 0x8236CDB8;
	sub_82380A00(ctx, base);
	// b 0x8236cdc0
	goto loc_8236CDC0;
loc_8236CDBC:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8236CDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236CDC8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236ce7c
	if (ctx.cr6.eq) goto loc_8236CE7C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236CDD8;
	sub_8235BFA8(ctx, base);
	// stb r3,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r3.u8);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8236ce24
	if (ctx.cr6.eq) goto loc_8236CE24;
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
loc_8236CDEC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8236ce00
	if (ctx.cr6.eq) goto loc_8236CE00;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82357610
	ctx.lr = 0x8236CE00;
	sub_82357610(ctx, base);
loc_8236CE00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82380b28
	ctx.lr = 0x8236CE0C;
	sub_82380B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236ce64
	if (ctx.cr6.eq) goto loc_8236CE64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8236cdec
	if (ctx.cr6.lt) goto loc_8236CDEC;
loc_8236CE24:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// bne cr6,0x8236ce3c
	if (!ctx.cr6.eq) goto loc_8236CE3C;
	// li r4,30
	ctx.r4.s64 = 30;
loc_8236CE3C:
	// bl 0x8237c8c8
	ctx.lr = 0x8236CE40;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ce64
	if (ctx.cr6.eq) goto loc_8236CE64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236CE58;
	sub_8235E330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8236CE64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236CE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236CE7C:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x8236ce90
	goto loc_8236CE90;
loc_8236CE88:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
loc_8236CE90:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236CEA0;
	sub_8235E3A0(ctx, base);
loc_8236CEA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8236CEAC"))) PPC_WEAK_FUNC(sub_8236CEAC);
PPC_FUNC_IMPL(__imp__sub_8236CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236CEB0"))) PPC_WEAK_FUNC(sub_8236CEB0);
PPC_FUNC_IMPL(__imp__sub_8236CEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8236CEB8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236CED0;
	sub_8235E108(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236CED8;
	sub_8235BF58(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CEEC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236cf08
	if (!ctx.cr6.eq) goto loc_8236CF08;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236CF00;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236cf0c
	if (ctx.cr6.eq) goto loc_8236CF0C;
loc_8236CF08:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236CF0C:
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236CF1C;
	sub_8235E7D0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d09c
	if (!ctx.cr6.eq) goto loc_8236D09C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8236d084
	if (ctx.cr6.eq) goto loc_8236D084;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236cf48
	if (!ctx.cr6.eq) goto loc_8236CF48;
loc_8236CF3C:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// b 0x8236d08c
	goto loc_8236D08C;
loc_8236CF48:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236cf3c
	if (ctx.cr6.eq) goto loc_8236CF3C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357080
	ctx.lr = 0x8236CF58;
	sub_82357080(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8236d084
	if (ctx.cr6.gt) goto loc_8236D084;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236cf78
	// bdzf 4*cr6+eq,0x8236cf84
	// bne cr6,0x8236cf84
	if (!ctx.cr6.eq) goto loc_8236CF84;
loc_8236CF78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357c90
	ctx.lr = 0x8236CF80;
	sub_82357C90(ctx, base);
	// b 0x8236cf8c
	goto loc_8236CF8C;
loc_8236CF84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8236CF8C;
	sub_823A43C8(ctx, base);
loc_8236CF8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236d084
	if (ctx.cr6.eq) goto loc_8236D084;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236CFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d05c
	if (ctx.cr6.eq) goto loc_8236D05C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236CFBC;
	sub_823570E0(ctx, base);
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x823570f0
	ctx.lr = 0x8236CFC4;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236cfec
	if (ctx.cr6.eq) goto loc_8236CFEC;
	// bl 0x8237c700
	ctx.lr = 0x8236CFD4;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,31700
	ctx.r10.s64 = ctx.r11.s64 + 31700;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380a00
	ctx.lr = 0x8236CFE8;
	sub_82380A00(ctx, base);
	// b 0x8236cff0
	goto loc_8236CFF0;
loc_8236CFEC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236CFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236CFF8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236d05c
	if (ctx.cr6.eq) goto loc_8236D05C;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823808d8
	ctx.lr = 0x8236D00C;
	sub_823808D8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236D014;
	sub_8235BFA8(ctx, base);
	// stb r3,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r3.u8);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r26.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82357ec0
	ctx.lr = 0x8236D02C;
	sub_82357EC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236D03C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236d068
	if (!ctx.cr6.eq) goto loc_8236D068;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236D05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236D05C:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x8236d08c
	goto loc_8236D08C;
loc_8236D068:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236D078;
	sub_8235E330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8236D084:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
loc_8236D08C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D09C;
	sub_8235E3A0(ctx, base);
loc_8236D09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8236D0A8"))) PPC_WEAK_FUNC(sub_8236D0A8);
PPC_FUNC_IMPL(__imp__sub_8236D0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8236D0CC"))) PPC_WEAK_FUNC(sub_8236D0CC);
PPC_FUNC_IMPL(__imp__sub_8236D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D0D0"))) PPC_WEAK_FUNC(sub_8236D0D0);
PPC_FUNC_IMPL(__imp__sub_8236D0D0) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,31732
	ctx.r10.s64 = ctx.r11.s64 + 31732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823810d0
	ctx.lr = 0x8236D100;
	sub_823810D0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31588
	ctx.r7.s64 = ctx.r9.s64 + 31588;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236d124
	if (ctx.cr6.eq) goto loc_8236D124;
	// bl 0x82357128
	ctx.lr = 0x8236D120;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236D124:
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

__attribute__((alias("__imp__sub_8236D13C"))) PPC_WEAK_FUNC(sub_8236D13C);
PPC_FUNC_IMPL(__imp__sub_8236D13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D140"))) PPC_WEAK_FUNC(sub_8236D140);
PPC_FUNC_IMPL(__imp__sub_8236D140) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236D150"))) PPC_WEAK_FUNC(sub_8236D150);
PPC_FUNC_IMPL(__imp__sub_8236D150) {
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
	// addi r9,r11,31588
	ctx.r9.s64 = ctx.r11.s64 + 31588;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8236d184
	if (ctx.cr6.eq) goto loc_8236D184;
	// bl 0x82357128
	ctx.lr = 0x8236D180;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236D184:
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

__attribute__((alias("__imp__sub_8236D198"))) PPC_WEAK_FUNC(sub_8236D198);
PPC_FUNC_IMPL(__imp__sub_8236D198) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,31748
	ctx.r10.s64 = ctx.r11.s64 + 31748;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82381248
	ctx.lr = 0x8236D1C8;
	sub_82381248(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31588
	ctx.r7.s64 = ctx.r9.s64 + 31588;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236d1ec
	if (ctx.cr6.eq) goto loc_8236D1EC;
	// bl 0x82357128
	ctx.lr = 0x8236D1E8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236D1EC:
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

__attribute__((alias("__imp__sub_8236D204"))) PPC_WEAK_FUNC(sub_8236D204);
PPC_FUNC_IMPL(__imp__sub_8236D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D208"))) PPC_WEAK_FUNC(sub_8236D208);
PPC_FUNC_IMPL(__imp__sub_8236D208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236D210;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8237c700
	ctx.lr = 0x8236D21C;
	sub_8237C700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31756
	ctx.r9.s64 = ctx.r11.s64 + 31756;
	// addi r8,r10,31732
	ctx.r8.s64 = ctx.r10.s64 + 31732;
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82381060
	ctx.lr = 0x8236D250;
	sub_82381060(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r6,31740
	ctx.r5.s64 = ctx.r6.s64 + 31740;
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82380fa0
	ctx.lr = 0x8236D27C;
	sub_82380FA0(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r29,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r29.u8);
	// addi r10,r3,31748
	ctx.r10.s64 = ctx.r3.s64 + 31748;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823811f8
	ctx.lr = 0x8236D2A0;
	sub_823811F8(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236D2B0"))) PPC_WEAK_FUNC(sub_8236D2B0);
PPC_FUNC_IMPL(__imp__sub_8236D2B0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31756
	ctx.r9.s64 = ctx.r11.s64 + 31756;
	// addi r8,r10,31748
	ctx.r8.s64 = ctx.r10.s64 + 31748;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82381248
	ctx.lr = 0x8236D2EC;
	sub_82381248(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r30,r7,31588
	ctx.r30.s64 = ctx.r7.s64 + 31588;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x82380fd0
	ctx.lr = 0x8236D300;
	sub_82380FD0(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r5,r6,31732
	ctx.r5.s64 = ctx.r6.s64 + 31732;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bl 0x823810d0
	ctx.lr = 0x8236D31C;
	sub_823810D0(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x8236D328;
	sub_8237C738(ctx, base);
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

__attribute__((alias("__imp__sub_8236D340"))) PPC_WEAK_FUNC(sub_8236D340);
PPC_FUNC_IMPL(__imp__sub_8236D340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236D348;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236D358;
	sub_8235E108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236D360;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236D374;
	sub_8235E7D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d488
	if (!ctx.cr6.eq) goto loc_8236D488;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236d3b0
	if (!ctx.cr6.eq) goto loc_8236D3B0;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D3A4;
	sub_8235E3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236D3B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8236d3dc
	if (!ctx.cr6.eq) goto loc_8236D3DC;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D3D0;
	sub_8235E3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236D3DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236D3E4;
	sub_823570E0(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x823570f0
	ctx.lr = 0x8236D3EC;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236d400
	if (ctx.cr6.eq) goto loc_8236D400;
	// bl 0x8236d208
	ctx.lr = 0x8236D3F8;
	sub_8236D208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8236d404
	goto loc_8236D404;
loc_8236D400:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236D404:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236D40C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236d454
	if (ctx.cr6.eq) goto loc_8236D454;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236D41C;
	sub_8235BFA8(ctx, base);
	// stb r3,104(r30)
	PPC_STORE_U8(ctx.r30.u32 + 104, ctx.r3.u8);
	// stw r28,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r28.u32);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236D434;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236d478
	if (!ctx.cr6.eq) goto loc_8236D478;
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
	ctx.lr = 0x8236D454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236D454:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D46C;
	sub_8235E3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236D478:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236D488;
	sub_8235E330(ctx, base);
loc_8236D488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236D494"))) PPC_WEAK_FUNC(sub_8236D494);
PPC_FUNC_IMPL(__imp__sub_8236D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D498"))) PPC_WEAK_FUNC(sub_8236D498);
PPC_FUNC_IMPL(__imp__sub_8236D498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236D4A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236D4B0;
	sub_8235E108(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8236d4e4
	if (!ctx.cr6.eq) goto loc_8236D4E4;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D4C8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d4f8
	if (!ctx.cr6.eq) goto loc_8236D4F8;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D4DC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d4f8
	if (!ctx.cr6.eq) goto loc_8236D4F8;
loc_8236D4E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c798
	ctx.lr = 0x8236D4F0;
	sub_8237C798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236D4F8:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236D504"))) PPC_WEAK_FUNC(sub_8236D504);
PPC_FUNC_IMPL(__imp__sub_8236D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D508"))) PPC_WEAK_FUNC(sub_8236D508);
PPC_FUNC_IMPL(__imp__sub_8236D508) {
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
	// bl 0x8236d2b0
	ctx.lr = 0x8236D528;
	sub_8236D2B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d540
	if (ctx.cr6.eq) goto loc_8236D540;
	// bl 0x82357128
	ctx.lr = 0x8236D53C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236D540:
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

__attribute__((alias("__imp__sub_8236D558"))) PPC_WEAK_FUNC(sub_8236D558);
PPC_FUNC_IMPL(__imp__sub_8236D558) {
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
	// bl 0x8237c700
	ctx.lr = 0x8236D570;
	sub_8237C700(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82381348
	ctx.lr = 0x8236D578;
	sub_82381348(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r11,31788
	ctx.r10.s64 = ctx.r11.s64 + 31788;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237c5a0
	ctx.lr = 0x8236D58C;
	sub_8237C5A0(ctx, base);
	// addi r3,r31,1320
	ctx.r3.s64 = ctx.r31.s64 + 1320;
	// bl 0x8237ff88
	ctx.lr = 0x8236D594;
	sub_8237FF88(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8236D5B4"))) PPC_WEAK_FUNC(sub_8236D5B4);
PPC_FUNC_IMPL(__imp__sub_8236D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236D5B8"))) PPC_WEAK_FUNC(sub_8236D5B8);
PPC_FUNC_IMPL(__imp__sub_8236D5B8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// bl 0x82357088
	ctx.lr = 0x8236D5EC;
	sub_82357088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236D5F8;
	sub_8237C4E8(ctx, base);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r9.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r8,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r7,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r7.u32);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r6,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stw r5,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r5.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r10.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r9,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r9.u32);
	// lwz r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r8,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r7,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r6,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r6.u32);
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r5,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r5.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// lwz r5,1260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// bl 0x8237c538
	ctx.lr = 0x8236D670;
	sub_8237C538(ctx, base);
	// lwz r10,1264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// stw r10,1264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1264, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8236D690"))) PPC_WEAK_FUNC(sub_8236D690);
PPC_FUNC_IMPL(__imp__sub_8236D690) {
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
	// addi r3,r3,1320
	ctx.r3.s64 = ctx.r3.s64 + 1320;
	// addi r10,r11,31788
	ctx.r10.s64 = ctx.r11.s64 + 31788;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82380030
	ctx.lr = 0x8236D6C0;
	sub_82380030(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8237c648
	ctx.lr = 0x8236D6C8;
	sub_8237C648(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x823ab568
	ctx.lr = 0x8236D6D0;
	sub_823AB568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c738
	ctx.lr = 0x8236D6D8;
	sub_8237C738(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8236d6f0
	if (ctx.cr6.eq) goto loc_8236D6F0;
	// bl 0x82357128
	ctx.lr = 0x8236D6EC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236D6F0:
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

__attribute__((alias("__imp__sub_8236D708"))) PPC_WEAK_FUNC(sub_8236D708);
PPC_FUNC_IMPL(__imp__sub_8236D708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x8236D710;
	sub_82248760(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236D738;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236D740;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r31,2992(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2992, ctx.r31.u32);
	// stw r31,2996(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2996, ctx.r31.u32);
	// bl 0x8235e2a8
	ctx.lr = 0x8236D760;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D774;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D788;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D79C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D7B0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D7C4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D7D8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D7EC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D800;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D814;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D828;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D83C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D850;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D864;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236d880
	if (!ctx.cr6.eq) goto loc_8236D880;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236D878;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236d884
	if (ctx.cr6.eq) goto loc_8236D884;
loc_8236D880:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_8236D884:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lwz r11,3000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236d8d4
	if (ctx.cr6.eq) goto loc_8236D8D4;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x8235e7d0
	ctx.lr = 0x8236D8B4;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D8C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236d8c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D8C4;
	// b 0x8236d8f8
	goto loc_8236D8F8;
loc_8236D8D4:
	// li r5,42
	ctx.r5.s64 = 42;
	// bl 0x8235e7d0
	ctx.lr = 0x8236D8DC;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D8EC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236d8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D8EC;
loc_8236D8F8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d92c
	if (ctx.cr6.eq) goto loc_8236D92C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D914:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236d914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D914;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236D92C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236D934;
	sub_8235C0D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8236D93C;
	sub_82362380(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236d988
	if (!ctx.cr6.eq) goto loc_8236D988;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D960;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D970:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236d970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D970;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236D988:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236d9d4
	if (!ctx.cr6.eq) goto loc_8236D9D4;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D9AC;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D9BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236d9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D9BC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236D9D4:
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8236da20
	if (ctx.cr6.eq) goto loc_8236DA20;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236D9F8;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DA08:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236da08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DA08;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DA20:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8236da68
	if (!ctx.cr6.eq) goto loc_8236DA68;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DA40;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DA50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236da50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DA50;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DA68:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236DA70;
	sub_823570E0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x823570f0
	ctx.lr = 0x8236DA78;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236da88
	if (ctx.cr6.eq) goto loc_8236DA88;
	// bl 0x8236d558
	ctx.lr = 0x8236DA84;
	sub_8236D558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8236DA88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236DA90;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236dad8
	if (!ctx.cr6.eq) goto loc_8236DAD8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DAB0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DAC0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236dac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DAC0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DAD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236DAE0;
	sub_8235BFA8(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// stb r3,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r3.u8);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r21,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r21.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r20,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r20.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r19,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r19.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// stw r5,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r5.u32);
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// stw r22,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r22.u32);
	// stw r24,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r24.u32);
	// beq cr6,0x8236db40
	if (ctx.cr6.eq) goto loc_8236DB40;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82381358
	ctx.lr = 0x8236DB34;
	sub_82381358(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
loc_8236DB40:
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236DB50;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236db70
	if (ctx.cr6.eq) goto loc_8236DB70;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237c538
	ctx.lr = 0x8236DB68;
	sub_8237C538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dbc8
	if (!ctx.cr6.eq) goto loc_8236DBC8;
loc_8236DB70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236DB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DBA0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DBB0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236dbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DBB0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DBC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,1320
	ctx.r29.s64 = ctx.r31.s64 + 1320;
	// bl 0x8235bfa8
	ctx.lr = 0x8236DBD4;
	sub_8235BFA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82380450
	ctx.lr = 0x8236DBE0;
	sub_82380450(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x8236DBEC;
	sub_82358260(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235bf68
	ctx.lr = 0x8236DBF8;
	sub_8235BF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd80
	ctx.lr = 0x8236DC04;
	sub_8237FD80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358390
	ctx.lr = 0x8236DC0C;
	sub_82358390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823622c8
	ctx.lr = 0x8236DC14;
	sub_823622C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd88
	ctx.lr = 0x8236DC20;
	sub_8237FD88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x8236DC28;
	sub_82356EB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8236DC30;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd20
	ctx.lr = 0x8236DC3C;
	sub_8237FD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dc9c
	if (!ctx.cr6.eq) goto loc_8236DC9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236DC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DC74;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DC84:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236dc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DC84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DC9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82358260
	ctx.lr = 0x8236DCA8;
	sub_82358260(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236DCB8;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236dd18
	if (!ctx.cr6.eq) goto loc_8236DD18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236DCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DCF0;
	sub_8235E3A0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DD00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236dd00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DD00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8236DD18:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236DD28;
	sub_8235E330(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236DD38:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236dd38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DD38;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_8236DD50"))) PPC_WEAK_FUNC(sub_8236DD50);
PPC_FUNC_IMPL(__imp__sub_8236DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8236DD58;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236DD68;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236DD70;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DD84;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DD98;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DDAC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DDC0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DDD4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DDE8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DDFC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE10;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE24;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE38;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE4C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE60;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE74;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE88;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dea4
	if (!ctx.cr6.eq) goto loc_8236DEA4;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236DE9C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236dea8
	if (ctx.cr6.eq) goto loc_8236DEA8;
loc_8236DEA4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236DEA8:
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236DEB8;
	sub_8235E7D0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236dfe4
	if (!ctx.cr6.eq) goto loc_8236DFE4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236def4
	if (!ctx.cr6.eq) goto loc_8236DEF4;
loc_8236DED0:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DEE8;
	sub_8235E3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236DEF4:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236df08
	if (ctx.cr6.eq) goto loc_8236DF08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236ded0
	if (!ctx.cr6.eq) goto loc_8236DED0;
loc_8236DF08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236ded0
	if (ctx.cr6.eq) goto loc_8236DED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236DF18;
	sub_823570E0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x823570f0
	ctx.lr = 0x8236DF20;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236df34
	if (ctx.cr6.eq) goto loc_8236DF34;
	// bl 0x8236d558
	ctx.lr = 0x8236DF2C;
	sub_8236D558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8236df38
	goto loc_8236DF38;
loc_8236DF34:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236DF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236DF40;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236df8c
	if (ctx.cr6.eq) goto loc_8236DF8C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236DF50;
	sub_8235BFA8(ctx, base);
	// stb r3,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// bl 0x8235c0d8
	ctx.lr = 0x8236DF60;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236DF6C;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dfb0
	if (!ctx.cr6.eq) goto loc_8236DFB0;
loc_8236DF74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236DF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236DF8C:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236DFA4;
	sub_8235E3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236DFB0:
	// lwz r11,3000(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3000);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r26.u32);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236DFCC;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236df74
	if (ctx.cr6.eq) goto loc_8236DF74;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236DFE4;
	sub_8235E330(ctx, base);
loc_8236DFE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8236DFF0"))) PPC_WEAK_FUNC(sub_8236DFF0);
PPC_FUNC_IMPL(__imp__sub_8236DFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8236DFF8;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236E00C;
	sub_8235E108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236E014;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E028;
	sub_8235E2A8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E040;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E054;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E068;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E07C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E090;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E0A4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E0B8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E0CC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E0E0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E0F4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E108;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E11C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E130;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e14c
	if (!ctx.cr6.eq) goto loc_8236E14C;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E144;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e150
	if (ctx.cr6.eq) goto loc_8236E150;
loc_8236E14C:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8236E150:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// beq cr6,0x8236e19c
	if (ctx.cr6.eq) goto loc_8236E19C;
	// li r5,46
	ctx.r5.s64 = 46;
	// bl 0x8235e7d0
	ctx.lr = 0x8236E17C;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236E18C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236e18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E18C;
	// b 0x8236e1c0
	goto loc_8236E1C0;
loc_8236E19C:
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x8235e7d0
	ctx.lr = 0x8236E1A4;
	sub_8235E7D0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236E1B4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236e1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E1B4;
loc_8236E1C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236e2f8
	if (!ctx.cr6.eq) goto loc_8236E2F8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e1fc
	if (!ctx.cr6.eq) goto loc_8236E1FC;
loc_8236E1D8:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236E1F0;
	sub_8235E3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236E1FC:
	// lwz r11,788(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236e1d8
	if (!ctx.cr6.eq) goto loc_8236E1D8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8236e1d8
	if (ctx.cr6.eq) goto loc_8236E1D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236E218;
	sub_823570E0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x823570f0
	ctx.lr = 0x8236E220;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236e230
	if (ctx.cr6.eq) goto loc_8236E230;
	// bl 0x8236d558
	ctx.lr = 0x8236E22C;
	sub_8236D558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8236E230:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236E238;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236e284
	if (ctx.cr6.eq) goto loc_8236E284;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236E248;
	sub_8235BFA8(ctx, base);
	// stb r3,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// bl 0x8235c0d8
	ctx.lr = 0x8236E258;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236E264;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e2a8
	if (!ctx.cr6.eq) goto loc_8236E2A8;
loc_8236E26C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236E284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236E284:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236E29C;
	sub_8235E3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8236E2A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// beq cr6,0x8236e2d0
	if (ctx.cr6.eq) goto loc_8236E2D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82381358
	ctx.lr = 0x8236E2C4;
	sub_82381358(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
loc_8236E2D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236E2E0;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236e26c
	if (ctx.cr6.eq) goto loc_8236E26C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236E2F8;
	sub_8235E330(ctx, base);
loc_8236E2F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8236E304"))) PPC_WEAK_FUNC(sub_8236E304);
PPC_FUNC_IMPL(__imp__sub_8236E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236E308"))) PPC_WEAK_FUNC(sub_8236E308);
PPC_FUNC_IMPL(__imp__sub_8236E308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236E310;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236E31C;
	sub_8235E108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236E324;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E338;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E34C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E360;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E374;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E388;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E39C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E3B0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E3C4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E3D8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E3EC;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E400;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E414;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E428;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E43C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e458
	if (!ctx.cr6.eq) goto loc_8236E458;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E450;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e45c
	if (ctx.cr6.eq) goto loc_8236E45C;
loc_8236E458:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236E45C:
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e7d0
	ctx.lr = 0x8236E46C;
	sub_8235E7D0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236e58c
	if (!ctx.cr6.eq) goto loc_8236E58C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e4a8
	if (!ctx.cr6.eq) goto loc_8236E4A8;
loc_8236E484:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236E49C;
	sub_8235E3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236E4A8:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236e484
	if (!ctx.cr6.eq) goto loc_8236E484;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236e484
	if (ctx.cr6.eq) goto loc_8236E484;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8236E4C4;
	sub_823570E0(ctx, base);
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x823570f0
	ctx.lr = 0x8236E4CC;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236e4e0
	if (ctx.cr6.eq) goto loc_8236E4E0;
	// bl 0x8236d558
	ctx.lr = 0x8236E4D8;
	sub_8236D558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8236e4e4
	goto loc_8236E4E4;
loc_8236E4E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236E4E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236E4EC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236e538
	if (ctx.cr6.eq) goto loc_8236E538;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x8236E4FC;
	sub_8235BFA8(ctx, base);
	// stb r3,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// bl 0x8235c0d8
	ctx.lr = 0x8236E50C;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237c4e8
	ctx.lr = 0x8236E518;
	sub_8237C4E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e55c
	if (!ctx.cr6.eq) goto loc_8236E55C;
loc_8236E520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236E538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236E538:
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e3a0
	ctx.lr = 0x8236E550;
	sub_8235E3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236E55C:
	// lwz r11,3000(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3000);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x8237c8c8
	ctx.lr = 0x8236E574;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236e520
	if (ctx.cr6.eq) goto loc_8236E520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e330
	ctx.lr = 0x8236E58C;
	sub_8235E330(ctx, base);
loc_8236E58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236E598"))) PPC_WEAK_FUNC(sub_8236E598);
PPC_FUNC_IMPL(__imp__sub_8236E598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236E5A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235e108
	ctx.lr = 0x8236E5B0;
	sub_8235E108(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// blt cr6,0x8236e60c
	if (ctx.cr6.lt) goto loc_8236E60C;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bgt cr6,0x8236e60c
	if (ctx.cr6.gt) goto loc_8236E60C;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E5D0;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e600
	if (!ctx.cr6.eq) goto loc_8236E600;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E5E4;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e600
	if (!ctx.cr6.eq) goto loc_8236E600;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8236E5F8;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e60c
	if (ctx.cr6.eq) goto loc_8236E60C;
loc_8236E600:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236E60C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c798
	ctx.lr = 0x8236E618;
	sub_8237C798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236E620"))) PPC_WEAK_FUNC(sub_8236E620);
PPC_FUNC_IMPL(__imp__sub_8236E620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236E628;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236E634;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236E63C;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,1944
	ctx.r5.s64 = ctx.r31.s64 + 1944;
	// lwz r8,248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r7,3000(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// lwz r6,2968(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2968);
	// lwz r4,1940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236E660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c908
	ctx.lr = 0x8236E66C;
	sub_8235C908(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236E670;
	sub_82362380(ctx, base);
	// lfs f1,2972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2972);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82362390
	ctx.lr = 0x8236E678;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236E67C;
	sub_8235B1F8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2972);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236E69C;
	sub_8235B5A8(ctx, base);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,3040
	ctx.r3.s64 = ctx.r31.s64 + 3040;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236d5b8
	ctx.lr = 0x8236E6AC;
	sub_8236D5B8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,2996(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2996);
	// stw r27,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r27.u32);
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236e70c
	if (ctx.cr6.eq) goto loc_8236E70C;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e6dc
	if (!ctx.cr6.eq) goto loc_8236E6DC;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e70c
	if (ctx.cr6.eq) goto loc_8236E70C;
loc_8236E6DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236E6E4;
	sub_8237CF58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236E6F4;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236e718
	if (!ctx.cr6.eq) goto loc_8236E718;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
loc_8236E70C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236E718:
	// stw r28,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236E728"))) PPC_WEAK_FUNC(sub_8236E728);
PPC_FUNC_IMPL(__imp__sub_8236E728) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236E740;
	sub_8235BF58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235c908
	ctx.lr = 0x8236E748;
	sub_8235C908(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8236e788
	if (!ctx.cr6.eq) goto loc_8236E788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236E75C;
	sub_8237CF58(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236E76C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236e7a0
	if (!ctx.cr6.eq) goto loc_8236E7A0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8236E788:
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
loc_8236E7A0:
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

__attribute__((alias("__imp__sub_8236E7B8"))) PPC_WEAK_FUNC(sub_8236E7B8);
PPC_FUNC_IMPL(__imp__sub_8236E7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236E7C0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236E7CC;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235cf68
	ctx.lr = 0x8236E7D4;
	sub_8235CF68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,3000(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3000);
	// lwz r4,1312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236E7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8235c270
	ctx.lr = 0x8236E7FC;
	sub_8235C270(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c908
	ctx.lr = 0x8236E808;
	sub_8235C908(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236E80C;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236E818;
	sub_8235C048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362390
	ctx.lr = 0x8236E820;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236E824;
	sub_8235B1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236E830;
	sub_8235C048(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,10412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236E850;
	sub_8235B5A8(ctx, base);
	// lwz r8,248(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8236e874
	if (!ctx.cr6.eq) goto loc_8236E874;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e874
	if (!ctx.cr6.eq) goto loc_8236E874;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236E874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236E87C;
	sub_8237CF58(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236E88C;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236e8b4
	if (!ctx.cr6.eq) goto loc_8236E8B4;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236E8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236E8C0"))) PPC_WEAK_FUNC(sub_8236E8C0);
PPC_FUNC_IMPL(__imp__sub_8236E8C0) {
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
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236e9c0
	if (ctx.cr6.eq) goto loc_8236E9C0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82381370
	ctx.lr = 0x8236E8F4;
	sub_82381370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8236e9c0
	if (ctx.cr6.gt) goto loc_8236E9C0;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236e9c0
	if (!ctx.cr6.eq) goto loc_8236E9C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8236E91C;
	sub_8235BF58(ctx, base);
	// lwz r10,1576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e988
	if (!ctx.cr6.eq) goto loc_8236E988;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8235c228
	ctx.lr = 0x8236E940;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e954
	if (ctx.cr6.eq) goto loc_8236E954;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
loc_8236E954:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236E960;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e97c
	if (!ctx.cr6.eq) goto loc_8236E97C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236E974;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e9c0
	if (ctx.cr6.eq) goto loc_8236E9C0;
loc_8236E97C:
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// b 0x8236e9ac
	goto loc_8236E9AC;
loc_8236E988:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236e9c0
	if (!ctx.cr6.eq) goto loc_8236E9C0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236E99C;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e9c0
	if (ctx.cr6.eq) goto loc_8236E9C0;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
loc_8236E9AC:
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c270
	ctx.lr = 0x8236E9C0;
	sub_8235C270(ctx, base);
loc_8236E9C0:
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

__attribute__((alias("__imp__sub_8236E9D8"))) PPC_WEAK_FUNC(sub_8236E9D8);
PPC_FUNC_IMPL(__imp__sub_8236E9D8) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236E9F4;
	sub_8235BF58(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ea68
	if (ctx.cr6.eq) goto loc_8236EA68;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236ea68
	if (!ctx.cr6.eq) goto loc_8236EA68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236EA1C;
	sub_8237CF58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236EA38;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236ea54
	if (!ctx.cr6.eq) goto loc_8236EA54;
loc_8236EA40:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x8236eb14
	goto loc_8236EB14;
loc_8236EA54:
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
	// b 0x8236eb18
	goto loc_8236EB18;
loc_8236EA68:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236EA74;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236eb00
	if (!ctx.cr6.eq) goto loc_8236EB00;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ead8
	if (ctx.cr6.eq) goto loc_8236EAD8;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236ead8
	if (!ctx.cr6.eq) goto loc_8236EAD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236EAA0;
	sub_8237CF58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// li r4,41
	ctx.r4.s64 = 41;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236EABC;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ea40
	if (ctx.cr6.eq) goto loc_8236EA40;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
	// b 0x8236eb18
	goto loc_8236EB18;
loc_8236EAD8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236EAE4;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236eb00
	if (!ctx.cr6.eq) goto loc_8236EB00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c228
	ctx.lr = 0x8236EAF8;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236eb14
	if (ctx.cr6.eq) goto loc_8236EB14;
loc_8236EB00:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8236EB14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236EB18:
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

__attribute__((alias("__imp__sub_8236EB30"))) PPC_WEAK_FUNC(sub_8236EB30);
PPC_FUNC_IMPL(__imp__sub_8236EB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8236EB38;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236EB4C;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,41
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 41, ctx.xer);
	// bne cr6,0x8236eb64
	if (!ctx.cr6.eq) goto loc_8236EB64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8235c270
	ctx.lr = 0x8236EB64;
	sub_8235C270(ctx, base);
loc_8236EB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e8c0
	ctx.lr = 0x8236EB70;
	sub_8236E8C0(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236eb8c
	if (ctx.cr6.eq) goto loc_8236EB8C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236ebec
	if (!ctx.cr6.eq) goto loc_8236EBEC;
loc_8236EB8C:
	// bl 0x82362380
	ctx.lr = 0x8236EB90;
	sub_82362380(ctx, base);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,2996(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2996);
	// bl 0x82381370
	ctx.lr = 0x8236EBA0;
	sub_82381370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8236ec60
	if (!ctx.cr6.gt) goto loc_8236EC60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381378
	ctx.lr = 0x8236EBB0;
	sub_82381378(ctx, base);
	// cmpwi cr6,r26,42
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 42, ctx.xer);
	// beq cr6,0x8236ebfc
	if (ctx.cr6.eq) goto loc_8236EBFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381358
	ctx.lr = 0x8236EBC4;
	sub_82381358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e8c0
	ctx.lr = 0x8236EBD0;
	sub_8236E8C0(ctx, base);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236ec60
	if (ctx.cr6.eq) goto loc_8236EC60;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ec60
	if (ctx.cr6.eq) goto loc_8236EC60;
loc_8236EBEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e9d8
	ctx.lr = 0x8236EBF4;
	sub_8236E9D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236EBFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237cf58
	ctx.lr = 0x8236EC04;
	sub_8237CF58(ctx, base);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r4,r29,3040
	ctx.r4.s64 = ctx.r29.s64 + 3040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,260(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8236d5b8
	ctx.lr = 0x8236EC18;
	sub_8236D5B8(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8236EC1C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8236EC20;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8236EC24;
	sub_82370800(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// li r4,41
	ctx.r4.s64 = 41;
	// stw r28,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236EC44;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236ec6c
	if (!ctx.cr6.eq) goto loc_8236EC6C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8236EC60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236EC6C:
	// stw r27,2996(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2996, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8236EC7C"))) PPC_WEAK_FUNC(sub_8236EC7C);
PPC_FUNC_IMPL(__imp__sub_8236EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236EC80"))) PPC_WEAK_FUNC(sub_8236EC80);
PPC_FUNC_IMPL(__imp__sub_8236EC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8236EC88;
	sub_82248768(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236EC94;
	sub_8235BF58(ctx, base);
	// addi r25,r22,1320
	ctx.r25.s64 = ctx.r22.s64 + 1320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82357608
	ctx.lr = 0x8236ECA4;
	sub_82357608(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x823ac650
	ctx.lr = 0x8236ECB8;
	sub_823AC650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236edc0
	if (ctx.cr6.eq) goto loc_8236EDC0;
loc_8236ECC0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237ff00
	ctx.lr = 0x8236ECCC;
	sub_8237FF00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236b2c8
	ctx.lr = 0x8236ECD8;
	sub_8236B2C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fd90
	ctx.lr = 0x8236ECE4;
	sub_8237FD90(ctx, base);
	// lwz r27,800(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236edac
	if (ctx.cr6.eq) goto loc_8236EDAC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8236ECFC:
	// lwz r11,796(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 796);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// bl 0x82357bb8
	ctx.lr = 0x8236ED10;
	sub_82357BB8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357bb8
	ctx.lr = 0x8236ED1C;
	sub_82357BB8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82357048
	ctx.lr = 0x8236ED24;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ed40
	if (!ctx.cr6.eq) goto loc_8236ED40;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8236ecfc
	if (ctx.cr6.lt) goto loc_8236ECFC;
	// b 0x8236edac
	goto loc_8236EDAC;
loc_8236ED40:
	// lwz r11,800(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 800);
	// addi r30,r24,792
	ctx.r30.s64 = ctx.r24.s64 + 792;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236edac
	if (!ctx.cr6.lt) goto loc_8236EDAC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236edac
	if (ctx.cr6.eq) goto loc_8236EDAC;
	// mulli r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 * 120;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236ED78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8236eda0
	if (!ctx.cr6.lt) goto loc_8236EDA0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236aba0
	ctx.lr = 0x8236EDA0;
	sub_8236ABA0(ctx, base);
loc_8236EDA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8236EDAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823ac650
	ctx.lr = 0x8236EDB8;
	sub_823AC650(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8236ecc0
	if (ctx.cr6.lt) goto loc_8236ECC0;
loc_8236EDC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x823ac5c0
	ctx.lr = 0x8236EDCC;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ef48
	if (ctx.cr6.eq) goto loc_8236EF48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r24,792
	ctx.r29.s64 = ctx.r24.s64 + 792;
	// addi r28,r11,30604
	ctx.r28.s64 = ctx.r11.s64 + 30604;
	// addi r27,r10,31580
	ctx.r27.s64 = ctx.r10.s64 + 31580;
loc_8236EDE8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237ff70
	ctx.lr = 0x8236EDF4;
	sub_8237FF70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fdc0
	ctx.lr = 0x8236EE04;
	sub_8237FDC0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237fdd8
	ctx.lr = 0x8236EE14;
	sub_8237FDD8(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579a0
	ctx.lr = 0x8236EE24;
	sub_823579A0(ctx, base);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82370088
	ctx.lr = 0x8236EE30;
	sub_82370088(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82357c30
	ctx.lr = 0x8236EE40;
	sub_82357C30(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82370360
	ctx.lr = 0x8236EE4C;
	sub_82370360(ctx, base);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236ee80
	if (ctx.cr6.gt) goto loc_8236EE80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b388
	ctx.lr = 0x8236EE70;
	sub_8236B388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ee80
	if (!ctx.cr6.eq) goto loc_8236EE80;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x8236ef14
	goto loc_8236EF14;
loc_8236EE80:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236ee94
	if (!ctx.cr6.eq) goto loc_8236EE94;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x8236ef14
	goto loc_8236EF14;
loc_8236EE94:
	// mulli r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 * 120;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8236eedc
	if (ctx.cr0.eq) goto loc_8236EEDC;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823579a0
	ctx.lr = 0x8236EEB4;
	sub_823579A0(ctx, base);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8236EEC4;
	sub_82370088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357c30
	ctx.lr = 0x8236EED0;
	sub_82357C30(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82370360
	ctx.lr = 0x8236EEDC;
	sub_82370360(ctx, base);
loc_8236EEDC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82357c30
	ctx.lr = 0x8236EEF0;
	sub_82357C30(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82370360
	ctx.lr = 0x8236EEFC;
	sub_82370360(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_8236EF14:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// bl 0x823700d8
	ctx.lr = 0x8236EF24;
	sub_823700D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823579f8
	ctx.lr = 0x8236EF2C;
	sub_823579F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236efc0
	if (ctx.cr6.eq) goto loc_8236EFC0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823ac5c0
	ctx.lr = 0x8236EF40;
	sub_823AC5C0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8236ede8
	if (ctx.cr6.lt) goto loc_8236EDE8;
loc_8236EF48:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c068
	ctx.lr = 0x8236EF54;
	sub_8235C068(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8236EF58;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236EF64;
	sub_8235C048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362390
	ctx.lr = 0x8236EF6C;
	sub_82362390(ctx, base);
	// bl 0x8235b1f8
	ctx.lr = 0x8236EF70;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c048
	ctx.lr = 0x8236EF7C;
	sub_8235C048(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8236EF9C;
	sub_8235B5A8(ctx, base);
	// addi r5,r22,48
	ctx.r5.s64 = ctx.r22.s64 + 48;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8237c8c8
	ctx.lr = 0x8236EFAC;
	sub_8237C8C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236efc0
	if (ctx.cr6.eq) goto loc_8236EFC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8236EFC0:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r23,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r23.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r10.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8236EFDC"))) PPC_WEAK_FUNC(sub_8236EFDC);
PPC_FUNC_IMPL(__imp__sub_8236EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236EFE0"))) PPC_WEAK_FUNC(sub_8236EFE0);
PPC_FUNC_IMPL(__imp__sub_8236EFE0) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236F000;
	sub_8235BF58(ctx, base);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236f028
	if (ctx.cr6.eq) goto loc_8236F028;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f028
	if (ctx.cr6.eq) goto loc_8236F028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e9d8
	ctx.lr = 0x8236F024;
	sub_8236E9D8(ctx, base);
	// b 0x8236f0c4
	goto loc_8236F0C4;
loc_8236F028:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r31,43
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 43, ctx.xer);
	// bgt cr6,0x8236f0a8
	if (ctx.cr6.gt) goto loc_8236F0A8;
	// beq cr6,0x8236f09c
	if (ctx.cr6.eq) goto loc_8236F09C;
	// cmpwi cr6,r31,41
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 41, ctx.xer);
	// bgt cr6,0x8236f078
	if (ctx.cr6.gt) goto loc_8236F078;
	// beq cr6,0x8236f06c
	if (ctx.cr6.eq) goto loc_8236F06C;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// beq cr6,0x8236f060
	if (ctx.cr6.eq) goto loc_8236F060;
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// bne cr6,0x8236f0c4
	if (!ctx.cr6.eq) goto loc_8236F0C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e620
	ctx.lr = 0x8236F05C;
	sub_8236E620(ctx, base);
	// b 0x8236f0c4
	goto loc_8236F0C4;
loc_8236F060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ec80
	ctx.lr = 0x8236F068;
	sub_8236EC80(ctx, base);
	// b 0x8236f0c4
	goto loc_8236F0C4;
loc_8236F06C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e7b8
	ctx.lr = 0x8236F074;
	sub_8236E7B8(ctx, base);
	// b 0x8236f0c4
	goto loc_8236F0C4;
loc_8236F078:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bne cr6,0x8236f0c4
	if (!ctx.cr6.eq) goto loc_8236F0C4;
	// bl 0x8235bf58
	ctx.lr = 0x8236F084;
	sub_8235BF58(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235c908
	ctx.lr = 0x8236F090;
	sub_8235C908(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// b 0x8236f0c0
	goto loc_8236F0C0;
loc_8236F09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e728
	ctx.lr = 0x8236F0A4;
	sub_8236E728(ctx, base);
	// b 0x8236f0c4
	goto loc_8236F0C4;
loc_8236F0A8:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// beq cr6,0x8236f0c0
	if (ctx.cr6.eq) goto loc_8236F0C0;
	// cmpwi cr6,r31,45
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 45, ctx.xer);
	// beq cr6,0x8236f0c0
	if (ctx.cr6.eq) goto loc_8236F0C0;
	// cmpwi cr6,r31,46
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 46, ctx.xer);
	// bne cr6,0x8236f0c4
	if (!ctx.cr6.eq) goto loc_8236F0C4;
loc_8236F0C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236F0C4:
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

__attribute__((alias("__imp__sub_8236F0DC"))) PPC_WEAK_FUNC(sub_8236F0DC);
PPC_FUNC_IMPL(__imp__sub_8236F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F0E0"))) PPC_WEAK_FUNC(sub_8236F0E0);
PPC_FUNC_IMPL(__imp__sub_8236F0E0) {
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
	// bl 0x82372ae0
	ctx.lr = 0x8236F100;
	sub_82372AE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236f110
	if (ctx.cr0.eq) goto loc_8236F110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x8236F110;
	sub_82357128(ctx, base);
loc_8236F110:
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

__attribute__((alias("__imp__sub_8236F12C"))) PPC_WEAK_FUNC(sub_8236F12C);
PPC_FUNC_IMPL(__imp__sub_8236F12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F130"))) PPC_WEAK_FUNC(sub_8236F130);
PPC_FUNC_IMPL(__imp__sub_8236F130) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31836
	ctx.r9.s64 = ctx.r11.s64 + 31836;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8236F168;
	sub_82370088(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82356e70
	ctx.lr = 0x8236F170;
	sub_82356E70(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8236F18C;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8236F1A8;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_8236F1C0"))) PPC_WEAK_FUNC(sub_8236F1C0);
PPC_FUNC_IMPL(__imp__sub_8236F1C0) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236F1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236F1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8236F210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8236F224;
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

__attribute__((alias("__imp__sub_8236F238"))) PPC_WEAK_FUNC(sub_8236F238);
PPC_FUNC_IMPL(__imp__sub_8236F238) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,31836
	ctx.r8.s64 = ctx.r11.s64 + 31836;
	// addi r7,r10,30596
	ctx.r7.s64 = ctx.r10.s64 + 30596;
	// addi r6,r9,30588
	ctx.r6.s64 = ctx.r9.s64 + 30588;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356eb8
	ctx.lr = 0x8236F280;
	sub_82356EB8(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r4,r5,30604
	ctx.r4.s64 = ctx.r5.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bl 0x823700d8
	ctx.lr = 0x8236F298;
	sub_823700D8(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236f2b0
	if (ctx.cr6.eq) goto loc_8236F2B0;
	// bl 0x82357128
	ctx.lr = 0x8236F2AC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236F2B0:
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

__attribute__((alias("__imp__sub_8236F2C8"))) PPC_WEAK_FUNC(sub_8236F2C8);
PPC_FUNC_IMPL(__imp__sub_8236F2C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,31856
	ctx.r10.s64 = ctx.r11.s64 + 31856;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8236f300
	if (ctx.cr6.eq) goto loc_8236F300;
	// bl 0x82357128
	ctx.lr = 0x8236F2F8;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8236F300:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8236F320"))) PPC_WEAK_FUNC(sub_8236F320);
PPC_FUNC_IMPL(__imp__sub_8236F320) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f350
	if (ctx.cr6.eq) goto loc_8236F350;
	// bl 0x82357128
	ctx.lr = 0x8236F344;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8236f354
	goto loc_8236F354;
loc_8236F350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236F354:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8236F36C"))) PPC_WEAK_FUNC(sub_8236F36C);
PPC_FUNC_IMPL(__imp__sub_8236F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F370"))) PPC_WEAK_FUNC(sub_8236F370);
PPC_FUNC_IMPL(__imp__sub_8236F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236F378;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f3a0
	if (ctx.cr6.eq) goto loc_8236F3A0;
	// bl 0x82357128
	ctx.lr = 0x8236F39C;
	sub_82357128(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8236F3A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x8236f3f4
	if (ctx.cr6.eq) goto loc_8236F3F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f3f4
	if (ctx.cr6.eq) goto loc_8236F3F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8236F3BC;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x8236F3C4;
	sub_823570F0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236F3D0;
	sub_823570E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236f3e4
	if (!ctx.cr6.eq) goto loc_8236F3E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8236F3E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x8236F3F0;
	sub_82358508(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8236F3F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236F400"))) PPC_WEAK_FUNC(sub_8236F400);
PPC_FUNC_IMPL(__imp__sub_8236F400) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31856
	ctx.r10.s64 = ctx.r11.s64 + 31856;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8236f440
	if (ctx.cr6.eq) goto loc_8236F440;
	// bl 0x82357128
	ctx.lr = 0x8236F438;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8236F440:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,31824
	ctx.r9.s64 = ctx.r11.s64 + 31824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8236f464
	if (ctx.cr6.eq) goto loc_8236F464;
	// bl 0x82357128
	ctx.lr = 0x8236F460;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8236F464:
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

__attribute__((alias("__imp__sub_8236F47C"))) PPC_WEAK_FUNC(sub_8236F47C);
PPC_FUNC_IMPL(__imp__sub_8236F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F480"))) PPC_WEAK_FUNC(sub_8236F480);
PPC_FUNC_IMPL(__imp__sub_8236F480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236F488;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236F498;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8236F4A0;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f518
	if (ctx.cr6.eq) goto loc_8236F518;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823639c0
	ctx.lr = 0x8236F4C4;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236f518
	if (ctx.cr6.eq) goto loc_8236F518;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f518
	if (ctx.cr6.eq) goto loc_8236F518;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,31856
	ctx.r10.s64 = ctx.r11.s64 + 31856;
	// li r28,33
	ctx.r28.s64 = 33;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236f370
	ctx.lr = 0x8236F508;
	sub_8236F370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236f524
	if (!ctx.cr6.eq) goto loc_8236F524;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8236F514:
	// bl 0x8236f2c8
	ctx.lr = 0x8236F518;
	sub_8236F2C8(ctx, base);
loc_8236F518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236F524:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f1,7952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7952);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236F56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8236f514
	if (ctx.cr6.eq) goto loc_8236F514;
	// bl 0x8236f2c8
	ctx.lr = 0x8236F588;
	sub_8236F2C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236F594"))) PPC_WEAK_FUNC(sub_8236F594);
PPC_FUNC_IMPL(__imp__sub_8236F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F598"))) PPC_WEAK_FUNC(sub_8236F598);
PPC_FUNC_IMPL(__imp__sub_8236F598) {
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
	// bl 0x8235bf58
	ctx.lr = 0x8236F5A8;
	sub_8235BF58(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f610
	if (ctx.cr6.eq) goto loc_8236F610;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r6,r8,-31544
	ctx.r6.s64 = ctx.r8.s64 + -31544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r9,31844
	ctx.r7.s64 = ctx.r9.s64 + 31844;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lfs f1,7952(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7952);
	ctx.f1.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236F610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236F610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F620"))) PPC_WEAK_FUNC(sub_8236F620);
PPC_FUNC_IMPL(__imp__sub_8236F620) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8236F640;
	sub_823570E0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823570f0
	ctx.lr = 0x8236F648;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f66c
	if (ctx.cr6.eq) goto loc_8236F66C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r11,31844
	ctx.r9.s64 = ctx.r11.s64 + 31844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8236f670
	goto loc_8236F670;
loc_8236F66C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236F670:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236F678;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236f688
	if (!ctx.cr6.eq) goto loc_8236F688;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236f694
	goto loc_8236F694;
loc_8236F688:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8236F694:
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

__attribute__((alias("__imp__sub_8236F6AC"))) PPC_WEAK_FUNC(sub_8236F6AC);
PPC_FUNC_IMPL(__imp__sub_8236F6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F6B0"))) PPC_WEAK_FUNC(sub_8236F6B0);
PPC_FUNC_IMPL(__imp__sub_8236F6B0) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8236F6D0;
	sub_823570E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823570f0
	ctx.lr = 0x8236F6D8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f708
	if (ctx.cr6.eq) goto loc_8236F708;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r8,r10,31856
	ctx.r8.s64 = ctx.r10.s64 + 31856;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8236f70c
	goto loc_8236F70C;
loc_8236F708:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236F70C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236F714;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236f724
	if (!ctx.cr6.eq) goto loc_8236F724;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236f740
	goto loc_8236F740;
loc_8236F724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8236f370
	ctx.lr = 0x8236F734;
	sub_8236F370(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8236F740:
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

__attribute__((alias("__imp__sub_8236F758"))) PPC_WEAK_FUNC(sub_8236F758);
PPC_FUNC_IMPL(__imp__sub_8236F758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236F760;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8236f7b0
	if (!ctx.cr6.gt) goto loc_8236F7B0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8236F780:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236F79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8236f780
	if (ctx.cr6.lt) goto loc_8236F780;
loc_8236F7B0:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236F7BC"))) PPC_WEAK_FUNC(sub_8236F7BC);
PPC_FUNC_IMPL(__imp__sub_8236F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F7C0"))) PPC_WEAK_FUNC(sub_8236F7C0);
PPC_FUNC_IMPL(__imp__sub_8236F7C0) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82370360
	ctx.lr = 0x8236F7E8;
	sub_82370360(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82357038
	ctx.lr = 0x8236F7F4;
	sub_82357038(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,75
	ctx.r11.s64 = ctx.r30.s64 + 75;
	// addi r10,r31,75
	ctx.r10.s64 = ctx.r31.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236F804:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236f804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236F804;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8236F820;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_8236F838"))) PPC_WEAK_FUNC(sub_8236F838);
PPC_FUNC_IMPL(__imp__sub_8236F838) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,31836
	ctx.r9.s64 = ctx.r11.s64 + 31836;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82370088
	ctx.lr = 0x8236F878;
	sub_82370088(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82356e70
	ctx.lr = 0x8236F880;
	sub_82356E70(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8236F89C;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8236F8B8;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236f7c0
	ctx.lr = 0x8236F8C4;
	sub_8236F7C0(ctx, base);
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

__attribute__((alias("__imp__sub_8236F8E0"))) PPC_WEAK_FUNC(sub_8236F8E0);
PPC_FUNC_IMPL(__imp__sub_8236F8E0) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f758
	ctx.lr = 0x8236F900;
	sub_8236F758(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f918
	if (ctx.cr6.eq) goto loc_8236F918;
	// bl 0x82357240
	ctx.lr = 0x8236F914;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8236F918:
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

__attribute__((alias("__imp__sub_8236F938"))) PPC_WEAK_FUNC(sub_8236F938);
PPC_FUNC_IMPL(__imp__sub_8236F938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8236F940;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,31868
	ctx.r10.s64 = ctx.r11.s64 + 31868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8236f758
	ctx.lr = 0x8236F964;
	sub_8236F758(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f97c
	if (ctx.cr6.eq) goto loc_8236F97C;
	// bl 0x82357240
	ctx.lr = 0x8236F978;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8236F97C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r9,r11,31824
	ctx.r9.s64 = ctx.r11.s64 + 31824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8236f9a8
	if (ctx.cr6.eq) goto loc_8236F9A8;
	// bl 0x82357128
	ctx.lr = 0x8236F9A4;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8236F9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8236F9B0"))) PPC_WEAK_FUNC(sub_8236F9B0);
PPC_FUNC_IMPL(__imp__sub_8236F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8236F9B8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8236f9d0
	if (!ctx.cr6.eq) goto loc_8236F9D0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8236F9D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8236f9e8
	if (!ctx.cr0.eq) goto loc_8236F9E8;
loc_8236F9DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8236F9E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8236F9F0;
	sub_823570E0(ctx, base);
	// mulli r30,r26,104
	ctx.r30.s64 = ctx.r26.s64 * 104;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x8236FA00;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8236FA0C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f9dc
	if (ctx.cr6.eq) goto loc_8236F9DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x8236FA20;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fab4
	if (ctx.cr6.eq) goto loc_8236FAB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8236fa9c
	if (!ctx.cr6.gt) goto loc_8236FA9C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8236FA44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236fa58
	if (ctx.cr6.eq) goto loc_8236FA58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236f838
	ctx.lr = 0x8236FA58;
	sub_8236F838(ctx, base);
loc_8236FA58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8236f7c0
	ctx.lr = 0x8236FA68;
	sub_8236F7C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236FA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8236fa44
	if (ctx.cr6.lt) goto loc_8236FA44;
loc_8236FA9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fab4
	if (ctx.cr6.eq) goto loc_8236FAB4;
	// bl 0x82357240
	ctx.lr = 0x8236FAAC;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8236FAB4:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8236FAC8"))) PPC_WEAK_FUNC(sub_8236FAC8);
PPC_FUNC_IMPL(__imp__sub_8236FAC8) {
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
	// bge cr6,0x8236fb38
	if (!ctx.cr6.lt) goto loc_8236FB38;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8236fb24
	if (!ctx.cr6.lt) goto loc_8236FB24;
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
loc_8236FB24:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8236f9b0
	ctx.lr = 0x8236FB2C;
	sub_8236F9B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8236fb3c
	if (ctx.cr6.eq) goto loc_8236FB3C;
loc_8236FB38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236FB3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FB4C"))) PPC_WEAK_FUNC(sub_8236FB4C);
PPC_FUNC_IMPL(__imp__sub_8236FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FB50"))) PPC_WEAK_FUNC(sub_8236FB50);
PPC_FUNC_IMPL(__imp__sub_8236FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8236FB58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236fb94
	if (ctx.cr6.gt) goto loc_8236FB94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236f9b0
	ctx.lr = 0x8236FB80;
	sub_8236F9B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236fb94
	if (!ctx.cr6.eq) goto loc_8236FB94;
loc_8236FB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8236FB94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fb88
	if (ctx.cr6.eq) goto loc_8236FB88;
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8236fbb8
	if (ctx.cr0.eq) goto loc_8236FBB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f838
	ctx.lr = 0x8236FBB8;
	sub_8236F838(ctx, base);
loc_8236FBB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f7c0
	ctx.lr = 0x8236FBC4;
	sub_8236F7C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8236FBDC"))) PPC_WEAK_FUNC(sub_8236FBDC);
PPC_FUNC_IMPL(__imp__sub_8236FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FBE0"))) PPC_WEAK_FUNC(sub_8236FBE0);
PPC_FUNC_IMPL(__imp__sub_8236FBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236FBE8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8236fca8
	if (ctx.cr6.eq) goto loc_8236FCA8;
	// bl 0x8236f758
	ctx.lr = 0x8236FC00;
	sub_8236F758(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fc18
	if (ctx.cr6.eq) goto loc_8236FC18;
	// bl 0x82357240
	ctx.lr = 0x8236FC14;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8236FC18:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236fc38
	if (!ctx.cr6.eq) goto loc_8236FC38;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8236FC38:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236fca8
	if (ctx.cr6.eq) goto loc_8236FCA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236fac8
	ctx.lr = 0x8236FC50;
	sub_8236FAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236fc60
	if (!ctx.cr6.eq) goto loc_8236FC60;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8236FC60:
	// lwz r27,8(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8236fca4
	if (ctx.cr6.eq) goto loc_8236FCA4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8236FC70:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add. r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8236fc84
	if (ctx.cr0.eq) goto loc_8236FC84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8236f838
	ctx.lr = 0x8236FC84;
	sub_8236F838(ctx, base);
loc_8236FC84:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8236f7c0
	ctx.lr = 0x8236FC98;
	sub_8236F7C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// bne 0x8236fc70
	if (!ctx.cr0.eq) goto loc_8236FC70;
loc_8236FCA4:
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
loc_8236FCA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236FCB4"))) PPC_WEAK_FUNC(sub_8236FCB4);
PPC_FUNC_IMPL(__imp__sub_8236FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FCB8"))) PPC_WEAK_FUNC(sub_8236FCB8);
PPC_FUNC_IMPL(__imp__sub_8236FCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8236FCC0;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8236f130
	ctx.lr = 0x8236FCE0;
	sub_8236F130(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82370360
	ctx.lr = 0x8236FCEC;
	sub_82370360(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82357038
	ctx.lr = 0x8236FCF8;
	sub_82357038(ctx, base);
	// ld r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,156(r1)
	PPC_STORE_U64(ctx.r1.u32 + 156, ctx.r11.u64);
	// bl 0x82248a40
	ctx.lr = 0x8236FD10;
	sub_82248A40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8236fb50
	ctx.lr = 0x8236FD1C;
	sub_8236FB50(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,31836
	ctx.r7.s64 = ctx.r10.s64 + 31836;
	// addi r6,r9,30596
	ctx.r6.s64 = ctx.r9.s64 + 30596;
	// addi r5,r8,30588
	ctx.r5.s64 = ctx.r8.s64 + 30588;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82356eb8
	ctx.lr = 0x8236FD4C;
	sub_82356EB8(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r11,r4,30604
	ctx.r11.s64 = ctx.r4.s64 + 30604;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x823700d8
	ctx.lr = 0x8236FD60;
	sub_823700D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8236FD6C"))) PPC_WEAK_FUNC(sub_8236FD6C);
PPC_FUNC_IMPL(__imp__sub_8236FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FD70"))) PPC_WEAK_FUNC(sub_8236FD70);
PPC_FUNC_IMPL(__imp__sub_8236FD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8236FD78;
	sub_82248770(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8236FD84;
	sub_8235BF58(ctx, base);
	// lwz r25,8(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8236fee0
	if (ctx.cr6.eq) goto loc_8236FEE0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356e70
	ctx.lr = 0x8236FD98;
	sub_82356E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r11,31868
	ctx.r27.s64 = ctx.r11.s64 + 31868;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r26,31
	ctx.r26.s64 = 31;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236FDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fe5c
	if (ctx.cr6.eq) goto loc_8236FE5C;
loc_8236FDF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236FE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82355a90
	ctx.lr = 0x8236FE10;
	sub_82355A90(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82355a88
	ctx.lr = 0x8236FE1C;
	sub_82355A88(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82355a80
	ctx.lr = 0x8236FE28;
	sub_82355A80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bl 0x8236fcb8
	ctx.lr = 0x8236FE40;
	sub_8236FCB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236fea4
	if (ctx.cr6.eq) goto loc_8236FEA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8236fdf0
	if (ctx.cr6.lt) goto loc_8236FDF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8236feec
	if (!ctx.cr6.eq) goto loc_8236FEEC;
loc_8236FE5C:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8236f758
	ctx.lr = 0x8236FE68;
	sub_8236F758(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fe7c
	if (ctx.cr6.eq) goto loc_8236FE7C;
	// bl 0x82357240
	ctx.lr = 0x8236FE78;
	sub_82357240(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_8236FE7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x8236FE98;
	sub_82356EB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8236FEA4:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8236f758
	ctx.lr = 0x8236FEB0;
	sub_8236F758(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fec4
	if (ctx.cr6.eq) goto loc_8236FEC4;
	// bl 0x82357240
	ctx.lr = 0x8236FEC0;
	sub_82357240(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_8236FEC4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x8236FEE0;
	sub_82356EB8(ctx, base);
loc_8236FEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8236FEEC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f1,7952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7952);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236FF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bne cr6,0x8236ff90
	if (!ctx.cr6.eq) goto loc_8236FF90;
	// bl 0x8236f758
	ctx.lr = 0x8236FF54;
	sub_8236F758(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ff68
	if (ctx.cr6.eq) goto loc_8236FF68;
	// bl 0x82357240
	ctx.lr = 0x8236FF64;
	sub_82357240(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_8236FF68:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x8236FF84;
	sub_82356EB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8236FF90:
	// bl 0x8236f758
	ctx.lr = 0x8236FF94;
	sub_8236F758(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236ffa8
	if (ctx.cr6.eq) goto loc_8236FFA8;
	// bl 0x82357240
	ctx.lr = 0x8236FFA4;
	sub_82357240(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_8236FFA8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x8236FFC4;
	sub_82356EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8236FFD0"))) PPC_WEAK_FUNC(sub_8236FFD0);
PPC_FUNC_IMPL(__imp__sub_8236FFD0) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8236FFF0;
	sub_823570E0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x823570f0
	ctx.lr = 0x8236FFF8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237003c
	if (ctx.cr6.eq) goto loc_8237003C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,31
	ctx.r10.s64 = 31;
	// addi r9,r11,31868
	ctx.r9.s64 = ctx.r11.s64 + 31868;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// b 0x82370040
	goto loc_82370040;
loc_8237003C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82370040:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82370048;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82370058
	if (!ctx.cr6.eq) goto loc_82370058;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370070
	goto loc_82370070;
loc_82370058:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8236fbe0
	ctx.lr = 0x82370064;
	sub_8236FBE0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82370070:
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

__attribute__((alias("__imp__sub_82370088"))) PPC_WEAK_FUNC(sub_82370088);
PPC_FUNC_IMPL(__imp__sub_82370088) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r11,31880
	ctx.r11.s64 = ctx.r11.s64 + 31880;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x823585a0
	ctx.lr = 0x823700BC;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_823700D4"))) PPC_WEAK_FUNC(sub_823700D4);
PPC_FUNC_IMPL(__imp__sub_823700D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823700D8"))) PPC_WEAK_FUNC(sub_823700D8);
PPC_FUNC_IMPL(__imp__sub_823700D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,31880
	ctx.r11.s64 = ctx.r11.s64 + 31880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823700E8"))) PPC_WEAK_FUNC(sub_823700E8);
PPC_FUNC_IMPL(__imp__sub_823700E8) {
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
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82370108;
	sub_823585A0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82370124"))) PPC_WEAK_FUNC(sub_82370124);
PPC_FUNC_IMPL(__imp__sub_82370124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370128"))) PPC_WEAK_FUNC(sub_82370128);
PPC_FUNC_IMPL(__imp__sub_82370128) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823716b8
	ctx.lr = 0x82370154;
	sub_823716B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82370170
	if (ctx.cr0.eq) goto loc_82370170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// bl 0x823711d8
	ctx.lr = 0x82370168;
	sub_823711D8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82370170:
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

__attribute__((alias("__imp__sub_82370188"))) PPC_WEAK_FUNC(sub_82370188);
PPC_FUNC_IMPL(__imp__sub_82370188) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372270
	ctx.lr = 0x823701C0;
	sub_82372270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823701d0
	if (!ctx.cr0.eq) goto loc_823701D0;
loc_823701C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823701f0
	goto loc_823701F0;
loc_823701D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x823701c8
	if (!ctx.cr6.eq) goto loc_823701C8;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371b10
	ctx.lr = 0x823701E8;
	sub_82371B10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823701F0:
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

__attribute__((alias("__imp__sub_82370208"))) PPC_WEAK_FUNC(sub_82370208);
PPC_FUNC_IMPL(__imp__sub_82370208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,36
	ctx.r5.s64 = 36;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370214"))) PPC_WEAK_FUNC(sub_82370214);
PPC_FUNC_IMPL(__imp__sub_82370214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370218"))) PPC_WEAK_FUNC(sub_82370218);
PPC_FUNC_IMPL(__imp__sub_82370218) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370224"))) PPC_WEAK_FUNC(sub_82370224);
PPC_FUNC_IMPL(__imp__sub_82370224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370228"))) PPC_WEAK_FUNC(sub_82370228);
PPC_FUNC_IMPL(__imp__sub_82370228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370230"))) PPC_WEAK_FUNC(sub_82370230);
PPC_FUNC_IMPL(__imp__sub_82370230) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x82370258;
	sub_823585A0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822d6350
	ctx.lr = 0x82370268;
	sub_822D6350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82370280
	if (ctx.cr0.eq) goto loc_82370280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a518
	ctx.lr = 0x8237027C;
	sub_8235A518(ctx, base);
	// b 0x823702a8
	goto loc_823702A8;
loc_82370280:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235a518
	ctx.lr = 0x82370288;
	sub_8235A518(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235a760
	ctx.lr = 0x82370294;
	sub_8235A760(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a888
	ctx.lr = 0x823702A0;
	sub_8235A888(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235a538
	ctx.lr = 0x823702A8;
	sub_8235A538(ctx, base);
loc_823702A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823702C4"))) PPC_WEAK_FUNC(sub_823702C4);
PPC_FUNC_IMPL(__imp__sub_823702C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823702C8"))) PPC_WEAK_FUNC(sub_823702C8);
PPC_FUNC_IMPL(__imp__sub_823702C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31880
	ctx.r11.s64 = ctx.r11.s64 + 31880;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823702f4
	if (ctx.cr0.eq) goto loc_823702F4;
	// bl 0x82357128
	ctx.lr = 0x823702F4;
	sub_82357128(ctx, base);
loc_823702F4:
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

__attribute__((alias("__imp__sub_8237030C"))) PPC_WEAK_FUNC(sub_8237030C);
PPC_FUNC_IMPL(__imp__sub_8237030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370310"))) PPC_WEAK_FUNC(sub_82370310);
PPC_FUNC_IMPL(__imp__sub_82370310) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r11,31880
	ctx.r11.s64 = ctx.r11.s64 + 31880;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x82370344;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_8237035C"))) PPC_WEAK_FUNC(sub_8237035C);
PPC_FUNC_IMPL(__imp__sub_8237035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370360"))) PPC_WEAK_FUNC(sub_82370360);
PPC_FUNC_IMPL(__imp__sub_82370360) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x8237038C;
	sub_82248A40(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// sth r11,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_823703AC"))) PPC_WEAK_FUNC(sub_823703AC);
PPC_FUNC_IMPL(__imp__sub_823703AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823703B0"))) PPC_WEAK_FUNC(sub_823703B0);
PPC_FUNC_IMPL(__imp__sub_823703B0) {
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
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82358538
	ctx.lr = 0x823703C8;
	sub_82358538(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823703E4"))) PPC_WEAK_FUNC(sub_823703E4);
PPC_FUNC_IMPL(__imp__sub_823703E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823703E8"))) PPC_WEAK_FUNC(sub_823703E8);
PPC_FUNC_IMPL(__imp__sub_823703E8) {
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
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r11,31880
	ctx.r11.s64 = ctx.r11.s64 + 31880;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x82370428;
	sub_82248A40(ctx, base);
	// lhz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8237044C"))) PPC_WEAK_FUNC(sub_8237044C);
PPC_FUNC_IMPL(__imp__sub_8237044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370450"))) PPC_WEAK_FUNC(sub_82370450);
PPC_FUNC_IMPL(__imp__sub_82370450) {
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
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82358538
	ctx.lr = 0x8237047C;
	sub_82358538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237048c
	if (ctx.cr0.eq) goto loc_8237048C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823704a0
	goto loc_823704A0;
loc_8237048C:
	// lhz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823704A0:
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

__attribute__((alias("__imp__sub_823704B8"))) PPC_WEAK_FUNC(sub_823704B8);
PPC_FUNC_IMPL(__imp__sub_823704B8) {
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
	// bl 0x82382638
	ctx.lr = 0x823704CC;
	sub_82382638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823704d8
	if (ctx.cr0.eq) goto loc_823704D8;
	// bl 0x823825e8
	ctx.lr = 0x823704D8;
	sub_823825E8(ctx, base);
loc_823704D8:
	// bl 0x82381dd0
	ctx.lr = 0x823704DC;
	sub_82381DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823704e8
	if (ctx.cr0.eq) goto loc_823704E8;
	// bl 0x82381d80
	ctx.lr = 0x823704E8;
	sub_82381D80(ctx, base);
loc_823704E8:
	// bl 0x82381898
	ctx.lr = 0x823704EC;
	sub_82381898(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823704f8
	if (ctx.cr0.eq) goto loc_823704F8;
	// bl 0x82381848
	ctx.lr = 0x823704F8;
	sub_82381848(ctx, base);
loc_823704F8:
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370524
	if (ctx.cr6.eq) goto loc_82370524;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237051C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4876, ctx.r11.u32);
loc_82370524:
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

__attribute__((alias("__imp__sub_82370538"))) PPC_WEAK_FUNC(sub_82370538);
PPC_FUNC_IMPL(__imp__sub_82370538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370544"))) PPC_WEAK_FUNC(sub_82370544);
PPC_FUNC_IMPL(__imp__sub_82370544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370548"))) PPC_WEAK_FUNC(sub_82370548);
PPC_FUNC_IMPL(__imp__sub_82370548) {
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
	// bl 0x82382638
	ctx.lr = 0x82370560;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82386300
	ctx.lr = 0x82370568;
	sub_82386300(ctx, base);
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

__attribute__((alias("__imp__sub_8237057C"))) PPC_WEAK_FUNC(sub_8237057C);
PPC_FUNC_IMPL(__imp__sub_8237057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370580"))) PPC_WEAK_FUNC(sub_82370580);
PPC_FUNC_IMPL(__imp__sub_82370580) {
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
	// bl 0x82382638
	ctx.lr = 0x82370590;
	sub_82382638(ctx, base);
	// bl 0x823830f0
	ctx.lr = 0x82370594;
	sub_823830F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823705A4"))) PPC_WEAK_FUNC(sub_823705A4);
PPC_FUNC_IMPL(__imp__sub_823705A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823705A8"))) PPC_WEAK_FUNC(sub_823705A8);
PPC_FUNC_IMPL(__imp__sub_823705A8) {
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
	// bl 0x82382638
	ctx.lr = 0x823705C0;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82383ce0
	ctx.lr = 0x823705C8;
	sub_82383CE0(ctx, base);
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

__attribute__((alias("__imp__sub_823705DC"))) PPC_WEAK_FUNC(sub_823705DC);
PPC_FUNC_IMPL(__imp__sub_823705DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823705E0"))) PPC_WEAK_FUNC(sub_823705E0);
PPC_FUNC_IMPL(__imp__sub_823705E0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82382638
	ctx.lr = 0x82370600;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82383e90
	ctx.lr = 0x8237060C;
	sub_82383E90(ctx, base);
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

__attribute__((alias("__imp__sub_82370624"))) PPC_WEAK_FUNC(sub_82370624);
PPC_FUNC_IMPL(__imp__sub_82370624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370628"))) PPC_WEAK_FUNC(sub_82370628);
PPC_FUNC_IMPL(__imp__sub_82370628) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82382638
	ctx.lr = 0x82370648;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82384020
	ctx.lr = 0x82370654;
	sub_82384020(ctx, base);
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

__attribute__((alias("__imp__sub_8237066C"))) PPC_WEAK_FUNC(sub_8237066C);
PPC_FUNC_IMPL(__imp__sub_8237066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370670"))) PPC_WEAK_FUNC(sub_82370670);
PPC_FUNC_IMPL(__imp__sub_82370670) {
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
	// bl 0x82382638
	ctx.lr = 0x82370688;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82384200
	ctx.lr = 0x82370690;
	sub_82384200(ctx, base);
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

__attribute__((alias("__imp__sub_823706A4"))) PPC_WEAK_FUNC(sub_823706A4);
PPC_FUNC_IMPL(__imp__sub_823706A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823706A8"))) PPC_WEAK_FUNC(sub_823706A8);
PPC_FUNC_IMPL(__imp__sub_823706A8) {
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
	// bl 0x82382638
	ctx.lr = 0x823706B8;
	sub_82382638(ctx, base);
	// bl 0x82387750
	ctx.lr = 0x823706BC;
	sub_82387750(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823706CC"))) PPC_WEAK_FUNC(sub_823706CC);
PPC_FUNC_IMPL(__imp__sub_823706CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823706D0"))) PPC_WEAK_FUNC(sub_823706D0);
PPC_FUNC_IMPL(__imp__sub_823706D0) {
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
	// bl 0x82381898
	ctx.lr = 0x823706E8;
	sub_82381898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82373d08
	ctx.lr = 0x823706F0;
	sub_82373D08(ctx, base);
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

__attribute__((alias("__imp__sub_82370704"))) PPC_WEAK_FUNC(sub_82370704);
PPC_FUNC_IMPL(__imp__sub_82370704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370708"))) PPC_WEAK_FUNC(sub_82370708);
PPC_FUNC_IMPL(__imp__sub_82370708) {
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
	// bl 0x82381898
	ctx.lr = 0x82370720;
	sub_82381898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823738d8
	ctx.lr = 0x82370728;
	sub_823738D8(ctx, base);
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

__attribute__((alias("__imp__sub_8237073C"))) PPC_WEAK_FUNC(sub_8237073C);
PPC_FUNC_IMPL(__imp__sub_8237073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370740"))) PPC_WEAK_FUNC(sub_82370740);
PPC_FUNC_IMPL(__imp__sub_82370740) {
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
	// bl 0x82382638
	ctx.lr = 0x82370750;
	sub_82382638(ctx, base);
	// bl 0x823867a8
	ctx.lr = 0x82370754;
	sub_823867A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370764"))) PPC_WEAK_FUNC(sub_82370764);
PPC_FUNC_IMPL(__imp__sub_82370764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370768"))) PPC_WEAK_FUNC(sub_82370768);
PPC_FUNC_IMPL(__imp__sub_82370768) {
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
	// bl 0x82382638
	ctx.lr = 0x82370778;
	sub_82382638(ctx, base);
	// bl 0x823834c8
	ctx.lr = 0x8237077C;
	sub_823834C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237078C"))) PPC_WEAK_FUNC(sub_8237078C);
PPC_FUNC_IMPL(__imp__sub_8237078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370790"))) PPC_WEAK_FUNC(sub_82370790);
PPC_FUNC_IMPL(__imp__sub_82370790) {
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
	// bl 0x82382638
	ctx.lr = 0x823707A8;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823826f0
	ctx.lr = 0x823707B0;
	sub_823826F0(ctx, base);
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

__attribute__((alias("__imp__sub_823707C4"))) PPC_WEAK_FUNC(sub_823707C4);
PPC_FUNC_IMPL(__imp__sub_823707C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823707C8"))) PPC_WEAK_FUNC(sub_823707C8);
PPC_FUNC_IMPL(__imp__sub_823707C8) {
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
	// bl 0x82381dd0
	ctx.lr = 0x823707E0;
	sub_82381DD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82382498
	ctx.lr = 0x823707E8;
	sub_82382498(ctx, base);
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

__attribute__((alias("__imp__sub_823707FC"))) PPC_WEAK_FUNC(sub_823707FC);
PPC_FUNC_IMPL(__imp__sub_823707FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370800"))) PPC_WEAK_FUNC(sub_82370800);
PPC_FUNC_IMPL(__imp__sub_82370800) {
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
	// bl 0x82382638
	ctx.lr = 0x82370810;
	sub_82382638(ctx, base);
	// bl 0x82382ae0
	ctx.lr = 0x82370814;
	sub_82382AE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370824"))) PPC_WEAK_FUNC(sub_82370824);
PPC_FUNC_IMPL(__imp__sub_82370824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370828"))) PPC_WEAK_FUNC(sub_82370828);
PPC_FUNC_IMPL(__imp__sub_82370828) {
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
	// bl 0x82381dd0
	ctx.lr = 0x8237083C;
	sub_82381DD0(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82381dd0
	ctx.lr = 0x82370844;
	sub_82381DD0(ctx, base);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// bl 0x82382638
	ctx.lr = 0x8237084C;
	sub_82382638(ctx, base);
	// bl 0x82386b80
	ctx.lr = 0x82370850;
	sub_82386B80(ctx, base);
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

__attribute__((alias("__imp__sub_82370868"))) PPC_WEAK_FUNC(sub_82370868);
PPC_FUNC_IMPL(__imp__sub_82370868) {
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
	// bl 0x82382638
	ctx.lr = 0x82370878;
	sub_82382638(ctx, base);
	// lwz r11,2512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2512);
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

__attribute__((alias("__imp__sub_82370894"))) PPC_WEAK_FUNC(sub_82370894);
PPC_FUNC_IMPL(__imp__sub_82370894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370898"))) PPC_WEAK_FUNC(sub_82370898);
PPC_FUNC_IMPL(__imp__sub_82370898) {
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
	// bl 0x82381dd0
	ctx.lr = 0x823708A8;
	sub_82381DD0(ctx, base);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823708BC"))) PPC_WEAK_FUNC(sub_823708BC);
PPC_FUNC_IMPL(__imp__sub_823708BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823708C0"))) PPC_WEAK_FUNC(sub_823708C0);
PPC_FUNC_IMPL(__imp__sub_823708C0) {
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
	// bl 0x82381dd0
	ctx.lr = 0x823708D0;
	sub_82381DD0(ctx, base);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823708E4"))) PPC_WEAK_FUNC(sub_823708E4);
PPC_FUNC_IMPL(__imp__sub_823708E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823708E8"))) PPC_WEAK_FUNC(sub_823708E8);
PPC_FUNC_IMPL(__imp__sub_823708E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823708F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82382638
	ctx.lr = 0x82370904;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82383548
	ctx.lr = 0x82370914;
	sub_82383548(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237091C"))) PPC_WEAK_FUNC(sub_8237091C);
PPC_FUNC_IMPL(__imp__sub_8237091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370920"))) PPC_WEAK_FUNC(sub_82370920);
PPC_FUNC_IMPL(__imp__sub_82370920) {
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
	// bl 0x82382638
	ctx.lr = 0x82370938;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82383598
	ctx.lr = 0x82370940;
	sub_82383598(ctx, base);
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

__attribute__((alias("__imp__sub_82370954"))) PPC_WEAK_FUNC(sub_82370954);
PPC_FUNC_IMPL(__imp__sub_82370954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370958"))) PPC_WEAK_FUNC(sub_82370958);
PPC_FUNC_IMPL(__imp__sub_82370958) {
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
	// bl 0x82382638
	ctx.lr = 0x82370968;
	sub_82382638(ctx, base);
	// lwz r3,2484(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237097C"))) PPC_WEAK_FUNC(sub_8237097C);
PPC_FUNC_IMPL(__imp__sub_8237097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370980"))) PPC_WEAK_FUNC(sub_82370980);
PPC_FUNC_IMPL(__imp__sub_82370980) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823709a8
	if (!ctx.cr6.gt) goto loc_823709A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823709b4
	goto loc_823709B4;
loc_823709A8:
	// bl 0x82382638
	ctx.lr = 0x823709AC;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82385420
	ctx.lr = 0x823709B4;
	sub_82385420(ctx, base);
loc_823709B4:
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

__attribute__((alias("__imp__sub_823709C8"))) PPC_WEAK_FUNC(sub_823709C8);
PPC_FUNC_IMPL(__imp__sub_823709C8) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823709f8
	if (!ctx.cr6.gt) goto loc_823709F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370a08
	goto loc_82370A08;
loc_823709F8:
	// bl 0x82382638
	ctx.lr = 0x823709FC;
	sub_82382638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82383640
	ctx.lr = 0x82370A08;
	sub_82383640(ctx, base);
loc_82370A08:
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

__attribute__((alias("__imp__sub_82370A20"))) PPC_WEAK_FUNC(sub_82370A20);
PPC_FUNC_IMPL(__imp__sub_82370A20) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x82370a48
	if (!ctx.cr6.gt) goto loc_82370A48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370a54
	goto loc_82370A54;
loc_82370A48:
	// bl 0x82382638
	ctx.lr = 0x82370A4C;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82383708
	ctx.lr = 0x82370A54;
	sub_82383708(ctx, base);
loc_82370A54:
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

__attribute__((alias("__imp__sub_82370A68"))) PPC_WEAK_FUNC(sub_82370A68);
PPC_FUNC_IMPL(__imp__sub_82370A68) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82382638
	ctx.lr = 0x82370A88;
	sub_82382638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823856a8
	ctx.lr = 0x82370A94;
	sub_823856A8(ctx, base);
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

__attribute__((alias("__imp__sub_82370AAC"))) PPC_WEAK_FUNC(sub_82370AAC);
PPC_FUNC_IMPL(__imp__sub_82370AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370AB0"))) PPC_WEAK_FUNC(sub_82370AB0);
PPC_FUNC_IMPL(__imp__sub_82370AB0) {
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
	// bl 0x82382638
	ctx.lr = 0x82370AC0;
	sub_82382638(ctx, base);
	// bl 0x82383860
	ctx.lr = 0x82370AC4;
	sub_82383860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370AD4"))) PPC_WEAK_FUNC(sub_82370AD4);
PPC_FUNC_IMPL(__imp__sub_82370AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370AD8"))) PPC_WEAK_FUNC(sub_82370AD8);
PPC_FUNC_IMPL(__imp__sub_82370AD8) {
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
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82370bb4
	if (!ctx.cr6.eq) goto loc_82370BB4;
	// bl 0x82382638
	ctx.lr = 0x82370B04;
	sub_82382638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82370bb0
	if (!ctx.cr0.eq) goto loc_82370BB0;
	// bl 0x82381dd0
	ctx.lr = 0x82370B10;
	sub_82381DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82370bb0
	if (!ctx.cr0.eq) goto loc_82370BB0;
	// bl 0x82381898
	ctx.lr = 0x82370B1C;
	sub_82381898(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82370bb0
	if (!ctx.cr0.eq) goto loc_82370BB0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823570e0
	ctx.lr = 0x82370B2C;
	sub_823570E0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823570f0
	ctx.lr = 0x82370B34;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82370b50
	if (ctx.cr0.eq) goto loc_82370B50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,-4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4876, ctx.r3.u32);
	// b 0x82370b58
	goto loc_82370B58;
loc_82370B50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4876, ctx.r11.u32);
loc_82370B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82370B60;
	sub_823570E0(ctx, base);
	// lwz r11,-4876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82370b74
	if (!ctx.cr6.eq) goto loc_82370B74;
loc_82370B6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370bb4
	goto loc_82370BB4;
loc_82370B74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82385c78
	ctx.lr = 0x82370B7C;
	sub_82385C78(ctx, base);
	// bl 0x82382638
	ctx.lr = 0x82370B80;
	sub_82382638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82370b90
	if (!ctx.cr0.eq) goto loc_82370B90;
loc_82370B88:
	// bl 0x823704b8
	ctx.lr = 0x82370B8C;
	sub_823704B8(ctx, base);
	// b 0x82370b6c
	goto loc_82370B6C;
loc_82370B90:
	// bl 0x823821b0
	ctx.lr = 0x82370B94;
	sub_823821B0(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82370B98;
	sub_82381DD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82370b88
	if (ctx.cr0.eq) goto loc_82370B88;
	// bl 0x823818a8
	ctx.lr = 0x82370BA4;
	sub_823818A8(ctx, base);
	// bl 0x82381898
	ctx.lr = 0x82370BA8;
	sub_82381898(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82370b88
	if (ctx.cr0.eq) goto loc_82370B88;
loc_82370BB0:
	// lwz r3,-4876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4876);
loc_82370BB4:
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

__attribute__((alias("__imp__sub_82370BCC"))) PPC_WEAK_FUNC(sub_82370BCC);
PPC_FUNC_IMPL(__imp__sub_82370BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370BD0"))) PPC_WEAK_FUNC(sub_82370BD0);
PPC_FUNC_IMPL(__imp__sub_82370BD0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82370088
	ctx.lr = 0x82370BF4;
	sub_82370088(ctx, base);
	// bl 0x82382638
	ctx.lr = 0x82370BF8;
	sub_82382638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823826a0
	ctx.lr = 0x82370C04;
	sub_823826A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82370c34
	if (!ctx.cr0.eq) goto loc_82370C34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82370C10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823700d8
	ctx.lr = 0x82370C18;
	sub_823700D8(ctx, base);
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
loc_82370C34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x82370C40;
	sub_82370360(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82370c10
	goto loc_82370C10;
}

__attribute__((alias("__imp__sub_82370C48"))) PPC_WEAK_FUNC(sub_82370C48);
PPC_FUNC_IMPL(__imp__sub_82370C48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,31888
	ctx.r10.s64 = ctx.r10.s64 + 31888;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370C70"))) PPC_WEAK_FUNC(sub_82370C70);
PPC_FUNC_IMPL(__imp__sub_82370C70) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82370ca0
	if (ctx.cr6.eq) goto loc_82370CA0;
	// bl 0x82357240
	ctx.lr = 0x82370C9C;
	sub_82357240(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82370CA0:
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

__attribute__((alias("__imp__sub_82370CBC"))) PPC_WEAK_FUNC(sub_82370CBC);
PPC_FUNC_IMPL(__imp__sub_82370CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370CC0"))) PPC_WEAK_FUNC(sub_82370CC0);
PPC_FUNC_IMPL(__imp__sub_82370CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82370ce4
	if (!ctx.cr6.gt) goto loc_82370CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82370CE4:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82370d0c
	if (ctx.cr6.eq) goto loc_82370D0C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82370CFC:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82370cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370CFC;
loc_82370D0C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370D20"))) PPC_WEAK_FUNC(sub_82370D20);
PPC_FUNC_IMPL(__imp__sub_82370D20) {
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
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subf. r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq 0x82370d60
	if (ctx.cr0.eq) goto loc_82370D60;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82370d60
	if (ctx.cr0.eq) goto loc_82370D60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82370D58:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82370d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370D58;
loc_82370D60:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82370cc0
	ctx.lr = 0x82370D6C;
	sub_82370CC0(ctx, base);
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

__attribute__((alias("__imp__sub_82370D80"))) PPC_WEAK_FUNC(sub_82370D80);
PPC_FUNC_IMPL(__imp__sub_82370D80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82370dc4
	if (ctx.cr6.eq) goto loc_82370DC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82370dbc
	if (ctx.cr6.eq) goto loc_82370DBC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82370db4
	if (ctx.cr6.eq) goto loc_82370DB4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82370dac
	if (ctx.cr6.eq) goto loc_82370DAC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82370DAC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82370DB4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82370DBC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82370DC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370DCC"))) PPC_WEAK_FUNC(sub_82370DCC);
PPC_FUNC_IMPL(__imp__sub_82370DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370DD0"))) PPC_WEAK_FUNC(sub_82370DD0);
PPC_FUNC_IMPL(__imp__sub_82370DD0) {
	PPC_FUNC_PROLOGUE();
	// cmpdi cr6,r4,255
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 255, ctx.xer);
	// bgt cr6,0x82370de8
	if (ctx.cr6.gt) goto loc_82370DE8;
	// cmpdi cr6,r4,-128
	ctx.cr6.compare<int64_t>(ctx.r4.s64, -128, ctx.xer);
	// blt cr6,0x82370de8
	if (ctx.cr6.lt) goto loc_82370DE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82370DE8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x82370e08
	if (ctx.cr6.gt) goto loc_82370E08;
	// cmpdi cr6,r4,-32768
	ctx.cr6.compare<int64_t>(ctx.r4.s64, -32768, ctx.xer);
	// blt cr6,0x82370e08
	if (ctx.cr6.lt) goto loc_82370E08;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82370E08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x82370e28
	if (ctx.cr6.gt) goto loc_82370E28;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,3
	ctx.r3.s64 = 3;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82370E28:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370E30"))) PPC_WEAK_FUNC(sub_82370E30);
PPC_FUNC_IMPL(__imp__sub_82370E30) {
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
	// bl 0x82370c70
	ctx.lr = 0x82370E48;
	sub_82370C70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82370E68"))) PPC_WEAK_FUNC(sub_82370E68);
PPC_FUNC_IMPL(__imp__sub_82370E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82370E70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370eec
	if (ctx.cr6.eq) goto loc_82370EEC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x82370E90;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82370E9C;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82370EA8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82370eb8
	if (!ctx.cr6.eq) goto loc_82370EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370ef0
	goto loc_82370EF0;
loc_82370EB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82370EC4;
	sub_823585A0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82370edc
	if (ctx.cr6.eq) goto loc_82370EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82358508
	ctx.lr = 0x82370EDC;
	sub_82358508(ctx, base);
loc_82370EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c70
	ctx.lr = 0x82370EE4;
	sub_82370C70(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82370EEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82370EF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82370EF8"))) PPC_WEAK_FUNC(sub_82370EF8);
PPC_FUNC_IMPL(__imp__sub_82370EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82370F00;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82370f38
	if (!ctx.cr6.gt) goto loc_82370F38;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82370e68
	ctx.lr = 0x82370F30;
	sub_82370E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82370f74
	if (ctx.cr0.eq) goto loc_82370F74;
loc_82370F38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82370f64
	if (ctx.cr6.eq) goto loc_82370F64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82370F54:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82370f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370F54;
loc_82370F64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82370F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82370F7C"))) PPC_WEAK_FUNC(sub_82370F7C);
PPC_FUNC_IMPL(__imp__sub_82370F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370F80"))) PPC_WEAK_FUNC(sub_82370F80);
PPC_FUNC_IMPL(__imp__sub_82370F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82370F88;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82370FA8;
	sub_82370EF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371004
	if (ctx.cr0.eq) goto loc_82371004;
	// rlwinm r11,r31,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82370fcc
	if (ctx.cr6.eq) goto loc_82370FCC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82370fcc
	if (ctx.cr6.eq) goto loc_82370FCC;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82371000
	if (!ctx.cr6.eq) goto loc_82371000;
loc_82370FCC:
	// rlwinm r4,r31,31,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370d80
	ctx.lr = 0x82370FD8;
	sub_82370D80(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82370ef8
	ctx.lr = 0x82370FF4;
	sub_82370EF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82371004
	if (ctx.cr0.eq) goto loc_82371004;
loc_82371000:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82371004:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237100C"))) PPC_WEAK_FUNC(sub_8237100C);
PPC_FUNC_IMPL(__imp__sub_8237100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371010"))) PPC_WEAK_FUNC(sub_82371010);
PPC_FUNC_IMPL(__imp__sub_82371010) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x82371038;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371064
	if (ctx.cr0.eq) goto loc_82371064;
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x8237105C;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371064:
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

__attribute__((alias("__imp__sub_8237107C"))) PPC_WEAK_FUNC(sub_8237107C);
PPC_FUNC_IMPL(__imp__sub_8237107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371080"))) PPC_WEAK_FUNC(sub_82371080);
PPC_FUNC_IMPL(__imp__sub_82371080) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x823710A4;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823710c4
	if (ctx.cr0.eq) goto loc_823710C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823710BC;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823710C4:
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

__attribute__((alias("__imp__sub_823710D8"))) PPC_WEAK_FUNC(sub_823710D8);
PPC_FUNC_IMPL(__imp__sub_823710D8) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x823710FC;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237111c
	if (ctx.cr0.eq) goto loc_8237111C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371114;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8237111C:
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

__attribute__((alias("__imp__sub_82371130"))) PPC_WEAK_FUNC(sub_82371130);
PPC_FUNC_IMPL(__imp__sub_82371130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371138;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bgt cr6,0x8237115c
	if (ctx.cr6.gt) goto loc_8237115C;
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bge cr6,0x82371160
	if (!ctx.cr6.lt) goto loc_82371160;
loc_8237115C:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82371160:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	// rlwimi r9,r30,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82370f80
	ctx.lr = 0x82371194;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823711d0
	if (ctx.cr0.eq) goto loc_823711D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d80
	ctx.lr = 0x823711A8;
	sub_82370D80(ctx, base);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823711C8;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823711D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823711D8"))) PPC_WEAK_FUNC(sub_823711D8);
PPC_FUNC_IMPL(__imp__sub_823711D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823711E0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subfic r11,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r11.s64 = 255 - ctx.r11.s64;
	// li r4,80
	ctx.r4.s64 = 80;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// rlwimi r4,r29,1,28,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0xE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF1);
	// bl 0x82370f80
	ctx.lr = 0x82371210;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237124c
	if (ctx.cr0.eq) goto loc_8237124C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d80
	ctx.lr = 0x82371224;
	sub_82370D80(ctx, base);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371244;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8237124C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371254"))) PPC_WEAK_FUNC(sub_82371254);
PPC_FUNC_IMPL(__imp__sub_82371254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371258"))) PPC_WEAK_FUNC(sub_82371258);
PPC_FUNC_IMPL(__imp__sub_82371258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371260;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r11,r11,r4
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// bgt cr6,0x8237129c
	if (ctx.cr6.gt) goto loc_8237129C;
	// cmpwi cr6,r4,-128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -128, ctx.xer);
	// blt cr6,0x8237129c
	if (ctx.cr6.lt) goto loc_8237129C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823712bc
	goto loc_823712BC;
loc_8237129C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823712b8
	if (ctx.cr6.gt) goto loc_823712B8;
	// cmpwi cr6,r31,-32768
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -32768, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// bge cr6,0x823712bc
	if (!ctx.cr6.lt) goto loc_823712BC;
loc_823712B8:
	// li r30,3
	ctx.r30.s64 = 3;
loc_823712BC:
	// li r10,96
	ctx.r10.s64 = 96;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r10,r30,1,28,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0xE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF1);
	// li r5,0
	ctx.r5.s64 = 0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82370f80
	ctx.lr = 0x823712DC;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371318
	if (ctx.cr0.eq) goto loc_82371318;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370d80
	ctx.lr = 0x823712F0;
	sub_82370D80(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,4
	ctx.xer.ca = ctx.r5.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r5.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371310;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371320"))) PPC_WEAK_FUNC(sub_82371320);
PPC_FUNC_IMPL(__imp__sub_82371320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371328;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bgt cr6,0x82371344
	if (ctx.cr6.gt) goto loc_82371344;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8237135c
	goto loc_8237135C;
loc_82371344:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_8237135C:
	// li r4,112
	ctx.r4.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r31,1,28,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f80
	ctx.lr = 0x82371370;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823713ac
	if (ctx.cr0.eq) goto loc_823713AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370d80
	ctx.lr = 0x82371384;
	sub_82370D80(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,4
	ctx.xer.ca = ctx.r5.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823713A4;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823713AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

