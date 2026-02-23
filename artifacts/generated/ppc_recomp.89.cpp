#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8239B3A4"))) PPC_WEAK_FUNC(sub_8239B3A4);
PPC_FUNC_IMPL(__imp__sub_8239B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B3A8"))) PPC_WEAK_FUNC(sub_8239B3A8);
PPC_FUNC_IMPL(__imp__sub_8239B3A8) {
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
	// bge cr6,0x8239b418
	if (!ctx.cr6.lt) goto loc_8239B418;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8239b404
	if (!ctx.cr6.lt) goto loc_8239B404;
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
loc_8239B404:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8239b268
	ctx.lr = 0x8239B40C;
	sub_8239B268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239b41c
	if (ctx.cr6.eq) goto loc_8239B41C;
loc_8239B418:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239B41C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B42C"))) PPC_WEAK_FUNC(sub_8239B42C);
PPC_FUNC_IMPL(__imp__sub_8239B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B430"))) PPC_WEAK_FUNC(sub_8239B430);
PPC_FUNC_IMPL(__imp__sub_8239B430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239B438;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8239b474
	if (ctx.cr6.gt) goto loc_8239B474;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239b268
	ctx.lr = 0x8239B460;
	sub_8239B268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b474
	if (!ctx.cr6.eq) goto loc_8239B474;
loc_8239B468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8239B474:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239b468
	if (ctx.cr6.eq) goto loc_8239B468;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8239b4a0
	if (ctx.cr0.eq) goto loc_8239B4A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239adb0
	ctx.lr = 0x8239B4A0;
	sub_8239ADB0(ctx, base);
loc_8239B4A0:
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x8239B4AC;
	sub_82357038(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x8239B4B8;
	sub_82370360(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239B4D8"))) PPC_WEAK_FUNC(sub_8239B4D8);
PPC_FUNC_IMPL(__imp__sub_8239B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8239B4E0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8239b5bc
	if (ctx.cr6.eq) goto loc_8239B5BC;
	// bl 0x8239ac48
	ctx.lr = 0x8239B4F8;
	sub_8239AC48(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b510
	if (ctx.cr6.eq) goto loc_8239B510;
	// bl 0x82357240
	ctx.lr = 0x8239B50C;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8239B510:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239b530
	if (!ctx.cr6.eq) goto loc_8239B530;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8239B530:
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239b5bc
	if (ctx.cr6.eq) goto loc_8239B5BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239b3a8
	ctx.lr = 0x8239B548;
	sub_8239B3A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b558
	if (!ctx.cr6.eq) goto loc_8239B558;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8239B558:
	// lwz r25,8(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239b5b8
	if (ctx.cr6.eq) goto loc_8239B5B8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8239B568:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add. r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8239b57c
	if (ctx.cr0.eq) goto loc_8239B57C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8239adb0
	ctx.lr = 0x8239B57C;
	sub_8239ADB0(ctx, base);
loc_8239B57C:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x8239B598;
	sub_82357038(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x8239B5A4;
	sub_82370360(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// bne 0x8239b568
	if (!ctx.cr0.eq) goto loc_8239B568;
loc_8239B5B8:
	// stw r25,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r25.u32);
loc_8239B5BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8239B5C8"))) PPC_WEAK_FUNC(sub_8239B5C8);
PPC_FUNC_IMPL(__imp__sub_8239B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239ad30
	ctx.lr = 0x8239B5E4;
	sub_8239AD30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8239b430
	ctx.lr = 0x8239B5F0;
	sub_8239B430(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28808
	ctx.r9.s64 = ctx.r11.s64 + -28808;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x823700d8
	ctx.lr = 0x8239B614;
	sub_823700D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82356eb8
	ctx.lr = 0x8239B61C;
	sub_82356EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B634"))) PPC_WEAK_FUNC(sub_8239B634);
PPC_FUNC_IMPL(__imp__sub_8239B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B638"))) PPC_WEAK_FUNC(sub_8239B638);
PPC_FUNC_IMPL(__imp__sub_8239B638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239ad30
	ctx.lr = 0x8239B654;
	sub_8239AD30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8239b430
	ctx.lr = 0x8239B660;
	sub_8239B430(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28808
	ctx.r9.s64 = ctx.r11.s64 + -28808;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x823700d8
	ctx.lr = 0x8239B684;
	sub_823700D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82356eb8
	ctx.lr = 0x8239B68C;
	sub_82356EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B6A4"))) PPC_WEAK_FUNC(sub_8239B6A4);
PPC_FUNC_IMPL(__imp__sub_8239B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B6A8"))) PPC_WEAK_FUNC(sub_8239B6A8);
PPC_FUNC_IMPL(__imp__sub_8239B6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8239B6B0;
	sub_82248768(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239b6d0
	if (ctx.cr6.eq) goto loc_8239B6D0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8239bac0
	goto loc_8239BAC0;
loc_8239B6D0:
	// lwz r30,12(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239bab8
	if (ctx.cr6.eq) goto loc_8239BAB8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239bab8
	if (!ctx.cr6.eq) goto loc_8239BAB8;
	// lwz r21,48(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8239bab8
	if (ctx.cr6.eq) goto loc_8239BAB8;
	// bl 0x8235bf58
	ctx.lr = 0x8239B6F8;
	sub_8235BF58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8239ae28
	ctx.lr = 0x8239B708;
	sub_8239AE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b71c
	if (!ctx.cr6.eq) goto loc_8239B71C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x8239bac0
	goto loc_8239BAC0;
loc_8239B71C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357608
	ctx.lr = 0x8239B724;
	sub_82357608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b068
	ctx.lr = 0x8239B730;
	sub_8239B068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239B738;
	sub_8235ACB0(ctx, base);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357c90
	ctx.lr = 0x8239B744;
	sub_82357C90(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239B750;
	sub_82355AB0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239B75C;
	sub_82355AC0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,788(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 788);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x8235c058
	ctx.lr = 0x8239B77C;
	sub_8235C058(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b20
	ctx.lr = 0x8239B788;
	sub_82355B20(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac650
	ctx.lr = 0x8239B794;
	sub_823AC650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b850
	if (ctx.cr6.eq) goto loc_8239B850;
loc_8239B7A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd90
	ctx.lr = 0x8239B7B4;
	sub_8237FD90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fda8
	ctx.lr = 0x8239B7C4;
	sub_8237FDA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239B7D0;
	sub_823A43C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357bb8
	ctx.lr = 0x8239B7DC;
	sub_82357BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8239b638
	ctx.lr = 0x8239B7F0;
	sub_8239B638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239b8f4
	if (ctx.cr6.eq) goto loc_8239B8F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239B800;
	sub_823A43C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8239b82c
	if (ctx.cr6.eq) goto loc_8239B82C;
	// bl 0x82355ae0
	ctx.lr = 0x8239B810;
	sub_82355AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239B818;
	sub_82355AE0(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad8
	ctx.lr = 0x8239B824;
	sub_82355AD8(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8239b844
	goto loc_8239B844;
loc_8239B82C:
	// bl 0x82355ad0
	ctx.lr = 0x8239B830;
	sub_82355AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8239B838;
	sub_82355AD0(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac8
	ctx.lr = 0x8239B844;
	sub_82355AC8(ctx, base);
loc_8239B844:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8239b7a8
	if (ctx.cr6.lt) goto loc_8239B7A8;
loc_8239B850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r26,r24,r27
	ctx.r26.s64 = ctx.r27.s64 - ctx.r24.s64;
	// bl 0x823ac5c0
	ctx.lr = 0x8239B85C;
	sub_823AC5C0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b9a4
	if (ctx.cr6.eq) goto loc_8239B9A4;
loc_8239B86C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fdc0
	ctx.lr = 0x8239B878;
	sub_8237FDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fdd8
	ctx.lr = 0x8239B888;
	sub_8237FDD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239B894;
	sub_823A43C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8239b920
	if (ctx.cr6.eq) goto loc_8239B920;
	// bl 0x82355ac0
	ctx.lr = 0x8239B8A4;
	sub_82355AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b91c
	if (ctx.cr6.eq) goto loc_8239B91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239B8B4;
	sub_82355AE0(ctx, base);
	// subf r20,r24,r3
	ctx.r20.s64 = ctx.r3.s64 - ctx.r24.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239B8C0;
	sub_82355AC0(ctx, base);
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// ble cr6,0x8239b91c
	if (!ctx.cr6.gt) goto loc_8239B91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239B8D0;
	sub_82355AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239B8D8;
	sub_82355AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239B8E0;
	sub_82355AE0(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad8
	ctx.lr = 0x8239B8EC;
	sub_82355AD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8239b960
	goto loc_8239B960;
loc_8239B8F4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239B908;
	sub_823AB100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b190
	ctx.lr = 0x8239B910;
	sub_8239B190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8239B91C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239B920:
	// bl 0x82355ad0
	ctx.lr = 0x8239B924;
	sub_82355AD0(ctx, base);
	// subf r20,r26,r3
	ctx.r20.s64 = ctx.r3.s64 - ctx.r26.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239B930;
	sub_82355AB0(ctx, base);
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// ble cr6,0x8239b8f4
	if (!ctx.cr6.gt) goto loc_8239B8F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8239B940;
	sub_82355AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239B948;
	sub_82355AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8239B950;
	sub_82355AD0(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac8
	ctx.lr = 0x8239B95C;
	sub_82355AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8239B960:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82356610
	ctx.lr = 0x8239B968;
	sub_82356610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239B970;
	sub_823A43C8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357bb8
	ctx.lr = 0x8239B97C;
	sub_82357BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x8239b5c8
	ctx.lr = 0x8239B990;
	sub_8239B5C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239b8f4
	if (ctx.cr6.eq) goto loc_8239B8F4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8239b86c
	if (ctx.cr6.lt) goto loc_8239B86C;
loc_8239B9A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239B9AC;
	sub_8237FD78(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ba04
	if (ctx.cr6.eq) goto loc_8239BA04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239B9C0;
	sub_8237FD78(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ba44
	if (ctx.cr6.eq) goto loc_8239BA44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8239B9D4;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82356318
	ctx.lr = 0x8239B9E0;
	sub_82356318(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82355ad0
	ctx.lr = 0x8239B9E8;
	sub_82355AD0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82355ae0
	ctx.lr = 0x8239B9F4;
	sub_82355AE0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82355de8
	ctx.lr = 0x8239BA00;
	sub_82355DE8(ctx, base);
	// b 0x8239ba44
	goto loc_8239BA44;
loc_8239BA04:
	// lwz r11,1928(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ba44
	if (ctx.cr6.eq) goto loc_8239BA44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8239BA18;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8237c490
	ctx.lr = 0x8239BA24;
	sub_8237C490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8239BA2C;
	sub_82355AD0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239BA38;
	sub_82355AE0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8237c1d0
	ctx.lr = 0x8239BA44;
	sub_8237C1D0(ctx, base);
loc_8239BA44:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239BA50;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239BA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r9,32288
	ctx.r7.s64 = ctx.r9.s64 + 32288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,60(r22)
	PPC_STORE_U32(ctx.r22.u32 + 60, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,64(r22)
	PPC_STORE_U32(ctx.r22.u32 + 64, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,68(r22)
	PPC_STORE_U32(ctx.r22.u32 + 68, ctx.r4.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,72(r22)
	PPC_STORE_U32(ctx.r22.u32 + 72, ctx.r11.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r8,88(r22)
	PPC_STORE_U32(ctx.r22.u32 + 88, ctx.r8.u32);
	// bl 0x8239b190
	ctx.lr = 0x8239BAAC;
	sub_8239B190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8239BAB8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239BAC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239BACC;
	sub_823AB100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8239BAD8"))) PPC_WEAK_FUNC(sub_8239BAD8);
PPC_FUNC_IMPL(__imp__sub_8239BAD8) {
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
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r7,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r7.u32);
	// bl 0x8239b4d8
	ctx.lr = 0x8239BB28;
	sub_8239B4D8(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x8239b4d8
	ctx.lr = 0x8239BB34;
	sub_8239B4D8(ctx, base);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r6,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r6.u32);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r5,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r5.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r4,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r4.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r9,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8239BB84"))) PPC_WEAK_FUNC(sub_8239BB84);
PPC_FUNC_IMPL(__imp__sub_8239BB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239BB88"))) PPC_WEAK_FUNC(sub_8239BB88);
PPC_FUNC_IMPL(__imp__sub_8239BB88) {
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
	ctx.lr = 0x8239BBA8;
	sub_823570E0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823570f0
	ctx.lr = 0x8239BBB0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239bc3c
	if (ctx.cr6.eq) goto loc_8239BC3C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r8,r10,-28616
	ctx.r8.s64 = ctx.r10.s64 + -28616;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// b 0x8239bc40
	goto loc_8239BC40;
loc_8239BC3C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239BC40:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239BC48;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239bc58
	if (!ctx.cr6.eq) goto loc_8239BC58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bc68
	goto loc_8239BC68;
loc_8239BC58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239bad8
	ctx.lr = 0x8239BC64;
	sub_8239BAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239BC68:
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

__attribute__((alias("__imp__sub_8239BC80"))) PPC_WEAK_FUNC(sub_8239BC80);
PPC_FUNC_IMPL(__imp__sub_8239BC80) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28604
	ctx.r9.s64 = ctx.r11.s64 + -28604;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r5,r10,30588
	ctx.r5.s64 = ctx.r10.s64 + 30588;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239BCD4;
	sub_823585A0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r4,30596
	ctx.r3.s64 = ctx.r4.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239BCF0;
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

__attribute__((alias("__imp__sub_8239BD08"))) PPC_WEAK_FUNC(sub_8239BD08);
PPC_FUNC_IMPL(__imp__sub_8239BD08) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239BD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239BD54;
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

__attribute__((alias("__imp__sub_8239BD68"))) PPC_WEAK_FUNC(sub_8239BD68);
PPC_FUNC_IMPL(__imp__sub_8239BD68) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,30596
	ctx.r8.s64 = ctx.r11.s64 + 30596;
	// addi r7,r10,30588
	ctx.r7.s64 = ctx.r10.s64 + 30588;
	// addi r6,r9,31824
	ctx.r6.s64 = ctx.r9.s64 + 31824;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239bdb4
	if (ctx.cr6.eq) goto loc_8239BDB4;
	// bl 0x82357128
	ctx.lr = 0x8239BDB0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239BDB4:
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

__attribute__((alias("__imp__sub_8239BDC8"))) PPC_WEAK_FUNC(sub_8239BDC8);
PPC_FUNC_IMPL(__imp__sub_8239BDC8) {
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
	// bl 0x823ab790
	ctx.lr = 0x8239BDE0;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28576
	ctx.r8.s64 = ctx.r11.s64 + -28576;
	// addi r7,r10,-28592
	ctx.r7.s64 = ctx.r10.s64 + -28592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239BE30"))) PPC_WEAK_FUNC(sub_8239BE30);
PPC_FUNC_IMPL(__imp__sub_8239BE30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239be38
	sub_8239BE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239BE38"))) PPC_WEAK_FUNC(sub_8239BE38);
PPC_FUNC_IMPL(__imp__sub_8239BE38) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28576
	ctx.r8.s64 = ctx.r11.s64 + -28576;
	// addi r7,r10,-28592
	ctx.r7.s64 = ctx.r10.s64 + -28592;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8239BE7C;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239be94
	if (ctx.cr6.eq) goto loc_8239BE94;
	// bl 0x82357128
	ctx.lr = 0x8239BE90;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239BE94:
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

__attribute__((alias("__imp__sub_8239BEAC"))) PPC_WEAK_FUNC(sub_8239BEAC);
PPC_FUNC_IMPL(__imp__sub_8239BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239BEB0"))) PPC_WEAK_FUNC(sub_8239BEB0);
PPC_FUNC_IMPL(__imp__sub_8239BEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239BEB8;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239bf98
	if (ctx.cr6.eq) goto loc_8239BF98;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8239bf98
	if (!ctx.cr6.eq) goto loc_8239BF98;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239bf98
	if (ctx.cr6.eq) goto loc_8239BF98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357600
	ctx.lr = 0x8239BEEC;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239bc80
	ctx.lr = 0x8239BEF8;
	sub_8239BC80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239BF00;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239BF0C;
	sub_823A43C8(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239BF18;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,132(r1)
	PPC_STORE_U64(ctx.r1.u32 + 132, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239BF2C;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239BF40;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239BF4C;
	sub_823AB0F8(ctx, base);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239BF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239BF98:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239BFAC;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239BFB8"))) PPC_WEAK_FUNC(sub_8239BFB8);
PPC_FUNC_IMPL(__imp__sub_8239BFB8) {
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
	ctx.lr = 0x8239BFD8;
	sub_823570E0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x823570f0
	ctx.lr = 0x8239BFE0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239bff4
	if (ctx.cr6.eq) goto loc_8239BFF4;
	// bl 0x8239bc80
	ctx.lr = 0x8239BFEC;
	sub_8239BC80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239bff8
	goto loc_8239BFF8;
loc_8239BFF4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239BFF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239C000;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239c010
	if (!ctx.cr6.eq) goto loc_8239C010;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239c058
	goto loc_8239C058;
loc_8239C010:
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,19
	ctx.r11.s64 = ctx.r30.s64 + 19;
	// addi r10,r31,19
	ctx.r10.s64 = ctx.r31.s64 + 19;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_8239C030:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239c030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C030;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239C04C;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8239C058:
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

__attribute__((alias("__imp__sub_8239C070"))) PPC_WEAK_FUNC(sub_8239C070);
PPC_FUNC_IMPL(__imp__sub_8239C070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239c0e0
	if (ctx.cr6.gt) {
		sub_8239C0E0(ctx, base);
		return;
	}
	// beq cr6,0x8239c0d4
	if (ctx.cr6.eq) {
		// ERROR 8239C0D4
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8239c160
	if (ctx.cr6.gt) {
		// ERROR 8239C160
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16212
	ctx.r12.s64 = ctx.r12.s64 + -16212;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239C0AC"))) PPC_WEAK_FUNC(sub_8239C0AC);
PPC_FUNC_IMPL(__imp__sub_8239C0AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16172(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16172);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16024);
	// lwz r17,-16172(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16172);
	// lwz r17,-16172(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16172);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239C0E0"))) PPC_WEAK_FUNC(sub_8239C0E0);
PPC_FUNC_IMPL(__imp__sub_8239C0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239c12c
	if (ctx.cr6.gt) goto loc_8239C12C;
	// beq cr6,0x8239c0d4
	if (ctx.cr6.eq) {
		// ERROR 8239C0D4
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239c160
	if (ctx.cr6.gt) goto loc_8239C160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239c0d4
	if (ctx.cr6.eq) {
		// ERROR 8239C0D4
		return;
	}
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C160;
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C160;
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C160;
	// b 0x8239c0d4
	// ERROR 8239C0D4
	return;
loc_8239C12C:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8239c160
	if (ctx.cr6.gt) goto loc_8239C160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239c0d4
	if (ctx.cr6.eq) {
		// ERROR 8239C0D4
		return;
	}
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C160;
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// bdz 0x8239c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239C0D4;
	// b 0x8239c0d4
	// ERROR 8239C0D4
	return;
loc_8239C160:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
    loc_8239C0D4:
        ;
}

__attribute__((alias("__imp__sub_8239C170"))) PPC_WEAK_FUNC(sub_8239C170);
PPC_FUNC_IMPL(__imp__sub_8239C170) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28440
	ctx.r9.s64 = ctx.r11.s64 + -28440;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r5,r10,30604
	ctx.r5.s64 = ctx.r10.s64 + 30604;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239C1C0;
	sub_82370088(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r3,r4,30588
	ctx.r3.s64 = ctx.r4.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239C1DC;
	sub_823585A0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r9,r10,30596
	ctx.r9.s64 = ctx.r10.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239C1F8;
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

__attribute__((alias("__imp__sub_8239C210"))) PPC_WEAK_FUNC(sub_8239C210);
PPC_FUNC_IMPL(__imp__sub_8239C210) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-28440
	ctx.r7.s64 = ctx.r11.s64 + -28440;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239C260;
	sub_823700D8(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r11,r3,31824
	ctx.r11.s64 = ctx.r3.s64 + 31824;
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

__attribute__((alias("__imp__sub_8239C280"))) PPC_WEAK_FUNC(sub_8239C280);
PPC_FUNC_IMPL(__imp__sub_8239C280) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239C2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239C2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8239C2E0;
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

__attribute__((alias("__imp__sub_8239C2F4"))) PPC_WEAK_FUNC(sub_8239C2F4);
PPC_FUNC_IMPL(__imp__sub_8239C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C2F8"))) PPC_WEAK_FUNC(sub_8239C2F8);
PPC_FUNC_IMPL(__imp__sub_8239C2F8) {
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
	// bl 0x8239c210
	ctx.lr = 0x8239C318;
	sub_8239C210(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c330
	if (ctx.cr6.eq) goto loc_8239C330;
	// bl 0x82357128
	ctx.lr = 0x8239C32C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239C330:
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

__attribute__((alias("__imp__sub_8239C348"))) PPC_WEAK_FUNC(sub_8239C348);
PPC_FUNC_IMPL(__imp__sub_8239C348) {
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
	// bl 0x82362380
	ctx.lr = 0x8239C360;
	sub_82362380(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239c394
	if (!ctx.cr6.eq) goto loc_8239C394;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239c38c
	if (ctx.cr6.eq) goto loc_8239C38C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239C384;
	sub_823AB100(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8239c390
	goto loc_8239C390;
loc_8239C38C:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8239C390:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8239C394:
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

__attribute__((alias("__imp__sub_8239C3A8"))) PPC_WEAK_FUNC(sub_8239C3A8);
PPC_FUNC_IMPL(__imp__sub_8239C3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239C3B0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239C3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c488
	if (!ctx.cr6.eq) goto loc_8239C488;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r10,r11,-28428
	ctx.r10.s64 = ctx.r11.s64 + -28428;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239C410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c484
	if (!ctx.cr6.eq) goto loc_8239C484;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239C434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239C450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239C474;
	sub_823AB100(ctx, base);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239C484:
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
loc_8239C488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239C490"))) PPC_WEAK_FUNC(sub_8239C490);
PPC_FUNC_IMPL(__imp__sub_8239C490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239C498;
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
	// bne cr6,0x8239c4b0
	if (!ctx.cr6.eq) goto loc_8239C4B0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8239C4B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8239c4c8
	if (!ctx.cr0.eq) goto loc_8239C4C8;
loc_8239C4BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239C4C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8239C4D0;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x8239C4E0;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239C4EC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239c4bc
	if (ctx.cr6.eq) goto loc_8239C4BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x8239C500;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239c534
	if (ctx.cr6.eq) goto loc_8239C534;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x8239C51C;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239c534
	if (ctx.cr6.eq) goto loc_8239C534;
	// bl 0x82357240
	ctx.lr = 0x8239C52C;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8239C534:
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

__attribute__((alias("__imp__sub_8239C548"))) PPC_WEAK_FUNC(sub_8239C548);
PPC_FUNC_IMPL(__imp__sub_8239C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239C550;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235e108
	ctx.lr = 0x8239C55C;
	sub_8235E108(ctx, base);
	// lwz r28,88(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239c59c
	if (ctx.cr6.eq) goto loc_8239C59C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8239C574:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8235e2a8
	ctx.lr = 0x8239C584;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239c5b8
	if (ctx.cr6.eq) goto loc_8239C5B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8239c574
	if (ctx.cr6.lt) goto loc_8239C574;
loc_8239C59C:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8239c5b0
	if (ctx.cr6.gt) goto loc_8239C5B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
loc_8239C5B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239C5B8:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239c5b0
	if (!ctx.cr6.lt) goto loc_8239C5B0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239c5b0
	if (ctx.cr6.eq) goto loc_8239C5B0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239c5fc
	if (!ctx.cr6.lt) goto loc_8239C5FC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x8239C5FC;
	sub_82358520(ctx, base);
loc_8239C5FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239C610"))) PPC_WEAK_FUNC(sub_8239C610);
PPC_FUNC_IMPL(__imp__sub_8239C610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239C618;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357600
	ctx.lr = 0x8239C630;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239c170
	ctx.lr = 0x8239C63C;
	sub_8239C170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239C644;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239C650;
	sub_823A43C8(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a80
	ctx.lr = 0x8239C65C;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8239C66C;
	sub_82370360(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239C674;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,180(r1)
	PPC_STORE_U64(ctx.r1.u32 + 180, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239C688;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239C69C;
	sub_82248A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239C6A8;
	sub_823AB0F8(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239C6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r7,32288
	ctx.r5.s64 = ctx.r7.s64 + 32288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// bl 0x8239c210
	ctx.lr = 0x8239C704;
	sub_8239C210(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239C70C"))) PPC_WEAK_FUNC(sub_8239C70C);
PPC_FUNC_IMPL(__imp__sub_8239C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C710"))) PPC_WEAK_FUNC(sub_8239C710);
PPC_FUNC_IMPL(__imp__sub_8239C710) {
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
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82370360
	ctx.lr = 0x8239C748;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,67
	ctx.r11.s64 = ctx.r30.s64 + 67;
	// addi r10,r31,67
	ctx.r10.s64 = ctx.r31.s64 + 67;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239C758:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239c758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C758;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239C774;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239C794"))) PPC_WEAK_FUNC(sub_8239C794);
PPC_FUNC_IMPL(__imp__sub_8239C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C798"))) PPC_WEAK_FUNC(sub_8239C798);
PPC_FUNC_IMPL(__imp__sub_8239C798) {
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
	ctx.lr = 0x8239C7B8;
	sub_823570E0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823570f0
	ctx.lr = 0x8239C7C0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239c7d4
	if (ctx.cr6.eq) goto loc_8239C7D4;
	// bl 0x8239c170
	ctx.lr = 0x8239C7CC;
	sub_8239C170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239c7d8
	goto loc_8239C7D8;
loc_8239C7D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239C7D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239C7E0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239c7f0
	if (!ctx.cr6.eq) goto loc_8239C7F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239c800
	goto loc_8239C800;
loc_8239C7F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c710
	ctx.lr = 0x8239C7FC;
	sub_8239C710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239C800:
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

__attribute__((alias("__imp__sub_8239C818"))) PPC_WEAK_FUNC(sub_8239C818);
PPC_FUNC_IMPL(__imp__sub_8239C818) {
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
	// bl 0x823ab790
	ctx.lr = 0x8239C830;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28408
	ctx.r8.s64 = ctx.r11.s64 + -28408;
	// addi r7,r10,-28420
	ctx.r7.s64 = ctx.r10.s64 + -28420;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8239C89C"))) PPC_WEAK_FUNC(sub_8239C89C);
PPC_FUNC_IMPL(__imp__sub_8239C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C8A0"))) PPC_WEAK_FUNC(sub_8239C8A0);
PPC_FUNC_IMPL(__imp__sub_8239C8A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239c998
	sub_8239C998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239C8A8"))) PPC_WEAK_FUNC(sub_8239C8A8);
PPC_FUNC_IMPL(__imp__sub_8239C8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8239C8B0;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,42
	ctx.r9.s64 = 42;
	// li r8,43
	ctx.r8.s64 = 43;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,44
	ctx.r7.s64 = 44;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,45
	ctx.r6.s64 = 45;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,46
	ctx.r5.s64 = 46;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r4,47
	ctx.r4.s64 = 47;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8235e108
	ctx.lr = 0x8239C90C;
	sub_8235E108(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r27,10
	ctx.r27.s64 = 10;
loc_8239C918:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8239C928;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239c97c
	if (ctx.cr6.eq) goto loc_8239C97C;
	// lwz r30,88(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r31,r26,80
	ctx.r31.s64 = ctx.r26.s64 + 80;
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8239c95c
	if (ctx.cr6.gt) goto loc_8239C95C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x8239C954;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239c97c
	if (ctx.cr6.eq) goto loc_8239C97C;
loc_8239C95C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c97c
	if (ctx.cr6.eq) goto loc_8239C97C;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8239C97C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8239c918
	if (!ctx.cr0.eq) goto loc_8239C918;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8239C998"))) PPC_WEAK_FUNC(sub_8239C998);
PPC_FUNC_IMPL(__imp__sub_8239C998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239C9A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-28408
	ctx.r9.s64 = ctx.r11.s64 + -28408;
	// addi r8,r10,-28420
	ctx.r8.s64 = ctx.r10.s64 + -28420;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// beq cr6,0x8239c9e4
	if (ctx.cr6.eq) goto loc_8239C9E4;
	// bl 0x82357240
	ctx.lr = 0x8239C9E0;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8239C9E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,32288
	ctx.r10.s64 = ctx.r11.s64 + 32288;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x823ab4e8
	ctx.lr = 0x8239CA00;
	sub_823AB4E8(ctx, base);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239ca18
	if (ctx.cr6.eq) goto loc_8239CA18;
	// bl 0x82357128
	ctx.lr = 0x8239CA14;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239CA18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239CA20"))) PPC_WEAK_FUNC(sub_8239CA20);
PPC_FUNC_IMPL(__imp__sub_8239CA20) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8239cae0
	if (ctx.cr6.gt) goto loc_8239CAE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8239ca80
	// bdzf 4*cr6+eq,0x8239ca8c
	// bdzf 4*cr6+eq,0x8239caa0
	// bdzf 4*cr6+eq,0x8239caac
	// bdzf 4*cr6+eq,0x8239cab8
	// bdzf 4*cr6+eq,0x8239cac4
	// bdzf 4*cr6+eq,0x8239cad0
	// bne cr6,0x8239cadc
	if (!ctx.cr6.eq) goto loc_8239CADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c8a8
	ctx.lr = 0x8239CA7C;
	sub_8239C8A8(ctx, base);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CA80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c548
	ctx.lr = 0x8239CA88;
	sub_8239C548(ctx, base);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CA8C:
	// bl 0x82362380
	ctx.lr = 0x8239CA90;
	sub_82362380(ctx, base);
	// bl 0x82365b08
	ctx.lr = 0x8239CA94;
	sub_82365B08(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CAA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c348
	ctx.lr = 0x8239CAA8;
	sub_8239C348(ctx, base);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CAAC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CAB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c610
	ctx.lr = 0x8239CAC0;
	sub_8239C610(ctx, base);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c3a8
	ctx.lr = 0x8239CACC;
	sub_8239C3A8(ctx, base);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CAD0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x8239cae0
	goto loc_8239CAE0;
loc_8239CADC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8239CAE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8239CAFC"))) PPC_WEAK_FUNC(sub_8239CAFC);
PPC_FUNC_IMPL(__imp__sub_8239CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CB00"))) PPC_WEAK_FUNC(sub_8239CB00);
PPC_FUNC_IMPL(__imp__sub_8239CB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239cb90
	if (ctx.cr6.gt) goto loc_8239CB90;
	// beq cr6,0x8239cb4c
	if (ctx.cr6.eq) goto loc_8239CB4C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239cb6c
	if (ctx.cr6.gt) goto loc_8239CB6C;
	// beq cr6,0x8239cb4c
	if (ctx.cr6.eq) goto loc_8239CB4C;
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239cbe4
	if (ctx.cr0.eq) goto loc_8239CBE4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8239cb5c
	if (ctx.cr6.eq) goto loc_8239CB5C;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239cbec
	if (!ctx.cr6.eq) goto loc_8239CBEC;
loc_8239CB4C:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239CB5C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239CB6C:
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239cb4c
	if (ctx.cr0.eq) goto loc_8239CB4C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8239cbec
	if (!ctx.cr6.eq) goto loc_8239CBEC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239CB90:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239cbd0
	if (ctx.cr6.gt) goto loc_8239CBD0;
	// beq cr6,0x8239cbe4
	if (ctx.cr6.eq) goto loc_8239CBE4;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addic. r11,r11,-10
	ctx.xer.ca = ctx.r11.u32 > 9;
	ctx.r11.s64 = ctx.r11.s64 + -10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239cb4c
	if (ctx.cr0.eq) goto loc_8239CB4C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8239cb4c
	if (ctx.cr6.eq) goto loc_8239CB4C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8239cbec
	if (!ctx.cr6.eq) goto loc_8239CBEC;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239CBD0:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addic. r11,r11,-5
	ctx.xer.ca = ctx.r11.u32 > 4;
	ctx.r11.s64 = ctx.r11.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239cbe4
	if (ctx.cr0.eq) goto loc_8239CBE4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239cbec
	if (!ctx.cr6.eq) goto loc_8239CBEC;
loc_8239CBE4:
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8239CBEC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CBF4"))) PPC_WEAK_FUNC(sub_8239CBF4);
PPC_FUNC_IMPL(__imp__sub_8239CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CBF8"))) PPC_WEAK_FUNC(sub_8239CBF8);
PPC_FUNC_IMPL(__imp__sub_8239CBF8) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28272
	ctx.r9.s64 = ctx.r11.s64 + -28272;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r7,r10,30604
	ctx.r7.s64 = ctx.r10.s64 + 30604;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239CC44;
	sub_82370088(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r5,r6,30588
	ctx.r5.s64 = ctx.r6.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239CC60;
	sub_823585A0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r3,r4,30596
	ctx.r3.s64 = ctx.r4.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239CC7C;
	sub_823585A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239CCA8"))) PPC_WEAK_FUNC(sub_8239CCA8);
PPC_FUNC_IMPL(__imp__sub_8239CCA8) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-28272
	ctx.r7.s64 = ctx.r11.s64 + -28272;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239CCF8;
	sub_823700D8(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r11,r3,31824
	ctx.r11.s64 = ctx.r3.s64 + 31824;
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

__attribute__((alias("__imp__sub_8239CD18"))) PPC_WEAK_FUNC(sub_8239CD18);
PPC_FUNC_IMPL(__imp__sub_8239CD18) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239CD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239CD60;
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
	ctx.lr = 0x8239CD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8239CD9C"))) PPC_WEAK_FUNC(sub_8239CD9C);
PPC_FUNC_IMPL(__imp__sub_8239CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CDA0"))) PPC_WEAK_FUNC(sub_8239CDA0);
PPC_FUNC_IMPL(__imp__sub_8239CDA0) {
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
	// bl 0x8239cca8
	ctx.lr = 0x8239CDC0;
	sub_8239CCA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239cdd8
	if (ctx.cr6.eq) goto loc_8239CDD8;
	// bl 0x82357128
	ctx.lr = 0x8239CDD4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239CDD8:
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

__attribute__((alias("__imp__sub_8239CDF0"))) PPC_WEAK_FUNC(sub_8239CDF0);
PPC_FUNC_IMPL(__imp__sub_8239CDF0) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28260
	ctx.r9.s64 = ctx.r11.s64 + -28260;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r30,r10,30604
	ctx.r30.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239CE34;
	sub_82370088(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239CE44;
	sub_82370088(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239CE68"))) PPC_WEAK_FUNC(sub_8239CE68);
PPC_FUNC_IMPL(__imp__sub_8239CE68) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28260
	ctx.r9.s64 = ctx.r11.s64 + -28260;
	// addi r30,r10,30604
	ctx.r30.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239CEA4;
	sub_823700D8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239CEB4;
	sub_823700D8(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,-31544
	ctx.r7.s64 = ctx.r8.s64 + -31544;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239CED8"))) PPC_WEAK_FUNC(sub_8239CED8);
PPC_FUNC_IMPL(__imp__sub_8239CED8) {
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
	// bl 0x8239ce68
	ctx.lr = 0x8239CEF8;
	sub_8239CE68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239cf10
	if (ctx.cr6.eq) goto loc_8239CF10;
	// bl 0x82357128
	ctx.lr = 0x8239CF0C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239CF10:
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

__attribute__((alias("__imp__sub_8239CF28"))) PPC_WEAK_FUNC(sub_8239CF28);
PPC_FUNC_IMPL(__imp__sub_8239CF28) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28252
	ctx.r9.s64 = ctx.r11.s64 + -28252;
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
	ctx.lr = 0x8239CF60;
	sub_82370088(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82355d50
	ctx.lr = 0x8239CF68;
	sub_82355D50(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239CF88"))) PPC_WEAK_FUNC(sub_8239CF88);
PPC_FUNC_IMPL(__imp__sub_8239CF88) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-28252
	ctx.r10.s64 = ctx.r11.s64 + -28252;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x8239CFB0;
	sub_82355DE8(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x823700d8
	ctx.lr = 0x8239CFC8;
	sub_823700D8(ctx, base);
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

__attribute__((alias("__imp__sub_8239CFDC"))) PPC_WEAK_FUNC(sub_8239CFDC);
PPC_FUNC_IMPL(__imp__sub_8239CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CFE0"))) PPC_WEAK_FUNC(sub_8239CFE0);
PPC_FUNC_IMPL(__imp__sub_8239CFE0) {
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
	ctx.lr = 0x8239D008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239D01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239D038"))) PPC_WEAK_FUNC(sub_8239D038);
PPC_FUNC_IMPL(__imp__sub_8239D038) {
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
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-28252
	ctx.r10.s64 = ctx.r11.s64 + -28252;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x8239D068;
	sub_82355DE8(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x823700d8
	ctx.lr = 0x8239D080;
	sub_823700D8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239d098
	if (ctx.cr6.eq) goto loc_8239D098;
	// bl 0x82357128
	ctx.lr = 0x8239D094;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239D098:
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

__attribute__((alias("__imp__sub_8239D0B0"))) PPC_WEAK_FUNC(sub_8239D0B0);
PPC_FUNC_IMPL(__imp__sub_8239D0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239D0B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x8239D0C4;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-28232
	ctx.r7.s64 = ctx.r11.s64 + -28232;
	// addi r6,r10,-28244
	ctx.r6.s64 = ctx.r10.s64 + -28244;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r5,r9,32288
	ctx.r5.s64 = ctx.r9.s64 + 32288;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239D114;
	sub_82370088(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82357600
	ctx.lr = 0x8239D11C;
	sub_82357600(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239D124;
	sub_82355AB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239D130;
	sub_82355AC0(ctx, base);
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab120
	ctx.lr = 0x8239D13C;
	sub_823AB120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239D148"))) PPC_WEAK_FUNC(sub_8239D148);
PPC_FUNC_IMPL(__imp__sub_8239D148) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239d4e8
	sub_8239D4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239D150"))) PPC_WEAK_FUNC(sub_8239D150);
PPC_FUNC_IMPL(__imp__sub_8239D150) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239d1f4
	if (!ctx.cr6.gt) goto loc_8239D1F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8239d1f4
	if (ctx.cr6.gt) goto loc_8239D1F4;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239d18c
	if (!ctx.cr6.eq) goto loc_8239D18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239d1f8
	goto loc_8239D1F8;
loc_8239D18C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239d1f4
	if (ctx.cr6.eq) goto loc_8239D1F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32360
	ctx.r9.s64 = ctx.r11.s64 + -32360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239D1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239d1f8
	if (ctx.cr6.eq) goto loc_8239D1F8;
loc_8239D1F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239D1F8:
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

__attribute__((alias("__imp__sub_8239D210"))) PPC_WEAK_FUNC(sub_8239D210);
PPC_FUNC_IMPL(__imp__sub_8239D210) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239d280
	if (ctx.cr6.eq) goto loc_8239D280;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8239d280
	if (!ctx.cr6.eq) goto loc_8239D280;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239d280
	if (ctx.cr6.eq) goto loc_8239D280;
	// bl 0x82362380
	ctx.lr = 0x8239D24C;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239d260
	if (!ctx.cr6.eq) goto loc_8239D260;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// b 0x8239d288
	goto loc_8239D288;
loc_8239D260:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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
loc_8239D280:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239D288:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D294;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_8239D2AC"))) PPC_WEAK_FUNC(sub_8239D2AC);
PPC_FUNC_IMPL(__imp__sub_8239D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D2B0"))) PPC_WEAK_FUNC(sub_8239D2B0);
PPC_FUNC_IMPL(__imp__sub_8239D2B0) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239d2e8
	if (ctx.cr6.eq) goto loc_8239D2E8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8239D2E0;
	sub_823AB100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8239d324
	goto loc_8239D324;
loc_8239D2E8:
	// bl 0x82362380
	ctx.lr = 0x8239D2EC;
	sub_82362380(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8239d300
	if (ctx.cr6.eq) goto loc_8239D300;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239d328
	if (!ctx.cr6.eq) goto loc_8239D328;
loc_8239D300:
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d320
	if (ctx.cr6.eq) goto loc_8239D320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D318;
	sub_823AB100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8239d324
	goto loc_8239D324;
loc_8239D320:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8239D324:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8239D328:
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

__attribute__((alias("__imp__sub_8239D33C"))) PPC_WEAK_FUNC(sub_8239D33C);
PPC_FUNC_IMPL(__imp__sub_8239D33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D340"))) PPC_WEAK_FUNC(sub_8239D340);
PPC_FUNC_IMPL(__imp__sub_8239D340) {
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
	// bl 0x82362380
	ctx.lr = 0x8239D358;
	sub_82362380(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239d384
	if (!ctx.cr6.eq) goto loc_8239D384;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d37c
	if (ctx.cr6.eq) goto loc_8239D37C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D37C;
	sub_823AB100(ctx, base);
loc_8239D37C:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8239D384:
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

__attribute__((alias("__imp__sub_8239D398"))) PPC_WEAK_FUNC(sub_8239D398);
PPC_FUNC_IMPL(__imp__sub_8239D398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239D3A0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239d47c
	if (!ctx.cr6.eq) goto loc_8239D47C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-28428
	ctx.r9.s64 = ctx.r11.s64 + -28428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239D400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239d474
	if (!ctx.cr6.eq) goto loc_8239D474;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239D440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239D454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D464;
	sub_823AB100(ctx, base);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239D474:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8239D47C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239D484"))) PPC_WEAK_FUNC(sub_8239D484);
PPC_FUNC_IMPL(__imp__sub_8239D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D488"))) PPC_WEAK_FUNC(sub_8239D488);
PPC_FUNC_IMPL(__imp__sub_8239D488) {
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
	ctx.lr = 0x8239D4B0;
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
	ctx.lr = 0x8239D4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239D4E4"))) PPC_WEAK_FUNC(sub_8239D4E4);
PPC_FUNC_IMPL(__imp__sub_8239D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D4E8"))) PPC_WEAK_FUNC(sub_8239D4E8);
PPC_FUNC_IMPL(__imp__sub_8239D4E8) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28232
	ctx.r8.s64 = ctx.r11.s64 + -28232;
	// addi r7,r10,-28244
	ctx.r7.s64 = ctx.r10.s64 + -28244;
	// addi r6,r9,30604
	ctx.r6.s64 = ctx.r9.s64 + 30604;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823700d8
	ctx.lr = 0x8239D534;
	sub_823700D8(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,32288
	ctx.r4.s64 = ctx.r5.s64 + 32288;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// bl 0x823ab4e8
	ctx.lr = 0x8239D548;
	sub_823AB4E8(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8239d560
	if (ctx.cr6.eq) goto loc_8239D560;
	// bl 0x82357128
	ctx.lr = 0x8239D55C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239D560:
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

__attribute__((alias("__imp__sub_8239D578"))) PPC_WEAK_FUNC(sub_8239D578);
PPC_FUNC_IMPL(__imp__sub_8239D578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239D580;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357600
	ctx.lr = 0x8239D598;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239cbf8
	ctx.lr = 0x8239D5A4;
	sub_8239CBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239D5AC;
	sub_823A43C8(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a80
	ctx.lr = 0x8239D5B8;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8239D5C8;
	sub_82370360(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239D5D0;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239D5E4;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239D5F8;
	sub_82248A40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239D600;
	sub_82355AB0(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239D60C;
	sub_82355AC0(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355b20
	ctx.lr = 0x8239D618;
	sub_82355B20(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239D628;
	sub_823AB0F8(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239D644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r7,32288
	ctx.r5.s64 = ctx.r7.s64 + 32288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// bl 0x8239cca8
	ctx.lr = 0x8239D684;
	sub_8239CCA8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239D68C"))) PPC_WEAK_FUNC(sub_8239D68C);
PPC_FUNC_IMPL(__imp__sub_8239D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D690"))) PPC_WEAK_FUNC(sub_8239D690);
PPC_FUNC_IMPL(__imp__sub_8239D690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239D698;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239d7a0
	if (!ctx.cr6.eq) goto loc_8239D7A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239cdf0
	ctx.lr = 0x8239D6D4;
	sub_8239CDF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239d76c
	if (!ctx.cr6.eq) goto loc_8239D76C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239D714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239D730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239D744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D754;
	sub_823AB100(ctx, base);
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// bl 0x8239ce68
	ctx.lr = 0x8239D764;
	sub_8239CE68(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239D76C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357600
	ctx.lr = 0x8239D774;
	sub_82357600(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x823561e0
	ctx.lr = 0x8239D77C;
	sub_823561E0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82370360
	ctx.lr = 0x8239D788;
	sub_82370360(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8239ce68
	ctx.lr = 0x8239D7A0;
	sub_8239CE68(ctx, base);
loc_8239D7A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239D7A8"))) PPC_WEAK_FUNC(sub_8239D7A8);
PPC_FUNC_IMPL(__imp__sub_8239D7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8239D7B0;
	sub_82248780(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239d7e4
	if (ctx.cr6.eq) goto loc_8239D7E4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8239D7D4;
	sub_823AB100(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8239D7E4:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x8239D7EC;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8239D7F4;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x8239D7FC;
	sub_8235C0D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239D804;
	sub_82355AB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239D810;
	sub_82355AC0(ctx, base);
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239D81C;
	sub_82355AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239d838
	if (ctx.cr6.eq) goto loc_8239D838;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c048
	ctx.lr = 0x8239D82C;
	sub_8235C048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f0
	ctx.lr = 0x8239D834;
	sub_823AB0F0(ctx, base);
	// b 0x8239d884
	goto loc_8239D884;
loc_8239D838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8239D840;
	sub_823AB0F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362390
	ctx.lr = 0x8239D848;
	sub_82362390(ctx, base);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// ble cr6,0x8239d884
	if (!ctx.cr6.gt) goto loc_8239D884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8239D858;
	sub_823AB0F8(ctx, base);
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// bl 0x82362390
	ctx.lr = 0x8239D884;
	sub_82362390(ctx, base);
loc_8239D884:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239cf28
	ctx.lr = 0x8239D88C;
	sub_8239CF28(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82370360
	ctx.lr = 0x8239D898;
	sub_82370360(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357600
	ctx.lr = 0x8239D8A0;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82356220
	ctx.lr = 0x8239D8AC;
	sub_82356220(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239D8B4;
	sub_823A43C8(ctx, base);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82380300
	ctx.lr = 0x8239D8C0;
	sub_82380300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823802f8
	ctx.lr = 0x8239D8CC;
	sub_823802F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82364ba8
	ctx.lr = 0x8239D8E0;
	sub_82364BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239d910
	if (!ctx.cr6.eq) goto loc_8239D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239D8F8;
	sub_823AB100(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8239cf88
	ctx.lr = 0x8239D908;
	sub_8239CF88(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8239D910:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8239cf88
	ctx.lr = 0x8239D920;
	sub_8239CF88(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8239D928"))) PPC_WEAK_FUNC(sub_8239D928);
PPC_FUNC_IMPL(__imp__sub_8239D928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239D930;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357600
	ctx.lr = 0x8239D948;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239c170
	ctx.lr = 0x8239D954;
	sub_8239C170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239D95C;
	sub_823A43C8(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a80
	ctx.lr = 0x8239D968;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8239D978;
	sub_82370360(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239D980;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,180(r1)
	PPC_STORE_U64(ctx.r1.u32 + 180, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239D994;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239D9A8;
	sub_82248A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239D9B4;
	sub_823AB0F8(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239D9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r7,32288
	ctx.r5.s64 = ctx.r7.s64 + 32288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// bl 0x8239c210
	ctx.lr = 0x8239DA10;
	sub_8239C210(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239DA18"))) PPC_WEAK_FUNC(sub_8239DA18);
PPC_FUNC_IMPL(__imp__sub_8239DA18) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x8239DA48;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,63
	ctx.r11.s64 = ctx.r30.s64 + 63;
	// addi r10,r31,63
	ctx.r10.s64 = ctx.r31.s64 + 63;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239DA58:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239da58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239DA58;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239DA74;
	sub_82248A40(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8239DAAC"))) PPC_WEAK_FUNC(sub_8239DAAC);
PPC_FUNC_IMPL(__imp__sub_8239DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DAB0"))) PPC_WEAK_FUNC(sub_8239DAB0);
PPC_FUNC_IMPL(__imp__sub_8239DAB0) {
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
	ctx.lr = 0x8239DAD0;
	sub_823570E0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8239DAD8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239daec
	if (ctx.cr6.eq) goto loc_8239DAEC;
	// bl 0x8239cbf8
	ctx.lr = 0x8239DAE4;
	sub_8239CBF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239daf0
	goto loc_8239DAF0;
loc_8239DAEC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239DAF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239DAF8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239db08
	if (!ctx.cr6.eq) goto loc_8239DB08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239db18
	goto loc_8239DB18;
loc_8239DB08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239da18
	ctx.lr = 0x8239DB14;
	sub_8239DA18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239DB18:
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

__attribute__((alias("__imp__sub_8239DB30"))) PPC_WEAK_FUNC(sub_8239DB30);
PPC_FUNC_IMPL(__imp__sub_8239DB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239DB38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8239dca8
	if (ctx.cr6.gt) goto loc_8239DCA8;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9364
	ctx.r12.s64 = ctx.r12.s64 + -9364;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-9312(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9312);
	// lwz r17,-9292(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9292);
	// lwz r17,-9272(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9272);
	// lwz r17,-9252(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9252);
	// lwz r17,-9232(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9232);
	// lwz r17,-9212(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9212);
	// lwz r17,-9160(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9160);
	// lwz r17,-9132(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9132);
	// lwz r17,-9112(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9112);
	// lwz r17,-9092(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9092);
	// lwz r17,-9072(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9072);
	// lwz r17,-9180(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9180);
	// lwz r17,-9052(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d578
	ctx.lr = 0x8239DBA8;
	sub_8239D578(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d690
	ctx.lr = 0x8239DBBC;
	sub_8239D690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d7a8
	ctx.lr = 0x8239DBE4;
	sub_8239D7A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d2b0
	ctx.lr = 0x8239DBF8;
	sub_8239D2B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// bl 0x8235bf58
	ctx.lr = 0x8239DC08;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8239DC10;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8239DC1C;
	sub_8235C048(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362390
	ctx.lr = 0x8239DC24;
	sub_82362390(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// bl 0x82362380
	ctx.lr = 0x8239DC3C;
	sub_82362380(ctx, base);
	// bl 0x82365b08
	ctx.lr = 0x8239DC40;
	sub_82365B08(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d340
	ctx.lr = 0x8239DC5C;
	sub_8239D340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d928
	ctx.lr = 0x8239DC84;
	sub_8239D928(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d398
	ctx.lr = 0x8239DC98;
	sub_8239D398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8239DCA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239DCB4"))) PPC_WEAK_FUNC(sub_8239DCB4);
PPC_FUNC_IMPL(__imp__sub_8239DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DCB8"))) PPC_WEAK_FUNC(sub_8239DCB8);
PPC_FUNC_IMPL(__imp__sub_8239DCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239dd1c
	if (ctx.cr6.gt) {
		// ERROR 8239DD1C
		return;
	}
	// beq cr6,0x8239dd64
	if (ctx.cr6.eq) {
		// ERROR 8239DD64
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8239ddac
	if (ctx.cr6.gt) {
		// ERROR 8239DDAC
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8972
	ctx.r12.s64 = ctx.r12.s64 + -8972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239DCF4"))) PPC_WEAK_FUNC(sub_8239DCF4);
PPC_FUNC_IMPL(__imp__sub_8239DCF4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lwz r17,-8780(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8780);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239dd74
	if (ctx.cr6.gt) goto loc_8239DD74;
	// beq cr6,0x8239ddb4
	if (ctx.cr6.eq) goto loc_8239DDB4;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239ddac
	if (ctx.cr6.gt) goto loc_8239DDAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8239dd64
	// bdzf 4*cr6+eq,0x8239ddac
	// bdzf 4*cr6+eq,0x8239dd64
	// bdzf 4*cr6+eq,0x8239ddac
	// bdzf 4*cr6+eq,0x8239ddb4
	// bdzf 4*cr6+eq,0x8239ddac
	// bne cr6,0x8239ddb4
	if (!ctx.cr6.eq) goto loc_8239DDB4;
loc_8239DD64:
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239DD74:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239ddac
	if (ctx.cr6.gt) goto loc_8239DDAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ddb4
	if (ctx.cr6.eq) goto loc_8239DDB4;
	// bdz 0x8239ddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DDB4;
	// bdz 0x8239dd64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DD64;
	// bdz 0x8239ddac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DDAC;
	// bdz 0x8239ddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DDB4;
	// bdz 0x8239ddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DDB4;
	// bdz 0x8239dd64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239DD64;
	// b 0x8239ddb4
	goto loc_8239DDB4;
loc_8239DDAC:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8239DDB4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DDBC"))) PPC_WEAK_FUNC(sub_8239DDBC);
PPC_FUNC_IMPL(__imp__sub_8239DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DDC0"))) PPC_WEAK_FUNC(sub_8239DDC0);
PPC_FUNC_IMPL(__imp__sub_8239DDC0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x8239DDE4;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28080
	ctx.r8.s64 = ctx.r11.s64 + -28080;
	// addi r7,r10,-28096
	ctx.r7.s64 = ctx.r10.s64 + -28096;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8239DE3C"))) PPC_WEAK_FUNC(sub_8239DE3C);
PPC_FUNC_IMPL(__imp__sub_8239DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DE40"))) PPC_WEAK_FUNC(sub_8239DE40);
PPC_FUNC_IMPL(__imp__sub_8239DE40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239df68
	sub_8239DF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239DE48"))) PPC_WEAK_FUNC(sub_8239DE48);
PPC_FUNC_IMPL(__imp__sub_8239DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239DE50;
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
	// bne cr6,0x8239de68
	if (!ctx.cr6.eq) goto loc_8239DE68;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8239DE68:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8239de80
	if (!ctx.cr0.eq) goto loc_8239DE80;
loc_8239DE74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239DE80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8239DE88;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x8239DE98;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239DEA4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239de74
	if (ctx.cr6.eq) goto loc_8239DE74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x8239DEB8;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239deec
	if (ctx.cr6.eq) goto loc_8239DEEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82358508
	ctx.lr = 0x8239DED4;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239deec
	if (ctx.cr6.eq) goto loc_8239DEEC;
	// bl 0x82357240
	ctx.lr = 0x8239DEE4;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8239DEEC:
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

__attribute__((alias("__imp__sub_8239DF00"))) PPC_WEAK_FUNC(sub_8239DF00);
PPC_FUNC_IMPL(__imp__sub_8239DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239DF08;
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
	// ble cr6,0x8239df58
	if (!ctx.cr6.gt) goto loc_8239DF58;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8239DF28:
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
	ctx.lr = 0x8239DF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239df28
	if (ctx.cr6.lt) goto loc_8239DF28;
loc_8239DF58:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239DF64"))) PPC_WEAK_FUNC(sub_8239DF64);
PPC_FUNC_IMPL(__imp__sub_8239DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DF68"))) PPC_WEAK_FUNC(sub_8239DF68);
PPC_FUNC_IMPL(__imp__sub_8239DF68) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28080
	ctx.r8.s64 = ctx.r11.s64 + -28080;
	// addi r7,r10,-28096
	ctx.r7.s64 = ctx.r10.s64 + -28096;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8239DFAC;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239dfc4
	if (ctx.cr6.eq) goto loc_8239DFC4;
	// bl 0x82357128
	ctx.lr = 0x8239DFC0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239DFC4:
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

__attribute__((alias("__imp__sub_8239DFDC"))) PPC_WEAK_FUNC(sub_8239DFDC);
PPC_FUNC_IMPL(__imp__sub_8239DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DFE0"))) PPC_WEAK_FUNC(sub_8239DFE0);
PPC_FUNC_IMPL(__imp__sub_8239DFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239DFE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-27944
	ctx.r10.s64 = ctx.r11.s64 + -27944;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// beq cr6,0x8239e020
	if (ctx.cr6.eq) goto loc_8239E020;
	// bl 0x82357240
	ctx.lr = 0x8239E01C;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239E020:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e040
	if (ctx.cr6.eq) goto loc_8239E040;
	// bl 0x82357128
	ctx.lr = 0x8239E03C;
	sub_82357128(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8239E040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239E048"))) PPC_WEAK_FUNC(sub_8239E048);
PPC_FUNC_IMPL(__imp__sub_8239E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239E050;
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
	// bgt cr6,0x8239e08c
	if (ctx.cr6.gt) goto loc_8239E08C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239de48
	ctx.lr = 0x8239E078;
	sub_8239DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239e08c
	if (!ctx.cr6.eq) goto loc_8239E08C;
loc_8239E080:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8239E08C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239e080
	if (ctx.cr6.eq) goto loc_8239E080;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8239E0D8"))) PPC_WEAK_FUNC(sub_8239E0D8);
PPC_FUNC_IMPL(__imp__sub_8239E0D8) {
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8239e10c
	if (ctx.cr6.eq) goto loc_8239E10C;
	// bl 0x82357240
	ctx.lr = 0x8239E108;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239E10C:
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

__attribute__((alias("__imp__sub_8239E12C"))) PPC_WEAK_FUNC(sub_8239E12C);
PPC_FUNC_IMPL(__imp__sub_8239E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E130"))) PPC_WEAK_FUNC(sub_8239E130);
PPC_FUNC_IMPL(__imp__sub_8239E130) {
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
	// bl 0x8239df00
	ctx.lr = 0x8239E150;
	sub_8239DF00(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e168
	if (ctx.cr6.eq) goto loc_8239E168;
	// bl 0x82357240
	ctx.lr = 0x8239E164;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239E168:
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

__attribute__((alias("__imp__sub_8239E188"))) PPC_WEAK_FUNC(sub_8239E188);
PPC_FUNC_IMPL(__imp__sub_8239E188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239E190;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-27936
	ctx.r10.s64 = ctx.r11.s64 + -27936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8239df00
	ctx.lr = 0x8239E1B0;
	sub_8239DF00(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e1c8
	if (ctx.cr6.eq) goto loc_8239E1C8;
	// bl 0x82357240
	ctx.lr = 0x8239E1C4;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8239E1C8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239E1E4"))) PPC_WEAK_FUNC(sub_8239E1E4);
PPC_FUNC_IMPL(__imp__sub_8239E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E1E8"))) PPC_WEAK_FUNC(sub_8239E1E8);
PPC_FUNC_IMPL(__imp__sub_8239E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239E1F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-27936
	ctx.r10.s64 = ctx.r11.s64 + -27936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8239df00
	ctx.lr = 0x8239E214;
	sub_8239DF00(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e22c
	if (ctx.cr6.eq) goto loc_8239E22C;
	// bl 0x82357240
	ctx.lr = 0x8239E228;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8239E22C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8239e258
	if (ctx.cr6.eq) goto loc_8239E258;
	// bl 0x82357128
	ctx.lr = 0x8239E254;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8239E258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239E260"))) PPC_WEAK_FUNC(sub_8239E260);
PPC_FUNC_IMPL(__imp__sub_8239E260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8239E268;
	sub_82248764(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// lwz r20,12(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239e2a8
	if (ctx.cr6.eq) goto loc_8239E2A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_8239E2A8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r19,r11,-27936
	ctx.r19.s64 = ctx.r11.s64 + -27936;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239E2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239e370
	if (!ctx.cr6.eq) goto loc_8239E370;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239E338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239E34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239E35C;
	sub_823AB100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239e188
	ctx.lr = 0x8239E364;
	sub_8239E188(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_8239E370:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8237f3a0
	ctx.lr = 0x8239E378;
	sub_8237F3A0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e4b8
	if (ctx.cr6.eq) goto loc_8239E4B8;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8239E398:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r24,r11
	ctx.r30.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239e3b8
	if (!ctx.cr6.eq) goto loc_8239E3B8;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e4a8
	if (ctx.cr6.eq) goto loc_8239E4A8;
loc_8239E3B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239E3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82355aa8
	ctx.lr = 0x8239E3F0;
	sub_82355AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82355ab8
	ctx.lr = 0x8239E3FC;
	sub_82355AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82355ac8
	ctx.lr = 0x8239E408;
	sub_82355AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82355ad8
	ctx.lr = 0x8239E414;
	sub_82355AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x823561e0
	ctx.lr = 0x8239E420;
	sub_823561E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// bl 0x823561f0
	ctx.lr = 0x8239E42C;
	sub_823561F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// bl 0x82356210
	ctx.lr = 0x8239E438;
	sub_82356210(ctx, base);
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x82355ae8
	ctx.lr = 0x8239E450;
	sub_82355AE8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e494
	if (ctx.cr6.eq) goto loc_8239E494;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8239E464:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne 0x8239e480
	if (!ctx.cr0.eq) goto loc_8239E480;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8239E480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a2a0
	ctx.lr = 0x8239E488;
	sub_8235A2A0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bne 0x8239e464
	if (!ctx.cr0.eq) goto loc_8239E464;
loc_8239E494:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823a43c8
	ctx.lr = 0x8239E4A0;
	sub_823A43C8(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8239e4b8
	if (!ctx.cr6.gt) goto loc_8239E4B8;
loc_8239E4A8:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,120
	ctx.r24.s64 = ctx.r24.s64 + 120;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8239e398
	if (ctx.cr6.lt) goto loc_8239E398;
loc_8239E4B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8239df00
	ctx.lr = 0x8239E4DC;
	sub_8239DF00(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e4ec
	if (ctx.cr6.eq) goto loc_8239E4EC;
	// bl 0x82357240
	ctx.lr = 0x8239E4EC;
	sub_82357240(ctx, base);
loc_8239E4EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8239E4F8"))) PPC_WEAK_FUNC(sub_8239E4F8);
PPC_FUNC_IMPL(__imp__sub_8239E4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239E500;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,-30368
	ctx.r8.s64 = ctx.r11.s64 + -30368;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r6,r9,32548
	ctx.r6.s64 = ctx.r9.s64 + 32548;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r8,r7,-27944
	ctx.r8.s64 = ctx.r7.s64 + -27944;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r6,r5,-27904
	ctx.r6.s64 = ctx.r5.s64 + -27904;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r5,r4,-27912
	ctx.r5.s64 = ctx.r4.s64 + -27912;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r29,r3,-27920
	ctx.r29.s64 = ctx.r3.s64 + -27920;
	// addi r9,r9,-27928
	ctx.r9.s64 = ctx.r9.s64 + -27928;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r8,r7,30596
	ctx.r8.s64 = ctx.r7.s64 + 30596;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x823585a0
	ctx.lr = 0x8239E5E4;
	sub_823585A0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239E600;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r4,r5,30604
	ctx.r4.s64 = ctx.r5.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// bl 0x82370088
	ctx.lr = 0x8239E618;
	sub_82370088(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x823585a0
	ctx.lr = 0x8239E628;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239E634"))) PPC_WEAK_FUNC(sub_8239E634);
PPC_FUNC_IMPL(__imp__sub_8239E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E638"))) PPC_WEAK_FUNC(sub_8239E638);
PPC_FUNC_IMPL(__imp__sub_8239E638) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239ead8
	sub_8239EAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E640"))) PPC_WEAK_FUNC(sub_8239E640);
PPC_FUNC_IMPL(__imp__sub_8239E640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8239ead8
	sub_8239EAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E648"))) PPC_WEAK_FUNC(sub_8239E648);
PPC_FUNC_IMPL(__imp__sub_8239E648) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8239ead8
	sub_8239EAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E650"))) PPC_WEAK_FUNC(sub_8239E650);
PPC_FUNC_IMPL(__imp__sub_8239E650) {
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
	// bge cr6,0x8239e6c0
	if (!ctx.cr6.lt) goto loc_8239E6C0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8239e6ac
	if (!ctx.cr6.lt) goto loc_8239E6AC;
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
loc_8239E6AC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8239de48
	ctx.lr = 0x8239E6B4;
	sub_8239DE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239e6c4
	if (ctx.cr6.eq) goto loc_8239E6C4;
loc_8239E6C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239E6C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E6D4"))) PPC_WEAK_FUNC(sub_8239E6D4);
PPC_FUNC_IMPL(__imp__sub_8239E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E6D8"))) PPC_WEAK_FUNC(sub_8239E6D8);
PPC_FUNC_IMPL(__imp__sub_8239E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239E6E0;
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
	// beq cr6,0x8239e770
	if (ctx.cr6.eq) goto loc_8239E770;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e710
	if (ctx.cr6.eq) goto loc_8239E710;
	// bl 0x82357240
	ctx.lr = 0x8239E70C;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239E710:
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
	// bne cr6,0x8239e730
	if (!ctx.cr6.eq) goto loc_8239E730;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8239E730:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239e770
	if (ctx.cr6.eq) goto loc_8239E770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239e650
	ctx.lr = 0x8239E748;
	sub_8239E650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239e758
	if (!ctx.cr6.eq) goto loc_8239E758;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8239E758:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82358508
	ctx.lr = 0x8239E76C;
	sub_82358508(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8239E770:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239E77C"))) PPC_WEAK_FUNC(sub_8239E77C);
PPC_FUNC_IMPL(__imp__sub_8239E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E780"))) PPC_WEAK_FUNC(sub_8239E780);
PPC_FUNC_IMPL(__imp__sub_8239E780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239E788;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239E7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239E7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x823585a0
	ctx.lr = 0x8239E7F0;
	sub_823585A0(ctx, base);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393458
	ctx.lr = 0x8239E7FC;
	sub_82393458(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e810
	if (ctx.cr6.eq) goto loc_8239E810;
	// bl 0x82357240
	ctx.lr = 0x8239E80C;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_8239E810:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8239e834
	if (ctx.cr6.eq) goto loc_8239E834;
	// bl 0x82357240
	ctx.lr = 0x8239E830;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239E834:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239E844"))) PPC_WEAK_FUNC(sub_8239E844);
PPC_FUNC_IMPL(__imp__sub_8239E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E848"))) PPC_WEAK_FUNC(sub_8239E848);
PPC_FUNC_IMPL(__imp__sub_8239E848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8239e780
	sub_8239E780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E850"))) PPC_WEAK_FUNC(sub_8239E850);
PPC_FUNC_IMPL(__imp__sub_8239E850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8239e780
	sub_8239E780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E858"))) PPC_WEAK_FUNC(sub_8239E858);
PPC_FUNC_IMPL(__imp__sub_8239E858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239e780
	sub_8239E780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239E860"))) PPC_WEAK_FUNC(sub_8239E860);
PPC_FUNC_IMPL(__imp__sub_8239E860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8239E868;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-27904
	ctx.r6.s64 = ctx.r11.s64 + -27904;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r5,r10,-27912
	ctx.r5.s64 = ctx.r10.s64 + -27912;
	// addi r3,r8,-27928
	ctx.r3.s64 = ctx.r8.s64 + -27928;
	// addi r4,r9,-27920
	ctx.r4.s64 = ctx.r9.s64 + -27920;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,30604
	ctx.r10.s64 = ctx.r7.s64 + 30604;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// bl 0x823700d8
	ctx.lr = 0x8239E8C4;
	sub_823700D8(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// addi r6,r9,30588
	ctx.r6.s64 = ctx.r9.s64 + 30588;
	// addi r5,r8,30596
	ctx.r5.s64 = ctx.r8.s64 + 30596;
	// addi r4,r7,-27944
	ctx.r4.s64 = ctx.r7.s64 + -27944;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8239e908
	if (ctx.cr6.eq) goto loc_8239E908;
	// bl 0x82357240
	ctx.lr = 0x8239E904;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_8239E908:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// addi r10,r11,32548
	ctx.r10.s64 = ctx.r11.s64 + 32548;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// beq cr6,0x8239e938
	if (ctx.cr6.eq) goto loc_8239E938;
	// bl 0x82357240
	ctx.lr = 0x8239E934;
	sub_82357240(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_8239E938:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// addi r10,r11,-30368
	ctx.r10.s64 = ctx.r11.s64 + -30368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x82393458
	ctx.lr = 0x8239E958;
	sub_82393458(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239e96c
	if (ctx.cr6.eq) goto loc_8239E96C;
	// bl 0x82357240
	ctx.lr = 0x8239E968;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_8239E96C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8239E988"))) PPC_WEAK_FUNC(sub_8239E988);
PPC_FUNC_IMPL(__imp__sub_8239E988) {
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
	// lbz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,100
	ctx.r4.s64 = ctx.r4.s64 + 100;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// bl 0x82248a40
	ctx.lr = 0x8239E9D4;
	sub_82248A40(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,119
	ctx.r11.s64 = ctx.r30.s64 + 119;
	// addi r10,r31,119
	ctx.r10.s64 = ctx.r31.s64 + 119;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239E9E4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239e9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239E9E4;
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82370360
	ctx.lr = 0x8239E9FC;
	sub_82370360(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x8239EA14;
	sub_82248A40(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82393c50
	ctx.lr = 0x8239EA2C;
	sub_82393C50(ctx, base);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8239e6d8
	ctx.lr = 0x8239EA3C;
	sub_8239E6D8(ctx, base);
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

__attribute__((alias("__imp__sub_8239EA54"))) PPC_WEAK_FUNC(sub_8239EA54);
PPC_FUNC_IMPL(__imp__sub_8239EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239EA58"))) PPC_WEAK_FUNC(sub_8239EA58);
PPC_FUNC_IMPL(__imp__sub_8239EA58) {
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
	ctx.lr = 0x8239EA78;
	sub_823570E0(ctx, base);
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x823570f0
	ctx.lr = 0x8239EA80;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ea94
	if (ctx.cr6.eq) goto loc_8239EA94;
	// bl 0x8239e4f8
	ctx.lr = 0x8239EA8C;
	sub_8239E4F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239ea98
	goto loc_8239EA98;
loc_8239EA94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239EA98:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239EAA0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239eab0
	if (!ctx.cr6.eq) goto loc_8239EAB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239eac0
	goto loc_8239EAC0;
loc_8239EAB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239e988
	ctx.lr = 0x8239EABC;
	sub_8239E988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239EAC0:
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

__attribute__((alias("__imp__sub_8239EAD8"))) PPC_WEAK_FUNC(sub_8239EAD8);
PPC_FUNC_IMPL(__imp__sub_8239EAD8) {
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
	// bl 0x8239e860
	ctx.lr = 0x8239EAF8;
	sub_8239E860(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239eb10
	if (ctx.cr6.eq) goto loc_8239EB10;
	// bl 0x82357128
	ctx.lr = 0x8239EB0C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239EB10:
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

__attribute__((alias("__imp__sub_8239EB28"))) PPC_WEAK_FUNC(sub_8239EB28);
PPC_FUNC_IMPL(__imp__sub_8239EB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8239EB30;
	sub_82248770(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239eb50
	if (ctx.cr6.eq) goto loc_8239EB50;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8239efd0
	goto loc_8239EFD0;
loc_8239EB50:
	// lwz r25,12(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239efc8
	if (ctx.cr6.eq) goto loc_8239EFC8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8239efc8
	if (!ctx.cr6.eq) goto loc_8239EFC8;
	// lwz r23,48(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8239efc8
	if (ctx.cr6.eq) goto loc_8239EFC8;
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8239e4f8
	ctx.lr = 0x8239EB8C;
	sub_8239E4F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a7390
	ctx.lr = 0x8239EB94;
	sub_823A7390(ctx, base);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239EBA4;
	sub_8235ACB0(ctx, base);
	// stb r3,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r3.u8);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// bl 0x823a43c8
	ctx.lr = 0x8239EBB8;
	sub_823A43C8(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235acc0
	ctx.lr = 0x8239EBC4;
	sub_8235ACC0(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8239ebec
	if (ctx.cr6.eq) goto loc_8239EBEC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237f390
	ctx.lr = 0x8239EBD8;
	sub_8237F390(ctx, base);
	// bl 0x82357358
	ctx.lr = 0x8239EBDC;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82248a40
	ctx.lr = 0x8239EBEC;
	sub_82248A40(ctx, base);
loc_8239EBEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823594a8
	ctx.lr = 0x8239EBF4;
	sub_823594A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ec74
	if (ctx.cr6.eq) goto loc_8239EC74;
loc_8239EC04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235adc8
	ctx.lr = 0x8239EC10;
	sub_8235ADC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ec68
	if (ctx.cr6.eq) goto loc_8239EC68;
	// bl 0x82357d60
	ctx.lr = 0x8239EC20;
	sub_82357D60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x8239EC2C;
	sub_823AC6B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239EC38;
	sub_8235ACB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a7850
	ctx.lr = 0x8239EC44;
	sub_823A7850(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r22,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x8239e048
	ctx.lr = 0x8239EC60;
	sub_8239E048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ed68
	if (ctx.cr6.eq) goto loc_8239ED68;
loc_8239EC68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8239ec04
	if (ctx.cr6.lt) goto loc_8239EC04;
loc_8239EC74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359918
	ctx.lr = 0x8239EC7C;
	sub_82359918(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ed2c
	if (ctx.cr6.eq) goto loc_8239ED2C;
loc_8239EC8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359c98
	ctx.lr = 0x8239EC98;
	sub_82359C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359d58
	ctx.lr = 0x8239ECA8;
	sub_82359D58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359990
	ctx.lr = 0x8239ECB8;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8239ecc8
	if (!ctx.cr6.eq) goto loc_8239ECC8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8239ECC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82372d50
	ctx.lr = 0x8239ECD4;
	sub_82372D50(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373228
	ctx.lr = 0x8239ECEC;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823732a8
	ctx.lr = 0x8239ECF8;
	sub_823732A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373298
	ctx.lr = 0x8239ED00;
	sub_82373298(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82393558
	ctx.lr = 0x8239ED0C;
	sub_82393558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82373298
	ctx.lr = 0x8239ED18;
	sub_82373298(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8239ed68
	if (ctx.cr6.eq) goto loc_8239ED68;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8239ec8c
	if (ctx.cr6.lt) goto loc_8239EC8C;
loc_8239ED2C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237f3a0
	ctx.lr = 0x8239ED34;
	sub_8237F3A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239ed90
	if (!ctx.cr6.eq) goto loc_8239ED90;
loc_8239ED40:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239ED54;
	sub_823AB100(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239e860
	ctx.lr = 0x8239ED5C;
	sub_8239E860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8239ED68:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239ED7C;
	sub_823AB100(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239e860
	ctx.lr = 0x8239ED84;
	sub_8239E860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8239ED90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239EDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ed40
	if (ctx.cr6.eq) goto loc_8239ED40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357d60
	ctx.lr = 0x8239EDB8;
	sub_82357D60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ee0c
	if (ctx.cr6.eq) goto loc_8239EE0C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8239ee0c
	if (ctx.cr6.eq) goto loc_8239EE0C;
loc_8239EDD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239EDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ed40
	if (ctx.cr6.eq) goto loc_8239ED40;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8239eef0
	if (!ctx.cr6.eq) goto loc_8239EEF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8239edd0
	if (ctx.cr6.lt) goto loc_8239EDD0;
loc_8239EE0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239EE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82359918
	ctx.lr = 0x8239EE2C;
	sub_82359918(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ef5c
	if (ctx.cr6.eq) goto loc_8239EF5C;
loc_8239EE3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82359c98
	ctx.lr = 0x8239EE48;
	sub_82359C98(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82359d58
	ctx.lr = 0x8239EE58;
	sub_82359D58(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8239ef2c
	if (ctx.cr6.gt) goto loc_8239EF2C;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8239ed40
	if (ctx.cr0.eq) goto loc_8239ED40;
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x823570e0
	ctx.lr = 0x8239EE88;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x8239EE98;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239EEA4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239ed40
	if (ctx.cr6.eq) goto loc_8239ED40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x8239EEB8;
	sub_823585A0(ctx, base);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239eee4
	if (ctx.cr6.eq) goto loc_8239EEE4;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x8239EED4;
	sub_82358508(ctx, base);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239eee4
	if (ctx.cr6.eq) goto loc_8239EEE4;
	// bl 0x82357240
	ctx.lr = 0x8239EEE4;
	sub_82357240(ctx, base);
loc_8239EEE4:
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// b 0x8239ef30
	goto loc_8239EF30;
loc_8239EEF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359418
	ctx.lr = 0x8239EEFC;
	sub_82359418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823593f0
	ctx.lr = 0x8239EF0C;
	sub_823593F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82359f08
	ctx.lr = 0x8239EF1C;
	sub_82359F08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ed40
	if (ctx.cr6.eq) goto loc_8239ED40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8239eef0
	goto loc_8239EEF0;
loc_8239EF2C:
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_8239EF30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239ed40
	if (ctx.cr6.eq) goto loc_8239ED40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// stdx r11,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u64);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// blt cr6,0x8239ee3c
	if (ctx.cr6.lt) goto loc_8239EE3C;
loc_8239EF5C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239EF68;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239EF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r8,r9,32288
	ctx.r8.s64 = ctx.r9.s64 + 32288;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r8.u32);
	// stw r4,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r4.u32);
	// bl 0x8239e860
	ctx.lr = 0x8239EFBC;
	sub_8239E860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8239EFC8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239EFD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239EFDC;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8239EFE8"))) PPC_WEAK_FUNC(sub_8239EFE8);
PPC_FUNC_IMPL(__imp__sub_8239EFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239f05c
	if (ctx.cr6.gt) {
		sub_8239F05C(ctx, base);
		return;
	}
	// beq cr6,0x8239f04c
	if (ctx.cr6.eq) {
		// ERROR 8239F04C
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8239f0e0
	if (ctx.cr6.gt) {
		// ERROR 8239F0E0
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4060
	ctx.r12.s64 = ctx.r12.s64 + -4060;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239F024"))) PPC_WEAK_FUNC(sub_8239F024);
PPC_FUNC_IMPL(__imp__sub_8239F024) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lwz r17,-3864(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3864);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F05C"))) PPC_WEAK_FUNC(sub_8239F05C);
PPC_FUNC_IMPL(__imp__sub_8239F05C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239f0a8
	if (ctx.cr6.gt) goto loc_8239F0A8;
	// beq cr6,0x8239f0e8
	if (ctx.cr6.eq) goto loc_8239F0E8;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239f0e0
	if (ctx.cr6.gt) goto loc_8239F0E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239f04c
	if (ctx.cr6.eq) {
		// ERROR 8239F04C
		return;
	}
	// bdz 0x8239f04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F04C;
	// bdz 0x8239f0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E0;
	// bdz 0x8239f04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F04C;
	// bdz 0x8239f0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E0;
	// bdz 0x8239f0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E8;
	// bdz 0x8239f0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E0;
	// b 0x8239f0e8
	goto loc_8239F0E8;
loc_8239F0A8:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239f0e0
	if (ctx.cr6.gt) goto loc_8239F0E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239f0e8
	if (ctx.cr6.eq) goto loc_8239F0E8;
	// bdz 0x8239f0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E8;
	// bdz 0x8239f04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F04C;
	// bdz 0x8239f0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E0;
	// bdz 0x8239f0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E8;
	// bdz 0x8239f04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F04C;
	// bdz 0x8239f0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239F0E8;
	// b 0x8239f0e8
	goto loc_8239F0E8;
loc_8239F0E0:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8239F0E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
    loc_8239F04C:
        ;
}

__attribute__((alias("__imp__sub_8239F0F0"))) PPC_WEAK_FUNC(sub_8239F0F0);
PPC_FUNC_IMPL(__imp__sub_8239F0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239F0F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239f120
	if (ctx.cr6.eq) goto loc_8239F120;
	// bl 0x82357128
	ctx.lr = 0x8239F11C;
	sub_82357128(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_8239F120:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// beq cr6,0x8239f174
	if (ctx.cr6.eq) goto loc_8239F174;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239f174
	if (ctx.cr6.eq) goto loc_8239F174;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8239F13C;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x8239F144;
	sub_823570F0(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239F150;
	sub_823570E0(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239f164
	if (!ctx.cr6.eq) goto loc_8239F164;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239F164:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x8239F170;
	sub_82358508(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_8239F174:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239F180"))) PPC_WEAK_FUNC(sub_8239F180);
PPC_FUNC_IMPL(__imp__sub_8239F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239F188;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x8239F194;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-27880
	ctx.r8.s64 = ctx.r11.s64 + -27880;
	// addi r7,r10,-27892
	ctx.r7.s64 = ctx.r10.s64 + -27892;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82357600
	ctx.lr = 0x8239F1D8;
	sub_82357600(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239F1E0;
	sub_82355AB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239F1EC;
	sub_82355AC0(ctx, base);
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab120
	ctx.lr = 0x8239F1F8;
	sub_823AB120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239F204"))) PPC_WEAK_FUNC(sub_8239F204);
PPC_FUNC_IMPL(__imp__sub_8239F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F208"))) PPC_WEAK_FUNC(sub_8239F208);
PPC_FUNC_IMPL(__imp__sub_8239F208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239f450
	sub_8239F450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F210"))) PPC_WEAK_FUNC(sub_8239F210);
PPC_FUNC_IMPL(__imp__sub_8239F210) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239f2b4
	if (!ctx.cr6.gt) goto loc_8239F2B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8239f2b4
	if (ctx.cr6.gt) goto loc_8239F2B4;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239f24c
	if (!ctx.cr6.eq) goto loc_8239F24C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239f2b8
	goto loc_8239F2B8;
loc_8239F24C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239F268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239f2b4
	if (ctx.cr6.eq) goto loc_8239F2B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32360
	ctx.r9.s64 = ctx.r11.s64 + -32360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239F2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239f2b8
	if (ctx.cr6.eq) goto loc_8239F2B8;
loc_8239F2B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239F2B8:
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

__attribute__((alias("__imp__sub_8239F2D0"))) PPC_WEAK_FUNC(sub_8239F2D0);
PPC_FUNC_IMPL(__imp__sub_8239F2D0) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239f2f8
	if (ctx.cr6.eq) goto loc_8239F2F8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8239f340
	goto loc_8239F340;
loc_8239F2F8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239f338
	if (ctx.cr6.eq) goto loc_8239F338;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8239f338
	if (!ctx.cr6.eq) goto loc_8239F338;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239f338
	if (ctx.cr6.eq) goto loc_8239F338;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239F338:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239F340:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239F34C;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_8239F360"))) PPC_WEAK_FUNC(sub_8239F360);
PPC_FUNC_IMPL(__imp__sub_8239F360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239F368;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239F390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239f444
	if (!ctx.cr6.eq) goto loc_8239F444;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-28428
	ctx.r9.s64 = ctx.r11.s64 + -28428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239F3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239f43c
	if (!ctx.cr6.eq) goto loc_8239F43C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239F3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239F408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239F41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239F42C;
	sub_823AB100(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239F43C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_8239F444:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239F44C"))) PPC_WEAK_FUNC(sub_8239F44C);
PPC_FUNC_IMPL(__imp__sub_8239F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F450"))) PPC_WEAK_FUNC(sub_8239F450);
PPC_FUNC_IMPL(__imp__sub_8239F450) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-27880
	ctx.r8.s64 = ctx.r11.s64 + -27880;
	// addi r7,r10,-27892
	ctx.r7.s64 = ctx.r10.s64 + -27892;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8239F494;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239f4ac
	if (ctx.cr6.eq) goto loc_8239F4AC;
	// bl 0x82357128
	ctx.lr = 0x8239F4A8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239F4AC:
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

__attribute__((alias("__imp__sub_8239F4C4"))) PPC_WEAK_FUNC(sub_8239F4C4);
PPC_FUNC_IMPL(__imp__sub_8239F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F4C8"))) PPC_WEAK_FUNC(sub_8239F4C8);
PPC_FUNC_IMPL(__imp__sub_8239F4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239F4D0;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8239bc80
	ctx.lr = 0x8239F4E8;
	sub_8239BC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239F4F0;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239F4FC;
	sub_823A43C8(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239F50C;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239F528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r6.u32);
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239F558"))) PPC_WEAK_FUNC(sub_8239F558);
PPC_FUNC_IMPL(__imp__sub_8239F558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239F560;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393458
	ctx.lr = 0x8239F574;
	sub_82393458(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239f58c
	if (ctx.cr6.eq) goto loc_8239F58C;
	// bl 0x82357240
	ctx.lr = 0x8239F588;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_8239F58C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// beq cr6,0x8239f5cc
	if (ctx.cr6.eq) goto loc_8239F5CC;
	// bl 0x82357128
	ctx.lr = 0x8239F5C8;
	sub_82357128(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_8239F5CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239F5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239F604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8239F618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239F620"))) PPC_WEAK_FUNC(sub_8239F620);
PPC_FUNC_IMPL(__imp__sub_8239F620) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r7,r11,-30368
	ctx.r7.s64 = ctx.r11.s64 + -30368;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r3,r9,-27736
	ctx.r3.s64 = ctx.r9.s64 + -27736;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r9,r8,-27744
	ctx.r9.s64 = ctx.r8.s64 + -27744;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r8,r6,30604
	ctx.r8.s64 = ctx.r6.s64 + 30604;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239F6A0;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239F6BC;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239F6D8;
	sub_823585A0(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239f558
	ctx.lr = 0x8239F6E4;
	sub_8239F558(ctx, base);
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

__attribute__((alias("__imp__sub_8239F700"))) PPC_WEAK_FUNC(sub_8239F700);
PPC_FUNC_IMPL(__imp__sub_8239F700) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239f940
	sub_8239F940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F708"))) PPC_WEAK_FUNC(sub_8239F708);
PPC_FUNC_IMPL(__imp__sub_8239F708) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239f558
	sub_8239F558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F710"))) PPC_WEAK_FUNC(sub_8239F710);
PPC_FUNC_IMPL(__imp__sub_8239F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239F718;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-27736
	ctx.r9.s64 = ctx.r11.s64 + -27736;
	// addi r8,r10,-27744
	ctx.r8.s64 = ctx.r10.s64 + -27744;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239f754
	if (ctx.cr6.eq) goto loc_8239F754;
	// bl 0x82357128
	ctx.lr = 0x8239F750;
	sub_82357128(ctx, base);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
loc_8239F754:
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
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239F784;
	sub_823700D8(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// addi r4,r5,-30368
	ctx.r4.s64 = ctx.r5.s64 + -30368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// bl 0x82393458
	ctx.lr = 0x8239F79C;
	sub_82393458(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239f7b0
	if (ctx.cr6.eq) goto loc_8239F7B0;
	// bl 0x82357240
	ctx.lr = 0x8239F7AC;
	sub_82357240(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8239F7B0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239F7CC"))) PPC_WEAK_FUNC(sub_8239F7CC);
PPC_FUNC_IMPL(__imp__sub_8239F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F7D0"))) PPC_WEAK_FUNC(sub_8239F7D0);
PPC_FUNC_IMPL(__imp__sub_8239F7D0) {
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
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x8239f7fc
	if (!ctx.cr6.eq) goto loc_8239F7FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239F7FC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82393c50
	ctx.lr = 0x8239F808;
	sub_82393C50(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r5,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r5.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x8239F854;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,115
	ctx.r11.s64 = ctx.r31.s64 + 115;
	// addi r10,r30,115
	ctx.r10.s64 = ctx.r30.s64 + 115;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F864:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239f864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F864;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239F880;
	sub_82248A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x8239f0f0
	ctx.lr = 0x8239F890;
	sub_8239F0F0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8239F8C0"))) PPC_WEAK_FUNC(sub_8239F8C0);
PPC_FUNC_IMPL(__imp__sub_8239F8C0) {
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
	ctx.lr = 0x8239F8E0;
	sub_823570E0(ctx, base);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x823570f0
	ctx.lr = 0x8239F8E8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239f8fc
	if (ctx.cr6.eq) goto loc_8239F8FC;
	// bl 0x8239f620
	ctx.lr = 0x8239F8F4;
	sub_8239F620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239f900
	goto loc_8239F900;
loc_8239F8FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239F900:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239F908;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239f918
	if (!ctx.cr6.eq) goto loc_8239F918;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239f928
	goto loc_8239F928;
loc_8239F918:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239f7d0
	ctx.lr = 0x8239F924;
	sub_8239F7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239F928:
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

__attribute__((alias("__imp__sub_8239F940"))) PPC_WEAK_FUNC(sub_8239F940);
PPC_FUNC_IMPL(__imp__sub_8239F940) {
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
	// bl 0x8239f710
	ctx.lr = 0x8239F960;
	sub_8239F710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f978
	if (ctx.cr6.eq) goto loc_8239F978;
	// bl 0x82357128
	ctx.lr = 0x8239F974;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239F978:
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

__attribute__((alias("__imp__sub_8239F990"))) PPC_WEAK_FUNC(sub_8239F990);
PPC_FUNC_IMPL(__imp__sub_8239F990) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r7,r11,-30368
	ctx.r7.s64 = ctx.r11.s64 + -30368;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r3,r9,-27716
	ctx.r3.s64 = ctx.r9.s64 + -27716;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r9,r8,-27724
	ctx.r9.s64 = ctx.r8.s64 + -27724;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r8,r6,30604
	ctx.r8.s64 = ctx.r6.s64 + 30604;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x8239FA10;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239FA2C;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239FA48;
	sub_823585A0(ctx, base);
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
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

__attribute__((alias("__imp__sub_8239FA68"))) PPC_WEAK_FUNC(sub_8239FA68);
PPC_FUNC_IMPL(__imp__sub_8239FA68) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239FAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239FAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r5,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r5.u64);
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

__attribute__((alias("__imp__sub_8239FAD4"))) PPC_WEAK_FUNC(sub_8239FAD4);
PPC_FUNC_IMPL(__imp__sub_8239FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239FAD8"))) PPC_WEAK_FUNC(sub_8239FAD8);
PPC_FUNC_IMPL(__imp__sub_8239FAD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239fa68
	sub_8239FA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239FAE0"))) PPC_WEAK_FUNC(sub_8239FAE0);
PPC_FUNC_IMPL(__imp__sub_8239FAE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8239fb90
	sub_8239FB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239FAE8"))) PPC_WEAK_FUNC(sub_8239FAE8);
PPC_FUNC_IMPL(__imp__sub_8239FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239FAF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-27716
	ctx.r6.s64 = ctx.r11.s64 + -27716;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r5,r10,-27724
	ctx.r5.s64 = ctx.r10.s64 + -27724;
	// addi r3,r8,30588
	ctx.r3.s64 = ctx.r8.s64 + 30588;
	// addi r4,r9,30596
	ctx.r4.s64 = ctx.r9.s64 + 30596;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,30604
	ctx.r10.s64 = ctx.r7.s64 + 30604;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239FB44;
	sub_823700D8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r8,r9,-30368
	ctx.r8.s64 = ctx.r9.s64 + -30368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82393458
	ctx.lr = 0x8239FB5C;
	sub_82393458(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239fb74
	if (ctx.cr6.eq) goto loc_8239FB74;
	// bl 0x82357240
	ctx.lr = 0x8239FB70;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8239FB74:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239FB90"))) PPC_WEAK_FUNC(sub_8239FB90);
PPC_FUNC_IMPL(__imp__sub_8239FB90) {
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
	// bl 0x8239fae8
	ctx.lr = 0x8239FBB0;
	sub_8239FAE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239fbc8
	if (ctx.cr6.eq) goto loc_8239FBC8;
	// bl 0x82357128
	ctx.lr = 0x8239FBC4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239FBC8:
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

__attribute__((alias("__imp__sub_8239FBE0"))) PPC_WEAK_FUNC(sub_8239FBE0);
PPC_FUNC_IMPL(__imp__sub_8239FBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8239FBE8;
	sub_82248778(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239fc1c
	if (ctx.cr6.eq) goto loc_8239FC1C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8239FC0C;
	sub_823AB100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8239FC1C:
	// lwz r30,12(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r24,48(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357600
	ctx.lr = 0x8239FC2C;
	sub_82357600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239f620
	ctx.lr = 0x8239FC38;
	sub_8239F620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239FC40;
	sub_8235ACB0(ctx, base);
	// stb r3,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239FC4C;
	sub_82355AB0(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8239FC58;
	sub_82355AC0(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8239FC64;
	sub_82355AD0(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8239FC70;
	sub_82355AE0(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239FC7C;
	sub_823A43C8(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355af0
	ctx.lr = 0x8239FC88;
	sub_82355AF0(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b20
	ctx.lr = 0x8239FC94;
	sub_82355B20(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8239FC9C;
	sub_8235BF58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b50
	ctx.lr = 0x8239FCA8;
	sub_82355B50(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b50
	ctx.lr = 0x8239FCB4;
	sub_82355B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c050
	ctx.lr = 0x8239FCC0;
	sub_8235C050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380300
	ctx.lr = 0x8239FCC8;
	sub_82380300(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823802f8
	ctx.lr = 0x8239FCD4;
	sub_823802F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8239f0f0
	ctx.lr = 0x8239FCE4;
	sub_8239F0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239fd18
	if (!ctx.cr6.eq) goto loc_8239FD18;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239FD00;
	sub_823AB100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// bl 0x8239f710
	ctx.lr = 0x8239FD10;
	sub_8239F710(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8239FD18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239FD20;
	sub_823A43C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239fd70
	if (!ctx.cr6.eq) goto loc_8239FD70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a80
	ctx.lr = 0x8239FD30;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8239FD40;
	sub_82370360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239FD48;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,244(r1)
	PPC_STORE_U64(ctx.r1.u32 + 244, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239FD5C;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239FD70;
	sub_82248A40(ctx, base);
loc_8239FD70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359918
	ctx.lr = 0x8239FD78;
	sub_82359918(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239fe28
	if (ctx.cr6.eq) goto loc_8239FE28;
loc_8239FD88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x8239FD94;
	sub_82359D58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x8239FDA4;
	sub_82359C98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359990
	ctx.lr = 0x8239FDB4;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8239fdc4
	if (!ctx.cr6.eq) goto loc_8239FDC4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8239FDC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82372d50
	ctx.lr = 0x8239FDD0;
	sub_82372D50(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82373228
	ctx.lr = 0x8239FDE8;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823732a8
	ctx.lr = 0x8239FDF4;
	sub_823732A8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82373298
	ctx.lr = 0x8239FDFC;
	sub_82373298(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82393558
	ctx.lr = 0x8239FE08;
	sub_82393558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373298
	ctx.lr = 0x8239FE14;
	sub_82373298(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8239fe98
	if (ctx.cr6.eq) goto loc_8239FE98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8239fd88
	if (ctx.cr6.lt) goto loc_8239FD88;
loc_8239FE28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239FE34;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239FE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r9,32288
	ctx.r7.s64 = ctx.r9.s64 + 32288;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r6,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r11.u32);
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// stw r8,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r8.u32);
	// bl 0x8239f710
	ctx.lr = 0x8239FE90;
	sub_8239F710(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8239FE98:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239FEAC;
	sub_823AB100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// bl 0x8239f710
	ctx.lr = 0x8239FEBC;
	sub_8239F710(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8239FEC4"))) PPC_WEAK_FUNC(sub_8239FEC4);
PPC_FUNC_IMPL(__imp__sub_8239FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239FEC8"))) PPC_WEAK_FUNC(sub_8239FEC8);
PPC_FUNC_IMPL(__imp__sub_8239FEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8239FED0;
	sub_8224877C(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r27,r3,56
	ctx.r27.s64 = ctx.r3.s64 + 56;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0054
	if (!ctx.cr6.eq) goto loc_823A0054;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239f990
	ctx.lr = 0x8239FF0C;
	sub_8239F990(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ffa4
	if (!ctx.cr6.eq) goto loc_8239FFA4;
loc_8239FF30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239FF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239FF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239FF8C;
	sub_823AB100(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// bl 0x8239fae8
	ctx.lr = 0x8239FF9C;
	sub_8239FAE8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8239FFA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357600
	ctx.lr = 0x8239FFAC;
	sub_82357600(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a43c8
	ctx.lr = 0x8239FFB8;
	sub_823A43C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a0044
	if (ctx.cr6.eq) goto loc_823A0044;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0014
	if (ctx.cr6.eq) goto loc_823A0014;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8239FFD8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addic. r11,r10,8
	ctx.xer.ca = ctx.r10.u32 > 4294967287;
	ctx.r11.s64 = ctx.r10.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bne 0x8239fff0
	if (!ctx.cr0.eq) goto loc_8239FFF0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8239FFF0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8235a2a0
	ctx.lr = 0x8239FFFC;
	sub_8235A2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ff30
	if (ctx.cr6.eq) goto loc_8239FF30;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8239ffd8
	if (ctx.cr6.lt) goto loc_8239FFD8;
loc_823A0014:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823561e0
	ctx.lr = 0x823A0020;
	sub_823561E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823561f0
	ctx.lr = 0x823A002C;
	sub_823561F0(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82356210
	ctx.lr = 0x823A0038;
	sub_82356210(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// bl 0x82355a98
	ctx.lr = 0x823A0044;
	sub_82355A98(ctx, base);
loc_823A0044:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// bl 0x8239fae8
	ctx.lr = 0x823A0054;
	sub_8239FAE8(ctx, base);
loc_823A0054:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823A005C"))) PPC_WEAK_FUNC(sub_823A005C);
PPC_FUNC_IMPL(__imp__sub_823A005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0060"))) PPC_WEAK_FUNC(sub_823A0060);
PPC_FUNC_IMPL(__imp__sub_823A0060) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823a00d4
	if (ctx.cr6.gt) goto loc_823A00D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823a00ac
	// bdzf 4*cr6+eq,0x823a00b4
	// bdzf 4*cr6+eq,0x823a00c0
	// bdzf 4*cr6+eq,0x823a00c8
	// bdzf 4*cr6+eq,0x823a00b4
	// bne cr6,0x823a00d0
	if (!ctx.cr6.eq) goto loc_823A00D0;
	// bl 0x8239fbe0
	ctx.lr = 0x823A00A8;
	sub_8239FBE0(ctx, base);
	// b 0x823a00d4
	goto loc_823A00D4;
loc_823A00AC:
	// bl 0x8239fec8
	ctx.lr = 0x823A00B0;
	sub_8239FEC8(ctx, base);
	// b 0x823a00d4
	goto loc_823A00D4;
loc_823A00B4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// b 0x823a00d4
	goto loc_823A00D4;
loc_823A00C0:
	// bl 0x8239f4c8
	ctx.lr = 0x823A00C4;
	sub_8239F4C8(ctx, base);
	// b 0x823a00d4
	goto loc_823A00D4;
loc_823A00C8:
	// bl 0x8239f360
	ctx.lr = 0x823A00CC;
	sub_8239F360(ctx, base);
	// b 0x823a00d4
	goto loc_823A00D4;
loc_823A00D0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_823A00D4:
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

__attribute__((alias("__imp__sub_823A00EC"))) PPC_WEAK_FUNC(sub_823A00EC);
PPC_FUNC_IMPL(__imp__sub_823A00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A00F0"))) PPC_WEAK_FUNC(sub_823A00F0);
PPC_FUNC_IMPL(__imp__sub_823A00F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x823a0180
	if (!ctx.cr6.eq) {
		sub_823A0180(ctx, base);
		return;
	}
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a0160
	if (ctx.cr6.gt) {
		// ERROR 823A0160
		return;
	}
	// beq cr6,0x823a0178
	if (ctx.cr6.eq) {
		// ERROR 823A0178
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823a0170
	if (ctx.cr6.gt) {
		// ERROR 823A0170
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,312
	ctx.r12.s64 = ctx.r12.s64 + 312;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A0138"))) PPC_WEAK_FUNC(sub_823A0138);
PPC_FUNC_IMPL(__imp__sub_823A0138) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823a0178
	if (ctx.cr6.eq) goto loc_823A0178;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_823A0178:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0180"))) PPC_WEAK_FUNC(sub_823A0180);
PPC_FUNC_IMPL(__imp__sub_823A0180) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a0170
	if (ctx.cr6.gt) {
		// ERROR 823A0170
		return;
	}
	// beq cr6,0x823a0178
	if (ctx.cr6.eq) {
		// ERROR 823A0178
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823a0170
	if (ctx.cr6.gt) {
		// ERROR 823A0170
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,436
	ctx.r12.s64 = ctx.r12.s64 + 436;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A01B4"))) PPC_WEAK_FUNC(sub_823A01B4);
PPC_FUNC_IMPL(__imp__sub_823A01B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r17,368(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// lwz r17,376(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A01E0"))) PPC_WEAK_FUNC(sub_823A01E0);
PPC_FUNC_IMPL(__imp__sub_823A01E0) {
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
	ctx.lr = 0x823A01FC;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a0224
	if (!ctx.cr6.eq) goto loc_823A0224;
loc_823A0208:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A021C;
	sub_823AB100(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823a0250
	goto loc_823A0250;
loc_823A0224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b580
	ctx.lr = 0x823A022C;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0254
	if (!ctx.cr6.eq) goto loc_823A0254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x823A023C;
	sub_8235B9C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b870
	ctx.lr = 0x823A0244;
	sub_8235B870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0208
	if (!ctx.cr6.eq) goto loc_823A0208;
	// li r11,5
	ctx.r11.s64 = 5;
loc_823A0250:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_823A0254:
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

__attribute__((alias("__imp__sub_823A026C"))) PPC_WEAK_FUNC(sub_823A026C);
PPC_FUNC_IMPL(__imp__sub_823A026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0270"))) PPC_WEAK_FUNC(sub_823A0270);
PPC_FUNC_IMPL(__imp__sub_823A0270) {
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
	ctx.lr = 0x823A028C;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x823A0294;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a02d8
	if (!ctx.cr6.eq) goto loc_823A02D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b998
	ctx.lr = 0x823A02A4;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a02d0
	if (ctx.cr6.eq) goto loc_823A02D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x823A02B4;
	sub_8235B9C8(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A02C8;
	sub_823AB100(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823a02d4
	goto loc_823A02D4;
loc_823A02D0:
	// li r11,6
	ctx.r11.s64 = 6;
loc_823A02D4:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_823A02D8:
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

__attribute__((alias("__imp__sub_823A02F0"))) PPC_WEAK_FUNC(sub_823A02F0);
PPC_FUNC_IMPL(__imp__sub_823A02F0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27708
	ctx.r9.s64 = ctx.r11.s64 + -27708;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82358348
	ctx.lr = 0x823A032C;
	sub_82358348(ctx, base);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823A035C"))) PPC_WEAK_FUNC(sub_823A035C);
PPC_FUNC_IMPL(__imp__sub_823A035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0360"))) PPC_WEAK_FUNC(sub_823A0360);
PPC_FUNC_IMPL(__imp__sub_823A0360) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823A03C0"))) PPC_WEAK_FUNC(sub_823A03C0);
PPC_FUNC_IMPL(__imp__sub_823A03C0) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-27708
	ctx.r10.s64 = ctx.r11.s64 + -27708;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82358390
	ctx.lr = 0x823A03F0;
	sub_82358390(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31824
	ctx.r7.s64 = ctx.r9.s64 + 31824;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823a0414
	if (ctx.cr6.eq) goto loc_823A0414;
	// bl 0x82357128
	ctx.lr = 0x823A0410;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A0414:
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

__attribute__((alias("__imp__sub_823A042C"))) PPC_WEAK_FUNC(sub_823A042C);
PPC_FUNC_IMPL(__imp__sub_823A042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0430"))) PPC_WEAK_FUNC(sub_823A0430);
PPC_FUNC_IMPL(__imp__sub_823A0430) {
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
	ctx.lr = 0x823A0458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A046C;
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

__attribute__((alias("__imp__sub_823A0480"))) PPC_WEAK_FUNC(sub_823A0480);
PPC_FUNC_IMPL(__imp__sub_823A0480) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-27696
	ctx.r10.s64 = ctx.r11.s64 + -27696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A04B0;
	sub_82356EB8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8235a538
	ctx.lr = 0x823A04B8;
	sub_8235A538(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-31544
	ctx.r7.s64 = ctx.r9.s64 + -31544;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823a04dc
	if (ctx.cr6.eq) goto loc_823A04DC;
	// bl 0x82357128
	ctx.lr = 0x823A04D8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A04DC:
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

__attribute__((alias("__imp__sub_823A04F4"))) PPC_WEAK_FUNC(sub_823A04F4);
PPC_FUNC_IMPL(__imp__sub_823A04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A04F8"))) PPC_WEAK_FUNC(sub_823A04F8);
PPC_FUNC_IMPL(__imp__sub_823A04F8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A0510;
	sub_823570E0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823570f0
	ctx.lr = 0x823A0518;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a053c
	if (ctx.cr6.eq) goto loc_823A053C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-27688
	ctx.r9.s64 = ctx.r11.s64 + -27688;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x823a0540
	goto loc_823A0540;
loc_823A053C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A0540:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A0548;
	sub_823570E0(ctx, base);
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

__attribute__((alias("__imp__sub_823A0560"))) PPC_WEAK_FUNC(sub_823A0560);
PPC_FUNC_IMPL(__imp__sub_823A0560) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x823A0584;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-27664
	ctx.r8.s64 = ctx.r11.s64 + -27664;
	// addi r7,r10,-27676
	ctx.r7.s64 = ctx.r10.s64 + -27676;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823A05DC"))) PPC_WEAK_FUNC(sub_823A05DC);
PPC_FUNC_IMPL(__imp__sub_823A05DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A05E0"))) PPC_WEAK_FUNC(sub_823A05E0);
PPC_FUNC_IMPL(__imp__sub_823A05E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x823a0bb8
	sub_823A0BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A05E8"))) PPC_WEAK_FUNC(sub_823A05E8);
PPC_FUNC_IMPL(__imp__sub_823A05E8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a068c
	if (ctx.cr6.eq) goto loc_823A068C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823a068c
	if (!ctx.cr6.eq) goto loc_823A068C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a068c
	if (ctx.cr6.eq) goto loc_823A068C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823a065c
	if (ctx.cr6.lt) goto loc_823A065C;
	// beq cr6,0x823a063c
	if (ctx.cr6.eq) goto loc_823A063C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// b 0x823a0694
	goto loc_823A0694;
loc_823A063C:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
loc_823A065C:
	// bl 0x82357c88
	ctx.lr = 0x823A0660;
	sub_82357C88(ctx, base);
	// bl 0x823ac6b8
	ctx.lr = 0x823A0664;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// bgt cr6,0x823a068c
	if (ctx.cr6.gt) goto loc_823A068C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
loc_823A068C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_823A0694:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A06A0;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_823A06B8"))) PPC_WEAK_FUNC(sub_823A06B8);
PPC_FUNC_IMPL(__imp__sub_823A06B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A06C0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x823A06CC;
	sub_8235B1F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82357c88
	ctx.lr = 0x823A06DC;
	sub_82357C88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237bdb8
	ctx.lr = 0x823A06E8;
	sub_8237BDB8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x823ac640
	ctx.lr = 0x823A06F8;
	sub_823AC640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235acb8
	ctx.lr = 0x823A0704;
	sub_8235ACB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac648
	ctx.lr = 0x823A070C;
	sub_823AC648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356610
	ctx.lr = 0x823A0718;
	sub_82356610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac650
	ctx.lr = 0x823A0720;
	sub_823AC650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ab0e8
	ctx.lr = 0x823A072C;
	sub_823AB0E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x823A0734;
	sub_8235B9C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b808
	ctx.lr = 0x823A0740;
	sub_8235B808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a0774
	if (ctx.cr6.eq) goto loc_823A0774;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A075C;
	sub_823AB100(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x8237e850
	ctx.lr = 0x823A076C;
	sub_8237E850(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A0774:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x8237e850
	ctx.lr = 0x823A0784;
	sub_8237E850(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A078C"))) PPC_WEAK_FUNC(sub_823A078C);
PPC_FUNC_IMPL(__imp__sub_823A078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0790"))) PPC_WEAK_FUNC(sub_823A0790);
PPC_FUNC_IMPL(__imp__sub_823A0790) {
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
	// bl 0x8235b1f8
	ctx.lr = 0x823A07AC;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x823A07B4;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a085c
	if (!ctx.cr6.eq) goto loc_823A085C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b998
	ctx.lr = 0x823A07C4;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a0828
	if (ctx.cr6.eq) goto loc_823A0828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b910
	ctx.lr = 0x823A07D4;
	sub_8235B910(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A07E8;
	sub_823AB100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b970
	ctx.lr = 0x823A07F0;
	sub_8235B970(ctx, base);
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x823a0814
	if (!ctx.cr6.eq) goto loc_823A0814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b910
	ctx.lr = 0x823A0800;
	sub_8235B910(ctx, base);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A0814;
	sub_823AB100(ctx, base);
loc_823A0814:
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bl 0x8235b9c8
	ctx.lr = 0x823A0824;
	sub_8235B9C8(ctx, base);
	// b 0x823a085c
	goto loc_823A085C;
loc_823A0828:
	// bl 0x8235bf58
	ctx.lr = 0x823A082C;
	sub_8235BF58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2972);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
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
	ctx.lr = 0x823A0854;
	sub_8235B5A8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
loc_823A085C:
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

__attribute__((alias("__imp__sub_823A0874"))) PPC_WEAK_FUNC(sub_823A0874);
PPC_FUNC_IMPL(__imp__sub_823A0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0878"))) PPC_WEAK_FUNC(sub_823A0878);
PPC_FUNC_IMPL(__imp__sub_823A0878) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A08A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a08b4
	if (!ctx.cr6.eq) goto loc_823A08B4;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_823A08B4:
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

__attribute__((alias("__imp__sub_823A08C8"))) PPC_WEAK_FUNC(sub_823A08C8);
PPC_FUNC_IMPL(__imp__sub_823A08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A08D0;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r28,r11,-27696
	ctx.r28.s64 = ctx.r11.s64 + -27696;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8235a518
	ctx.lr = 0x823A0900;
	sub_8235A518(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82356e70
	ctx.lr = 0x823A0908;
	sub_82356E70(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A0928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0998
	if (!ctx.cr6.eq) goto loc_823A0998;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A094C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A0968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A097C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A098C;
	sub_823AB100(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// b 0x823a09b8
	goto loc_823A09B8;
loc_823A0998:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82380458
	ctx.lr = 0x823A09A4;
	sub_82380458(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823805a0
	ctx.lr = 0x823A09B0;
	sub_823805A0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_823A09B8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82356eb8
	ctx.lr = 0x823A09C4;
	sub_82356EB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8235a538
	ctx.lr = 0x823A09CC;
	sub_8235A538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A09D4"))) PPC_WEAK_FUNC(sub_823A09D4);
PPC_FUNC_IMPL(__imp__sub_823A09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A09D8"))) PPC_WEAK_FUNC(sub_823A09D8);
PPC_FUNC_IMPL(__imp__sub_823A09D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A09E0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0abc
	if (!ctx.cr6.eq) goto loc_823A0ABC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28428
	ctx.r9.s64 = ctx.r11.s64 + -28428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A0A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0ab4
	if (!ctx.cr6.eq) goto loc_823A0AB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A0A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A0A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x823A0AA4;
	sub_823AB100(ctx, base);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r6,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A0AB4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_823A0ABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A0AC4"))) PPC_WEAK_FUNC(sub_823A0AC4);
PPC_FUNC_IMPL(__imp__sub_823A0AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0AC8"))) PPC_WEAK_FUNC(sub_823A0AC8);
PPC_FUNC_IMPL(__imp__sub_823A0AC8) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// bl 0x823584e0
	ctx.lr = 0x823A0B00;
	sub_823584E0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_823A0B38"))) PPC_WEAK_FUNC(sub_823A0B38);
PPC_FUNC_IMPL(__imp__sub_823A0B38) {
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
	ctx.lr = 0x823A0B58;
	sub_823570E0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823570f0
	ctx.lr = 0x823A0B60;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a0b74
	if (ctx.cr6.eq) goto loc_823A0B74;
	// bl 0x823a02f0
	ctx.lr = 0x823A0B6C;
	sub_823A02F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823a0b78
	goto loc_823A0B78;
loc_823A0B74:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A0B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A0B80;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a0b90
	if (!ctx.cr6.eq) goto loc_823A0B90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a0ba0
	goto loc_823A0BA0;
loc_823A0B90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0ac8
	ctx.lr = 0x823A0B9C;
	sub_823A0AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A0BA0:
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

__attribute__((alias("__imp__sub_823A0BB8"))) PPC_WEAK_FUNC(sub_823A0BB8);
PPC_FUNC_IMPL(__imp__sub_823A0BB8) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-27664
	ctx.r8.s64 = ctx.r11.s64 + -27664;
	// addi r7,r10,-27676
	ctx.r7.s64 = ctx.r10.s64 + -27676;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x823A0BFC;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a0c14
	if (ctx.cr6.eq) goto loc_823A0C14;
	// bl 0x82357128
	ctx.lr = 0x823A0C10;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A0C14:
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

__attribute__((alias("__imp__sub_823A0C2C"))) PPC_WEAK_FUNC(sub_823A0C2C);
PPC_FUNC_IMPL(__imp__sub_823A0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0C30"))) PPC_WEAK_FUNC(sub_823A0C30);
PPC_FUNC_IMPL(__imp__sub_823A0C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A0C38;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357c88
	ctx.lr = 0x823A0C50;
	sub_82357C88(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r27,r11,-27708
	ctx.r27.s64 = ctx.r11.s64 + -27708;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82358348
	ctx.lr = 0x823A0C78;
	sub_82358348(ctx, base);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x8235acb0
	ctx.lr = 0x823A0C94;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82357358
	ctx.lr = 0x823A0CA0;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823584e0
	ctx.lr = 0x823A0CAC;
	sub_823584E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823A0CB4;
	sub_823AC6B8(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82357d60
	ctx.lr = 0x823A0CC0;
	sub_82357D60(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82357c90
	ctx.lr = 0x823A0CCC;
	sub_82357C90(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x823A0CDC;
	sub_823AB0F8(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A0CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r6,32288
	ctx.r4.s64 = ctx.r6.s64 + 32288;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r5,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r5.u32);
	// bl 0x82358390
	ctx.lr = 0x823A0D3C;
	sub_82358390(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A0D44"))) PPC_WEAK_FUNC(sub_823A0D44);
PPC_FUNC_IMPL(__imp__sub_823A0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0D48"))) PPC_WEAK_FUNC(sub_823A0D48);
PPC_FUNC_IMPL(__imp__sub_823A0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A0D50;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-27688
	ctx.r9.s64 = ctx.r11.s64 + -27688;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x823A0D78;
	sub_823AB0F8(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A0D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r6,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// stw r7,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A0DC4"))) PPC_WEAK_FUNC(sub_823A0DC4);
PPC_FUNC_IMPL(__imp__sub_823A0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0DC8"))) PPC_WEAK_FUNC(sub_823A0DC8);
PPC_FUNC_IMPL(__imp__sub_823A0DC8) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x823a0ea8
	if (ctx.cr6.gt) goto loc_823A0EA8;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3588
	ctx.r12.s64 = ctx.r12.s64 + 3588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,3640(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3640);
	// lwz r17,3648(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3648);
	// lwz r17,3656(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3656);
	// lwz r17,3668(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3668);
	// lwz r17,3676(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3676);
	// lwz r17,3684(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3684);
	// lwz r17,3696(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3696);
	// lwz r17,3704(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3704);
	// lwz r17,3712(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3712);
	// lwz r17,3720(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3720);
	// lwz r17,3728(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3728);
	// lwz r17,3736(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3736);
	// lwz r17,3748(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3748);
	// bl 0x823a06b8
	ctx.lr = 0x823A0E3C;
	sub_823A06B8(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a0790
	ctx.lr = 0x823A0E44;
	sub_823A0790(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a01e0
	ctx.lr = 0x823A0E58;
	sub_823A01E0(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a0270
	ctx.lr = 0x823A0E60;
	sub_823A0270(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a0c30
	ctx.lr = 0x823A0E74;
	sub_823A0C30(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a0878
	ctx.lr = 0x823A0E7C;
	sub_823A0878(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a08c8
	ctx.lr = 0x823A0E84;
	sub_823A08C8(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a0d48
	ctx.lr = 0x823A0E8C;
	sub_823A0D48(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// bl 0x823a09d8
	ctx.lr = 0x823A0E94;
	sub_823A09D8(ctx, base);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x823a0ea8
	goto loc_823A0EA8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823A0EA8:
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

__attribute__((alias("__imp__sub_823A0EC0"))) PPC_WEAK_FUNC(sub_823A0EC0);
PPC_FUNC_IMPL(__imp__sub_823A0EC0) {
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
	// lwz r3,-4836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a0efc
	if (ctx.cr6.eq) goto loc_823A0EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4836, ctx.r11.u32);
loc_823A0EFC:
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

__attribute__((alias("__imp__sub_823A0F10"))) PPC_WEAK_FUNC(sub_823A0F10);
PPC_FUNC_IMPL(__imp__sub_823A0F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0F1C"))) PPC_WEAK_FUNC(sub_823A0F1C);
PPC_FUNC_IMPL(__imp__sub_823A0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0F20"))) PPC_WEAK_FUNC(sub_823A0F20);
PPC_FUNC_IMPL(__imp__sub_823A0F20) {
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
	// beq cr6,0x823a0f68
	if (ctx.cr6.eq) goto loc_823A0F68;
loc_823A0F44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a0f44
	if (!ctx.cr6.eq) goto loc_823A0F44;
loc_823A0F68:
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

__attribute__((alias("__imp__sub_823A0F90"))) PPC_WEAK_FUNC(sub_823A0F90);
PPC_FUNC_IMPL(__imp__sub_823A0F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A0FBC"))) PPC_WEAK_FUNC(sub_823A0FBC);
PPC_FUNC_IMPL(__imp__sub_823A0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0FC0"))) PPC_WEAK_FUNC(sub_823A0FC0);
PPC_FUNC_IMPL(__imp__sub_823A0FC0) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-27528
	ctx.r10.s64 = ctx.r11.s64 + -27528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A0FF0;
	sub_82356EB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a1008
	if (ctx.cr6.eq) goto loc_823A1008;
	// bl 0x82357128
	ctx.lr = 0x823A1004;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A1008:
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

__attribute__((alias("__imp__sub_823A1020"))) PPC_WEAK_FUNC(sub_823A1020);
PPC_FUNC_IMPL(__imp__sub_823A1020) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// b 0x82357038
	sub_82357038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1028"))) PPC_WEAK_FUNC(sub_823A1028);
PPC_FUNC_IMPL(__imp__sub_823A1028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1030"))) PPC_WEAK_FUNC(sub_823A1030);
PPC_FUNC_IMPL(__imp__sub_823A1030) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1038"))) PPC_WEAK_FUNC(sub_823A1038);
PPC_FUNC_IMPL(__imp__sub_823A1038) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1044"))) PPC_WEAK_FUNC(sub_823A1044);
PPC_FUNC_IMPL(__imp__sub_823A1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1048"))) PPC_WEAK_FUNC(sub_823A1048);
PPC_FUNC_IMPL(__imp__sub_823A1048) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1050"))) PPC_WEAK_FUNC(sub_823A1050);
PPC_FUNC_IMPL(__imp__sub_823A1050) {
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
	// bge cr6,0x823a10b0
	if (!ctx.cr6.lt) goto loc_823A10B0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a10b0
	if (ctx.cr6.eq) goto loc_823A10B0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a10a4
	if (!ctx.cr6.lt) goto loc_823A10A4;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358520
	ctx.lr = 0x823A10A4;
	sub_82358520(ctx, base);
loc_823A10A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A10B0:
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

__attribute__((alias("__imp__sub_823A10C4"))) PPC_WEAK_FUNC(sub_823A10C4);
PPC_FUNC_IMPL(__imp__sub_823A10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A10C8"))) PPC_WEAK_FUNC(sub_823A10C8);
PPC_FUNC_IMPL(__imp__sub_823A10C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A10D0;
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
	// beq cr6,0x823a1124
	if (ctx.cr6.eq) goto loc_823A1124;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a110c
	if (ctx.cr6.eq) goto loc_823A110C;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_823A110C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a1118
	if (ctx.cr6.eq) goto loc_823A1118;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
loc_823A1118:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823A1124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A112C"))) PPC_WEAK_FUNC(sub_823A112C);
PPC_FUNC_IMPL(__imp__sub_823A112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1130"))) PPC_WEAK_FUNC(sub_823A1130);
PPC_FUNC_IMPL(__imp__sub_823A1130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A1138;
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
	// bne cr6,0x823a1150
	if (!ctx.cr6.eq) goto loc_823A1150;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823A1150:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823a1168
	if (!ctx.cr0.eq) goto loc_823A1168;
loc_823A115C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A1168:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823A1170;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x823A1180;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A118C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a115c
	if (ctx.cr6.eq) goto loc_823A115C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823A11A0;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a11d4
	if (ctx.cr6.eq) goto loc_823A11D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x823A11BC;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a11d4
	if (ctx.cr6.eq) goto loc_823A11D4;
	// bl 0x82357240
	ctx.lr = 0x823A11CC;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A11D4:
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

__attribute__((alias("__imp__sub_823A11E8"))) PPC_WEAK_FUNC(sub_823A11E8);
PPC_FUNC_IMPL(__imp__sub_823A11E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a122c
	if (!ctx.cr6.gt) goto loc_823A122C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a122c
	if (ctx.cr6.eq) goto loc_823A122C;
loc_823A1204:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a1224
	if (ctx.cr6.eq) goto loc_823A1224;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1204
	if (!ctx.cr6.eq) goto loc_823A1204;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A1224:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1234
	if (!ctx.cr6.eq) goto loc_823A1234;
loc_823A122C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A1234:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A123C"))) PPC_WEAK_FUNC(sub_823A123C);
PPC_FUNC_IMPL(__imp__sub_823A123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1240"))) PPC_WEAK_FUNC(sub_823A1240);
PPC_FUNC_IMPL(__imp__sub_823A1240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a1274
	if (!ctx.cr6.gt) goto loc_823A1274;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1274
	if (ctx.cr6.eq) goto loc_823A1274;
loc_823A125C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a1280
	if (ctx.cr6.eq) goto loc_823A1280;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a125c
	if (!ctx.cr6.eq) goto loc_823A125C;
loc_823A1274:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r3,20(0)
	ctx.r3.u64 = PPC_LOAD_U8(20);
	// blr 
	return;
loc_823A1280:
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1288"))) PPC_WEAK_FUNC(sub_823A1288);
PPC_FUNC_IMPL(__imp__sub_823A1288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a12bc
	if (!ctx.cr6.gt) goto loc_823A12BC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a12bc
	if (ctx.cr6.eq) goto loc_823A12BC;
loc_823A12A4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a12c0
	if (ctx.cr6.eq) goto loc_823A12C0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a12a4
	if (!ctx.cr6.eq) goto loc_823A12A4;
loc_823A12BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A12C0:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A12C8"))) PPC_WEAK_FUNC(sub_823A12C8);
PPC_FUNC_IMPL(__imp__sub_823A12C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a12fc
	if (!ctx.cr6.gt) goto loc_823A12FC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a12fc
	if (ctx.cr6.eq) goto loc_823A12FC;
loc_823A12E4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a1308
	if (ctx.cr6.eq) goto loc_823A1308;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a12e4
	if (!ctx.cr6.eq) goto loc_823A12E4;
loc_823A12FC:
	// stw r5,40(0)
	PPC_STORE_U32(40, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// blr 
	return;
loc_823A1308:
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1310"))) PPC_WEAK_FUNC(sub_823A1310);
PPC_FUNC_IMPL(__imp__sub_823A1310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a1354
	if (!ctx.cr6.gt) goto loc_823A1354;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1354
	if (ctx.cr6.eq) goto loc_823A1354;
loc_823A132C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a134c
	if (ctx.cr6.eq) goto loc_823A134C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a132c
	if (!ctx.cr6.eq) goto loc_823A132C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A134C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a135c
	if (!ctx.cr6.eq) goto loc_823A135C;
loc_823A1354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A135C:
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1364"))) PPC_WEAK_FUNC(sub_823A1364);
PPC_FUNC_IMPL(__imp__sub_823A1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1368"))) PPC_WEAK_FUNC(sub_823A1368);
PPC_FUNC_IMPL(__imp__sub_823A1368) {
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
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a13b0
	if (ctx.cr6.eq) goto loc_823A13B0;
loc_823A138C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82357048
	ctx.lr = 0x823A13A0;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a13cc
	if (!ctx.cr6.eq) goto loc_823A13CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a138c
	if (!ctx.cr6.eq) goto loc_823A138C;
loc_823A13B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A13B4:
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
loc_823A13CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823a13b4
	goto loc_823A13B4;
}

__attribute__((alias("__imp__sub_823A13D4"))) PPC_WEAK_FUNC(sub_823A13D4);
PPC_FUNC_IMPL(__imp__sub_823A13D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A13D8"))) PPC_WEAK_FUNC(sub_823A13D8);
PPC_FUNC_IMPL(__imp__sub_823A13D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A13E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a145c
	if (!ctx.cr6.gt) goto loc_823A145C;
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
loc_823A1400:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x823a1434
	if (!ctx.cr6.gt) goto loc_823A1434;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1434
	if (ctx.cr6.eq) goto loc_823A1434;
loc_823A141C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823a1438
	if (ctx.cr6.eq) goto loc_823A1438;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a141c
	if (!ctx.cr6.eq) goto loc_823A141C;
loc_823A1434:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A1438:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82357048
	ctx.lr = 0x823A1444;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a145c
	if (!ctx.cr6.eq) goto loc_823A145C;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a1400
	if (ctx.cr6.lt) goto loc_823A1400;
loc_823A145C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A1468"))) PPC_WEAK_FUNC(sub_823A1468);
PPC_FUNC_IMPL(__imp__sub_823A1468) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a149c
	if (ctx.cr6.eq) goto loc_823A149C;
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A1480:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a14a4
	if (ctx.cr6.eq) goto loc_823A14A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a1480
	if (ctx.cr6.lt) goto loc_823A1480;
loc_823A149C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A14A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A14AC"))) PPC_WEAK_FUNC(sub_823A14AC);
PPC_FUNC_IMPL(__imp__sub_823A14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A14B0"))) PPC_WEAK_FUNC(sub_823A14B0);
PPC_FUNC_IMPL(__imp__sub_823A14B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823a14d4
	if (!ctx.cr6.gt) goto loc_823A14D4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_823A14D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A14DC"))) PPC_WEAK_FUNC(sub_823A14DC);
PPC_FUNC_IMPL(__imp__sub_823A14DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A14E0"))) PPC_WEAK_FUNC(sub_823A14E0);
PPC_FUNC_IMPL(__imp__sub_823A14E0) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823a150c
	if (ctx.cr6.gt) goto loc_823A150C;
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
loc_823A150C:
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x823a1050
	ctx.lr = 0x823A1514;
	sub_823A1050(ctx, base);
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

__attribute__((alias("__imp__sub_823A1528"))) PPC_WEAK_FUNC(sub_823A1528);
PPC_FUNC_IMPL(__imp__sub_823A1528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823a153c
	if (ctx.cr6.gt) goto loc_823A153C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A153C:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// ldx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1554"))) PPC_WEAK_FUNC(sub_823A1554);
PPC_FUNC_IMPL(__imp__sub_823A1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1558"))) PPC_WEAK_FUNC(sub_823A1558);
PPC_FUNC_IMPL(__imp__sub_823A1558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A1560;
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
	// bgt cr6,0x823a159c
	if (ctx.cr6.gt) goto loc_823A159C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a1130
	ctx.lr = 0x823A1588;
	sub_823A1130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a159c
	if (!ctx.cr6.eq) goto loc_823A159C;
loc_823A1590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A159C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1590
	if (ctx.cr6.eq) goto loc_823A1590;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A15CC"))) PPC_WEAK_FUNC(sub_823A15CC);
PPC_FUNC_IMPL(__imp__sub_823A15CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A15D0"))) PPC_WEAK_FUNC(sub_823A15D0);
PPC_FUNC_IMPL(__imp__sub_823A15D0) {
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
	// beq cr6,0x823a1620
	if (ctx.cr6.eq) goto loc_823A1620;
	// lwz r30,48(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// bl 0x823a10c8
	ctx.lr = 0x823A15FC;
	sub_823A10C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a161c
	if (!ctx.cr6.eq) goto loc_823A161C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a161c
	if (!ctx.cr6.eq) goto loc_823A161C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A161C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823A1620:
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

__attribute__((alias("__imp__sub_823A1638"))) PPC_WEAK_FUNC(sub_823A1638);
PPC_FUNC_IMPL(__imp__sub_823A1638) {
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
	// beq cr6,0x823a1688
	if (ctx.cr6.eq) goto loc_823A1688;
	// lwz r30,52(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// bl 0x823a10c8
	ctx.lr = 0x823A1664;
	sub_823A10C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a1684
	if (!ctx.cr6.eq) goto loc_823A1684;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a1684
	if (!ctx.cr6.eq) goto loc_823A1684;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A1684:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823A1688:
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

__attribute__((alias("__imp__sub_823A16A0"))) PPC_WEAK_FUNC(sub_823A16A0);
PPC_FUNC_IMPL(__imp__sub_823A16A0) {
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
	// bl 0x823a40b8
	ctx.lr = 0x823A16B8;
	sub_823A40B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27520
	ctx.r8.s64 = ctx.r10.s64 + -27520;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// bl 0x82356e70
	ctx.lr = 0x823A172C;
	sub_82356E70(ctx, base);
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

__attribute__((alias("__imp__sub_823A1744"))) PPC_WEAK_FUNC(sub_823A1744);
PPC_FUNC_IMPL(__imp__sub_823A1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1748"))) PPC_WEAK_FUNC(sub_823A1748);
PPC_FUNC_IMPL(__imp__sub_823A1748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A1750;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// addi r10,r11,-27520
	ctx.r10.s64 = ctx.r11.s64 + -27520;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A176C;
	sub_82356EB8(ctx, base);
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,84
	ctx.r30.s64 = ctx.r28.s64 + 84;
	// stw r31,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a178c
	if (ctx.cr6.eq) goto loc_823A178C;
	// bl 0x82357240
	ctx.lr = 0x823A1788;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823A178C:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,64
	ctx.r29.s64 = ctx.r28.s64 + 64;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r31.u32);
	// beq cr6,0x823a17b0
	if (ctx.cr6.eq) goto loc_823A17B0;
	// bl 0x82357240
	ctx.lr = 0x823A17AC;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823A17B0:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r28,44
	ctx.r3.s64 = ctx.r28.s64 + 44;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x823a0f20
	ctx.lr = 0x823A17C0;
	sub_823A0F20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237dcc8
	ctx.lr = 0x823A17C8;
	sub_8237DCC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A17D0"))) PPC_WEAK_FUNC(sub_823A17D0);
PPC_FUNC_IMPL(__imp__sub_823A17D0) {
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
	// lwz r3,-4836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a1828
	if (!ctx.cr6.eq) goto loc_823A1828;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A17F8;
	sub_823570E0(ctx, base);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x823570f0
	ctx.lr = 0x823A1800;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1814
	if (ctx.cr6.eq) goto loc_823A1814;
	// bl 0x823a16a0
	ctx.lr = 0x823A180C;
	sub_823A16A0(ctx, base);
	// stw r3,-4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4836, ctx.r3.u32);
	// b 0x823a181c
	goto loc_823A181C;
loc_823A1814:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4836, ctx.r11.u32);
loc_823A181C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A1824;
	sub_823570E0(ctx, base);
	// lwz r3,-4836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4836);
loc_823A1828:
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

__attribute__((alias("__imp__sub_823A183C"))) PPC_WEAK_FUNC(sub_823A183C);
PPC_FUNC_IMPL(__imp__sub_823A183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1840"))) PPC_WEAK_FUNC(sub_823A1840);
PPC_FUNC_IMPL(__imp__sub_823A1840) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82224948
	ctx.lr = 0x823A185C;
	sub_82224948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A186C"))) PPC_WEAK_FUNC(sub_823A186C);
PPC_FUNC_IMPL(__imp__sub_823A186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1870"))) PPC_WEAK_FUNC(sub_823A1870);
PPC_FUNC_IMPL(__imp__sub_823A1870) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x823a1558
	ctx.lr = 0x823A188C;
	sub_823A1558(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A189C"))) PPC_WEAK_FUNC(sub_823A189C);
PPC_FUNC_IMPL(__imp__sub_823A189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A18A0"))) PPC_WEAK_FUNC(sub_823A18A0);
PPC_FUNC_IMPL(__imp__sub_823A18A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A18A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-27516
	ctx.r9.s64 = ctx.r11.s64 + -27516;
	// addi r8,r10,-27528
	ctx.r8.s64 = ctx.r10.s64 + -27528;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r7,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r7.u8);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A18EC;
	sub_82356E70(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r5,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r5.u8);
	// bl 0x82357038
	ctx.lr = 0x823A190C;
	sub_82357038(ctx, base);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A1928"))) PPC_WEAK_FUNC(sub_823A1928);
PPC_FUNC_IMPL(__imp__sub_823A1928) {
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
	// addi r9,r11,-27516
	ctx.r9.s64 = ctx.r11.s64 + -27516;
	// addi r8,r10,-27528
	ctx.r8.s64 = ctx.r10.s64 + -27528;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A1968;
	sub_82356EB8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a1980
	if (ctx.cr6.eq) goto loc_823A1980;
	// bl 0x82357128
	ctx.lr = 0x823A197C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A1980:
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

__attribute__((alias("__imp__sub_823A1998"))) PPC_WEAK_FUNC(sub_823A1998);
PPC_FUNC_IMPL(__imp__sub_823A1998) {
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
	// bl 0x823a1748
	ctx.lr = 0x823A19B8;
	sub_823A1748(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a19d0
	if (ctx.cr6.eq) goto loc_823A19D0;
	// bl 0x82357128
	ctx.lr = 0x823A19CC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A19D0:
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

__attribute__((alias("__imp__sub_823A19E8"))) PPC_WEAK_FUNC(sub_823A19E8);
PPC_FUNC_IMPL(__imp__sub_823A19E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A19F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a1a70
	if (ctx.cr6.eq) goto loc_823A1A70;
loc_823A1A08:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82357048
	ctx.lr = 0x823A1A1C;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a1a34
	if (!ctx.cr6.eq) goto loc_823A1A34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a1a08
	if (!ctx.cr6.eq) goto loc_823A1A08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A1A34:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r3,r28,44
	ctx.r3.s64 = ctx.r28.s64 + 44;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a1a50
	if (!ctx.cr6.eq) goto loc_823A1A50;
	// bl 0x823a15d0
	ctx.lr = 0x823A1A48;
	sub_823A15D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A1A50:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a1a68
	if (!ctx.cr6.eq) goto loc_823A1A68;
	// bl 0x823a1638
	ctx.lr = 0x823A1A60;
	sub_823A1638(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A1A68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a10c8
	ctx.lr = 0x823A1A70;
	sub_823A10C8(ctx, base);
loc_823A1A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A1A78"))) PPC_WEAK_FUNC(sub_823A1A78);
PPC_FUNC_IMPL(__imp__sub_823A1A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823A1A80;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a1c04
	if (ctx.cr6.eq) goto loc_823A1C04;
	// li r24,0
	ctx.r24.s64 = 0;
loc_823A1A9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r27,48
	ctx.r10.s64 = ctx.r27.s64 + 48;
	// lwz r27,48(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x823a1bfc
	if (!ctx.cr6.eq) goto loc_823A1BFC;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r29,r26,44
	ctx.r29.s64 = ctx.r26.s64 + 44;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a1b3c
	if (!ctx.cr6.eq) goto loc_823A1B3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1bfc
	if (ctx.cr6.eq) goto loc_823A1BFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A1AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a1b00
	if (ctx.cr6.eq) goto loc_823A1B00;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_823A1B00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a1b0c
	if (ctx.cr6.eq) goto loc_823A1B0C;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
loc_823A1B0C:
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
	// bne cr6,0x823a1b34
	if (!ctx.cr6.eq) goto loc_823A1B34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823a1b34
	if (!ctx.cr6.eq) goto loc_823A1B34;
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
loc_823A1B34:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// b 0x823a1bfc
	goto loc_823A1BFC;
loc_823A1B3C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a1bbc
	if (!ctx.cr6.eq) goto loc_823A1BBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1bfc
	if (ctx.cr6.eq) goto loc_823A1BFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A1B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a1b80
	if (ctx.cr6.eq) goto loc_823A1B80;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
loc_823A1B80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a1b8c
	if (ctx.cr6.eq) goto loc_823A1B8C;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
loc_823A1B8C:
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
	// bne cr6,0x823a1bb4
	if (!ctx.cr6.eq) goto loc_823A1BB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823a1bb4
	if (!ctx.cr6.eq) goto loc_823A1BB4;
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
loc_823A1BB4:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// b 0x823a1bfc
	goto loc_823A1BFC;
loc_823A1BBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a1be4
	if (ctx.cr6.eq) goto loc_823A1BE4;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_823A1BE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a1bf0
	if (ctx.cr6.eq) goto loc_823A1BF0;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
loc_823A1BF0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823A1BFC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823a1a9c
	if (!ctx.cr6.eq) goto loc_823A1A9C;
loc_823A1C04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823A1C0C"))) PPC_WEAK_FUNC(sub_823A1C0C);
PPC_FUNC_IMPL(__imp__sub_823A1C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1C10"))) PPC_WEAK_FUNC(sub_823A1C10);
PPC_FUNC_IMPL(__imp__sub_823A1C10) {
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
	// bl 0x823570e0
	ctx.lr = 0x823A1C34;
	sub_823570E0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x823570f0
	ctx.lr = 0x823A1C3C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1c54
	if (ctx.cr6.eq) goto loc_823A1C54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a18a0
	ctx.lr = 0x823A1C4C;
	sub_823A18A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823a1c58
	goto loc_823A1C58;
loc_823A1C54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A1C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A1C60;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a1c70
	if (!ctx.cr6.eq) goto loc_823A1C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a1c80
	goto loc_823A1C80;
loc_823A1C70:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_823A1C80:
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

__attribute__((alias("__imp__sub_823A1C98"))) PPC_WEAK_FUNC(sub_823A1C98);
PPC_FUNC_IMPL(__imp__sub_823A1C98) {
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
	// bl 0x823a1c10
	ctx.lr = 0x823A1CB0;
	sub_823A1C10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a1ccc
	if (!ctx.cr6.eq) goto loc_823A1CCC;
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
loc_823A1CCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1ce4
	if (ctx.cr6.eq) goto loc_823A1CE4;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
loc_823A1CE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1cf8
	if (!ctx.cr6.eq) goto loc_823A1CF8;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823A1CF8:
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

__attribute__((alias("__imp__sub_823A1D10"))) PPC_WEAK_FUNC(sub_823A1D10);
PPC_FUNC_IMPL(__imp__sub_823A1D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A1D18;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x823a1368
	ctx.lr = 0x823A1D34;
	sub_823A1368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a1d98
	if (!ctx.cr6.eq) goto loc_823A1D98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,-27528
	ctx.r31.s64 = ctx.r11.s64 + -27528;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// bl 0x82356e70
	ctx.lr = 0x823A1D60;
	sub_82356E70(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357038
	ctx.lr = 0x823A1D78;
	sub_82357038(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x823a1c98
	ctx.lr = 0x823A1D84;
	sub_823A1C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x823a1da4
	if (!ctx.cr6.eq) goto loc_823A1DA4;
	// bl 0x82356eb8
	ctx.lr = 0x823A1D98;
	sub_82356EB8(ctx, base);
loc_823A1D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A1DA4:
	// bl 0x82356eb8
	ctx.lr = 0x823A1DA8;
	sub_82356EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A1DB4"))) PPC_WEAK_FUNC(sub_823A1DB4);
PPC_FUNC_IMPL(__imp__sub_823A1DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

