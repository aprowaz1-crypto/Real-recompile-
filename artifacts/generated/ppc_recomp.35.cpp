#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821990D8"))) PPC_WEAK_FUNC(sub_821990D8);
PPC_FUNC_IMPL(__imp__sub_821990D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821990E0;
	sub_82248780(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,6144
	ctx.r3.s64 = 6144;
	// bl 0x82184710
	ctx.lr = 0x821990FC;
	sub_82184710(ctx, base);
	// li r4,6144
	ctx.r4.s64 = 6144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82199108;
	sub_822AA648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c310
	ctx.lr = 0x82199110;
	sub_8219C310(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219bef0
	ctx.lr = 0x8219912C;
	sub_8219BEF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82199160
	if (ctx.cr6.eq) goto loc_82199160;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,30596
	ctx.r4.s64 = ctx.r11.s64 + 30596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209eda0
	ctx.lr = 0x8219914C;
	sub_8209EDA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c280
	ctx.lr = 0x82199154;
	sub_8219C280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82199160:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c1f8
	ctx.lr = 0x8219916C;
	sub_8219C1F8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r10,r29,2047
	ctx.r10.s64 = ctx.r29.s64 + 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x8219c100
	ctx.lr = 0x82199190;
	sub_8219C100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821991cc
	if (ctx.cr6.eq) goto loc_821991CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,30560
	ctx.r4.s64 = ctx.r11.s64 + 30560;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209eda0
	ctx.lr = 0x821991B0;
	sub_8209EDA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219bff8
	ctx.lr = 0x821991B8;
	sub_8219BFF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c280
	ctx.lr = 0x821991C0;
	sub_8219C280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821991CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219bff8
	ctx.lr = 0x821991D4;
	sub_8219BFF8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stbx r30,r29,r26
	PPC_STORE_U8(ctx.r29.u32 + ctx.r26.u32, ctx.r30.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8219924c
	if (ctx.cr6.eq) goto loc_8219924C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
loc_821991F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82189c18
	ctx.lr = 0x821991F8;
	sub_82189C18(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r3,-64
	ctx.r11.s64 = ctx.r3.s64 + -64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82199210:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82199210
	if (!ctx.cr6.eq) goto loc_82199210;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219924c
	if (ctx.cr6.eq) goto loc_8219924C;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// subf. r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r28,r27
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r11.u32);
	// bne 0x821991f0
	if (!ctx.cr0.eq) goto loc_821991F0;
loc_8219924C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x82199258;
	sub_82183E40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c280
	ctx.lr = 0x82199260;
	sub_8219C280(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8219926C"))) PPC_WEAK_FUNC(sub_8219926C);
PPC_FUNC_IMPL(__imp__sub_8219926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199270"))) PPC_WEAK_FUNC(sub_82199270);
PPC_FUNC_IMPL(__imp__sub_82199270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82199278;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82199298
	if (!ctx.cr6.eq) goto loc_82199298;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82199298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821992A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x821987e0
	ctx.lr = 0x821992B8;
	sub_821987E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821992C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821992D0"))) PPC_WEAK_FUNC(sub_821992D0);
PPC_FUNC_IMPL(__imp__sub_821992D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821992D8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x821992fc
	if (!ctx.cr6.eq) goto loc_821992FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821992FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199304;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x821986e8
	ctx.lr = 0x8219931C;
	sub_821986E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82198660
	ctx.lr = 0x8219932C;
	sub_82198660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199334;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82199348"))) PPC_WEAK_FUNC(sub_82199348);
PPC_FUNC_IMPL(__imp__sub_82199348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82183850
	ctx.lr = 0x82199368;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82199384
	if (ctx.cr6.eq) goto loc_82199384;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32772
	ctx.r3.u64 = ctx.r3.u64 | 32772;
	// bl 0x82183448
	ctx.lr = 0x82199380;
	sub_82183448(ctx, base);
	// b 0x8219938c
	goto loc_8219938C;
loc_82199384:
	// li r3,2049
	ctx.r3.s64 = 2049;
	// bl 0x821845a0
	ctx.lr = 0x8219938C;
	sub_821845A0(ctx, base);
loc_8219938C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821993a8
	if (ctx.cr6.eq) goto loc_821993A8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stwx r9,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x821993ac
	goto loc_821993AC;
loc_821993A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821993AC:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821990d8
	ctx.lr = 0x821993B8;
	sub_821990D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821993D0"))) PPC_WEAK_FUNC(sub_821993D0);
PPC_FUNC_IMPL(__imp__sub_821993D0) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821993f8
	if (ctx.cr6.eq) goto loc_821993F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821993F8;
	sub_82183E40(ctx, base);
loc_821993F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82199414"))) PPC_WEAK_FUNC(sub_82199414);
PPC_FUNC_IMPL(__imp__sub_82199414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199418"))) PPC_WEAK_FUNC(sub_82199418);
PPC_FUNC_IMPL(__imp__sub_82199418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82199420;
	sub_82248760(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r23,-32178
	ctx.r23.s64 = -2108817408;
	// addi r19,r9,3708
	ctx.r19.s64 = ctx.r9.s64 + 3708;
	// addi r20,r10,3700
	ctx.r20.s64 = ctx.r10.s64 + 3700;
	// addi r21,r11,-11500
	ctx.r21.s64 = ctx.r11.s64 + -11500;
loc_82199460:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219956c
	if (!ctx.cr6.eq) goto loc_8219956C;
	// subf. r28,r25,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82199558
	if (ctx.cr0.eq) goto loc_82199558;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82199480:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82199480
	if (!ctx.cr6.eq) goto loc_82199480;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82189b48
	ctx.lr = 0x821994A8;
	sub_82189B48(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821994e0
	if (ctx.cr6.eq) goto loc_821994E0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821994d4
	if (ctx.cr6.eq) goto loc_821994D4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821994D0;
	sub_8218A5F0(ctx, base);
	// b 0x821994e0
	goto loc_821994E0;
loc_821994D4:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821994E0;
	sub_8218A5F0(ctx, base);
loc_821994E0:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821994EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r22,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r22.u32);
	// lwz r3,-19236(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -19236);
	// lwz r30,72(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8219c558
	ctx.lr = 0x821994FC;
	sub_8219C558(ctx, base);
	// stw r27,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r27.u32);
	// stw r28,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r28.u32);
	// stw r26,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r26.u32);
	// stw r26,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199530
	if (ctx.cr6.eq) goto loc_82199530;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r3.u32);
	// b 0x82199538
	goto loc_82199538;
loc_82199530:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r3,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r3.u32);
loc_82199538:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82198660
	ctx.lr = 0x82199548;
	sub_82198660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199550;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
loc_82199558:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82199584
	if (ctx.cr6.eq) goto loc_82199584;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8219956C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82199460
	goto loc_82199460;
loc_82199584:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_8219958C"))) PPC_WEAK_FUNC(sub_8219958C);
PPC_FUNC_IMPL(__imp__sub_8219958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199590"))) PPC_WEAK_FUNC(sub_82199590);
PPC_FUNC_IMPL(__imp__sub_82199590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,30632
	ctx.r10.s64 = ctx.r11.s64 + 30632;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821995c8
	if (ctx.cr6.eq) goto loc_821995C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821995C8;
	sub_82183E40(ctx, base);
loc_821995C8:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x8219c3e8
	ctx.lr = 0x821995D4;
	sub_8219C3E8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821995f0
	if (ctx.cr6.eq) goto loc_821995F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821995EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_821995F0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82199600
	if (ctx.cr6.eq) goto loc_82199600;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82199600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82199618"))) PPC_WEAK_FUNC(sub_82199618);
PPC_FUNC_IMPL(__imp__sub_82199618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82199928
	if (!ctx.cr6.lt) goto loc_82199928;
	// li r7,12
	ctx.r7.s64 = 12;
loc_82199630:
	// lbz r6,11(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stb r6,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r6.u8);
	// stb r5,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r5.u8);
	// stb r3,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r3.u8);
	// stb r31,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r31.u8);
	// lwz r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r6.u8);
	// stb r8,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r8.u8);
	// stb r3,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r3.u8);
	// stb r5,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r5.u8);
loc_8219968C:
	// rotlwi r10,r10,31
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 31);
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bdnz 0x8219968c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219968C;
	// lwz r10,-44(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r8,8
	ctx.r8.s64 = 8;
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r5,r5,20,0,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFF00000;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_821996B4:
	// rotlwi r8,r8,31
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 31);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bdnz 0x821996b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821996B4;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r3,r10,1,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x10000;
	// rlwinm r6,r6,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// or r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 | ctx.r5.u64;
loc_821996E8:
	// rotlwi r8,r8,31
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 31);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bdnz 0x821996e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821996E8;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r5,r9,12,4,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF000;
	// li r9,0
	ctx.r9.s64 = 0;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_82199710:
	// rotlwi r8,r8,31
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 31);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bdnz 0x82199710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199710;
	// clrlwi r5,r9,20
	ctx.r5.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// li r9,16
	ctx.r9.s64 = 16;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219973C:
	// rotlwi r10,r10,31
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 31);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x8219973c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219973C;
	// li r10,0
	ctx.r10.s64 = 0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821997ec
	if (ctx.cr6.eq) goto loc_821997EC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r10,r10,14,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82199920
	if (!ctx.cr6.lt) goto loc_82199920;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82199790:
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,-40(r1)
	PPC_STORE_U8(ctx.r1.u32 + -40, ctx.r9.u8);
	// stb r8,-39(r1)
	PPC_STORE_U8(ctx.r1.u32 + -39, ctx.r8.u8);
	// stb r6,-38(r1)
	PPC_STORE_U8(ctx.r1.u32 + -38, ctx.r6.u8);
	// stb r5,-37(r1)
	PPC_STORE_U8(ctx.r1.u32 + -37, ctx.r5.u8);
	// lwz r3,-40(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r6,9(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r5,11(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r9,-33(r1)
	PPC_STORE_U8(ctx.r1.u32 + -33, ctx.r9.u8);
	// stb r5,-36(r1)
	PPC_STORE_U8(ctx.r1.u32 + -36, ctx.r5.u8);
	// stb r6,-34(r1)
	PPC_STORE_U8(ctx.r1.u32 + -34, ctx.r6.u8);
	// stb r8,-35(r1)
	PPC_STORE_U8(ctx.r1.u32 + -35, ctx.r8.u8);
	// lwz r3,-36(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// stwu r3,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82199790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199790;
	// b 0x82199920
	goto loc_82199920;
loc_821997EC:
	// rlwinm r9,r10,0,16,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82199888
	if (!ctx.cr6.eq) goto loc_82199888;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r10,r10,14,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82199888
	if (!ctx.cr6.lt) goto loc_82199888;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r7
	ctx.r10.u32 = ctx.r10.u32 / ctx.r7.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82199834:
	// lbz r10,11(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// lbz r8,10(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// lbz r6,9(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// lbz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// stb r10,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// stb r8,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r8.u8);
	// stb r6,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r6.u8);
	// stb r5,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r5.u8);
	// lwz r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// lbz r6,13(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// lbz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r5,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r5.u8);
	// lbz r10,15(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// stb r8,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r8.u8);
	// stb r6,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r6.u8);
	// stb r10,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r10.u8);
	// lwz r3,-28(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stwu r3,12(r9)
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82199834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199834;
loc_82199888:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,16,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r9,4096
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4096, ctx.xer);
	// bne cr6,0x82199920
	if (!ctx.cr6.eq) goto loc_82199920;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r10,r10,14,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82199920
	if (!ctx.cr6.lt) goto loc_82199920;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821998CC:
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// lbz r5,13(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r9,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r9.u8);
	// stb r8,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r8.u8);
	// stb r5,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r5.u8);
	// stb r6,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r6.u8);
	// lwz r3,-24(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lbz r6,17(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r9,19(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// lbz r8,18(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// stb r8,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r8.u8);
	// stb r9,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r9.u8);
	// stb r6,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r6.u8);
	// stb r5,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r5.u8);
	// lwz r3,-20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stwu r3,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821998cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821998CC;
loc_82199920:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82199630
	if (ctx.cr6.lt) goto loc_82199630;
loc_82199928:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82199930"))) PPC_WEAK_FUNC(sub_82199930);
PPC_FUNC_IMPL(__imp__sub_82199930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82199938;
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
	ctx.lr = 0x82199958;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,30632
	ctx.r10.s64 = ctx.r11.s64 + 30632;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8219c5a8
	ctx.lr = 0x821999AC;
	sub_8219C5A8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821999B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821999c8
	if (ctx.cr6.eq) goto loc_821999C8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x821999C4;
	sub_82183448(ctx, base);
	// b 0x821999d0
	goto loc_821999D0;
loc_821999C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821999D0;
	sub_821845A0(ctx, base);
loc_821999D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82199a04
	if (ctx.cr6.eq) goto loc_82199A04;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82199A04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82199A1C"))) PPC_WEAK_FUNC(sub_82199A1C);
PPC_FUNC_IMPL(__imp__sub_82199A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199A20"))) PPC_WEAK_FUNC(sub_82199A20);
PPC_FUNC_IMPL(__imp__sub_82199A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82199590
	ctx.lr = 0x82199A40;
	sub_82199590(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199a5c
	if (ctx.cr6.eq) goto loc_82199A5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82199A58;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82199A5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82199A74"))) PPC_WEAK_FUNC(sub_82199A74);
PPC_FUNC_IMPL(__imp__sub_82199A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199A78"))) PPC_WEAK_FUNC(sub_82199A78);
PPC_FUNC_IMPL(__imp__sub_82199A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82199A80;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82199aa4
	if (!ctx.cr6.eq) goto loc_82199AA4;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_82199AA4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199AAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r10,-11500
	ctx.r4.s64 = ctx.r10.s64 + -11500;
	// bl 0x8224a7b8
	ctx.lr = 0x82199AC4;
	sub_8224A7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82199ae4
	if (!ctx.cr6.eq) goto loc_82199AE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-11508
	ctx.r4.s64 = ctx.r11.s64 + -11508;
	// bl 0x8224a7b8
	ctx.lr = 0x82199ADC;
	sub_8224A7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82199ccc
	if (ctx.cr6.eq) goto loc_82199CCC;
loc_82199AE4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82199AE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82199ae8
	if (!ctx.cr6.eq) goto loc_82199AE8;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r8,30636
	ctx.r4.s64 = ctx.r8.s64 + 30636;
	// subfc r6,r10,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82199B24;
	sub_8209EDA0(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x82182e90
	ctx.lr = 0x82199B34;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82199B3C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82199B48;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,14400
	ctx.r3.s64 = 14400;
	// bl 0x82184710
	ctx.lr = 0x82199B58;
	sub_82184710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82199B64;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82199bd0
	if (!ctx.cr6.eq) goto loc_82199BD0;
	// addi r11,r27,63
	ctx.r11.s64 = ctx.r27.s64 + 63;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r30,r11,0,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// bl 0x8218f128
	ctx.lr = 0x82199B84;
	sub_8218F128(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82199bb8
	if (!ctx.cr6.eq) goto loc_82199BB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82199ccc
	if (ctx.cr6.eq) goto loc_82199CCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x82199BA4;
	sub_82183E40(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199BAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r23,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82199BB8:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218f248
	ctx.lr = 0x82199BC8;
	sub_8218F248(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218f310
	ctx.lr = 0x82199BD0;
	sub_8218F310(ctx, base);
loc_82199BD0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r30,2048
	ctx.r29.s64 = ctx.r30.s64 + 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82199618
	ctx.lr = 0x82199C10;
	sub_82199618(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198c68
	ctx.lr = 0x82199C20;
	sub_82198C68(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r26,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r26.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82199C7C;
	sub_82087AB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82198768
	ctx.lr = 0x82199C8C;
	sub_82198768(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82199cc0
	if (ctx.cr6.eq) goto loc_82199CC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x82199CC0;
	sub_82183E40(ctx, base);
loc_82199CC0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82198660
	ctx.lr = 0x82199CCC;
	sub_82198660(ctx, base);
loc_82199CCC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199CD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r23,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82199CE0"))) PPC_WEAK_FUNC(sub_82199CE0);
PPC_FUNC_IMPL(__imp__sub_82199CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82199CE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x82199d00
	if (!ctx.cr6.eq) goto loc_82199D00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82199D00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199D08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199d50
	if (ctx.cr6.eq) goto loc_82199D50;
loc_82199D20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// bne cr6,0x82199d48
	if (!ctx.cr6.eq) goto loc_82199D48;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82199d48
	if (ctx.cr6.eq) goto loc_82199D48;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82199D48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82199d20
	if (!ctx.cr6.eq) goto loc_82199D20;
loc_82199D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199D58;
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

__attribute__((alias("__imp__sub_82199D6C"))) PPC_WEAK_FUNC(sub_82199D6C);
PPC_FUNC_IMPL(__imp__sub_82199D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199D70"))) PPC_WEAK_FUNC(sub_82199D70);
PPC_FUNC_IMPL(__imp__sub_82199D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82199D78;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x82199d94
	if (!ctx.cr6.eq) goto loc_82199D94;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82199D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199D9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,-5964(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5964);
	// stw r11,-5964(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5964, ctx.r11.u32);
	// bl 0x82184710
	ctx.lr = 0x82199DC4;
	sub_82184710(ctx, base);
	// stw r30,-5964(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5964, ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199DD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82199DE8"))) PPC_WEAK_FUNC(sub_82199DE8);
PPC_FUNC_IMPL(__imp__sub_82199DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x82199e10
	if (!ctx.cr6.eq) goto loc_82199E10;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82199E10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199E18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82199e34
	if (ctx.cr6.eq) goto loc_82199E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82199E34;
	sub_82183E40(ctx, base);
loc_82199E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199E3C;
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

__attribute__((alias("__imp__sub_82199E5C"))) PPC_WEAK_FUNC(sub_82199E5C);
PPC_FUNC_IMPL(__imp__sub_82199E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199E60"))) PPC_WEAK_FUNC(sub_82199E60);
PPC_FUNC_IMPL(__imp__sub_82199E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82199E68;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x82199e88
	if (!ctx.cr6.eq) goto loc_82199E88;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82199E88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199E90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// bl 0x8219adc0
	ctx.lr = 0x82199EA0;
	sub_8219ADC0(ctx, base);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82199ec4
	if (!ctx.cr6.eq) goto loc_82199EC4;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82199ec4
	if (ctx.cr6.eq) goto loc_82199EC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82199de8
	ctx.lr = 0x82199EC4;
	sub_82199DE8(ctx, base);
loc_82199EC4:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82199ED4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82199ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199ED4;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r4,r27,36
	ctx.r4.s64 = ctx.r27.s64 + 36;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r5,96(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x8219ab90
	ctx.lr = 0x82199F2C;
	sub_8219AB90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219abd0
	ctx.lr = 0x82199F38;
	sub_8219ABD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,96(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8241dd3c
	ctx.lr = 0x82199F44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82199F54"))) PPC_WEAK_FUNC(sub_82199F54);
PPC_FUNC_IMPL(__imp__sub_82199F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82199F58"))) PPC_WEAK_FUNC(sub_82199F58);
PPC_FUNC_IMPL(__imp__sub_82199F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82199F60;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r3,36
	ctx.r24.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x82199f7c
	if (!ctx.cr6.eq) goto loc_82199F7C;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82199F7C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199F84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r25.u32);
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219a048
	if (ctx.cr6.eq) goto loc_8219A048;
loc_82199F98:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8219a040
	if (!ctx.cr6.eq) goto loc_8219A040;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82199fec
	if (ctx.cr6.eq) goto loc_82199FEC;
	// addi r29,r26,36
	ctx.r29.s64 = ctx.r26.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82199FC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r25,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r25.u32);
	// beq cr6,0x82199fe0
	if (ctx.cr6.eq) goto loc_82199FE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82199FE0;
	sub_82183E40(ctx, base);
loc_82199FE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82199FE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_82199FEC:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82199FFC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82199ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199FFC;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8219A040:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82199f98
	if (!ctx.cr6.eq) goto loc_82199F98;
loc_8219A048:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A050;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8219A05C"))) PPC_WEAK_FUNC(sub_8219A05C);
PPC_FUNC_IMPL(__imp__sub_8219A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219A060"))) PPC_WEAK_FUNC(sub_8219A060);
PPC_FUNC_IMPL(__imp__sub_8219A060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219A068;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,36
	ctx.r29.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a084
	if (!ctx.cr6.eq) goto loc_8219A084;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8219A084:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A08C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a0c0
	if (ctx.cr6.eq) goto loc_8219A0C0;
loc_8219A0A0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// beq cr6,0x8219a0d8
	if (ctx.cr6.eq) goto loc_8219A0D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a0a0
	if (!ctx.cr6.eq) goto loc_8219A0A0;
loc_8219A0C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A0C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8219A0D8:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219a0ec
	if (ctx.cr6.eq) goto loc_8219A0EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82199de8
	ctx.lr = 0x8219A0EC;
	sub_82199DE8(ctx, base);
loc_8219A0EC:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219A0FC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219a0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A0FC;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219A148;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219A158"))) PPC_WEAK_FUNC(sub_8219A158);
PPC_FUNC_IMPL(__imp__sub_8219A158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219A160;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a180
	if (!ctx.cr6.eq) goto loc_8219A180;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8219A180:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A188;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8219a220
	if (ctx.cr6.eq) goto loc_8219A220;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
loc_8219A1A4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8219a1c4
	if (!ctx.cr6.eq) goto loc_8219A1C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8219A1C4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r7,47
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 47, ctx.xer);
	// bne cr6,0x8219a1d4
	if (!ctx.cr6.eq) goto loc_8219A1D4;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
loc_8219A1D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8219a1f8
	if (ctx.cr6.eq) goto loc_8219A1F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a1d4
	if (ctx.cr6.eq) goto loc_8219A1D4;
loc_8219A1F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219a218
	if (!ctx.cr6.eq) goto loc_8219A218;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8219a218
	if (!ctx.cr6.eq) goto loc_8219A218;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a238
	if (!ctx.cr6.eq) goto loc_8219A238;
loc_8219A218:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219a1a4
	if (!ctx.cr6.eq) goto loc_8219A1A4;
loc_8219A220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A228;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219A238:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8219abd0
	ctx.lr = 0x8219A244;
	sub_8219ABD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A24C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219A25C"))) PPC_WEAK_FUNC(sub_8219A25C);
PPC_FUNC_IMPL(__imp__sub_8219A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219A260"))) PPC_WEAK_FUNC(sub_8219A260);
PPC_FUNC_IMPL(__imp__sub_8219A260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8219A268;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r3,36
	ctx.r27.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a288
	if (!ctx.cr6.eq) goto loc_8219A288;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8219A288:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A290;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r26.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219a2bc
	if (!ctx.cr6.eq) goto loc_8219A2BC;
loc_8219A2A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A2AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8219A2BC:
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8219a2a4
	if (ctx.cr6.eq) goto loc_8219A2A4;
	// addi r7,r29,50
	ctx.r7.s64 = ctx.r29.s64 + 50;
loc_8219A2CC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r30,50
	ctx.r11.s64 = ctx.r30.s64 + 50;
	// lbz r10,50(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8219a2ec
	if (!ctx.cr6.eq) goto loc_8219A2EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8219A2EC:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bne cr6,0x8219a300
	if (!ctx.cr6.eq) goto loc_8219A300;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8219A300:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8219a324
	if (ctx.cr6.eq) goto loc_8219A324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a300
	if (ctx.cr6.eq) goto loc_8219A300;
loc_8219A324:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219a344
	if (!ctx.cr6.eq) goto loc_8219A344;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8219a344
	if (!ctx.cr6.eq) goto loc_8219A344;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a350
	if (!ctx.cr6.eq) goto loc_8219A350;
loc_8219A344:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219a2cc
	if (!ctx.cr6.eq) goto loc_8219A2CC;
	// b 0x8219a2a4
	goto loc_8219A2A4;
loc_8219A350:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8219abd0
	ctx.lr = 0x8219A35C;
	sub_8219ABD0(ctx, base);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219a3d0
	if (!ctx.cr6.eq) goto loc_8219A3D0;
	// lwz r31,112(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bne cr6,0x8219a388
	if (!ctx.cr6.eq) goto loc_8219A388;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r10.u32);
	// b 0x8219a3e0
	goto loc_8219A3E0;
loc_8219A388:
	// bl 0x82183078
	ctx.lr = 0x8219A38C;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219A398;
	sub_821837D0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82199d70
	ctx.lr = 0x8219A3AC;
	sub_82199D70(ctx, base);
	// stw r26,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r26.u32);
	// stw r3,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r3.u32);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r5,r10,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82087ab0
	ctx.lr = 0x8219A3C4;
	sub_82087AB0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219A3CC;
	sub_821837D0(ctx, base);
	// b 0x8219a3e0
	goto loc_8219A3E0;
loc_8219A3D0:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r5,r11,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82087ab0
	ctx.lr = 0x8219A3E0;
	sub_82087AB0(ctx, base);
loc_8219A3E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A3E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8219A3F8"))) PPC_WEAK_FUNC(sub_8219A3F8);
PPC_FUNC_IMPL(__imp__sub_8219A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8219A400;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r22,r3,36
	ctx.r22.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a424
	if (!ctx.cr6.eq) goto loc_8219A424;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
loc_8219A424:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A42C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r27,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r27.u32);
	// lwz r31,76(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// bl 0x82183078
	ctx.lr = 0x8219A43C;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219A448;
	sub_821837D0(ctx, base);
	// addi r31,r23,36
	ctx.r31.s64 = ctx.r23.s64 + 36;
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
loc_8219A450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r28,-5964(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5964);
	// stw r26,-5964(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5964, ctx.r26.u32);
	// bl 0x82184710
	ctx.lr = 0x8219A478;
	sub_82184710(ctx, base);
	// stw r28,-5964(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5964, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A488;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// bne cr6,0x8219a4d0
	if (!ctx.cr6.eq) goto loc_8219A4D0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82199ce0
	ctx.lr = 0x8219A49C;
	sub_82199CE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8219a4b0
	if (ctx.cr6.gt) goto loc_8219A4B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// bl 0x822e6048
	ctx.lr = 0x8219A4B0;
	sub_822E6048(ctx, base);
loc_8219A4B0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8219a060
	ctx.lr = 0x8219A4B8;
	sub_8219A060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219a450
	if (!ctx.cr6.eq) goto loc_8219A450;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,76(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// bl 0x822e6048
	ctx.lr = 0x8219A4CC;
	sub_822E6048(ctx, base);
	// b 0x8219a450
	goto loc_8219A450;
loc_8219A4D0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219A4D8;
	sub_821837D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A4E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8219A4F0"))) PPC_WEAK_FUNC(sub_8219A4F0);
PPC_FUNC_IMPL(__imp__sub_8219A4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8219A4F8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a518
	if (!ctx.cr6.eq) goto loc_8219A518;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8219A518:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A520;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x8219a3f8
	ctx.lr = 0x8219A53C;
	sub_8219A3F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219adc0
	ctx.lr = 0x8219A548;
	sub_8219ADC0(ctx, base);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// bne cr6,0x8219a56c
	if (!ctx.cr6.eq) goto loc_8219A56C;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219a56c
	if (ctx.cr6.eq) goto loc_8219A56C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82199de8
	ctx.lr = 0x8219A56C;
	sub_82199DE8(ctx, base);
loc_8219A56C:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219A57C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219a57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A57C;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r4,96(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// rlwinm r5,r11,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82087ab0
	ctx.lr = 0x8219A5D4;
	sub_82087AB0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r27,36
	ctx.r4.s64 = ctx.r27.s64 + 36;
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219ab90
	ctx.lr = 0x8219A5E8;
	sub_8219AB90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219abd0
	ctx.lr = 0x8219A5F4;
	sub_8219ABD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,96(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8241dd3c
	ctx.lr = 0x8219A600;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8219A610"))) PPC_WEAK_FUNC(sub_8219A610);
PPC_FUNC_IMPL(__imp__sub_8219A610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219A618;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a638
	if (!ctx.cr6.eq) goto loc_8219A638;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8219A638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A640;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x821831f8
	ctx.lr = 0x8219A654;
	sub_821831F8(ctx, base);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8219a6c4
	if (!ctx.cr6.gt) goto loc_8219A6C4;
	// addi r4,r29,50
	ctx.r4.s64 = ctx.r29.s64 + 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a158
	ctx.lr = 0x8219A674;
	sub_8219A158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219a6c4
	if (!ctx.cr6.eq) goto loc_8219A6C4;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219a6b8
	if (ctx.cr6.eq) goto loc_8219A6B8;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x8219a6b8
	if (!ctx.cr6.eq) goto loc_8219A6B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199e60
	ctx.lr = 0x8219A6A0;
	sub_82199E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A6A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8219A6B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a4f0
	ctx.lr = 0x8219A6C4;
	sub_8219A4F0(ctx, base);
loc_8219A6C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A6CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219A6DC"))) PPC_WEAK_FUNC(sub_8219A6DC);
PPC_FUNC_IMPL(__imp__sub_8219A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219A6E0"))) PPC_WEAK_FUNC(sub_8219A6E0);
PPC_FUNC_IMPL(__imp__sub_8219A6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82183078
	ctx.lr = 0x8219A700;
	sub_82183078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219afc0
	ctx.lr = 0x8219A710;
	sub_8219AFC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82081590
	ctx.lr = 0x8219A724;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,30652
	ctx.r10.s64 = ctx.r11.s64 + 30652;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219A76C"))) PPC_WEAK_FUNC(sub_8219A76C);
PPC_FUNC_IMPL(__imp__sub_8219A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219A770"))) PPC_WEAK_FUNC(sub_8219A770);
PPC_FUNC_IMPL(__imp__sub_8219A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219A778;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30652
	ctx.r10.s64 = ctx.r11.s64 + 30652;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82199f58
	ctx.lr = 0x8219A794;
	sub_82199F58(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a7b4
	if (ctx.cr6.eq) goto loc_8219A7B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A7B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_8219A7B4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219a7c4
	if (ctx.cr6.eq) goto loc_8219A7C4;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_8219A7C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219aeb8
	ctx.lr = 0x8219A7CC;
	sub_8219AEB8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a7e8
	if (ctx.cr6.eq) goto loc_8219A7E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219A7E4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219A7E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219A7F0"))) PPC_WEAK_FUNC(sub_8219A7F0);
PPC_FUNC_IMPL(__imp__sub_8219A7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219A7F8;
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
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a814
	if (!ctx.cr6.eq) goto loc_8219A814;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8219A814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A81C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a860
	if (ctx.cr6.eq) goto loc_8219A860;
loc_8219A830:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8219a878
	if (ctx.cr6.eq) goto loc_8219A878;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8219a878
	if (ctx.cr6.eq) goto loc_8219A878;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x8219a878
	if (ctx.cr6.eq) goto loc_8219A878;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a830
	if (!ctx.cr6.eq) goto loc_8219A830;
loc_8219A860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A868;
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
loc_8219A878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A880;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219A890"))) PPC_WEAK_FUNC(sub_8219A890);
PPC_FUNC_IMPL(__imp__sub_8219A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219A898;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a8b0
	if (!ctx.cr6.eq) goto loc_8219A8B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8219A8B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A8B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a8f4
	if (ctx.cr6.eq) goto loc_8219A8F4;
loc_8219A8D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8219a8ec
	if (!ctx.cr6.eq) goto loc_8219A8EC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8219A8EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a8d0
	if (!ctx.cr6.eq) goto loc_8219A8D0;
loc_8219A8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A8FC;
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

__attribute__((alias("__imp__sub_8219A910"))) PPC_WEAK_FUNC(sub_8219A910);
PPC_FUNC_IMPL(__imp__sub_8219A910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219A918;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a930
	if (!ctx.cr6.eq) goto loc_8219A930;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8219A930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A938;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a97c
	if (ctx.cr6.eq) goto loc_8219A97C;
loc_8219A950:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219a974
	if (ctx.cr6.eq) goto loc_8219A974;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x8219a974
	if (ctx.cr6.eq) goto loc_8219A974;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8219A974:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a950
	if (!ctx.cr6.eq) goto loc_8219A950;
loc_8219A97C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219A984;
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

__attribute__((alias("__imp__sub_8219A998"))) PPC_WEAK_FUNC(sub_8219A998);
PPC_FUNC_IMPL(__imp__sub_8219A998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219A9A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// bne cr6,0x8219a9bc
	if (!ctx.cr6.eq) goto loc_8219A9BC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8219A9BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219A9C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r27.u32);
	// bl 0x8219acd8
	ctx.lr = 0x8219A9D4;
	sub_8219ACD8(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219A9E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219a9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A9E8;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lhz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 72);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// lhz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 72);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,72(r29)
	PPC_STORE_U16(ctx.r29.u32 + 72, ctx.r10.u16);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219AA4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219AA5C"))) PPC_WEAK_FUNC(sub_8219AA5C);
PPC_FUNC_IMPL(__imp__sub_8219AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AA60"))) PPC_WEAK_FUNC(sub_8219AA60);
PPC_FUNC_IMPL(__imp__sub_8219AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8219afc0
	ctx.lr = 0x8219AA7C;
	sub_8219AFC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x8219AA90;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// sth r30,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,30656
	ctx.r10.s64 = ctx.r11.s64 + 30656;
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

__attribute__((alias("__imp__sub_8219AABC"))) PPC_WEAK_FUNC(sub_8219AABC);
PPC_FUNC_IMPL(__imp__sub_8219AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AAC0"))) PPC_WEAK_FUNC(sub_8219AAC0);
PPC_FUNC_IMPL(__imp__sub_8219AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219AAC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,30656
	ctx.r10.s64 = ctx.r11.s64 + 30656;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219ab00
	if (ctx.cr6.eq) goto loc_8219AB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219AAFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8219AB00:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ab10
	if (ctx.cr6.eq) goto loc_8219AB10;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_8219AB10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219aeb8
	ctx.lr = 0x8219AB18;
	sub_8219AEB8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab34
	if (ctx.cr6.eq) goto loc_8219AB34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219AB30;
	sub_82183E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8219AB34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219AB3C"))) PPC_WEAK_FUNC(sub_8219AB3C);
PPC_FUNC_IMPL(__imp__sub_8219AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AB40"))) PPC_WEAK_FUNC(sub_8219AB40);
PPC_FUNC_IMPL(__imp__sub_8219AB40) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821895b0
	sub_821895B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219AB48"))) PPC_WEAK_FUNC(sub_8219AB48);
PPC_FUNC_IMPL(__imp__sub_8219AB48) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8219ab74
	if (ctx.cr6.eq) goto loc_8219AB74;
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
loc_8219AB74:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821895b0
	ctx.lr = 0x8219AB7C;
	sub_821895B0(ctx, base);
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

__attribute__((alias("__imp__sub_8219AB90"))) PPC_WEAK_FUNC(sub_8219AB90);
PPC_FUNC_IMPL(__imp__sub_8219AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219ABAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8219abac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219ABAC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219ABD0"))) PPC_WEAK_FUNC(sub_8219ABD0);
PPC_FUNC_IMPL(__imp__sub_8219ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82194e60
	ctx.lr = 0x8219ABF4;
	sub_82194E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821950f8
	ctx.lr = 0x8219AC00;
	sub_821950F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195038
	ctx.lr = 0x8219AC0C;
	sub_82195038(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219AC24"))) PPC_WEAK_FUNC(sub_8219AC24);
PPC_FUNC_IMPL(__imp__sub_8219AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AC28"))) PPC_WEAK_FUNC(sub_8219AC28);
PPC_FUNC_IMPL(__imp__sub_8219AC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82194e60
	ctx.lr = 0x8219AC4C;
	sub_82194E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821950f8
	ctx.lr = 0x8219AC58;
	sub_821950F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195098
	ctx.lr = 0x8219AC64;
	sub_82195098(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219AC7C"))) PPC_WEAK_FUNC(sub_8219AC7C);
PPC_FUNC_IMPL(__imp__sub_8219AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AC80"))) PPC_WEAK_FUNC(sub_8219AC80);
PPC_FUNC_IMPL(__imp__sub_8219AC80) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821895b0
	ctx.lr = 0x8219AC9C;
	sub_821895B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219acc0
	if (!ctx.cr6.eq) goto loc_8219ACC0;
loc_8219ACA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088648
	ctx.lr = 0x8219ACAC;
	sub_82088648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821895b0
	ctx.lr = 0x8219ACB8;
	sub_821895B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219aca4
	if (ctx.cr6.eq) goto loc_8219ACA4;
loc_8219ACC0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219ACD4"))) PPC_WEAK_FUNC(sub_8219ACD4);
PPC_FUNC_IMPL(__imp__sub_8219ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219ACD8"))) PPC_WEAK_FUNC(sub_8219ACD8);
PPC_FUNC_IMPL(__imp__sub_8219ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ad14
	if (ctx.cr6.eq) goto loc_8219AD14;
loc_8219ACE4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219ad1c
	if (ctx.cr6.eq) goto loc_8219AD1C;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x8219ad1c
	if (ctx.cr6.eq) goto loc_8219AD1C;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x8219ad1c
	if (ctx.cr6.eq) goto loc_8219AD1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219ace4
	if (!ctx.cr6.eq) goto loc_8219ACE4;
loc_8219AD14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8219AD1C:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219AD2C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8219ad2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219AD2C;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// sth r11,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r11.u16);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219AD74"))) PPC_WEAK_FUNC(sub_8219AD74);
PPC_FUNC_IMPL(__imp__sub_8219AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AD78"))) PPC_WEAK_FUNC(sub_8219AD78);
PPC_FUNC_IMPL(__imp__sub_8219AD78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219adb8
	if (ctx.cr6.eq) goto loc_8219ADB8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8219AD88:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8219adb0
	if (!ctx.cr6.eq) goto loc_8219ADB0;
	// lhz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8219ADB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219ad88
	if (!ctx.cr6.eq) goto loc_8219AD88;
loc_8219ADB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219ADC0"))) PPC_WEAK_FUNC(sub_8219ADC0);
PPC_FUNC_IMPL(__imp__sub_8219ADC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219ADCC"))) PPC_WEAK_FUNC(sub_8219ADCC);
PPC_FUNC_IMPL(__imp__sub_8219ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219ADD0"))) PPC_WEAK_FUNC(sub_8219ADD0);
PPC_FUNC_IMPL(__imp__sub_8219ADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219ADD8;
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
	// beq cr6,0x8219ae68
	if (ctx.cr6.eq) goto loc_8219AE68;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,148
	ctx.r11.s64 = ctx.r10.s64 * 148;
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x8219ae44
	if (ctx.cr0.lt) goto loc_8219AE44;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219AE10:
	// addi r31,r31,-148
	ctx.r31.s64 = ctx.r31.s64 + -148;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ae2c
	if (ctx.cr6.eq) goto loc_8219AE2C;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x8241dd3c
	ctx.lr = 0x8219AE28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
loc_8219AE2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ae3c
	if (ctx.cr6.eq) goto loc_8219AE3C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8219AE3C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8219ae10
	if (!ctx.cr0.lt) goto loc_8219AE10;
loc_8219AE44:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ae5c
	if (ctx.cr6.eq) goto loc_8219AE5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x8219AE5C;
	sub_82183E40(ctx, base);
loc_8219AE5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219AE68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ae84
	if (ctx.cr6.eq) goto loc_8219AE84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219AE80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8219AE84:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ae94
	if (ctx.cr6.eq) goto loc_8219AE94;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8219AE94:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219aeac
	if (ctx.cr6.eq) goto loc_8219AEAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8219AEAC;
	sub_82183E40(ctx, base);
loc_8219AEAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219AEB8"))) PPC_WEAK_FUNC(sub_8219AEB8);
PPC_FUNC_IMPL(__imp__sub_8219AEB8) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,30660
	ctx.r10.s64 = ctx.r11.s64 + 30660;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8219aeec
	if (ctx.cr6.eq) goto loc_8219AEEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8219add0
	ctx.lr = 0x8219AEEC;
	sub_8219ADD0(ctx, base);
loc_8219AEEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82194f68
	ctx.lr = 0x8219AEFC;
	sub_82194F68(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219AF10"))) PPC_WEAK_FUNC(sub_8219AF10);
PPC_FUNC_IMPL(__imp__sub_8219AF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x8219AF38;
	sub_82081590(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
loc_8219AF5C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219af5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219AF5C;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219AFBC"))) PPC_WEAK_FUNC(sub_8219AFBC);
PPC_FUNC_IMPL(__imp__sub_8219AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219AFC0"))) PPC_WEAK_FUNC(sub_8219AFC0);
PPC_FUNC_IMPL(__imp__sub_8219AFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219AFC8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82194e30
	ctx.lr = 0x8219AFE0;
	sub_82194E30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,442
	ctx.r10.s64 = 28966912;
	// addi r9,r11,30660
	ctx.r9.s64 = ctx.r11.s64 + 30660;
	// ori r8,r10,53137
	ctx.r8.u64 = ctx.r10.u64 | 53137;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8219b010
	if (ctx.cr6.gt) goto loc_8219B010;
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219b014
	if (!ctx.cr6.gt) goto loc_8219B014;
loc_8219B010:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8219B014:
	// bl 0x82183850
	ctx.lr = 0x8219B018;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8219b030
	if (ctx.cr6.eq) goto loc_8219B030;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8219B02C;
	sub_82183448(ctx, base);
	// b 0x8219b03c
	goto loc_8219B03C;
loc_8219B030:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8219B03C;
	sub_821845A0(ctx, base);
loc_8219B03C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219b070
	if (ctx.cr6.eq) goto loc_8219B070;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x8219b074
	if (ctx.cr0.lt) goto loc_8219B074;
loc_8219B058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219af10
	ctx.lr = 0x8219B060;
	sub_8219AF10(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,148
	ctx.r29.s64 = ctx.r29.s64 + 148;
	// bge 0x8219b058
	if (!ctx.cr0.lt) goto loc_8219B058;
	// b 0x8219b074
	goto loc_8219B074;
loc_8219B070:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8219B074:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r28.u32);
	// beq cr6,0x8219b0a0
	if (ctx.cr6.eq) goto loc_8219B0A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219B084:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82195098
	ctx.lr = 0x8219B094;
	sub_82195098(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// bne 0x8219b084
	if (!ctx.cr0.eq) goto loc_8219B084;
loc_8219B0A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219B0AC"))) PPC_WEAK_FUNC(sub_8219B0AC);
PPC_FUNC_IMPL(__imp__sub_8219B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219B0B0"))) PPC_WEAK_FUNC(sub_8219B0B0);
PPC_FUNC_IMPL(__imp__sub_8219B0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,30660
	ctx.r10.s64 = ctx.r11.s64 + 30660;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8219b0ec
	if (ctx.cr6.eq) goto loc_8219B0EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8219add0
	ctx.lr = 0x8219B0EC;
	sub_8219ADD0(ctx, base);
loc_8219B0EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82194f68
	ctx.lr = 0x8219B0FC;
	sub_82194F68(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b118
	if (ctx.cr6.eq) goto loc_8219B118;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219B114;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219B118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219B130"))) PPC_WEAK_FUNC(sub_8219B130);
PPC_FUNC_IMPL(__imp__sub_8219B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219B138;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,9520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9520, ctx.xer);
	// bne cr6,0x8219b1ac
	if (!ctx.cr6.eq) goto loc_8219B1AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,-19272
	ctx.r31.s64 = ctx.r11.s64 + -19272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B164;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8219B17C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219b1c4
	if (ctx.cr6.eq) goto loc_8219B1C4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8219b17c
	if (ctx.cr6.lt) goto loc_8219B17C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219B1A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8219B1AC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821985f0
	ctx.lr = 0x8219B1BC;
	sub_821985F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219B1C4:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B1D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// mulli r10,r30,9520
	ctx.r10.s64 = ctx.r30.s64 * 9520;
	// addi r9,r8,27216
	ctx.r9.s64 = ctx.r8.s64 + 27216;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219B1F8"))) PPC_WEAK_FUNC(sub_8219B1F8);
PPC_FUNC_IMPL(__imp__sub_8219B1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219B200;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19272
	ctx.r31.s64 = ctx.r11.s64 + -19272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B21C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,27216
	ctx.r11.s64 = ctx.r11.s64 + 27216;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8219B234:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8219b274
	if (ctx.cr6.eq) goto loc_8219B274;
	// addi r10,r10,9520
	ctx.r10.s64 = ctx.r10.s64 + 9520;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,9520
	ctx.r11.s64 = ctx.r11.s64 + 9520;
	// cmpwi cr6,r10,19040
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19040, ctx.xer);
	// blt cr6,0x8219b234
	if (ctx.cr6.lt) goto loc_8219B234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219B258;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821985d8
	ctx.lr = 0x8219B26C;
	sub_821985D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219B274:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19280
	ctx.r9.s64 = ctx.r11.s64 + -19280;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B290;
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

__attribute__((alias("__imp__sub_8219B2A0"))) PPC_WEAK_FUNC(sub_8219B2A0);
PPC_FUNC_IMPL(__imp__sub_8219B2A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// blt cr6,0x8219b2d8
	if (ctx.cr6.lt) goto loc_8219B2D8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8219B2D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219b2ec
	if (ctx.cr6.lt) goto loc_8219B2EC;
	// lis r10,8
	ctx.r10.s64 = 524288;
loc_8219B2EC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq cr6,0x8219b318
	if (ctx.cr6.eq) goto loc_8219B318;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219B30C:
	// dcbt r11,r5
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8219b30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B30C;
loc_8219B318:
	// li r11,90
	ctx.r11.s64 = 90;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,76
	ctx.r7.s64 = 76;
	// li r6,73
	ctx.r6.s64 = 73;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,66
	ctx.r4.s64 = 66;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8219b460
	if (!ctx.cr6.eq) goto loc_8219B460;
	// lbz r11,5(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,4656
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4656, ctx.xer);
	// bne cr6,0x8219b460
	if (!ctx.cr6.eq) goto loc_8219B460;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219B370:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8219b370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B370;
	// lbz r11,11(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lbz r4,9(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lbz r7,10(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// addi r3,r5,16
	ctx.r3.s64 = ctx.r5.s64 + 16;
	// lbz r30,8(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// addi r10,r10,-20176
	ctx.r10.s64 = ctx.r10.s64 + -20176;
	// addi r6,r6,-19976
	ctx.r6.s64 = ctx.r6.s64 + -19976;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// addi r4,r3,30664
	ctx.r4.s64 = ctx.r3.s64 + 30664;
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8219c9a0
	ctx.lr = 0x8219B3E0;
	sub_8219C9A0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b414
	if (ctx.cr6.eq) goto loc_8219B414;
loc_8219B3EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219cb98
	ctx.lr = 0x8219B3F8;
	sub_8219CB98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8219b414
	if (ctx.cr6.eq) goto loc_8219B414;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219b458
	if (!ctx.cr6.eq) goto loc_8219B458;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219b3ec
	if (!ctx.cr6.eq) goto loc_8219B3EC;
loc_8219B414:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8219b448
	if (!ctx.cr6.lt) goto loc_8219B448;
loc_8219B420:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219cb98
	ctx.lr = 0x8219B42C;
	sub_8219CB98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8219b448
	if (ctx.cr6.eq) goto loc_8219B448;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219b458
	if (!ctx.cr6.eq) goto loc_8219B458;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8219b420
	if (ctx.cr6.lt) goto loc_8219B420;
loc_8219B448:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c9b0
	ctx.lr = 0x8219B450;
	sub_8219C9B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8219b464
	goto loc_8219B464;
loc_8219B458:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c9b0
	ctx.lr = 0x8219B460;
	sub_8219C9B0(ctx, base);
loc_8219B460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219B464:
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

__attribute__((alias("__imp__sub_8219B47C"))) PPC_WEAK_FUNC(sub_8219B47C);
PPC_FUNC_IMPL(__imp__sub_8219B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219B480"))) PPC_WEAK_FUNC(sub_8219B480);
PPC_FUNC_IMPL(__imp__sub_8219B480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8219B488;
	sub_8224877C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4192(r1)
	ea = -4192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r8,13(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r11,16(r1)
	PPC_STORE_U8(ctx.r1.u32 + 16, ctx.r11.u8);
	// stb r9,17(r1)
	PPC_STORE_U8(ctx.r1.u32 + 17, ctx.r9.u8);
	// stb r8,18(r1)
	PPC_STORE_U8(ctx.r1.u32 + 18, ctx.r8.u8);
	// stb r7,19(r1)
	PPC_STORE_U8(ctx.r1.u32 + 19, ctx.r7.u8);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8219b6a0
	if (!ctx.cr6.lt) goto loc_8219B6A0;
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lis r11,-2057
	ctx.r11.s64 = -134807552;
	// lis r10,-2057
	ctx.r10.s64 = -134807552;
	// extsw r31,r9
	ctx.r31.s64 = ctx.r9.s32;
	// ori r3,r11,63480
	ctx.r3.u64 = ctx.r11.u64 | 63480;
	// ori r9,r10,63479
	ctx.r9.u64 = ctx.r10.u64 | 63479;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
loc_8219B4F0:
	// lis r11,-1030
	ctx.r11.s64 = -67502080;
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// ori r10,r11,63992
	ctx.r10.u64 = ctx.r11.u64 | 63992;
	// ori r8,r9,65020
	ctx.r8.u64 = ctx.r9.u64 | 65020;
	// addi r11,r1,280
	ctx.r11.s64 = ctx.r1.s64 + 280;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r31,r4
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r4.u64, ctx.xer);
	// std r10,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r10.u64);
	// blt cr6,0x8219b574
	if (ctx.cr6.lt) goto loc_8219B574;
loc_8219B514:
	// lbz r9,23(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r8,22(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// lbz r7,21(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// lbz r29,20(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r28,19(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 19);
	// lbz r27,18(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 18);
	// lbz r26,17(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 17);
	// lbz r25,16(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 16);
	// stb r8,25(r1)
	PPC_STORE_U8(ctx.r1.u32 + 25, ctx.r8.u8);
	// stb r9,24(r1)
	PPC_STORE_U8(ctx.r1.u32 + 24, ctx.r9.u8);
	// stb r7,26(r1)
	PPC_STORE_U8(ctx.r1.u32 + 26, ctx.r7.u8);
	// stb r29,27(r1)
	PPC_STORE_U8(ctx.r1.u32 + 27, ctx.r29.u8);
	// stb r28,28(r1)
	PPC_STORE_U8(ctx.r1.u32 + 28, ctx.r28.u8);
	// stb r27,29(r1)
	PPC_STORE_U8(ctx.r1.u32 + 29, ctx.r27.u8);
	// stb r26,30(r1)
	PPC_STORE_U8(ctx.r1.u32 + 30, ctx.r26.u8);
	// stb r25,31(r1)
	PPC_STORE_U8(ctx.r1.u32 + 31, ctx.r25.u8);
	// ld r9,24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r10,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r10.u64);
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// bge cr6,0x8219b514
	if (!ctx.cr6.lt) goto loc_8219B514;
loc_8219B574:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8219B578:
	// lbz r11,1(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219b5d0
	if (ctx.cr6.eq) goto loc_8219B5D0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8219b61c
	if (ctx.cr6.eq) goto loc_8219B61C;
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// beq cr6,0x8219b5c8
	if (ctx.cr6.eq) goto loc_8219B5C8;
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8219B5C8:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x8219b614
	goto loc_8219B614;
loc_8219B5D0:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219b614
	if (ctx.cr0.eq) goto loc_8219B614;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8219B5E4:
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// beq cr6,0x8219b608
	if (ctx.cr6.eq) goto loc_8219B608;
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r9,256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 256, ctx.r9.u8);
loc_8219B608:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8219b5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B5E4;
loc_8219B614:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8219b578
	if (!ctx.cr6.eq) goto loc_8219B578;
loc_8219B61C:
	// lbz r11,1(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x8219b698
	if (ctx.cr6.eq) goto loc_8219B698;
loc_8219B640:
	// lbzu r9,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// addi r10,r1,544
	ctx.r10.s64 = ctx.r1.s64 + 544;
loc_8219B648:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lbzx r29,r11,r7
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8219b678
	if (!ctx.cr6.eq) goto loc_8219B678;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8219b694
	if (ctx.cr6.eq) goto loc_8219B694;
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x8219b648
	goto loc_8219B648;
loc_8219B678:
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// b 0x8219b648
	goto loc_8219B648;
loc_8219B694:
	// bdnz 0x8219b640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B640;
loc_8219B698:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8219b4f0
	if (ctx.cr6.lt) goto loc_8219B4F0;
loc_8219B6A0:
	// addi r1,r1,4192
	ctx.r1.s64 = ctx.r1.s64 + 4192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8219B6A8"))) PPC_WEAK_FUNC(sub_8219B6A8);
PPC_FUNC_IMPL(__imp__sub_8219B6A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219B6C4"))) PPC_WEAK_FUNC(sub_8219B6C4);
PPC_FUNC_IMPL(__imp__sub_8219B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219B6C8"))) PPC_WEAK_FUNC(sub_8219B6C8);
PPC_FUNC_IMPL(__imp__sub_8219B6C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219B6E0"))) PPC_WEAK_FUNC(sub_8219B6E0);
PPC_FUNC_IMPL(__imp__sub_8219B6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219B6E8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8219b70c
	if (!ctx.cr6.eq) goto loc_8219B70C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8219B70C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B714;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219b750
	if (ctx.cr6.eq) goto loc_8219B750;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B744;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219B750:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// bne cr6,0x8219b790
	if (!ctx.cr6.eq) goto loc_8219B790;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B784;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219B790:
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// li r11,257
	ctx.r11.s64 = 257;
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B7B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219B7C0"))) PPC_WEAK_FUNC(sub_8219B7C0);
PPC_FUNC_IMPL(__imp__sub_8219B7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219B7C8;
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
	// bne cr6,0x8219b7e4
	if (!ctx.cr6.eq) goto loc_8219B7E4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8219B7E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B7EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8219b818
	if (!ctx.cr6.eq) goto loc_8219B818;
	// bl 0x8241dd3c
	ctx.lr = 0x8219B808;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219B818:
	// bl 0x8241dd3c
	ctx.lr = 0x8219B81C;
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

__attribute__((alias("__imp__sub_8219B82C"))) PPC_WEAK_FUNC(sub_8219B82C);
PPC_FUNC_IMPL(__imp__sub_8219B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219B830"))) PPC_WEAK_FUNC(sub_8219B830);
PPC_FUNC_IMPL(__imp__sub_8219B830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219B838;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219b854
	if (!ctx.cr6.eq) goto loc_8219B854;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8219B854:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B85C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B8DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219B8E8"))) PPC_WEAK_FUNC(sub_8219B8E8);
PPC_FUNC_IMPL(__imp__sub_8219B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8219B8F0;
	sub_8224877C(ctx, base);
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
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219b91c
	if (!ctx.cr6.eq) goto loc_8219B91C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219B91C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B924;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_8219B938:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8219b938
	if (!ctx.cr6.eq) goto loc_8219B938;
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r27.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// stw r25,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r25.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219B968;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8219B978"))) PPC_WEAK_FUNC(sub_8219B978);
PPC_FUNC_IMPL(__imp__sub_8219B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8219B980;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219b99c
	if (!ctx.cr6.eq) goto loc_8219B99C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8219B99C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219B9A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r27,-32179
	ctx.r27.s64 = -2108882944;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,21776(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21776);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e6048
	ctx.lr = 0x8219B9C4;
	sub_822E6048(ctx, base);
	// lwz r28,60(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219b9d8
	if (ctx.cr6.eq) goto loc_8219B9D8;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x8219ba44
	goto loc_8219BA44;
loc_8219B9D8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x822569f0
	ctx.lr = 0x8219B9F8;
	sub_822569F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bne cr6,0x8219ba30
	if (!ctx.cr6.eq) goto loc_8219BA30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,30672
	ctx.r4.s64 = ctx.r11.s64 + 30672;
	// bl 0x8224a7b8
	ctx.lr = 0x8219BA18;
	sub_8224A7B8(ctx, base);
loc_8219BA18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BA20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8219BA30:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8219ba44
	if (!ctx.cr6.eq) goto loc_8219BA44;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,21776(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21776);
	// bl 0x8209eda0
	ctx.lr = 0x8219BA44;
	sub_8209EDA0(ctx, base);
loc_8219BA44:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8219ba18
	if (ctx.cr6.eq) goto loc_8219BA18;
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// bl 0x8225fa80
	ctx.lr = 0x8219BA58;
	sub_8225FA80(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BA64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8219BA74"))) PPC_WEAK_FUNC(sub_8219BA74);
PPC_FUNC_IMPL(__imp__sub_8219BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BA78"))) PPC_WEAK_FUNC(sub_8219BA78);
PPC_FUNC_IMPL(__imp__sub_8219BA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219BA80;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219baa4
	if (!ctx.cr6.eq) goto loc_8219BAA4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219BAA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219BAAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// stw r27,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r27.u32);
	// stw r29,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219BACC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219BADC"))) PPC_WEAK_FUNC(sub_8219BADC);
PPC_FUNC_IMPL(__imp__sub_8219BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BAE0"))) PPC_WEAK_FUNC(sub_8219BAE0);
PPC_FUNC_IMPL(__imp__sub_8219BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219bb08
	if (!ctx.cr6.eq) goto loc_8219BB08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219BB08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219BB10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r6,r31,348
	ctx.r6.s64 = ctx.r31.s64 + 348;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// addi r7,r9,-18776
	ctx.r7.s64 = ctx.r9.s64 + -18776;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8225fae8
	ctx.lr = 0x8219BB40;
	sub_8225FAE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82088610
	ctx.lr = 0x8219BB4C;
	sub_82088610(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219BB5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219BB80"))) PPC_WEAK_FUNC(sub_8219BB80);
PPC_FUNC_IMPL(__imp__sub_8219BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219BB88;
	sub_82248784(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219bba4
	if (!ctx.cr6.eq) goto loc_8219BBA4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8219BBA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219BBAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r9.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219bbdc
	if (!ctx.cr6.eq) goto loc_8219BBDC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BBCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r27.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219BBDC:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8219bbf8
	if (!ctx.cr6.lt) goto loc_8219BBF8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r27,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r27.u32);
	// b 0x8219bc04
	goto loc_8219BC04;
loc_8219BBF8:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
loc_8219BC04:
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r29,r11,30836
	ctx.r29.s64 = ctx.r11.s64 + 30836;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8219bc3c
	if (!ctx.cr6.gt) goto loc_8219BC3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,30760
	ctx.r4.s64 = ctx.r11.s64 + 30760;
	// li r7,390
	ctx.r7.s64 = 390;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8219BC3C;
	sub_82248910(ctx, base);
loc_8219BC3C:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219bc6c
	if (!ctx.cr6.gt) goto loc_8219BC6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,30680
	ctx.r4.s64 = ctx.r11.s64 + 30680;
	// li r7,406
	ctx.r7.s64 = 406;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8219BC6C;
	sub_82248910(ctx, base);
loc_8219BC6C:
	// stw r31,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r31.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r6,r31,348
	ctx.r6.s64 = ctx.r31.s64 + 348;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r7,r9,-18720
	ctx.r7.s64 = ctx.r9.s64 + -18720;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8225fae8
	ctx.lr = 0x8219BC94;
	sub_8225FAE8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8219BCA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r27.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219BCB4"))) PPC_WEAK_FUNC(sub_8219BCB4);
PPC_FUNC_IMPL(__imp__sub_8219BCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BCB8"))) PPC_WEAK_FUNC(sub_8219BCB8);
PPC_FUNC_IMPL(__imp__sub_8219BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219BCC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8219bcdc
	if (!ctx.cr6.eq) goto loc_8219BCDC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8219BCDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219BCE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// bne cr6,0x8219bd28
	if (!ctx.cr6.eq) goto loc_8219BD28;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8219bd0c
	if (ctx.cr6.eq) goto loc_8219BD0C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8219bd10
	if (!ctx.cr6.eq) goto loc_8219BD10;
loc_8219BD0C:
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
loc_8219BD10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BD18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219BD28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BD30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219BD40"))) PPC_WEAK_FUNC(sub_8219BD40);
PPC_FUNC_IMPL(__imp__sub_8219BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219BD48;
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
	// bne cr6,0x8219bd64
	if (!ctx.cr6.eq) goto loc_8219BD64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8219BD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8219BD6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82088268
	ctx.lr = 0x8219BD7C;
	sub_82088268(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BD88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219BD94"))) PPC_WEAK_FUNC(sub_8219BD94);
PPC_FUNC_IMPL(__imp__sub_8219BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BD98"))) PPC_WEAK_FUNC(sub_8219BD98);
PPC_FUNC_IMPL(__imp__sub_8219BD98) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82081590
	ctx.lr = 0x8219BDC0;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,30864
	ctx.r10.s64 = ctx.r11.s64 + 30864;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8219b830
	ctx.lr = 0x8219BDD4;
	sub_8219B830(ctx, base);
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

__attribute__((alias("__imp__sub_8219BDEC"))) PPC_WEAK_FUNC(sub_8219BDEC);
PPC_FUNC_IMPL(__imp__sub_8219BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BDF0"))) PPC_WEAK_FUNC(sub_8219BDF0);
PPC_FUNC_IMPL(__imp__sub_8219BDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219BDF8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,30864
	ctx.r10.s64 = ctx.r11.s64 + 30864;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219be30
	if (ctx.cr6.eq) goto loc_8219BE30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219BE2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8219BE30:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219be40
	if (ctx.cr6.eq) goto loc_8219BE40;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_8219BE40:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219be5c
	if (ctx.cr6.eq) goto loc_8219BE5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219BE58;
	sub_82183E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8219BE5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219BE64"))) PPC_WEAK_FUNC(sub_8219BE64);
PPC_FUNC_IMPL(__imp__sub_8219BE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BE68"))) PPC_WEAK_FUNC(sub_8219BE68);
PPC_FUNC_IMPL(__imp__sub_8219BE68) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// sth r8,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219BE90"))) PPC_WEAK_FUNC(sub_8219BE90);
PPC_FUNC_IMPL(__imp__sub_8219BE90) {
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
	ctx.lr = 0x8219BEA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8219beb8
	if (ctx.cr6.eq) goto loc_8219BEB8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8219BEB4;
	sub_82183448(ctx, base);
	// b 0x8219bec0
	goto loc_8219BEC0;
loc_8219BEB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8219BEC0;
	sub_821845A0(ctx, base);
loc_8219BEC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219bedc
	if (ctx.cr6.eq) goto loc_8219BEDC;
	// bl 0x8219e420
	ctx.lr = 0x8219BECC;
	sub_8219E420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8219BEDC:
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

__attribute__((alias("__imp__sub_8219BEF0"))) PPC_WEAK_FUNC(sub_8219BEF0);
PPC_FUNC_IMPL(__imp__sub_8219BEF0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8219bf2c
	if (ctx.cr6.eq) goto loc_8219BF2C;
	// li r3,-9997
	ctx.r3.s64 = -9997;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8219BF2C:
	// rlwinm r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// rlwinm r11,r5,30,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// bne cr6,0x8219bf48
	if (!ctx.cr6.eq) goto loc_8219BF48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8219BF48:
	// rlwinm r9,r5,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// bne cr6,0x8219bf60
	if (!ctx.cr6.eq) goto loc_8219BF60;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8219BF60:
	// rlwinm r9,r5,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219bf74
	if (ctx.cr6.eq) goto loc_8219BF74;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8219BF74:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8219bfa4
	if (ctx.cr6.eq) goto loc_8219BFA4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219bfa4
	if (ctx.cr0.eq) goto loc_8219BFA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82258678
	ctx.lr = 0x8219BFA0;
	sub_82258678(ctx, base);
	// b 0x8219bfb8
	goto loc_8219BFB8;
loc_8219BFA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822569f0
	ctx.lr = 0x8219BFB8;
	sub_822569F0(ctx, base);
loc_8219BFB8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8219bfd8
	if (!ctx.cr6.eq) goto loc_8219BFD8;
	// li r3,-9999
	ctx.r3.s64 = -9999;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8219BFD8:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8219BFF4"))) PPC_WEAK_FUNC(sub_8219BFF4);
PPC_FUNC_IMPL(__imp__sub_8219BFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219BFF8"))) PPC_WEAK_FUNC(sub_8219BFF8);
PPC_FUNC_IMPL(__imp__sub_8219BFF8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8219c03c
	if (ctx.cr6.eq) goto loc_8219C03C;
	// bl 0x82088268
	ctx.lr = 0x8219C01C;
	sub_82088268(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8219C034;
	sub_822AA648(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
loc_8219C03C:
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

__attribute__((alias("__imp__sub_8219C054"))) PPC_WEAK_FUNC(sub_8219C054);
PPC_FUNC_IMPL(__imp__sub_8219C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C058"))) PPC_WEAK_FUNC(sub_8219C058);
PPC_FUNC_IMPL(__imp__sub_8219C058) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8219c098
	if (!ctx.cr6.eq) goto loc_8219C098;
loc_8219C080:
	// li r3,-9999
	ctx.r3.s64 = -9999;
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
loc_8219C098:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8219c0c0
	if (ctx.cr6.lt) goto loc_8219C0C0;
	// beq cr6,0x8219c0b8
	if (ctx.cr6.eq) goto loc_8219C0B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8219c0c4
	if (!ctx.cr6.lt) goto loc_8219C0C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x8219c0c4
	goto loc_8219C0C4;
loc_8219C0B8:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8219c0c4
	goto loc_8219C0C4;
loc_8219C0C0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8219C0C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8225fd48
	ctx.lr = 0x8219C0CC;
	sub_8225FD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219c080
	if (ctx.cr6.eq) goto loc_8219C080;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219c0e4
	if (ctx.cr6.eq) goto loc_8219C0E4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8219C0E4:
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

__attribute__((alias("__imp__sub_8219C0FC"))) PPC_WEAK_FUNC(sub_8219C0FC);
PPC_FUNC_IMPL(__imp__sub_8219C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C100"))) PPC_WEAK_FUNC(sub_8219C100);
PPC_FUNC_IMPL(__imp__sub_8219C100) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8219c13c
	if (!ctx.cr6.eq) goto loc_8219C13C;
	// li r3,-9999
	ctx.r3.s64 = -9999;
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
loc_8219C13C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8225fe50
	ctx.lr = 0x8219C150;
	sub_8225FE50(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219c160
	if (ctx.cr6.eq) goto loc_8219C160;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8219C160:
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

__attribute__((alias("__imp__sub_8219C178"))) PPC_WEAK_FUNC(sub_8219C178);
PPC_FUNC_IMPL(__imp__sub_8219C178) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8219c1b0
	if (!ctx.cr6.eq) goto loc_8219C1B0;
loc_8219C198:
	// li r3,-9999
	ctx.r3.s64 = -9999;
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
loc_8219C1B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8225fc20
	ctx.lr = 0x8219C1C4;
	sub_8225FC20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219c198
	if (ctx.cr6.eq) goto loc_8219C198;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219c1dc
	if (ctx.cr6.eq) goto loc_8219C1DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8219C1DC:
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

__attribute__((alias("__imp__sub_8219C1F4"))) PPC_WEAK_FUNC(sub_8219C1F4);
PPC_FUNC_IMPL(__imp__sub_8219C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C1F8"))) PPC_WEAK_FUNC(sub_8219C1F8);
PPC_FUNC_IMPL(__imp__sub_8219C1F8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8219c230
	if (!ctx.cr6.eq) goto loc_8219C230;
	// li r3,-9998
	ctx.r3.s64 = -9998;
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
loc_8219C230:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8225ffd0
	ctx.lr = 0x8219C238;
	sub_8225FFD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219c258
	if (!ctx.cr6.eq) goto loc_8219C258;
	// li r3,-9999
	ctx.r3.s64 = -9999;
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
loc_8219C258:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219c268
	if (ctx.cr6.eq) goto loc_8219C268;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8219C268:
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

__attribute__((alias("__imp__sub_8219C280"))) PPC_WEAK_FUNC(sub_8219C280);
PPC_FUNC_IMPL(__imp__sub_8219C280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219C288;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,30868
	ctx.r10.s64 = ctx.r11.s64 + 30868;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8219c2cc
	if (ctx.cr6.eq) goto loc_8219C2CC;
	// bl 0x82088268
	ctx.lr = 0x8219C2B0;
	sub_82088268(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8219C2C8;
	sub_822AA648(ctx, base);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_8219C2CC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219c2f4
	if (ctx.cr6.eq) goto loc_8219C2F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8219C2F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_8219C2F4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219c304
	if (ctx.cr6.eq) goto loc_8219C304;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_8219C304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219C30C"))) PPC_WEAK_FUNC(sub_8219C30C);
PPC_FUNC_IMPL(__imp__sub_8219C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C310"))) PPC_WEAK_FUNC(sub_8219C310);
PPC_FUNC_IMPL(__imp__sub_8219C310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8219C318;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x8219C334;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,30868
	ctx.r9.s64 = ctx.r11.s64 + 30868;
	// addi r8,r10,-14444
	ctx.r8.s64 = ctx.r10.s64 + -14444;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8219C368;
	sub_822AA648(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8219C37C;
	sub_822AA648(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8219C38C"))) PPC_WEAK_FUNC(sub_8219C38C);
PPC_FUNC_IMPL(__imp__sub_8219C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C390"))) PPC_WEAK_FUNC(sub_8219C390);
PPC_FUNC_IMPL(__imp__sub_8219C390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8219c280
	ctx.lr = 0x8219C3B0;
	sub_8219C280(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219c3cc
	if (ctx.cr6.eq) goto loc_8219C3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219C3C8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219C3CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219C3E4"))) PPC_WEAK_FUNC(sub_8219C3E4);
PPC_FUNC_IMPL(__imp__sub_8219C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C3E8"))) PPC_WEAK_FUNC(sub_8219C3E8);
PPC_FUNC_IMPL(__imp__sub_8219C3E8) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-19236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219c41c
	if (ctx.cr6.eq) goto loc_8219C41C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219C41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219C41C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19236, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219C438"))) PPC_WEAK_FUNC(sub_8219C438);
PPC_FUNC_IMPL(__imp__sub_8219C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8219C440;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r11,30896
	ctx.r10.s64 = ctx.r11.s64 + 30896;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x8219f280
	ctx.lr = 0x8219C480;
	sub_8219F280(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// bl 0x8219f280
	ctx.lr = 0x8219C498;
	sub_8219F280(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x8219f280
	ctx.lr = 0x8219C4B0;
	sub_8219F280(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,516
	ctx.r4.s64 = 516;
	// bl 0x8219f280
	ctx.lr = 0x8219C4C8;
	sub_8219F280(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x8219f280
	ctx.lr = 0x8219C4E0;
	sub_8219F280(ctx, base);
	// stw r26,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8219C4F0"))) PPC_WEAK_FUNC(sub_8219C4F0);
PPC_FUNC_IMPL(__imp__sub_8219C4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bne cr6,0x8219c50c
	if (!ctx.cr6.eq) goto loc_8219C50C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8219f2f0
	sub_8219F2F0(ctx, base);
	return;
loc_8219C50C:
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bne cr6,0x8219c520
	if (!ctx.cr6.eq) goto loc_8219C520;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x8219f2f0
	sub_8219F2F0(ctx, base);
	return;
loc_8219C520:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8219c534
	if (!ctx.cr6.eq) goto loc_8219C534;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// b 0x8219f2f0
	sub_8219F2F0(ctx, base);
	return;
loc_8219C534:
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bne cr6,0x8219c548
	if (!ctx.cr6.eq) goto loc_8219C548;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x8219f2f0
	sub_8219F2F0(ctx, base);
	return;
loc_8219C548:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82183e40
	sub_82183E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219C554"))) PPC_WEAK_FUNC(sub_8219C554);
PPC_FUNC_IMPL(__imp__sub_8219C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C558"))) PPC_WEAK_FUNC(sub_8219C558);
PPC_FUNC_IMPL(__imp__sub_8219C558) {
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
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// bl 0x8219f2c8
	ctx.lr = 0x8219C570;
	sub_8219F2C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219c588
	if (ctx.cr6.eq) goto loc_8219C588;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x822aa648
	ctx.lr = 0x8219C584;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219C588:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219C59C"))) PPC_WEAK_FUNC(sub_8219C59C);
PPC_FUNC_IMPL(__imp__sub_8219C59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C5A0"))) PPC_WEAK_FUNC(sub_8219C5A0);
PPC_FUNC_IMPL(__imp__sub_8219C5A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x8219f2f0
	sub_8219F2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219C5A8"))) PPC_WEAK_FUNC(sub_8219C5A8);
PPC_FUNC_IMPL(__imp__sub_8219C5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82183078
	ctx.lr = 0x8219C5C4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219C5D0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8219C5D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8219c5ec
	if (ctx.cr6.eq) goto loc_8219C5EC;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82183448
	ctx.lr = 0x8219C5E8;
	sub_82183448(ctx, base);
	// b 0x8219c5f4
	goto loc_8219C5F4;
loc_8219C5EC:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x8219C5F4;
	sub_821845A0(ctx, base);
loc_8219C5F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219c624
	if (ctx.cr6.eq) goto loc_8219C624;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8219c438
	ctx.lr = 0x8219C618;
	sub_8219C438(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-19236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19236, ctx.r3.u32);
	// b 0x8219c630
	goto loc_8219C630;
loc_8219C624:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19236, ctx.r11.u32);
loc_8219C630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219C638;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219C650"))) PPC_WEAK_FUNC(sub_8219C650);
PPC_FUNC_IMPL(__imp__sub_8219C650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// addi r10,r11,30896
	ctx.r10.s64 = ctx.r11.s64 + 30896;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8219f308
	ctx.lr = 0x8219C680;
	sub_8219F308(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8219f308
	ctx.lr = 0x8219C688;
	sub_8219F308(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8219f308
	ctx.lr = 0x8219C690;
	sub_8219F308(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8219f308
	ctx.lr = 0x8219C698;
	sub_8219F308(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8219f308
	ctx.lr = 0x8219C6A0;
	sub_8219F308(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-10280
	ctx.r7.s64 = ctx.r9.s64 + -10280;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8219c6c8
	if (ctx.cr6.eq) goto loc_8219C6C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219C6C4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219C6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219C6E0"))) PPC_WEAK_FUNC(sub_8219C6E0);
PPC_FUNC_IMPL(__imp__sub_8219C6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219C6E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bgt cr6,0x8219c718
	if (ctx.cr6.gt) goto loc_8219C718;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8219f2c8
	ctx.lr = 0x8219C700;
	sub_8219F2C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C718:
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bgt cr6,0x8219c740
	if (ctx.cr6.gt) goto loc_8219C740;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x8219f2c8
	ctx.lr = 0x8219C728;
	sub_8219F2C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C740:
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bgt cr6,0x8219c768
	if (ctx.cr6.gt) goto loc_8219C768;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x8219f2c8
	ctx.lr = 0x8219C750;
	sub_8219F2C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C768:
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// bgt cr6,0x8219c790
	if (ctx.cr6.gt) goto loc_8219C790;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8219f2c8
	ctx.lr = 0x8219C778;
	sub_8219F2C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C790:
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82183078
	ctx.lr = 0x8219C798;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219C7A4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8219C7A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8219c7c0
	if (ctx.cr6.eq) goto loc_8219C7C0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82183448
	ctx.lr = 0x8219C7BC;
	sub_82183448(ctx, base);
	// b 0x8219c7cc
	goto loc_8219C7CC;
loc_8219C7C0:
	// addi r11,r31,19
	ctx.r11.s64 = ctx.r31.s64 + 19;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8219C7CC;
	sub_821845A0(ctx, base);
loc_8219C7CC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8219C7DC;
	sub_821837D0(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219C7E8"))) PPC_WEAK_FUNC(sub_8219C7E8);
PPC_FUNC_IMPL(__imp__sub_8219C7E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219c860
	if (ctx.cr6.eq) goto loc_8219C860;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219c860
	if (ctx.cr6.eq) goto loc_8219C860;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,1328
	ctx.r9.s64 = ctx.r11.s64 + 1328;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// ori r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 32768;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
loc_8219C860:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219C868"))) PPC_WEAK_FUNC(sub_8219C868);
PPC_FUNC_IMPL(__imp__sub_8219C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219C870;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219c990
	if (ctx.cr6.eq) goto loc_8219C990;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x8219c990
	if (!ctx.cr6.eq) goto loc_8219C990;
	// cmpwi cr6,r6,56
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 56, ctx.xer);
	// bne cr6,0x8219c990
	if (!ctx.cr6.eq) goto loc_8219C990;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219c8ac
	if (!ctx.cr6.eq) goto loc_8219C8AC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C8AC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219c8d0
	if (!ctx.cr6.eq) goto loc_8219C8D0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r10,r11,-31248
	ctx.r10.s64 = ctx.r11.s64 + -31248;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8219C8D0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219c8e8
	if (!ctx.cr6.eq) goto loc_8219C8E8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,-31272
	ctx.r10.s64 = ctx.r11.s64 + -31272;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_8219C8E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,9520
	ctx.r5.s64 = 9520;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219C900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219c918
	if (!ctx.cr6.eq) goto loc_8219C918;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C918:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bge cr6,0x8219c930
	if (!ctx.cr6.lt) goto loc_8219C930;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// stw r29,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// b 0x8219c948
	goto loc_8219C948;
loc_8219C930:
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bge cr6,0x8219c948
	if (!ctx.cr6.lt) goto loc_8219C948;
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
loc_8219C948:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8219c970
	if (ctx.cr6.lt) goto loc_8219C970;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x8219c970
	if (ctx.cr6.gt) goto loc_8219C970;
	// stw r30,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r29.u32);
	// bl 0x8219c7e8
	ctx.lr = 0x8219C968;
	sub_8219C7E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C970:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219C980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8219C990:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219C99C"))) PPC_WEAK_FUNC(sub_8219C99C);
PPC_FUNC_IMPL(__imp__sub_8219C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219C9A0"))) PPC_WEAK_FUNC(sub_8219C9A0);
PPC_FUNC_IMPL(__imp__sub_8219C9A0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8219c868
	sub_8219C868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219C9B0"))) PPC_WEAK_FUNC(sub_8219C9B0);
PPC_FUNC_IMPL(__imp__sub_8219C9B0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219ca30
	if (ctx.cr6.eq) goto loc_8219CA30;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ca30
	if (ctx.cr6.eq) goto loc_8219CA30;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ca30
	if (ctx.cr6.eq) goto loc_8219CA30;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219c9fc
	if (ctx.cr6.eq) goto loc_8219C9FC;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219C9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219C9FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219CA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8219CA30:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219CA48"))) PPC_WEAK_FUNC(sub_8219CA48);
PPC_FUNC_IMPL(__imp__sub_8219CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8219CA50;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219caa4
	if (!ctx.cr6.eq) goto loc_8219CAA4;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// slw r4,r30,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219CA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219caa4
	if (!ctx.cr6.eq) goto loc_8219CAA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219CAA4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219cac8
	if (!ctx.cr6.eq) goto loc_8219CAC8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_8219CAC8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r30,r11,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8219cb00
	if (ctx.cr6.lt) goto loc_8219CB00;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82087ab0
	ctx.lr = 0x8219CAE8;
	sub_82087AB0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219CB00:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r29,r11,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8219cb14
	if (!ctx.cr6.gt) goto loc_8219CB14;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8219CB14:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// bl 0x82087ab0
	ctx.lr = 0x8219CB28;
	sub_82087AB0(ctx, base);
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8219cb5c
	if (ctx.cr0.eq) goto loc_8219CB5C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r4,r30,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82087ab0
	ctx.lr = 0x8219CB44;
	sub_82087AB0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8219CB5C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219cb78
	if (!ctx.cr6.eq) goto loc_8219CB78;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_8219CB78:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219cb8c
	if (!ctx.cr6.lt) goto loc_8219CB8C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8219CB8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8219CB98"))) PPC_WEAK_FUNC(sub_8219CB98);
PPC_FUNC_IMPL(__imp__sub_8219CB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8219CBA0;
	sub_82248750(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// beq cr6,0x8219e278
	if (ctx.cr6.eq) goto loc_8219E278;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8219e278
	if (ctx.cr6.eq) goto loc_8219E278;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219e278
	if (ctx.cr6.eq) goto loc_8219E278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219cbe4
	if (!ctx.cr6.eq) goto loc_8219CBE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e278
	if (!ctx.cr6.eq) goto loc_8219E278;
loc_8219CBE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8219cbf8
	if (!ctx.cr6.eq) goto loc_8219CBF8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8219CBF8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r15,0(r29)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r15,28
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 28, ctx.xer);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// bgt cr6,0x8219e278
	if (ctx.cr6.gt) goto loc_8219E278;
	// lis r21,-32254
	ctx.r21.s64 = -2113798144;
	// lis r19,-32254
	ctx.r19.s64 = -2113798144;
	// addi r21,r21,-31992
	ctx.r21.s64 = ctx.r21.s64 + -31992;
	// addi r19,r19,-32012
	ctx.r19.s64 = ctx.r19.s64 + -32012;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// lis r24,-32254
	ctx.r24.s64 = -2113798144;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// lis r22,-32254
	ctx.r22.s64 = -2113798144;
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r18,-32254
	ctx.r18.s64 = -2113798144;
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r24,r24,-32040
	ctx.r24.s64 = ctx.r24.s64 + -32040;
	// addi r22,r22,-32076
	ctx.r22.s64 = ctx.r22.s64 + -32076;
	// lis r20,-32254
	ctx.r20.s64 = -2113798144;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// lis r17,-32254
	ctx.r17.s64 = -2113798144;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r8,r8,-32100
	ctx.r8.s64 = ctx.r8.s64 + -32100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r18,r18,-32128
	ctx.r18.s64 = ctx.r18.s64 + -32128;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r10,r10,30912
	ctx.r10.s64 = ctx.r10.s64 + 30912;
	// addi r9,r9,31040
	ctx.r9.s64 = ctx.r9.s64 + 31040;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r26,-32254
	ctx.r26.s64 = -2113798144;
	// lis r25,-32254
	ctx.r25.s64 = -2113798144;
	// addi r24,r20,-32148
	ctx.r24.s64 = ctx.r20.s64 + -32148;
	// lwz r20,92(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r22,r17,-32168
	ctx.r22.s64 = ctx.r17.s64 + -32168;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r16,-32254
	ctx.r16.s64 = -2113798144;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r8,r11,-32192
	ctx.r8.s64 = ctx.r11.s64 + -32192;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r23,-32254
	ctx.r23.s64 = -2113798144;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r7,r7,-32216
	ctx.r7.s64 = ctx.r7.s64 + -32216;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r6,r6,-32248
	ctx.r6.s64 = ctx.r6.s64 + -32248;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r5,-32272
	ctx.r5.s64 = ctx.r5.s64 + -32272;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r4,r4,-32300
	ctx.r4.s64 = ctx.r4.s64 + -32300;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// addi r3,r3,-32324
	ctx.r3.s64 = ctx.r3.s64 + -32324;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r10,r26,-32352
	ctx.r10.s64 = ctx.r26.s64 + -32352;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r9,r25,-32380
	ctx.r9.s64 = ctx.r25.s64 + -32380;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// addi r18,r16,-32408
	ctx.r18.s64 = ctx.r16.s64 + -32408;
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r24,r23,-32448
	ctx.r24.s64 = ctx.r23.s64 + -32448;
	// lwz r23,340(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// li r14,1
	ctx.r14.s64 = 1;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r21,27
	ctx.r21.s64 = 27;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_8219CD54:
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// rlwinm r0,r15,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12948
	ctx.r12.s64 = ctx.r12.s64 + -12948;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-12832(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12832);
	// lwz r16,-12448(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12448);
	// lwz r16,-12268(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12268);
	// lwz r16,-12120(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12120);
	// lwz r16,-11976(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11976);
	// lwz r16,-11808(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11808);
	// lwz r16,-11616(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11616);
	// lwz r16,-11424(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11424);
	// lwz r16,-11236(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11236);
	// lwz r16,-11072(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11072);
	// lwz r16,-10968(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10968);
	// lwz r16,-10924(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10924);
	// lwz r16,-10912(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10912);
	// lwz r16,-10664(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10664);
	// lwz r16,-10556(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10556);
	// lwz r16,-10464(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10464);
	// lwz r16,-10328(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10328);
	// lwz r16,-10052(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10052);
	// lwz r16,-9244(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9244);
	// lwz r16,-8732(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8732);
	// lwz r16,-8628(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8628);
	// lwz r16,-8240(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8240);
	// lwz r16,-8104(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8104);
	// lwz r16,-7932(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7932);
	// lwz r16,-7892(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7892);
	// lwz r16,-7668(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7668);
	// lwz r16,-7496(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7496);
	// lwz r16,-7488(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7488);
	// lwz r16,-7148(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7148);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8219cdf8
	if (!ctx.cr6.eq) goto loc_8219CDF8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219CDF8:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8219ce28
	if (!ctx.cr6.lt) goto loc_8219CE28;
loc_8219CE00:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8219ce00
	if (ctx.cr6.lt) goto loc_8219CE00;
loc_8219CE28:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ce84
	if (ctx.cr6.eq) goto loc_8219CE84;
	// cmplwi cr6,r30,35615
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 35615, ctx.xer);
	// bne cr6,0x8219ce84
	if (!ctx.cr6.eq) goto loc_8219CE84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a03e0
	ctx.lr = 0x8219CE4C;
	sub_821A03E0(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,139
	ctx.r10.s64 = 139;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821a03e0
	ctx.lr = 0x8219CE70;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r14,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r14.u32);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219CE84:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ce9c
	if (ctx.cr6.eq) goto loc_8219CE9C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8219CE9C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219cf58
	if (ctx.cr6.eq) goto loc_8219CF58;
	// rlwinm r10,r30,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// rlwinm r11,r30,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF00;
	// ori r8,r9,4229
	ctx.r8.u64 = ctx.r9.u64 | 4229;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8219cf58
	if (!ctx.cr0.eq) goto loc_8219CF58;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8219cef8
	if (ctx.cr6.eq) goto loc_8219CEF8;
	// stw r18,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r18.u32);
	// b 0x8219e268
	goto loc_8219E268;
loc_8219CEF8:
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219cf1c
	if (!ctx.cr6.gt) goto loc_8219CF1C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219CF1C:
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8219fd60
	ctx.lr = 0x8219CF34;
	sub_8219FD60(ctx, base);
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// rlwimi r9,r10,24,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219CF58:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8219e264
	goto loc_8219E264;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8219cf90
	if (!ctx.cr6.lt) goto loc_8219CF90;
loc_8219CF68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8219cf68
	if (ctx.cr6.lt) goto loc_8219CF68;
loc_8219CF90:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8219cfa8
	if (ctx.cr6.eq) goto loc_8219CFA8;
	// stw r18,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r18.u32);
	// b 0x8219e268
	goto loc_8219E268;
loc_8219CFA8:
	// rlwinm r11,r30,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219cfbc
	if (ctx.cr6.eq) goto loc_8219CFBC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219CFBC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219cfd0
	if (ctx.cr6.eq) goto loc_8219CFD0;
	// rlwinm r10,r30,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0x1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219CFD0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d000
	if (ctx.cr6.eq) goto loc_8219D000;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821a03e0
	ctx.lr = 0x8219CFFC;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D000:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219d01c
	goto loc_8219D01C;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8219d044
	if (!ctx.cr6.lt) goto loc_8219D044;
loc_8219D01C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8219d01c
	if (ctx.cr6.lt) goto loc_8219D01C;
loc_8219D044:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d054
	if (ctx.cr6.eq) goto loc_8219D054;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8219D054:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d094
	if (ctx.cr6.eq) goto loc_8219D094;
	// rlwinm r11,r30,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// rlwinm r9,r30,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r30,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821a03e0
	ctx.lr = 0x8219D090;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D094:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219d0b0
	goto loc_8219D0B0;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8219d0d8
	if (!ctx.cr6.lt) goto loc_8219D0D8;
loc_8219D0B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8219d0b0
	if (ctx.cr6.lt) goto loc_8219D0B0;
loc_8219D0D8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d0f8
	if (ctx.cr6.eq) goto loc_8219D0F8;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r9,r30,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
loc_8219D0F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d128
	if (ctx.cr6.eq) goto loc_8219D128;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821a03e0
	ctx.lr = 0x8219D124;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D128:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d1c8
	if (ctx.cr6.eq) goto loc_8219D1C8;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8219d178
	if (!ctx.cr6.lt) goto loc_8219D178;
loc_8219D150:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8219d150
	if (ctx.cr6.lt) goto loc_8219D150;
loc_8219D178:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r30,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d18c
	if (ctx.cr6.eq) goto loc_8219D18C;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
loc_8219D18C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d1bc
	if (ctx.cr6.eq) goto loc_8219D1BC;
	// rlwinm r11,r30,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821a03e0
	ctx.lr = 0x8219D1B8;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D1BC:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x8219d1d8
	goto loc_8219D1D8;
loc_8219D1C8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d1d8
	if (ctx.cr6.eq) goto loc_8219D1D8;
	// stw r22,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r22.u32);
loc_8219D1D8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d294
	if (ctx.cr6.eq) goto loc_8219D294;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8219d204
	if (!ctx.cr6.gt) goto loc_8219D204;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8219D204:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8219d288
	if (ctx.cr6.eq) goto loc_8219D288;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d250
	if (ctx.cr6.eq) goto loc_8219D250;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8219d250
	if (ctx.cr6.eq) goto loc_8219D250;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r26,r11
	ctx.r6.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8219d244
	if (ctx.cr6.gt) goto loc_8219D244;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8219D244:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82087ab0
	ctx.lr = 0x8219D250;
	sub_82087AB0(ctx, base);
loc_8219D250:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d274
	if (ctx.cr6.eq) goto loc_8219D274;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821a03e0
	ctx.lr = 0x8219D270;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D274:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_8219D288:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e2c4
	if (!ctx.cr6.eq) goto loc_8219E2C4;
loc_8219D294:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r22,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r22.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d344
	if (ctx.cr6.eq) goto loc_8219D344;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8219D2BC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lbzx r25,r26,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d2fc
	if (ctx.cr6.eq) goto loc_8219D2FC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219d2fc
	if (ctx.cr6.eq) goto loc_8219D2FC;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219d2fc
	if (!ctx.cr6.lt) goto loc_8219D2FC;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
loc_8219D2FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8219d30c
	if (ctx.cr6.eq) goto loc_8219D30C;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8219d2bc
	if (ctx.cr6.lt) goto loc_8219D2BC;
loc_8219D30C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d330
	if (ctx.cr6.eq) goto loc_8219D330;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821a03e0
	ctx.lr = 0x8219D32C;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D330:
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8219e2c4
	if (!ctx.cr6.eq) goto loc_8219E2C4;
	// b 0x8219d354
	goto loc_8219D354;
loc_8219D344:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d354
	if (ctx.cr6.eq) goto loc_8219D354;
	// stw r22,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
loc_8219D354:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r22,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r22.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d404
	if (ctx.cr6.eq) goto loc_8219D404;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8219D37C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lbzx r25,r26,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d3bc
	if (ctx.cr6.eq) goto loc_8219D3BC;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219d3bc
	if (ctx.cr6.eq) goto loc_8219D3BC;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219d3bc
	if (!ctx.cr6.lt) goto loc_8219D3BC;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
loc_8219D3BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8219d3cc
	if (ctx.cr6.eq) goto loc_8219D3CC;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8219d37c
	if (ctx.cr6.lt) goto loc_8219D37C;
loc_8219D3CC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d3f0
	if (ctx.cr6.eq) goto loc_8219D3F0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821a03e0
	ctx.lr = 0x8219D3EC;
	sub_821A03E0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_8219D3F0:
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8219e2c4
	if (!ctx.cr6.eq) goto loc_8219E2C4;
	// b 0x8219d414
	goto loc_8219D414;
loc_8219D404:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d414
	if (ctx.cr6.eq) goto loc_8219D414;
	// stw r22,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r22.u32);
loc_8219D414:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219d478
	if (ctx.cr6.eq) goto loc_8219D478;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8219d45c
	if (!ctx.cr6.lt) goto loc_8219D45C;
loc_8219D434:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8219d434
	if (ctx.cr6.lt) goto loc_8219D434;
loc_8219D45C:
	// lhz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219d470
	if (ctx.cr6.eq) goto loc_8219D470;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219D470:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8219D478:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d49c
	if (ctx.cr6.eq) goto loc_8219D49C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// srawi r9,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 9;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r14,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r14.u32);
loc_8219D49C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a03e0
	ctx.lr = 0x8219D4AC;
	sub_821A03E0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8219d4f0
	if (!ctx.cr6.lt) goto loc_8219D4F0;
loc_8219D4C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8219d4c8
	if (ctx.cr6.lt) goto loc_8219D4C8;
loc_8219D4F0:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r30,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e284
	if (ctx.cr6.eq) goto loc_8219E284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8219fd60
	ctx.lr = 0x8219D544;
	sub_8219FD60(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219d584
	if (ctx.cr6.eq) goto loc_8219D584;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// li r10,24
	ctx.r10.s64 = 24;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219D584:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8219d5b4
	if (!ctx.cr6.lt) goto loc_8219D5B4;
loc_8219D58C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8219d58c
	if (ctx.cr6.lt) goto loc_8219D58C;
loc_8219D5B4:
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8219d64c
	if (ctx.cr6.gt) goto loc_8219D64C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8219d5f8
	// bdzf 4*cr6+eq,0x8219d62c
	// bne cr6,0x8219d640
	if (!ctx.cr6.eq) goto loc_8219D640;
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219D5F8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r8,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r8.u32);
	// stw r6,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r6.u32);
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r7,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r7.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219D62C:
	// li r11,15
	ctx.r11.s64 = 15;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219D640:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
loc_8219D64C:
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8219e26c
	goto loc_8219E26C;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8219d694
	if (!ctx.cr6.lt) goto loc_8219D694;
loc_8219D66C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8219d66c
	if (ctx.cr6.lt) goto loc_8219D66C;
loc_8219D694:
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8219d6b0
	if (ctx.cr6.eq) goto loc_8219D6B0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219D6B0:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r26,64(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8219ddb4
	if (ctx.cr6.eq) goto loc_8219DDB4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8219d6dc
	if (!ctx.cr6.gt) goto loc_8219D6DC;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8219D6DC:
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// ble cr6,0x8219d6e8
	if (!ctx.cr6.gt) goto loc_8219D6E8;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_8219D6E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82087ab0
	ctx.lr = 0x8219D700;
	sub_82087AB0(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r19,r26,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r26.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// add r20,r26,r20
	ctx.r20.u64 = ctx.r26.u64 + ctx.r20.u64;
	// b 0x8219e26c
	goto loc_8219E26C;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bge cr6,0x8219d750
	if (!ctx.cr6.lt) goto loc_8219D750;
loc_8219D728:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x8219d728
	if (ctx.cr6.lt) goto loc_8219D728;
loc_8219D750:
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r9,257
	ctx.r10.s64 = ctx.r9.s64 + 257;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// lwz r6,96(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r30,r9,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// stw r8,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r8.u32);
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// stw r7,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r7.u32);
	// cmplwi cr6,r6,286
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 286, ctx.xer);
	// bgt cr6,0x8219d8a8
	if (ctx.cr6.gt) goto loc_8219D8A8;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x8219d8a8
	if (ctx.cr6.gt) goto loc_8219D8A8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r22,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r22.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219d828
	if (!ctx.cr6.lt) goto loc_8219D828;
loc_8219D7B8:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8219d7e8
	if (!ctx.cr6.lt) goto loc_8219D7E8;
loc_8219D7C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8219d7c0
	if (ctx.cr6.lt) goto loc_8219D7C0;
loc_8219D7E8:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// clrlwi r10,r30,29
	ctx.r10.u64 = ctx.r30.u32 & 0x7;
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// lhzx r11,r9,r24
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r24.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r6.u32);
	// lwz r5,92(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8219d7b8
	if (ctx.cr6.lt) goto loc_8219D7B8;
loc_8219D828:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bge cr6,0x8219d864
	if (!ctx.cr6.lt) goto loc_8219D864;
loc_8219D834:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r22.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// cmplwi cr6,r6,19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 19, ctx.xer);
	// blt cr6,0x8219d834
	if (ctx.cr6.lt) goto loc_8219D834;
loc_8219D864:
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r6,r29,108
	ctx.r6.s64 = ctx.r29.s64 + 108;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r8,r29,752
	ctx.r8.s64 = ctx.r29.s64 + 752;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8219f820
	ctx.lr = 0x8219D894;
	sub_8219F820(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219d8b0
	if (ctx.cr6.eq) goto loc_8219D8B0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219D8A8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219D8B0:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r22,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r22.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8219db30
	if (!ctx.cr6.lt) goto loc_8219DB30;
loc_8219D8D4:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8219d950
	if (!ctx.cr6.gt) goto loc_8219D950;
loc_8219D900:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r14,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8219d900
	if (ctx.cr6.gt) goto loc_8219D900;
loc_8219D950:
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8219d9b8
	if (!ctx.cr6.lt) goto loc_8219D9B8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8219d990
	if (!ctx.cr6.lt) goto loc_8219D990;
loc_8219D968:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219d968
	if (ctx.cr6.lt) goto loc_8219D968;
loc_8219D990:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// b 0x8219db18
	goto loc_8219DB18;
loc_8219D9B8:
	// bne cr6,0x8219da24
	if (!ctx.cr6.eq) goto loc_8219DA24;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219d9f0
	if (!ctx.cr6.lt) goto loc_8219D9F0;
loc_8219D9C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8219d9c8
	if (ctx.cr6.lt) goto loc_8219D9C8;
loc_8219D9F0:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219db88
	if (ctx.cr6.eq) goto loc_8219DB88;
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r30,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// lhzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// b 0x8219dacc
	goto loc_8219DACC;
loc_8219DA24:
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x8219da7c
	if (!ctx.cr6.eq) goto loc_8219DA7C;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219da60
	if (!ctx.cr6.lt) goto loc_8219DA60;
loc_8219DA38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8219da38
	if (ctx.cr6.lt) goto loc_8219DA38;
loc_8219DA60:
	// srw r7,r30,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,29
	ctx.r8.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r30,r7,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// addi r31,r9,-3
	ctx.r31.s64 = ctx.r9.s64 + -3;
	// b 0x8219dac8
	goto loc_8219DAC8;
loc_8219DA7C:
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219dab0
	if (!ctx.cr6.lt) goto loc_8219DAB0;
loc_8219DA88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8219da88
	if (ctx.cr6.lt) goto loc_8219DA88;
loc_8219DAB0:
	// srw r7,r30,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,25
	ctx.r8.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r30,r7,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 + 11;
	// addi r31,r9,-7
	ctx.r31.s64 = ctx.r9.s64 + -7;
loc_8219DAC8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8219DACC:
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8219db88
	if (ctx.cr6.gt) goto loc_8219DB88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219db18
	if (ctx.cr6.eq) goto loc_8219DB18;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219DAF8:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r29
	PPC_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r8.u32);
	// bdnz 0x8219daf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219DAF8;
loc_8219DB18:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8219d8d4
	if (ctx.cr6.lt) goto loc_8219D8D4;
loc_8219DB30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x8219e26c
	if (ctx.cr6.eq) goto loc_8219E26C;
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r26,r29,108
	ctx.r26.s64 = ctx.r29.s64 + 108;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r25,r29,752
	ctx.r25.s64 = ctx.r29.s64 + 752;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8219f820
	ctx.lr = 0x8219DB74;
	sub_8219F820(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219db90
	if (ctx.cr6.eq) goto loc_8219DB90;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219DB88:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219DB90:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r7,r29,88
	ctx.r7.s64 = ctx.r29.s64 + 88;
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8219f820
	ctx.lr = 0x8219DBC8;
	sub_8219F820(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219dbdc
	if (ctx.cr6.eq) goto loc_8219DBDC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219DBDC:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x8219dc34
	if (ctx.cr6.lt) goto loc_8219DC34;
	// cmplwi cr6,r19,258
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 258, ctx.xer);
	// blt cr6,0x8219dc34
	if (ctx.cr6.lt) goto loc_8219DC34;
	// stw r20,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r20.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r19,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r19.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r27,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// bl 0x8219f3b8
	ctx.lr = 0x8219DC18;
	sub_8219F3B8(ctx, base);
	// lwz r20,12(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r19,16(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r27,4(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219DC34:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8219dcb0
	if (!ctx.cr6.gt) goto loc_8219DCB0;
loc_8219DC60:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r14,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8219dc60
	if (ctx.cr6.gt) goto loc_8219DC60;
loc_8219DCB0:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219dd80
	if (ctx.cr6.eq) goto loc_8219DD80;
	// rlwinm r7,r9,0,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8219dd80
	if (!ctx.cr6.eq) goto loc_8219DD80;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// slw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lbz r4,89(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8219dd78
	if (!ctx.cr6.gt) goto loc_8219DD78;
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
loc_8219DD14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r14,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8219dd14
	if (ctx.cr6.gt) goto loc_8219DD14;
loc_8219DD78:
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8219DD80:
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219dda8
	if (!ctx.cr6.eq) goto loc_8219DDA8;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219DDA8:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ddc0
	if (ctx.cr6.eq) goto loc_8219DDC0;
loc_8219DDB4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
loc_8219DDC0:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ddd4
	if (ctx.cr6.eq) goto loc_8219DDD4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219DDD4:
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219de44
	if (ctx.cr6.eq) goto loc_8219DE44;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219de24
	if (!ctx.cr6.lt) goto loc_8219DE24;
loc_8219DDF8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8219ddf8
	if (ctx.cr6.lt) goto loc_8219DDF8;
loc_8219DE24:
	// slw r11,r14,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_8219DE44:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r7,80(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8219dec8
	if (!ctx.cr6.gt) goto loc_8219DEC8;
loc_8219DE78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r14,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8219de78
	if (ctx.cr6.gt) goto loc_8219DE78;
loc_8219DEC8:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r6,r9,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8219df98
	if (!ctx.cr6.eq) goto loc_8219DF98;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// slw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lbz r4,89(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8219df8c
	if (!ctx.cr6.gt) goto loc_8219DF8C;
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
loc_8219DF28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r14,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8219df28
	if (ctx.cr6.gt) goto loc_8219DF28;
loc_8219DF8C:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8219DF98:
	// rlwinm r10,r9,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219dfb8
	if (ctx.cr6.eq) goto loc_8219DFB8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219DFB8:
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r7.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219e030
	if (ctx.cr6.eq) goto loc_8219E030;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219e010
	if (!ctx.cr6.lt) goto loc_8219E010;
loc_8219DFE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8219dfe4
	if (ctx.cr6.lt) goto loc_8219DFE4;
loc_8219E010:
	// slw r11,r14,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
loc_8219E030:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8219e050
	if (!ctx.cr6.gt) goto loc_8219E050;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219E050:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r9,r19,r17
	ctx.r9.s64 = ctx.r17.s64 - ctx.r19.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8219e0b0
	if (!ctx.cr6.gt) goto loc_8219E0B0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219e098
	if (!ctx.cr6.gt) goto loc_8219E098;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8219e0a0
	goto loc_8219E0A0;
loc_8219E098:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8219E0A0:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219e0bc
	if (!ctx.cr6.gt) goto loc_8219E0BC;
	// b 0x8219e0b8
	goto loc_8219E0B8;
loc_8219E0B0:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r9,r11,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r11.s64;
loc_8219E0B8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8219E0BC:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// ble cr6,0x8219e0c8
	if (!ctx.cr6.gt) goto loc_8219E0C8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8219E0C8:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r19,r11,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r11.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// subf r10,r20,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r20.s64;
loc_8219E0D8:
	// lbzx r9,r10,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r20.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r9.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// bne 0x8219e0d8
	if (!ctx.cr0.eq) goto loc_8219E0D8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e26c
	if (!ctx.cr6.eq) goto loc_8219E26C;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r9.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8219e26c
	goto loc_8219E26C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e204
	if (ctx.cr6.eq) goto loc_8219E204;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8219e168
	if (!ctx.cr6.lt) goto loc_8219E168;
loc_8219E140:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8219e140
	if (ctx.cr6.lt) goto loc_8219E140;
loc_8219E168:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// subf. r5,r19,r17
	ctx.r5.s64 = ctx.r17.s64 - ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// beq 0x8219e1b0
	if (ctx.cr0.eq) goto loc_8219E1B0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r4,r5,r20
	ctx.r4.s64 = ctx.r20.s64 - ctx.r5.s64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e1a4
	if (ctx.cr6.eq) goto loc_8219E1A4;
	// bl 0x821a03e0
	ctx.lr = 0x8219E1A0;
	sub_821A03E0(ctx, base);
	// b 0x8219e1a8
	goto loc_8219E1A8;
loc_8219E1A4:
	// bl 0x8219fd60
	ctx.lr = 0x8219E1A8;
	sub_8219FD60(ctx, base);
loc_8219E1A8:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
loc_8219E1B0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e1c8
	if (ctx.cr6.eq) goto loc_8219E1C8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8219e1e8
	goto loc_8219E1E8;
loc_8219E1C8:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r30,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219E1E8:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219e1fc
	if (ctx.cr6.eq) goto loc_8219E1FC;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x8219e264
	goto loc_8219E264;
loc_8219E1FC:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8219E204:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e2b0
	if (ctx.cr6.eq) goto loc_8219E2B0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219e2b0
	if (ctx.cr6.eq) goto loc_8219E2B0;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8219e254
	if (!ctx.cr6.lt) goto loc_8219E254;
loc_8219E22C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219e2c4
	if (ctx.cr6.eq) goto loc_8219E2C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8219e22c
	if (ctx.cr6.lt) goto loc_8219E22C;
loc_8219E254:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219e2a8
	if (ctx.cr6.eq) goto loc_8219E2A8;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8219E264:
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
loc_8219E268:
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
loc_8219E26C:
	// lwz r15,0(r29)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r15,28
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 28, ctx.xer);
	// ble cr6,0x8219cd54
	if (!ctx.cr6.gt) goto loc_8219CD54;
loc_8219E278:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219E284:
	// stw r20,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r20.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r19,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r19.u32);
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r27,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219E2A8:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8219E2B0:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// b 0x8219e2c4
	goto loc_8219E2C4;
	// li r16,-3
	ctx.r16.s64 = -3;
loc_8219E2C4:
	// stw r20,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r20.u32);
	// stw r27,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r27.u32);
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r19,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r19.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e300
	if (!ctx.cr6.eq) goto loc_8219E300;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8219e328
	if (!ctx.cr6.lt) goto loc_8219E328;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219e328
	if (ctx.cr6.eq) goto loc_8219E328;
loc_8219E300:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8219ca48
	ctx.lr = 0x8219E30C;
	sub_8219CA48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219e328
	if (ctx.cr6.eq) goto loc_8219E328;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219E328:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,16(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// subf r31,r8,r17
	ctx.r31.s64 = ctx.r17.s64 - ctx.r8.s64;
	// stw r7,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r7.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r6.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r5,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8219e3a4
	if (ctx.cr6.eq) goto loc_8219E3A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219e3a4
	if (ctx.cr6.eq) goto loc_8219E3A4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// beq cr6,0x8219e398
	if (ctx.cr6.eq) goto loc_8219E398;
	// bl 0x821a03e0
	ctx.lr = 0x8219E394;
	sub_821A03E0(ctx, base);
	// b 0x8219e39c
	goto loc_8219E39C;
loc_8219E398:
	// bl 0x8219fd60
	ctx.lr = 0x8219E39C;
	sub_8219FD60(ctx, base);
loc_8219E39C:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
loc_8219E3A4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,128
	ctx.r8.s64 = 128;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r5,r11,-11
	ctx.r5.s64 = ctx.r11.s64 + -11;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// and r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// and r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r5.u32);
	// bne cr6,0x8219e3f0
	if (!ctx.cr6.eq) goto loc_8219E3F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219e3fc
	if (ctx.cr6.eq) goto loc_8219E3FC;
loc_8219E3F0:
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8219e408
	if (!ctx.cr6.eq) goto loc_8219E408;
loc_8219E3FC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x8219e408
	if (!ctx.cr6.eq) goto loc_8219E408;
	// li r16,-5
	ctx.r16.s64 = -5;
loc_8219E408:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219E420"))) PPC_WEAK_FUNC(sub_8219E420);
PPC_FUNC_IMPL(__imp__sub_8219E420) {
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
	// bl 0x821a03f8
	ctx.lr = 0x8219E438;
	sub_821A03F8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31960
	ctx.r9.s64 = ctx.r11.s64 + -31960;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8219E464"))) PPC_WEAK_FUNC(sub_8219E464);
PPC_FUNC_IMPL(__imp__sub_8219E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219E468"))) PPC_WEAK_FUNC(sub_8219E468);
PPC_FUNC_IMPL(__imp__sub_8219E468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8219E470;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,29127
	ctx.r9.u64 = ctx.r10.u64 | 29127;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8219e4ac
	if (ctx.cr6.gt) goto loc_8219E4AC;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8219e4b0
	if (!ctx.cr6.gt) goto loc_8219E4B0;
loc_8219E4AC:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8219E4B0:
	// bl 0x82183850
	ctx.lr = 0x8219E4B4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8219e4cc
	if (ctx.cr6.eq) goto loc_8219E4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8219E4C8;
	sub_82183448(ctx, base);
	// b 0x8219e4d8
	goto loc_8219E4D8;
loc_8219E4CC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8219E4D8;
	sub_821845A0(ctx, base);
loc_8219E4D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8219e530
	if (ctx.cr6.eq) goto loc_8219E530;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addic. r9,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r9.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x8219e528
	if (ctx.cr0.lt) goto loc_8219E528;
loc_8219E4F8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bge 0x8219e4f8
	if (!ctx.cr0.lt) goto loc_8219E4F8;
loc_8219E528:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8219e534
	goto loc_8219E534;
loc_8219E530:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8219E534:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8219e5b8
	if (!ctx.cr6.gt) goto loc_8219E5B8;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8219E548:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8218e690
	ctx.lr = 0x8219E55C;
	sub_8218E690(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x8219e5a8
	if (!ctx.cr6.lt) goto loc_8219E5A8;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256e38
	ctx.lr = 0x8219E578;
	sub_82256E38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256e40
	ctx.lr = 0x8219E584;
	sub_82256E40(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8219e5a4
	if (!ctx.cr6.eq) goto loc_8219E5A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8219E5A4:
	// bctrl 
	ctx.lr = 0x8219E5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219E5A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8219e548
	if (ctx.cr6.lt) goto loc_8219E548;
loc_8219E5B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8219E5C0"))) PPC_WEAK_FUNC(sub_8219E5C0);
PPC_FUNC_IMPL(__imp__sub_8219E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8219E5C8;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249928
	ctx.lr = 0x8219E5D0;
	sub_82249928(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8219e5ec
	if (ctx.cr6.lt) goto loc_8219E5EC;
	// li r25,4
	ctx.r25.s64 = 4;
loc_8219E5EC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8219e658
	if (!ctx.cr6.gt) goto loc_8219E658;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8219E5FC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8218e690
	ctx.lr = 0x8219E610;
	sub_8218E690(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82256e40
	ctx.lr = 0x8219E624;
	sub_82256E40(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r3,-1167
	ctx.r10.s64 = ctx.r3.s64 + -1167;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// lwz r7,720(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 & ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219E648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8219e5fc
	if (ctx.cr6.lt) goto loc_8219E5FC;
loc_8219E658:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8219f184
	if (!ctx.cr6.gt) goto loc_8219F184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f28,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f28.f64 = double(temp.f32);
	// li r24,-32767
	ctx.r24.s64 = -32767;
	// lfs f29,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,30772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30772);
	ctx.f31.f64 = double(temp.f32);
loc_8219E68C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x8218e690
	ctx.lr = 0x8219E6A0;
	sub_8218E690(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219E6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8219e77c
	if (ctx.cr6.lt) goto loc_8219E77C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,712(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219E6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r7,712(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219E718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r5,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFE;
	// lwz r11,716(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 716);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219E738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,716(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219E754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,644(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219E76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219e848
	if (!ctx.cr6.gt) goto loc_8219E848;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// b 0x8219e848
	goto loc_8219E848;
loc_8219E77C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bne cr6,0x8219e788
	if (!ctx.cr6.eq) goto loc_8219E788;
	// sth r24,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r24.u16);
loc_8219E788:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// sth r9,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r9.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,712(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219E7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,712(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219E7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,716(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 716);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219E804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r10,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFE;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219E824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,644(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219E83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219e848
	if (!ctx.cr6.gt) goto loc_8219E848;
	// lis r29,8
	ctx.r29.s64 = 524288;
loc_8219E848:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8219e90c
	if (ctx.cr6.lt) goto loc_8219E90C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219E874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r5,712(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219E8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219E8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r8,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// lwz r7,716(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 716);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219E8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,644(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 644);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8219E8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219e9d8
	if (!ctx.cr6.gt) goto loc_8219E9D8;
	// oris r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 65536;
	// b 0x8219e9d8
	goto loc_8219E9D8;
loc_8219E90C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bne cr6,0x8219e918
	if (!ctx.cr6.eq) goto loc_8219E918;
	// sth r24,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r24.u16);
loc_8219E918:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r8.u16);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,712(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 712);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219E95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r9,712(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219E978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// lhz r7,6(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r7,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// lwz r6,716(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 716);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219E998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219E9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8219E9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219e9d8
	if (!ctx.cr6.gt) goto loc_8219E9D8;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_8219E9D8:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8219ea98
	if (ctx.cr6.lt) goto loc_8219EA98;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,712(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219EA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r7,712(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219EA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r5,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFE;
	// lwz r11,716(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 716);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219EA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,716(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,644(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219EA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219eb64
	if (!ctx.cr6.gt) goto loc_8219EB64;
	// oris r29,r29,32
	ctx.r29.u64 = ctx.r29.u64 | 2097152;
	// b 0x8219eb64
	goto loc_8219EB64;
loc_8219EA98:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bne cr6,0x8219eaa4
	if (!ctx.cr6.eq) goto loc_8219EAA4;
	// sth r24,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r24.u16);
loc_8219EAA4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,712(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219EAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,712(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219EB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,716(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 716);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219EB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r10,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFE;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,644(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219EB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219eb64
	if (!ctx.cr6.gt) goto loc_8219EB64;
	// oris r29,r29,128
	ctx.r29.u64 = ctx.r29.u64 | 8388608;
loc_8219EB64:
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8219ec28
	if (ctx.cr6.lt) goto loc_8219EC28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219EB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r5,712(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219EBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219EBE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// lhz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r8,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// lwz r7,716(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 716);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219EC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,644(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 644);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8219EC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219ecf4
	if (!ctx.cr6.gt) goto loc_8219ECF4;
	// oris r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 1048576;
	// b 0x8219ecf4
	goto loc_8219ECF4;
loc_8219EC28:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bne cr6,0x8219ec34
	if (!ctx.cr6.eq) goto loc_8219EC34;
	// sth r24,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r24.u16);
loc_8219EC34:
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r8.u16);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,712(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 712);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8219EC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r9,712(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// lhz r7,10(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r7,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// lwz r6,716(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 716);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219ECB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219ECD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8219ECE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x8219ecf4
	if (!ctx.cr6.gt) goto loc_8219ECF4;
	// oris r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 | 4194304;
loc_8219ECF4:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r7,712(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x8219ED24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r6,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r9,712(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 712);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bctrl 
	ctx.lr = 0x8219ED54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r8,20,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r11,712(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219ED84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r10,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f8,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r6,712(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 712);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219EDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f6,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r8,712(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8219EDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r7,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f4,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r10,712(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 712);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219EE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r9,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f2,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lwz r5,712(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8219EE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// rlwinm r8,r11,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,712(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8219EE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f12,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r10,712(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 712);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// bctrl 
	ctx.lr = 0x8219EEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lfd f9,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r6,712(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// fmuls f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// bctrl 
	ctx.lr = 0x8219EED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// lwz r9,716(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 716);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r6,19,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1;
	// lwz r11,716(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 716);
	// rlwinm r10,r5,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF00;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219EF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,20,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1;
	// lwz r6,716(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 716);
	// rlwinm r5,r7,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219EF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// rlwinm r7,r8,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,716(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 716);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219EFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r6,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x1;
	// lwz r11,716(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 716);
	// rlwinm r10,r5,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF00;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219EFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// lwz r6,716(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 716);
	// rlwinm r5,r7,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219EFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lwz r8,716(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// rlwinm r7,r9,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8219F018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lwz r11,716(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 716);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lwz r9,716(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219F050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f13c
	if (ctx.cr6.eq) goto loc_8219F13C;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f06c
	if (ctx.cr6.eq) goto loc_8219F06C;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
loc_8219F06C:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f07c
	if (ctx.cr6.eq) goto loc_8219F07C;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_8219F07C:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f08c
	if (ctx.cr6.eq) goto loc_8219F08C;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
loc_8219F08C:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f09c
	if (ctx.cr6.eq) goto loc_8219F09C;
	// ori r29,r29,8
	ctx.r29.u64 = ctx.r29.u64 | 8;
loc_8219F09C:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0ac
	if (ctx.cr6.eq) goto loc_8219F0AC;
	// ori r29,r29,256
	ctx.r29.u64 = ctx.r29.u64 | 256;
loc_8219F0AC:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0bc
	if (ctx.cr6.eq) goto loc_8219F0BC;
	// ori r29,r29,512
	ctx.r29.u64 = ctx.r29.u64 | 512;
loc_8219F0BC:
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0cc
	if (ctx.cr6.eq) goto loc_8219F0CC;
	// ori r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 16;
loc_8219F0CC:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0dc
	if (ctx.cr6.eq) goto loc_8219F0DC;
	// ori r29,r29,32
	ctx.r29.u64 = ctx.r29.u64 | 32;
loc_8219F0DC:
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0ec
	if (ctx.cr6.eq) goto loc_8219F0EC;
	// ori r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 | 64;
loc_8219F0EC:
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f0fc
	if (ctx.cr6.eq) goto loc_8219F0FC;
	// ori r29,r29,128
	ctx.r29.u64 = ctx.r29.u64 | 128;
loc_8219F0FC:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f10c
	if (ctx.cr6.eq) goto loc_8219F10C;
	// ori r29,r29,1024
	ctx.r29.u64 = ctx.r29.u64 | 1024;
loc_8219F10C:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f11c
	if (ctx.cr6.eq) goto loc_8219F11C;
	// ori r29,r29,2048
	ctx.r29.u64 = ctx.r29.u64 | 2048;
loc_8219F11C:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f12c
	if (ctx.cr6.eq) goto loc_8219F12C;
	// ori r29,r29,16384
	ctx.r29.u64 = ctx.r29.u64 | 16384;
loc_8219F12C:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f13c
	if (ctx.cr6.eq) goto loc_8219F13C;
	// ori r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 32768;
loc_8219F13C:
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// ble cr6,0x8219f14c
	if (!ctx.cr6.gt) goto loc_8219F14C;
	// ori r29,r29,4096
	ctx.r29.u64 = ctx.r29.u64 | 4096;
loc_8219F14C:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// ble cr6,0x8219f15c
	if (!ctx.cr6.gt) goto loc_8219F15C;
	// ori r29,r29,8192
	ctx.r29.u64 = ctx.r29.u64 | 8192;
loc_8219F15C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219F174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8219e68c
	if (ctx.cr6.lt) goto loc_8219E68C;
loc_8219F184:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249974
	ctx.lr = 0x8219F190;
	sub_82249974(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8219F194"))) PPC_WEAK_FUNC(sub_8219F194);
PPC_FUNC_IMPL(__imp__sub_8219F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F198"))) PPC_WEAK_FUNC(sub_8219F198);
PPC_FUNC_IMPL(__imp__sub_8219F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219F1A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-31960
	ctx.r9.s64 = ctx.r11.s64 + -31960;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8219f1f4
	if (!ctx.cr6.gt) goto loc_8219F1F4;
loc_8219F1C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218e690
	ctx.lr = 0x8219F1D4;
	sub_8218E690(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219F1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8219f1c8
	if (ctx.cr6.lt) goto loc_8219F1C8;
loc_8219F1F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f20c
	if (ctx.cr6.eq) goto loc_8219F20C;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82183e40
	ctx.lr = 0x8219F20C;
	sub_82183E40(ctx, base);
loc_8219F20C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x821a0410
	ctx.lr = 0x8219F21C;
	sub_821A0410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219F224"))) PPC_WEAK_FUNC(sub_8219F224);
PPC_FUNC_IMPL(__imp__sub_8219F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F228"))) PPC_WEAK_FUNC(sub_8219F228);
PPC_FUNC_IMPL(__imp__sub_8219F228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8219f198
	ctx.lr = 0x8219F248;
	sub_8219F198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f264
	if (ctx.cr6.eq) goto loc_8219F264;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219F260;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219F264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219F27C"))) PPC_WEAK_FUNC(sub_8219F27C);
PPC_FUNC_IMPL(__imp__sub_8219F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F280"))) PPC_WEAK_FUNC(sub_8219F280);
PPC_FUNC_IMPL(__imp__sub_8219F280) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31944
	ctx.r9.s64 = ctx.r11.s64 + -31944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821a05a0
	ctx.lr = 0x8219F2B0;
	sub_821A05A0(ctx, base);
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

__attribute__((alias("__imp__sub_8219F2C8"))) PPC_WEAK_FUNC(sub_8219F2C8);
PPC_FUNC_IMPL(__imp__sub_8219F2C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219f2e4
	if (ctx.cr6.eq) goto loc_8219F2E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8219F2E4:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x821a0610
	sub_821A0610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219F2EC"))) PPC_WEAK_FUNC(sub_8219F2EC);
PPC_FUNC_IMPL(__imp__sub_8219F2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F2F0"))) PPC_WEAK_FUNC(sub_8219F2F0);
PPC_FUNC_IMPL(__imp__sub_8219F2F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219F308"))) PPC_WEAK_FUNC(sub_8219F308);
PPC_FUNC_IMPL(__imp__sub_8219F308) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31944
	ctx.r9.s64 = ctx.r11.s64 + -31944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0688
	ctx.lr = 0x8219F338;
	sub_821A0688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0600
	ctx.lr = 0x8219F340;
	sub_821A0600(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8219F354"))) PPC_WEAK_FUNC(sub_8219F354);
PPC_FUNC_IMPL(__imp__sub_8219F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F358"))) PPC_WEAK_FUNC(sub_8219F358);
PPC_FUNC_IMPL(__imp__sub_8219F358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8219F360;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31944
	ctx.r9.s64 = ctx.r11.s64 + -31944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821a0688
	ctx.lr = 0x8219F38C;
	sub_821A0688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a0600
	ctx.lr = 0x8219F394;
	sub_821A0600(ctx, base);
	// clrlwi r8,r29,31
	ctx.r8.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8219f3b0
	if (ctx.cr6.eq) goto loc_8219F3B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8219F3AC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219F3B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8219F3B8"))) PPC_WEAK_FUNC(sub_8219F3B8);
PPC_FUNC_IMPL(__imp__sub_8219F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x8219F3C0;
	sub_82248758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r17,3
	ctx.r17.s64 = 3;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r6,r4,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// slw r5,r29,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r25,40(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// slw r4,r29,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r20,44(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r21,r10,-5
	ctx.r21.s64 = ctx.r10.s64 + -5;
	// lwz r19,52(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r18,r8,-257
	ctx.r18.s64 = ctx.r8.s64 + -257;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// lwz r26,76(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r23,r4,-1
	ctx.r23.s64 = ctx.r4.s64 + -1;
	// lwz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
loc_8219F434:
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bge cr6,0x8219f45c
	if (!ctx.cr6.lt) goto loc_8219F45C;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8219F45C:
	// and r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 & ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8219f4e0
	if (ctx.cr6.eq) goto loc_8219F4E0;
loc_8219F484:
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219f4ec
	if (!ctx.cr6.eq) goto loc_8219F4EC;
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219f798
	if (!ctx.cr6.eq) goto loc_8219F798;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// and r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 & ctx.r11.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lbz r6,-144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bne cr6,0x8219f484
	if (!ctx.cr6.eq) goto loc_8219F484;
loc_8219F4E0:
	// lhz r10,-142(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// b 0x8219f76c
	goto loc_8219F76C;
loc_8219F4EC:
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lhz r5,-142(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f52c
	if (ctx.cr6.eq) goto loc_8219F52C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219f514
	if (!ctx.cr6.lt) goto loc_8219F514;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8219F514:
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_8219F52C:
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bge cr6,0x8219f554
	if (!ctx.cr6.lt) goto loc_8219F554;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8219F554:
	// and r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 & ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219f5cc
	if (!ctx.cr6.eq) goto loc_8219F5CC;
loc_8219F580:
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8219f78c
	if (!ctx.cr6.eq) goto loc_8219F78C;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ctx.r11.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// rlwinm r4,r10,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219f580
	if (ctx.cr6.eq) goto loc_8219F580;
loc_8219F5CC:
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lhz r6,-142(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219f604
	if (!ctx.cr6.lt) goto loc_8219F604;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219f604
	if (!ctx.cr6.lt) goto loc_8219F604;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8219F604:
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r10,r24,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r24.s64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219f724
	if (!ctx.cr6.gt) goto loc_8219F724;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8219f780
	if (ctx.cr6.gt) goto loc_8219F780;
	// addi r6,r19,-1
	ctx.r6.s64 = ctx.r19.s64 + -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// bne cr6,0x8219f668
	if (!ctx.cr6.eq) goto loc_8219F668;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bge cr6,0x8219f6e8
	if (!ctx.cr6.lt) goto loc_8219F6E8;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8219F654:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8219f654
	if (!ctx.cr0.eq) goto loc_8219F654;
	// b 0x8219f6e4
	goto loc_8219F6E4;
loc_8219F668:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bge cr6,0x8219f6c8
	if (!ctx.cr6.lt) goto loc_8219F6C8;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8219f6e8
	if (!ctx.cr6.lt) goto loc_8219F6E8;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8219F68C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r16,r10,r7
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r16,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r16.u8);
	// bne 0x8219f68c
	if (!ctx.cr0.eq) goto loc_8219F68C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8219f6e8
	if (!ctx.cr6.lt) goto loc_8219F6E8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
loc_8219F6B4:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8219f6b4
	if (!ctx.cr0.eq) goto loc_8219F6B4;
	// b 0x8219f6e4
	goto loc_8219F6E4;
loc_8219F6C8:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8219f6e8
	if (!ctx.cr6.lt) goto loc_8219F6E8;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8219F6D4:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8219f6d4
	if (!ctx.cr0.eq) goto loc_8219F6D4;
loc_8219F6E4:
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8219F6E8:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// ble cr6,0x8219f74c
	if (!ctx.cr6.gt) goto loc_8219F74C;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// divwu r8,r8,r17
	ctx.r8.u32 = ctx.r8.u32 / ctx.r17.u32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219F700:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8219f700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F700;
	// b 0x8219f74c
	goto loc_8219F74C;
loc_8219F724:
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8219F728:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bgt cr6,0x8219f728
	if (ctx.cr6.gt) goto loc_8219F728;
loc_8219F74C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219f76c
	if (ctx.cr6.eq) goto loc_8219F76C;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// ble cr6,0x8219f76c
	if (!ctx.cr6.gt) goto loc_8219F76C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
loc_8219F76C:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8219f7c4
	if (!ctx.cr6.lt) goto loc_8219F7C4;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8219f434
	if (ctx.cr6.lt) goto loc_8219F434;
	// b 0x8219f7c4
	goto loc_8219F7C4;
loc_8219F780:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,-32248
	ctx.r6.s64 = ctx.r10.s64 + -32248;
	// b 0x8219f7b8
	goto loc_8219F7B8;
loc_8219F78C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,-32272
	ctx.r6.s64 = ctx.r10.s64 + -32272;
	// b 0x8219f7b8
	goto loc_8219F7B8;
loc_8219F798:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f7b0
	if (ctx.cr6.eq) goto loc_8219F7B0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8219f7c4
	goto loc_8219F7C4;
loc_8219F7B0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,-32300
	ctx.r6.s64 = ctx.r10.s64 + -32300;
loc_8219F7B8:
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8219F7C4:
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r6,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r6.s64;
	// slw r9,r29,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// subf r11,r10,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r10.s64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r7,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r7.s64;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r9.u32);
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_8219F81C"))) PPC_WEAK_FUNC(sub_8219F81C);
PPC_FUNC_IMPL(__imp__sub_8219F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8219F820"))) PPC_WEAK_FUNC(sub_8219F820);
PPC_FUNC_IMPL(__imp__sub_8219F820) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8219F828;
	sub_82248750(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219F844:
	// sthu r9,2(r10)
	// bdnz 0x8219f844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F844;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219f87c
	if (ctx.cr6.eq) goto loc_8219F87C;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8219F85C:
	// lhzu r10,2(r9)
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sthx r31,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u16);
	// bdnz 0x8219f85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F85C;
loc_8219F87C:
	// lwz r14,0(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r16,15
	ctx.r16.s64 = 15;
	// addi r11,r1,-194
	ctx.r11.s64 = ctx.r1.s64 + -194;
loc_8219F888:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f8a4
	if (!ctx.cr6.eq) goto loc_8219F8A4;
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1, ctx.xer);
	// bge cr6,0x8219f888
	if (!ctx.cr6.lt) goto loc_8219F888;
loc_8219F8A4:
	// cmplw cr6,r14,r16
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x8219f8b0
	if (!ctx.cr6.gt) goto loc_8219F8B0;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
loc_8219F8B0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// bne cr6,0x8219f900
	if (!ctx.cr6.eq) goto loc_8219F900;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r21,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r21.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219F900:
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8219F908:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f974
	if (!ctx.cr6.eq) goto loc_8219F974;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f958
	if (!ctx.cr6.eq) goto loc_8219F958;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f960
	if (!ctx.cr6.eq) goto loc_8219F960;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f968
	if (!ctx.cr6.eq) goto loc_8219F968;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219f970
	if (!ctx.cr6.eq) goto loc_8219F970;
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// ble cr6,0x8219f908
	if (!ctx.cr6.gt) goto loc_8219F908;
	// b 0x8219f974
	goto loc_8219F974;
loc_8219F958:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8219f974
	goto loc_8219F974;
loc_8219F960:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x8219f974
	goto loc_8219F974;
loc_8219F968:
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x8219f974
	goto loc_8219F974;
loc_8219F970:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8219F974:
	// cmplw cr6,r14,r28
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8219f980
	if (!ctx.cr6.lt) goto loc_8219F980;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_8219F980:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r11,r1,-222
	ctx.r11.s64 = ctx.r1.s64 + -222;
loc_8219F98C:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8219fa94
	if (ctx.cr0.lt) goto loc_8219FA94;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// ble cr6,0x8219f98c
	if (!ctx.cr6.gt) goto loc_8219F98C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8219f9c4
	if (!ctx.cr6.gt) goto loc_8219F9C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219fa94
	if (ctx.cr6.eq) goto loc_8219FA94;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1, ctx.xer);
	// bne cr6,0x8219fa94
	if (!ctx.cr6.eq) goto loc_8219FA94;
loc_8219F9C4:
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r7,-190(r1)
	PPC_STORE_U16(ctx.r1.u32 + -190, ctx.r7.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-224
	ctx.r30.s64 = ctx.r1.s64 + -224;
	// addi r29,r1,-190
	ctx.r29.s64 = ctx.r1.s64 + -190;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219F9E0:
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r27,r1,-222
	ctx.r27.s64 = ctx.r1.s64 + -222;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// addi r26,r1,-188
	ctx.r26.s64 = ctx.r1.s64 + -188;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r10,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r10,r11,r26
	PPC_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8219f9e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F9E0;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219fa70
	if (ctx.cr6.eq) goto loc_8219FA70;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8219FA28:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219fa64
	if (ctx.cr6.eq) goto loc_8219FA64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lhzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sthx r31,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthx r5,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u16);
loc_8219FA64:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8219fa28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219FA28;
loc_8219FA70:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8219fabc
	if (ctx.cr6.lt) goto loc_8219FABC;
	// beq cr6,0x8219fa9c
	if (ctx.cr6.eq) goto loc_8219FA9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r18,r11,-31744
	ctx.r18.s64 = ctx.r11.s64 + -31744;
	// addi r19,r10,-31808
	ctx.r19.s64 = ctx.r10.s64 + -31808;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x8219fac8
	goto loc_8219FAC8;
loc_8219FA94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219FA9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-31876
	ctx.r11.s64 = ctx.r11.s64 + -31876;
	// addi r10,r10,-31940
	ctx.r10.s64 = ctx.r10.s64 + -31940;
	// addi r18,r11,-514
	ctx.r18.s64 = ctx.r11.s64 + -514;
	// addi r19,r10,-514
	ctx.r19.s64 = ctx.r10.s64 + -514;
	// li r23,256
	ctx.r23.s64 = 256;
	// b 0x8219fac8
	goto loc_8219FAC8;
loc_8219FABC:
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r23,19
	ctx.r23.s64 = 19;
loc_8219FAC8:
	// slw r11,r21,r14
	ctx.r11.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r14.u8 & 0x3F));
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// addi r15,r11,-1
	ctx.r15.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8219faf8
	if (!ctx.cr6.eq) goto loc_8219FAF8;
	// cmplwi cr6,r11,1456
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1456, ctx.xer);
	// bge cr6,0x8219fd58
	if (!ctx.cr6.lt) goto loc_8219FD58;
loc_8219FAF8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r20,96
	ctx.r20.s64 = 96;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
loc_8219FB08:
	// subf r9,r27,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r27.s64;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8219fb30
	if (!ctx.cr6.lt) goto loc_8219FB30;
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// stb r7,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r7.u8);
	// b 0x8219fb58
	goto loc_8219FB58;
loc_8219FB30:
	// ble cr6,0x8219fb50
	if (!ctx.cr6.gt) goto loc_8219FB50;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r19
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// lhzx r11,r10,r18
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// stb r8,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r8.u8);
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// b 0x8219fb58
	goto loc_8219FB58;
loc_8219FB50:
	// stb r20,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r20.u8);
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
loc_8219FB58:
	// slw r10,r21,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,-240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// srw r9,r30,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
loc_8219FB68:
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bne 0x8219fb68
	if (!ctx.cr0.eq) goto loc_8219FB68;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219fba0
	if (ctx.cr6.eq) goto loc_8219FBA0;
loc_8219FB90:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219fb90
	if (!ctx.cr6.eq) goto loc_8219FB90;
loc_8219FBA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219fbb8
	if (ctx.cr6.eq) goto loc_8219FBB8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8219fbbc
	goto loc_8219FBBC;
loc_8219FBB8:
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_8219FBBC:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 + ctx.r22.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219fbf4
	if (!ctx.cr6.eq) goto loc_8219FBF4;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8219fcb0
	if (ctx.cr6.eq) goto loc_8219FCB0;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r28,r10,r4
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
loc_8219FBF4:
	// cmplw cr6,r28,r14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x8219fb08
	if (!ctx.cr6.gt) goto loc_8219FB08;
	// and r31,r15,r30
	ctx.r31.u64 = ctx.r15.u64 & ctx.r30.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8219fb08
	if (ctx.cr6.eq) goto loc_8219FB08;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8219fc14
	if (!ctx.cr6.eq) goto loc_8219FC14;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
loc_8219FC14:
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// slw r8,r21,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8219fc60
	if (!ctx.cr6.lt) goto loc_8219FC60;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
loc_8219FC3C:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8219fc60
	if (!ctx.cr0.gt) goto loc_8219FC60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8219fc3c
	if (ctx.cr6.lt) goto loc_8219FC3C;
loc_8219FC60:
	// slw r29,r21,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r17,r29,r17
	ctx.r17.u64 = ctx.r29.u64 + ctx.r17.u64;
	// bne cr6,0x8219fc78
	if (!ctx.cr6.eq) goto loc_8219FC78;
	// cmplwi cr6,r17,1456
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1456, ctx.xer);
	// bge cr6,0x8219fd58
	if (!ctx.cr6.lt) goto loc_8219FD58;
loc_8219FC78:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r14,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r14.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// b 0x8219fb08
	goto loc_8219FB08;
loc_8219FCB0:
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// beq cr6,0x8219fd38
	if (ctx.cr6.eq) goto loc_8219FD38;
loc_8219FCC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219fcec
	if (ctx.cr6.eq) goto loc_8219FCEC;
	// and r11,r15,r30
	ctx.r11.u64 = ctx.r15.u64 & ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8219fcec
	if (ctx.cr6.eq) goto loc_8219FCEC;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stb r14,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r14.u8);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_8219FCEC:
	// srw r11,r30,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r21,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// and r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stwx r10,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219fd20
	if (ctx.cr6.eq) goto loc_8219FD20;
loc_8219FD10:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219fd10
	if (!ctx.cr6.eq) goto loc_8219FD10;
loc_8219FD20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219fd38
	if (ctx.cr6.eq) goto loc_8219FD38;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8219fcc8
	if (!ctx.cr0.eq) goto loc_8219FCC8;
loc_8219FD38:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r14,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8219FD58:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219FD60"))) PPC_WEAK_FUNC(sub_8219FD60);
PPC_FUNC_IMPL(__imp__sub_8219FD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8219FD68;
	sub_82248774(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8219fdb0
	if (!ctx.cr6.eq) goto loc_8219FDB0;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r24,r8,65521
	ctx.r24.u64 = ctx.r8.u64 | 65521;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// blt cr6,0x8219fd94
	if (ctx.cr6.lt) goto loc_8219FD94;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8219FD94:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65521
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65521, ctx.xer);
	// blt cr6,0x821a0060
	if (ctx.cr6.lt) goto loc_821A0060;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8219FDB0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8219fdc0
	if (!ctx.cr6.eq) goto loc_8219FDC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8219FDC0:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8219fe20
	if (!ctx.cr6.lt) goto loc_8219FE20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219fde8
	if (ctx.cr6.eq) goto loc_8219FDE8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8219FDD8:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8219fdd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219FDD8;
loc_8219FDE8:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x8219fdfc
	if (ctx.cr6.lt) goto loc_8219FDFC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8219FDFC:
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// ori r8,r9,32881
	ctx.r8.u64 = ctx.r9.u64 | 32881;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r6,r24
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8219FE20:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32761
	ctx.r8.s64 = -2147024896;
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// ori r23,r8,32881
	ctx.r23.u64 = ctx.r8.u64 | 32881;
	// cmplwi cr6,r5,5552
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5552, ctx.xer);
	// blt cr6,0x8219ff3c
	if (ctx.cr6.lt) goto loc_8219FF3C;
	// li r9,5552
	ctx.r9.s64 = 5552;
	// divwu r25,r5,r9
	ctx.r25.u32 = ctx.r5.u32 / ctx.r9.u32;
loc_8219FE40:
	// li r9,347
	ctx.r9.s64 = 347;
	// addi r5,r5,-5552
	ctx.r5.s64 = ctx.r5.s64 + -5552;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219FE4C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8219fe4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219FE4C;
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r3,r7,r24
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r9,r6,r24
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bne 0x8219fe40
	if (!ctx.cr0.eq) goto loc_8219FE40;
loc_8219FF3C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a0060
	if (ctx.cr6.eq) goto loc_821A0060;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x821a0020
	if (ctx.cr6.lt) goto loc_821A0020;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219FF54:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8219ff54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219FF54;
loc_821A0020:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a0040
	if (ctx.cr6.eq) goto loc_821A0040;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_821A0030:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x821a0030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0030;
loc_821A0040:
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r7,r24
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r4,r6,r24
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_821A0060:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821A006C"))) PPC_WEAK_FUNC(sub_821A006C);
PPC_FUNC_IMPL(__imp__sub_821A006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0070"))) PPC_WEAK_FUNC(sub_821A0070);
PPC_FUNC_IMPL(__imp__sub_821A0070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821A0078;
	sub_82248764(ctx, base);
	// rlwinm r10,r3,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r8,-31680
	ctx.r11.s64 = ctx.r8.s64 + -31680;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// beq cr6,0x821a00e4
	if (ctx.cr6.eq) goto loc_821A00E4;
loc_821A00AC:
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a00e4
	if (ctx.cr6.eq) goto loc_821A00E4;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x821a00ac
	if (!ctx.cr0.eq) goto loc_821A00AC;
loc_821A00E4:
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x821a0320
	if (ctx.cr6.lt) goto loc_821A0320;
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821A00F8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// rlwinm r8,r4,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r9,r4,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// lwzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r30,r4,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r11,5120
	ctx.r8.s64 = ctx.r11.s64 + 5120;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// lwzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r30,r11,7168
	ctx.r30.s64 = ctx.r11.s64 + 7168;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r9,r11,6144
	ctx.r9.s64 = ctx.r11.s64 + 6144;
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// lwzu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// rlwinm r27,r4,18,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r26,r4,26,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r25,r4,10,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// lwzu r24,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r24.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r23,r11,4096
	ctx.r23.s64 = ctx.r11.s64 + 4096;
	// lwzx r7,r27,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r8,r26,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// lwzx r30,r25,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// addi r25,r11,7168
	ctx.r25.s64 = ctx.r11.s64 + 7168;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r8,r11,4096
	ctx.r8.s64 = ctx.r11.s64 + 4096;
	// lwzu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// addi r30,r11,6144
	ctx.r30.s64 = ctx.r11.s64 + 6144;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r7,r11,5120
	ctx.r7.s64 = ctx.r11.s64 + 5120;
	// xor r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// lwzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r22,r11,7168
	ctx.r22.s64 = ctx.r11.s64 + 7168;
	// rlwinm r21,r6,18,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r20,r6,26,22,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r19,r6,10,22,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r21,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// lwzx r3,r20,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r3.u32);
	// lwzx r31,r19,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// lwzx r6,r6,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// xor r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// xor r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// xor r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rlwinm r3,r6,18,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r9,r6,26,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r6,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwzx r31,r31,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// xor r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r3,r6,r24
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r24.u64;
	// rlwinm r9,r3,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r8,r3,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r6,r3,10,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r31,r11,6144
	ctx.r31.s64 = ctx.r11.s64 + 6144;
	// xor r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// addi r30,r11,4096
	ctx.r30.s64 = ctx.r11.s64 + 4096;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// addi r6,r11,6144
	ctx.r6.s64 = ctx.r11.s64 + 6144;
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// addi r29,r11,5120
	ctx.r29.s64 = ctx.r11.s64 + 5120;
	// rlwinm r28,r7,18,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FC;
	// rlwinm r27,r7,26,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FC;
	// rlwinm r26,r7,10,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FC;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// addi r25,r11,7168
	ctx.r25.s64 = ctx.r11.s64 + 7168;
	// lwzx r31,r28,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r28,r11,4096
	ctx.r28.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r27,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r3,r26,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// xor r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r9,r11,4096
	ctx.r9.s64 = ctx.r11.s64 + 4096;
	// xor r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// rlwinm r3,r4,18,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r7,r4,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r30,r4,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r6,r30,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwzx r7,r4,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// xor r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// rlwinm r8,r3,18,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r7,r3,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r6,r3,10,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r3,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r8,r7,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// xor r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bdnz 0x821a00f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A00F8;
loc_821A0320:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x821a037c
	if (ctx.cr6.lt) goto loc_821A037C;
	// rlwinm r8,r5,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821A0330:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// rlwinm r9,r4,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r8,r4,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r4,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r30,r11,4096
	ctx.r30.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r7,r31,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bdnz 0x821a0330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0330;
loc_821A037C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a03b4
	if (ctx.cr6.eq) goto loc_821A03B4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_821A038C:
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r7,r8,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// bne 0x821a038c
	if (!ctx.cr0.eq) goto loc_821A038C;
loc_821A03B4:
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r10,r8,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r8,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821A03DC"))) PPC_WEAK_FUNC(sub_821A03DC);
PPC_FUNC_IMPL(__imp__sub_821A03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A03E0"))) PPC_WEAK_FUNC(sub_821A03E0);
PPC_FUNC_IMPL(__imp__sub_821A03E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821a03f0
	if (!ctx.cr6.eq) goto loc_821A03F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A03F0:
	// b 0x821a0070
	sub_821A0070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A03F4"))) PPC_WEAK_FUNC(sub_821A03F4);
PPC_FUNC_IMPL(__imp__sub_821A03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A03F8"))) PPC_WEAK_FUNC(sub_821A03F8);
PPC_FUNC_IMPL(__imp__sub_821A03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23488
	ctx.r9.s64 = ctx.r11.s64 + -23488;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0410"))) PPC_WEAK_FUNC(sub_821A0410);
PPC_FUNC_IMPL(__imp__sub_821A0410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-23488
	ctx.r10.s64 = ctx.r11.s64 + -23488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0420"))) PPC_WEAK_FUNC(sub_821A0420);
PPC_FUNC_IMPL(__imp__sub_821A0420) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-23488
	ctx.r9.s64 = ctx.r11.s64 + -23488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821a0458
	if (ctx.cr6.eq) goto loc_821A0458;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A0454;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A0458:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A046C"))) PPC_WEAK_FUNC(sub_821A046C);
PPC_FUNC_IMPL(__imp__sub_821A046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0470"))) PPC_WEAK_FUNC(sub_821A0470);
PPC_FUNC_IMPL(__imp__sub_821A0470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A0478;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a04b0
	if (ctx.cr6.eq) goto loc_821A04B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a04b0
	if (ctx.cr6.eq) goto loc_821A04B0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A04B0:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82183078
	ctx.lr = 0x821A04B8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A04C4;
	sub_821837D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// bl 0x82183850
	ctx.lr = 0x821A04D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a04e8
	if (ctx.cr6.eq) goto loc_821A04E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A04E4;
	sub_82183448(ctx, base);
	// b 0x821a04f4
	goto loc_821A04F4;
loc_821A04E8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A04F4;
	sub_821845A0(ctx, base);
loc_821A04F4:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a0530
	if (ctx.cr6.eq) goto loc_821A0530;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_821A0530:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0544
	if (!ctx.cr6.eq) goto loc_821A0544;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_821A0544:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A054C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A0558"))) PPC_WEAK_FUNC(sub_821A0558);
PPC_FUNC_IMPL(__imp__sub_821A0558) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a058c
	if (ctx.cr6.eq) goto loc_821A058C;
loc_821A0574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A0584;
	sub_82183E40(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a0574
	if (!ctx.cr6.eq) goto loc_821A0574;
loc_821A058C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A05A0"))) PPC_WEAK_FUNC(sub_821A05A0);
PPC_FUNC_IMPL(__imp__sub_821A05A0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// mullw r9,r4,r5
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r8,r10,-23472
	ctx.r8.s64 = ctx.r10.s64 + -23472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beq cr6,0x821a05ec
	if (ctx.cr6.eq) goto loc_821A05EC;
	// bl 0x821a0470
	ctx.lr = 0x821A05E8;
	sub_821A0470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A05EC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A0600"))) PPC_WEAK_FUNC(sub_821A0600);
PPC_FUNC_IMPL(__imp__sub_821A0600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-23472
	ctx.r10.s64 = ctx.r11.s64 + -23472;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821a0558
	sub_821A0558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A0610"))) PPC_WEAK_FUNC(sub_821A0610);
PPC_FUNC_IMPL(__imp__sub_821A0610) {
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
	// bne cr6,0x821a0634
	if (!ctx.cr6.eq) goto loc_821A0634;
	// bl 0x821a0470
	ctx.lr = 0x821A0634;
	sub_821A0470(ctx, base);
loc_821A0634:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821a0658
	if (!ctx.cr6.gt) goto loc_821A0658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0470
	ctx.lr = 0x821A0658;
	sub_821A0470(ctx, base);
loc_821A0658:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A0684"))) PPC_WEAK_FUNC(sub_821A0684);
PPC_FUNC_IMPL(__imp__sub_821A0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0688"))) PPC_WEAK_FUNC(sub_821A0688);
PPC_FUNC_IMPL(__imp__sub_821A0688) {
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
	// bl 0x821a0558
	ctx.lr = 0x821A06A0;
	sub_821A0558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A06C0"))) PPC_WEAK_FUNC(sub_821A06C0);
PPC_FUNC_IMPL(__imp__sub_821A06C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23472
	ctx.r10.s64 = ctx.r11.s64 + -23472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a0558
	ctx.lr = 0x821A06EC;
	sub_821A0558(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0708
	if (ctx.cr6.eq) goto loc_821A0708;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A0704;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A0708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0720"))) PPC_WEAK_FUNC(sub_821A0720);
PPC_FUNC_IMPL(__imp__sub_821A0720) {
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
	// bl 0x820804f8
	ctx.lr = 0x821A0738;
	sub_820804F8(ctx, base);
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

__attribute__((alias("__imp__sub_821A0750"))) PPC_WEAK_FUNC(sub_821A0750);
PPC_FUNC_IMPL(__imp__sub_821A0750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x821A0774;
	sub_821A2A60(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821a2a60
	ctx.lr = 0x821A0784;
	sub_821A2A60(ctx, base);
	// addi r5,r3,176
	ctx.r5.s64 = ctx.r3.s64 + 176;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x821A0794;
	sub_82289C50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A07AC"))) PPC_WEAK_FUNC(sub_821A07AC);
PPC_FUNC_IMPL(__imp__sub_821A07AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A07B0"))) PPC_WEAK_FUNC(sub_821A07B0);
PPC_FUNC_IMPL(__imp__sub_821A07B0) {
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
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0804"))) PPC_WEAK_FUNC(sub_821A0804);
PPC_FUNC_IMPL(__imp__sub_821A0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0808"))) PPC_WEAK_FUNC(sub_821A0808);
PPC_FUNC_IMPL(__imp__sub_821A0808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A0810;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// bl 0x820a42e0
	ctx.lr = 0x821A084C;
	sub_820A42E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a42e0
	ctx.lr = 0x821A0854;
	sub_820A42E0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f31,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmsubs f5,f12,f9,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmsubs f4,f0,f10,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmsubs f3,f11,f13,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x820a42e0
	ctx.lr = 0x821A08BC;
	sub_820A42E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmsubs f11,f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f2.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmsubs f10,f13,f10,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f1.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f9,f0,f9,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// fneg f6,f10
	ctx.f6.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fneg f5,f9
	ctx.f5.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fsubs f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// ld r30,8(r5)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// ld r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// fadds f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// std r30,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r30.u64);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f8,f2,f12
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f31,f13
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fsubs f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r3,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r3.u64);
	// std r8,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r8.u64);
	// std r6,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r6.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lfs f11,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// std r5,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r5.u64);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r4,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r4.u64);
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A0A84"))) PPC_WEAK_FUNC(sub_821A0A84);
PPC_FUNC_IMPL(__imp__sub_821A0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0A88"))) PPC_WEAK_FUNC(sub_821A0A88);
PPC_FUNC_IMPL(__imp__sub_821A0A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0abc
	if (ctx.cr6.eq) goto loc_821A0ABC;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A0AA0:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821a0ac4
	if (ctx.cr6.eq) goto loc_821A0AC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a0aa0
	if (ctx.cr6.lt) goto loc_821A0AA0;
loc_821A0ABC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821A0AC4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0ACC"))) PPC_WEAK_FUNC(sub_821A0ACC);
PPC_FUNC_IMPL(__imp__sub_821A0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0AD0"))) PPC_WEAK_FUNC(sub_821A0AD0);
PPC_FUNC_IMPL(__imp__sub_821A0AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0b04
	if (ctx.cr6.eq) goto loc_821A0B04;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A0AE8:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821a0b0c
	if (ctx.cr6.eq) goto loc_821A0B0C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a0ae8
	if (ctx.cr6.lt) goto loc_821A0AE8;
loc_821A0B04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A0B0C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A0B24"))) PPC_WEAK_FUNC(sub_821A0B24);
PPC_FUNC_IMPL(__imp__sub_821A0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0B28"))) PPC_WEAK_FUNC(sub_821A0B28);
PPC_FUNC_IMPL(__imp__sub_821A0B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A0B30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821A0B48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0b7c
	if (ctx.cr6.eq) goto loc_821A0B7C;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_821A0B60:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a0b90
	if (ctx.cr6.eq) goto loc_821A0B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a0b60
	if (ctx.cr6.lt) goto loc_821A0B60;
loc_821A0B7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821A0B84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A0B90:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r29,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821A0BAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A0BB8"))) PPC_WEAK_FUNC(sub_821A0BB8);
PPC_FUNC_IMPL(__imp__sub_821A0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A0BC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821A0BD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// beq cr6,0x821a0c10
	if (ctx.cr6.eq) goto loc_821A0C10;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821A0BF4:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821a0c24
	if (ctx.cr6.eq) goto loc_821A0C24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821a0bf4
	if (ctx.cr6.lt) goto loc_821A0BF4;
loc_821A0C10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821A0C18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A0C24:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821A0C3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A0C48"))) PPC_WEAK_FUNC(sub_821A0C48);
PPC_FUNC_IMPL(__imp__sub_821A0C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A0C50;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218e200
	ctx.lr = 0x821A0C64;
	sub_8218E200(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r10,r11,-23444
	ctx.r10.s64 = ctx.r11.s64 + -23444;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// bl 0x8241dd4c
	ctx.lr = 0x821A0C8C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r9,1638
	ctx.r9.s64 = 107347968;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r8,r9,26214
	ctx.r8.u64 = ctx.r9.u64 | 26214;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821a0cb4
	if (ctx.cr6.gt) goto loc_821A0CB4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x821a0cb8
	goto loc_821A0CB8;
loc_821A0CB4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0CB8:
	// bl 0x82183850
	ctx.lr = 0x821A0CBC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a0cd4
	if (ctx.cr6.eq) goto loc_821A0CD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A0CD0;
	sub_82183448(ctx, base);
	// b 0x821a0ce0
	goto loc_821A0CE0;
loc_821A0CD4:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A0CE0;
	sub_821845A0(ctx, base);
loc_821A0CE0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x821a0d00
	if (!ctx.cr6.gt) goto loc_821A0D00;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0D00:
	// bl 0x82183850
	ctx.lr = 0x821A0D04;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a0d1c
	if (ctx.cr6.eq) goto loc_821A0D1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A0D18;
	sub_82183448(ctx, base);
	// b 0x821a0d28
	goto loc_821A0D28;
loc_821A0D1C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A0D28;
	sub_821845A0(ctx, base);
loc_821A0D28:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821a0d40
	if (!ctx.cr6.gt) goto loc_821A0D40;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0D40:
	// bl 0x82183850
	ctx.lr = 0x821A0D44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a0d5c
	if (ctx.cr6.eq) goto loc_821A0D5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A0D58;
	sub_82183448(ctx, base);
	// b 0x821a0d68
	goto loc_821A0D68;
loc_821A0D5C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A0D68;
	sub_821845A0(ctx, base);
loc_821A0D68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821a0d80
	if (!ctx.cr6.gt) goto loc_821A0D80;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0D80:
	// bl 0x82183850
	ctx.lr = 0x821A0D84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a0d9c
	if (ctx.cr6.eq) goto loc_821A0D9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A0D98;
	sub_82183448(ctx, base);
	// b 0x821a0da8
	goto loc_821A0DA8;
loc_821A0D9C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A0DA8;
	sub_821845A0(ctx, base);
loc_821A0DA8:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821A0DBC;
	sub_822AA648(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821A0DCC;
	sub_822AA648(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821A0DDC;
	sub_822AA648(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x821a0e54
	if (!ctx.cr6.gt) goto loc_821A0E54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,-23468
	ctx.r28.s64 = ctx.r11.s64 + -23468;
loc_821A0DF8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82248910
	ctx.lr = 0x821A0E10;
	sub_82248910(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x820882b8
	ctx.lr = 0x821A0E2C;
	sub_820882B8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a0df8
	if (ctx.cr6.lt) goto loc_821A0DF8;
loc_821A0E54:
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-19232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19232, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A0E78"))) PPC_WEAK_FUNC(sub_821A0E78);
PPC_FUNC_IMPL(__imp__sub_821A0E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A0E80;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,-23444
	ctx.r9.s64 = ctx.r11.s64 + -23444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821a0ecc
	if (!ctx.cr6.gt) goto loc_821A0ECC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0EAC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82088268
	ctx.lr = 0x821A0EB8;
	sub_82088268(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821a0eac
	if (ctx.cr6.lt) goto loc_821A0EAC;
loc_821A0ECC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0ee0
	if (ctx.cr6.eq) goto loc_821A0EE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A0EE0;
	sub_82183E40(ctx, base);
loc_821A0EE0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0ef8
	if (ctx.cr6.eq) goto loc_821A0EF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A0EF8;
	sub_82183E40(ctx, base);
loc_821A0EF8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0f10
	if (ctx.cr6.eq) goto loc_821A0F10;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A0F10;
	sub_82183E40(ctx, base);
loc_821A0F10:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0f28
	if (ctx.cr6.eq) goto loc_821A0F28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A0F28;
	sub_82183E40(ctx, base);
loc_821A0F28:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-19232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19232, ctx.r28.u32);
	// bl 0x8218dd78
	ctx.lr = 0x821A0F44;
	sub_8218DD78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A0F4C"))) PPC_WEAK_FUNC(sub_821A0F4C);
PPC_FUNC_IMPL(__imp__sub_821A0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A0F50"))) PPC_WEAK_FUNC(sub_821A0F50);
PPC_FUNC_IMPL(__imp__sub_821A0F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A0F58;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82088650
	ctx.lr = 0x821A0F64;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x821A0F6C;
	sub_82182F58(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r26,21788(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21788);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8218e120
	ctx.lr = 0x821A0F7C;
	sub_8218E120(ctx, base);
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
loc_821A0F80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821A0F88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a0fec
	if (!ctx.cr6.gt) goto loc_821A0FEC;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821A0FA0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a0fd4
	if (ctx.cr6.eq) goto loc_821A0FD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a0fd4
	if (ctx.cr6.eq) goto loc_821A0FD4;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8211a698
	ctx.lr = 0x821A0FC8;
	sub_8211A698(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82088758
	ctx.lr = 0x821A0FD4;
	sub_82088758(ctx, base);
loc_821A0FD4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a0fa0
	if (ctx.cr6.lt) goto loc_821A0FA0;
loc_821A0FEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821A0FF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8218e120
	ctx.lr = 0x821A0FFC;
	sub_8218E120(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x821a0f80
	goto loc_821A0F80;
}

__attribute__((alias("__imp__sub_821A100C"))) PPC_WEAK_FUNC(sub_821A100C);
PPC_FUNC_IMPL(__imp__sub_821A100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1010"))) PPC_WEAK_FUNC(sub_821A1010);
PPC_FUNC_IMPL(__imp__sub_821A1010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A1018;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,40
	ctx.r27.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821A102C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82087ab0
	ctx.lr = 0x821A1040;
	sub_82087AB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a10a4
	if (ctx.cr6.eq) goto loc_821A10A4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821A1058:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a108c
	if (ctx.cr6.eq) goto loc_821A108C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a108c
	if (ctx.cr6.eq) goto loc_821A108C;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8211a558
	ctx.lr = 0x821A1080;
	sub_8211A558(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82257118
	ctx.lr = 0x821A108C;
	sub_82257118(ctx, base);
loc_821A108C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a1058
	if (ctx.cr6.lt) goto loc_821A1058;
loc_821A10A4:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822aa648
	ctx.lr = 0x821A10B0;
	sub_822AA648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821A10B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A10C0"))) PPC_WEAK_FUNC(sub_821A10C0);
PPC_FUNC_IMPL(__imp__sub_821A10C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821a0e78
	ctx.lr = 0x821A10E0;
	sub_821A0E78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a10fc
	if (ctx.cr6.eq) goto loc_821A10FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A10F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A10FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A1114"))) PPC_WEAK_FUNC(sub_821A1114);
PPC_FUNC_IMPL(__imp__sub_821A1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1118"))) PPC_WEAK_FUNC(sub_821A1118);
PPC_FUNC_IMPL(__imp__sub_821A1118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A1130"))) PPC_WEAK_FUNC(sub_821A1130);
PPC_FUNC_IMPL(__imp__sub_821A1130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1164
	if (ctx.cr6.eq) goto loc_821A1164;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821a1164
	if (ctx.cr6.lt) goto loc_821A1164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821a1164
	if (!ctx.cr6.lt) goto loc_821A1164;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_821A1164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A116C"))) PPC_WEAK_FUNC(sub_821A116C);
PPC_FUNC_IMPL(__imp__sub_821A116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1170"))) PPC_WEAK_FUNC(sub_821A1170);
PPC_FUNC_IMPL(__imp__sub_821A1170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a11a0
	if (ctx.cr6.eq) goto loc_821A11A0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821a11a0
	if (ctx.cr6.lt) goto loc_821A11A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821a11a0
	if (!ctx.cr6.lt) goto loc_821A11A0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_821A11A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A11A8"))) PPC_WEAK_FUNC(sub_821A11A8);
PPC_FUNC_IMPL(__imp__sub_821A11A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a11dc
	if (ctx.cr6.eq) goto loc_821A11DC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821a11dc
	if (ctx.cr6.lt) goto loc_821A11DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821a11dc
	if (!ctx.cr6.lt) goto loc_821A11DC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_821A11DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A11E4"))) PPC_WEAK_FUNC(sub_821A11E4);
PPC_FUNC_IMPL(__imp__sub_821A11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A11E8"))) PPC_WEAK_FUNC(sub_821A11E8);
PPC_FUNC_IMPL(__imp__sub_821A11E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A11F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1250
	if (ctx.cr6.eq) goto loc_821A1250;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821a1244
	if (!ctx.cr6.gt) goto loc_821A1244;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821A121C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82183e40
	ctx.lr = 0x821A122C;
	sub_82183E40(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a121c
	if (ctx.cr6.lt) goto loc_821A121C;
loc_821A1244:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82183e40
	ctx.lr = 0x821A1250;
	sub_82183E40(ctx, base);
loc_821A1250:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1270
	if (ctx.cr6.eq) goto loc_821A1270;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1270
	if (ctx.cr6.eq) goto loc_821A1270;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A1270;
	sub_82183E40(ctx, base);
loc_821A1270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A1278"))) PPC_WEAK_FUNC(sub_821A1278);
PPC_FUNC_IMPL(__imp__sub_821A1278) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1438
	if (ctx.cr6.eq) goto loc_821A1438;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// stb r9,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r9.u8);
	// stb r8,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r8.u8);
	// stb r7,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r7.u8);
	// lwz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r5,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r5.u8);
	// stb r4,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r4.u8);
	// stb r9,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r9.u8);
	// stb r10,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r5,11(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r7,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r7.u8);
	// stb r4,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r4.u8);
	// stb r6,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r6.u8);
	// stb r5,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r5.u8);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r7,15(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r9,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r9.u8);
	// stb r6,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r6.u8);
	// stb r7,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r7.u8);
	// stb r8,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r8.u8);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a1438
	if (!ctx.cr6.eq) goto loc_821A1438;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821a1438
	if (!ctx.cr6.gt) goto loc_821A1438;
	// li r8,0
	ctx.r8.s64 = 0;
loc_821A1384:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lbz r9,23(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r5,22(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r31,21(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// stb r9,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r9.u8);
	// stb r5,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r5.u8);
	// stb r4,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r4.u8);
	// stb r31,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r31.u8);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lbz r5,25(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r4,26(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r31,27(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// stb r31,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r31.u8);
	// stb r5,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r5.u8);
	// stb r4,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r4.u8);
	// stb r9,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r9.u8);
	// lwz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lbz r5,29(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r31,30(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// stb r31,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r31.u8);
	// lbz r30,31(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// stb r5,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r5.u8);
	// stb r4,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r4.u8);
	// stb r30,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r30.u8);
	// lwz r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// beq cr6,0x821a1420
	if (ctx.cr6.eq) goto loc_821A1420;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_821A1420:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821a1384
	if (ctx.cr6.lt) goto loc_821A1384;
loc_821A1438:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A1444"))) PPC_WEAK_FUNC(sub_821A1444);
PPC_FUNC_IMPL(__imp__sub_821A1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1448"))) PPC_WEAK_FUNC(sub_821A1448);
PPC_FUNC_IMPL(__imp__sub_821A1448) {
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
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x821a1278
	ctx.lr = 0x821A1474;
	sub_821A1278(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A1488"))) PPC_WEAK_FUNC(sub_821A1488);
PPC_FUNC_IMPL(__imp__sub_821A1488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-23440
	ctx.r10.s64 = ctx.r11.s64 + -23440;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A1498"))) PPC_WEAK_FUNC(sub_821A1498);
PPC_FUNC_IMPL(__imp__sub_821A1498) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A14A8"))) PPC_WEAK_FUNC(sub_821A14A8);
PPC_FUNC_IMPL(__imp__sub_821A14A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A14BC"))) PPC_WEAK_FUNC(sub_821A14BC);
PPC_FUNC_IMPL(__imp__sub_821A14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A14C0"))) PPC_WEAK_FUNC(sub_821A14C0);
PPC_FUNC_IMPL(__imp__sub_821A14C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A14D4"))) PPC_WEAK_FUNC(sub_821A14D4);
PPC_FUNC_IMPL(__imp__sub_821A14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A14D8"))) PPC_WEAK_FUNC(sub_821A14D8);
PPC_FUNC_IMPL(__imp__sub_821A14D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A14E4"))) PPC_WEAK_FUNC(sub_821A14E4);
PPC_FUNC_IMPL(__imp__sub_821A14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A14E8"))) PPC_WEAK_FUNC(sub_821A14E8);
PPC_FUNC_IMPL(__imp__sub_821A14E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23440
	ctx.r9.s64 = ctx.r10.s64 + -23440;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A152C"))) PPC_WEAK_FUNC(sub_821A152C);
PPC_FUNC_IMPL(__imp__sub_821A152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1530"))) PPC_WEAK_FUNC(sub_821A1530);
PPC_FUNC_IMPL(__imp__sub_821A1530) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-23440
	ctx.r9.s64 = ctx.r11.s64 + -23440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821a1568
	if (ctx.cr6.eq) goto loc_821A1568;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A1564;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A1568:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A157C"))) PPC_WEAK_FUNC(sub_821A157C);
PPC_FUNC_IMPL(__imp__sub_821A157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1580"))) PPC_WEAK_FUNC(sub_821A1580);
PPC_FUNC_IMPL(__imp__sub_821A1580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23360
	ctx.r9.s64 = ctx.r10.s64 + -23360;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A15A8"))) PPC_WEAK_FUNC(sub_821A15A8);
PPC_FUNC_IMPL(__imp__sub_821A15A8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82092930
	ctx.lr = 0x821A15CC;
	sub_82092930(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A15E4"))) PPC_WEAK_FUNC(sub_821A15E4);
PPC_FUNC_IMPL(__imp__sub_821A15E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A15E8"))) PPC_WEAK_FUNC(sub_821A15E8);
PPC_FUNC_IMPL(__imp__sub_821A15E8) {
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
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8218a588
	ctx.lr = 0x821A1614;
	sub_8218A588(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a16e0
	if (!ctx.cr6.gt) goto loc_821A16E0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
loc_821A162C:
	// lwz r11,-7468(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7468);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821a1690
	if (!ctx.cr6.lt) goto loc_821A1690;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a1690
	if (!ctx.cr6.eq) goto loc_821A1690;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1694
	goto loc_821A1694;
loc_821A1690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A1694:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a16cc
	if (ctx.cr6.eq) goto loc_821A16CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x821a16cc
	if (!ctx.cr6.eq) goto loc_821A16CC;
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x821a16f8
	if (ctx.cr6.eq) goto loc_821A16F8;
loc_821A16CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a162c
	if (ctx.cr6.lt) goto loc_821A162C;
loc_821A16E0:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821A16F8:
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,-7468(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7468);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a1770
	if (!ctx.cr6.lt) goto loc_821A1770;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a1770
	if (!ctx.cr6.eq) goto loc_821A1770;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
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
loc_821A1770:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821A178C"))) PPC_WEAK_FUNC(sub_821A178C);
PPC_FUNC_IMPL(__imp__sub_821A178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1790"))) PPC_WEAK_FUNC(sub_821A1790);
PPC_FUNC_IMPL(__imp__sub_821A1790) {
	PPC_FUNC_PROLOGUE();
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
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8218a588
	ctx.lr = 0x821A17C4;
	sub_8218A588(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a1890
	if (!ctx.cr6.gt) goto loc_821A1890;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
loc_821A17DC:
	// lwz r11,-7468(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7468);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a1840
	if (!ctx.cr6.lt) goto loc_821A1840;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a1840
	if (!ctx.cr6.eq) goto loc_821A1840;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1844
	goto loc_821A1844;
loc_821A1840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A1844:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a187c
	if (ctx.cr6.eq) goto loc_821A187C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x821a187c
	if (!ctx.cr6.eq) goto loc_821A187C;
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x821a18cc
	if (ctx.cr6.eq) goto loc_821A18CC;
loc_821A187C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a17dc
	if (ctx.cr6.lt) goto loc_821A17DC;
loc_821A1890:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_821A18B0:
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
loc_821A18CC:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x821a18b0
	goto loc_821A18B0;
}

__attribute__((alias("__imp__sub_821A18E8"))) PPC_WEAK_FUNC(sub_821A18E8);
PPC_FUNC_IMPL(__imp__sub_821A18E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A18F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1978
	if (ctx.cr6.eq) goto loc_821A1978;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a1978
	if (ctx.cr6.eq) goto loc_821A1978;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82092930
	ctx.lr = 0x821A1920;
	sub_82092930(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1954
	if (ctx.cr6.eq) goto loc_821A1954;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A1948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A1954;
	sub_820DE3A0(ctx, base);
loc_821A1954:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A1960;
	sub_820DED28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_821A1978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A1980"))) PPC_WEAK_FUNC(sub_821A1980);
PPC_FUNC_IMPL(__imp__sub_821A1980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821A1988;
	sub_8224876C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x821a1118
	ctx.lr = 0x821A19A4;
	sub_821A1118(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821a1b00
	if (!ctx.cr6.gt) goto loc_821A1B00;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
loc_821A19BC:
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_821A19C0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821a1b00
	if (!ctx.cr6.lt) goto loc_821A1B00;
	// lwz r11,-7468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7468);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821a1a30
	if (!ctx.cr6.lt) goto loc_821A1A30;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821a1a30
	if (!ctx.cr6.eq) goto loc_821A1A30;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1a34
	goto loc_821A1A34;
loc_821A1A30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A1A34:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1a4c
	if (ctx.cr6.eq) goto loc_821A1A4C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x821a19c0
	goto loc_821A19C0;
loc_821A1A4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a1170
	ctx.lr = 0x821A1A58;
	sub_821A1170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a540
	ctx.lr = 0x821A1A64;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x821A1A6C;
	sub_8218A588(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821d2978
	ctx.lr = 0x821A1A74;
	sub_821D2978(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r22,0(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x821a11a8
	ctx.lr = 0x821A1A88;
	sub_821A11A8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a1130
	ctx.lr = 0x821A1A98;
	sub_821A1130(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A1AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// std r10,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r10.u64);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,24(r23)
	PPC_STORE_U64(ctx.r23.u32 + 24, ctx.r9.u64);
	// bl 0x820ded28
	ctx.lr = 0x821A1AD4;
	sub_820DED28(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x821a19bc
	if (ctx.cr6.lt) goto loc_821A19BC;
loc_821A1B00:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821A1B08"))) PPC_WEAK_FUNC(sub_821A1B08);
PPC_FUNC_IMPL(__imp__sub_821A1B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821A1B10;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a1c4c
	if (!ctx.cr6.gt) goto loc_821A1C4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
loc_821A1B44:
	// lwz r11,-7468(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7468);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a1ba8
	if (!ctx.cr6.lt) goto loc_821A1BA8;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a1ba8
	if (!ctx.cr6.eq) goto loc_821A1BA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1bac
	goto loc_821A1BAC;
loc_821A1BA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A1BAC:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1bd4
	if (ctx.cr6.eq) goto loc_821A1BD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a1b44
	if (ctx.cr6.lt) goto loc_821A1B44;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_821A1BD4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a540
	ctx.lr = 0x821A1BE0;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x821A1BE8;
	sub_8218A588(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d2978
	ctx.lr = 0x821A1BF0;
	sub_821D2978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A1C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// std r9,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r9.u64);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,24(r26)
	PPC_STORE_U64(ctx.r26.u32 + 24, ctx.r8.u64);
	// bl 0x820ded28
	ctx.lr = 0x821A1C30;
	sub_820DED28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
loc_821A1C4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821A1C54"))) PPC_WEAK_FUNC(sub_821A1C54);
PPC_FUNC_IMPL(__imp__sub_821A1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1C58"))) PPC_WEAK_FUNC(sub_821A1C58);
PPC_FUNC_IMPL(__imp__sub_821A1C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A1C60;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a1dc4
	if (!ctx.cr6.gt) goto loc_821A1DC4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
loc_821A1C84:
	// lwz r11,-7468(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7468);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a1ce8
	if (!ctx.cr6.lt) goto loc_821A1CE8;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a1ce8
	if (!ctx.cr6.eq) goto loc_821A1CE8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1cec
	goto loc_821A1CEC;
loc_821A1CE8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A1CEC:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1db0
	if (ctx.cr6.eq) goto loc_821A1DB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A1D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-7468(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7468);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a1d78
	if (!ctx.cr6.lt) goto loc_821A1D78;
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a1d78
	if (!ctx.cr6.eq) goto loc_821A1D78;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a1d7c
	goto loc_821A1D7C;
loc_821A1D78:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A1D7C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r3,-7468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7468);
	// bl 0x821a75f0
	ctx.lr = 0x821A1D90;
	sub_821A75F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1dac
	if (ctx.cr6.eq) goto loc_821A1DAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A1DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A1DAC:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_821A1DB0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a1c84
	if (ctx.cr6.lt) goto loc_821A1C84;
loc_821A1DC4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1ddc
	if (ctx.cr6.eq) goto loc_821A1DDC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A1DDC;
	sub_82183E40(ctx, base);
loc_821A1DDC:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821A1DE8"))) PPC_WEAK_FUNC(sub_821A1DE8);
PPC_FUNC_IMPL(__imp__sub_821A1DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A1DF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821a1c58
	ctx.lr = 0x821A1E00;
	sub_821A1C58(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// rlwinm r31,r30,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a1e1c
	if (!ctx.cr6.gt) goto loc_821A1E1C;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821A1E1C:
	// bl 0x82183850
	ctx.lr = 0x821A1E20;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a1e38
	if (ctx.cr6.eq) goto loc_821A1E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A1E34;
	sub_82183448(ctx, base);
	// b 0x821a1e44
	goto loc_821A1E44;
loc_821A1E38:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A1E44;
	sub_821845A0(ctx, base);
loc_821A1E44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1e90
	if (ctx.cr6.eq) goto loc_821A1E90;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a1e84
	if (ctx.cr0.lt) goto loc_821A1E84;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821A1E64:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a1e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A1E64;
loc_821A1E84:
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A1E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A1EA0"))) PPC_WEAK_FUNC(sub_821A1EA0);
PPC_FUNC_IMPL(__imp__sub_821A1EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-23360
	ctx.r10.s64 = ctx.r11.s64 + -23360;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821a1c58
	sub_821A1C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A1EB0"))) PPC_WEAK_FUNC(sub_821A1EB0);
PPC_FUNC_IMPL(__imp__sub_821A1EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821A1EB8;
	sub_82248770(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x821a1c58
	ctx.lr = 0x821A1ED0;
	sub_821A1C58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a1118
	ctx.lr = 0x821A1ED8;
	sub_821A1118(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a1ef4
	if (!ctx.cr6.gt) goto loc_821A1EF4;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821A1EF4:
	// bl 0x82183850
	ctx.lr = 0x821A1EF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a1f10
	if (ctx.cr6.eq) goto loc_821A1F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A1F0C;
	sub_82183448(ctx, base);
	// b 0x821a1f1c
	goto loc_821A1F1C;
loc_821A1F10:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A1F1C;
	sub_821845A0(ctx, base);
loc_821A1F1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x821a1f64
	if (ctx.cr6.eq) goto loc_821A1F64;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a1f5c
	if (ctx.cr0.lt) goto loc_821A1F5C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A1F3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a1f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A1F3C;
loc_821A1F5C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821a1f68
	goto loc_821A1F68;
loc_821A1F64:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821A1F68:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// ble cr6,0x821a202c
	if (!ctx.cr6.gt) goto loc_821A202C;
loc_821A1F7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a1170
	ctx.lr = 0x821A1F88;
	sub_821A1170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a540
	ctx.lr = 0x821A1F94;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x821A1F9C;
	sub_8218A588(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d2978
	ctx.lr = 0x821A1FA4;
	sub_821D2978(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x821a11a8
	ctx.lr = 0x821A1FB8;
	sub_821A11A8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a1130
	ctx.lr = 0x821A1FC8;
	sub_821A1130(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A1FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// std r10,16(r24)
	PPC_STORE_U64(ctx.r24.u32 + 16, ctx.r10.u64);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,24(r24)
	PPC_STORE_U64(ctx.r24.u32 + 24, ctx.r9.u64);
	// bl 0x820ded28
	ctx.lr = 0x821A2004;
	sub_820DED28(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x821a1f7c
	if (ctx.cr6.lt) goto loc_821A1F7C;
loc_821A202C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821A2034"))) PPC_WEAK_FUNC(sub_821A2034);
PPC_FUNC_IMPL(__imp__sub_821A2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2038"))) PPC_WEAK_FUNC(sub_821A2038);
PPC_FUNC_IMPL(__imp__sub_821A2038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821A2040;
	sub_82248770(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x821a1c58
	ctx.lr = 0x821A2058;
	sub_821A1C58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821a20cc
	if (!ctx.cr6.eq) goto loc_821A20CC;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821a20d8
	if (ctx.cr6.gt) goto loc_821A20D8;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x821a20dc
	goto loc_821A20DC;
loc_821A20CC:
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r31,r25,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x821a20dc
	goto loc_821A20DC;
loc_821A20D8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821A20DC:
	// bl 0x82183850
	ctx.lr = 0x821A20E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a20f8
	if (ctx.cr6.eq) goto loc_821A20F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A20F4;
	sub_82183448(ctx, base);
	// b 0x821a2104
	goto loc_821A2104;
loc_821A20F8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A2104;
	sub_821845A0(ctx, base);
loc_821A2104:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x821a214c
	if (ctx.cr6.eq) goto loc_821A214C;
	// addic. r11,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a2144
	if (ctx.cr0.lt) goto loc_821A2144;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A2124:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a2124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A2124;
loc_821A2144:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821a2150
	goto loc_821A2150;
loc_821A214C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821A2150:
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// ble cr6,0x821a22ec
	if (!ctx.cr6.gt) goto loc_821A22EC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_821A2164:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a2184
	if (!ctx.cr6.eq) goto loc_821A2184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218ab00
	ctx.lr = 0x821A217C;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821a2228
	goto loc_821A2228;
loc_821A2184:
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82182e90
	ctx.lr = 0x821A218C;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A2194;
	sub_82183078(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821a21b0
	if (!ctx.cr6.eq) goto loc_821A21B0;
	// bl 0x82183178
	ctx.lr = 0x821A21A0;
	sub_82183178(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_821A21B0:
	// bl 0x82183850
	ctx.lr = 0x821A21B4;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821A21C0;
	sub_82183078(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821a21d4
	if (ctx.cr6.lt) goto loc_821A21D4;
	// bne cr6,0x821a21dc
	if (!ctx.cr6.eq) goto loc_821A21DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a21d8
	goto loc_821A21D8;
loc_821A21D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A21D8:
	// bl 0x821830f8
	ctx.lr = 0x821A21DC;
	sub_821830F8(ctx, base);
loc_821A21DC:
	// bl 0x82182e90
	ctx.lr = 0x821A21E0;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A21E8;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A21F4;
	sub_821837D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218ae98
	ctx.lr = 0x821A2200;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A220C;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x821a2220
	if (ctx.cr6.lt) goto loc_821A2220;
	// bne cr6,0x821a2228
	if (!ctx.cr6.eq) goto loc_821A2228;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a2224
	goto loc_821A2224;
loc_821A2220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A2224:
	// bl 0x821830f8
	ctx.lr = 0x821A2228;
	sub_821830F8(ctx, base);
loc_821A2228:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a22c4
	if (ctx.cr6.eq) goto loc_821A22C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218aa58
	ctx.lr = 0x821A223C;
	sub_8218AA58(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a540
	ctx.lr = 0x821A224C;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x821A2254;
	sub_8218A588(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d2978
	ctx.lr = 0x821A225C;
	sub_821D2978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r22,0(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218ac78
	ctx.lr = 0x821A2270;
	sub_8218AC78(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A2290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r9.u64);
	// bl 0x820ded28
	ctx.lr = 0x821A22AC;
	sub_820DED28(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwx r7,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
loc_821A22C4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a22dc
	if (ctx.cr6.eq) goto loc_821A22DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A22DC;
	sub_82183E40(ctx, base);
loc_821A22DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x821a2164
	if (ctx.cr6.lt) goto loc_821A2164;
loc_821A22EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821A22F4"))) PPC_WEAK_FUNC(sub_821A22F4);
PPC_FUNC_IMPL(__imp__sub_821A22F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A22F8"))) PPC_WEAK_FUNC(sub_821A22F8);
PPC_FUNC_IMPL(__imp__sub_821A22F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23360
	ctx.r10.s64 = ctx.r11.s64 + -23360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a1c58
	ctx.lr = 0x821A2324;
	sub_821A1C58(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a2340
	if (ctx.cr6.eq) goto loc_821A2340;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A233C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A2340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2358"))) PPC_WEAK_FUNC(sub_821A2358);
PPC_FUNC_IMPL(__imp__sub_821A2358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-19224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19224, ctx.r30.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r30,-19228(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19228, ctx.r30.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a23ac
	if (ctx.cr6.eq) goto loc_821A23AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A23A0;
	sub_82183E40(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_821A23AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A23C4"))) PPC_WEAK_FUNC(sub_821A23C4);
PPC_FUNC_IMPL(__imp__sub_821A23C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A23C8"))) PPC_WEAK_FUNC(sub_821A23C8);
PPC_FUNC_IMPL(__imp__sub_821A23C8) {
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
	// bl 0x821aede8
	ctx.lr = 0x821A23E0;
	sub_821AEDE8(ctx, base);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-19228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19228, ctx.r31.u32);
	// stw r31,-19224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19224, ctx.r31.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821A240C"))) PPC_WEAK_FUNC(sub_821A240C);
PPC_FUNC_IMPL(__imp__sub_821A240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2410"))) PPC_WEAK_FUNC(sub_821A2410);
PPC_FUNC_IMPL(__imp__sub_821A2410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2420"))) PPC_WEAK_FUNC(sub_821A2420);
PPC_FUNC_IMPL(__imp__sub_821A2420) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r10,r10,7200
	ctx.r10.s64 = ctx.r10.s64 + 7200;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a2454
	if (ctx.cr6.eq) goto loc_821A2454;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821a2470
	if (!ctx.cr6.eq) goto loc_821A2470;
loc_821A2454:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821a24b8
	if (ctx.cr6.eq) goto loc_821A24B8;
loc_821A2470:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
loc_821A24B8:
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A24C0"))) PPC_WEAK_FUNC(sub_821A24C0);
PPC_FUNC_IMPL(__imp__sub_821A24C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821de530
	sub_821DE530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A24E0"))) PPC_WEAK_FUNC(sub_821A24E0);
PPC_FUNC_IMPL(__imp__sub_821A24E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A24E4"))) PPC_WEAK_FUNC(sub_821A24E4);
PPC_FUNC_IMPL(__imp__sub_821A24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A24E8"))) PPC_WEAK_FUNC(sub_821A24E8);
PPC_FUNC_IMPL(__imp__sub_821A24E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A24F0"))) PPC_WEAK_FUNC(sub_821A24F0);
PPC_FUNC_IMPL(__imp__sub_821A24F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A24F8"))) PPC_WEAK_FUNC(sub_821A24F8);
PPC_FUNC_IMPL(__imp__sub_821A24F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9ce8
	ctx.lr = 0x821A251C;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9e08
	ctx.lr = 0x821A2528;
	sub_821A9E08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A2544"))) PPC_WEAK_FUNC(sub_821A2544);
PPC_FUNC_IMPL(__imp__sub_821A2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2548"))) PPC_WEAK_FUNC(sub_821A2548);
PPC_FUNC_IMPL(__imp__sub_821A2548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a2564
	if (ctx.cr6.eq) goto loc_821A2564;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_821A2564:
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A256C"))) PPC_WEAK_FUNC(sub_821A256C);
PPC_FUNC_IMPL(__imp__sub_821A256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2570"))) PPC_WEAK_FUNC(sub_821A2570);
PPC_FUNC_IMPL(__imp__sub_821A2570) {
	PPC_FUNC_PROLOGUE();
	// stw r4,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2578"))) PPC_WEAK_FUNC(sub_821A2578);
PPC_FUNC_IMPL(__imp__sub_821A2578) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r5,r10,r3
	PPC_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2588"))) PPC_WEAK_FUNC(sub_821A2588);
PPC_FUNC_IMPL(__imp__sub_821A2588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2590"))) PPC_WEAK_FUNC(sub_821A2590);
PPC_FUNC_IMPL(__imp__sub_821A2590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2598"))) PPC_WEAK_FUNC(sub_821A2598);
PPC_FUNC_IMPL(__imp__sub_821A2598) {
	PPC_FUNC_PROLOGUE();
	// lfd f0,216(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 216);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-19032(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19032);
	// fdiv f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 / ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A25B0"))) PPC_WEAK_FUNC(sub_821A25B0);
PPC_FUNC_IMPL(__imp__sub_821A25B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x82088248
	sub_82088248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A25B8"))) PPC_WEAK_FUNC(sub_821A25B8);
PPC_FUNC_IMPL(__imp__sub_821A25B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A25D8"))) PPC_WEAK_FUNC(sub_821A25D8);
PPC_FUNC_IMPL(__imp__sub_821A25D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,121
	ctx.r11.s64 = ctx.r4.s64 + 121;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A25E8"))) PPC_WEAK_FUNC(sub_821A25E8);
PPC_FUNC_IMPL(__imp__sub_821A25E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A25F8"))) PPC_WEAK_FUNC(sub_821A25F8);
PPC_FUNC_IMPL(__imp__sub_821A25F8) {
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
	ctx.lr = 0x821A2608;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821a2620
	if (ctx.cr6.eq) goto loc_821A2620;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x821A261C;
	sub_82183448(ctx, base);
	// b 0x821a2628
	goto loc_821A2628;
loc_821A2620:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821A2628;
	sub_821845A0(ctx, base);
loc_821A2628:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a264c
	if (ctx.cr6.eq) goto loc_821A264C;
	// bl 0x821a8430
	ctx.lr = 0x821A2634;
	sub_821A8430(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-12408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821A264C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12408, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2668"))) PPC_WEAK_FUNC(sub_821A2668);
PPC_FUNC_IMPL(__imp__sub_821A2668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A2670;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e0ec
	ctx.lr = 0x821A2680;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821a26b0
	if (!ctx.cr6.eq) goto loc_821A26B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x821a26b0
	if (!ctx.cr6.eq) goto loc_821A26B0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a26b0
	if (ctx.cr6.eq) goto loc_821A26B0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821A26B0:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821A26BC;
	sub_822AA648(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a26f0
	if (ctx.cr6.eq) goto loc_821A26F0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,7200
	ctx.r9.s64 = ctx.r11.s64 + 7200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A26F0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2740
	if (ctx.cr6.eq) goto loc_821A2740;
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r9,r10,7200
	ctx.r9.s64 = ctx.r10.s64 + 7200;
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x821a27c8
	if (ctx.cr6.eq) goto loc_821A27C8;
	// li r11,640
	ctx.r11.s64 = 640;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r10,432
	ctx.r10.s64 = 432;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A2740:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2794
	if (ctx.cr6.eq) goto loc_821A2794;
	// li r11,640
	ctx.r11.s64 = 640;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x821a277c
	if (ctx.cr6.eq) goto loc_821A277C;
	// li r10,576
	ctx.r10.s64 = 576;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A277C:
	// li r10,480
	ctx.r10.s64 = 480;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A2794:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,640
	ctx.r10.s64 = 640;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x821a27c0
	if (ctx.cr6.eq) goto loc_821A27C0;
	// li r9,432
	ctx.r9.s64 = 432;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A27C0:
	// li r9,360
	ctx.r9.s64 = 360;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_821A27C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A27D0"))) PPC_WEAK_FUNC(sub_821A27D0);
PPC_FUNC_IMPL(__imp__sub_821A27D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// b 0x821de3e0
	sub_821DE3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A27F0"))) PPC_WEAK_FUNC(sub_821A27F0);
PPC_FUNC_IMPL(__imp__sub_821A27F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A27F4"))) PPC_WEAK_FUNC(sub_821A27F4);
PPC_FUNC_IMPL(__imp__sub_821A27F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A27F8"))) PPC_WEAK_FUNC(sub_821A27F8);
PPC_FUNC_IMPL(__imp__sub_821A27F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A2800;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,79
	ctx.r8.s64 = ctx.r11.s64 + 79;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r29,r6,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// rlwinm r28,r5,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x821a2854
	if (ctx.cr6.eq) goto loc_821A2854;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x821a2854
	if (ctx.cr6.eq) goto loc_821A2854;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bne cr6,0x821a2858
	if (!ctx.cr6.eq) goto loc_821A2858;
loc_821A2854:
	// li r30,8
	ctx.r30.s64 = 8;
loc_821A2858:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x821A2864;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821A2870;
	sub_822AA648(ctx, base);
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// divwu r7,r10,r9
	ctx.r7.u32 = ctx.r10.u32 / ctx.r9.u32;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x821a28ac
	if (ctx.cr6.eq) goto loc_821A28AC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8226b3e0
	ctx.lr = 0x821A28A8;
	sub_8226B3E0(ctx, base);
	// b 0x821a28b4
	goto loc_821A28B4;
loc_821A28AC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272088
	ctx.lr = 0x821A28B4;
	sub_82272088(ctx, base);
loc_821A28B4:
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a28d8
	if (ctx.cr6.eq) goto loc_821A28D8;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272048
	ctx.lr = 0x821A28CC;
	sub_82272048(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821A28D8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8226b3e0
	ctx.lr = 0x821A28F0;
	sub_8226B3E0(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

