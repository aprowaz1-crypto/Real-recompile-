#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A7E70"))) PPC_WEAK_FUNC(sub_823A7E70);
PPC_FUNC_IMPL(__imp__sub_823A7E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823a7ee0
	if (ctx.cr6.eq) goto loc_823A7EE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823a7ed8
	if (ctx.cr6.eq) goto loc_823A7ED8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823a7ed0
	if (ctx.cr6.eq) goto loc_823A7ED0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823a7ec8
	if (ctx.cr6.eq) goto loc_823A7EC8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823a7ec0
	if (ctx.cr6.eq) goto loc_823A7EC0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823a7eb8
	if (ctx.cr6.eq) goto loc_823A7EB8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823a7ee4
	if (!ctx.cr6.eq) goto loc_823A7EE4;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7EB8:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7EC0:
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7EC8:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7ED0:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7ED8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823a7ee4
	goto loc_823A7EE4;
loc_823A7EE0:
	// li r10,4
	ctx.r10.s64 = 4;
loc_823A7EE4:
	// stw r10,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7EEC"))) PPC_WEAK_FUNC(sub_823A7EEC);
PPC_FUNC_IMPL(__imp__sub_823A7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7EF0"))) PPC_WEAK_FUNC(sub_823A7EF0);
PPC_FUNC_IMPL(__imp__sub_823A7EF0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a7f38
	if (ctx.cr6.eq) goto loc_823A7F38;
loc_823A7F14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,2324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2324);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7f14
	if (!ctx.cr6.eq) goto loc_823A7F14;
loc_823A7F38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A7F60"))) PPC_WEAK_FUNC(sub_823A7F60);
PPC_FUNC_IMPL(__imp__sub_823A7F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A7F68;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823a7a70
	ctx.lr = 0x823A7F7C;
	sub_823A7A70(ctx, base);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// addi r30,r31,372
	ctx.r30.s64 = ctx.r31.s64 + 372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370360
	ctx.lr = 0x823A7F90;
	sub_82370360(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370228
	ctx.lr = 0x823A7F98;
	sub_82370228(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823a7fb4
	if (!ctx.cr0.eq) goto loc_823A7FB4;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// b 0x823a7fc0
	goto loc_823A7FC0;
loc_823A7FB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370228
	ctx.lr = 0x823A7FBC;
	sub_82370228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823A7FC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370218
	ctx.lr = 0x823A7FC8;
	sub_82370218(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823a7ff8
	if (!ctx.cr6.eq) goto loc_823A7FF8;
	// li r29,1001
	ctx.r29.s64 = 1001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82370218
	ctx.lr = 0x823A7FE8;
	sub_82370218(ctx, base);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370218
	ctx.lr = 0x823A7FF8;
	sub_82370218(ctx, base);
loc_823A7FF8:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a8030
	if (ctx.cr6.eq) goto loc_823A8030;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82370360
	ctx.lr = 0x823A8014;
	sub_82370360(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82370360
	ctx.lr = 0x823A8020;
	sub_82370360(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// b 0x823a80ac
	goto loc_823A80AC;
loc_823A8030:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r4,r31,476
	ctx.r4.s64 = ctx.r31.s64 + 476;
	// ld r8,468(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 468);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// std r8,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r8.u64);
	// bl 0x82248a40
	ctx.lr = 0x823A8060;
	sub_82248A40(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82389c98
	ctx.lr = 0x823A8070;
	sub_82389C98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823a80a8
	if (!ctx.cr0.eq) goto loc_823A80A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7e70
	ctx.lr = 0x823A8080;
	sub_823A7E70(ctx, base);
	// bl 0x82381898
	ctx.lr = 0x823A8084;
	sub_82381898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82389d10
	ctx.lr = 0x823A80A8;
	sub_82389D10(ctx, base);
loc_823A80A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823A80AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A80B4"))) PPC_WEAK_FUNC(sub_823A80B4);
PPC_FUNC_IMPL(__imp__sub_823A80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A80B8"))) PPC_WEAK_FUNC(sub_823A80B8);
PPC_FUNC_IMPL(__imp__sub_823A80B8) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-27300
	ctx.r11.s64 = ctx.r11.s64 + -27300;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8238a0b8
	ctx.lr = 0x823A80EC;
	sub_8238A0B8(ctx, base);
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x823A80F8;
	sub_82370088(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82370088
	ctx.lr = 0x823A8100;
	sub_82370088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823827b8
	ctx.lr = 0x823A8108;
	sub_823827B8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,24464
	ctx.r10.u64 = ctx.r10.u64 | 24464;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82370088
	ctx.lr = 0x823A8134;
	sub_82370088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7b00
	ctx.lr = 0x823A813C;
	sub_823A7B00(ctx, base);
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

__attribute__((alias("__imp__sub_823A8158"))) PPC_WEAK_FUNC(sub_823A8158);
PPC_FUNC_IMPL(__imp__sub_823A8158) {
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
	// addi r30,r3,516
	ctx.r30.s64 = ctx.r3.s64 + 516;
	// addi r11,r11,-27300
	ctx.r11.s64 = ctx.r11.s64 + -27300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823a7ef0
	ctx.lr = 0x823A8188;
	sub_823A7EF0(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x823700d8
	ctx.lr = 0x823A8190;
	sub_823700D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a7ef0
	ctx.lr = 0x823A8198;
	sub_823A7EF0(ctx, base);
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x823700d8
	ctx.lr = 0x823A81A4;
	sub_823700D8(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x823A81AC;
	sub_823700D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82389958
	ctx.lr = 0x823A81B4;
	sub_82389958(ctx, base);
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

__attribute__((alias("__imp__sub_823A81CC"))) PPC_WEAK_FUNC(sub_823A81CC);
PPC_FUNC_IMPL(__imp__sub_823A81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A81D0"))) PPC_WEAK_FUNC(sub_823A81D0);
PPC_FUNC_IMPL(__imp__sub_823A81D0) {
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
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a81f8
	if (ctx.cr6.eq) goto loc_823A81F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
loc_823A81F8:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823a820c
	if (ctx.cr6.eq) goto loc_823A820C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823a821c
	if (!ctx.cr6.eq) goto loc_823A821C;
loc_823A820C:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// bl 0x82389d10
	ctx.lr = 0x823A821C;
	sub_82389D10(ctx, base);
loc_823A821C:
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x823a7ef0
	ctx.lr = 0x823A8224;
	sub_823A7EF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A8244"))) PPC_WEAK_FUNC(sub_823A8244);
PPC_FUNC_IMPL(__imp__sub_823A8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8248"))) PPC_WEAK_FUNC(sub_823A8248);
PPC_FUNC_IMPL(__imp__sub_823A8248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A8250;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a84dc
	if (!ctx.cr6.eq) goto loc_823A84DC;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823a8428
	if (ctx.cr6.eq) goto loc_823A8428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823a8400
	if (ctx.cr6.eq) goto loc_823A8400;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823a8400
	if (ctx.cr6.eq) goto loc_823A8400;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823a8398
	if (ctx.cr6.eq) goto loc_823A8398;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823a836c
	if (ctx.cr6.eq) goto loc_823A836C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823a84d4
	if (!ctx.cr6.eq) goto loc_823A84D4;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823a82b4
	if (ctx.cr6.eq) goto loc_823A82B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// bl 0x823899f0
	ctx.lr = 0x823A82B4;
	sub_823899F0(ctx, base);
loc_823A82B4:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a82d0
	if (ctx.cr6.eq) goto loc_823A82D0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82389be8
	ctx.lr = 0x823A82C8;
	sub_82389BE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a84d0
	goto loc_823A84D0;
loc_823A82D0:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// ld r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 468);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r4,r31,476
	ctx.r4.s64 = ctx.r31.s64 + 476;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r10,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r10.u64);
	// bl 0x82248a40
	ctx.lr = 0x823A8300;
	sub_82248A40(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389c98
	ctx.lr = 0x823A8318;
	sub_82389C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a8350
	if (!ctx.cr0.eq) goto loc_823A8350;
	// bl 0x82381898
	ctx.lr = 0x823A8324;
	sub_82381898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7e70
	ctx.lr = 0x823A8340;
	sub_823A7E70(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389d10
	ctx.lr = 0x823A834C;
	sub_82389D10(ctx, base);
	// b 0x823a84d4
	goto loc_823A84D4;
loc_823A8350:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// b 0x823a84d4
	goto loc_823A84D4;
loc_823A836C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a84d4
	if (ctx.cr6.eq) goto loc_823A84D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7e70
	ctx.lr = 0x823A8380;
	sub_823A7E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82389d10
	ctx.lr = 0x823A8390;
	sub_82389D10(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823a84d0
	goto loc_823A84D0;
loc_823A8398:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a83bc
	if (ctx.cr6.eq) goto loc_823A83BC;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82389d10
	ctx.lr = 0x823A83B8;
	sub_82389D10(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
loc_823A83BC:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823a83e4
	if (!ctx.cr6.eq) goto loc_823A83E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// bl 0x82389a30
	ctx.lr = 0x823A83E4;
	sub_82389A30(ctx, base);
loc_823A83E4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a84d4
	if (ctx.cr6.eq) goto loc_823A84D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7e70
	ctx.lr = 0x823A83F8;
	sub_823A7E70(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// b 0x823a84ac
	goto loc_823A84AC;
loc_823A8400:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a83e4
	if (ctx.cr6.eq) goto loc_823A83E4;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82389d10
	ctx.lr = 0x823A8420;
	sub_82389D10(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// b 0x823a83e4
	goto loc_823A83E4;
loc_823A8428:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a844c
	if (ctx.cr6.eq) goto loc_823A844C;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82389d10
	ctx.lr = 0x823A8448;
	sub_82389D10(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
loc_823A844C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a84d4
	if (!ctx.cr6.eq) goto loc_823A84D4;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a84d4
	if (!ctx.cr6.eq) goto loc_823A84D4;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389da8
	ctx.lr = 0x823A8478;
	sub_82389DA8(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x823a7ef0
	ctx.lr = 0x823A8480;
	sub_823A7EF0(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a84bc
	if (ctx.cr6.eq) goto loc_823A84BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82389dd0
	ctx.lr = 0x823A8498;
	sub_82389DD0(ctx, base);
loc_823A8498:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a84cc
	if (!ctx.cr0.eq) goto loc_823A84CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7e70
	ctx.lr = 0x823A84A8;
	sub_823A7E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823A84AC:
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x82389d10
	ctx.lr = 0x823A84B4;
	sub_82389D10(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// b 0x823a84d4
	goto loc_823A84D4;
loc_823A84BC:
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// lwz r5,508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x82389e40
	ctx.lr = 0x823A84C8;
	sub_82389E40(ctx, base);
	// b 0x823a8498
	goto loc_823A8498;
loc_823A84CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823A84D0:
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_823A84D4:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8238a368
	ctx.lr = 0x823A84DC;
	sub_8238A368(ctx, base);
loc_823A84DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A84E4"))) PPC_WEAK_FUNC(sub_823A84E4);
PPC_FUNC_IMPL(__imp__sub_823A84E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A84E8"))) PPC_WEAK_FUNC(sub_823A84E8);
PPC_FUNC_IMPL(__imp__sub_823A84E8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x823a7ef0
	ctx.lr = 0x823A8510;
	sub_823A7EF0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x823a8534
	goto loc_823A8534;
loc_823A8518:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,2324(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2324);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82383c10
	ctx.lr = 0x823A852C;
	sub_82383C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a8558
	if (ctx.cr0.eq) goto loc_823A8558;
loc_823A8534:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a8518
	if (!ctx.cr6.eq) goto loc_823A8518;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A8540:
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
loc_823A8558:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a8540
	goto loc_823A8540;
}

__attribute__((alias("__imp__sub_823A8560"))) PPC_WEAK_FUNC(sub_823A8560);
PPC_FUNC_IMPL(__imp__sub_823A8560) {
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
	// bl 0x823a8158
	ctx.lr = 0x823A8580;
	sub_823A8158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a8590
	if (ctx.cr0.eq) goto loc_823A8590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823A8590;
	sub_82357128(ctx, base);
loc_823A8590:
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

__attribute__((alias("__imp__sub_823A85AC"))) PPC_WEAK_FUNC(sub_823A85AC);
PPC_FUNC_IMPL(__imp__sub_823A85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A85B0"))) PPC_WEAK_FUNC(sub_823A85B0);
PPC_FUNC_IMPL(__imp__sub_823A85B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x8238a4c8
	ctx.lr = 0x823A85E0;
	sub_8238A4C8(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// addi r3,r30,368
	ctx.r3.s64 = ctx.r30.s64 + 368;
	// stw r11,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r11.u32);
	// bl 0x823a7a70
	ctx.lr = 0x823A85F4;
	sub_823A7A70(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r4,r31,516
	ctx.r4.s64 = ctx.r31.s64 + 516;
	// addi r3,r30,516
	ctx.r3.s64 = ctx.r30.s64 + 516;
	// stw r11,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r11.u32);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r11,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r11,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// stw r11,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r11.u32);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// stw r11,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// bl 0x823a84e8
	ctx.lr = 0x823A8628;
	sub_823A84E8(ctx, base);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// addi r3,r30,532
	ctx.r3.s64 = ctx.r30.s64 + 532;
	// bl 0x82370360
	ctx.lr = 0x823A8634;
	sub_82370360(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stw r11,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A8654"))) PPC_WEAK_FUNC(sub_823A8654);
PPC_FUNC_IMPL(__imp__sub_823A8654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8658"))) PPC_WEAK_FUNC(sub_823A8658);
PPC_FUNC_IMPL(__imp__sub_823A8658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A8660;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-27300
	ctx.r11.s64 = ctx.r11.s64 + -27300;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8238a0b8
	ctx.lr = 0x823A8688;
	sub_8238A0B8(ctx, base);
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x823A8694;
	sub_82370088(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82370088
	ctx.lr = 0x823A869C;
	sub_82370088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823827b8
	ctx.lr = 0x823A86A4;
	sub_823827B8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,24464
	ctx.r11.u64 = ctx.r11.u64 | 24464;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stw r10,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r10.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// bl 0x82370088
	ctx.lr = 0x823A86D0;
	sub_82370088(ctx, base);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7b00
	ctx.lr = 0x823A86DC;
	sub_823A7B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a85b0
	ctx.lr = 0x823A86E8;
	sub_823A85B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A86F4"))) PPC_WEAK_FUNC(sub_823A86F4);
PPC_FUNC_IMPL(__imp__sub_823A86F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A86F8"))) PPC_WEAK_FUNC(sub_823A86F8);
PPC_FUNC_IMPL(__imp__sub_823A86F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A870C"))) PPC_WEAK_FUNC(sub_823A870C);
PPC_FUNC_IMPL(__imp__sub_823A870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8710"))) PPC_WEAK_FUNC(sub_823A8710);
PPC_FUNC_IMPL(__imp__sub_823A8710) {
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
	// beq cr6,0x823a873c
	if (ctx.cr6.eq) goto loc_823A873C;
	// bl 0x82357128
	ctx.lr = 0x823A8734;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823A873C:
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

__attribute__((alias("__imp__sub_823A8750"))) PPC_WEAK_FUNC(sub_823A8750);
PPC_FUNC_IMPL(__imp__sub_823A8750) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq cr6,0x823a8788
	if (ctx.cr6.eq) goto loc_823A8788;
	// bl 0x82357128
	ctx.lr = 0x823A8784;
	sub_82357128(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_823A8788:
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

__attribute__((alias("__imp__sub_823A87A0"))) PPC_WEAK_FUNC(sub_823A87A0);
PPC_FUNC_IMPL(__imp__sub_823A87A0) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a8834
	if (ctx.cr6.eq) goto loc_823A8834;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a880c
	if (ctx.cr6.eq) goto loc_823A880C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a87f0
	if (ctx.cr6.eq) goto loc_823A87F0;
	// bl 0x82357128
	ctx.lr = 0x823A87E8;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823A87F0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823570e0
	ctx.lr = 0x823A87F8;
	sub_823570E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823570f0
	ctx.lr = 0x823A8800;
	sub_823570F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A880C;
	sub_823570E0(ctx, base);
loc_823A880C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x823a8834
	if (ctx.cr6.eq) goto loc_823A8834;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82358508
	ctx.lr = 0x823A8834;
	sub_82358508(ctx, base);
loc_823A8834:
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

__attribute__((alias("__imp__sub_823A8850"))) PPC_WEAK_FUNC(sub_823A8850);
PPC_FUNC_IMPL(__imp__sub_823A8850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A8858;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a8904
	if (ctx.cr6.eq) goto loc_823A8904;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a8904
	if (!ctx.cr6.lt) goto loc_823A8904;
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a88a8
	if (ctx.cr6.lt) goto loc_823A88A8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a8918
	if (!ctx.cr6.gt) goto loc_823A8918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x823a8914
	goto loc_823A8914;
loc_823A88A8:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x823a8918
	if (!ctx.cr6.gt) goto loc_823A8918;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r28,r29,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82358520
	ctx.lr = 0x823A88CC;
	sub_82358520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823A88E0;
	sub_823585A0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x823a88f4
	if (ctx.cr6.gt) goto loc_823A88F4;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x823a8918
	goto loc_823A8918;
loc_823A88F4:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x823a8918
	goto loc_823A8918;
loc_823A8904:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823A8914:
	// bl 0x823585a0
	ctx.lr = 0x823A8918;
	sub_823585A0(ctx, base);
loc_823A8918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A8920"))) PPC_WEAK_FUNC(sub_823A8920);
PPC_FUNC_IMPL(__imp__sub_823A8920) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a8958
	if (!ctx.cr6.gt) goto loc_823A8958;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a8978
	goto loc_823A8978;
loc_823A8958:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8968;
	sub_82358508(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A8978:
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

__attribute__((alias("__imp__sub_823A8990"))) PPC_WEAK_FUNC(sub_823A8990);
PPC_FUNC_IMPL(__imp__sub_823A8990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A8998;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a89d0
	if (ctx.cr6.lt) goto loc_823A89D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a8920
	ctx.lr = 0x823A89CC;
	sub_823A8920(ctx, base);
	// b 0x823a8a20
	goto loc_823A8A20;
loc_823A89D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a89e8
	if (!ctx.cr6.gt) goto loc_823A89E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a8a20
	goto loc_823A8A20;
loc_823A89E8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x82358520
	ctx.lr = 0x823A89FC;
	sub_82358520(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8A10;
	sub_82358508(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A8A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A8A28"))) PPC_WEAK_FUNC(sub_823A8A28);
PPC_FUNC_IMPL(__imp__sub_823A8A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a8a3c
	if (ctx.cr6.lt) goto loc_823A8A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A8A3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8A48"))) PPC_WEAK_FUNC(sub_823A8A48);
PPC_FUNC_IMPL(__imp__sub_823A8A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A8A50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a8a9c
	if (ctx.cr6.eq) goto loc_823A8A9C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a8a80
	if (ctx.cr6.eq) goto loc_823A8A80;
	// bl 0x82357128
	ctx.lr = 0x823A8A7C;
	sub_82357128(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_823A8A80:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823570e0
	ctx.lr = 0x823A8A88;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823A8A90;
	sub_823570F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A8A9C;
	sub_823570E0(ctx, base);
loc_823A8A9C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823A8AB0;
	sub_823585A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A8ABC"))) PPC_WEAK_FUNC(sub_823A8ABC);
PPC_FUNC_IMPL(__imp__sub_823A8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8AC0"))) PPC_WEAK_FUNC(sub_823A8AC0);
PPC_FUNC_IMPL(__imp__sub_823A8AC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8AD8"))) PPC_WEAK_FUNC(sub_823A8AD8);
PPC_FUNC_IMPL(__imp__sub_823A8AD8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x823a8b14
	if (ctx.cr6.eq) goto loc_823A8B14;
	// bl 0x82357128
	ctx.lr = 0x823A8B10;
	sub_82357128(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_823A8B14:
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

__attribute__((alias("__imp__sub_823A8B2C"))) PPC_WEAK_FUNC(sub_823A8B2C);
PPC_FUNC_IMPL(__imp__sub_823A8B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8B30"))) PPC_WEAK_FUNC(sub_823A8B30);
PPC_FUNC_IMPL(__imp__sub_823A8B30) {
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
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823a8bd0
	if (ctx.cr6.eq) goto loc_823A8BD0;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x823a8b88
	if (ctx.cr6.eq) goto loc_823A8B88;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a8b88
	if (!ctx.cr6.eq) goto loc_823A8B88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x823a8bc0
	goto loc_823A8BC0;
loc_823A8B88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823a8ba4
	if (ctx.cr6.eq) goto loc_823A8BA4;
	// bl 0x82357128
	ctx.lr = 0x823A8B9C;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823A8BA4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823570e0
	ctx.lr = 0x823A8BAC;
	sub_823570E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823570f0
	ctx.lr = 0x823A8BB4;
	sub_823570F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A8BC0;
	sub_823570E0(ctx, base);
loc_823A8BC0:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82358508
	ctx.lr = 0x823A8BD0;
	sub_82358508(ctx, base);
loc_823A8BD0:
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

__attribute__((alias("__imp__sub_823A8BEC"))) PPC_WEAK_FUNC(sub_823A8BEC);
PPC_FUNC_IMPL(__imp__sub_823A8BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8BF0"))) PPC_WEAK_FUNC(sub_823A8BF0);
PPC_FUNC_IMPL(__imp__sub_823A8BF0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x823585a0
	sub_823585A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A8C0C"))) PPC_WEAK_FUNC(sub_823A8C0C);
PPC_FUNC_IMPL(__imp__sub_823A8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8C10"))) PPC_WEAK_FUNC(sub_823A8C10);
PPC_FUNC_IMPL(__imp__sub_823A8C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A8C18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,8192
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8192, ctx.xer);
	// ble cr6,0x823a8c30
	if (!ctx.cr6.gt) goto loc_823A8C30;
	// li r30,8192
	ctx.r30.s64 = 8192;
loc_823A8C30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823a8c70
	if (ctx.cr6.eq) goto loc_823A8C70;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a8c54
	if (ctx.cr6.eq) goto loc_823A8C54;
	// bl 0x82357128
	ctx.lr = 0x823A8C50;
	sub_82357128(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_823A8C54:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823570e0
	ctx.lr = 0x823A8C5C;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823A8C64;
	sub_823570F0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A8C70;
	sub_823570E0(ctx, base);
loc_823A8C70:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823A8C88;
	sub_823585A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A8C94"))) PPC_WEAK_FUNC(sub_823A8C94);
PPC_FUNC_IMPL(__imp__sub_823A8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8C98"))) PPC_WEAK_FUNC(sub_823A8C98);
PPC_FUNC_IMPL(__imp__sub_823A8C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A8CA0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a8cd0
	if (ctx.cr6.lt) goto loc_823A8CD0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x823a8cd4
	goto loc_823A8CD4;
loc_823A8CD0:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823A8CD4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823a8ce4
	if (!ctx.cr6.lt) goto loc_823A8CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a8d48
	goto loc_823A8D48;
loc_823A8CE4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823a8d18
	if (ctx.cr6.gt) goto loc_823A8D18;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8D08;
	sub_82358508(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x823a8d44
	goto loc_823A8D44;
loc_823A8D18:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8D2C;
	sub_82358508(ctx, base);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8D40;
	sub_82358508(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_823A8D44:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A8D48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A8D50"))) PPC_WEAK_FUNC(sub_823A8D50);
PPC_FUNC_IMPL(__imp__sub_823A8D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A8D58;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a8e34
	if (ctx.cr6.eq) goto loc_823A8E34;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a8e34
	if (ctx.cr6.eq) goto loc_823A8E34;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// blt cr6,0x823a8d94
	if (ctx.cr6.lt) goto loc_823A8D94;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x823a8d9c
	goto loc_823A8D9C;
loc_823A8D94:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_823A8D9C:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823a8dac
	if (ctx.cr6.lt) goto loc_823A8DAC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x823a8dc4
	goto loc_823A8DC4;
loc_823A8DAC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a8dbc
	if (ctx.cr6.lt) goto loc_823A8DBC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x823a8dc4
	goto loc_823A8DC4;
loc_823A8DBC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823A8DC4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x823a8e00
	if (ctx.cr6.gt) goto loc_823A8E00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8DE8;
	sub_82358508(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823a8e2c
	if (ctx.cr6.eq) goto loc_823A8E2C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x823a8e2c
	goto loc_823A8E2C;
loc_823A8E00:
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8E0C;
	sub_82358508(ctx, base);
	// subf r28,r30,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x823A8E20;
	sub_82358508(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823a8e2c
	if (ctx.cr6.eq) goto loc_823A8E2C;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_823A8E2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x823a8e38
	goto loc_823A8E38;
loc_823A8E34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8E38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A8E40"))) PPC_WEAK_FUNC(sub_823A8E40);
PPC_FUNC_IMPL(__imp__sub_823A8E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A8E48;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8750
	ctx.lr = 0x823A8E5C;
	sub_823A8750(ctx, base);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8750
	ctx.lr = 0x823A8E68;
	sub_823A8750(ctx, base);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8750
	ctx.lr = 0x823A8E74;
	sub_823A8750(ctx, base);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8750
	ctx.lr = 0x823A8E80;
	sub_823A8750(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8710
	ctx.lr = 0x823A8E88;
	sub_823A8710(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x823ab568
	ctx.lr = 0x823A8E94;
	sub_823AB568(ctx, base);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x823ab568
	ctx.lr = 0x823A8E9C;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8710
	ctx.lr = 0x823A8EA4;
	sub_823A8710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8710
	ctx.lr = 0x823A8EAC;
	sub_823A8710(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8710
	ctx.lr = 0x823A8EB4;
	sub_823A8710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab568
	ctx.lr = 0x823A8EBC;
	sub_823AB568(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A8EC4"))) PPC_WEAK_FUNC(sub_823A8EC4);
PPC_FUNC_IMPL(__imp__sub_823A8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8EC8"))) PPC_WEAK_FUNC(sub_823A8EC8);
PPC_FUNC_IMPL(__imp__sub_823A8EC8) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a8850
	ctx.lr = 0x823A8EF0;
	sub_823A8850(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a8850
	ctx.lr = 0x823A8F00;
	sub_823A8850(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a8850
	ctx.lr = 0x823A8F10;
	sub_823A8850(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a8850
	ctx.lr = 0x823A8F20;
	sub_823A8850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,200
	ctx.r9.s64 = 200;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// sth r10,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r10.u16);
	// sth r9,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r9.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x823A8F48;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a8f58
	if (ctx.cr0.eq) goto loc_823A8F58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x823A8F58;
	sub_8237D170(ctx, base);
loc_823A8F58:
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x823A8F64;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a8f74
	if (ctx.cr0.eq) goto loc_823A8F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x823A8F74;
	sub_8237D170(ctx, base);
loc_823A8F74:
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

__attribute__((alias("__imp__sub_823A8F8C"))) PPC_WEAK_FUNC(sub_823A8F8C);
PPC_FUNC_IMPL(__imp__sub_823A8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8F90"))) PPC_WEAK_FUNC(sub_823A8F90);
PPC_FUNC_IMPL(__imp__sub_823A8F90) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a8ff4
	if (ctx.cr6.eq) goto loc_823A8FF4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823a87a0
	ctx.lr = 0x823A8FC0;
	sub_823A87A0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823a87a0
	ctx.lr = 0x823A8FCC;
	sub_823A87A0(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823a87a0
	ctx.lr = 0x823A8FD8;
	sub_823A87A0(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82248a40
	ctx.lr = 0x823A8FE8;
	sub_82248A40(ctx, base);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823a87a0
	ctx.lr = 0x823A8FF4;
	sub_823A87A0(ctx, base);
loc_823A8FF4:
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

__attribute__((alias("__imp__sub_823A9010"))) PPC_WEAK_FUNC(sub_823A9010);
PPC_FUNC_IMPL(__imp__sub_823A9010) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aaf20
	sub_823AAF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A9014"))) PPC_WEAK_FUNC(sub_823A9014);
PPC_FUNC_IMPL(__imp__sub_823A9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9018"))) PPC_WEAK_FUNC(sub_823A9018);
PPC_FUNC_IMPL(__imp__sub_823A9018) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aafe8
	sub_823AAFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A901C"))) PPC_WEAK_FUNC(sub_823A901C);
PPC_FUNC_IMPL(__imp__sub_823A901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9020"))) PPC_WEAK_FUNC(sub_823A9020);
PPC_FUNC_IMPL(__imp__sub_823A9020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x823a8920
	sub_823A8920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A9040"))) PPC_WEAK_FUNC(sub_823A9040);
PPC_FUNC_IMPL(__imp__sub_823A9040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9044"))) PPC_WEAK_FUNC(sub_823A9044);
PPC_FUNC_IMPL(__imp__sub_823A9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9048"))) PPC_WEAK_FUNC(sub_823A9048);
PPC_FUNC_IMPL(__imp__sub_823A9048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823a9064
	if (!ctx.cr0.eq) goto loc_823A9064;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823A9064:
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// rlwinm r10,r11,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r11,r9,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm. r9,r8,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823a9098
	if (ctx.cr0.eq) goto loc_823A9098;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9090
	if (!ctx.cr6.gt) goto loc_823A9090;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// b 0x823a9098
	goto loc_823A9098;
loc_823A9090:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
loc_823A9098:
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A90A8"))) PPC_WEAK_FUNC(sub_823A90A8);
PPC_FUNC_IMPL(__imp__sub_823A90A8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,200
	ctx.r9.s64 = 200;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// bl 0x823a86f8
	ctx.lr = 0x823A90E0;
	sub_823A86F8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823a86f8
	ctx.lr = 0x823A90E8;
	sub_823A86F8(ctx, base);
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

__attribute__((alias("__imp__sub_823A9100"))) PPC_WEAK_FUNC(sub_823A9100);
PPC_FUNC_IMPL(__imp__sub_823A9100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A9108;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab568
	ctx.lr = 0x823A9114;
	sub_823AB568(ctx, base);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A9120;
	sub_823A86F8(ctx, base);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A912C;
	sub_823A86F8(ctx, base);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A9138;
	sub_823A86F8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x823a90a8
	ctx.lr = 0x823A9140;
	sub_823A90A8(ctx, base);
	// addi r27,r31,72
	ctx.r27.s64 = ctx.r31.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A914C;
	sub_823A86F8(ctx, base);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8a48
	ctx.lr = 0x823A9158;
	sub_823A8A48(ctx, base);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a48
	ctx.lr = 0x823A9164;
	sub_823A8A48(ctx, base);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8a48
	ctx.lr = 0x823A9170;
	sub_823A8A48(ctx, base);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8a48
	ctx.lr = 0x823A917C;
	sub_823A8A48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A9190"))) PPC_WEAK_FUNC(sub_823A9190);
PPC_FUNC_IMPL(__imp__sub_823A9190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfc r11,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subfze r3,r10
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A91AC"))) PPC_WEAK_FUNC(sub_823A91AC);
PPC_FUNC_IMPL(__imp__sub_823A91AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A91B0"))) PPC_WEAK_FUNC(sub_823A91B0);
PPC_FUNC_IMPL(__imp__sub_823A91B0) {
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
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r9,r11,5,16,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xFFE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF001F);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// rlwinm. r8,r5,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// beq 0x823a91fc
	if (ctx.cr0.eq) goto loc_823A91FC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// b 0x823a9204
	goto loc_823A9204;
loc_823A91FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_823A9204:
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r11.u16);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823A9230;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x823A9238;
	sub_8237D130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A925C"))) PPC_WEAK_FUNC(sub_823A925C);
PPC_FUNC_IMPL(__imp__sub_823A925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9260"))) PPC_WEAK_FUNC(sub_823A9260);
PPC_FUNC_IMPL(__imp__sub_823A9260) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,156(r4)
	PPC_STORE_U32(ctx.r4.u32 + 156, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82389a38
	ctx.lr = 0x823A928C;
	sub_82389A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823a92a4
	if (!ctx.cr0.eq) goto loc_823A92A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-32516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	// bl 0x82389a30
	ctx.lr = 0x823A92A4;
	sub_82389A30(ctx, base);
loc_823A92A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389a88
	ctx.lr = 0x823A92AC;
	sub_82389A88(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x8237d130
	ctx.lr = 0x823A92B4;
	sub_8237D130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389ac8
	ctx.lr = 0x823A92BC;
	sub_82389AC8(ctx, base);
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

__attribute__((alias("__imp__sub_823A92D8"))) PPC_WEAK_FUNC(sub_823A92D8);
PPC_FUNC_IMPL(__imp__sub_823A92D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A92E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r4,220
	ctx.r31.s64 = ctx.r4.s64 + 220;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823a8c98
	ctx.lr = 0x823A931C;
	sub_823A8C98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a8c98
	ctx.lr = 0x823A9334;
	sub_823A8C98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A9340"))) PPC_WEAK_FUNC(sub_823A9340);
PPC_FUNC_IMPL(__imp__sub_823A9340) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82389a88
	ctx.lr = 0x823A9364;
	sub_82389A88(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aafe8
	ctx.lr = 0x823A9378;
	sub_823AAFE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A939C"))) PPC_WEAK_FUNC(sub_823A939C);
PPC_FUNC_IMPL(__imp__sub_823A939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A93A0"))) PPC_WEAK_FUNC(sub_823A93A0);
PPC_FUNC_IMPL(__imp__sub_823A93A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823A93A8;
	sub_82248774(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82370228
	ctx.lr = 0x823A93BC;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x823aac80
	ctx.lr = 0x823A93CC;
	sub_823AAC80(ctx, base);
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a951c
	if (ctx.cr6.eq) goto loc_823A951C;
	// li r24,0
	ctx.r24.s64 = 0;
loc_823A93E0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82350cf0
	ctx.lr = 0x823A9410;
	sub_82350CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x823a951c
	if (!ctx.cr0.gt) goto loc_823A951C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r31,76(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// addi r28,r26,72
	ctx.r28.s64 = ctx.r26.s64 + 72;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9438;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// bl 0x82350d10
	ctx.lr = 0x823A9454;
	sub_82350D10(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x823a93e0
	if (!ctx.cr0.gt) goto loc_823A93E0;
	// lwz r31,12(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a93e0
	if (ctx.cr6.eq) goto loc_823A93E0;
loc_823A946C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823a948c
	if (!ctx.cr6.eq) goto loc_823A948C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_823A948C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aa770
	ctx.lr = 0x823A9498;
	sub_823AA770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a94ac
	if (!ctx.cr0.eq) goto loc_823A94AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a946c
	if (!ctx.cr6.eq) goto loc_823A946C;
	// b 0x823a94dc
	goto loc_823A94DC;
loc_823A94AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A94B8;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82389b08
	ctx.lr = 0x823A94C8;
	sub_82389B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82389b10
	ctx.lr = 0x823A94D0;
	sub_82389B10(ctx, base);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a93e0
	if (!ctx.cr6.eq) goto loc_823A93E0;
loc_823A94DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823a93e0
	if (ctx.cr6.eq) goto loc_823A93E0;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa898
	ctx.lr = 0x823A94F4;
	sub_823AA898(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9500;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82389b08
	ctx.lr = 0x823A9510;
	sub_82389B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389b10
	ctx.lr = 0x823A9518;
	sub_82389B10(ctx, base);
	// b 0x823a93e0
	goto loc_823A93E0;
loc_823A951C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823A9524"))) PPC_WEAK_FUNC(sub_823A9524);
PPC_FUNC_IMPL(__imp__sub_823A9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9528"))) PPC_WEAK_FUNC(sub_823A9528);
PPC_FUNC_IMPL(__imp__sub_823A9528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A9530;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9660
	if (ctx.cr6.eq) goto loc_823A9660;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r9,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823a9660
	if (ctx.cr6.eq) goto loc_823A9660;
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
loc_823A9570:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A957C;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A958C;
	sub_82358508(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823a9660
	if (!ctx.cr0.eq) goto loc_823A9660;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82389fa0
	ctx.lr = 0x823A95B4;
	sub_82389FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9660
	if (ctx.cr0.eq) goto loc_823A9660;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r28,220
	ctx.r30.s64 = ctx.r28.s64 + 220;
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a8c98
	ctx.lr = 0x823A95E8;
	sub_823A8C98(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r27,r11,27,21,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// bl 0x823a8a28
	ctx.lr = 0x823A95FC;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8c98
	ctx.lr = 0x823A9614;
	sub_823A8C98(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x823a8850
	ctx.lr = 0x823A962C;
	sub_823A8850(ctx, base);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,42(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// bl 0x823a9048
	ctx.lr = 0x823A9644;
	sub_823A9048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9654
	if (ctx.cr0.eq) goto loc_823A9654;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
loc_823A9654:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x823a9570
	if (ctx.cr6.gt) goto loc_823A9570;
loc_823A9660:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A9668"))) PPC_WEAK_FUNC(sub_823A9668);
PPC_FUNC_IMPL(__imp__sub_823A9668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A9670;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// rlwinm r9,r9,0,27,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// rlwinm r10,r10,0,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// rlwinm r9,r9,0,16,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x823A96C4;
	sub_82358508(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a9720
	if (!ctx.cr6.gt) goto loc_823A9720;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
loc_823A96D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A96E0;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A96F0;
	sub_82358508(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a9744
	if (ctx.cr0.eq) goto loc_823A9744;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a96d4
	if (ctx.cr6.lt) goto loc_823A96D4;
loc_823A9720:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823a8920
	ctx.lr = 0x823A9738;
	sub_823A8920(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A973C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A9744:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a973c
	goto loc_823A973C;
}

__attribute__((alias("__imp__sub_823A974C"))) PPC_WEAK_FUNC(sub_823A974C);
PPC_FUNC_IMPL(__imp__sub_823A974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9750"))) PPC_WEAK_FUNC(sub_823A9750);
PPC_FUNC_IMPL(__imp__sub_823A9750) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91b0
	ctx.lr = 0x823A9794;
	sub_823A91B0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A97A8;
	sub_82389F00(ctx, base);
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

__attribute__((alias("__imp__sub_823A97BC"))) PPC_WEAK_FUNC(sub_823A97BC);
PPC_FUNC_IMPL(__imp__sub_823A97BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A97C0"))) PPC_WEAK_FUNC(sub_823A97C0);
PPC_FUNC_IMPL(__imp__sub_823A97C0) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91b0
	ctx.lr = 0x823A9804;
	sub_823A91B0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9818;
	sub_82389F00(ctx, base);
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

__attribute__((alias("__imp__sub_823A982C"))) PPC_WEAK_FUNC(sub_823A982C);
PPC_FUNC_IMPL(__imp__sub_823A982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9830"))) PPC_WEAK_FUNC(sub_823A9830);
PPC_FUNC_IMPL(__imp__sub_823A9830) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91b0
	ctx.lr = 0x823A9874;
	sub_823A91B0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9888;
	sub_82389F00(ctx, base);
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

__attribute__((alias("__imp__sub_823A989C"))) PPC_WEAK_FUNC(sub_823A989C);
PPC_FUNC_IMPL(__imp__sub_823A989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A98A0"))) PPC_WEAK_FUNC(sub_823A98A0);
PPC_FUNC_IMPL(__imp__sub_823A98A0) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91b0
	ctx.lr = 0x823A98E4;
	sub_823A91B0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A98F8;
	sub_82389F00(ctx, base);
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

__attribute__((alias("__imp__sub_823A990C"))) PPC_WEAK_FUNC(sub_823A990C);
PPC_FUNC_IMPL(__imp__sub_823A990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9910"))) PPC_WEAK_FUNC(sub_823A9910);
PPC_FUNC_IMPL(__imp__sub_823A9910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A9918;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a91b0
	ctx.lr = 0x823A9954;
	sub_823A91B0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9968;
	sub_82389F00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a99f8
	if (ctx.cr0.eq) goto loc_823A99F8;
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// beq cr6,0x823a99e4
	if (ctx.cr6.eq) goto loc_823A99E4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// rlwinm r11,r11,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r30,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r30.u16);
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823a8a28
	ctx.lr = 0x823A99B0;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A99C0;
	sub_82358508(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,42(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// bl 0x823a9048
	ctx.lr = 0x823A99CC;
	sub_823A9048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a99e4
	if (ctx.cr0.eq) goto loc_823A99E4;
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_823A99E4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A99F8;
	sub_82389F00(ctx, base);
loc_823A99F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A9A00"))) PPC_WEAK_FUNC(sub_823A9A00);
PPC_FUNC_IMPL(__imp__sub_823A9A00) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91b0
	ctx.lr = 0x823A9A44;
	sub_823A91B0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9A58;
	sub_82389F00(ctx, base);
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

__attribute__((alias("__imp__sub_823A9A6C"))) PPC_WEAK_FUNC(sub_823A9A6C);
PPC_FUNC_IMPL(__imp__sub_823A9A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9A70"))) PPC_WEAK_FUNC(sub_823A9A70);
PPC_FUNC_IMPL(__imp__sub_823A9A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823A9A78;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r31.u16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82358508
	ctx.lr = 0x823A9AC4;
	sub_82358508(ctx, base);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// addis r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 65536;
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a91b0
	ctx.lr = 0x823A9AF0;
	sub_823A91B0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823a9c1c
	if (ctx.cr6.eq) goto loc_823A9C1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a9c1c
	if (ctx.cr6.eq) goto loc_823A9C1C;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823a9c14
	if (ctx.cr0.eq) goto loc_823A9C14;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// rlwinm r10,r9,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r10,r10,0,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bge cr6,0x823a9b80
	if (!ctx.cr6.lt) goto loc_823A9B80;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
loc_823A9B3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9B48;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A9B58;
	sub_82358508(ctx, base);
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a9b80
	if (ctx.cr0.eq) goto loc_823A9B80;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a9b3c
	if (ctx.cr6.lt) goto loc_823A9B3C;
loc_823A9B80:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a9c14
	if (!ctx.cr6.gt) goto loc_823A9C14;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
loc_823A9B90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9B9C;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A9BAC;
	sub_82358508(ctx, base);
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823a9bf0
	if (!ctx.cr0.eq) goto loc_823A9BF0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r29,r11,27,21,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// bl 0x823a8a28
	ctx.lr = 0x823A9BD4;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82389f00
	ctx.lr = 0x823A9BE8;
	sub_82389F00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9c54
	if (ctx.cr0.eq) goto loc_823A9C54;
loc_823A9BF0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a9b90
	if (ctx.cr6.lt) goto loc_823A9B90;
loc_823A9C14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8238a240
	ctx.lr = 0x823A9C1C;
	sub_8238A240(ctx, base);
loc_823A9C1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r23,16
	ctx.r5.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9C30;
	sub_82389F00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9c54
	if (ctx.cr0.eq) goto loc_823A9C54;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r24,-2
	ctx.r5.s64 = ctx.r24.s64 + -2;
	// addi r4,r25,2
	ctx.r4.s64 = ctx.r25.s64 + 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82389f00
	ctx.lr = 0x823A9C4C;
	sub_82389F00(ctx, base);
loc_823A9C4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823A9C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a9c4c
	goto loc_823A9C4C;
}

__attribute__((alias("__imp__sub_823A9C5C"))) PPC_WEAK_FUNC(sub_823A9C5C);
PPC_FUNC_IMPL(__imp__sub_823A9C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9C60"))) PPC_WEAK_FUNC(sub_823A9C60);
PPC_FUNC_IMPL(__imp__sub_823A9C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A9C68;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823a9cf4
	if (ctx.cr6.eq) goto loc_823A9CF4;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_823A9CA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9CAC;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A9CBC;
	sub_82358508(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// bl 0x823a9048
	ctx.lr = 0x823A9CC8;
	sub_823A9048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9cf4
	if (ctx.cr0.eq) goto loc_823A9CF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x823a8850
	ctx.lr = 0x823A9CE8;
	sub_823A8850(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a9ca0
	if (!ctx.cr6.eq) goto loc_823A9CA0;
loc_823A9CF4:
	// lhz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823a9d70
	if (!ctx.cr0.eq) goto loc_823A9D70;
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// rlwinm r11,r9,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// xor r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm. r8,r8,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823a9d40
	if (ctx.cr0.eq) goto loc_823A9D40;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9d38
	if (!ctx.cr6.gt) goto loc_823A9D38;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// b 0x823a9d40
	goto loc_823A9D40;
loc_823A9D38:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
loc_823A9D40:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9d50
	if (!ctx.cr6.gt) goto loc_823A9D50;
	// rlwinm r11,r9,0,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
loc_823A9D50:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x823A9D5C;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9dd8
	if (ctx.cr0.eq) goto loc_823A9DD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x823A9D6C;
	sub_8237D170(ctx, base);
	// b 0x823a9dd8
	goto loc_823A9DD8;
loc_823A9D70:
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r11,r8,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm. r8,r7,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823a9da4
	if (ctx.cr0.eq) goto loc_823A9DA4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9d9c
	if (!ctx.cr6.gt) goto loc_823A9D9C;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// b 0x823a9da4
	goto loc_823A9DA4;
loc_823A9D9C:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
loc_823A9DA4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9dd8
	if (!ctx.cr6.gt) goto loc_823A9DD8;
	// rlwinm r11,r9,0,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x823A9DC0;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a9dd8
	if (!ctx.cr0.eq) goto loc_823A9DD8;
	// li r11,200
	ctx.r11.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// bl 0x8237d130
	ctx.lr = 0x823A9DD8;
	sub_8237D130(ctx, base);
loc_823A9DD8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823a9df4
	if (ctx.cr0.eq) goto loc_823A9DF4;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_823A9DF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A9DFC"))) PPC_WEAK_FUNC(sub_823A9DFC);
PPC_FUNC_IMPL(__imp__sub_823A9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9E00"))) PPC_WEAK_FUNC(sub_823A9E00);
PPC_FUNC_IMPL(__imp__sub_823A9E00) {
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
	// bl 0x823a97c0
	ctx.lr = 0x823A9E20;
	sub_823A97C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82389a38
	ctx.lr = 0x823A9E30;
	sub_82389A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823a9e48
	if (!ctx.cr0.eq) goto loc_823A9E48;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-32516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	// bl 0x82389a30
	ctx.lr = 0x823A9E48;
	sub_82389A30(ctx, base);
loc_823A9E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389a88
	ctx.lr = 0x823A9E50;
	sub_82389A88(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x8237d130
	ctx.lr = 0x823A9E58;
	sub_8237D130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389ac8
	ctx.lr = 0x823A9E60;
	sub_82389AC8(ctx, base);
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

__attribute__((alias("__imp__sub_823A9E7C"))) PPC_WEAK_FUNC(sub_823A9E7C);
PPC_FUNC_IMPL(__imp__sub_823A9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9E80"))) PPC_WEAK_FUNC(sub_823A9E80);
PPC_FUNC_IMPL(__imp__sub_823A9E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823A9E88;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x823A9EC8;
	sub_82358508(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a9fb0
	if (!ctx.cr6.gt) goto loc_823A9FB0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
loc_823A9EE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823A9EEC;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823A9EFC;
	sub_82358508(ctx, base);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823a9f64
	if (!ctx.cr0.eq) goto loc_823A9F64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r30,r11,27,21,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// bl 0x823a8a28
	ctx.lr = 0x823A9F28;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// bl 0x823aa900
	ctx.lr = 0x823A9F38;
	sub_823AA900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823a9fb0
	if (ctx.cr0.eq) goto loc_823A9FB0;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r9,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x823a9f94
	goto loc_823A9F94;
loc_823A9F64:
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm. r8,r8,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// beq 0x823a9f8c
	if (ctx.cr0.eq) goto loc_823A9F8C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9f88
	if (!ctx.cr6.gt) goto loc_823A9F88;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// b 0x823a9f8c
	goto loc_823A9F8C;
loc_823A9F88:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_823A9F8C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823a9fb0
	if (ctx.cr6.gt) goto loc_823A9FB0;
loc_823A9F94:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a9fb0
	if (ctx.cr6.gt) goto loc_823A9FB0;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a9ee0
	if (ctx.cr6.lt) goto loc_823A9EE0;
loc_823A9FB0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823A9FBC"))) PPC_WEAK_FUNC(sub_823A9FBC);
PPC_FUNC_IMPL(__imp__sub_823A9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9FC0"))) PPC_WEAK_FUNC(sub_823A9FC0);
PPC_FUNC_IMPL(__imp__sub_823A9FC0) {
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
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823a9fe8
	if (ctx.cr6.eq) goto loc_823A9FE8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823aa000
	if (!ctx.cr6.eq) goto loc_823AA000;
loc_823A9FE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a98a0
	ctx.lr = 0x823A9FF0;
	sub_823A98A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389ac8
	ctx.lr = 0x823A9FF8;
	sub_82389AC8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_823AA000:
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

__attribute__((alias("__imp__sub_823AA018"))) PPC_WEAK_FUNC(sub_823AA018);
PPC_FUNC_IMPL(__imp__sub_823AA018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823AA020;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa0c8
	if (!ctx.cr0.eq) goto loc_823AA0C8;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389fe0
	ctx.lr = 0x823AA058;
	sub_82389FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823aa0c0
	if (ctx.cr0.eq) goto loc_823AA0C0;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r31,220
	ctx.r30.s64 = ctx.r31.s64 + 220;
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a8c98
	ctx.lr = 0x823AA08C;
	sub_823A8C98(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8c98
	ctx.lr = 0x823AA0A4;
	sub_823A8C98(ctx, base);
	// lhz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,44(r29)
	PPC_STORE_U16(ctx.r29.u32 + 44, ctx.r11.u16);
	// bl 0x823a9528
	ctx.lr = 0x823AA0BC;
	sub_823A9528(ctx, base);
	// b 0x823aa1f0
	goto loc_823AA1F0;
loc_823AA0C0:
	// neg r3,r27
	ctx.r3.s64 = -ctx.r27.s64;
	// b 0x823aa1f4
	goto loc_823AA1F4;
loc_823AA0C8:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// ori r26,r8,32768
	ctx.r26.u64 = ctx.r8.u64 | 32768;
	// rlwinm. r8,r9,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r10,0,17,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// beq 0x823aa0fc
	if (ctx.cr0.eq) goto loc_823AA0FC;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823aa0f8
	if (!ctx.cr6.gt) goto loc_823AA0F8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823aa0fc
	goto loc_823AA0FC;
loc_823AA0F8:
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
loc_823AA0FC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823aa1f0
	if (!ctx.cr6.gt) goto loc_823AA1F0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823aa0c0
	if (ctx.cr6.lt) goto loc_823AA0C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x823aa1c8
	if (!ctx.cr6.gt) goto loc_823AA1C8;
loc_823AA148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AA154;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823AA164;
	sub_82358508(ctx, base);
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823aa1f0
	if (ctx.cr0.eq) goto loc_823AA1F0;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r10,0,17,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823aa1a4
	if (ctx.cr0.eq) goto loc_823AA1A4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823aa1a0
	if (!ctx.cr6.gt) goto loc_823AA1A0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823aa1a4
	goto loc_823AA1A4;
loc_823AA1A0:
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
loc_823AA1A4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823aa1c8
	if (ctx.cr6.gt) goto loc_823AA1C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823aa148
	if (ctx.cr6.lt) goto loc_823AA148;
loc_823AA1C8:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8990
	ctx.lr = 0x823AA1DC;
	sub_823A8990(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8990
	ctx.lr = 0x823AA1F0;
	sub_823A8990(ctx, base);
loc_823AA1F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_823AA1F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823AA1FC"))) PPC_WEAK_FUNC(sub_823AA1FC);
PPC_FUNC_IMPL(__imp__sub_823AA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA200"))) PPC_WEAK_FUNC(sub_823AA200);
PPC_FUNC_IMPL(__imp__sub_823AA200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AA208;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82389a38
	ctx.lr = 0x823AA21C;
	sub_82389A38(ctx, base);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// rlwinm r11,r3,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8237d218
	ctx.lr = 0x823AA230;
	sub_8237D218(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823aa25c
	if (!ctx.cr6.gt) goto loc_823AA25C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x823aa2ac
	if (ctx.cr6.lt) goto loc_823AA2AC;
loc_823AA25C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9a00
	ctx.lr = 0x823AA268;
	sub_823A9A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823aa284
	if (!ctx.cr0.eq) goto loc_823AA284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aafe8
	ctx.lr = 0x823AA27C;
	sub_823AAFE8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
loc_823AA284:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x823AA28C;
	sub_8237D130(ctx, base);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823aa2ac
	if (ctx.cr6.eq) goto loc_823AA2AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9910
	ctx.lr = 0x823AA2AC;
	sub_823A9910(ctx, base);
loc_823AA2AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AA2B4"))) PPC_WEAK_FUNC(sub_823AA2B4);
PPC_FUNC_IMPL(__imp__sub_823AA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA2B8"))) PPC_WEAK_FUNC(sub_823AA2B8);
PPC_FUNC_IMPL(__imp__sub_823AA2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AA2C0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823aa34c
	if (ctx.cr6.eq) goto loc_823AA34C;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x823AA2EC;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823aa34c
	if (ctx.cr0.eq) goto loc_823AA34C;
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x8237d218
	ctx.lr = 0x823AA314;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x823aa34c
	if (ctx.cr6.gt) goto loc_823AA34C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9910
	ctx.lr = 0x823AA334;
	sub_823A9910(ctx, base);
	// li r11,500
	ctx.r11.s64 = 500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// bl 0x823a86f8
	ctx.lr = 0x823AA344;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x823AA34C;
	sub_8237D130(ctx, base);
loc_823AA34C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AA358"))) PPC_WEAK_FUNC(sub_823AA358);
PPC_FUNC_IMPL(__imp__sub_823AA358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823AA360;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa508
	if (ctx.cr6.eq) goto loc_823AA508;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82389a40
	ctx.lr = 0x823AA38C;
	sub_82389A40(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823aa508
	if (ctx.cr6.eq) goto loc_823AA508;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
loc_823AA3B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AA3C0;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823AA3D0;
	sub_82358508(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9c60
	ctx.lr = 0x823AA3DC;
	sub_823A9C60(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823aa4a4
	if (ctx.cr6.gt) goto loc_823AA4A4;
	// beq cr6,0x823aa490
	if (ctx.cr6.eq) goto loc_823AA490;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823aa47c
	if (ctx.cr6.eq) goto loc_823AA47C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823aa468
	if (ctx.cr6.eq) goto loc_823AA468;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823aa43c
	if (ctx.cr6.eq) goto loc_823AA43C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823aa524
	if (!ctx.cr6.eq) goto loc_823AA524;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AA420;
	sub_823A8A28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r30,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FF;
	// bl 0x823a9e80
	ctx.lr = 0x823AA438;
	sub_823A9E80(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA43C:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AA44C;
	sub_823A8A28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r30,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FF;
	// bl 0x823a92d8
	ctx.lr = 0x823AA464;
	sub_823A92D8(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA468:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9260
	ctx.lr = 0x823AA478;
	sub_823A9260(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA47C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9e00
	ctx.lr = 0x823AA48C;
	sub_823A9E00(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA490:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9fc0
	ctx.lr = 0x823AA4A0;
	sub_823A9FC0(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA4A4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x823aa510
	if (ctx.cr6.eq) goto loc_823AA510;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x823aa4e8
	if (ctx.cr6.eq) goto loc_823AA4E8;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x823aa524
	if (!ctx.cr6.eq) goto loc_823AA524;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AA4CC;
	sub_823A8A28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r30,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FF;
	// bl 0x823aa018
	ctx.lr = 0x823AA4E4;
	sub_823AA018(ctx, base);
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA4E8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823AA4EC:
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a8850
	ctx.lr = 0x823AA4FC;
	sub_823A8850(ctx, base);
loc_823AA4FC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823aa3b4
	if (!ctx.cr0.eq) goto loc_823AA3B4;
loc_823AA508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823AA510:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9340
	ctx.lr = 0x823AA520;
	sub_823A9340(ctx, base);
loc_823AA520:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823AA524:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823aa4ec
	if (!ctx.cr6.lt) goto loc_823AA4EC;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// b 0x823aa4fc
	goto loc_823AA4FC;
}

__attribute__((alias("__imp__sub_823AA538"))) PPC_WEAK_FUNC(sub_823AA538);
PPC_FUNC_IMPL(__imp__sub_823AA538) {
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
	// bl 0x823a9528
	ctx.lr = 0x823AA558;
	sub_823A9528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa2b8
	ctx.lr = 0x823AA564;
	sub_823AA2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa200
	ctx.lr = 0x823AA570;
	sub_823AA200(ctx, base);
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

__attribute__((alias("__imp__sub_823AA588"))) PPC_WEAK_FUNC(sub_823AA588);
PPC_FUNC_IMPL(__imp__sub_823AA588) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6410
	ctx.lr = 0x823AA5A4;
	sub_822D6410(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82370208
	ctx.lr = 0x823AA5B0;
	sub_82370208(ctx, base);
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

__attribute__((alias("__imp__sub_823AA5C4"))) PPC_WEAK_FUNC(sub_823AA5C4);
PPC_FUNC_IMPL(__imp__sub_823AA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA5C8"))) PPC_WEAK_FUNC(sub_823AA5C8);
PPC_FUNC_IMPL(__imp__sub_823AA5C8) {
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
	// bl 0x82350c90
	ctx.lr = 0x823AA5E4;
	sub_82350C90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
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

__attribute__((alias("__imp__sub_823AA600"))) PPC_WEAK_FUNC(sub_823AA600);
PPC_FUNC_IMPL(__imp__sub_823AA600) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82350ca0
	ctx.lr = 0x823AA630;
	sub_82350CA0(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82350cb8
	ctx.lr = 0x823AA64C;
	sub_82350CB8(ctx, base);
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

__attribute__((alias("__imp__sub_823AA660"))) PPC_WEAK_FUNC(sub_823AA660);
PPC_FUNC_IMPL(__imp__sub_823AA660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AA668;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357358
	ctx.lr = 0x823AA698;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823AA6A8;
	sub_82248A40(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6320
	ctx.lr = 0x823AA6B8;
	sub_822D6320(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d6350
	ctx.lr = 0x823AA6C8;
	sub_822D6350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370228
	ctx.lr = 0x823AA6D0;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bl 0x823a9010
	ctx.lr = 0x823AA6E8;
	sub_823A9010(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AA6F0"))) PPC_WEAK_FUNC(sub_823AA6F0);
PPC_FUNC_IMPL(__imp__sub_823AA6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AA6F8;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82357358
	ctx.lr = 0x823AA714;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823AA724;
	sub_82248A40(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6320
	ctx.lr = 0x823AA734;
	sub_822D6320(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d6350
	ctx.lr = 0x823AA744;
	sub_822D6350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370228
	ctx.lr = 0x823AA74C;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bl 0x823a9010
	ctx.lr = 0x823AA764;
	sub_823A9010(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AA770"))) PPC_WEAK_FUNC(sub_823AA770);
PPC_FUNC_IMPL(__imp__sub_823AA770) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82370228
	ctx.lr = 0x823AA794;
	sub_82370228(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823aa7ac
	if (ctx.cr6.eq) goto loc_823AA7AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aa7e0
	goto loc_823AA7E0;
loc_823AA7AC:
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6338
	ctx.lr = 0x823AA7BC;
	sub_822D6338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823aa7d4
	if (!ctx.cr0.eq) goto loc_823AA7D4;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823AA7D4;
	sub_82248A40(ctx, base);
loc_823AA7D4:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823703b0
	ctx.lr = 0x823AA7E0;
	sub_823703B0(ctx, base);
loc_823AA7E0:
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

__attribute__((alias("__imp__sub_823AA7F8"))) PPC_WEAK_FUNC(sub_823AA7F8);
PPC_FUNC_IMPL(__imp__sub_823AA7F8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823aa820
	if (ctx.cr6.eq) goto loc_823AA820;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aa880
	goto loc_823AA880;
loc_823AA820:
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82350c78
	ctx.lr = 0x823AA830;
	sub_82350C78(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa600
	ctx.lr = 0x823AA83C;
	sub_823AA600(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823AA848;
	sub_823585A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82370228
	ctx.lr = 0x823AA858;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82350cd8
	ctx.lr = 0x823AA87C;
	sub_82350CD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823AA880:
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

__attribute__((alias("__imp__sub_823AA894"))) PPC_WEAK_FUNC(sub_823AA894);
PPC_FUNC_IMPL(__imp__sub_823AA894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA898"))) PPC_WEAK_FUNC(sub_823AA898);
PPC_FUNC_IMPL(__imp__sub_823AA898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AA8A0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r3,184
	ctx.r5.s64 = ctx.r3.s64 + 184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822d6338
	ctx.lr = 0x823AA8BC;
	sub_822D6338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823aa8d4
	if (!ctx.cr0.eq) goto loc_823AA8D4;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823AA8D4;
	sub_82248A40(ctx, base);
loc_823AA8D4:
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370208
	ctx.lr = 0x823AA8E4;
	sub_82370208(ctx, base);
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370218
	ctx.lr = 0x823AA8F0;
	sub_82370218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AA8FC"))) PPC_WEAK_FUNC(sub_823AA8FC);
PPC_FUNC_IMPL(__imp__sub_823AA8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA900"))) PPC_WEAK_FUNC(sub_823AA900);
PPC_FUNC_IMPL(__imp__sub_823AA900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823AA908;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// rlwinm r10,r10,0,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x823aa99c
	if (ctx.cr6.eq) goto loc_823AA99C;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823AA954;
	sub_823585A0(ctx, base);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357358
	ctx.lr = 0x823AA960;
	sub_82357358(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x822d6320
	ctx.lr = 0x823AA96C;
	sub_822D6320(ctx, base);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370228
	ctx.lr = 0x823AA97C;
	sub_82370228(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// bne cr6,0x823aa99c
	if (!ctx.cr6.eq) goto loc_823AA99C;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82358508
	ctx.lr = 0x823AA99C;
	sub_82358508(ctx, base);
loc_823AA99C:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82358508
	ctx.lr = 0x823AA9AC;
	sub_82358508(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x823AA9C8;
	sub_82358508(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82350d30
	ctx.lr = 0x823AA9E4;
	sub_82350D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x823AA9F8;
	sub_82358508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823AAA04"))) PPC_WEAK_FUNC(sub_823AAA04);
PPC_FUNC_IMPL(__imp__sub_823AAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAA08"))) PPC_WEAK_FUNC(sub_823AAA08);
PPC_FUNC_IMPL(__imp__sub_823AAA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AAA10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aab08
	if (ctx.cr6.eq) goto loc_823AAB08;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r10,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823aab00
	if (ctx.cr6.eq) goto loc_823AAB00;
	// addi r29,r3,208
	ctx.r29.s64 = ctx.r3.s64 + 208;
loc_823AAA4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AAA58;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x823AAA68;
	sub_82358508(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,27,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// beq 0x823aaa98
	if (ctx.cr0.eq) goto loc_823AAA98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 236;
	// bl 0x823a9190
	ctx.lr = 0x823AAA88;
	sub_823A9190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823aaa98
	if (!ctx.cr0.eq) goto loc_823AAA98;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// b 0x823aaaf4
	goto loc_823AAAF4;
loc_823AAA98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AAAA4;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823aa900
	ctx.lr = 0x823AAAB4;
	sub_823AA900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aab14
	if (ctx.cr0.lt) goto loc_823AAB14;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823aaae4
	if (ctx.cr0.eq) goto loc_823AAAE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8a28
	ctx.lr = 0x823AAAD4;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 236;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823a9668
	ctx.lr = 0x823AAAE4;
	sub_823A9668(ctx, base);
loc_823AAAE4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8850
	ctx.lr = 0x823AAAF4;
	sub_823A8850(ctx, base);
loc_823AAAF4:
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// subf. r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823aaa4c
	if (!ctx.cr0.eq) goto loc_823AAA4C;
loc_823AAB00:
	// addi r3,r28,296
	ctx.r3.s64 = ctx.r28.s64 + 296;
	// bl 0x8237d130
	ctx.lr = 0x823AAB08;
	sub_8237D130(ctx, base);
loc_823AAB08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823AAB0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AAB14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aab0c
	goto loc_823AAB0C;
}

__attribute__((alias("__imp__sub_823AAB1C"))) PPC_WEAK_FUNC(sub_823AAB1C);
PPC_FUNC_IMPL(__imp__sub_823AAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAB20"))) PPC_WEAK_FUNC(sub_823AAB20);
PPC_FUNC_IMPL(__imp__sub_823AAB20) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aab68
	if (ctx.cr6.eq) goto loc_823AAB68;
loc_823AAB44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AAB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823aab44
	if (!ctx.cr6.eq) goto loc_823AAB44;
loc_823AAB68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823AAB90"))) PPC_WEAK_FUNC(sub_823AAB90);
PPC_FUNC_IMPL(__imp__sub_823AAB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AAB98;
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
	ctx.lr = 0x823AABAC;
	sub_823570E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823570f0
	ctx.lr = 0x823AABB4;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aabe4
	if (ctx.cr0.eq) goto loc_823AABE4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32436
	ctx.r10.s64 = ctx.r10.s64 + 32436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x823aabe8
	goto loc_823AABE8;
loc_823AABE4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823AABE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AABF0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823aac00
	if (!ctx.cr6.eq) goto loc_823AAC00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aac10
	goto loc_823AAC10;
loc_823AAC00:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823AAC10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AAC18"))) PPC_WEAK_FUNC(sub_823AAC18);
PPC_FUNC_IMPL(__imp__sub_823AAC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AAC20;
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
	// beq cr6,0x823aac74
	if (ctx.cr6.eq) goto loc_823AAC74;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AAC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823aac5c
	if (ctx.cr6.eq) goto loc_823AAC5C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823AAC5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823aac68
	if (ctx.cr6.eq) goto loc_823AAC68;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_823AAC68:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823AAC74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AAC7C"))) PPC_WEAK_FUNC(sub_823AAC7C);
PPC_FUNC_IMPL(__imp__sub_823AAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAC80"))) PPC_WEAK_FUNC(sub_823AAC80);
PPC_FUNC_IMPL(__imp__sub_823AAC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,2108
	ctx.r11.s64 = ctx.r11.s64 + 2108;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
loc_823AAC9C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aac9c
	if (!ctx.cr6.eq) goto loc_823AAC9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AACC4"))) PPC_WEAK_FUNC(sub_823AACC4);
PPC_FUNC_IMPL(__imp__sub_823AACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AACC8"))) PPC_WEAK_FUNC(sub_823AACC8);
PPC_FUNC_IMPL(__imp__sub_823AACC8) {
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
	// bl 0x823aab90
	ctx.lr = 0x823AACE0;
	sub_823AAB90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aad18
	if (ctx.cr0.eq) goto loc_823AAD18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aad00
	if (ctx.cr6.eq) goto loc_823AAD00;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_823AAD00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aad14
	if (!ctx.cr6.eq) goto loc_823AAD14;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823AAD14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823AAD18:
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

__attribute__((alias("__imp__sub_823AAD2C"))) PPC_WEAK_FUNC(sub_823AAD2C);
PPC_FUNC_IMPL(__imp__sub_823AAD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAD30"))) PPC_WEAK_FUNC(sub_823AAD30);
PPC_FUNC_IMPL(__imp__sub_823AAD30) {
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
	// beq cr6,0x823aad80
	if (ctx.cr6.eq) goto loc_823AAD80;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x823aac18
	ctx.lr = 0x823AAD5C;
	sub_823AAC18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823aad7c
	if (!ctx.cr6.eq) goto loc_823AAD7C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823aad7c
	if (!ctx.cr6.eq) goto loc_823AAD7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823AAD7C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823AAD80:
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

__attribute__((alias("__imp__sub_823AAD98"))) PPC_WEAK_FUNC(sub_823AAD98);
PPC_FUNC_IMPL(__imp__sub_823AAD98) {
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
	// beq cr6,0x823aade8
	if (ctx.cr6.eq) goto loc_823AADE8;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x823aac18
	ctx.lr = 0x823AADC4;
	sub_823AAC18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823aade4
	if (!ctx.cr6.eq) goto loc_823AADE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823aade4
	if (!ctx.cr6.eq) goto loc_823AADE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823AADE4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823AADE8:
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

__attribute__((alias("__imp__sub_823AAE00"))) PPC_WEAK_FUNC(sub_823AAE00);
PPC_FUNC_IMPL(__imp__sub_823AAE00) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x823AAE20;
	sub_823570E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823570f0
	ctx.lr = 0x823AAE28;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aae58
	if (ctx.cr0.eq) goto loc_823AAE58;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x823aae5c
	goto loc_823AAE5C;
loc_823AAE58:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823AAE5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x823570e0
	ctx.lr = 0x823AAE68;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aa7f8
	ctx.lr = 0x823AAE70;
	sub_823AA7F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82370228
	ctx.lr = 0x823AAE80;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,2108
	ctx.r3.s64 = ctx.r10.s64 + 2108;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// bl 0x823aacc8
	ctx.lr = 0x823AAE9C;
	sub_823AACC8(ctx, base);
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

__attribute__((alias("__imp__sub_823AAEB8"))) PPC_WEAK_FUNC(sub_823AAEB8);
PPC_FUNC_IMPL(__imp__sub_823AAEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r3,r11,2108
	ctx.r3.s64 = ctx.r11.s64 + 2108;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823aaee8
	if (ctx.cr0.eq) goto loc_823AAEE8;
loc_823AAED0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823aaeec
	if (ctx.cr6.eq) goto loc_823AAEEC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aaed0
	if (!ctx.cr6.eq) goto loc_823AAED0;
loc_823AAEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AAEEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823aaf00
	if (!ctx.cr6.eq) goto loc_823AAF00;
	// b 0x823aad98
	sub_823AAD98(ctx, base);
	return;
loc_823AAF00:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823aaf10
	if (!ctx.cr6.eq) goto loc_823AAF10;
	// b 0x823aad30
	sub_823AAD30(ctx, base);
	return;
loc_823AAF10:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823aac18
	sub_823AAC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AAF18"))) PPC_WEAK_FUNC(sub_823AAF18);
PPC_FUNC_IMPL(__imp__sub_823AAF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAF1C"))) PPC_WEAK_FUNC(sub_823AAF1C);
PPC_FUNC_IMPL(__imp__sub_823AAF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAF20"))) PPC_WEAK_FUNC(sub_823AAF20);
PPC_FUNC_IMPL(__imp__sub_823AAF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AAF28;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82370228
	ctx.lr = 0x823AAF3C;
	sub_82370228(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2108
	ctx.r11.s64 = ctx.r11.s64 + 2108;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823aaf80
	if (ctx.cr0.eq) goto loc_823AAF80;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
loc_823AAF5C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823aaf80
	if (ctx.cr6.eq) goto loc_823AAF80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aaf5c
	if (!ctx.cr6.eq) goto loc_823AAF5C;
loc_823AAF80:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823aaf9c
	if (!ctx.cr6.eq) goto loc_823AAF9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aae00
	ctx.lr = 0x823AAF98;
	sub_823AAE00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823AAF9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x823aafb4
	goto loc_823AAFB4;
loc_823AAFA4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823aafbc
	if (ctx.cr6.eq) goto loc_823AAFBC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823AAFB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aafa4
	if (!ctx.cr6.eq) goto loc_823AAFA4;
loc_823AAFBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aafdc
	if (!ctx.cr6.eq) goto loc_823AAFDC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823aacc8
	ctx.lr = 0x823AAFD4;
	sub_823AACC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823AAFDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AAFE4"))) PPC_WEAK_FUNC(sub_823AAFE4);
PPC_FUNC_IMPL(__imp__sub_823AAFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAFE8"))) PPC_WEAK_FUNC(sub_823AAFE8);
PPC_FUNC_IMPL(__imp__sub_823AAFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AAFF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82370228
	ctx.lr = 0x823AB004;
	sub_82370228(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,2108
	ctx.r11.s64 = ctx.r11.s64 + 2108;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ab0dc
	if (ctx.cr0.eq) goto loc_823AB0DC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_823AB020:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab044
	if (ctx.cr6.eq) goto loc_823AB044;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab020
	if (!ctx.cr6.eq) goto loc_823AB020;
loc_823AB044:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ab0dc
	if (ctx.cr6.eq) goto loc_823AB0DC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x823ab064
	goto loc_823AB064;
loc_823AB054:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823ab06c
	if (ctx.cr6.eq) goto loc_823AB06C;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_823AB064:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ab054
	if (!ctx.cr6.eq) goto loc_823AB054;
loc_823AB06C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ab0a4
	if (ctx.cr6.eq) goto loc_823AB0A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ab08c
	if (!ctx.cr6.eq) goto loc_823AB08C;
	// bl 0x823aad98
	ctx.lr = 0x823AB088;
	sub_823AAD98(ctx, base);
	// b 0x823ab0a4
	goto loc_823AB0A4;
loc_823AB08C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ab0a0
	if (!ctx.cr6.eq) goto loc_823AB0A0;
	// bl 0x823aad30
	ctx.lr = 0x823AB09C;
	sub_823AAD30(ctx, base);
	// b 0x823ab0a4
	goto loc_823AB0A4;
loc_823AB0A0:
	// bl 0x823aac18
	ctx.lr = 0x823AB0A4;
	sub_823AAC18(ctx, base);
loc_823AB0A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab0d4
	if (!ctx.cr6.eq) goto loc_823AB0D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aaeb8
	ctx.lr = 0x823AB0BC;
	sub_823AAEB8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823aab20
	ctx.lr = 0x823AB0C4;
	sub_823AAB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823AB0CC;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aa5c8
	ctx.lr = 0x823AB0D4;
	sub_823AA5C8(ctx, base);
loc_823AB0D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823AB0DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AB0E4"))) PPC_WEAK_FUNC(sub_823AB0E4);
PPC_FUNC_IMPL(__imp__sub_823AB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB0E8"))) PPC_WEAK_FUNC(sub_823AB0E8);
PPC_FUNC_IMPL(__imp__sub_823AB0E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB0F0"))) PPC_WEAK_FUNC(sub_823AB0F0);
PPC_FUNC_IMPL(__imp__sub_823AB0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB0F8"))) PPC_WEAK_FUNC(sub_823AB0F8);
PPC_FUNC_IMPL(__imp__sub_823AB0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB100"))) PPC_WEAK_FUNC(sub_823AB100);
PPC_FUNC_IMPL(__imp__sub_823AB100) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ab118
	if (!ctx.cr6.eq) goto loc_823AB118;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_823AB118:
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB120"))) PPC_WEAK_FUNC(sub_823AB120);
PPC_FUNC_IMPL(__imp__sub_823AB120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AB128;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x823AB138;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x823AB140;
	sub_82355AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ab15c
	if (ctx.cr6.eq) goto loc_823AB15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c048
	ctx.lr = 0x823AB150;
	sub_8235C048(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AB15C:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// ble cr6,0x823ab1a4
	if (!ctx.cr6.gt) goto loc_823AB1A4;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// lfs f12,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10184);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f9,f0,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823ab1a0
	if (!ctx.cr6.gt) goto loc_823AB1A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823AB1A0:
	// stfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
loc_823AB1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AB1AC"))) PPC_WEAK_FUNC(sub_823AB1AC);
PPC_FUNC_IMPL(__imp__sub_823AB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB1B0"))) PPC_WEAK_FUNC(sub_823AB1B0);
PPC_FUNC_IMPL(__imp__sub_823AB1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB1B8"))) PPC_WEAK_FUNC(sub_823AB1B8);
PPC_FUNC_IMPL(__imp__sub_823AB1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab354
	if (ctx.cr6.gt) goto loc_823AB354;
	// beq cr6,0x823ab348
	if (ctx.cr6.eq) goto loc_823AB348;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab2a0
	if (ctx.cr6.gt) goto loc_823AB2A0;
	// beq cr6,0x823ab248
	if (ctx.cr6.eq) goto loc_823AB248;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab260
	if (ctx.cr6.gt) goto loc_823AB260;
	// beq cr6,0x823ab254
	if (ctx.cr6.eq) goto loc_823AB254;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab240
	if (ctx.cr6.gt) goto loc_823AB240;
	// beq cr6,0x823ab234
	if (ctx.cr6.eq) goto loc_823AB234;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ab22c
	if (ctx.cr6.eq) goto loc_823AB22C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823AB22C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823AB234:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// blr 
	return;
loc_823AB240:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
loc_823AB248:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_823AB254:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823AB260:
	// addis r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -65536;
	// addic. r11,r11,-5
	ctx.xer.ca = ctx.r11.u32 > 4;
	ctx.r11.s64 = ctx.r11.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ab294
	if (ctx.cr0.eq) goto loc_823AB294;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ab288
	if (ctx.cr6.eq) goto loc_823AB288;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_823AB288:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
loc_823AB294:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823AB2A0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab31c
	if (ctx.cr6.gt) goto loc_823AB31C;
	// beq cr6,0x823ab310
	if (ctx.cr6.eq) goto loc_823AB310;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab2f4
	if (ctx.cr6.gt) goto loc_823AB2F4;
	// beq cr6,0x823ab304
	if (ctx.cr6.eq) goto loc_823AB304;
	// addis r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -65536;
	// addic. r11,r11,-9
	ctx.xer.ca = ctx.r11.u32 > 8;
	ctx.r11.s64 = ctx.r11.s64 + -9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ab2e8
	if (ctx.cr0.eq) goto loc_823AB2E8;
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823AB2E8:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
loc_823AB2F4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
loc_823AB304:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
loc_823AB310:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
loc_823AB31C:
	// addis r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -131072;
	// addic. r11,r11,-5
	ctx.xer.ca = ctx.r11.u32 > 4;
	ctx.r11.s64 = ctx.r11.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ab33c
	if (ctx.cr0.eq) goto loc_823AB33C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_823AB33C:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
loc_823AB348:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_823AB354:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab43c
	if (ctx.cr6.gt) goto loc_823AB43C;
	// beq cr6,0x823ab430
	if (ctx.cr6.eq) goto loc_823AB430;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab3fc
	if (ctx.cr6.gt) goto loc_823AB3FC;
	// beq cr6,0x823ab3f0
	if (ctx.cr6.eq) goto loc_823AB3F0;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ab3d4
	if (ctx.cr6.gt) goto loc_823AB3D4;
	// beq cr6,0x823ab3c8
	if (ctx.cr6.eq) goto loc_823AB3C8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab3bc
	if (ctx.cr6.eq) goto loc_823AB3BC;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823AB3BC:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_823AB3C8:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_823AB3D4:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab248
	if (!ctx.cr6.eq) goto loc_823AB248;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823AB3F0:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
loc_823AB3FC:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab424
	if (ctx.cr6.eq) goto loc_823AB424;
	// addis r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -1048576;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ab248
	if (!ctx.cr0.eq) goto loc_823AB248;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_823AB424:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823AB430:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_823AB43C:
	// addis r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -1048576;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823ab248
	if (ctx.cr6.gt) goto loc_823AB248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ab478
	// bdzf 4*cr6+eq,0x823ab484
	// bdzf 4*cr6+eq,0x823ab490
	// bdzf 4*cr6+eq,0x823ab49c
	// bdzf 4*cr6+eq,0x823ab4a8
	// bne cr6,0x823ab3bc
	if (!ctx.cr6.eq) goto loc_823AB3BC;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_823AB478:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823AB484:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
loc_823AB490:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_823AB49C:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
loc_823AB4A8:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB4B4"))) PPC_WEAK_FUNC(sub_823AB4B4);
PPC_FUNC_IMPL(__imp__sub_823AB4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB4B8"))) PPC_WEAK_FUNC(sub_823AB4B8);
PPC_FUNC_IMPL(__imp__sub_823AB4B8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823AB4E8"))) PPC_WEAK_FUNC(sub_823AB4E8);
PPC_FUNC_IMPL(__imp__sub_823AB4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AB4F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-27264
	ctx.r9.s64 = ctx.r11.s64 + -27264;
	// addi r8,r10,-27280
	ctx.r8.s64 = ctx.r10.s64 + -27280;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bl 0x8235cf68
	ctx.lr = 0x823AB518;
	sub_8235CF68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235dee0
	ctx.lr = 0x823AB524;
	sub_8235DEE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e050
	ctx.lr = 0x823AB530;
	sub_8235E050(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ab568
	ctx.lr = 0x823AB538;
	sub_823AB568(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r7,31088
	ctx.r5.s64 = ctx.r7.s64 + 31088;
	// addi r4,r6,-1704
	ctx.r4.s64 = ctx.r6.s64 + -1704;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AB558"))) PPC_WEAK_FUNC(sub_823AB558);
PPC_FUNC_IMPL(__imp__sub_823AB558) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x823ab840
	sub_823AB840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AB560"))) PPC_WEAK_FUNC(sub_823AB560);
PPC_FUNC_IMPL(__imp__sub_823AB560) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB568"))) PPC_WEAK_FUNC(sub_823AB568);
PPC_FUNC_IMPL(__imp__sub_823AB568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB56C"))) PPC_WEAK_FUNC(sub_823AB56C);
PPC_FUNC_IMPL(__imp__sub_823AB56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB570"))) PPC_WEAK_FUNC(sub_823AB570);
PPC_FUNC_IMPL(__imp__sub_823AB570) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ab59c
	if (ctx.cr6.eq) goto loc_823AB59C;
loc_823AB594:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ab5fc
	goto loc_823AB5FC;
loc_823AB59C:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab5d0
	if (ctx.cr6.eq) goto loc_823AB5D0;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab5c8
	if (ctx.cr6.eq) goto loc_823AB5C8;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x823ab5d8
	goto loc_823AB5D8;
loc_823AB5C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823ab5d4
	goto loc_823AB5D4;
loc_823AB5D0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_823AB5D4:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_823AB5D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ab594
	if (ctx.cr6.eq) goto loc_823AB594;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_823AB5FC:
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

__attribute__((alias("__imp__sub_823AB614"))) PPC_WEAK_FUNC(sub_823AB614);
PPC_FUNC_IMPL(__imp__sub_823AB614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB618"))) PPC_WEAK_FUNC(sub_823AB618);
PPC_FUNC_IMPL(__imp__sub_823AB618) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823ab66c
	if (!ctx.cr6.gt) goto loc_823AB66C;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x823AB654;
	sub_8237D218(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x823ab76c
	if (!ctx.cr6.lt) goto loc_823AB76C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x823AB668;
	sub_8237D170(ctx, base);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_823AB66C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823ab758
	if (ctx.cr6.gt) goto loc_823AB758;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ab6a0
	// bdzf 4*cr6+eq,0x823ab6c8
	// bdzf 4*cr6+eq,0x823ab6f0
	// bdzf 4*cr6+eq,0x823ab76c
	// bne cr6,0x823ab76c
	if (!ctx.cr6.eq) goto loc_823AB76C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x823ab76c
	goto loc_823AB76C;
loc_823AB6A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x823ab76c
	goto loc_823AB76C;
loc_823AB6C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ab76c
	if (ctx.cr6.eq) goto loc_823AB76C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x823ab76c
	goto loc_823AB76C;
loc_823AB6F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ab74c
	if (ctx.cr6.eq) goto loc_823AB74C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AB728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// b 0x823ab76c
	goto loc_823AB76C;
loc_823AB74C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x823ab76c
	goto loc_823AB76C;
loc_823AB758:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_823AB76C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_823AB78C"))) PPC_WEAK_FUNC(sub_823AB78C);
PPC_FUNC_IMPL(__imp__sub_823AB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB790"))) PPC_WEAK_FUNC(sub_823AB790);
PPC_FUNC_IMPL(__imp__sub_823AB790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AB798;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r11,31088
	ctx.r6.s64 = ctx.r11.s64 + 31088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,11084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11084);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r7,-27280
	ctx.r3.s64 = ctx.r7.s64 + -27280;
	// addi r5,r8,-27264
	ctx.r5.s64 = ctx.r8.s64 + -27264;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823AB7FC;
	sub_823A86F8(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8235cf68
	ctx.lr = 0x823AB810;
	sub_8235CF68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235dd58
	ctx.lr = 0x823AB81C;
	sub_8235DD58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235de08
	ctx.lr = 0x823AB828;
	sub_8235DE08(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x823AB82C;
	sub_8235BF58(ctx, base);
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AB840"))) PPC_WEAK_FUNC(sub_823AB840);
PPC_FUNC_IMPL(__imp__sub_823AB840) {
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
	// bl 0x823ab4e8
	ctx.lr = 0x823AB860;
	sub_823AB4E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab878
	if (ctx.cr6.eq) goto loc_823AB878;
	// bl 0x82357128
	ctx.lr = 0x823AB874;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AB878:
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

__attribute__((alias("__imp__sub_823AB890"))) PPC_WEAK_FUNC(sub_823AB890);
PPC_FUNC_IMPL(__imp__sub_823AB890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823AB898;
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
	// bne cr6,0x823ab8b0
	if (!ctx.cr6.eq) goto loc_823AB8B0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823AB8B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823ab8c8
	if (!ctx.cr0.eq) goto loc_823AB8C8;
loc_823AB8BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823AB8C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823AB8D0;
	sub_823570E0(ctx, base);
	// mulli r30,r26,216
	ctx.r30.s64 = ctx.r26.s64 * 216;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823AB8E0;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AB8EC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ab8bc
	if (ctx.cr6.eq) goto loc_823AB8BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x823AB900;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab994
	if (ctx.cr6.eq) goto loc_823AB994;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823ab97c
	if (!ctx.cr6.gt) goto loc_823AB97C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823AB924:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823ab938
	if (ctx.cr6.eq) goto loc_823AB938;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ad610
	ctx.lr = 0x823AB938;
	sub_823AD610(ctx, base);
loc_823AB938:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823ad568
	ctx.lr = 0x823AB948;
	sub_823AD568(ctx, base);
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
	ctx.lr = 0x823AB964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,216
	ctx.r30.s64 = ctx.r30.s64 + 216;
	// addi r29,r29,216
	ctx.r29.s64 = ctx.r29.s64 + 216;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823ab924
	if (ctx.cr6.lt) goto loc_823AB924;
loc_823AB97C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ab994
	if (ctx.cr6.eq) goto loc_823AB994;
	// bl 0x82357240
	ctx.lr = 0x823AB98C;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823AB994:
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

__attribute__((alias("__imp__sub_823AB9A8"))) PPC_WEAK_FUNC(sub_823AB9A8);
PPC_FUNC_IMPL(__imp__sub_823AB9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AB9B0;
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
	// bgt cr6,0x823ab9ec
	if (ctx.cr6.gt) goto loc_823AB9EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ab890
	ctx.lr = 0x823AB9D8;
	sub_823AB890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ab9ec
	if (!ctx.cr6.eq) goto loc_823AB9EC;
loc_823AB9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AB9EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab9e0
	if (ctx.cr6.eq) goto loc_823AB9E0;
	// mulli r10,r30,216
	ctx.r10.s64 = ctx.r30.s64 * 216;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823aba10
	if (ctx.cr0.eq) goto loc_823ABA10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ad610
	ctx.lr = 0x823ABA10;
	sub_823AD610(ctx, base);
loc_823ABA10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ad568
	ctx.lr = 0x823ABA1C;
	sub_823AD568(ctx, base);
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

__attribute__((alias("__imp__sub_823ABA34"))) PPC_WEAK_FUNC(sub_823ABA34);
PPC_FUNC_IMPL(__imp__sub_823ABA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABA38"))) PPC_WEAK_FUNC(sub_823ABA38);
PPC_FUNC_IMPL(__imp__sub_823ABA38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823ab9a8
	sub_823AB9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ABA40"))) PPC_WEAK_FUNC(sub_823ABA40);
PPC_FUNC_IMPL(__imp__sub_823ABA40) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABA48"))) PPC_WEAK_FUNC(sub_823ABA48);
PPC_FUNC_IMPL(__imp__sub_823ABA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823ABA50;
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
	// bne cr6,0x823aba68
	if (!ctx.cr6.eq) goto loc_823ABA68;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823ABA68:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823aba80
	if (!ctx.cr0.eq) goto loc_823ABA80;
loc_823ABA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823ABA80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823ABA88;
	sub_823570E0(ctx, base);
	// mulli r30,r26,104
	ctx.r30.s64 = ctx.r26.s64 * 104;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823ABA98;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823ABAA4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823aba74
	if (ctx.cr6.eq) goto loc_823ABA74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x823ABAB8;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823abb4c
	if (ctx.cr6.eq) goto loc_823ABB4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823abb34
	if (!ctx.cr6.gt) goto loc_823ABB34;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823ABADC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823abaf0
	if (ctx.cr6.eq) goto loc_823ABAF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82372730
	ctx.lr = 0x823ABAF0;
	sub_82372730(ctx, base);
loc_823ABAF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823726b0
	ctx.lr = 0x823ABB00;
	sub_823726B0(ctx, base);
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
	ctx.lr = 0x823ABB1C;
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
	// blt cr6,0x823abadc
	if (ctx.cr6.lt) goto loc_823ABADC;
loc_823ABB34:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823abb4c
	if (ctx.cr6.eq) goto loc_823ABB4C;
	// bl 0x82357240
	ctx.lr = 0x823ABB44;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823ABB4C:
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

__attribute__((alias("__imp__sub_823ABB60"))) PPC_WEAK_FUNC(sub_823ABB60);
PPC_FUNC_IMPL(__imp__sub_823ABB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ABB68;
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
	// bgt cr6,0x823abba4
	if (ctx.cr6.gt) goto loc_823ABBA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823aba48
	ctx.lr = 0x823ABB90;
	sub_823ABA48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abba4
	if (!ctx.cr6.eq) goto loc_823ABBA4;
loc_823ABB98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823ABBA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823abb98
	if (ctx.cr6.eq) goto loc_823ABB98;
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823abbc8
	if (ctx.cr0.eq) goto loc_823ABBC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372730
	ctx.lr = 0x823ABBC8;
	sub_82372730(ctx, base);
loc_823ABBC8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823726b0
	ctx.lr = 0x823ABBD4;
	sub_823726B0(ctx, base);
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

__attribute__((alias("__imp__sub_823ABBEC"))) PPC_WEAK_FUNC(sub_823ABBEC);
PPC_FUNC_IMPL(__imp__sub_823ABBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABBF0"))) PPC_WEAK_FUNC(sub_823ABBF0);
PPC_FUNC_IMPL(__imp__sub_823ABBF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823abb60
	sub_823ABB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ABBF8"))) PPC_WEAK_FUNC(sub_823ABBF8);
PPC_FUNC_IMPL(__imp__sub_823ABBF8) {
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
	// lwz r3,-4816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823abc34
	if (ctx.cr6.eq) goto loc_823ABC34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ABC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4816, ctx.r11.u32);
loc_823ABC34:
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

__attribute__((alias("__imp__sub_823ABC48"))) PPC_WEAK_FUNC(sub_823ABC48);
PPC_FUNC_IMPL(__imp__sub_823ABC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABC54"))) PPC_WEAK_FUNC(sub_823ABC54);
PPC_FUNC_IMPL(__imp__sub_823ABC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABC58"))) PPC_WEAK_FUNC(sub_823ABC58);
PPC_FUNC_IMPL(__imp__sub_823ABC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823ABC68:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823abc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ABC68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABC78"))) PPC_WEAK_FUNC(sub_823ABC78);
PPC_FUNC_IMPL(__imp__sub_823ABC78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823abcdc
	if (ctx.cr6.eq) goto loc_823ABCDC;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d6368
	ctx.lr = 0x823ABCB8;
	sub_822D6368(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82370e30
	ctx.lr = 0x823ABCC0;
	sub_82370E30(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823ABCCC;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823ABCDC:
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

__attribute__((alias("__imp__sub_823ABCF4"))) PPC_WEAK_FUNC(sub_823ABCF4);
PPC_FUNC_IMPL(__imp__sub_823ABCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABCF8"))) PPC_WEAK_FUNC(sub_823ABCF8);
PPC_FUNC_IMPL(__imp__sub_823ABCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823ABD00;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823abd70
	if (!ctx.cr6.eq) goto loc_823ABD70;
	// addi r11,r9,0
	ctx.r11.s64 = ctx.r9.s64 + 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// ori r26,r6,5
	ctx.r26.u64 = ctx.r6.u64 | 5;
	// bl 0x8237efc8
	ctx.lr = 0x823ABD4C;
	sub_8237EFC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237f168
	ctx.lr = 0x823ABD60;
	sub_8237F168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd7c
	if (!ctx.cr6.eq) goto loc_823ABD7C;
loc_823ABD68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_823ABD6C:
	// bl 0x8237eff8
	ctx.lr = 0x823ABD70;
	sub_8237EFF8(ctx, base);
loc_823ABD70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823ABD7C:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370e30
	ctx.lr = 0x823ABD88;
	sub_82370E30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371320
	ctx.lr = 0x823ABD94;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abd68
	if (ctx.cr6.eq) goto loc_823ABD68;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371320
	ctx.lr = 0x823ABDA8;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abd68
	if (ctx.cr6.eq) goto loc_823ABD68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237f250
	ctx.lr = 0x823ABDBC;
	sub_8237F250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abd68
	if (ctx.cr6.eq) goto loc_823ABD68;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823ABDD8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823abdd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ABDD8;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x822d6368
	ctx.lr = 0x823ABE04;
	sub_822D6368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823abd6c
	if (!ctx.cr6.eq) goto loc_823ABD6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8237eff8
	ctx.lr = 0x823ABE1C;
	sub_8237EFF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823ABE28"))) PPC_WEAK_FUNC(sub_823ABE28);
PPC_FUNC_IMPL(__imp__sub_823ABE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ABE30;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823abecc
	if (ctx.cr6.eq) goto loc_823ABECC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237efc8
	ctx.lr = 0x823ABE58;
	sub_8237EFC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237f168
	ctx.lr = 0x823ABE6C;
	sub_8237F168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abec4
	if (ctx.cr6.eq) goto loc_823ABEC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x823ABE80;
	sub_82370C48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82371320
	ctx.lr = 0x823ABE8C;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abebc
	if (ctx.cr6.eq) goto loc_823ABEBC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371320
	ctx.lr = 0x823ABEA0;
	sub_82371320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823abebc
	if (ctx.cr6.eq) goto loc_823ABEBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237f250
	ctx.lr = 0x823ABEB4;
	sub_8237F250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abed8
	if (!ctx.cr6.eq) goto loc_823ABED8;
loc_823ABEBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_823ABEC0:
	// bl 0x82372340
	ctx.lr = 0x823ABEC4;
	sub_82372340(ctx, base);
loc_823ABEC4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237eff8
	ctx.lr = 0x823ABECC;
	sub_8237EFF8(ctx, base);
loc_823ABECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823ABED8:
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822d6368
	ctx.lr = 0x823ABEF0;
	sub_822D6368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823abec0
	if (!ctx.cr6.eq) goto loc_823ABEC0;
	// bl 0x82372340
	ctx.lr = 0x823ABF00;
	sub_82372340(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237eff8
	ctx.lr = 0x823ABF08;
	sub_8237EFF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823ABF14"))) PPC_WEAK_FUNC(sub_823ABF14);
PPC_FUNC_IMPL(__imp__sub_823ABF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABF18"))) PPC_WEAK_FUNC(sub_823ABF18);
PPC_FUNC_IMPL(__imp__sub_823ABF18) {
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
	// beq cr6,0x823abf60
	if (ctx.cr6.eq) goto loc_823ABF60;
loc_823ABF3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ABF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823abf3c
	if (!ctx.cr6.eq) goto loc_823ABF3C;
loc_823ABF60:
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

__attribute__((alias("__imp__sub_823ABF88"))) PPC_WEAK_FUNC(sub_823ABF88);
PPC_FUNC_IMPL(__imp__sub_823ABF88) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-27128
	ctx.r10.s64 = ctx.r11.s64 + -27128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823adbf8
	ctx.lr = 0x823ABFB8;
	sub_823ADBF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823abfd0
	if (ctx.cr6.eq) goto loc_823ABFD0;
	// bl 0x82357128
	ctx.lr = 0x823ABFCC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823ABFD0:
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

__attribute__((alias("__imp__sub_823ABFE8"))) PPC_WEAK_FUNC(sub_823ABFE8);
PPC_FUNC_IMPL(__imp__sub_823ABFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ABFF0;
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
	ctx.lr = 0x823AC004;
	sub_823570E0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x823AC00C;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac040
	if (ctx.cr6.eq) goto loc_823AC040;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-27128
	ctx.r10.s64 = ctx.r11.s64 + -27128;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823ae7f8
	ctx.lr = 0x823AC030;
	sub_823AE7F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x823ac044
	goto loc_823AC044;
loc_823AC040:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823AC044:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AC04C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823ac060
	if (!ctx.cr6.eq) goto loc_823AC060;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AC060:
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

__attribute__((alias("__imp__sub_823AC078"))) PPC_WEAK_FUNC(sub_823AC078);
PPC_FUNC_IMPL(__imp__sub_823AC078) {
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
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ac0b4
	if (ctx.cr6.eq) goto loc_823AC0B4;
loc_823AC09C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,96(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823ad960
	ctx.lr = 0x823AC0AC;
	sub_823AD960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823ac09c
	if (!ctx.cr6.eq) goto loc_823AC09C;
loc_823AC0B4:
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x823abf18
	ctx.lr = 0x823AC0BC;
	sub_823ABF18(ctx, base);
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

__attribute__((alias("__imp__sub_823AC0D4"))) PPC_WEAK_FUNC(sub_823AC0D4);
PPC_FUNC_IMPL(__imp__sub_823AC0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC0D8"))) PPC_WEAK_FUNC(sub_823AC0D8);
PPC_FUNC_IMPL(__imp__sub_823AC0D8) {
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
	// bl 0x823abfe8
	ctx.lr = 0x823AC0F0;
	sub_823ABFE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ac10c
	if (!ctx.cr6.eq) goto loc_823AC10C;
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
loc_823AC10C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac124
	if (ctx.cr6.eq) goto loc_823AC124;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
loc_823AC124:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ac138
	if (!ctx.cr6.eq) goto loc_823AC138;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823AC138:
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

__attribute__((alias("__imp__sub_823AC150"))) PPC_WEAK_FUNC(sub_823AC150);
PPC_FUNC_IMPL(__imp__sub_823AC150) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27124
	ctx.r10.s64 = ctx.r11.s64 + -27124;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82370c48
	ctx.lr = 0x823AC194;
	sub_82370C48(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x823585a0
	ctx.lr = 0x823AC1B4;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_823AC1D0"))) PPC_WEAK_FUNC(sub_823AC1D0);
PPC_FUNC_IMPL(__imp__sub_823AC1D0) {
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
	// lwz r3,-4816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ac228
	if (!ctx.cr6.eq) goto loc_823AC228;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823AC1F8;
	sub_823570E0(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x823570f0
	ctx.lr = 0x823AC200;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac214
	if (ctx.cr6.eq) goto loc_823AC214;
	// bl 0x823ac150
	ctx.lr = 0x823AC20C;
	sub_823AC150(ctx, base);
	// stw r3,-4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4816, ctx.r3.u32);
	// b 0x823ac21c
	goto loc_823AC21C;
loc_823AC214:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4816, ctx.r11.u32);
loc_823AC21C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AC224;
	sub_823570E0(ctx, base);
	// lwz r3,-4816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4816);
loc_823AC228:
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

__attribute__((alias("__imp__sub_823AC23C"))) PPC_WEAK_FUNC(sub_823AC23C);
PPC_FUNC_IMPL(__imp__sub_823AC23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC240"))) PPC_WEAK_FUNC(sub_823AC240);
PPC_FUNC_IMPL(__imp__sub_823AC240) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823adb78
	ctx.lr = 0x823AC264;
	sub_823ADB78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ae620
	ctx.lr = 0x823AC270;
	sub_823AE620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ac294
	if (ctx.cr6.eq) goto loc_823AC294;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823ac0d8
	ctx.lr = 0x823AC284;
	sub_823AC0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823ac2a4
	if (!ctx.cr6.eq) goto loc_823AC2A4;
	// bl 0x823ad960
	ctx.lr = 0x823AC294;
	sub_823AD960(ctx, base);
loc_823AC294:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823adbf8
	ctx.lr = 0x823AC29C;
	sub_823ADBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ac2ac
	goto loc_823AC2AC;
loc_823AC2A4:
	// bl 0x823adbf8
	ctx.lr = 0x823AC2A8;
	sub_823ADBF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823AC2AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_823AC2C4"))) PPC_WEAK_FUNC(sub_823AC2C4);
PPC_FUNC_IMPL(__imp__sub_823AC2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC2C8"))) PPC_WEAK_FUNC(sub_823AC2C8);
PPC_FUNC_IMPL(__imp__sub_823AC2C8) {
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
	// addi r10,r11,-27124
	ctx.r10.s64 = ctx.r11.s64 + -27124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823abc78
	ctx.lr = 0x823AC2F4;
	sub_823ABC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac078
	ctx.lr = 0x823AC2FC;
	sub_823AC078(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823abf18
	ctx.lr = 0x823AC304;
	sub_823ABF18(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82372340
	ctx.lr = 0x823AC30C;
	sub_82372340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ac324
	if (ctx.cr6.eq) goto loc_823AC324;
	// bl 0x82357128
	ctx.lr = 0x823AC320;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AC324:
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

__attribute__((alias("__imp__sub_823AC33C"))) PPC_WEAK_FUNC(sub_823AC33C);
PPC_FUNC_IMPL(__imp__sub_823AC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC340"))) PPC_WEAK_FUNC(sub_823AC340);
PPC_FUNC_IMPL(__imp__sub_823AC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823AC348;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ac4d0
	if (ctx.cr6.eq) goto loc_823AC4D0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_823AC360:
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// addi r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r27,96(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x823ae260
	ctx.lr = 0x823AC378;
	sub_823AE260(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ad668
	ctx.lr = 0x823AC380;
	sub_823AD668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac4c8
	if (!ctx.cr6.eq) goto loc_823AC4C8;
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r29,r26,52
	ctx.r29.s64 = ctx.r26.s64 + 52;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823ac408
	if (!ctx.cr6.eq) goto loc_823AC408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac4c8
	if (ctx.cr6.eq) goto loc_823AC4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,96(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ac3cc
	if (ctx.cr6.eq) goto loc_823AC3CC;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_823AC3CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ac3d8
	if (ctx.cr6.eq) goto loc_823AC3D8;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
loc_823AC3D8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bne cr6,0x823ac400
	if (!ctx.cr6.eq) goto loc_823AC400;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823ac400
	if (!ctx.cr6.eq) goto loc_823AC400;
	// stw r25,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
loc_823AC400:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// b 0x823ac4c8
	goto loc_823AC4C8;
loc_823AC408:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823ac484
	if (!ctx.cr6.eq) goto loc_823AC484;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac4c8
	if (ctx.cr6.eq) goto loc_823AC4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,100(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823ac448
	if (ctx.cr6.eq) goto loc_823AC448;
	// stw r30,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r30.u32);
loc_823AC448:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ac454
	if (ctx.cr6.eq) goto loc_823AC454;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
loc_823AC454:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bne cr6,0x823ac47c
	if (!ctx.cr6.eq) goto loc_823AC47C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823ac47c
	if (!ctx.cr6.eq) goto loc_823AC47C;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_823AC47C:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// b 0x823ac4c8
	goto loc_823AC4C8;
loc_823AC484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ac4b0
	if (ctx.cr6.eq) goto loc_823AC4B0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_823AC4B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ac4bc
	if (ctx.cr6.eq) goto loc_823AC4BC;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
loc_823AC4BC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823AC4C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823ac360
	if (!ctx.cr6.eq) goto loc_823AC360;
loc_823AC4D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823AC4D8"))) PPC_WEAK_FUNC(sub_823AC4D8);
PPC_FUNC_IMPL(__imp__sub_823AC4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AC4E0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381348
	ctx.lr = 0x823AC4FC;
	sub_82381348(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r10,r11,-27120
	ctx.r10.s64 = ctx.r11.s64 + -27120;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823AC530;
	sub_823A86F8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AC548"))) PPC_WEAK_FUNC(sub_823AC548);
PPC_FUNC_IMPL(__imp__sub_823AC548) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-27120
	ctx.r10.s64 = ctx.r11.s64 + -27120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823ac590
	if (ctx.cr6.eq) goto loc_823AC590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_823AC590:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x823ab568
	ctx.lr = 0x823AC598;
	sub_823AB568(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823ab568
	ctx.lr = 0x823AC5A0;
	sub_823AB568(ctx, base);
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

__attribute__((alias("__imp__sub_823AC5B4"))) PPC_WEAK_FUNC(sub_823AC5B4);
PPC_FUNC_IMPL(__imp__sub_823AC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC5B8"))) PPC_WEAK_FUNC(sub_823AC5B8);
PPC_FUNC_IMPL(__imp__sub_823AC5B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC5C0"))) PPC_WEAK_FUNC(sub_823AC5C0);
PPC_FUNC_IMPL(__imp__sub_823AC5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC5C8"))) PPC_WEAK_FUNC(sub_823AC5C8);
PPC_FUNC_IMPL(__imp__sub_823AC5C8) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823AC5E0;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC5F4;
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

__attribute__((alias("__imp__sub_823AC608"))) PPC_WEAK_FUNC(sub_823AC608);
PPC_FUNC_IMPL(__imp__sub_823AC608) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ac620
	if (!ctx.cr6.eq) goto loc_823AC620;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_823AC620:
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC628"))) PPC_WEAK_FUNC(sub_823AC628);
PPC_FUNC_IMPL(__imp__sub_823AC628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC63C"))) PPC_WEAK_FUNC(sub_823AC63C);
PPC_FUNC_IMPL(__imp__sub_823AC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC640"))) PPC_WEAK_FUNC(sub_823AC640);
PPC_FUNC_IMPL(__imp__sub_823AC640) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC648"))) PPC_WEAK_FUNC(sub_823AC648);
PPC_FUNC_IMPL(__imp__sub_823AC648) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC650"))) PPC_WEAK_FUNC(sub_823AC650);
PPC_FUNC_IMPL(__imp__sub_823AC650) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC658"))) PPC_WEAK_FUNC(sub_823AC658);
PPC_FUNC_IMPL(__imp__sub_823AC658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC660"))) PPC_WEAK_FUNC(sub_823AC660);
PPC_FUNC_IMPL(__imp__sub_823AC660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC668"))) PPC_WEAK_FUNC(sub_823AC668);
PPC_FUNC_IMPL(__imp__sub_823AC668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x8237d130
	sub_8237D130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AC670"))) PPC_WEAK_FUNC(sub_823AC670);
PPC_FUNC_IMPL(__imp__sub_823AC670) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// lfs f31,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8237d218
	ctx.lr = 0x823AC690;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x823ac6a0
	if (ctx.cr6.lt) goto loc_823AC6A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC6A0:
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

__attribute__((alias("__imp__sub_823AC6B4"))) PPC_WEAK_FUNC(sub_823AC6B4);
PPC_FUNC_IMPL(__imp__sub_823AC6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC6B8"))) PPC_WEAK_FUNC(sub_823AC6B8);
PPC_FUNC_IMPL(__imp__sub_823AC6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC6C0"))) PPC_WEAK_FUNC(sub_823AC6C0);
PPC_FUNC_IMPL(__imp__sub_823AC6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823AC6D0"))) PPC_WEAK_FUNC(sub_823AC6D0);
PPC_FUNC_IMPL(__imp__sub_823AC6D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823ac81c
	if (ctx.cr6.gt) goto loc_823AC81C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ac738
	// bdzf 4*cr6+eq,0x823ac774
	// bdzf 4*cr6+eq,0x823ac79c
	// bne cr6,0x823ac830
	if (!ctx.cr6.eq) goto loc_823AC830;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r9,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// b 0x823ac830
	goto loc_823AC830;
loc_823AC738:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823ac768
	if (ctx.cr6.eq) goto loc_823AC768;
loc_823AC754:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823ac830
	if (!ctx.cr6.eq) goto loc_823AC830;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x823ac830
	goto loc_823AC830;
loc_823AC768:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x823ac830
	goto loc_823AC830;
loc_823AC774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823ac754
	if (!ctx.cr6.eq) goto loc_823AC754;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x823ac830
	goto loc_823AC830;
loc_823AC79C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823ac7c0
	if (ctx.cr6.eq) goto loc_823AC7C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823ac7c8
	if (!ctx.cr6.eq) goto loc_823AC7C8;
loc_823AC7C0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_823AC7C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823ac830
	if (!ctx.cr6.eq) goto loc_823AC830;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381370
	ctx.lr = 0x823AC7E0;
	sub_82381370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823ac830
	if (!ctx.cr6.gt) goto loc_823AC830;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ac800
	if (!ctx.cr6.eq) goto loc_823AC800;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac830
	if (ctx.cr6.eq) goto loc_823AC830;
loc_823AC800:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82381378
	ctx.lr = 0x823AC808;
	sub_82381378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x823ac830
	goto loc_823AC830;
loc_823AC81C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,3
	ctx.r9.u64 = ctx.r11.u64 | 3;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_823AC830:
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

__attribute__((alias("__imp__sub_823AC848"))) PPC_WEAK_FUNC(sub_823AC848);
PPC_FUNC_IMPL(__imp__sub_823AC848) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-27120
	ctx.r10.s64 = ctx.r11.s64 + -27120;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823ac898
	if (ctx.cr6.eq) goto loc_823AC898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_823AC898:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x823ab568
	ctx.lr = 0x823AC8A0;
	sub_823AB568(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823ab568
	ctx.lr = 0x823AC8A8;
	sub_823AB568(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac8c0
	if (ctx.cr6.eq) goto loc_823AC8C0;
	// bl 0x82357128
	ctx.lr = 0x823AC8BC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AC8C0:
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

__attribute__((alias("__imp__sub_823AC8D8"))) PPC_WEAK_FUNC(sub_823AC8D8);
PPC_FUNC_IMPL(__imp__sub_823AC8D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ac904
	if (!ctx.cr6.eq) goto loc_823AC904;
loc_823AC8FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ac990
	goto loc_823AC990;
loc_823AC904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac8fc
	if (!ctx.cr6.eq) goto loc_823AC8FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac8fc
	if (!ctx.cr6.eq) goto loc_823AC8FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823ac978
	if (!ctx.cr6.eq) goto loc_823AC978;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823AC964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ac990
	if (ctx.cr6.eq) goto loc_823AC990;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x823ac990
	goto loc_823AC990;
loc_823AC978:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823AC990:
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

__attribute__((alias("__imp__sub_823AC9A8"))) PPC_WEAK_FUNC(sub_823AC9A8);
PPC_FUNC_IMPL(__imp__sub_823AC9A8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823acc70
	if (ctx.cr6.eq) goto loc_823ACC70;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AC9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acc70
	if (ctx.cr6.eq) goto loc_823ACC70;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823AC9F8;
	sub_823570E0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x823acc38
	if (ctx.cr6.gt) goto loc_823ACC38;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13796
	ctx.r12.s64 = ctx.r12.s64 + -13796;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-13656(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13656);
	// lwz r17,-13620(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13620);
	// lwz r17,-13592(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13592);
	// lwz r17,-13564(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13564);
	// lwz r17,-13536(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13536);
	// lwz r17,-13508(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13508);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13480(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13480);
	// lwz r17,-13452(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13452);
	// lwz r17,-13424(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13424);
	// lwz r17,-13396(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13396);
	// lwz r17,-13368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13368);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13340(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13340);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13256(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13256);
	// lwz r17,-13312(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13312);
	// lwz r17,-13284(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13284);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823ACAB0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b88c8
	ctx.lr = 0x823ACAC0;
	sub_823B88C8(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
loc_823ACAC4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823acc48
	goto loc_823ACC48;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823ACAD4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b8768
	ctx.lr = 0x823ACAE4;
	sub_823B8768(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,296
	ctx.r3.s64 = 296;
	// bl 0x823570f0
	ctx.lr = 0x823ACAF0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b7df8
	ctx.lr = 0x823ACB00;
	sub_823B7DF8(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x823570f0
	ctx.lr = 0x823ACB0C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b78d8
	ctx.lr = 0x823ACB1C;
	sub_823B78D8(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x823570f0
	ctx.lr = 0x823ACB28;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b6848
	ctx.lr = 0x823ACB38;
	sub_823B6848(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x823570f0
	ctx.lr = 0x823ACB44;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b5c20
	ctx.lr = 0x823ACB54;
	sub_823B5C20(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x823570f0
	ctx.lr = 0x823ACB60;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b56b8
	ctx.lr = 0x823ACB70;
	sub_823B56B8(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x823570f0
	ctx.lr = 0x823ACB7C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b3d38
	ctx.lr = 0x823ACB8C;
	sub_823B3D38(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823ACB98;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b2ec0
	ctx.lr = 0x823ACBA8;
	sub_823B2EC0(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x823570f0
	ctx.lr = 0x823ACBB4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b24c0
	ctx.lr = 0x823ACBC4;
	sub_823B24C0(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x823570f0
	ctx.lr = 0x823ACBD0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b1d50
	ctx.lr = 0x823ACBE0;
	sub_823B1D50(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,296
	ctx.r3.s64 = 296;
	// bl 0x823570f0
	ctx.lr = 0x823ACBEC;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b0f48
	ctx.lr = 0x823ACBFC;
	sub_823B0F48(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x823570f0
	ctx.lr = 0x823ACC08;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823af400
	ctx.lr = 0x823ACC18;
	sub_823AF400(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x823570f0
	ctx.lr = 0x823ACC24;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acac4
	if (ctx.cr6.eq) goto loc_823ACAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823aed78
	ctx.lr = 0x823ACC34;
	sub_823AED78(ctx, base);
	// b 0x823acc44
	goto loc_823ACC44;
loc_823ACC38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ae8a0
	ctx.lr = 0x823ACC44;
	sub_823AE8A0(ctx, base);
loc_823ACC44:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823ACC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823ACC50;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823acc78
	if (!ctx.cr6.eq) goto loc_823ACC78;
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
	ctx.lr = 0x823ACC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ACC70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823acc90
	goto loc_823ACC90;
loc_823ACC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823ACC80;
	sub_823AC6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823ac658
	ctx.lr = 0x823ACC8C;
	sub_823AC658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823ACC90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_823ACCAC"))) PPC_WEAK_FUNC(sub_823ACCAC);
PPC_FUNC_IMPL(__imp__sub_823ACCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACCB0"))) PPC_WEAK_FUNC(sub_823ACCB0);
PPC_FUNC_IMPL(__imp__sub_823ACCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4812(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACCBC"))) PPC_WEAK_FUNC(sub_823ACCBC);
PPC_FUNC_IMPL(__imp__sub_823ACCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACCC0"))) PPC_WEAK_FUNC(sub_823ACCC0);
PPC_FUNC_IMPL(__imp__sub_823ACCC0) {
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
	// beq cr6,0x823accf8
	if (ctx.cr6.eq) goto loc_823ACCF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_823ACCF8:
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

__attribute__((alias("__imp__sub_823ACD0C"))) PPC_WEAK_FUNC(sub_823ACD0C);
PPC_FUNC_IMPL(__imp__sub_823ACD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACD10"))) PPC_WEAK_FUNC(sub_823ACD10);
PPC_FUNC_IMPL(__imp__sub_823ACD10) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823acd40
	if (!ctx.cr6.eq) goto loc_823ACD40;
loc_823ACD38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823acd64
	goto loc_823ACD64;
loc_823ACD40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acd38
	if (!ctx.cr6.eq) goto loc_823ACD38;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823ACD64:
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

__attribute__((alias("__imp__sub_823ACD7C"))) PPC_WEAK_FUNC(sub_823ACD7C);
PPC_FUNC_IMPL(__imp__sub_823ACD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACD80"))) PPC_WEAK_FUNC(sub_823ACD80);
PPC_FUNC_IMPL(__imp__sub_823ACD80) {
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
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bge cr6,0x823acdd0
	if (!ctx.cr6.lt) goto loc_823ACDD0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823acdd0
	if (ctx.cr6.eq) goto loc_823ACDD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acdd0
	if (ctx.cr6.eq) goto loc_823ACDD0;
	// bl 0x820884b0
	ctx.lr = 0x823ACDBC;
	sub_820884B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823acdd0
	if (ctx.cr6.eq) goto loc_823ACDD0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823acdd4
	goto loc_823ACDD4;
loc_823ACDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACDD4:
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

__attribute__((alias("__imp__sub_823ACDEC"))) PPC_WEAK_FUNC(sub_823ACDEC);
PPC_FUNC_IMPL(__imp__sub_823ACDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACDF0"))) PPC_WEAK_FUNC(sub_823ACDF0);
PPC_FUNC_IMPL(__imp__sub_823ACDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823ACDF8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ace18
	if (!ctx.cr6.eq) goto loc_823ACE18;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823ACE18:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r28,r11,-4040
	ctx.r28.s64 = ctx.r11.s64 + -4040;
loc_823ACE30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ace98
	if (ctx.cr6.eq) goto loc_823ACE98;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bgt cr6,0x823ace98
	if (ctx.cr6.gt) goto loc_823ACE98;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ace98
	if (!ctx.cr6.eq) goto loc_823ACE98;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ace98
	if (!ctx.cr6.eq) goto loc_823ACE98;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_823ACE98:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823ace30
	if (!ctx.cr0.eq) goto loc_823ACE30;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823ACEB0"))) PPC_WEAK_FUNC(sub_823ACEB0);
PPC_FUNC_IMPL(__imp__sub_823ACEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823ACEB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aced8
	if (!ctx.cr6.eq) goto loc_823ACED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823ACED8:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823ACEE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acf24
	if (ctx.cr6.eq) goto loc_823ACF24;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x823acf24
	if (ctx.cr6.gt) goto loc_823ACF24;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acf24
	if (!ctx.cr6.eq) goto loc_823ACF24;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_823ACF24:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823acee8
	if (!ctx.cr0.eq) goto loc_823ACEE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823ACF3C"))) PPC_WEAK_FUNC(sub_823ACF3C);
PPC_FUNC_IMPL(__imp__sub_823ACF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACF40"))) PPC_WEAK_FUNC(sub_823ACF40);
PPC_FUNC_IMPL(__imp__sub_823ACF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823ACF48;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823acf68
	if (!ctx.cr6.eq) goto loc_823ACF68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823ACF68:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823ACF7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acfb8
	if (ctx.cr6.eq) goto loc_823ACFB8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x823acfb8
	if (ctx.cr6.eq) goto loc_823ACFB8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ACFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823acfb8
	if (!ctx.cr6.eq) goto loc_823ACFB8;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_823ACFB8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823acf7c
	if (!ctx.cr0.eq) goto loc_823ACF7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823ACFD4"))) PPC_WEAK_FUNC(sub_823ACFD4);
PPC_FUNC_IMPL(__imp__sub_823ACFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ACFD8"))) PPC_WEAK_FUNC(sub_823ACFD8);
PPC_FUNC_IMPL(__imp__sub_823ACFD8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x823ad03c
	if (ctx.cr6.gt) goto loc_823AD03C;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x823ad03c
	if (ctx.cr6.eq) goto loc_823AD03C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823500d0
	ctx.lr = 0x823AD014;
	sub_823500D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ad03c
	if (!ctx.cr6.eq) goto loc_823AD03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_823AD03C:
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
}

__attribute__((alias("__imp__sub_823AD054"))) PPC_WEAK_FUNC(sub_823AD054);
PPC_FUNC_IMPL(__imp__sub_823AD054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD058"))) PPC_WEAK_FUNC(sub_823AD058);
PPC_FUNC_IMPL(__imp__sub_823AD058) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x823ad07c
	if (ctx.cr6.gt) goto loc_823AD07C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad07c
	if (ctx.cr6.eq) goto loc_823AD07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823AD07C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD084"))) PPC_WEAK_FUNC(sub_823AD084);
PPC_FUNC_IMPL(__imp__sub_823AD084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD088"))) PPC_WEAK_FUNC(sub_823AD088);
PPC_FUNC_IMPL(__imp__sub_823AD088) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x823ad0ac
	if (ctx.cr6.gt) goto loc_823AD0AC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad0ac
	if (ctx.cr6.eq) goto loc_823AD0AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823AD0AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD0B4"))) PPC_WEAK_FUNC(sub_823AD0B4);
PPC_FUNC_IMPL(__imp__sub_823AD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD0B8"))) PPC_WEAK_FUNC(sub_823AD0B8);
PPC_FUNC_IMPL(__imp__sub_823AD0B8) {
	PPC_FUNC_PROLOGUE();
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x823ad0c8
	if (!ctx.cr6.eq) goto loc_823AD0C8;
loc_823AD0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823AD0C8:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad0c0
	if (ctx.cr6.eq) goto loc_823AD0C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823AD0E4"))) PPC_WEAK_FUNC(sub_823AD0E4);
PPC_FUNC_IMPL(__imp__sub_823AD0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD0E8"))) PPC_WEAK_FUNC(sub_823AD0E8);
PPC_FUNC_IMPL(__imp__sub_823AD0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AD0F0;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x823ad1e0
	if (ctx.cr6.gt) goto loc_823AD1E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad1e0
	if (ctx.cr6.eq) goto loc_823AD1E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// and r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ad1cc
	if (ctx.cr6.eq) goto loc_823AD1CC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x823ad184
	if (!ctx.cr6.eq) goto loc_823AD184;
	// li r11,42
	ctx.r11.s64 = 42;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823AD178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AD184:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823AD1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad1e0
	if (!ctx.cr6.eq) goto loc_823AD1E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AD1CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AD1E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AD1EC"))) PPC_WEAK_FUNC(sub_823AD1EC);
PPC_FUNC_IMPL(__imp__sub_823AD1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD1F0"))) PPC_WEAK_FUNC(sub_823AD1F0);
PPC_FUNC_IMPL(__imp__sub_823AD1F0) {
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
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x823ad218
	if (!ctx.cr6.eq) goto loc_823AD218;
loc_823AD204:
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
loc_823AD218:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad204
	if (ctx.cr6.eq) goto loc_823AD204;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD258"))) PPC_WEAK_FUNC(sub_823AD258);
PPC_FUNC_IMPL(__imp__sub_823AD258) {
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
	// lwz r3,-4812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ad2d4
	if (!ctx.cr6.eq) goto loc_823AD2D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823AD280;
	sub_823570E0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823570f0
	ctx.lr = 0x823AD288;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823ad2c4
	if (ctx.cr6.eq) goto loc_823AD2C4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r3,-4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4812, ctx.r3.u32);
	// b 0x823ad2c8
	goto loc_823AD2C8;
loc_823AD2C4:
	// stw r11,-4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4812, ctx.r11.u32);
loc_823AD2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AD2D0;
	sub_823570E0(ctx, base);
	// lwz r3,-4812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4812);
loc_823AD2D4:
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

__attribute__((alias("__imp__sub_823AD2E8"))) PPC_WEAK_FUNC(sub_823AD2E8);
PPC_FUNC_IMPL(__imp__sub_823AD2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823AD2F0;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-4040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4040);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823AD328;
	sub_823585A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// bl 0x8240e480
	ctx.lr = 0x823AD360;
	sub_8240E480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ad374
	if (ctx.cr6.eq) goto loc_823AD374;
loc_823AD368:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823AD374:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823acd80
	ctx.lr = 0x823AD380;
	sub_823ACD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ad368
	if (ctx.cr6.eq) goto loc_823AD368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823acd10
	ctx.lr = 0x823AD394;
	sub_823ACD10(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823AD3A8"))) PPC_WEAK_FUNC(sub_823AD3A8);
PPC_FUNC_IMPL(__imp__sub_823AD3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823AD3B0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad3d0
	if (!ctx.cr6.eq) goto loc_823AD3D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823AD3D0:
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r27,r4,16
	ctx.r27.s64 = ctx.r4.s64 + 16;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r11,-4040
	ctx.r25.s64 = ctx.r11.s64 + -4040;
loc_823AD3EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ad4a0
	if (ctx.cr6.eq) goto loc_823AD4A0;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// ld r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x823ad4a0
	if (ctx.cr6.eq) goto loc_823AD4A0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad4a0
	if (!ctx.cr6.eq) goto loc_823AD4A0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad4a0
	if (!ctx.cr6.eq) goto loc_823AD4A0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823acfd8
	ctx.lr = 0x823AD474;
	sub_823ACFD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ad49c
	if (ctx.cr6.eq) goto loc_823AD49C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823AD49C:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
loc_823AD4A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x823ad3ec
	if (ctx.cr6.lt) goto loc_823AD3EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823AD4C0"))) PPC_WEAK_FUNC(sub_823AD4C0);
PPC_FUNC_IMPL(__imp__sub_823AD4C0) {
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
	// lwz r3,-4812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad4ec
	if (ctx.cr6.eq) goto loc_823AD4EC;
	// bl 0x82357128
	ctx.lr = 0x823AD4E4;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4812, ctx.r11.u32);
loc_823AD4EC:
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

__attribute__((alias("__imp__sub_823AD500"))) PPC_WEAK_FUNC(sub_823AD500);
PPC_FUNC_IMPL(__imp__sub_823AD500) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-27052
	ctx.r11.s64 = ctx.r11.s64 + -27052;
	// li r4,208
	ctx.r4.s64 = 208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823AD530;
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

__attribute__((alias("__imp__sub_823AD548"))) PPC_WEAK_FUNC(sub_823AD548);
PPC_FUNC_IMPL(__imp__sub_823AD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-27052
	ctx.r11.s64 = ctx.r11.s64 + -27052;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD558"))) PPC_WEAK_FUNC(sub_823AD558);
PPC_FUNC_IMPL(__imp__sub_823AD558) {
	PPC_FUNC_PROLOGUE();
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x823585a0
	sub_823585A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD564"))) PPC_WEAK_FUNC(sub_823AD564);
PPC_FUNC_IMPL(__imp__sub_823AD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD568"))) PPC_WEAK_FUNC(sub_823AD568);
PPC_FUNC_IMPL(__imp__sub_823AD568) {
	PPC_FUNC_PROLOGUE();
	// li r5,208
	ctx.r5.s64 = 208;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AD578"))) PPC_WEAK_FUNC(sub_823AD578);
PPC_FUNC_IMPL(__imp__sub_823AD578) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// li r5,208
	ctx.r5.s64 = 208;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x82358508
	ctx.lr = 0x823AD5B0;
	sub_82358508(ctx, base);
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

__attribute__((alias("__imp__sub_823AD5C4"))) PPC_WEAK_FUNC(sub_823AD5C4);
PPC_FUNC_IMPL(__imp__sub_823AD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD5C8"))) PPC_WEAK_FUNC(sub_823AD5C8);
PPC_FUNC_IMPL(__imp__sub_823AD5C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27052
	ctx.r11.s64 = ctx.r11.s64 + -27052;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823ad5f4
	if (ctx.cr0.eq) goto loc_823AD5F4;
	// bl 0x82357128
	ctx.lr = 0x823AD5F4;
	sub_82357128(ctx, base);
loc_823AD5F4:
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

__attribute__((alias("__imp__sub_823AD60C"))) PPC_WEAK_FUNC(sub_823AD60C);
PPC_FUNC_IMPL(__imp__sub_823AD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD610"))) PPC_WEAK_FUNC(sub_823AD610);
PPC_FUNC_IMPL(__imp__sub_823AD610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AD618;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-27052
	ctx.r11.s64 = ctx.r11.s64 + -27052;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823AD648;
	sub_823585A0(ctx, base);
	// li r5,208
	ctx.r5.s64 = 208;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x823AD658;
	sub_82358508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AD664"))) PPC_WEAK_FUNC(sub_823AD664);
PPC_FUNC_IMPL(__imp__sub_823AD664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD668"))) PPC_WEAK_FUNC(sub_823AD668);
PPC_FUNC_IMPL(__imp__sub_823AD668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad680
	if (ctx.cr6.eq) goto loc_823AD680;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823AD680:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD688"))) PPC_WEAK_FUNC(sub_823AD688);
PPC_FUNC_IMPL(__imp__sub_823AD688) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-27044
	ctx.r9.s64 = ctx.r11.s64 + -27044;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r7,r10,30604
	ctx.r7.s64 = ctx.r10.s64 + 30604;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x823AD6D8;
	sub_82370088(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r5,r6,30588
	ctx.r5.s64 = ctx.r6.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823AD6F4;
	sub_823585A0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r3,r4,30596
	ctx.r3.s64 = ctx.r4.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823AD710;
	sub_823585A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_823AD750"))) PPC_WEAK_FUNC(sub_823AD750);
PPC_FUNC_IMPL(__imp__sub_823AD750) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-27044
	ctx.r10.s64 = ctx.r11.s64 + -27044;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823ad788
	if (ctx.cr6.eq) goto loc_823AD788;
	// bl 0x82357128
	ctx.lr = 0x823AD780;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_823AD788:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,30596
	ctx.r8.s64 = ctx.r11.s64 + 30596;
	// addi r7,r10,30588
	ctx.r7.s64 = ctx.r10.s64 + 30588;
	// addi r6,r9,30604
	ctx.r6.s64 = ctx.r9.s64 + 30604;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x823AD7B8;
	sub_823700D8(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r4,r5,-31544
	ctx.r4.s64 = ctx.r5.s64 + -31544;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_823AD7D8"))) PPC_WEAK_FUNC(sub_823AD7D8);
PPC_FUNC_IMPL(__imp__sub_823AD7D8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD804;
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
	ctx.lr = 0x823AD818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823AD82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// lfs f0,2148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// beq cr6,0x823ad868
	if (ctx.cr6.eq) goto loc_823AD868;
	// bl 0x82357128
	ctx.lr = 0x823AD864;
	sub_82357128(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_823AD868:
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

__attribute__((alias("__imp__sub_823AD884"))) PPC_WEAK_FUNC(sub_823AD884);
PPC_FUNC_IMPL(__imp__sub_823AD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD888"))) PPC_WEAK_FUNC(sub_823AD888);
PPC_FUNC_IMPL(__imp__sub_823AD888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AD890;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad8b8
	if (ctx.cr6.eq) goto loc_823AD8B8;
	// bl 0x82357128
	ctx.lr = 0x823AD8B4;
	sub_82357128(ctx, base);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
loc_823AD8B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// beq cr6,0x823ad904
	if (ctx.cr6.eq) goto loc_823AD904;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823ad904
	if (ctx.cr6.eq) goto loc_823AD904;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823AD8D4;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823AD8DC;
	sub_823570F0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AD8E8;
	sub_823570E0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad904
	if (ctx.cr6.eq) goto loc_823AD904;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x823AD900;
	sub_82358508(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_823AD904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AD90C"))) PPC_WEAK_FUNC(sub_823AD90C);
PPC_FUNC_IMPL(__imp__sub_823AD90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD910"))) PPC_WEAK_FUNC(sub_823AD910);
PPC_FUNC_IMPL(__imp__sub_823AD910) {
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
	// bl 0x823ad750
	ctx.lr = 0x823AD930;
	sub_823AD750(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad948
	if (ctx.cr6.eq) goto loc_823AD948;
	// bl 0x82357128
	ctx.lr = 0x823AD944;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AD948:
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

__attribute__((alias("__imp__sub_823AD960"))) PPC_WEAK_FUNC(sub_823AD960);
PPC_FUNC_IMPL(__imp__sub_823AD960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AD968;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ada18
	if (ctx.cr6.eq) goto loc_823ADA18;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad98c
	if (ctx.cr6.eq) goto loc_823AD98C;
	// bl 0x822d6400
	ctx.lr = 0x823AD98C;
	sub_822D6400(ctx, base);
loc_823AD98C:
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// stw r31,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad9ac
	if (ctx.cr6.eq) goto loc_823AD9AC;
	// bl 0x82357240
	ctx.lr = 0x823AD9A8;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823AD9AC:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,52
	ctx.r30.s64 = ctx.r28.s64 + 52;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r31.u32);
	// beq cr6,0x823ad9d0
	if (ctx.cr6.eq) goto loc_823AD9D0;
	// bl 0x82357240
	ctx.lr = 0x823AD9CC;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823AD9D0:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,72
	ctx.r29.s64 = ctx.r28.s64 + 72;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// beq cr6,0x823ad9f4
	if (ctx.cr6.eq) goto loc_823AD9F4;
	// bl 0x82357240
	ctx.lr = 0x823AD9F0;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823AD9F4:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ADA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823ADA18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823ADA20"))) PPC_WEAK_FUNC(sub_823ADA20);
PPC_FUNC_IMPL(__imp__sub_823ADA20) {
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
	// beq cr6,0x823ada68
	if (ctx.cr6.eq) goto loc_823ADA68;
loc_823ADA44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ADA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823ada44
	if (!ctx.cr6.eq) goto loc_823ADA44;
loc_823ADA68:
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

__attribute__((alias("__imp__sub_823ADA90"))) PPC_WEAK_FUNC(sub_823ADA90);
PPC_FUNC_IMPL(__imp__sub_823ADA90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad960
	sub_823AD960(ctx, base);
	return;
}

