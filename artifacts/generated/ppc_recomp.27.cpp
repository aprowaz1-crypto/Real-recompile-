#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821606A4"))) PPC_WEAK_FUNC(sub_821606A4);
PPC_FUNC_IMPL(__imp__sub_821606A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821606A8"))) PPC_WEAK_FUNC(sub_821606A8);
PPC_FUNC_IMPL(__imp__sub_821606A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821b0d28
	ctx.lr = 0x821606C8;
	sub_821B0D28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821606e4
	if (ctx.cr6.eq) goto loc_821606E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821606E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821606E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821606FC"))) PPC_WEAK_FUNC(sub_821606FC);
PPC_FUNC_IMPL(__imp__sub_821606FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160700"))) PPC_WEAK_FUNC(sub_82160700);
PPC_FUNC_IMPL(__imp__sub_82160700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82160708;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82160730
	if (!ctx.cr6.gt) goto loc_82160730;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82160730:
	// bl 0x82183850
	ctx.lr = 0x82160734;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8216074c
	if (ctx.cr6.eq) goto loc_8216074C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82160748;
	sub_82183448(ctx, base);
	// b 0x82160758
	goto loc_82160758;
loc_8216074C:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82160758;
	sub_821845A0(ctx, base);
loc_82160758:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x82160768;
	sub_822AA648(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8216077c
	if (!ctx.cr6.gt) goto loc_8216077C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8216077C:
	// bl 0x82183850
	ctx.lr = 0x82160780;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82160798
	if (ctx.cr6.eq) goto loc_82160798;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82160794;
	sub_82183448(ctx, base);
	// b 0x821607a4
	goto loc_821607A4;
loc_82160798:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821607A4;
	sub_821845A0(ctx, base);
loc_821607A4:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821607B4;
	sub_822AA648(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821607c8
	if (!ctx.cr6.gt) goto loc_821607C8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821607C8:
	// bl 0x82183850
	ctx.lr = 0x821607CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821607e4
	if (ctx.cr6.eq) goto loc_821607E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821607E0;
	sub_82183448(ctx, base);
	// b 0x821607f0
	goto loc_821607F0;
loc_821607E4:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821607F0;
	sub_821845A0(ctx, base);
loc_821607F0:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x82160800;
	sub_822AA648(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82160810
	if (ctx.cr6.gt) goto loc_82160810;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82160810:
	// bl 0x82183850
	ctx.lr = 0x82160814;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8216082c
	if (ctx.cr6.eq) goto loc_8216082C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82160828;
	sub_82183448(ctx, base);
	// b 0x82160838
	goto loc_82160838;
loc_8216082C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82160838;
	sub_821845A0(ctx, base);
loc_82160838:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x82160848;
	sub_822AA648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82160850"))) PPC_WEAK_FUNC(sub_82160850);
PPC_FUNC_IMPL(__imp__sub_82160850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82160858;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x821a2548
	ctx.lr = 0x82160878;
	sub_821A2548(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// lwz r4,856(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 856);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,852(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 852);
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8226b2c0
	ctx.lr = 0x821608A4;
	sub_8226B2C0(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,856(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 856);
	// addi r7,r9,-460
	ctx.r7.s64 = ctx.r9.s64 + -460;
	// lwz r3,852(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 852);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// bl 0x8226b3e0
	ctx.lr = 0x821608CC;
	sub_8226B3E0(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r9,856(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 856);
	// li r8,80
	ctx.r8.s64 = 80;
	// lwz r11,852(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 852);
	// addi r7,r11,79
	ctx.r7.s64 = ctx.r11.s64 + 79;
	// divwu r11,r7,r8
	ctx.r11.u32 = ctx.r7.u32 / ctx.r8.u32;
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,5120
	ctx.r3.s64 = 5120;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// mullw r8,r5,r11
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// divwu r6,r7,r3
	ctx.r6.u32 = ctx.r7.u32 / ctx.r3.u32;
	// lis r5,11552
	ctx.r5.s64 = 757071872;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// ori r5,r5,406
	ctx.r5.u64 = ctx.r5.u64 | 406;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r4,856(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 856);
	// lwz r3,852(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 852);
	// bl 0x8226b3e0
	ctx.lr = 0x82160940;
	sub_8226B3E0(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216094C"))) PPC_WEAK_FUNC(sub_8216094C);
PPC_FUNC_IMPL(__imp__sub_8216094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160950"))) PPC_WEAK_FUNC(sub_82160950);
PPC_FUNC_IMPL(__imp__sub_82160950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// b 0x82160850
	sub_82160850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160960"))) PPC_WEAK_FUNC(sub_82160960);
PPC_FUNC_IMPL(__imp__sub_82160960) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821609ac
	if (ctx.cr6.eq) goto loc_821609AC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x821dd1d8
	ctx.lr = 0x821609AC;
	sub_821DD1D8(ctx, base);
loc_821609AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821609D0"))) PPC_WEAK_FUNC(sub_821609D0);
PPC_FUNC_IMPL(__imp__sub_821609D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x8208fbf8
	sub_8208FBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821609E8"))) PPC_WEAK_FUNC(sub_821609E8);
PPC_FUNC_IMPL(__imp__sub_821609E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821609F0;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160a68
	if (ctx.cr6.eq) goto loc_82160A68;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82160a68
	if (!ctx.cr6.gt) goto loc_82160A68;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82160A1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160a4c
	if (ctx.cr6.eq) goto loc_82160A4C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x821dd1d8
	ctx.lr = 0x82160A4C;
	sub_821DD1D8(ctx, base);
loc_82160A4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82160a1c
	if (ctx.cr6.lt) goto loc_82160A1C;
loc_82160A68:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160a7c
	if (ctx.cr6.eq) goto loc_82160A7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82160A7C;
	sub_82183E40(ctx, base);
loc_82160A7C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160a94
	if (ctx.cr6.eq) goto loc_82160A94;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82160A94;
	sub_82183E40(ctx, base);
loc_82160A94:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160aac
	if (ctx.cr6.eq) goto loc_82160AAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82160AAC;
	sub_82183E40(ctx, base);
loc_82160AAC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160ac4
	if (ctx.cr6.eq) goto loc_82160AC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82160AC4;
	sub_82183E40(ctx, base);
loc_82160AC4:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82160AD0"))) PPC_WEAK_FUNC(sub_82160AD0);
PPC_FUNC_IMPL(__imp__sub_82160AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23648
	ctx.r10.s64 = ctx.r11.s64 + -23648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821609e8
	ctx.lr = 0x82160AFC;
	sub_821609E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x82160B04;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160b20
	if (ctx.cr6.eq) goto loc_82160B20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82160B1C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82160B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160B38"))) PPC_WEAK_FUNC(sub_82160B38);
PPC_FUNC_IMPL(__imp__sub_82160B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82160B40;
	sub_8224875C(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,-19048(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// beq cr6,0x82160e64
	if (ctx.cr6.eq) goto loc_82160E64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82160B6C;
	sub_821A2A60(ctx, base);
	// addi r20,r30,36
	ctx.r20.s64 = ctx.r30.s64 + 36;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9d78
	ctx.lr = 0x82160B84;
	sub_821A9D78(ctx, base);
	// addi r19,r30,40
	ctx.r19.s64 = ctx.r30.s64 + 40;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821a9ea8
	ctx.lr = 0x82160B94;
	sub_821A9EA8(ctx, base);
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lwz r3,-7460(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7460);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x821af140
	ctx.lr = 0x82160BA4;
	sub_821AF140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82160450
	ctx.lr = 0x82160BB0;
	sub_82160450(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a2b58
	ctx.lr = 0x82160BB8;
	sub_821A2B58(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a2b00
	ctx.lr = 0x82160BC8;
	sub_821A2B00(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// ble cr6,0x82160de0
	if (!ctx.cr6.gt) goto loc_82160DE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lfs f30,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_82160BF0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160dcc
	if (ctx.cr6.eq) goto loc_82160DCC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82160dcc
	if (ctx.cr6.eq) goto loc_82160DCC;
	// lwz r10,836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160dcc
	if (ctx.cr6.eq) goto loc_82160DCC;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r3,-7460(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7460);
	// bl 0x821af190
	ctx.lr = 0x82160C2C;
	sub_821AF190(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// ld r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// ld r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// ld r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x821a2918
	ctx.lr = 0x82160C60;
	sub_821A2918(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821a9ce8
	ctx.lr = 0x82160C74;
	sub_821A9CE8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821a9e08
	ctx.lr = 0x82160C84;
	sub_821A9E08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9fe8
	ctx.lr = 0x82160CA4;
	sub_821A9FE8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r11,844
	ctx.r29.s64 = ctx.r11.s64 + 844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82092930
	ctx.lr = 0x82160CBC;
	sub_82092930(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82160d0c
	if (ctx.cr6.eq) goto loc_82160D0C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r11,844
	ctx.r4.s64 = ctx.r11.s64 + 844;
	// bl 0x821a8e50
	ctx.lr = 0x82160CFC;
	sub_821A8E50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x821af2d0
	ctx.lr = 0x82160D0C;
	sub_821AF2D0(ctx, base);
loc_82160D0C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,832(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 832);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82160d98
	if (!ctx.cr6.gt) goto loc_82160D98;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82160D28:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// lwzx r28,r10,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82160d70
	if (ctx.cr6.eq) goto loc_82160D70;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82160d50
	if (ctx.cr6.eq) goto loc_82160D50;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x82160d64
	goto loc_82160D64;
loc_82160D50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821af2d0
	ctx.lr = 0x82160D5C;
	sub_821AF2D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_82160D64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82160D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160D70:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821af2d0
	ctx.lr = 0x82160D7C;
	sub_821AF2D0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,832(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 832);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82160d28
	if (ctx.cr6.lt) goto loc_82160D28;
loc_82160D98:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82160DCC;
	sub_821AA098(ctx, base);
loc_82160DCC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82160bf0
	if (ctx.cr6.lt) goto loc_82160BF0;
loc_82160DE0:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x82160DF0;
	sub_821A9CE8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9e08
	ctx.lr = 0x82160DFC;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160e14
	if (ctx.cr6.eq) goto loc_82160E14;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9f48
	ctx.lr = 0x82160E14;
	sub_821A9F48(ctx, base);
loc_82160E14:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160e2c
	if (ctx.cr6.eq) goto loc_82160E2C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9f48
	ctx.lr = 0x82160E2C;
	sub_821A9F48(ctx, base);
loc_82160E2C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821af190
	ctx.lr = 0x82160E38;
	sub_821AF190(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821af2d0
	ctx.lr = 0x82160E44;
	sub_821AF2D0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a3010
	ctx.lr = 0x82160E50;
	sub_821A3010(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a2b00
	ctx.lr = 0x82160E5C;
	sub_821A2B00(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821b0d28
	ctx.lr = 0x82160E64;
	sub_821B0D28(ctx, base);
loc_82160E64:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82160E74"))) PPC_WEAK_FUNC(sub_82160E74);
PPC_FUNC_IMPL(__imp__sub_82160E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160E78"))) PPC_WEAK_FUNC(sub_82160E78);
PPC_FUNC_IMPL(__imp__sub_82160E78) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160E88"))) PPC_WEAK_FUNC(sub_82160E88);
PPC_FUNC_IMPL(__imp__sub_82160E88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160E98"))) PPC_WEAK_FUNC(sub_82160E98);
PPC_FUNC_IMPL(__imp__sub_82160E98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82160eb0
	if (ctx.cr6.eq) goto loc_82160EB0;
	// addi r11,r5,42
	ctx.r11.s64 = ctx.r5.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_82160EB0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82160ec8
	if (ctx.cr6.eq) goto loc_82160EC8;
	// addi r11,r5,52
	ctx.r11.s64 = ctx.r5.s64 + 52;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82160EC8:
	// addi r11,r5,31
	ctx.r11.s64 = ctx.r5.s64 + 31;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160EE8"))) PPC_WEAK_FUNC(sub_82160EE8);
PPC_FUNC_IMPL(__imp__sub_82160EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82160EF0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x821015d8
	ctx.lr = 0x82160F14;
	sub_821015D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821015d8
	ctx.lr = 0x82160F30;
	sub_821015D8(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82160F38:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,10
	ctx.r7.s64 = ctx.r30.s64 + 10;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821015d8
	ctx.lr = 0x82160F54;
	sub_821015D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82160f38
	if (ctx.cr6.lt) goto loc_82160F38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82160F68:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,50
	ctx.r7.s64 = ctx.r30.s64 + 50;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821015d8
	ctx.lr = 0x82160F84;
	sub_821015D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// blt cr6,0x82160f68
	if (ctx.cr6.lt) goto loc_82160F68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82160F9C"))) PPC_WEAK_FUNC(sub_82160F9C);
PPC_FUNC_IMPL(__imp__sub_82160F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160FA0"))) PPC_WEAK_FUNC(sub_82160FA0);
PPC_FUNC_IMPL(__imp__sub_82160FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82160FC4:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82160fdc
	if (ctx.cr6.eq) goto loc_82160FDC;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
loc_82160FDC:
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82160ff4
	if (ctx.cr6.eq) goto loc_82160FF4;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
loc_82160FF4:
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82160fc4
	if (ctx.cr6.lt) goto loc_82160FC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216100C"))) PPC_WEAK_FUNC(sub_8216100C);
PPC_FUNC_IMPL(__imp__sub_8216100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161010"))) PPC_WEAK_FUNC(sub_82161010);
PPC_FUNC_IMPL(__imp__sub_82161010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82161030:
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82161048
	if (ctx.cr6.eq) goto loc_82161048;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
loc_82161048:
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82161030
	if (ctx.cr6.lt) goto loc_82161030;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161060"))) PPC_WEAK_FUNC(sub_82161060);
PPC_FUNC_IMPL(__imp__sub_82161060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82161068;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82161080;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821610b8
	if (ctx.cr6.eq) goto loc_821610B8;
	// cmpwi cr6,r29,10010
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10010, ctx.xer);
	// bne cr6,0x821610b8
	if (!ctx.cr6.eq) goto loc_821610B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821610A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821610B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82161128
	if (ctx.cr6.lt) goto loc_82161128;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82161128
	if (!ctx.cr6.lt) goto loc_82161128;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8216110c
	if (ctx.cr6.eq) goto loc_8216110C;
	// bl 0x8241dd3c
	ctx.lr = 0x821610E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216110C:
	// bl 0x8241dd3c
	ctx.lr = 0x82161110;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82161128:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82161130;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82161144"))) PPC_WEAK_FUNC(sub_82161144);
PPC_FUNC_IMPL(__imp__sub_82161144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161148"))) PPC_WEAK_FUNC(sub_82161148);
PPC_FUNC_IMPL(__imp__sub_82161148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82161150;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82161168;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821611b0
	if (!ctx.cr6.gt) goto loc_821611B0;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216118C:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x821611ac
	if (ctx.cr6.eq) goto loc_821611AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8216118c
	if (ctx.cr6.lt) goto loc_8216118C;
	// b 0x821611b0
	goto loc_821611B0;
loc_821611AC:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_821611B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821611B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821611CC"))) PPC_WEAK_FUNC(sub_821611CC);
PPC_FUNC_IMPL(__imp__sub_821611CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821611D0"))) PPC_WEAK_FUNC(sub_821611D0);
PPC_FUNC_IMPL(__imp__sub_821611D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821611D8;
	sub_82248778(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r24,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r24.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x820f06c8
	ctx.lr = 0x82161208;
	sub_820F06C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,640
	ctx.r4.s64 = 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x82161220;
	sub_822AA648(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82161264
	if (!ctx.cr6.gt) goto loc_82161264;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82161234:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x820f0738
	ctx.lr = 0x82161240;
	sub_820F0738(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82161258
	if (ctx.cr6.eq) goto loc_82161258;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82161258:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82161234
	if (ctx.cr6.lt) goto loc_82161234;
loc_82161264:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// beq cr6,0x821614ec
	if (ctx.cr6.eq) goto loc_821614EC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r31,-1
	ctx.r31.s64 = -1;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82161290
	if (!ctx.cr6.gt) goto loc_82161290;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82161290:
	// bl 0x82183850
	ctx.lr = 0x82161294;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821612ac
	if (ctx.cr6.eq) goto loc_821612AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821612A8;
	sub_82183448(ctx, base);
	// b 0x821612b8
	goto loc_821612B8;
loc_821612AC:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821612B8;
	sub_821845A0(ctx, base);
loc_821612B8:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821612cc
	if (!ctx.cr6.gt) goto loc_821612CC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_821612CC:
	// bl 0x82183850
	ctx.lr = 0x821612D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821612e8
	if (ctx.cr6.eq) goto loc_821612E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821612E4;
	sub_82183448(ctx, base);
	// b 0x821612f4
	goto loc_821612F4;
loc_821612E8:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821612F4;
	sub_821845A0(ctx, base);
loc_821612F4:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82161308
	if (!ctx.cr6.gt) goto loc_82161308;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82161308:
	// bl 0x82183850
	ctx.lr = 0x8216130C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82161324
	if (ctx.cr6.eq) goto loc_82161324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82161320;
	sub_82183448(ctx, base);
	// b 0x82161330
	goto loc_82161330;
loc_82161324:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82161330;
	sub_821845A0(ctx, base);
loc_82161330:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82161344
	if (!ctx.cr6.gt) goto loc_82161344;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82161344:
	// bl 0x82183850
	ctx.lr = 0x82161348;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82161360
	if (ctx.cr6.eq) goto loc_82161360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x8216135C;
	sub_82183448(ctx, base);
	// b 0x8216136c
	goto loc_8216136C;
loc_82161360:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8216136C;
	sub_821845A0(ctx, base);
loc_8216136C:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// bgt cr6,0x8216137c
	if (ctx.cr6.gt) goto loc_8216137C;
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8216137C:
	// bl 0x82183850
	ctx.lr = 0x82161380;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82161398
	if (ctx.cr6.eq) goto loc_82161398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82161394;
	sub_82183448(ctx, base);
	// b 0x821613a4
	goto loc_821613A4;
loc_82161398:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821613A4;
	sub_821845A0(ctx, base);
loc_821613A4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// ble cr6,0x821614e8
	if (!ctx.cr6.gt) goto loc_821614E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_821613BC:
	// bl 0x82183850
	ctx.lr = 0x821613C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821613d8
	if (ctx.cr6.eq) goto loc_821613D8;
	// li r3,8608
	ctx.r3.s64 = 8608;
	// bl 0x82183448
	ctx.lr = 0x821613D4;
	sub_82183448(ctx, base);
	// b 0x821613e0
	goto loc_821613E0;
loc_821613D8:
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x821845a0
	ctx.lr = 0x821613E0;
	sub_821845A0(ctx, base);
loc_821613E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821613f0
	if (ctx.cr6.eq) goto loc_821613F0;
	// bl 0x821016f8
	ctx.lr = 0x821613EC;
	sub_821016F8(ctx, base);
	// b 0x821613f4
	goto loc_821613F4;
loc_821613F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821613F4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,8576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8576, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x82161410;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82161428
	if (ctx.cr6.eq) goto loc_82161428;
	// li r3,8608
	ctx.r3.s64 = 8608;
	// bl 0x82183448
	ctx.lr = 0x82161424;
	sub_82183448(ctx, base);
	// b 0x82161430
	goto loc_82161430;
loc_82161428:
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x821845a0
	ctx.lr = 0x82161430;
	sub_821845A0(ctx, base);
loc_82161430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161440
	if (ctx.cr6.eq) goto loc_82161440;
	// bl 0x821016f8
	ctx.lr = 0x8216143C;
	sub_821016F8(ctx, base);
	// b 0x82161444
	goto loc_82161444;
loc_82161440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82161444:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,8576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8576, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x82161460;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82161478
	if (ctx.cr6.eq) goto loc_82161478;
	// li r3,928
	ctx.r3.s64 = 928;
	// bl 0x82183448
	ctx.lr = 0x82161474;
	sub_82183448(ctx, base);
	// b 0x82161480
	goto loc_82161480;
loc_82161478:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x821845a0
	ctx.lr = 0x82161480;
	sub_821845A0(ctx, base);
loc_82161480:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161494
	if (ctx.cr6.eq) goto loc_82161494;
	// bl 0x820bd628
	ctx.lr = 0x8216148C;
	sub_820BD628(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82161498
	goto loc_82161498;
loc_82161494:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82161498:
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stwx r28,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82160ee8
	ctx.lr = 0x821614D0;
	sub_82160EE8(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r24,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r24.u32);
	// bne 0x821613bc
	if (!ctx.cr0.eq) goto loc_821613BC;
loc_821614E8:
	// stw r25,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r25.u32);
loc_821614EC:
	// stw r24,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r24.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821614F8"))) PPC_WEAK_FUNC(sub_821614F8);
PPC_FUNC_IMPL(__imp__sub_821614F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82161500;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161524
	if (ctx.cr6.eq) goto loc_82161524;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x82161524;
	sub_82183E40(ctx, base);
loc_82161524:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82161600
	if (!ctx.cr6.gt) goto loc_82161600;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82161544:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161574
	if (ctx.cr6.eq) goto loc_82161574;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161574
	if (ctx.cr6.eq) goto loc_82161574;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82161574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161574:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821615ac
	if (ctx.cr6.eq) goto loc_821615AC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821615ac
	if (ctx.cr6.eq) goto loc_821615AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821615AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821615AC:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821615e4
	if (ctx.cr6.eq) goto loc_821615E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821615e4
	if (ctx.cr6.eq) goto loc_821615E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821615E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821615E4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82161544
	if (ctx.cr6.lt) goto loc_82161544;
loc_82161600:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161614
	if (ctx.cr6.eq) goto loc_82161614;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82161614;
	sub_82183E40(ctx, base);
loc_82161614:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216162c
	if (ctx.cr6.eq) goto loc_8216162C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8216162C;
	sub_82183E40(ctx, base);
loc_8216162C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161644
	if (ctx.cr6.eq) goto loc_82161644;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82161644;
	sub_82183E40(ctx, base);
loc_82161644:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216165c
	if (ctx.cr6.eq) goto loc_8216165C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8216165C;
	sub_82183E40(ctx, base);
loc_8216165C:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161674
	if (ctx.cr6.eq) goto loc_82161674;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82161674;
	sub_82183E40(ctx, base);
loc_82161674:
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// stw r29,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82161688"))) PPC_WEAK_FUNC(sub_82161688);
PPC_FUNC_IMPL(__imp__sub_82161688) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// bl 0x82183850
	ctx.lr = 0x821616A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821616c0
	if (ctx.cr6.eq) goto loc_821616C0;
	// li r3,8608
	ctx.r3.s64 = 8608;
	// bl 0x82183448
	ctx.lr = 0x821616BC;
	sub_82183448(ctx, base);
	// b 0x821616c8
	goto loc_821616C8;
loc_821616C0:
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x821845a0
	ctx.lr = 0x821616C8;
	sub_821845A0(ctx, base);
loc_821616C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821616d8
	if (ctx.cr6.eq) goto loc_821616D8;
	// bl 0x821016f8
	ctx.lr = 0x821616D4;
	sub_821016F8(ctx, base);
	// b 0x821616dc
	goto loc_821616DC;
loc_821616D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821616DC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// stw r11,8576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8576, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x821616EC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82161704
	if (ctx.cr6.eq) goto loc_82161704;
	// li r3,928
	ctx.r3.s64 = 928;
	// bl 0x82183448
	ctx.lr = 0x82161700;
	sub_82183448(ctx, base);
	// b 0x8216170c
	goto loc_8216170C;
loc_82161704:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x821845a0
	ctx.lr = 0x8216170C;
	sub_821845A0(ctx, base);
loc_8216170C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216171c
	if (ctx.cr6.eq) goto loc_8216171C;
	// bl 0x820bd628
	ctx.lr = 0x82161718;
	sub_820BD628(ctx, base);
	// b 0x82161720
	goto loc_82161720;
loc_8216171C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82161720:
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r9.u32);
	// lwz r8,332(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82161750"))) PPC_WEAK_FUNC(sub_82161750);
PPC_FUNC_IMPL(__imp__sub_82161750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161784
	if (ctx.cr6.eq) goto loc_82161784;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x82161784;
	sub_82183E40(ctx, base);
loc_82161784:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821617b0
	if (ctx.cr6.eq) goto loc_821617B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821617B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821617B0:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821617d4
	if (ctx.cr6.eq) goto loc_821617D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821617D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821617D4:
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821617F0"))) PPC_WEAK_FUNC(sub_821617F0);
PPC_FUNC_IMPL(__imp__sub_821617F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,328(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x82161818
	if (ctx.cr6.eq) goto loc_82161818;
	// li r5,10010
	ctx.r5.s64 = 10010;
	// b 0x82160ee8
	sub_82160EE8(ctx, base);
	return;
loc_82161818:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82160ee8
	sub_82160EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161820"))) PPC_WEAK_FUNC(sub_82161820);
PPC_FUNC_IMPL(__imp__sub_82161820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161824"))) PPC_WEAK_FUNC(sub_82161824);
PPC_FUNC_IMPL(__imp__sub_82161824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161828"))) PPC_WEAK_FUNC(sub_82161828);
PPC_FUNC_IMPL(__imp__sub_82161828) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,4560(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4560);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r5,4560
	ctx.r9.s64 = ctx.r5.s64 + 4560;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r11,r5,3280
	ctx.r11.s64 = ctx.r5.s64 + 3280;
	// addi r11,r5,3296
	ctx.r11.s64 = ctx.r5.s64 + 3296;
	// std r10,304(r4)
	PPC_STORE_U64(ctx.r4.u32 + 304, ctx.r10.u64);
	// addi r11,r5,3312
	ctx.r11.s64 = ctx.r5.s64 + 3312;
	// ld r7,4568(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4568);
	// addi r11,r5,3328
	ctx.r11.s64 = ctx.r5.s64 + 3328;
	// std r7,312(r4)
	PPC_STORE_U64(ctx.r4.u32 + 312, ctx.r7.u64);
	// ld r6,4640(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4640);
	// std r6,320(r4)
	PPC_STORE_U64(ctx.r4.u32 + 320, ctx.r6.u64);
	// ld r11,4648(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4648);
	// std r11,328(r4)
	PPC_STORE_U64(ctx.r4.u32 + 328, ctx.r11.u64);
	// ld r10,4720(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4720);
	// std r10,128(r4)
	PPC_STORE_U64(ctx.r4.u32 + 128, ctx.r10.u64);
	// ld r9,4728(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4728);
	// std r9,136(r4)
	PPC_STORE_U64(ctx.r4.u32 + 136, ctx.r9.u64);
	// ld r8,3280(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3280);
	// std r8,64(r4)
	PPC_STORE_U64(ctx.r4.u32 + 64, ctx.r8.u64);
	// ld r7,3288(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3288);
	// std r7,72(r4)
	PPC_STORE_U64(ctx.r4.u32 + 72, ctx.r7.u64);
	// ld r6,3280(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3280);
	// std r6,832(r4)
	PPC_STORE_U64(ctx.r4.u32 + 832, ctx.r6.u64);
	// ld r11,3288(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3288);
	// std r11,840(r4)
	PPC_STORE_U64(ctx.r4.u32 + 840, ctx.r11.u64);
	// lwz r10,8584(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8584);
	// stw r10,912(r4)
	PPC_STORE_U32(ctx.r4.u32 + 912, ctx.r10.u32);
	// ld r9,4800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4800);
	// std r9,144(r4)
	PPC_STORE_U64(ctx.r4.u32 + 144, ctx.r9.u64);
	// ld r8,4808(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4808);
	// std r8,152(r4)
	PPC_STORE_U64(ctx.r4.u32 + 152, ctx.r8.u64);
	// ld r7,3296(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3296);
	// std r7,80(r4)
	PPC_STORE_U64(ctx.r4.u32 + 80, ctx.r7.u64);
	// ld r6,3304(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3304);
	// std r6,88(r4)
	PPC_STORE_U64(ctx.r4.u32 + 88, ctx.r6.u64);
	// ld r11,3296(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3296);
	// std r11,848(r4)
	PPC_STORE_U64(ctx.r4.u32 + 848, ctx.r11.u64);
	// ld r10,3304(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3304);
	// std r10,856(r4)
	PPC_STORE_U64(ctx.r4.u32 + 856, ctx.r10.u64);
	// lwz r9,8588(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8588);
	// stw r9,916(r4)
	PPC_STORE_U32(ctx.r4.u32 + 916, ctx.r9.u32);
	// ld r8,4880(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4880);
	// std r8,160(r4)
	PPC_STORE_U64(ctx.r4.u32 + 160, ctx.r8.u64);
	// ld r7,4888(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4888);
	// std r7,168(r4)
	PPC_STORE_U64(ctx.r4.u32 + 168, ctx.r7.u64);
	// ld r6,3312(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3312);
	// std r6,96(r4)
	PPC_STORE_U64(ctx.r4.u32 + 96, ctx.r6.u64);
	// ld r11,3320(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3320);
	// std r11,104(r4)
	PPC_STORE_U64(ctx.r4.u32 + 104, ctx.r11.u64);
	// ld r10,3312(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3312);
	// std r10,864(r4)
	PPC_STORE_U64(ctx.r4.u32 + 864, ctx.r10.u64);
	// ld r9,3320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3320);
	// std r9,872(r4)
	PPC_STORE_U64(ctx.r4.u32 + 872, ctx.r9.u64);
	// lwz r8,8592(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8592);
	// stw r8,920(r4)
	PPC_STORE_U32(ctx.r4.u32 + 920, ctx.r8.u32);
	// ld r7,4960(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4960);
	// std r7,176(r4)
	PPC_STORE_U64(ctx.r4.u32 + 176, ctx.r7.u64);
	// ld r6,4968(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4968);
	// std r6,184(r4)
	PPC_STORE_U64(ctx.r4.u32 + 184, ctx.r6.u64);
	// ld r11,3328(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3328);
	// std r11,112(r4)
	PPC_STORE_U64(ctx.r4.u32 + 112, ctx.r11.u64);
	// ld r10,3336(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3336);
	// std r10,120(r4)
	PPC_STORE_U64(ctx.r4.u32 + 120, ctx.r10.u64);
	// ld r9,3328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3328);
	// std r9,880(r4)
	PPC_STORE_U64(ctx.r4.u32 + 880, ctx.r9.u64);
	// ld r8,3336(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3336);
	// std r8,888(r4)
	PPC_STORE_U64(ctx.r4.u32 + 888, ctx.r8.u64);
	// lwz r7,8596(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8596);
	// stw r7,924(r4)
	PPC_STORE_U32(ctx.r4.u32 + 924, ctx.r7.u32);
	// ld r6,4112(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4112);
	// std r6,336(r4)
	PPC_STORE_U64(ctx.r4.u32 + 336, ctx.r6.u64);
	// ld r11,4120(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4120);
	// std r11,344(r4)
	PPC_STORE_U64(ctx.r4.u32 + 344, ctx.r11.u64);
	// ld r10,3344(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3344);
	// std r10,496(r4)
	PPC_STORE_U64(ctx.r4.u32 + 496, ctx.r10.u64);
	// ld r9,3352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3352);
	// std r9,504(r4)
	PPC_STORE_U64(ctx.r4.u32 + 504, ctx.r9.u64);
	// ld r8,5040(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5040);
	// std r8,656(r4)
	PPC_STORE_U64(ctx.r4.u32 + 656, ctx.r8.u64);
	// ld r7,5048(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5048);
	// std r7,664(r4)
	PPC_STORE_U64(ctx.r4.u32 + 664, ctx.r7.u64);
	// ld r6,4128(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4128);
	// std r6,352(r4)
	PPC_STORE_U64(ctx.r4.u32 + 352, ctx.r6.u64);
	// ld r11,4136(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4136);
	// std r11,360(r4)
	PPC_STORE_U64(ctx.r4.u32 + 360, ctx.r11.u64);
	// ld r10,3360(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3360);
	// std r10,512(r4)
	PPC_STORE_U64(ctx.r4.u32 + 512, ctx.r10.u64);
	// ld r9,3368(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3368);
	// std r9,520(r4)
	PPC_STORE_U64(ctx.r4.u32 + 520, ctx.r9.u64);
	// ld r8,5120(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5120);
	// std r8,672(r4)
	PPC_STORE_U64(ctx.r4.u32 + 672, ctx.r8.u64);
	// ld r7,5128(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5128);
	// std r7,680(r4)
	PPC_STORE_U64(ctx.r4.u32 + 680, ctx.r7.u64);
	// ld r6,4144(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4144);
	// std r6,368(r4)
	PPC_STORE_U64(ctx.r4.u32 + 368, ctx.r6.u64);
	// ld r11,4152(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4152);
	// std r11,376(r4)
	PPC_STORE_U64(ctx.r4.u32 + 376, ctx.r11.u64);
	// ld r10,3376(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3376);
	// std r10,528(r4)
	PPC_STORE_U64(ctx.r4.u32 + 528, ctx.r10.u64);
	// ld r9,3384(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3384);
	// std r9,536(r4)
	PPC_STORE_U64(ctx.r4.u32 + 536, ctx.r9.u64);
	// ld r8,5200(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5200);
	// std r8,688(r4)
	PPC_STORE_U64(ctx.r4.u32 + 688, ctx.r8.u64);
	// ld r7,5208(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5208);
	// std r7,696(r4)
	PPC_STORE_U64(ctx.r4.u32 + 696, ctx.r7.u64);
	// ld r6,4160(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4160);
	// std r6,384(r4)
	PPC_STORE_U64(ctx.r4.u32 + 384, ctx.r6.u64);
	// ld r11,4168(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4168);
	// std r11,392(r4)
	PPC_STORE_U64(ctx.r4.u32 + 392, ctx.r11.u64);
	// ld r10,3392(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3392);
	// std r10,544(r4)
	PPC_STORE_U64(ctx.r4.u32 + 544, ctx.r10.u64);
	// ld r9,3400(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3400);
	// std r9,552(r4)
	PPC_STORE_U64(ctx.r4.u32 + 552, ctx.r9.u64);
	// ld r8,5280(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5280);
	// std r8,704(r4)
	PPC_STORE_U64(ctx.r4.u32 + 704, ctx.r8.u64);
	// ld r7,5288(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5288);
	// std r7,712(r4)
	PPC_STORE_U64(ctx.r4.u32 + 712, ctx.r7.u64);
	// ld r6,4176(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4176);
	// std r6,400(r4)
	PPC_STORE_U64(ctx.r4.u32 + 400, ctx.r6.u64);
	// ld r11,4184(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4184);
	// std r11,408(r4)
	PPC_STORE_U64(ctx.r4.u32 + 408, ctx.r11.u64);
	// ld r10,3408(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3408);
	// std r10,560(r4)
	PPC_STORE_U64(ctx.r4.u32 + 560, ctx.r10.u64);
	// ld r9,3416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3416);
	// std r9,568(r4)
	PPC_STORE_U64(ctx.r4.u32 + 568, ctx.r9.u64);
	// ld r8,5360(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5360);
	// std r8,720(r4)
	PPC_STORE_U64(ctx.r4.u32 + 720, ctx.r8.u64);
	// ld r7,5368(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5368);
	// std r7,728(r4)
	PPC_STORE_U64(ctx.r4.u32 + 728, ctx.r7.u64);
	// ld r6,4192(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4192);
	// std r6,416(r4)
	PPC_STORE_U64(ctx.r4.u32 + 416, ctx.r6.u64);
	// ld r11,4200(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4200);
	// std r11,424(r4)
	PPC_STORE_U64(ctx.r4.u32 + 424, ctx.r11.u64);
	// ld r10,3424(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3424);
	// std r10,576(r4)
	PPC_STORE_U64(ctx.r4.u32 + 576, ctx.r10.u64);
	// ld r9,3432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3432);
	// std r9,584(r4)
	PPC_STORE_U64(ctx.r4.u32 + 584, ctx.r9.u64);
	// ld r8,5440(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5440);
	// std r8,736(r4)
	PPC_STORE_U64(ctx.r4.u32 + 736, ctx.r8.u64);
	// ld r7,5448(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5448);
	// std r7,744(r4)
	PPC_STORE_U64(ctx.r4.u32 + 744, ctx.r7.u64);
	// ld r6,4208(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4208);
	// std r6,432(r4)
	PPC_STORE_U64(ctx.r4.u32 + 432, ctx.r6.u64);
	// ld r11,4216(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4216);
	// std r11,440(r4)
	PPC_STORE_U64(ctx.r4.u32 + 440, ctx.r11.u64);
	// ld r10,3440(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3440);
	// std r10,592(r4)
	PPC_STORE_U64(ctx.r4.u32 + 592, ctx.r10.u64);
	// ld r9,3448(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3448);
	// std r9,600(r4)
	PPC_STORE_U64(ctx.r4.u32 + 600, ctx.r9.u64);
	// ld r8,5520(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5520);
	// std r8,752(r4)
	PPC_STORE_U64(ctx.r4.u32 + 752, ctx.r8.u64);
	// ld r7,5528(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5528);
	// std r7,760(r4)
	PPC_STORE_U64(ctx.r4.u32 + 760, ctx.r7.u64);
	// ld r6,4224(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4224);
	// std r6,448(r4)
	PPC_STORE_U64(ctx.r4.u32 + 448, ctx.r6.u64);
	// ld r11,4232(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4232);
	// std r11,456(r4)
	PPC_STORE_U64(ctx.r4.u32 + 456, ctx.r11.u64);
	// ld r10,3456(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3456);
	// std r10,608(r4)
	PPC_STORE_U64(ctx.r4.u32 + 608, ctx.r10.u64);
	// ld r9,3464(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3464);
	// std r9,616(r4)
	PPC_STORE_U64(ctx.r4.u32 + 616, ctx.r9.u64);
	// ld r8,5600(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5600);
	// std r8,768(r4)
	PPC_STORE_U64(ctx.r4.u32 + 768, ctx.r8.u64);
	// ld r7,5608(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5608);
	// std r7,776(r4)
	PPC_STORE_U64(ctx.r4.u32 + 776, ctx.r7.u64);
	// ld r6,4240(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4240);
	// std r6,464(r4)
	PPC_STORE_U64(ctx.r4.u32 + 464, ctx.r6.u64);
	// ld r11,4248(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4248);
	// std r11,472(r4)
	PPC_STORE_U64(ctx.r4.u32 + 472, ctx.r11.u64);
	// ld r10,3472(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3472);
	// std r10,624(r4)
	PPC_STORE_U64(ctx.r4.u32 + 624, ctx.r10.u64);
	// ld r9,3480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3480);
	// std r9,632(r4)
	PPC_STORE_U64(ctx.r4.u32 + 632, ctx.r9.u64);
	// ld r8,5680(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5680);
	// std r8,784(r4)
	PPC_STORE_U64(ctx.r4.u32 + 784, ctx.r8.u64);
	// ld r7,5688(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5688);
	// std r7,792(r4)
	PPC_STORE_U64(ctx.r4.u32 + 792, ctx.r7.u64);
	// ld r6,4256(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4256);
	// std r6,480(r4)
	PPC_STORE_U64(ctx.r4.u32 + 480, ctx.r6.u64);
	// ld r11,4264(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4264);
	// std r11,488(r4)
	PPC_STORE_U64(ctx.r4.u32 + 488, ctx.r11.u64);
	// ld r10,3488(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3488);
	// std r10,640(r4)
	PPC_STORE_U64(ctx.r4.u32 + 640, ctx.r10.u64);
	// ld r9,3496(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3496);
	// std r9,648(r4)
	PPC_STORE_U64(ctx.r4.u32 + 648, ctx.r9.u64);
	// ld r8,5760(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5760);
	// std r8,800(r4)
	PPC_STORE_U64(ctx.r4.u32 + 800, ctx.r8.u64);
	// ld r7,5768(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5768);
	// std r7,808(r4)
	PPC_STORE_U64(ctx.r4.u32 + 808, ctx.r7.u64);
	// lwz r6,344(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// stw r6,192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 192, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161B40"))) PPC_WEAK_FUNC(sub_82161B40);
PPC_FUNC_IMPL(__imp__sub_82161B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82161B48;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x82161B50;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82161b70
	if (!ctx.cr6.eq) goto loc_82161B70;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82161d38
	if (ctx.cr6.eq) goto loc_82161D38;
loc_82161B70:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82188608
	ctx.lr = 0x82161B78;
	sub_82188608(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82161ba0
	if (ctx.cr6.eq) goto loc_82161BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x82161828
	ctx.lr = 0x82161B94;
	sub_82161828(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82161d38
	if (ctx.cr6.eq) goto loc_82161D38;
loc_82161BA0:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82161d30
	if (ctx.cr6.eq) goto loc_82161D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x82161c64
	if (!ctx.cr6.gt) goto loc_82161C64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82161BC8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82161828
	ctx.lr = 0x82161BE0;
	sub_82161828(ctx, base);
	// lfs f0,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82161c50
	if (ctx.cr6.eq) goto loc_82161C50;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f7,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f7.f64 = double(temp.f32);
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82161C50:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82161bc8
	if (ctx.cr6.lt) goto loc_82161BC8;
loc_82161C64:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82161d30
	if (!ctx.cr6.gt) goto loc_82161D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8964(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8964);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_82161C8C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82161828
	ctx.lr = 0x82161CA8;
	sub_82161828(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82161d20
	if (!ctx.cr6.eq) goto loc_82161D20;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x82161CCC;
	sub_82187920(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82161CE8;
	sub_8208EA90(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r9.u64);
	// std r8,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r8.u64);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,880
	ctx.r4.s64 = ctx.r11.s64 + 880;
	// std r7,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r7.u64);
	// std r6,888(r11)
	PPC_STORE_U64(ctx.r11.u32 + 888, ctx.r6.u64);
loc_82161D20:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82161c8c
	if (ctx.cr6.lt) goto loc_82161C8C;
loc_82161D30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82161D38:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x82161D44;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82161D48"))) PPC_WEAK_FUNC(sub_82161D48);
PPC_FUNC_IMPL(__imp__sub_82161D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82161D50;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82092930
	ctx.lr = 0x82161D70;
	sub_82092930(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161dc4
	if (ctx.cr6.eq) goto loc_82161DC4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x82161d8c
	if (ctx.cr6.gt) goto loc_82161D8C;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// b 0x82161d90
	goto loc_82161D90;
loc_82161D8C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82161D90:
	// addi r9,r30,42
	ctx.r9.s64 = ctx.r30.s64 + 42;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// bgt cr6,0x82161db4
	if (ctx.cr6.gt) goto loc_82161DB4;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82161ddc
	goto loc_82161DDC;
loc_82161DB4:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82161ddc
	goto loc_82161DDC;
loc_82161DC4:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r11,r30,42
	ctx.r11.s64 = ctx.r30.s64 + 42;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82161DDC:
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82161DF8"))) PPC_WEAK_FUNC(sub_82161DF8);
PPC_FUNC_IMPL(__imp__sub_82161DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r3,248
	ctx.r8.s64 = ctx.r3.s64 + 248;
	// lwz r11,-7468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7468);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82161E0C:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lwz r4,-8(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82161e6c
	if (!ctx.cr6.lt) goto loc_82161E6C;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82161e6c
	if (!ctx.cr6.eq) goto loc_82161E6C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82161e84
	if (!ctx.cr6.eq) goto loc_82161E84;
loc_82161E6C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// blt cr6,0x82161e0c
	if (ctx.cr6.lt) goto loc_82161E0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82161E84:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161E8C"))) PPC_WEAK_FUNC(sub_82161E8C);
PPC_FUNC_IMPL(__imp__sub_82161E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82161E90"))) PPC_WEAK_FUNC(sub_82161E90);
PPC_FUNC_IMPL(__imp__sub_82161E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82161E98;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82161EAC;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x82161EB8;
	sub_82188338(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-23608
	ctx.r9.s64 = ctx.r11.s64 + -23608;
	// addi r8,r10,-23640
	ctx.r8.s64 = ctx.r10.s64 + -23640;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x82161EE4;
	sub_82081590(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82161EF4:
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
	// bdnz 0x82161ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82161EF4;
	// bl 0x82183850
	ctx.lr = 0x82161F18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82161f30
	if (ctx.cr6.eq) goto loc_82161F30;
	// li r3,6952
	ctx.r3.s64 = 6952;
	// bl 0x82183448
	ctx.lr = 0x82161F2C;
	sub_82183448(ctx, base);
	// b 0x82161f38
	goto loc_82161F38;
loc_82161F30:
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x821845a0
	ctx.lr = 0x82161F38;
	sub_821845A0(ctx, base);
loc_82161F38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161f4c
	if (ctx.cr6.eq) goto loc_82161F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f03c8
	ctx.lr = 0x82161F48;
	sub_820F03C8(ctx, base);
	// b 0x82161f50
	goto loc_82161F50;
loc_82161F4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82161F50:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r6,r29,-8
	ctx.r6.s64 = ctx.r29.s64 + -8;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
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
loc_82161F94:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,-40(r9)
	PPC_STORE_U32(ctx.r9.u32 + -40, ctx.r7.u32);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,-7468(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7468);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// srawi r4,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 3;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82162018
	if (!ctx.cr6.lt) goto loc_82162018;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
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
	// bne cr6,0x82162018
	if (!ctx.cr6.eq) goto loc_82162018;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8216201c
	goto loc_8216201C;
loc_82162018:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8216201C:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216203c
	if (ctx.cr6.eq) goto loc_8216203C;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r5,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r5.u32);
	// b 0x82162044
	goto loc_82162044;
loc_8216203C:
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r30.u32);
loc_82162044:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stdu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r6.u32 = ea;
	// bdnz 0x82161f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82161F94;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82162088"))) PPC_WEAK_FUNC(sub_82162088);
PPC_FUNC_IMPL(__imp__sub_82162088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82162380
	sub_82162380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162090"))) PPC_WEAK_FUNC(sub_82162090);
PPC_FUNC_IMPL(__imp__sub_82162090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82162098;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821620f0
	if (!ctx.cr6.gt) goto loc_821620F0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821620B8:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x821620dc
	if (!ctx.cr6.eq) goto loc_821620DC;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,816(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 816);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 816, ctx.r6.u32);
loc_821620DC:
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821620b8
	if (ctx.cr6.lt) goto loc_821620B8;
loc_821620F0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82162188
	if (!ctx.cr6.gt) goto loc_82162188;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82162104:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162134
	if (ctx.cr6.eq) goto loc_82162134;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162134
	if (ctx.cr6.eq) goto loc_82162134;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82162134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82162134:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216216c
	if (ctx.cr6.eq) goto loc_8216216C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216216c
	if (ctx.cr6.eq) goto loc_8216216C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216216C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216216C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82162104
	if (ctx.cr6.lt) goto loc_82162104;
loc_82162188:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821621bc
	if (!ctx.cr6.gt) goto loc_821621BC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821621A0:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821621a0
	if (ctx.cr6.lt) goto loc_821621A0;
loc_821621BC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821621d0
	if (ctx.cr6.eq) goto loc_821621D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821621D0;
	sub_82183E40(ctx, base);
loc_821621D0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821621e8
	if (ctx.cr6.eq) goto loc_821621E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821621E8;
	sub_82183E40(ctx, base);
loc_821621E8:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// addi r6,r31,240
	ctx.r6.s64 = ctx.r31.s64 + 240;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82162204:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,-40(r9)
	PPC_STORE_U32(ctx.r9.u32 + -40, ctx.r30.u32);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r11,-7468(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7468);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82162288
	if (!ctx.cr6.lt) goto loc_82162288;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
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
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82162288
	if (!ctx.cr6.eq) goto loc_82162288;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8216228c
	goto loc_8216228C;
loc_82162288:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8216228C:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821622ac
	if (ctx.cr6.eq) goto loc_821622AC;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// b 0x821622b4
	goto loc_821622B4;
loc_821622AC:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// stw r28,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r28.u32);
loc_821622B4:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stdu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r6.u32 = ea;
	// bdnz 0x82162204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162204;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821622CC"))) PPC_WEAK_FUNC(sub_821622CC);
PPC_FUNC_IMPL(__imp__sub_821622CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821622D0"))) PPC_WEAK_FUNC(sub_821622D0);
PPC_FUNC_IMPL(__imp__sub_821622D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821622D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-23608
	ctx.r9.s64 = ctx.r11.s64 + -23608;
	// addi r8,r10,-23640
	ctx.r8.s64 = ctx.r10.s64 + -23640;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// bl 0x821614f8
	ctx.lr = 0x82162300;
	sub_821614F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161750
	ctx.lr = 0x82162308;
	sub_82161750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82162090
	ctx.lr = 0x82162310;
	sub_82162090(ctx, base);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162330
	if (ctx.cr6.eq) goto loc_82162330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82162324;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82162330;
	sub_82183E40(ctx, base);
loc_82162330:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82162354
	if (ctx.cr6.eq) goto loc_82162354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82162350;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_82162354:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82162364
	if (ctx.cr6.eq) goto loc_82162364;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_82162364:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821883b8
	ctx.lr = 0x8216236C;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82162374;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216237C"))) PPC_WEAK_FUNC(sub_8216237C);
PPC_FUNC_IMPL(__imp__sub_8216237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82162380"))) PPC_WEAK_FUNC(sub_82162380);
PPC_FUNC_IMPL(__imp__sub_82162380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821622d0
	ctx.lr = 0x821623A0;
	sub_821622D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821623bc
	if (ctx.cr6.eq) goto loc_821623BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821623B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821623BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821623D4"))) PPC_WEAK_FUNC(sub_821623D4);
PPC_FUNC_IMPL(__imp__sub_821623D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821623D8"))) PPC_WEAK_FUNC(sub_821623D8);
PPC_FUNC_IMPL(__imp__sub_821623D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821623E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,9108
	ctx.r29.s64 = ctx.r3.s64 + 9108;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r31,r29,18220
	ctx.r31.s64 = ctx.r29.s64 + 18220;
loc_821623F0:
	// addi r31,r31,-276
	ctx.r31.s64 = ctx.r31.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821623FC;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x821623f0
	if (!ctx.cr0.lt) goto loc_821623F0;
	// addi r31,r29,9112
	ctx.r31.s64 = ctx.r29.s64 + 9112;
	// li r30,32
	ctx.r30.s64 = 32;
loc_8216240C:
	// addi r31,r31,-276
	ctx.r31.s64 = ctx.r31.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82162418;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8216240c
	if (!ctx.cr0.lt) goto loc_8216240C;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// li r30,32
	ctx.r30.s64 = 32;
loc_82162428:
	// addi r31,r31,-276
	ctx.r31.s64 = ctx.r31.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82162434;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82162428
	if (!ctx.cr0.lt) goto loc_82162428;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82162444"))) PPC_WEAK_FUNC(sub_82162444);
PPC_FUNC_IMPL(__imp__sub_82162444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82162448"))) PPC_WEAK_FUNC(sub_82162448);
PPC_FUNC_IMPL(__imp__sub_82162448) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82162468
	if (ctx.cr6.lt) goto loc_82162468;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bge cr6,0x82162468
	if (!ctx.cr6.lt) goto loc_82162468;
	// mulli r11,r4,276
	ctx.r11.s64 = ctx.r4.s64 * 276;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
loc_82162468:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162470"))) PPC_WEAK_FUNC(sub_82162470);
PPC_FUNC_IMPL(__imp__sub_82162470) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82162490
	if (ctx.cr6.lt) goto loc_82162490;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bge cr6,0x82162490
	if (!ctx.cr6.lt) goto loc_82162490;
	// mulli r11,r4,276
	ctx.r11.s64 = ctx.r4.s64 * 276;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,9112
	ctx.r3.s64 = ctx.r11.s64 + 9112;
	// blr 
	return;
loc_82162490:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162498"))) PPC_WEAK_FUNC(sub_82162498);
PPC_FUNC_IMPL(__imp__sub_82162498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821624A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,32
	ctx.r31.s64 = 32;
loc_821624B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c0e8
	ctx.lr = 0x821624B8;
	sub_8216C0E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// bge 0x821624b0
	if (!ctx.cr0.lt) goto loc_821624B0;
	// addi r30,r29,9112
	ctx.r30.s64 = ctx.r29.s64 + 9112;
	// li r31,32
	ctx.r31.s64 = 32;
loc_821624CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c0e8
	ctx.lr = 0x821624D4;
	sub_8216C0E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// bge 0x821624cc
	if (!ctx.cr0.lt) goto loc_821624CC;
	// addi r30,r29,18220
	ctx.r30.s64 = ctx.r29.s64 + 18220;
	// li r31,32
	ctx.r31.s64 = 32;
loc_821624E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c0e8
	ctx.lr = 0x821624F0;
	sub_8216C0E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// bge 0x821624e8
	if (!ctx.cr0.lt) goto loc_821624E8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,27328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27328, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82162518"))) PPC_WEAK_FUNC(sub_82162518);
PPC_FUNC_IMPL(__imp__sub_82162518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162528"))) PPC_WEAK_FUNC(sub_82162528);
PPC_FUNC_IMPL(__imp__sub_82162528) {
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
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82194e30
	ctx.lr = 0x82162548;
	sub_82194E30(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216254C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82162564
	if (ctx.cr6.eq) goto loc_82162564;
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82183448
	ctx.lr = 0x82162560;
	sub_82183448(ctx, base);
	// b 0x8216256c
	goto loc_8216256C;
loc_82162564:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x821845a0
	ctx.lr = 0x8216256C;
	sub_821845A0(ctx, base);
loc_8216256C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162588
	if (ctx.cr6.eq) goto loc_82162588;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82168ed8
	ctx.lr = 0x82162580;
	sub_82168ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8216258c
	goto loc_8216258C;
loc_82162588:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8216258C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195098
	ctx.lr = 0x82162594;
	sub_82195098(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82162598;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821625b0
	if (ctx.cr6.eq) goto loc_821625B0;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x82183448
	ctx.lr = 0x821625AC;
	sub_82183448(ctx, base);
	// b 0x821625b8
	goto loc_821625B8;
loc_821625B0:
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x821845a0
	ctx.lr = 0x821625B8;
	sub_821845A0(ctx, base);
loc_821625B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821625d4
	if (ctx.cr6.eq) goto loc_821625D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82169e70
	ctx.lr = 0x821625CC;
	sub_82169E70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821625d8
	goto loc_821625D8;
loc_821625D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821625D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195098
	ctx.lr = 0x821625E0;
	sub_82195098(ctx, base);
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

__attribute__((alias("__imp__sub_821625F8"))) PPC_WEAK_FUNC(sub_821625F8);
PPC_FUNC_IMPL(__imp__sub_821625F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82162614:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82162648
	if (ctx.cr6.eq) goto loc_82162648;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162648
	if (ctx.cr6.eq) goto loc_82162648;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82162644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82162614
	goto loc_82162614;
loc_82162648:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82194f68
	ctx.lr = 0x82162650;
	sub_82194F68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162668"))) PPC_WEAK_FUNC(sub_82162668);
PPC_FUNC_IMPL(__imp__sub_82162668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82162684
	if (!ctx.cr6.lt) goto loc_82162684;
loc_82162678:
	// fsubs f13,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f1,f13,f0,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f2.f64));
	// blr 
	return;
loc_82162684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82162678
	if (ctx.cr6.gt) goto loc_82162678;
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f1,f0,f1,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821626A0"))) PPC_WEAK_FUNC(sub_821626A0);
PPC_FUNC_IMPL(__imp__sub_821626A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821626c4
	if (ctx.cr6.lt) goto loc_821626C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821626c4
	if (ctx.cr6.gt) goto loc_821626C4;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_821626C4:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f7,f11,f12,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f1,f7,f10,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821626F0"))) PPC_WEAK_FUNC(sub_821626F0);
PPC_FUNC_IMPL(__imp__sub_821626F0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216272c
	if (!ctx.cr6.eq) goto loc_8216272C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82162830
	goto loc_82162830;
loc_8216272C:
	// ld r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// ld r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// ld r8,288(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// lfs f31,-23592(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23592);
	ctx.f31.f64 = double(temp.f32);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// lfs f30,17340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17340);
	ctx.f30.f64 = double(temp.f32);
	// ld r4,296(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// addi r30,r9,-5052
	ctx.r30.s64 = ctx.r9.s64 + -5052;
	// ld r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 304);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 312);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// ld r8,320(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 320);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r7,328(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 328);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// lfs f29,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
loc_821627A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162814
	if (ctx.cr6.eq) goto loc_82162814;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162814
	if (ctx.cr6.eq) goto loc_82162814;
	// lbz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 572);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82162814
	if (!ctx.cr6.eq) goto loc_82162814;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f29,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x821627F8;
	sub_82187400(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82162808
	if (!ctx.cr6.lt) goto loc_82162808;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82162808:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82162814
	if (!ctx.cr6.gt) goto loc_82162814;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82162814:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821627a8
	if (ctx.cr6.lt) goto loc_821627A8;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82162830:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162854"))) PPC_WEAK_FUNC(sub_82162854);
PPC_FUNC_IMPL(__imp__sub_82162854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82162858"))) PPC_WEAK_FUNC(sub_82162858);
PPC_FUNC_IMPL(__imp__sub_82162858) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x8216287C;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-23600
	ctx.r10.s64 = ctx.r11.s64 + -23600;
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

__attribute__((alias("__imp__sub_821628A0"))) PPC_WEAK_FUNC(sub_821628A0);
PPC_FUNC_IMPL(__imp__sub_821628A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23600
	ctx.r10.s64 = ctx.r11.s64 + -23600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185a50
	ctx.lr = 0x821628CC;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821628e8
	if (ctx.cr6.eq) goto loc_821628E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821628E4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821628E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162900"))) PPC_WEAK_FUNC(sub_82162900);
PPC_FUNC_IMPL(__imp__sub_82162900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82162908;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,-1744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// bl 0x821626f0
	ctx.lr = 0x82162924;
	sub_821626F0(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f30,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f12,-23584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23584);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82162980
	if (!ctx.cr6.gt) goto loc_82162980;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x82162970
	if (!ctx.cr6.lt) goto loc_82162970;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82162980
	goto loc_82162980;
loc_82162970:
	// fmuls f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82162980
	if (ctx.cr6.gt) goto loc_82162980;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82162980:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216299c
	if (ctx.cr6.lt) goto loc_8216299C;
	// bne cr6,0x82162a6c
	if (!ctx.cr6.eq) goto loc_82162A6C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r30,r11,9888
	ctx.r30.s64 = ctx.r11.s64 + 9888;
	// b 0x821629a4
	goto loc_821629A4;
loc_8216299C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r30,r11,9832
	ctx.r30.s64 = ctx.r11.s64 + 9832;
loc_821629A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162a6c
	if (ctx.cr6.eq) goto loc_82162A6C;
	// lfs f3,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821629C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821629D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f3,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821629F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82162A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f3,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82162A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f3,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82162A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f3,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82162A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f3,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82162A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_82162A6C:
	// ld r9,592(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 592);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,600(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 600);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r6,r28,592
	ctx.r6.s64 = ctx.r28.s64 + 592;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f31,-23588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23588);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
loc_82162A98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162ad8
	if (ctx.cr6.eq) goto loc_82162AD8;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162ad8
	if (ctx.cr6.eq) goto loc_82162AD8;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x821871a0
	ctx.lr = 0x82162AC0;
	sub_821871A0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x82162acc
	if (!ctx.cr6.gt) goto loc_82162ACC;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_82162ACC:
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x82162ad8
	if (!ctx.cr6.lt) goto loc_82162AD8;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_82162AD8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82162a98
	if (ctx.cr6.lt) goto loc_82162A98;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f13,500(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,504(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82162b14
	if (ctx.cr6.eq) goto loc_82162B14;
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82162b1c
	goto loc_82162B1C;
loc_82162B14:
	// lfs f12,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
loc_82162B1C:
	// fsubs f11,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fadds f12,f8,f30
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82162b34
	if (!ctx.cr6.lt) goto loc_82162B34;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x82162b40
	goto loc_82162B40;
loc_82162B34:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82162b40
	if (!ctx.cr6.gt) goto loc_82162B40;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82162B40:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82162b50
	if (!ctx.cr6.lt) goto loc_82162B50;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82162b5c
	goto loc_82162B5C;
loc_82162B50:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82162b5c
	if (!ctx.cr6.gt) goto loc_82162B5C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82162B5C:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82162b6c
	if (!ctx.cr6.lt) goto loc_82162B6C;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// b 0x82162b78
	goto loc_82162B78;
loc_82162B6C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82162b78
	if (!ctx.cr6.gt) goto loc_82162B78;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_82162B78:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x82162b88
	if (!ctx.cr6.lt) goto loc_82162B88;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x82162b94
	goto loc_82162B94;
loc_82162B88:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82162b94
	if (!ctx.cr6.gt) goto loc_82162B94;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82162B94:
	// fsubs f8,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fdivs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fdivs f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// fdivs f9,f7,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fdivs f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 / ctx.f3.f64));
	// fsubs f7,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fsubs f6,f1,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f6,120(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,124(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// fsubs f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f7,128(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f4,132(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82162C00"))) PPC_WEAK_FUNC(sub_82162C00);
PPC_FUNC_IMPL(__imp__sub_82162C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82162C08;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bec8
	ctx.lr = 0x82162C14;
	sub_8215BEC8(ctx, base);
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r30,100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 100, ctx.xer);
	// bge cr6,0x82163258
	if (!ctx.cr6.lt) goto loc_82163258;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,-432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -432);
	// lwz r31,-1744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82162fe8
	if (!ctx.cr6.lt) goto loc_82162FE8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f0,10340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r4,3(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lbz r10,7(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// lbz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r4,11(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// lbz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// lbz r11,9(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// lbz r5,10(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r9,14(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 14);
	// lbz r7,15(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 15);
	// lbz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// lbz r10,13(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 13);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r5,17(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 17);
	// lbz r4,18(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 18);
	// lbz r3,19(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19);
	// lbz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r9,22(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 22);
	// lbz r7,23(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 23);
	// lbz r6,20(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// lbz r10,21(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 21);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r5,25(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 25);
	// lbz r4,26(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 26);
	// lbz r3,27(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 27);
	// lbz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28);
	// lbz r9,29(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r7,30(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 30);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lbz r5,31(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 31);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r4,35(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 35);
	// lbz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r10,33(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 33);
	// lbz r9,34(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 34);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r5,36(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// lbz r4,38(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 38);
	// lbz r7,39(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 39);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// lbz r3,37(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 37);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lbz r10,42(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 42);
	// lbz r9,40(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 40);
	// lbz r7,43(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 43);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lbz r5,41(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 41);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lbz r4,47(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 47);
	// lbz r3,45(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 45);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lbz r10,46(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 46);
	// lbz r9,44(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 44);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lbz r3,51(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 51);
	// lbz r5,48(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 48);
	// lbz r7,50(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 50);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// lbz r4,49(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 49);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r10,53(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 53);
	// lbz r9,54(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 54);
	// lbz r5,55(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 55);
	// lbz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lbz r4,57(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 57);
	// lbz r9,56(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 56);
	// lbz r10,59(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 59);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lbz r3,58(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 58);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,60(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lbz r7,62(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 62);
	// lbz r5,63(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 63);
	// lfs f7,-23572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23572);
	ctx.f7.f64 = double(temp.f32);
	// lbz r3,61(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 61);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 60);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lfs f6,-23576(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23576);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f5.f64 = double(temp.f32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f0,2148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lbz r6,67(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 67);
	// lbz r5,66(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 66);
	// lbz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 64);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lbz r4,65(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 65);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lbz r9,70(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 70);
	// lbz r10,69(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 69);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r3,71(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 71);
	// lbz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 68);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lbz r4,72(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 72);
	// lbz r5,74(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 74);
	// lbz r3,75(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 75);
	// lbz r6,73(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 73);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lbz r9,77(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 77);
	// lbz r7,79(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 79);
	// lbz r10,78(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 78);
	// lbz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 76);
	// stfs f2,88(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stfs f4,84(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stfs f9,108(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f6,120(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f5,124(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f2,80(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_82162FE8:
	// lwz r11,-432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -432);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82163070
	if (!ctx.cr6.lt) goto loc_82163070;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,172(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f10,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,176(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
loc_82163070:
	// lwz r11,-432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -432);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821630c8
	if (!ctx.cr6.lt) goto loc_821630C8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,196(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,200(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
loc_821630C8:
	// lwz r29,-432(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -432);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163118
	if (ctx.cr6.eq) goto loc_82163118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d0f90
	ctx.lr = 0x821630DC;
	sub_821D0F90(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82163118
	if (!ctx.cr6.lt) goto loc_82163118;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
loc_82163118:
	// lwz r11,-432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -432);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163258
	if (ctx.cr6.eq) goto loc_82163258;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82163258
	if (!ctx.cr6.lt) goto loc_82163258;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f0,-23584(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23584);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,388(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,392(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,396(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lwz r5,24(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,380(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,384(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,400(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,404(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
loc_82163258:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82163264"))) PPC_WEAK_FUNC(sub_82163264);
PPC_FUNC_IMPL(__imp__sub_82163264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163268"))) PPC_WEAK_FUNC(sub_82163268);
PPC_FUNC_IMPL(__imp__sub_82163268) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x82163288;
	sub_821A2A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821632b4
	if (ctx.cr6.eq) goto loc_821632B4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f0,644(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,640(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// stfs f12,180(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// bl 0x82162900
	ctx.lr = 0x821632B4;
	sub_82162900(ctx, base);
loc_821632B4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821632C8"))) PPC_WEAK_FUNC(sub_821632C8);
PPC_FUNC_IMPL(__imp__sub_821632C8) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821632E8"))) PPC_WEAK_FUNC(sub_821632E8);
PPC_FUNC_IMPL(__imp__sub_821632E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163318
	if (ctx.cr6.eq) goto loc_82163318;
	// bl 0x82195238
	ctx.lr = 0x82163314;
	sub_82195238(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82163318:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216332c
	if (ctx.cr6.eq) goto loc_8216332C;
	// bl 0x82195238
	ctx.lr = 0x82163328;
	sub_82195238(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8216332C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163340
	if (ctx.cr6.eq) goto loc_82163340;
	// bl 0x82195238
	ctx.lr = 0x8216333C;
	sub_82195238(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82163340:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163354
	if (ctx.cr6.eq) goto loc_82163354;
	// bl 0x82195238
	ctx.lr = 0x82163350;
	sub_82195238(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82163354:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163368
	if (ctx.cr6.eq) goto loc_82163368;
	// bl 0x82195238
	ctx.lr = 0x82163364;
	sub_82195238(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82163368:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216337c
	if (ctx.cr6.eq) goto loc_8216337C;
	// bl 0x82195238
	ctx.lr = 0x82163378;
	sub_82195238(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8216337C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163394"))) PPC_WEAK_FUNC(sub_82163394);
PPC_FUNC_IMPL(__imp__sub_82163394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163398"))) PPC_WEAK_FUNC(sub_82163398);
PPC_FUNC_IMPL(__imp__sub_82163398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821633A0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x821633B8;
	sub_8218AA18(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x821633BC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821633C8;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x8218a810
	ctx.lr = 0x821633DC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82163430
	if (ctx.cr6.eq) goto loc_82163430;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x821633F4;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163430
	if (ctx.cr6.eq) goto loc_82163430;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163414
	if (ctx.cr6.eq) goto loc_82163414;
	// bl 0x82195238
	ctx.lr = 0x82163410;
	sub_82195238(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82163414:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x8216342C;
	sub_82195360(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82163430:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8216343C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82163458
	if (ctx.cr6.eq) goto loc_82163458;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82163450;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216345c
	goto loc_8216345C;
loc_82163458:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8216345C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82163494
	if (ctx.cr6.eq) goto loc_82163494;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163478
	if (ctx.cr6.eq) goto loc_82163478;
	// bl 0x82195238
	ctx.lr = 0x82163474;
	sub_82195238(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82163478:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x82163490;
	sub_82195360(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82163494:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821634A0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821634bc
	if (ctx.cr6.eq) goto loc_821634BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x821634B4;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821634c0
	goto loc_821634C0;
loc_821634BC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821634C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821634f8
	if (ctx.cr6.eq) goto loc_821634F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821634dc
	if (ctx.cr6.eq) goto loc_821634DC;
	// bl 0x82195238
	ctx.lr = 0x821634D8;
	sub_82195238(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_821634DC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x821634F4;
	sub_82195360(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_821634F8:
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82163504;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82163520
	if (ctx.cr6.eq) goto loc_82163520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82163518;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82163524
	goto loc_82163524;
loc_82163520:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82163524:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216355c
	if (ctx.cr6.eq) goto loc_8216355C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163540
	if (ctx.cr6.eq) goto loc_82163540;
	// bl 0x82195238
	ctx.lr = 0x8216353C;
	sub_82195238(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82163540:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x82163558;
	sub_82195360(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8216355C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82163568;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82163584
	if (ctx.cr6.eq) goto loc_82163584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x8216357C;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82163588
	goto loc_82163588;
loc_82163584:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82163588:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821635c0
	if (ctx.cr6.eq) goto loc_821635C0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821635a4
	if (ctx.cr6.eq) goto loc_821635A4;
	// bl 0x82195238
	ctx.lr = 0x821635A0;
	sub_82195238(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_821635A4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x821635BC;
	sub_82195360(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_821635C0:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821635CC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821635e8
	if (ctx.cr6.eq) goto loc_821635E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x821635E0;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821635ec
	goto loc_821635EC;
loc_821635E8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821635EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82163624
	if (ctx.cr6.eq) goto loc_82163624;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163608
	if (ctx.cr6.eq) goto loc_82163608;
	// bl 0x82195238
	ctx.lr = 0x82163604;
	sub_82195238(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82163608:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x82163620;
	sub_82195360(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_82163624:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216362C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82163634;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216363C"))) PPC_WEAK_FUNC(sub_8216363C);
PPC_FUNC_IMPL(__imp__sub_8216363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163640"))) PPC_WEAK_FUNC(sub_82163640);
PPC_FUNC_IMPL(__imp__sub_82163640) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163650"))) PPC_WEAK_FUNC(sub_82163650);
PPC_FUNC_IMPL(__imp__sub_82163650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216366C"))) PPC_WEAK_FUNC(sub_8216366C);
PPC_FUNC_IMPL(__imp__sub_8216366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163670"))) PPC_WEAK_FUNC(sub_82163670);
PPC_FUNC_IMPL(__imp__sub_82163670) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821636a4
	if (ctx.cr6.eq) goto loc_821636A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821636A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821636A4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821636c4
	if (ctx.cr6.eq) goto loc_821636C4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821636C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821636C4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821636D8"))) PPC_WEAK_FUNC(sub_821636D8);
PPC_FUNC_IMPL(__imp__sub_821636D8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216370c
	if (!ctx.cr6.eq) goto loc_8216370C;
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
loc_8216370C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82163670
	ctx.lr = 0x82163714;
	sub_82163670(ctx, base);
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

__attribute__((alias("__imp__sub_82163728"))) PPC_WEAK_FUNC(sub_82163728);
PPC_FUNC_IMPL(__imp__sub_82163728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82163740
	if (!ctx.cr6.eq) goto loc_82163740;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82163740:
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82163754
	if (!ctx.cr6.eq) goto loc_82163754;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82163754:
	// b 0x82176dc0
	sub_82176DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163758"))) PPC_WEAK_FUNC(sub_82163758);
PPC_FUNC_IMPL(__imp__sub_82163758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-23568
	ctx.r10.s64 = ctx.r11.s64 + -23568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8216379c
	if (ctx.cr6.eq) goto loc_8216379C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216379C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216379C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821637b8
	if (ctx.cr6.eq) goto loc_821637B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821637B8;
	sub_82183E40(ctx, base);
loc_821637B8:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8218b5e0
	ctx.lr = 0x821637C8;
	sub_8218B5E0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821637e8
	if (ctx.cr6.eq) goto loc_821637E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821637E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821637E8:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x821637F4;
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

__attribute__((alias("__imp__sub_8216380C"))) PPC_WEAK_FUNC(sub_8216380C);
PPC_FUNC_IMPL(__imp__sub_8216380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163810"))) PPC_WEAK_FUNC(sub_82163810);
PPC_FUNC_IMPL(__imp__sub_82163810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82163850
	if (!ctx.cr6.eq) goto loc_82163850;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163850
	if (ctx.cr6.eq) goto loc_82163850;
	// bl 0x82176dc0
	ctx.lr = 0x82163848;
	sub_82176DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163878
	if (ctx.cr6.eq) goto loc_82163878;
loc_82163850:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82163868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 568, ctx.r30.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
loc_82163878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163890"))) PPC_WEAK_FUNC(sub_82163890);
PPC_FUNC_IMPL(__imp__sub_82163890) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,-424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// bl 0x82163810
	ctx.lr = 0x821638AC;
	sub_82163810(ctx, base);
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

__attribute__((alias("__imp__sub_821638C0"))) PPC_WEAK_FUNC(sub_821638C0);
PPC_FUNC_IMPL(__imp__sub_821638C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821638d8
	if (!ctx.cr6.eq) goto loc_821638D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821638D8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821638EC"))) PPC_WEAK_FUNC(sub_821638EC);
PPC_FUNC_IMPL(__imp__sub_821638EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821638F0"))) PPC_WEAK_FUNC(sub_821638F0);
PPC_FUNC_IMPL(__imp__sub_821638F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821638F8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821855f0
	ctx.lr = 0x82163904;
	sub_821855F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-23568
	ctx.r9.s64 = ctx.r10.s64 + -23568;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8215c0b0
	ctx.lr = 0x8216393C;
	sub_8215C0B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82163944;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82163950;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82163954;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216396c
	if (ctx.cr6.eq) goto loc_8216396C;
	// li r3,576
	ctx.r3.s64 = 576;
	// bl 0x82183448
	ctx.lr = 0x82163968;
	sub_82183448(ctx, base);
	// b 0x82163974
	goto loc_82163974;
loc_8216396C:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x821845a0
	ctx.lr = 0x82163974;
	sub_821845A0(ctx, base);
loc_82163974:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163984
	if (ctx.cr6.eq) goto loc_82163984;
	// bl 0x82176fa0
	ctx.lr = 0x82163980;
	sub_82176FA0(ctx, base);
	// b 0x82163988
	goto loc_82163988;
loc_82163984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82163988:
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r28,-472(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -472);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821639b0
	if (ctx.cr6.eq) goto loc_821639B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215f140
	ctx.lr = 0x821639A4;
	sub_8215F140(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x821639B0;
	sub_82183E40(ctx, base);
loc_821639B0:
	// stw r30,-472(r29)
	PPC_STORE_U32(ctx.r29.u32 + -472, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x821837d0
	ctx.lr = 0x821639CC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821639D8"))) PPC_WEAK_FUNC(sub_821639D8);
PPC_FUNC_IMPL(__imp__sub_821639D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82163758
	ctx.lr = 0x821639F8;
	sub_82163758(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163a14
	if (ctx.cr6.eq) goto loc_82163A14;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82163A10;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82163A14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163A2C"))) PPC_WEAK_FUNC(sub_82163A2C);
PPC_FUNC_IMPL(__imp__sub_82163A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163A30"))) PPC_WEAK_FUNC(sub_82163A30);
PPC_FUNC_IMPL(__imp__sub_82163A30) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// bl 0x82163810
	ctx.lr = 0x82163A4C;
	sub_82163810(ctx, base);
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

__attribute__((alias("__imp__sub_82163A60"))) PPC_WEAK_FUNC(sub_82163A60);
PPC_FUNC_IMPL(__imp__sub_82163A60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163A74"))) PPC_WEAK_FUNC(sub_82163A74);
PPC_FUNC_IMPL(__imp__sub_82163A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163A78"))) PPC_WEAK_FUNC(sub_82163A78);
PPC_FUNC_IMPL(__imp__sub_82163A78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163A90"))) PPC_WEAK_FUNC(sub_82163A90);
PPC_FUNC_IMPL(__imp__sub_82163A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82163A98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,11
	ctx.r30.s64 = 11;
loc_82163AA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82101280
	ctx.lr = 0x82163AB0;
	sub_82101280(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// bge 0x82163aa8
	if (!ctx.cr0.lt) goto loc_82163AA8;
	// addi r29,r31,432
	ctx.r29.s64 = ctx.r31.s64 + 432;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82163AC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821012b0
	ctx.lr = 0x82163ACC;
	sub_821012B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// bge 0x82163ac4
	if (!ctx.cr0.lt) goto loc_82163AC4;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r31,-32
	ctx.r10.s64 = ctx.r31.s64 + -32;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82163AF4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,36(r10)
	ea = 36 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82163af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82163AF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 437, ctx.r30.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r11,517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 517, ctx.r11.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r10,597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 597, ctx.r10.u8);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r9,677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 677, ctx.r9.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r8,757(r31)
	PPC_STORE_U8(ctx.r31.u32 + 757, ctx.r8.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r7,837(r31)
	PPC_STORE_U8(ctx.r31.u32 + 837, ctx.r7.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r6,917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 917, ctx.r6.u8);
	// stb r5,997(r31)
	PPC_STORE_U8(ctx.r31.u32 + 997, ctx.r5.u8);
	// stb r4,1077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1077, ctx.r4.u8);
	// bl 0x82183850
	ctx.lr = 0x82163B4C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82163b64
	if (ctx.cr6.eq) goto loc_82163B64;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82183448
	ctx.lr = 0x82163B60;
	sub_82183448(ctx, base);
	// b 0x82163b6c
	goto loc_82163B6C;
loc_82163B64:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x82163B6C;
	sub_821845A0(ctx, base);
loc_82163B6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163b84
	if (ctx.cr6.eq) goto loc_82163B84;
	// bl 0x820dfe08
	ctx.lr = 0x82163B78;
	sub_820DFE08(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8464, ctx.r3.u32);
	// b 0x82163b90
	goto loc_82163B90;
loc_82163B84:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-8464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8464, ctx.r30.u32);
loc_82163B90:
	// bl 0x82183850
	ctx.lr = 0x82163B94;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82163bac
	if (ctx.cr6.eq) goto loc_82163BAC;
	// li r3,2124
	ctx.r3.s64 = 2124;
	// bl 0x82183448
	ctx.lr = 0x82163BA8;
	sub_82183448(ctx, base);
	// b 0x82163bb4
	goto loc_82163BB4;
loc_82163BAC:
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x821845a0
	ctx.lr = 0x82163BB4;
	sub_821845A0(ctx, base);
loc_82163BB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163bd8
	if (ctx.cr6.eq) goto loc_82163BD8;
	// bl 0x820c0668
	ctx.lr = 0x82163BC0;
	sub_820C0668(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,-8540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8540, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82163BD8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,-8540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8540, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82163BF0"))) PPC_WEAK_FUNC(sub_82163BF0);
PPC_FUNC_IMPL(__imp__sub_82163BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82163BF8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,-8540(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8540);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82163c24
	if (ctx.cr6.eq) goto loc_82163C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c3298
	ctx.lr = 0x82163C18;
	sub_820C3298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82163C24;
	sub_82183E40(ctx, base);
loc_82163C24:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8540, ctx.r11.u32);
	// lwz r31,-8464(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8464);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163c50
	if (ctx.cr6.eq) goto loc_82163C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dfe80
	ctx.lr = 0x82163C44;
	sub_820DFE80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82163C50;
	sub_82183E40(ctx, base);
loc_82163C50:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,1152
	ctx.r31.s64 = ctx.r29.s64 + 1152;
	// stw r11,-8464(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8464, ctx.r11.u32);
	// li r30,8
	ctx.r30.s64 = 8;
loc_82163C60:
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82163C6C;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82163c60
	if (!ctx.cr0.lt) goto loc_82163C60;
	// addi r31,r29,432
	ctx.r31.s64 = ctx.r29.s64 + 432;
	// li r30,11
	ctx.r30.s64 = 11;
loc_82163C7C:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82163C88;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82163c7c
	if (!ctx.cr0.lt) goto loc_82163C7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82163C98"))) PPC_WEAK_FUNC(sub_82163C98);
PPC_FUNC_IMPL(__imp__sub_82163C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82248a40
	ctx.lr = 0x82163CBC;
	sub_82248A40(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x82248a40
	ctx.lr = 0x82163CCC;
	sub_82248A40(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1552
	ctx.r4.s64 = ctx.r31.s64 + 1552;
	// addi r3,r30,568
	ctx.r3.s64 = ctx.r30.s64 + 568;
	// bl 0x821847a8
	ctx.lr = 0x82163CDC;
	sub_821847A8(ctx, base);
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r4,r31,1553
	ctx.r4.s64 = ctx.r31.s64 + 1553;
	// addi r3,r30,569
	ctx.r3.s64 = ctx.r30.s64 + 569;
	// bl 0x821847a8
	ctx.lr = 0x82163CEC;
	sub_821847A8(ctx, base);
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stw r11,636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 636, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163D0C"))) PPC_WEAK_FUNC(sub_82163D0C);
PPC_FUNC_IMPL(__imp__sub_82163D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163D10"))) PPC_WEAK_FUNC(sub_82163D10);
PPC_FUNC_IMPL(__imp__sub_82163D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82163D3C;
	sub_82248A40(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x82248a40
	ctx.lr = 0x82163D4C;
	sub_82248A40(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// addi r3,r30,1552
	ctx.r3.s64 = ctx.r30.s64 + 1552;
	// bl 0x821847a8
	ctx.lr = 0x82163D5C;
	sub_821847A8(ctx, base);
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r4,r31,569
	ctx.r4.s64 = ctx.r31.s64 + 569;
	// addi r3,r30,1553
	ctx.r3.s64 = ctx.r30.s64 + 1553;
	// bl 0x821847a8
	ctx.lr = 0x82163D6C;
	sub_821847A8(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// stw r11,1620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1620, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163D8C"))) PPC_WEAK_FUNC(sub_82163D8C);
PPC_FUNC_IMPL(__imp__sub_82163D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163D90"))) PPC_WEAK_FUNC(sub_82163D90);
PPC_FUNC_IMPL(__imp__sub_82163D90) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82163da0
	if (ctx.cr6.lt) goto loc_82163DA0;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// blt cr6,0x82163dac
	if (ctx.cr6.lt) goto loc_82163DAC;
loc_82163DA0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82163DAC:
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163DC4"))) PPC_WEAK_FUNC(sub_82163DC4);
PPC_FUNC_IMPL(__imp__sub_82163DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163DC8"))) PPC_WEAK_FUNC(sub_82163DC8);
PPC_FUNC_IMPL(__imp__sub_82163DC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,175
	ctx.r3.s64 = 175;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163DD0"))) PPC_WEAK_FUNC(sub_82163DD0);
PPC_FUNC_IMPL(__imp__sub_82163DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163DE0"))) PPC_WEAK_FUNC(sub_82163DE0);
PPC_FUNC_IMPL(__imp__sub_82163DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163DEC"))) PPC_WEAK_FUNC(sub_82163DEC);
PPC_FUNC_IMPL(__imp__sub_82163DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163DF0"))) PPC_WEAK_FUNC(sub_82163DF0);
PPC_FUNC_IMPL(__imp__sub_82163DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163E00"))) PPC_WEAK_FUNC(sub_82163E00);
PPC_FUNC_IMPL(__imp__sub_82163E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,420
	ctx.r10.s64 = ctx.r3.s64 * 420;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// li r5,420
	ctx.r5.s64 = 420;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163E18"))) PPC_WEAK_FUNC(sub_82163E18);
PPC_FUNC_IMPL(__imp__sub_82163E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163E34"))) PPC_WEAK_FUNC(sub_82163E34);
PPC_FUNC_IMPL(__imp__sub_82163E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163E38"))) PPC_WEAK_FUNC(sub_82163E38);
PPC_FUNC_IMPL(__imp__sub_82163E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163E54"))) PPC_WEAK_FUNC(sub_82163E54);
PPC_FUNC_IMPL(__imp__sub_82163E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163E58"))) PPC_WEAK_FUNC(sub_82163E58);
PPC_FUNC_IMPL(__imp__sub_82163E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163E70"))) PPC_WEAK_FUNC(sub_82163E70);
PPC_FUNC_IMPL(__imp__sub_82163E70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,752
	ctx.r5.s64 = 752;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163E94"))) PPC_WEAK_FUNC(sub_82163E94);
PPC_FUNC_IMPL(__imp__sub_82163E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163E98"))) PPC_WEAK_FUNC(sub_82163E98);
PPC_FUNC_IMPL(__imp__sub_82163E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r3,433
	ctx.r10.s64 = ctx.r3.s64 + 433;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163EB0"))) PPC_WEAK_FUNC(sub_82163EB0);
PPC_FUNC_IMPL(__imp__sub_82163EB0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82163ec0
	if (!ctx.cr6.eq) goto loc_82163EC0;
	// blr 
	return;
loc_82163EC0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -380);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163ED4"))) PPC_WEAK_FUNC(sub_82163ED4);
PPC_FUNC_IMPL(__imp__sub_82163ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163ED8"))) PPC_WEAK_FUNC(sub_82163ED8);
PPC_FUNC_IMPL(__imp__sub_82163ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163EE4"))) PPC_WEAK_FUNC(sub_82163EE4);
PPC_FUNC_IMPL(__imp__sub_82163EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163EE8"))) PPC_WEAK_FUNC(sub_82163EE8);
PPC_FUNC_IMPL(__imp__sub_82163EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r3,r11,6976
	ctx.r3.s64 = ctx.r11.s64 + 6976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163EF4"))) PPC_WEAK_FUNC(sub_82163EF4);
PPC_FUNC_IMPL(__imp__sub_82163EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163EF8"))) PPC_WEAK_FUNC(sub_82163EF8);
PPC_FUNC_IMPL(__imp__sub_82163EF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163F00"))) PPC_WEAK_FUNC(sub_82163F00);
PPC_FUNC_IMPL(__imp__sub_82163F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163F0C"))) PPC_WEAK_FUNC(sub_82163F0C);
PPC_FUNC_IMPL(__imp__sub_82163F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163F10"))) PPC_WEAK_FUNC(sub_82163F10);
PPC_FUNC_IMPL(__imp__sub_82163F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r5,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163F1C"))) PPC_WEAK_FUNC(sub_82163F1C);
PPC_FUNC_IMPL(__imp__sub_82163F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163F20"))) PPC_WEAK_FUNC(sub_82163F20);
PPC_FUNC_IMPL(__imp__sub_82163F20) {
	PPC_FUNC_PROLOGUE();
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163FF4"))) PPC_WEAK_FUNC(sub_82163FF4);
PPC_FUNC_IMPL(__imp__sub_82163FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82163FF8"))) PPC_WEAK_FUNC(sub_82163FF8);
PPC_FUNC_IMPL(__imp__sub_82163FF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1000
	ctx.r11.s64 = 1000;
	// addi r10,r3,14
	ctx.r10.s64 = ctx.r3.s64 + 14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_8216400C:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r11,4(r10)
	// bdnz 0x8216400c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216400C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216401C"))) PPC_WEAK_FUNC(sub_8216401C);
PPC_FUNC_IMPL(__imp__sub_8216401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164020"))) PPC_WEAK_FUNC(sub_82164020);
PPC_FUNC_IMPL(__imp__sub_82164020) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_82164028:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82164040
	if (!ctx.cr6.eq) goto loc_82164040;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82164058
	if (ctx.cr6.eq) goto loc_82164058;
loc_82164040:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// blt cr6,0x82164028
	if (ctx.cr6.lt) goto loc_82164028;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82164058:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164060"))) PPC_WEAK_FUNC(sub_82164060);
PPC_FUNC_IMPL(__imp__sub_82164060) {
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
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216407C;
	sub_822AA648(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,638
	ctx.r11.s64 = ctx.r31.s64 + 638;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82164094:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// sthu r9,10(r11)
	// bdnz 0x82164094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164094;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821640C0"))) PPC_WEAK_FUNC(sub_821640C0);
PPC_FUNC_IMPL(__imp__sub_821640C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// blt cr6,0x821640d4
	if (ctx.cr6.lt) goto loc_821640D4;
loc_821640CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821640D4:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x821640fc
	if (ctx.cr6.lt) goto loc_821640FC;
	// bne cr6,0x8216412c
	if (!ctx.cr6.eq) goto loc_8216412C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_821640FC:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x821640cc
	if (!ctx.cr6.lt) goto loc_821640CC;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_8216412C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164134"))) PPC_WEAK_FUNC(sub_82164134);
PPC_FUNC_IMPL(__imp__sub_82164134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164138"))) PPC_WEAK_FUNC(sub_82164138);
PPC_FUNC_IMPL(__imp__sub_82164138) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x8216419c
	if (!ctx.cr6.lt) goto loc_8216419C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82164164
	if (ctx.cr6.lt) goto loc_82164164;
	// bne cr6,0x8216419c
	if (!ctx.cr6.eq) goto loc_8216419C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// b 0x82164194
	goto loc_82164194;
loc_82164164:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x8216419c
	if (!ctx.cr6.lt) goto loc_8216419C;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_82164194:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821641a4
	if (!ctx.cr6.eq) goto loc_821641A4;
loc_8216419C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821641A4:
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821641AC"))) PPC_WEAK_FUNC(sub_821641AC);
PPC_FUNC_IMPL(__imp__sub_821641AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821641B0"))) PPC_WEAK_FUNC(sub_821641B0);
PPC_FUNC_IMPL(__imp__sub_821641B0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x82164228
	if (!ctx.cr6.lt) goto loc_82164228;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x821641f0
	if (ctx.cr6.lt) goto loc_821641F0;
	// bne cr6,0x82164228
	if (!ctx.cr6.eq) goto loc_82164228;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// b 0x82164220
	goto loc_82164220;
loc_821641F0:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x82164228
	if (!ctx.cr6.lt) goto loc_82164228;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_82164220:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164240
	if (!ctx.cr6.eq) goto loc_82164240;
loc_82164228:
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
loc_82164240:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x82164258;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164228
	if (ctx.cr6.eq) goto loc_82164228;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820c7648
	ctx.lr = 0x82164268;
	sub_820C7648(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216427C"))) PPC_WEAK_FUNC(sub_8216427C);
PPC_FUNC_IMPL(__imp__sub_8216427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164280"))) PPC_WEAK_FUNC(sub_82164280);
PPC_FUNC_IMPL(__imp__sub_82164280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82164288;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r3,650
	ctx.r29.s64 = ctx.r3.s64 + 650;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// bge cr6,0x821642e8
	if (!ctx.cr6.lt) goto loc_821642E8;
loc_821642B0:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x821642c4
	if (ctx.cr6.lt) goto loc_821642C4;
	// bne cr6,0x821642e8
	if (!ctx.cr6.eq) goto loc_821642E8;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// b 0x821642e0
	goto loc_821642E0;
loc_821642C4:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x821642e8
	if (!ctx.cr6.lt) goto loc_821642E8;
	// lwz r10,-388(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -388);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
loc_821642E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821642f0
	if (!ctx.cr6.eq) goto loc_821642F0;
loc_821642E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216432c
	goto loc_8216432C;
loc_821642F0:
	// lwz r11,-8540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8540);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x82164308;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216432c
	if (ctx.cr6.eq) goto loc_8216432C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x82164324
	if (!ctx.cr6.gt) goto loc_82164324;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82164324:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x820c7648
	ctx.lr = 0x8216432C;
	sub_820C7648(ctx, base);
loc_8216432C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x821642b0
	if (ctx.cr6.lt) goto loc_821642B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8216434C"))) PPC_WEAK_FUNC(sub_8216434C);
PPC_FUNC_IMPL(__imp__sub_8216434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164350"))) PPC_WEAK_FUNC(sub_82164350);
PPC_FUNC_IMPL(__imp__sub_82164350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x821643d0
	if (!ctx.cr6.lt) goto loc_821643D0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82164398
	if (ctx.cr6.lt) goto loc_82164398;
	// bne cr6,0x821643d0
	if (!ctx.cr6.eq) goto loc_821643D0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// b 0x821643c8
	goto loc_821643C8;
loc_82164398:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x821643d0
	if (!ctx.cr6.lt) goto loc_821643D0;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_821643C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821643d8
	if (!ctx.cr6.eq) goto loc_821643D8;
loc_821643D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82164404
	goto loc_82164404;
loc_821643D8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x821643F0;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821643d0
	if (ctx.cr6.eq) goto loc_821643D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820c7740
	ctx.lr = 0x82164404;
	sub_820C7740(ctx, base);
loc_82164404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216441C"))) PPC_WEAK_FUNC(sub_8216441C);
PPC_FUNC_IMPL(__imp__sub_8216441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164420"))) PPC_WEAK_FUNC(sub_82164420);
PPC_FUNC_IMPL(__imp__sub_82164420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82164428;
	sub_82248780(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lhz r6,744(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82164450;
	sub_820C7A58(ctx, base);
	// stb r3,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r3.u8);
	// lhz r6,714(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 714);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r11,-8540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8540);
	// addi r30,r11,1696
	ctx.r30.s64 = ctx.r11.s64 + 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,2100
	ctx.r29.s64 = ctx.r11.s64 + 2100;
	// bl 0x820c79c8
	ctx.lr = 0x82164474;
	sub_820C79C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,34(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// bl 0x820d75b8
	ctx.lr = 0x82164484;
	sub_820D75B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,8
	ctx.r7.s64 = 8;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r6,10
	ctx.r6.s64 = 10;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// li r5,12
	ctx.r5.s64 = 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// li r4,14
	ctx.r4.s64 = 14;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r4,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r4.u16);
	// li r7,22
	ctx.r7.s64 = 22;
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r6,24
	ctx.r6.s64 = 24;
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// li r5,26
	ctx.r5.s64 = 26;
	// sth r7,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// sth r6,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r6.u16);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// sth r5,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r5.u16);
loc_821644F4:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// addi r28,r10,210
	ctx.r28.s64 = ctx.r10.s64 + 210;
	// lhzu r7,12(r11)
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lhzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// addi r27,r9,210
	ctx.r27.s64 = ctx.r9.s64 + 210;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r26,r10,210
	ctx.r26.s64 = ctx.r10.s64 + 210;
	// rlwinm r4,r27,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u16);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r5,r28,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r3.u32);
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,210
	ctx.r6.s64 = ctx.r8.s64 + 210;
	// sthx r5,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u16);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r27,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r3.u32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r4.u16);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,210
	ctx.r5.s64 = ctx.r9.s64 + 210;
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r8,r10,210
	ctx.r8.s64 = ctx.r10.s64 + 210;
	// sthx r9,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u16);
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u16);
	// lhzx r10,r5,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// sthx r10,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u16);
	// bdnz 0x821644f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821644F4;
	// li r5,6
	ctx.r5.s64 = 6;
	// lhz r6,704(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 704);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c79c8
	ctx.lr = 0x821645B4;
	sub_820C79C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,34(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// bl 0x820d75b8
	ctx.lr = 0x821645C4;
	sub_820D75B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,7
	ctx.r7.s64 = 7;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r6,9
	ctx.r6.s64 = 9;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// li r5,11
	ctx.r5.s64 = 11;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// li r4,13
	ctx.r4.s64 = 13;
	// li r9,17
	ctx.r9.s64 = 17;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// li r8,19
	ctx.r8.s64 = 19;
	// sth r4,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r4.u16);
	// li r7,21
	ctx.r7.s64 = 21;
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r6,23
	ctx.r6.s64 = 23;
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// li r5,25
	ctx.r5.s64 = 25;
	// sth r7,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// sth r6,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r6.u16);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// sth r5,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r5.u16);
loc_82164634:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// addi r30,r10,210
	ctx.r30.s64 = ctx.r10.s64 + 210;
	// lhzu r7,12(r11)
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r9,210
	ctx.r29.s64 = ctx.r9.s64 + 210;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r10,210
	ctx.r30.s64 = ctx.r10.s64 + 210;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r28,r8,210
	ctx.r28.s64 = ctx.r8.s64 + 210;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r9,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u16);
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// sthx r5,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r8,r10,210
	ctx.r8.s64 = ctx.r10.s64 + 210;
	// sthx r4,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u16);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,210
	ctx.r6.s64 = ctx.r9.s64 + 210;
	// lhzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u16);
	// lhzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sthx r8,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x82164634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164634;
	// lhz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 528);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82084690
	ctx.lr = 0x821646F8;
	sub_82084690(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lhz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820849a0
	ctx.lr = 0x82164708;
	sub_820849A0(ctx, base);
	// sth r3,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r3.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x820849a0
	ctx.lr = 0x82164718;
	sub_820849A0(ctx, base);
	// sth r3,532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 532, ctx.r3.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x820849a0
	ctx.lr = 0x82164728;
	sub_820849A0(ctx, base);
	// sth r3,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r3.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82164734"))) PPC_WEAK_FUNC(sub_82164734);
PPC_FUNC_IMPL(__imp__sub_82164734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164738"))) PPC_WEAK_FUNC(sub_82164738);
PPC_FUNC_IMPL(__imp__sub_82164738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// lwz r8,-388(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -388);
	// bge cr6,0x821647a8
	if (!ctx.cr6.lt) goto loc_821647A8;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82164778
	if (ctx.cr6.lt) goto loc_82164778;
	// bne cr6,0x821647a8
	if (!ctx.cr6.eq) goto loc_821647A8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// b 0x821647a8
	goto loc_821647A8;
loc_82164778:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x8216479c
	if (ctx.cr6.lt) goto loc_8216479C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821647a8
	goto loc_821647A8;
loc_8216479C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_821647A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// blt cr6,0x821647bc
	if (ctx.cr6.lt) goto loc_821647BC;
loc_821647B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164808
	goto loc_82164808;
loc_821647BC:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x821647e0
	if (ctx.cr6.lt) goto loc_821647E0;
	// bne cr6,0x82164808
	if (!ctx.cr6.eq) goto loc_82164808;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,642
	ctx.r10.s64 = ctx.r10.s64 + 642;
	// b 0x82164808
	goto loc_82164808;
loc_821647E0:
	// addi r10,r5,64
	ctx.r10.s64 = ctx.r5.s64 + 64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// bge cr6,0x821647b4
	if (!ctx.cr6.lt) goto loc_821647B4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
loc_82164808:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r7,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r6,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216482C"))) PPC_WEAK_FUNC(sub_8216482C);
PPC_FUNC_IMPL(__imp__sub_8216482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164830"))) PPC_WEAK_FUNC(sub_82164830);
PPC_FUNC_IMPL(__imp__sub_82164830) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r7,r3,650
	ctx.r7.s64 = ctx.r3.s64 + 650;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
loc_82164844:
	// lwz r9,-388(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -388);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// blt cr6,0x8216485c
	if (ctx.cr6.lt) goto loc_8216485C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164894
	goto loc_82164894;
loc_8216485C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82164870
	if (ctx.cr6.lt) goto loc_82164870;
	// bne cr6,0x82164890
	if (!ctx.cr6.eq) goto loc_82164890;
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// b 0x82164890
	goto loc_82164890;
loc_82164870:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x82164884
	if (ctx.cr6.lt) goto loc_82164884;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164894
	goto loc_82164894;
loc_82164884:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_82164890:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82164894:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// bge cr6,0x821648d4
	if (!ctx.cr6.lt) goto loc_821648D4;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x821648b4
	if (ctx.cr6.lt) goto loc_821648B4;
	// bne cr6,0x821648d4
	if (!ctx.cr6.eq) goto loc_821648D4;
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// b 0x821648d4
	goto loc_821648D4;
loc_821648B4:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x821648c8
	if (ctx.cr6.lt) goto loc_821648C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821648d4
	goto loc_821648D4;
loc_821648C8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_821648D4:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// lhz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// sth r3,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// blt cr6,0x82164844
	if (ctx.cr6.lt) goto loc_82164844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164908"))) PPC_WEAK_FUNC(sub_82164908);
PPC_FUNC_IMPL(__imp__sub_82164908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82164910;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-388(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82164950
	if (!ctx.cr6.eq) goto loc_82164950;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r3,r9,-368
	ctx.r3.s64 = ctx.r9.s64 + -368;
	// addi r11,r11,-416
	ctx.r11.s64 = ctx.r11.s64 + -416;
	// addi r10,r10,26048
	ctx.r10.s64 = ctx.r10.s64 + 26048;
	// stw r3,-388(r27)
	PPC_STORE_U32(ctx.r27.u32 + -388, ctx.r3.u32);
	// stw r11,-384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -384, ctx.r11.u32);
	// stw r10,-376(r28)
	PPC_STORE_U32(ctx.r28.u32 + -376, ctx.r10.u32);
loc_82164950:
	// li r4,26416
	ctx.r4.s64 = 26416;
	// bl 0x822aa648
	ctx.lr = 0x82164958;
	sub_822AA648(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,-384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -384);
	// bl 0x822aa648
	ctx.lr = 0x82164964;
	sub_822AA648(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,-376(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -376);
	// ori r4,r4,46464
	ctx.r4.u64 = ctx.r4.u64 | 46464;
	// bl 0x822aa648
	ctx.lr = 0x82164974;
	sub_822AA648(ctx, base);
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821649b0
	if (!ctx.cr6.eq) goto loc_821649B0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82080000
	ctx.lr = 0x82164990;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821649a8
	if (ctx.cr6.eq) goto loc_821649A8;
	// lwz r11,-384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -384);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,-380(r29)
	PPC_STORE_U32(ctx.r29.u32 + -380, ctx.r3.u32);
	// b 0x821649b0
	goto loc_821649B0;
loc_821649A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,-380(r29)
	PPC_STORE_U32(ctx.r29.u32 + -380, ctx.r31.u32);
loc_821649B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-376(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -376);
	// li r8,12075
	ctx.r8.s64 = 12075;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_821649C0:
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821649CC:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r31,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r31.u16);
	// sth r31,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// bdnz 0x821649cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821649CC;
	// addi r8,r8,11
	ctx.r8.s64 = ctx.r8.s64 + 11;
	// cmplwi cr6,r8,14000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14000, ctx.xer);
	// blt cr6,0x821649c0
	if (ctx.cr6.lt) goto loc_821649C0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82164A00:
	// lwz r10,-388(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -388);
	// li r9,11
	ctx.r9.s64 = 11;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,9232
	ctx.r10.s64 = ctx.r10.s64 + 9232;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82164A18:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r31,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r31.u16);
	// sthu r31,10(r10)
	// bdnz 0x82164a18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164A18;
	// addi r8,r8,752
	ctx.r8.s64 = ctx.r8.s64 + 752;
	// cmplwi cr6,r8,5264
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5264, ctx.xer);
	// blt cr6,0x82164a00
	if (ctx.cr6.lt) goto loc_82164A00;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82164A44"))) PPC_WEAK_FUNC(sub_82164A44);
PPC_FUNC_IMPL(__imp__sub_82164A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164A48"))) PPC_WEAK_FUNC(sub_82164A48);
PPC_FUNC_IMPL(__imp__sub_82164A48) {
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
	// bl 0x82230c00
	ctx.lr = 0x82164A60;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82164aa4
	if (ctx.cr6.eq) goto loc_82164AA4;
	// bl 0x8209eda0
	ctx.lr = 0x82164A70;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r10,8592
	ctx.xer.ca = ctx.r10.u32 > 4294958703;
	ctx.r11.s64 = ctx.r10.s64 + 8592;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// bne 0x82164ac0
	if (!ctx.cr0.eq) goto loc_82164AC0;
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
loc_82164AA4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// bl 0x82230df8
	ctx.lr = 0x82164AB0;
	sub_82230DF8(ctx, base);
	// mulli r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 * 132;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,7964
	ctx.r3.s64 = ctx.r3.s64 + 7964;
loc_82164AC0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82164AD4"))) PPC_WEAK_FUNC(sub_82164AD4);
PPC_FUNC_IMPL(__imp__sub_82164AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164AD8"))) PPC_WEAK_FUNC(sub_82164AD8);
PPC_FUNC_IMPL(__imp__sub_82164AD8) {
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
	// bl 0x82230c00
	ctx.lr = 0x82164AF0;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82164b28
	if (ctx.cr6.eq) goto loc_82164B28;
	// bl 0x8209eda0
	ctx.lr = 0x82164B00;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82164B28:
	// bl 0x82230df8
	ctx.lr = 0x82164B2C;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82164b58
	if (ctx.cr6.eq) goto loc_82164B58;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,420
	ctx.r10.s64 = ctx.r3.s64 * 420;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82164B58:
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

__attribute__((alias("__imp__sub_82164B70"))) PPC_WEAK_FUNC(sub_82164B70);
PPC_FUNC_IMPL(__imp__sub_82164B70) {
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
	// bl 0x82230c00
	ctx.lr = 0x82164B88;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82164bcc
	if (!ctx.cr6.eq) goto loc_82164BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230df8
	ctx.lr = 0x82164B98;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82164bcc
	if (ctx.cr6.eq) goto loc_82164BCC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,31064
	ctx.r3.s64 = ctx.r3.s64 + 31064;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82164BCC:
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

__attribute__((alias("__imp__sub_82164BE4"))) PPC_WEAK_FUNC(sub_82164BE4);
PPC_FUNC_IMPL(__imp__sub_82164BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164BE8"))) PPC_WEAK_FUNC(sub_82164BE8);
PPC_FUNC_IMPL(__imp__sub_82164BE8) {
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
	// bl 0x82230c00
	ctx.lr = 0x82164C00;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82164c38
	if (ctx.cr6.eq) goto loc_82164C38;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// beq cr6,0x82164c38
	if (ctx.cr6.eq) goto loc_82164C38;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r31,752
	ctx.r10.s64 = ctx.r31.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,9232
	ctx.r3.s64 = ctx.r11.s64 + 9232;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82164C38:
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

__attribute__((alias("__imp__sub_82164C50"))) PPC_WEAK_FUNC(sub_82164C50);
PPC_FUNC_IMPL(__imp__sub_82164C50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,8592
	ctx.r10.s64 = ctx.r10.s64 + 8592;
loc_82164C68:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164c80
	if (ctx.cr6.eq) goto loc_82164C80;
	// lbz r11,30(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82164c84
	if (!ctx.cr6.eq) goto loc_82164C84;
loc_82164C80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82164C84:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,752
	ctx.r10.s64 = ctx.r10.s64 + 752;
	// bdnz 0x82164c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164C68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164C94"))) PPC_WEAK_FUNC(sub_82164C94);
PPC_FUNC_IMPL(__imp__sub_82164C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164C98"))) PPC_WEAK_FUNC(sub_82164C98);
PPC_FUNC_IMPL(__imp__sub_82164C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mulli r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 * 752;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r10,8592
	ctx.xer.ca = ctx.r10.u32 > 4294958703;
	ctx.r11.s64 = ctx.r10.s64 + 8592;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82164cc0
	if (ctx.cr0.eq) goto loc_82164CC0;
	// lbz r11,30(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82164CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164CC8"))) PPC_WEAK_FUNC(sub_82164CC8);
PPC_FUNC_IMPL(__imp__sub_82164CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r8,r3,433
	ctx.r8.s64 = ctx.r3.s64 + 433;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// ld r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r5,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r5.u64);
	// ld r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r4,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164D00"))) PPC_WEAK_FUNC(sub_82164D00);
PPC_FUNC_IMPL(__imp__sub_82164D00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82164D08:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164d20
	if (!ctx.cr6.eq) goto loc_82164D20;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82164D20:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r3,1000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1000, ctx.xer);
	// blt cr6,0x82164d08
	if (ctx.cr6.lt) goto loc_82164D08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164D38"))) PPC_WEAK_FUNC(sub_82164D38);
PPC_FUNC_IMPL(__imp__sub_82164D38) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82164D40:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164d58
	if (!ctx.cr6.eq) goto loc_82164D58;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82164d6c
	if (ctx.cr6.eq) goto loc_82164D6C;
loc_82164D58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// blt cr6,0x82164d40
	if (ctx.cr6.lt) goto loc_82164D40;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82164D6C:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164D7C"))) PPC_WEAK_FUNC(sub_82164D7C);
PPC_FUNC_IMPL(__imp__sub_82164D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164D80"))) PPC_WEAK_FUNC(sub_82164D80);
PPC_FUNC_IMPL(__imp__sub_82164D80) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164D90"))) PPC_WEAK_FUNC(sub_82164D90);
PPC_FUNC_IMPL(__imp__sub_82164D90) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,96
	ctx.r11.s64 = ctx.r10.s64 + 96;
loc_82164D9C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x82164dcc
	if (ctx.cr6.eq) goto loc_82164DCC;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x82164dcc
	if (ctx.cr6.eq) goto loc_82164DCC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r3,1000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1000, ctx.xer);
	// blt cr6,0x82164d9c
	if (ctx.cr6.lt) goto loc_82164D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82164DCC:
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lhz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lhz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164DFC"))) PPC_WEAK_FUNC(sub_82164DFC);
PPC_FUNC_IMPL(__imp__sub_82164DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164E00"))) PPC_WEAK_FUNC(sub_82164E00);
PPC_FUNC_IMPL(__imp__sub_82164E00) {
	PPC_FUNC_PROLOGUE();
	// li r10,200
	ctx.r10.s64 = 200;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,106
	ctx.r11.s64 = ctx.r11.s64 + 106;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82164E14:
	// lhz r9,-10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -10);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e30
	if (ctx.cr6.eq) goto loc_82164E30;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e30
	if (ctx.cr6.eq) goto loc_82164E30;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164E30:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e4c
	if (ctx.cr6.eq) goto loc_82164E4C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e4c
	if (ctx.cr6.eq) goto loc_82164E4C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164E4C:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e68
	if (ctx.cr6.eq) goto loc_82164E68;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e68
	if (ctx.cr6.eq) goto loc_82164E68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164E68:
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e84
	if (ctx.cr6.eq) goto loc_82164E84;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164e84
	if (ctx.cr6.eq) goto loc_82164E84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164E84:
	// lhz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164ea0
	if (ctx.cr6.eq) goto loc_82164EA0;
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82164ea0
	if (ctx.cr6.eq) goto loc_82164EA0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164EA0:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bdnz 0x82164e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164E14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164EAC"))) PPC_WEAK_FUNC(sub_82164EAC);
PPC_FUNC_IMPL(__imp__sub_82164EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164EB0"))) PPC_WEAK_FUNC(sub_82164EB0);
PPC_FUNC_IMPL(__imp__sub_82164EB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,200
	ctx.r11.s64 = 200;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,106
	ctx.r9.s64 = ctx.r10.s64 + 106;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82164EC4:
	// lhz r10,-10(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + -10);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82164ef0
	if (ctx.cr6.eq) goto loc_82164EF0;
	// lhz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + -8);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82164ef0
	if (ctx.cr6.eq) goto loc_82164EF0;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164ef0
	if (!ctx.cr6.eq) goto loc_82164EF0;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82164ef0
	if (!ctx.cr6.eq) goto loc_82164EF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164EF0:
	// lhz r10,-2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82164f1c
	if (ctx.cr6.eq) goto loc_82164F1C;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82164f1c
	if (ctx.cr6.eq) goto loc_82164F1C;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164f1c
	if (!ctx.cr6.eq) goto loc_82164F1C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82164f1c
	if (!ctx.cr6.eq) goto loc_82164F1C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164F1C:
	// lhz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82164f48
	if (ctx.cr6.eq) goto loc_82164F48;
	// lhz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82164f48
	if (ctx.cr6.eq) goto loc_82164F48;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164f48
	if (!ctx.cr6.eq) goto loc_82164F48;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82164f48
	if (!ctx.cr6.eq) goto loc_82164F48;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164F48:
	// lhz r10,14(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82164f74
	if (ctx.cr6.eq) goto loc_82164F74;
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82164f74
	if (ctx.cr6.eq) goto loc_82164F74;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164f74
	if (!ctx.cr6.eq) goto loc_82164F74;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82164f74
	if (!ctx.cr6.eq) goto loc_82164F74;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164F74:
	// lhz r10,22(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 22);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82164fa0
	if (ctx.cr6.eq) goto loc_82164FA0;
	// lhz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82164fa0
	if (ctx.cr6.eq) goto loc_82164FA0;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82164fa0
	if (!ctx.cr6.eq) goto loc_82164FA0;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82164fa0
	if (!ctx.cr6.eq) goto loc_82164FA0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82164FA0:
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bdnz 0x82164ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164EC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164FAC"))) PPC_WEAK_FUNC(sub_82164FAC);
PPC_FUNC_IMPL(__imp__sub_82164FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82164FB0"))) PPC_WEAK_FUNC(sub_82164FB0);
PPC_FUNC_IMPL(__imp__sub_82164FB0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// blt cr6,0x82164fdc
	if (ctx.cr6.lt) goto loc_82164FDC;
loc_82164FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821650dc
	goto loc_821650DC;
loc_82164FDC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8540(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82164fd4
	if (ctx.cr6.eq) goto loc_82164FD4;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f31,10376(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x820c0760
	ctx.lr = 0x8216500C;
	sub_820C0760(ctx, base);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8216509c
	if (ctx.cr6.gt) goto loc_8216509C;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20532
	ctx.r12.s64 = ctx.r12.s64 + 20532;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,20580(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20580);
	// lwz r16,20604(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20604);
	// lwz r16,20572(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20572);
	// lwz r16,20588(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20588);
	// lwz r16,20588(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20588);
	// lwz r16,20596(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20596);
	// lwz r16,20596(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20596);
	// lwz r16,20612(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20612);
	// lwz r16,20620(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20620);
	// lwz r16,20628(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20628);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82165098
	goto loc_82165098;
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
loc_82165098:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_8216509C:
	// li r7,19
	ctx.r7.s64 = 19;
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1696
	ctx.r3.s64 = ctx.r30.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x821650B0;
	sub_820C7A58(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r10,100
	ctx.r10.s64 = 100;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r3,r9,r10
	ctx.r3.u32 = ctx.r9.u32 / ctx.r10.u32;
loc_821650DC:
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

__attribute__((alias("__imp__sub_821650F8"))) PPC_WEAK_FUNC(sub_821650F8);
PPC_FUNC_IMPL(__imp__sub_821650F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8096
	ctx.r11.s64 = ctx.r3.s64 + 8096;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82165100:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82165100
	if (ctx.cr6.lt) goto loc_82165100;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165124"))) PPC_WEAK_FUNC(sub_82165124);
PPC_FUNC_IMPL(__imp__sub_82165124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165128"))) PPC_WEAK_FUNC(sub_82165128);
PPC_FUNC_IMPL(__imp__sub_82165128) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2024
	ctx.r11.s64 = ctx.r4.s64 + 2024;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165138"))) PPC_WEAK_FUNC(sub_82165138);
PPC_FUNC_IMPL(__imp__sub_82165138) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,8096
	ctx.r9.s64 = ctx.r3.s64 + 8096;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82165148:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82165160
	if (ctx.cr6.eq) goto loc_82165160;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8216519c
	if (ctx.cr6.eq) goto loc_8216519C;
loc_82165160:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82165148
	if (ctx.cr6.lt) goto loc_82165148;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82165178:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x821651bc
	if (ctx.cr6.eq) goto loc_821651BC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82165178
	if (ctx.cr6.lt) goto loc_82165178;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8216519C:
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,9999
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9999, ctx.xer);
	// ble cr6,0x821651b4
	if (!ctx.cr6.gt) goto loc_821651B4;
	// li r10,9999
	ctx.r10.s64 = 9999;
loc_821651B4:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// blr 
	return;
loc_821651BC:
	// addi r11,r3,2024
	ctx.r11.s64 = ctx.r3.s64 + 2024;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthx r10,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821651DC"))) PPC_WEAK_FUNC(sub_821651DC);
PPC_FUNC_IMPL(__imp__sub_821651DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821651E0"))) PPC_WEAK_FUNC(sub_821651E0);
PPC_FUNC_IMPL(__imp__sub_821651E0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,8116
	ctx.r11.s64 = ctx.r11.s64 + 8116;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821651FC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82165214
	if (!ctx.cr6.eq) goto loc_82165214;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82165244
	if (ctx.cr6.eq) goto loc_82165244;
loc_82165214:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// blt cr6,0x821651fc
	if (ctx.cr6.lt) goto loc_821651FC;
loc_82165224:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8222dfa8
	ctx.lr = 0x8216522C;
	sub_8222DFA8(ctx, base);
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
loc_82165244:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82165224
	if (ctx.cr6.eq) goto loc_82165224;
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

__attribute__((alias("__imp__sub_82165260"))) PPC_WEAK_FUNC(sub_82165260);
PPC_FUNC_IMPL(__imp__sub_82165260) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8116
	ctx.r11.s64 = ctx.r3.s64 + 8116;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216526C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8216529c
	if (ctx.cr6.eq) goto loc_8216529C;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8216529c
	if (ctx.cr6.eq) goto loc_8216529C;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8216529c
	if (!ctx.cr6.eq) goto loc_8216529C;
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821652dc
	if (ctx.cr6.eq) goto loc_821652DC;
loc_8216529C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r3,100
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 100, ctx.xer);
	// blt cr6,0x8216526c
	if (ctx.cr6.lt) goto loc_8216526C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821652B0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821652e0
	if (ctx.cr6.eq) goto loc_821652E0;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821652e0
	if (ctx.cr6.eq) goto loc_821652E0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,100
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 100, ctx.xer);
	// blt cr6,0x821652b0
	if (ctx.cr6.lt) goto loc_821652B0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821652DC:
	// blr 
	return;
loc_821652E0:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821652F4"))) PPC_WEAK_FUNC(sub_821652F4);
PPC_FUNC_IMPL(__imp__sub_821652F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821652F8"))) PPC_WEAK_FUNC(sub_821652F8);
PPC_FUNC_IMPL(__imp__sub_821652F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82164a48
	sub_82164A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821652FC"))) PPC_WEAK_FUNC(sub_821652FC);
PPC_FUNC_IMPL(__imp__sub_821652FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165300"))) PPC_WEAK_FUNC(sub_82165300);
PPC_FUNC_IMPL(__imp__sub_82165300) {
	PPC_FUNC_PROLOGUE();
	// b 0x82164ad8
	sub_82164AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82165304"))) PPC_WEAK_FUNC(sub_82165304);
PPC_FUNC_IMPL(__imp__sub_82165304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165308"))) PPC_WEAK_FUNC(sub_82165308);
PPC_FUNC_IMPL(__imp__sub_82165308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,6976
	ctx.r11.s64 = ctx.r11.s64 + 6976;
	// addi r3,r11,3348
	ctx.r3.s64 = ctx.r11.s64 + 3348;
	// b 0x82233630
	sub_82233630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216531C"))) PPC_WEAK_FUNC(sub_8216531C);
PPC_FUNC_IMPL(__imp__sub_8216531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165320"))) PPC_WEAK_FUNC(sub_82165320);
PPC_FUNC_IMPL(__imp__sub_82165320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165334"))) PPC_WEAK_FUNC(sub_82165334);
PPC_FUNC_IMPL(__imp__sub_82165334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165338"))) PPC_WEAK_FUNC(sub_82165338);
PPC_FUNC_IMPL(__imp__sub_82165338) {
	PPC_FUNC_PROLOGUE();
	// li r11,1000
	ctx.r11.s64 = 1000;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r7,-6
	ctx.r10.s64 = ctx.r7.s64 + -6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82165354:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// sthu r9,8(r10)
	// bdnz 0x82165354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165354;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// addi r10,r7,-6
	ctx.r10.s64 = ctx.r7.s64 + -6;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82165374:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// sthu r9,8(r10)
	// bdnz 0x82165374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165374;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216538C"))) PPC_WEAK_FUNC(sub_8216538C);
PPC_FUNC_IMPL(__imp__sub_8216538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165390"))) PPC_WEAK_FUNC(sub_82165390);
PPC_FUNC_IMPL(__imp__sub_82165390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821653B0"))) PPC_WEAK_FUNC(sub_821653B0);
PPC_FUNC_IMPL(__imp__sub_821653B0) {
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
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// bl 0x82163f20
	ctx.lr = 0x82165498;
	sub_82163F20(ctx, base);
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

__attribute__((alias("__imp__sub_821654B0"))) PPC_WEAK_FUNC(sub_821654B0);
PPC_FUNC_IMPL(__imp__sub_821654B0) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x82165338
	ctx.lr = 0x821654CC;
	sub_82165338(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r10,8098(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8098, ctx.r10.u16);
	// li r7,100
	ctx.r7.s64 = 100;
	// sth r10,8102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8102, ctx.r10.u16);
	// addi r9,r31,8096
	ctx.r9.s64 = ctx.r31.s64 + 8096;
	// sth r10,8106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8106, ctx.r10.u16);
	// addi r6,r31,8116
	ctx.r6.s64 = ctx.r31.s64 + 8116;
	// sth r10,8110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8110, ctx.r10.u16);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// sth r10,8114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8114, ctx.r10.u16);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// sth r11,8096(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8096, ctx.r11.u16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// sth r11,8100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8100, ctx.r11.u16);
	// sth r11,8104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8104, ctx.r11.u16);
	// sth r11,8108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8108, ctx.r11.u16);
	// sth r11,8112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8112, ctx.r11.u16);
	// sth r11,8096(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8096, ctx.r11.u16);
	// sth r10,8098(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8098, ctx.r10.u16);
	// sth r11,8100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8100, ctx.r11.u16);
	// sth r10,8102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8102, ctx.r10.u16);
	// sth r11,8104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8104, ctx.r11.u16);
	// sth r10,8106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8106, ctx.r10.u16);
	// sth r11,8108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8108, ctx.r11.u16);
	// sth r10,8110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8110, ctx.r10.u16);
	// sth r11,8112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8112, ctx.r11.u16);
	// sth r10,8114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8114, ctx.r10.u16);
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
loc_8216554C:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r11,4(r10)
	// bdnz 0x8216554c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216554C;
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82165564:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r11,4(r10)
	// bdnz 0x82165564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165564;
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

__attribute__((alias("__imp__sub_82165588"))) PPC_WEAK_FUNC(sub_82165588);
PPC_FUNC_IMPL(__imp__sub_82165588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82165590;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,6
	ctx.r30.s64 = 6;
loc_821655A0:
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x8214a400
	ctx.lr = 0x821655A8;
	sub_8214A400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164060
	ctx.lr = 0x821655B0;
	sub_82164060(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,752
	ctx.r31.s64 = ctx.r31.s64 + 752;
	// bge 0x821655a0
	if (!ctx.cr0.lt) goto loc_821655A0;
	// addi r3,r29,5264
	ctx.r3.s64 = ctx.r29.s64 + 5264;
	// bl 0x821653b0
	ctx.lr = 0x821655C4;
	sub_821653B0(ctx, base);
	// addi r30,r29,5584
	ctx.r30.s64 = ctx.r29.s64 + 5584;
	// li r31,6
	ctx.r31.s64 = 6;
loc_821655CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239fb8
	ctx.lr = 0x821655D4;
	sub_82239FB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1748
	ctx.r30.s64 = ctx.r30.s64 + 1748;
	// bge 0x821655cc
	if (!ctx.cr0.lt) goto loc_821655CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821655EC"))) PPC_WEAK_FUNC(sub_821655EC);
PPC_FUNC_IMPL(__imp__sub_821655EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821655F0"))) PPC_WEAK_FUNC(sub_821655F0);
PPC_FUNC_IMPL(__imp__sub_821655F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821655F8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,174
	ctx.r28.s64 = 174;
	// addi r30,r30,31064
	ctx.r30.s64 = ctx.r30.s64 + 31064;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_82165618:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,21392
	ctx.r6.s64 = ctx.r11.s64 + 21392;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82080d28
	ctx.lr = 0x82165630;
	sub_82080D28(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8216563C:
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// sth r29,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r29.u16);
	// sthu r29,8(r11)
	// bdnz 0x8216563c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216563C;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bge 0x82165618
	if (!ctx.cr0.lt) goto loc_82165618;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82165668"))) PPC_WEAK_FUNC(sub_82165668);
PPC_FUNC_IMPL(__imp__sub_82165668) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82165680:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82165698
	if (!ctx.cr6.eq) goto loc_82165698;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82165700
	if (ctx.cr6.eq) goto loc_82165700;
loc_82165698:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821656ac
	if (!ctx.cr6.eq) goto loc_821656AC;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821656cc
	if (ctx.cr6.eq) goto loc_821656CC;
loc_821656AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,1000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1000, ctx.xer);
	// blt cr6,0x82165680
	if (ctx.cr6.lt) goto loc_82165680;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821656CC:
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// lwz r11,-388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -388);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82164d90
	ctx.lr = 0x82165700;
	sub_82164D90(ctx, base);
loc_82165700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165710"))) PPC_WEAK_FUNC(sub_82165710);
PPC_FUNC_IMPL(__imp__sub_82165710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82165740
	if (ctx.cr6.lt) goto loc_82165740;
	// bne cr6,0x82165770
	if (!ctx.cr6.eq) goto loc_82165770;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,642
	ctx.r11.s64 = ctx.r11.s64 + 642;
	// b 0x82165770
	goto loc_82165770;
loc_82165740:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
loc_82165770:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,100
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 100, ctx.xer);
	// li r10,100
	ctx.r10.s64 = 100;
	// bgt cr6,0x82165788
	if (ctx.cr6.gt) goto loc_82165788;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82165788:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// b 0x82164738
	sub_82164738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82165790"))) PPC_WEAK_FUNC(sub_82165790);
PPC_FUNC_IMPL(__imp__sub_82165790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165794"))) PPC_WEAK_FUNC(sub_82165794);
PPC_FUNC_IMPL(__imp__sub_82165794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165798"))) PPC_WEAK_FUNC(sub_82165798);
PPC_FUNC_IMPL(__imp__sub_82165798) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x82164738
	sub_82164738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821657CC"))) PPC_WEAK_FUNC(sub_821657CC);
PPC_FUNC_IMPL(__imp__sub_821657CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821657D0"))) PPC_WEAK_FUNC(sub_821657D0);
PPC_FUNC_IMPL(__imp__sub_821657D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821657D8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,2052
	ctx.r3.s64 = ctx.r11.s64 + 2052;
	// bl 0x820d78b0
	ctx.lr = 0x821657F8;
	sub_820D78B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165894
	if (ctx.cr6.eq) goto loc_82165894;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216588c
	if (ctx.cr6.eq) goto loc_8216588C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
loc_82165824:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-388(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -388);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// bl 0x82164d90
	ctx.lr = 0x8216584C;
	sub_82164D90(ctx, base);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82165880
	if (ctx.cr6.lt) goto loc_82165880;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x82165880
	if (!ctx.cr6.lt) goto loc_82165880;
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r28
	PPC_STORE_U16(ctx.r7.u32 + ctx.r28.u32, ctx.r9.u16);
	// bl 0x82164738
	ctx.lr = 0x82165880;
	sub_82164738(ctx, base);
loc_82165880:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// bne 0x82165824
	if (!ctx.cr0.eq) goto loc_82165824;
loc_8216588C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164420
	ctx.lr = 0x82165894;
	sub_82164420(ctx, base);
loc_82165894:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8216589C"))) PPC_WEAK_FUNC(sub_8216589C);
PPC_FUNC_IMPL(__imp__sub_8216589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821658A0"))) PPC_WEAK_FUNC(sub_821658A0);
PPC_FUNC_IMPL(__imp__sub_821658A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821658A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,650
	ctx.r30.s64 = ctx.r3.s64 + 650;
	// lwz r11,-388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	// addi r28,r11,28
	ctx.r28.s64 = ctx.r11.s64 + 28;
loc_821658C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821658d4
	if (ctx.cr6.lt) goto loc_821658D4;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x821658e0
	if (ctx.cr6.lt) goto loc_821658E0;
loc_821658D4:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x821658e4
	goto loc_821658E4;
loc_821658E0:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_821658E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164fb0
	ctx.lr = 0x821658EC;
	sub_82164FB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r30,r30,10
	ctx.r30.s64 = ctx.r30.s64 + 10;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x821658c4
	if (ctx.cr6.lt) goto loc_821658C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216590C"))) PPC_WEAK_FUNC(sub_8216590C);
PPC_FUNC_IMPL(__imp__sub_8216590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165910"))) PPC_WEAK_FUNC(sub_82165910);
PPC_FUNC_IMPL(__imp__sub_82165910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r6,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// lbz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r7,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r7.u8);
	// lbz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// lbz r5,9(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// lhz r7,14(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r7,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r7.u16);
	// lbz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r6,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r5,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r5.u8);
	// lbz r9,18(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r9,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r9.u8);
	// lbz r8,19(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r8,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r8.u8);
	// lbz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r7,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r7.u8);
	// lbz r6,21(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r6,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r6.u8);
	// lbz r5,22(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// stb r5,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r5.u8);
	// lbz r9,23(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 23);
	// stb r9,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r9.u8);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r5,36(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
loc_82165A08:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82165a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165A08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165A18"))) PPC_WEAK_FUNC(sub_82165A18);
PPC_FUNC_IMPL(__imp__sub_82165A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82165A20;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1000, ctx.xer);
	// blt cr6,0x82165a3c
	if (ctx.cr6.lt) goto loc_82165A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82165A3C:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// sth r26,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r26.u16);
	// sth r24,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r24.u16);
	// sth r24,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r24.u16);
	// bge cr6,0x82165b34
	if (!ctx.cr6.lt) goto loc_82165B34;
	// addi r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 + 11;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82165A80:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r27,r29,-1
	ctx.r27.s64 = ctx.r29.s64 + -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82165b24
	if (ctx.cr6.eq) goto loc_82165B24;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82165b24
	if (ctx.cr6.eq) goto loc_82165B24;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82165AA8:
	// lwz r11,-388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -388);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// blt cr6,0x82165ac8
	if (ctx.cr6.lt) goto loc_82165AC8;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// blt cr6,0x82165ad0
	if (ctx.cr6.lt) goto loc_82165AD0;
loc_82165AC8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82165ae4
	goto loc_82165AE4;
loc_82165AD0:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
loc_82165AE4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82165b18
	if (!ctx.cr6.eq) goto loc_82165B18;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82165b18
	if (ctx.cr6.lt) goto loc_82165B18;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x82165b18
	if (!ctx.cr6.lt) goto loc_82165B18;
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r27.u16);
	// bl 0x82164738
	ctx.lr = 0x82165B18;
	sub_82164738(ctx, base);
loc_82165B18:
	// addi r30,r30,752
	ctx.r30.s64 = ctx.r30.s64 + 752;
	// cmplwi cr6,r30,5264
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5264, ctx.xer);
	// blt cr6,0x82165aa8
	if (ctx.cr6.lt) goto loc_82165AA8;
loc_82165B24:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x82165a80
	if (ctx.cr6.lt) goto loc_82165A80;
loc_82165B34:
	// sth r26,8088(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8088, ctx.r26.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r26,8090(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8090, ctx.r26.u16);
	// sth r24,8092(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8092, ctx.r24.u16);
	// sth r24,8094(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8094, ctx.r24.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82165B50"))) PPC_WEAK_FUNC(sub_82165B50);
PPC_FUNC_IMPL(__imp__sub_82165B50) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8096
	ctx.r11.s64 = ctx.r3.s64 + 8096;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82165B58:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82165b78
	if (ctx.cr6.eq) goto loc_82165B78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x82165b58
	if (ctx.cr6.lt) goto loc_82165B58;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82165B78:
	// addi r11,r10,2024
	ctx.r11.s64 = ctx.r10.s64 + 2024;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165B88"))) PPC_WEAK_FUNC(sub_82165B88);
PPC_FUNC_IMPL(__imp__sub_82165B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82165B90;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r18,-8540(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82165d24
	if (ctx.cr6.eq) goto loc_82165D24;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lis r21,-32182
	ctx.r21.s64 = -2109079552;
	// ori r24,r11,31064
	ctx.r24.u64 = ctx.r11.u64 | 31064;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
loc_82165BC0:
	// lwz r11,-376(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -376);
	// li r10,11
	ctx.r10.s64 = 11;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82165BD8:
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r25,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r25.u16);
	// sthu r25,8(r11)
	// bdnz 0x82165bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165BD8;
	// addi r8,r8,88
	ctx.r8.s64 = ctx.r8.s64 + 88;
	// cmplwi cr6,r8,15400
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 15400, ctx.xer);
	// blt cr6,0x82165bc0
	if (ctx.cr6.lt) goto loc_82165BC0;
	// addi r20,r18,2052
	ctx.r20.s64 = ctx.r18.s64 + 2052;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x820d7858
	ctx.lr = 0x82165C0C;
	sub_820D7858(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165d24
	if (ctx.cr6.eq) goto loc_82165D24;
loc_82165C1C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x820d7870
	ctx.lr = 0x82165C30;
	sub_820D7870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165d18
	if (ctx.cr6.eq) goto loc_82165D18;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r23,r11
	ctx.r23.s64 = ctx.r11.s16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82230c00
	ctx.lr = 0x82165C4C;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82165d18
	if (!ctx.cr6.eq) goto loc_82165D18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82230df8
	ctx.lr = 0x82165C5C;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82165c78
	if (ctx.cr6.eq) goto loc_82165C78;
	// lwz r11,-376(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -376);
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82165c7c
	goto loc_82165C7C;
loc_82165C78:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82165C7C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82165d18
	if (ctx.cr6.eq) goto loc_82165D18;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165d18
	if (ctx.cr6.eq) goto loc_82165D18;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82165C98:
	// cmplwi cr6,r30,748
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 748, ctx.xer);
	// bge cr6,0x82165d18
	if (!ctx.cr6.lt) goto loc_82165D18;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r25,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r25.u16);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// bne cr6,0x82165d04
	if (!ctx.cr6.eq) goto loc_82165D04;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82164ad8
	ctx.lr = 0x82165CDC;
	sub_82164AD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165d04
	if (ctx.cr6.eq) goto loc_82165D04;
	// li r7,21
	ctx.r7.s64 = 21;
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r18,1696
	ctx.r3.s64 = ctx.r18.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82165D00;
	sub_820C7A58(ctx, base);
	// stb r3,402(r29)
	PPC_STORE_U8(ctx.r29.u32 + 402, ctx.r3.u8);
loc_82165D04:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82165c98
	if (ctx.cr6.lt) goto loc_82165C98;
loc_82165D18:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r19
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82165c1c
	if (ctx.cr6.lt) goto loc_82165C1C;
loc_82165D24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82165D2C"))) PPC_WEAK_FUNC(sub_82165D2C);
PPC_FUNC_IMPL(__imp__sub_82165D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165D30"))) PPC_WEAK_FUNC(sub_82165D30);
PPC_FUNC_IMPL(__imp__sub_82165D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82165D38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,650
	ctx.r30.s64 = ctx.r3.s64 + 650;
	// lwz r11,-388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -388);
	// addi r28,r11,28
	ctx.r28.s64 = ctx.r11.s64 + 28;
loc_82165D54:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82165d64
	if (ctx.cr6.lt) goto loc_82165D64;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82165d70
	if (ctx.cr6.lt) goto loc_82165D70;
loc_82165D64:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x82165d74
	goto loc_82165D74;
loc_82165D70:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_82165D74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82165a18
	ctx.lr = 0x82165D7C;
	sub_82165A18(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,10
	ctx.r30.s64 = ctx.r30.s64 + 10;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x82165d54
	if (ctx.cr6.lt) goto loc_82165D54;
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82165de0
	if (!ctx.cr6.eq) goto loc_82165DE0;
	// lwz r10,-388(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -388);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8592
	ctx.r10.s64 = ctx.r10.s64 + 8592;
loc_82165DAC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82165dc8
	if (ctx.cr6.eq) goto loc_82165DC8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165dc8
	if (ctx.cr6.eq) goto loc_82165DC8;
	// lbz r8,30(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82165ddc
	if (!ctx.cr6.eq) goto loc_82165DDC;
loc_82165DC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,752
	ctx.r10.s64 = ctx.r10.s64 + 752;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x82165dac
	if (ctx.cr6.lt) goto loc_82165DAC;
	// b 0x82165de0
	goto loc_82165DE0;
loc_82165DDC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82165DE0:
	// bl 0x8215bd08
	ctx.lr = 0x82165DE4;
	sub_8215BD08(ctx, base);
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82165e3c
	if (!ctx.cr6.eq) goto loc_82165E3C;
	// lwz r11,-388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -388);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
loc_82165E04:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82165e20
	if (ctx.cr6.eq) goto loc_82165E20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165e20
	if (ctx.cr6.eq) goto loc_82165E20;
	// lbz r9,30(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82165e34
	if (!ctx.cr6.eq) goto loc_82165E34;
loc_82165E20:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,752
	ctx.r11.s64 = ctx.r11.s64 + 752;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x82165e04
	if (ctx.cr6.lt) goto loc_82165E04;
	// b 0x82165e3c
	goto loc_82165E3C;
loc_82165E34:
	// bl 0x8215bd08
	ctx.lr = 0x82165E38;
	sub_8215BD08(ctx, base);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
loc_82165E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x82165E44;
	sub_8215BD28(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230de8
	ctx.lr = 0x82165E4C;
	sub_82230DE8(ctx, base);
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82165e7c
	if (!ctx.cr6.eq) goto loc_82165E7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231530
	ctx.lr = 0x82165E6C;
	sub_82231530(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x82165E78;
	sub_8215BD28(ctx, base);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_82165E7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82164060
	ctx.lr = 0x82165E84;
	sub_82164060(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82165E8C"))) PPC_WEAK_FUNC(sub_82165E8C);
PPC_FUNC_IMPL(__imp__sub_82165E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165E90"))) PPC_WEAK_FUNC(sub_82165E90);
PPC_FUNC_IMPL(__imp__sub_82165E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82248a40
	ctx.lr = 0x82165EB4;
	sub_82248A40(ctx, base);
	// addi r4,r30,420
	ctx.r4.s64 = ctx.r30.s64 + 420;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x82248a40
	ctx.lr = 0x82165EC4;
	sub_82248A40(ctx, base);
	// addi r4,r30,552
	ctx.r4.s64 = ctx.r30.s64 + 552;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x8214a650
	ctx.lr = 0x82165ED0;
	sub_8214A650(ctx, base);
	// li r10,67
	ctx.r10.s64 = 67;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1553
	ctx.r9.s64 = ctx.r30.s64 + 1553;
	// addi r8,r31,1553
	ctx.r8.s64 = ctx.r31.s64 + 1553;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,1552(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1552);
	// stb r10,1552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1552, ctx.r10.u8);
loc_82165EEC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82165eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165EEC;
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165F20"))) PPC_WEAK_FUNC(sub_82165F20);
PPC_FUNC_IMPL(__imp__sub_82165F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82165F28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82165F44:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82165f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165F44;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// bl 0x82165910
	ctx.lr = 0x82165F5C;
	sub_82165910(ctx, base);
	// addi r31,r28,120
	ctx.r31.s64 = ctx.r28.s64 + 120;
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82165F74;
	sub_82248A40(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x82248a40
	ctx.lr = 0x82165F84;
	sub_82248A40(ctx, base);
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// bl 0x8214a650
	ctx.lr = 0x82165F90;
	sub_8214A650(ctx, base);
	// li r10,67
	ctx.r10.s64 = 67;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1553
	ctx.r9.s64 = ctx.r31.s64 + 1553;
	// addi r8,r30,1553
	ctx.r8.s64 = ctx.r30.s64 + 1553;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,1672(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1672);
	// stb r10,1672(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1672, ctx.r10.u8);
loc_82165FAC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82165fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165FAC;
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1620, ctx.r11.u32);
	// lwz r10,1744(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1744);
	// stw r10,1744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1744, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82165FD8"))) PPC_WEAK_FUNC(sub_82165FD8);
PPC_FUNC_IMPL(__imp__sub_82165FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82165FE0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,752
	ctx.r5.s64 = 752;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82248a40
	ctx.lr = 0x82165FF4;
	sub_82248A40(ctx, base);
	// addi r4,r31,752
	ctx.r4.s64 = ctx.r31.s64 + 752;
	// addi r3,r28,752
	ctx.r3.s64 = ctx.r28.s64 + 752;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166004;
	sub_82248A40(ctx, base);
	// addi r4,r31,1504
	ctx.r4.s64 = ctx.r31.s64 + 1504;
	// addi r3,r28,1504
	ctx.r3.s64 = ctx.r28.s64 + 1504;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166014;
	sub_82248A40(ctx, base);
	// addi r4,r31,2256
	ctx.r4.s64 = ctx.r31.s64 + 2256;
	// addi r3,r28,2256
	ctx.r3.s64 = ctx.r28.s64 + 2256;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166024;
	sub_82248A40(ctx, base);
	// addi r4,r31,3008
	ctx.r4.s64 = ctx.r31.s64 + 3008;
	// addi r3,r28,3008
	ctx.r3.s64 = ctx.r28.s64 + 3008;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166034;
	sub_82248A40(ctx, base);
	// addi r4,r31,3760
	ctx.r4.s64 = ctx.r31.s64 + 3760;
	// addi r3,r28,3760
	ctx.r3.s64 = ctx.r28.s64 + 3760;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166044;
	sub_82248A40(ctx, base);
	// addi r4,r31,4512
	ctx.r4.s64 = ctx.r31.s64 + 4512;
	// addi r3,r28,4512
	ctx.r3.s64 = ctx.r28.s64 + 4512;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x82166054;
	sub_82248A40(ctx, base);
	// addi r4,r31,5264
	ctx.r4.s64 = ctx.r31.s64 + 5264;
	// addi r3,r28,5264
	ctx.r3.s64 = ctx.r28.s64 + 5264;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x82248a40
	ctx.lr = 0x82166064;
	sub_82248A40(ctx, base);
	// addi r30,r31,5604
	ctx.r30.s64 = ctx.r31.s64 + 5604;
	// subf r27,r31,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r31.s64;
	// addi r29,r28,7328
	ctx.r29.s64 = ctx.r28.s64 + 7328;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82166074:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// addi r10,r29,-1748
	ctx.r10.s64 = ctx.r29.s64 + -1748;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82166084:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82166084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166084;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r27,r30
	ctx.r3.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bl 0x82165910
	ctx.lr = 0x8216609C;
	sub_82165910(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r3,r29,-1624
	ctx.r3.s64 = ctx.r29.s64 + -1624;
	// bl 0x82165e90
	ctx.lr = 0x821660A8;
	sub_82165E90(ctx, base);
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1748
	ctx.r30.s64 = ctx.r30.s64 + 1748;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,1748
	ctx.r29.s64 = ctx.r29.s64 + 1748;
	// bne 0x82166074
	if (!ctx.cr0.eq) goto loc_82166074;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821660CC"))) PPC_WEAK_FUNC(sub_821660CC);
PPC_FUNC_IMPL(__imp__sub_821660CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821660D0"))) PPC_WEAK_FUNC(sub_821660D0);
PPC_FUNC_IMPL(__imp__sub_821660D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lwz r30,-388(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -388);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_82166100:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82166100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166100;
	// li r5,8560
	ctx.r5.s64 = 8560;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82248a40
	ctx.lr = 0x8216611C;
	sub_82248A40(ctx, base);
	// addi r4,r31,8592
	ctx.r4.s64 = ctx.r31.s64 + 8592;
	// addi r3,r30,8592
	ctx.r3.s64 = ctx.r30.s64 + 8592;
	// bl 0x82165fd8
	ctx.lr = 0x82166128;
	sub_82165FD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166140"))) PPC_WEAK_FUNC(sub_82166140);
PPC_FUNC_IMPL(__imp__sub_82166140) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166154"))) PPC_WEAK_FUNC(sub_82166154);
PPC_FUNC_IMPL(__imp__sub_82166154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166158"))) PPC_WEAK_FUNC(sub_82166158);
PPC_FUNC_IMPL(__imp__sub_82166158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82166174:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82166174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166174;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166180"))) PPC_WEAK_FUNC(sub_82166180);
PPC_FUNC_IMPL(__imp__sub_82166180) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166190"))) PPC_WEAK_FUNC(sub_82166190);
PPC_FUNC_IMPL(__imp__sub_82166190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821661AC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821661ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821661AC;
	// lwsync 
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,14516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14516, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821661C4"))) PPC_WEAK_FUNC(sub_821661C4);
PPC_FUNC_IMPL(__imp__sub_821661C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821661C8"))) PPC_WEAK_FUNC(sub_821661C8);
PPC_FUNC_IMPL(__imp__sub_821661C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,1560(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-7480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821ae380
	ctx.lr = 0x821661FC;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// bl 0x821ae208
	ctx.lr = 0x82166208;
	sub_821AE208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// bl 0x821ae380
	ctx.lr = 0x82166214;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// bl 0x821ae208
	ctx.lr = 0x82166220;
	sub_821AE208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// bl 0x821ae380
	ctx.lr = 0x8216622C;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// bl 0x821ae380
	ctx.lr = 0x82166238;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// bl 0x821ae208
	ctx.lr = 0x82166244;
	sub_821AE208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x821ae380
	ctx.lr = 0x82166250;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x821ae380
	ctx.lr = 0x8216625C;
	sub_821AE380(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166274"))) PPC_WEAK_FUNC(sub_82166274);
PPC_FUNC_IMPL(__imp__sub_82166274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166278"))) PPC_WEAK_FUNC(sub_82166278);
PPC_FUNC_IMPL(__imp__sub_82166278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f3,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f1,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fsubs f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fnmadds f7,f11,f12,f10
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64)));
	// fsubs f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fneg f11,f4
	ctx.f11.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fmuls f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmsubs f10,f11,f8,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f3.f64));
	// fnmadds f6,f6,f11,f2
	ctx.f6.f64 = double(float(-(ctx.f6.f64 * ctx.f11.f64 + ctx.f2.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmsubs f4,f7,f12,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f3,f6,f13,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fdivs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f10.f64));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fdivs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f10.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166350"))) PPC_WEAK_FUNC(sub_82166350);
PPC_FUNC_IMPL(__imp__sub_82166350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82166358;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-23536
	ctx.r8.s64 = ctx.r11.s64 + -23536;
	// addi r7,r10,-23544
	ctx.r7.s64 = ctx.r10.s64 + -23544;
	// addi r6,r9,-23552
	ctx.r6.s64 = ctx.r9.s64 + -23552;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// lwsync 
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-7460(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -7460);
	// stw r11,14520(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14520, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821663b0
	if (ctx.cr6.eq) goto loc_821663B0;
	// bl 0x821aef58
	ctx.lr = 0x821663B0;
	sub_821AEF58(ctx, base);
loc_821663B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821661c8
	ctx.lr = 0x821663B8;
	sub_821661C8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x821a9520
	ctx.lr = 0x821663C0;
	sub_821A9520(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x821663C8;
	sub_821857F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x821663D0;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82162518
	ctx.lr = 0x821663D8;
	sub_82162518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821663E0"))) PPC_WEAK_FUNC(sub_821663E0);
PPC_FUNC_IMPL(__imp__sub_821663E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x821672a8
	sub_821672A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821663E8"))) PPC_WEAK_FUNC(sub_821663E8);
PPC_FUNC_IMPL(__imp__sub_821663E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x821672a8
	sub_821672A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821663F0"))) PPC_WEAK_FUNC(sub_821663F0);
PPC_FUNC_IMPL(__imp__sub_821663F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821663F8;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1296
	ctx.r29.s64 = ctx.r3.s64 + 1296;
	// addi r28,r3,1328
	ctx.r28.s64 = ctx.r3.s64 + 1328;
	// addi r30,r3,1376
	ctx.r30.s64 = ctx.r3.s64 + 1376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r3,1280
	ctx.r6.s64 = ctx.r3.s64 + 1280;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82166278
	ctx.lr = 0x82166424;
	sub_82166278(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r27,r31,1312
	ctx.r27.s64 = ctx.r31.s64 + 1312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,1432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1432, ctx.r11.u64);
	// std r10,1424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1424, ctx.r10.u64);
	// bl 0x82166278
	ctx.lr = 0x82166464;
	sub_82166278(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,1264
	ctx.r29.s64 = ctx.r31.s64 + 1264;
	// addi r6,r31,1248
	ctx.r6.s64 = ctx.r31.s64 + 1248;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,1448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1448, ctx.r9.u64);
	// std r8,1440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1440, ctx.r8.u64);
	// bl 0x82166278
	ctx.lr = 0x821664A8;
	sub_82166278(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,1464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1464, ctx.r11.u64);
	// std r10,1456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1456, ctx.r10.u64);
	// bl 0x82166278
	ctx.lr = 0x821664E4;
	sub_82166278(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,1472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1472, ctx.r5.u64);
	// std r4,1480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1480, ctx.r4.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82166514"))) PPC_WEAK_FUNC(sub_82166514);
PPC_FUNC_IMPL(__imp__sub_82166514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166518"))) PPC_WEAK_FUNC(sub_82166518);
PPC_FUNC_IMPL(__imp__sub_82166518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82166520;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x82166538;
	sub_821ADC30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x82166544;
	sub_821ADC58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x82166554;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x82166560;
	sub_821AD240(ctx, base);
	// lwz r10,1408(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8216658c
	if (!ctx.cr6.eq) goto loc_8216658C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82184de0
	ctx.lr = 0x82166574;
	sub_82184DE0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82184de0
	ctx.lr = 0x8216657C;
	sub_82184DE0(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82184de0
	ctx.lr = 0x82166584;
	sub_82184DE0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82184de0
	ctx.lr = 0x8216658C;
	sub_82184DE0(ctx, base);
loc_8216658C:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821665c0
	if (ctx.cr6.eq) goto loc_821665C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x821665A8;
	sub_821A2AA8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad740
	ctx.lr = 0x821665B4;
	sub_821AD740(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x821665C0;
	sub_821A2AA8(ctx, base);
loc_821665C0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821665C4:
	// addi r3,r29,13
	ctx.r3.s64 = ctx.r29.s64 + 13;
	// bl 0x82184de0
	ctx.lr = 0x821665CC;
	sub_82184DE0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// blt cr6,0x821665c4
	if (ctx.cr6.lt) goto loc_821665C4;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82166608
	if (ctx.cr6.eq) goto loc_82166608;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x821665F0;
	sub_821A2AA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad740
	ctx.lr = 0x821665FC;
	sub_821AD740(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x82166608;
	sub_821A2AA8(ctx, base);
loc_82166608:
	// lwz r11,1408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216661c
	if (ctx.cr6.eq) goto loc_8216661C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82166624
	if (!ctx.cr6.eq) goto loc_82166624;
loc_8216661C:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82184de0
	ctx.lr = 0x82166624;
	sub_82184DE0(ctx, base);
loc_82166624:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8216663c
	if (ctx.cr6.eq) goto loc_8216663C;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82184de0
	ctx.lr = 0x8216663C;
	sub_82184DE0(ctx, base);
loc_8216663C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x82166648;
	sub_821AD240(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82166654;
	sub_821AD1F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8216665C"))) PPC_WEAK_FUNC(sub_8216665C);
PPC_FUNC_IMPL(__imp__sub_8216665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166660"))) PPC_WEAK_FUNC(sub_82166660);
PPC_FUNC_IMPL(__imp__sub_82166660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82166668;
	sub_82248750(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821a2a60
	ctx.lr = 0x8216668C;
	sub_821A2A60(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a18
	ctx.lr = 0x82166698;
	sub_821A2A18(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821adc30
	ctx.lr = 0x821666AC;
	sub_821ADC30(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821666BC;
	sub_821AD1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x821a3010
	ctx.lr = 0x821666C8;
	sub_821A3010(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821666D4;
	sub_821AD6F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821a2aa8
	ctx.lr = 0x821666E0;
	sub_821A2AA8(ctx, base);
	// addi r5,r31,1396
	ctx.r5.s64 = ctx.r31.s64 + 1396;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// bl 0x821a9d78
	ctx.lr = 0x821666F4;
	sub_821A9D78(ctx, base);
	// addi r4,r31,1400
	ctx.r4.s64 = ctx.r31.s64 + 1400;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// bl 0x821a9ea8
	ctx.lr = 0x82166704;
	sub_821A9EA8(ctx, base);
	// addi r5,r31,1568
	ctx.r5.s64 = ctx.r31.s64 + 1568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821a9ce8
	ctx.lr = 0x82166714;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,1572
	ctx.r4.s64 = ctx.r31.s64 + 1572;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821a9e08
	ctx.lr = 0x82166720;
	sub_821A9E08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x82166748;
	sub_821A9FE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2aa8
	ctx.lr = 0x82166754;
	sub_821A2AA8(ctx, base);
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821add20
	ctx.lr = 0x82166760;
	sub_821ADD20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x82166770;
	sub_821AD498(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821a9990
	ctx.lr = 0x82166778;
	sub_821A9990(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x820804f8
	ctx.lr = 0x82166780;
	sub_820804F8(ctx, base);
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r25,r1,432
	ctx.r25.s64 = ctx.r1.s64 + 432;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r23,r1,448
	ctx.r23.s64 = ctx.r1.s64 + 448;
	// ld r21,0(r4)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r20,8(r4)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// ld r18,0(r3)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r22,r1,464
	ctx.r22.s64 = ctx.r1.s64 + 464;
	// ld r16,8(r3)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r19,r1,672
	ctx.r19.s64 = ctx.r1.s64 + 672;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addi r17,r1,688
	ctx.r17.s64 = ctx.r1.s64 + 688;
	// ld r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r15,r1,704
	ctx.r15.s64 = ctx.r1.s64 + 704;
	// std r3,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r3.u64);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r14,0(r25)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r25,8(r25)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// ld r23,8(r23)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r22,8(r22)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// std r21,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r21.u64);
	// std r20,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r20.u64);
	// std r18,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r18.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r16,8(r19)
	PPC_STORE_U64(ctx.r19.u32 + 8, ctx.r16.u64);
	// ld r6,480(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// std r14,0(r17)
	PPC_STORE_U64(ctx.r17.u32 + 0, ctx.r14.u64);
	// std r25,8(r17)
	PPC_STORE_U64(ctx.r17.u32 + 8, ctx.r25.u64);
	// std r23,8(r15)
	PPC_STORE_U64(ctx.r15.u32 + 8, ctx.r23.u64);
	// std r28,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// std r6,0(r15)
	PPC_STORE_U64(ctx.r15.u32 + 0, ctx.r6.u64);
	// std r22,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r22.u64);
	// bl 0x821a3010
	ctx.lr = 0x82166860;
	sub_821A3010(ctx, base);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// addi r11,r31,1232
	ctx.r11.s64 = ctx.r31.s64 + 1232;
	// ori r30,r8,255
	ctx.r30.u64 = ctx.r8.u64 | 255;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,1200(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r11,1208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1208);
	// ld r8,1232(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1232);
	// ld r28,1240(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1240);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x821668AC;
	sub_821DCAF0(ctx, base);
	// ld r10,1216(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1216);
	// ld r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1224);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r8,1232(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1232);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r28,1240(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1240);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x821668E8;
	sub_821DCAF0(ctx, base);
	// addi r11,r31,1072
	ctx.r11.s64 = ctx.r31.s64 + 1072;
	// ld r9,1072(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1072);
	// addi r11,r31,1088
	ctx.r11.s64 = ctx.r31.s64 + 1088;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r28,1080(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1080);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// ld r24,1088(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1088);
	// addi r25,r1,192
	ctx.r25.s64 = ctx.r1.s64 + 192;
	// ld r22,1096(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1096);
	// addi r23,r1,208
	ctx.r23.s64 = ctx.r1.s64 + 208;
	// ld r21,1104(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1104);
	// addi r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 + 1104;
	// ld r20,1112(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1112);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r19,1120(r31)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1120);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// ld r18,1128(r31)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1128);
	// li r4,5
	ctx.r4.s64 = 5;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r28,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r28.u64);
	// addi r11,r31,1120
	ctx.r11.s64 = ctx.r31.s64 + 1120;
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// std r22,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r22.u64);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// std r21,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r21.u64);
	// std r20,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r20.u64);
	// std r19,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r19.u64);
	// std r18,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r18.u64);
	// std r9,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r9.u64);
	// std r28,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166970;
	sub_821DCAF0(ctx, base);
	// addi r11,r31,1136
	ctx.r11.s64 = ctx.r31.s64 + 1136;
	// addi r11,r31,1152
	ctx.r11.s64 = ctx.r31.s64 + 1152;
	// addi r11,r31,1168
	ctx.r11.s64 = ctx.r31.s64 + 1168;
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1136);
	// ld r25,1144(r31)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1144);
	// ld r24,1152(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1152);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// ld r23,1160(r31)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1160);
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// ld r22,1168(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1168);
	// ld r21,1176(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1176);
	// ld r20,1184(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// ld r19,1192(r31)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1192);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// std r24,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r24.u64);
	// std r23,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r23.u64);
	// std r22,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r22.u64);
	// std r21,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r21.u64);
	// std r20,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r20.u64);
	// std r19,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r19.u64);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// std r25,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r25.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x821669F8;
	sub_821DCAF0(ctx, base);
	// ld r8,1072(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1072);
	// ld r7,1080(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1080);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1136);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r28,1144(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1144);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166A34;
	sub_821DCAF0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r8,1088(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1088);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// ld r7,1096(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1096);
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1152);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r28,1160(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1160);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166A70;
	sub_821DCAF0(ctx, base);
	// ld r8,1104(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1104);
	// ld r7,1112(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1112);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1168);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r28,1176(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1176);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166AAC;
	sub_821DCAF0(ctx, base);
	// ld r8,1120(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1120);
	// ld r7,1128(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1128);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r28,1192(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1192);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166AE8;
	sub_821DCAF0(ctx, base);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65280
	ctx.r5.u64 = ctx.r5.u64 | 65280;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x821dcaf0
	ctx.lr = 0x82166B00;
	sub_821DCAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// bl 0x821dcaf0
	ctx.lr = 0x82166B14;
	sub_821DCAF0(ctx, base);
	// addi r11,r31,1376
	ctx.r11.s64 = ctx.r31.s64 + 1376;
	// ld r8,1376(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1376);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,1384(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1384);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r11,1312(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1312);
	// ld r28,1320(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1320);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166B58;
	sub_821DCAF0(ctx, base);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// ld r8,1376(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1376);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,1384(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1384);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// ld r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1328);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r28,1336(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1336);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166B98;
	sub_821DCAF0(ctx, base);
	// stfs f30,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,1380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f0,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x821dcaf0
	ctx.lr = 0x82166C24;
	sub_821DCAF0(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x821dcaf0
	ctx.lr = 0x82166C3C;
	sub_821DCAF0(ctx, base);
	// addi r11,r31,1424
	ctx.r11.s64 = ctx.r31.s64 + 1424;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r28,1424(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1424);
	// ld r25,1432(r31)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1432);
	// ld r24,1440(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1440);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// ld r23,1448(r31)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1448);
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// ld r22,1456(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// ld r21,1464(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// ld r20,1472(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// ld r19,1480(r31)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1480);
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// std r24,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r24.u64);
	// std r23,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r23.u64);
	// std r22,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r22.u64);
	// std r21,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r21.u64);
	// std r20,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r20.u64);
	// std r19,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r19.u64);
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166CBC;
	sub_821DCAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821dcaf0
	ctx.lr = 0x82166CD0;
	sub_821DCAF0(ctx, base);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65280
	ctx.r5.u64 = ctx.r5.u64 | 65280;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821dcaf0
	ctx.lr = 0x82166CE8;
	sub_821DCAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821dcaf0
	ctx.lr = 0x82166CFC;
	sub_821DCAF0(ctx, base);
	// addi r11,r31,1488
	ctx.r11.s64 = ctx.r31.s64 + 1488;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1488);
	// ld r28,1496(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1496);
	// ld r25,1504(r31)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1504);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// ld r24,1512(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1512);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// ld r23,1520(r31)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1520);
	// ld r22,1528(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1528);
	// ld r21,1536(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1536);
	// ld r20,1544(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1544);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r28,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r28.u64);
	// std r25,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r25.u64);
	// std r24,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r24.u64);
	// std r23,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r23.u64);
	// std r22,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r22.u64);
	// std r21,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r21.u64);
	// std r20,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r20.u64);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r28,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r28.u64);
	// bl 0x821dcaf0
	ctx.lr = 0x82166D7C;
	sub_821DCAF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f30,388(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f30,396(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f0,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f31,408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f30,412(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f30,352(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f31,360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f30,364(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f31,376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f30,380(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// bl 0x821dcaf0
	ctx.lr = 0x82166DD8;
	sub_821DCAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821dcaf0
	ctx.lr = 0x82166DEC;
	sub_821DCAF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x82166DF8;
	sub_821AD498(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821a9520
	ctx.lr = 0x82166E00;
	sub_821A9520(ctx, base);
	// lwz r6,1564(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821aa098
	ctx.lr = 0x82166E34;
	sub_821AA098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x821a9ce8
	ctx.lr = 0x82166E44;
	sub_821A9CE8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x821a9e08
	ctx.lr = 0x82166E50;
	sub_821A9E08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821a9fe8
	ctx.lr = 0x82166E70;
	sub_821A9FE8(ctx, base);
	// lwz r3,1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// bl 0x82268fb0
	ctx.lr = 0x82166E78;
	sub_82268FB0(ctx, base);
	// lwz r3,1400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// bl 0x82268fb0
	ctx.lr = 0x82166E80;
	sub_82268FB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x821a2aa8
	ctx.lr = 0x82166E8C;
	sub_821A2AA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x821a3010
	ctx.lr = 0x82166E98;
	sub_821A3010(ctx, base);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82166EA8;
	sub_821AD6F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821ad1f8
	ctx.lr = 0x82166EB4;
	sub_821AD1F8(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82166EC4"))) PPC_WEAK_FUNC(sub_82166EC4);
PPC_FUNC_IMPL(__imp__sub_82166EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166EC8"))) PPC_WEAK_FUNC(sub_82166EC8);
PPC_FUNC_IMPL(__imp__sub_82166EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82166ED0;
	sub_82248774(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,-19048(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lwz r30,-7460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,-7488(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7488);
	// bl 0x821a2a60
	ctx.lr = 0x82166EF8;
	sub_821A2A60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2a18
	ctx.lr = 0x82166F04;
	sub_821A2A18(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ade68
	ctx.lr = 0x82166F10;
	sub_821ADE68(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af270
	ctx.lr = 0x82166F20;
	sub_821AF270(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x82166F2C;
	sub_821AD1F8(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a3010
	ctx.lr = 0x82166F38;
	sub_821A3010(ctx, base);
	// lwz r3,-7488(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7488);
	// bl 0x821ade90
	ctx.lr = 0x82166F40;
	sub_821ADE90(ctx, base);
	// stw r3,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82166F50;
	sub_821AD6F8(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82166f68
	if (ctx.cr6.eq) goto loc_82166F68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad740
	ctx.lr = 0x82166F68;
	sub_821AD740(ctx, base);
loc_82166F68:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x82166F74;
	sub_821A2AA8(ctx, base);
	// addi r27,r31,1396
	ctx.r27.s64 = ctx.r31.s64 + 1396;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9d78
	ctx.lr = 0x82166F88;
	sub_821A9D78(ctx, base);
	// addi r26,r31,1400
	ctx.r26.s64 = ctx.r31.s64 + 1400;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821a9ea8
	ctx.lr = 0x82166F98;
	sub_821A9EA8(ctx, base);
	// addi r5,r31,1580
	ctx.r5.s64 = ctx.r31.s64 + 1580;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9ce8
	ctx.lr = 0x82166FA8;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9e08
	ctx.lr = 0x82166FB4;
	sub_821A9E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9fe8
	ctx.lr = 0x82166FD8;
	sub_821A9FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166518
	ctx.lr = 0x82166FE0;
	sub_82166518(ctx, base);
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216702c
	if (ctx.cr6.lt) goto loc_8216702C;
	// bne cr6,0x82167064
	if (!ctx.cr6.eq) goto loc_82167064;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,1576(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821aa098
	ctx.lr = 0x82167028;
	sub_821AA098(ctx, base);
	// b 0x82167064
	goto loc_82167064;
loc_8216702C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,1576(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821aa098
	ctx.lr = 0x82167064;
	sub_821AA098(ctx, base);
loc_82167064:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9ce8
	ctx.lr = 0x82167074;
	sub_821A9CE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9e08
	ctx.lr = 0x82167080;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167098
	if (ctx.cr6.eq) goto loc_82167098;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9f48
	ctx.lr = 0x82167098;
	sub_821A9F48(ctx, base);
loc_82167098:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821670b0
	if (ctx.cr6.eq) goto loc_821670B0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9f48
	ctx.lr = 0x821670B0;
	sub_821A9F48(ctx, base);
loc_821670B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// bl 0x821af008
	ctx.lr = 0x821670BC;
	sub_821AF008(ctx, base);
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a29d0
	ctx.lr = 0x821670C4;
	sub_821A29D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821dbb50
	ctx.lr = 0x821670D0;
	sub_821DBB50(ctx, base);
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821afc50
	ctx.lr = 0x821670DC;
	sub_821AFC50(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x821af010
	ctx.lr = 0x821670F8;
	sub_821AF010(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x821af018
	ctx.lr = 0x82167114;
	sub_821AF018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af020
	ctx.lr = 0x82167120;
	sub_821AF020(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2aa8
	ctx.lr = 0x8216712C;
	sub_821A2AA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// bl 0x821ad740
	ctx.lr = 0x82167138;
	sub_821AD740(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82167144;
	sub_821AD6F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a3010
	ctx.lr = 0x82167150;
	sub_821A3010(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82167158"))) PPC_WEAK_FUNC(sub_82167158);
PPC_FUNC_IMPL(__imp__sub_82167158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// b 0x821a2b00
	sub_821A2B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82167168"))) PPC_WEAK_FUNC(sub_82167168);
PPC_FUNC_IMPL(__imp__sub_82167168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82249928
	ctx.lr = 0x82167178;
	sub_82249928(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f5,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f6,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f13,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f7,f12,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f11,f7
	ctx.f11.f64 = double(float(sqrt(ctx.f7.f64)));
	// fsubs f30,f3,f8
	ctx.f30.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f29,f2,f10
	ctx.f29.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f28,f1,f9
	ctx.f28.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8216721c
	if (ctx.cr6.eq) goto loc_8216721C;
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmadds f13,f28,f13,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f12,f30,f12,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fdivs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_8216721C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x82167224;
	sub_820A42E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f28
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f1,f9,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82249974
	ctx.lr = 0x82167298;
	sub_82249974(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821672A4"))) PPC_WEAK_FUNC(sub_821672A4);
PPC_FUNC_IMPL(__imp__sub_821672A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821672A8"))) PPC_WEAK_FUNC(sub_821672A8);
PPC_FUNC_IMPL(__imp__sub_821672A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82166350
	ctx.lr = 0x821672C8;
	sub_82166350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821672e4
	if (ctx.cr6.eq) goto loc_821672E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821672E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821672E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821672FC"))) PPC_WEAK_FUNC(sub_821672FC);
PPC_FUNC_IMPL(__imp__sub_821672FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167300"))) PPC_WEAK_FUNC(sub_82167300);
PPC_FUNC_IMPL(__imp__sub_82167300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82167308;
	sub_82248764(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82249924
	ctx.lr = 0x82167310;
	sub_82249924(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stfs f31,1496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// addi r24,r31,1424
	ctx.r24.s64 = ctx.r31.s64 + 1424;
	// stfs f31,1492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// addi r23,r31,1440
	ctx.r23.s64 = ctx.r31.s64 + 1440;
	// stfs f31,1488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// addi r30,r31,1456
	ctx.r30.s64 = ctx.r31.s64 + 1456;
	// stfs f30,1500(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1500, temp.u32);
	// addi r25,r31,1472
	ctx.r25.s64 = ctx.r31.s64 + 1472;
	// stfs f31,1512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// addi r29,r31,1488
	ctx.r29.s64 = ctx.r31.s64 + 1488;
	// stfs f31,1508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// addi r28,r31,1504
	ctx.r28.s64 = ctx.r31.s64 + 1504;
	// stfs f31,1504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// addi r27,r31,1520
	ctx.r27.s64 = ctx.r31.s64 + 1520;
	// stfs f30,1516(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// addi r26,r31,1536
	ctx.r26.s64 = ctx.r31.s64 + 1536;
	// stfs f31,1528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// stfs f31,1524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// stfs f31,1520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// stfs f30,1532(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1532, temp.u32);
	// stfs f31,1544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// stfs f31,1540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// stfs f31,1536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// stfs f30,1548(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// ld r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// ld r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// ld r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// ld r22,1480(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1480);
	// ld r21,1424(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1424);
	// ld r20,1432(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1432);
	// ld r19,1440(r31)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1440);
	// ld r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1448);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r19,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r19.u64);
	// std r20,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r20.u64);
	// std r21,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r21.u64);
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r22,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r22.u64);
	// bl 0x820804f8
	ctx.lr = 0x821673E0;
	sub_820804F8(ctx, base);
	// ld r9,1456(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1456);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r7,1464(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// lfs f28,1472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,1476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f27.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// fadds f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// lfs f29,8060(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,356(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f8,352(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82167438;
	sub_8208EA90(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8208ea90
	ctx.lr = 0x82167444;
	sub_8208EA90(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x82167450;
	sub_8208EA90(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8208ea90
	ctx.lr = 0x8216745C;
	sub_8208EA90(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820804f8
	ctx.lr = 0x82167464;
	sub_820804F8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f6,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f5,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f6,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f4,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// ld r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f1,f13,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fsqrts f12,f1
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x821674cc
	if (ctx.cr6.eq) goto loc_821674CC;
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,256(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
loc_821674CC:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x821674D8;
	sub_8208EA90(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8208ea90
	ctx.lr = 0x821674E4;
	sub_8208EA90(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x821674F0;
	sub_8208EA90(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8208ea90
	ctx.lr = 0x821674FC;
	sub_8208EA90(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x820804f8
	ctx.lr = 0x82167504;
	sub_820804F8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fsubs f3,f2,f9
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f0,8324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8324);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fsubs f2,f1,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f6,f5,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f10,f8,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82166278
	ctx.lr = 0x821675E4;
	sub_82166278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f9,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f8,480(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f6,484(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82167620;
	sub_8208EA90(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x8216762C;
	sub_8208EA90(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x820804f8
	ctx.lr = 0x82167634;
	sub_820804F8(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f27,f5
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f5.f64));
	// fadds f3,f28,f4
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f2,f29
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f1,f3,f29
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8216767C;
	sub_8208EA90(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82167688;
	sub_8208EA90(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82167694;
	sub_8208EA90(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82167920
	if (ctx.cr6.eq) goto loc_82167920;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,576(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821676BC;
	sub_8208EA90(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x821676C8;
	sub_8208EA90(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x820804f8
	ctx.lr = 0x821676D0;
	sub_820804F8(ctx, base);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f30,f10
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fdivs f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// stfs f8,496(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f7,516(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x821676F4;
	sub_8208EA90(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x82167700;
	sub_8208EA90(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x820804f8
	ctx.lr = 0x82167708;
	sub_820804F8(ctx, base);
	// stfs f30,420(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f30,396(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stfs f31,428(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82167720;
	sub_8208EA90(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x8216772C;
	sub_8208EA90(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x820804f8
	ctx.lr = 0x82167734;
	sub_820804F8(ctx, base);
	// lfs f6,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fdivs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,8064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,676(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8216776C;
	sub_8208EA90(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x820804f8
	ctx.lr = 0x82167774;
	sub_820804F8(ctx, base);
	// lfs f11,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,724(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x82167798;
	sub_82289C50(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677A8;
	sub_82289C50(ctx, base);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677B8;
	sub_82289C50(ctx, base);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677C8;
	sub_82289C50(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677D8;
	sub_82289C50(ctx, base);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677E8;
	sub_82289C50(ctx, base);
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289c50
	ctx.lr = 0x821677F8;
	sub_82289C50(ctx, base);
	// ld r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// ld r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r24,8(r23)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// ld r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r24,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r24.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// std r23,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r23.u64);
	// bl 0x8208ea90
	ctx.lr = 0x82167854;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8208ea90
	ctx.lr = 0x82167860;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x8216786C;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8208ea90
	ctx.lr = 0x82167878;
	sub_8208EA90(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r25,r1,224
	ctx.r25.s64 = ctx.r1.s64 + 224;
	// ld r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r31,1008
	ctx.r11.s64 = ctx.r31.s64 + 1008;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r5.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r7.u64);
	// std r3,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r3.u64);
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// std r5,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r5.u64);
	// ld r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r24,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r24.u64);
	// std r3,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r3.u64);
	// std r11,1008(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1008, ctx.r11.u64);
	// std r8,1016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1016, ctx.r8.u64);
	// std r7,1024(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1024, ctx.r7.u64);
	// std r10,1032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1032, ctx.r10.u64);
	// std r9,1040(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1040, ctx.r9.u64);
	// std r6,1048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1048, ctx.r6.u64);
	// std r5,1056(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1056, ctx.r5.u64);
	// std r4,1064(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1064, ctx.r4.u64);
loc_82167920:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82249970
	ctx.lr = 0x8216792C;
	sub_82249970(ctx, base);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82167930"))) PPC_WEAK_FUNC(sub_82167930);
PPC_FUNC_IMPL(__imp__sub_82167930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82167938;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-19048(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82167954;
	sub_821A2A60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a18
	ctx.lr = 0x82167960;
	sub_821A2A18(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,-7488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7488);
	// bl 0x821ade68
	ctx.lr = 0x82167970;
	sub_821ADE68(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r29,-7488(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7488);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r28,-7460(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7460);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821af270
	ctx.lr = 0x8216798C;
	sub_821AF270(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821adc30
	ctx.lr = 0x82167994;
	sub_821ADC30(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821679A4;
	sub_821AD1F8(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a3010
	ctx.lr = 0x821679B0;
	sub_821A3010(ctx, base);
	// lwz r3,-7488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7488);
	// bl 0x821ade90
	ctx.lr = 0x821679B8;
	sub_821ADE90(ctx, base);
	// stw r3,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821679C8;
	sub_821AD6F8(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821679e0
	if (ctx.cr6.eq) goto loc_821679E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad740
	ctx.lr = 0x821679E0;
	sub_821AD740(ctx, base);
loc_821679E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2aa8
	ctx.lr = 0x821679EC;
	sub_821A2AA8(ctx, base);
	// addi r27,r31,1396
	ctx.r27.s64 = ctx.r31.s64 + 1396;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9d78
	ctx.lr = 0x82167A00;
	sub_821A9D78(ctx, base);
	// addi r26,r31,1400
	ctx.r26.s64 = ctx.r31.s64 + 1400;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821a9ea8
	ctx.lr = 0x82167A10;
	sub_821A9EA8(ctx, base);
	// addi r5,r31,1556
	ctx.r5.s64 = ctx.r31.s64 + 1556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9ce8
	ctx.lr = 0x82167A20;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,1560
	ctx.r4.s64 = ctx.r31.s64 + 1560;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9e08
	ctx.lr = 0x82167A2C;
	sub_821A9E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x82167A54;
	sub_821A9FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166518
	ctx.lr = 0x82167A5C;
	sub_82166518(ctx, base);
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82167aa8
	if (ctx.cr6.lt) goto loc_82167AA8;
	// bne cr6,0x82167ae0
	if (!ctx.cr6.eq) goto loc_82167AE0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,1552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x82167AA4;
	sub_821AA098(ctx, base);
	// b 0x82167ae0
	goto loc_82167AE0;
loc_82167AA8:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,1552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x82167AE0;
	sub_821AA098(ctx, base);
loc_82167AE0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9ce8
	ctx.lr = 0x82167AF0;
	sub_821A9CE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9e08
	ctx.lr = 0x82167AFC;
	sub_821A9E08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9fe8
	ctx.lr = 0x82167B1C;
	sub_821A9FE8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167b34
	if (ctx.cr6.eq) goto loc_82167B34;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9f48
	ctx.lr = 0x82167B34;
	sub_821A9F48(ctx, base);
loc_82167B34:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167b4c
	if (ctx.cr6.eq) goto loc_82167B4C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9f48
	ctx.lr = 0x82167B4C;
	sub_821A9F48(ctx, base);
loc_82167B4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// bl 0x821af000
	ctx.lr = 0x82167B58;
	sub_821AF000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a29d0
	ctx.lr = 0x82167B60;
	sub_821A29D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821dbb50
	ctx.lr = 0x82167B6C;
	sub_821DBB50(ctx, base);
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821afc50
	ctx.lr = 0x82167B78;
	sub_821AFC50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af020
	ctx.lr = 0x82167B84;
	sub_821AF020(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2aa8
	ctx.lr = 0x82167B90;
	sub_821A2AA8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a3010
	ctx.lr = 0x82167B9C;
	sub_821A3010(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// bl 0x821ad740
	ctx.lr = 0x82167BA8;
	sub_821AD740(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82167BB4;
	sub_821AD6F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82167BC0;
	sub_821AD1F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82167BCC"))) PPC_WEAK_FUNC(sub_82167BCC);
PPC_FUNC_IMPL(__imp__sub_82167BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167BD0"))) PPC_WEAK_FUNC(sub_82167BD0);
PPC_FUNC_IMPL(__imp__sub_82167BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82167BD8;
	sub_82248770(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8224990c
	ctx.lr = 0x82167BE0;
	sub_8224990C(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821686bc
	if (ctx.cr6.eq) goto loc_821686BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9880
	ctx.lr = 0x82167C04;
	sub_821A9880(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820804f8
	ctx.lr = 0x82167C10;
	sub_820804F8(ctx, base);
	// addi r5,r31,944
	ctx.r5.s64 = ctx.r31.s64 + 944;
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82289c50
	ctx.lr = 0x82167C20;
	sub_82289C50(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r30,544
	ctx.r4.s64 = ctx.r30.s64 + 544;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82289c50
	ctx.lr = 0x82167C30;
	sub_82289C50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82167c50
	if (ctx.cr6.gt) goto loc_82167C50;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
loc_82167C50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f0,f28,f29
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lfs f13,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f31,f31,f26
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// fmadds f27,f0,f13,f29
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82167C78;
	sub_82249E70(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82167C84;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f11,f25,f29
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// stfs f29,1080(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// fmuls f10,f25,f28
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// stfs f30,1084(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,17348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17348);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r25,r31,1072
	ctx.r25.s64 = ctx.r31.s64 + 1072;
	// addi r22,r31,1136
	ctx.r22.s64 = ctx.r31.s64 + 1136;
	// lfs f0,20948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20948);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,1200
	ctx.r29.s64 = ctx.r31.s64 + 1200;
	// lfs f23,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f31,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fneg f7,f11
	ctx.f7.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f7,1076(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// fneg f6,f10
	ctx.f6.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// fmuls f5,f28,f23
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// fmuls f4,f8,f29
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f3,f8,f28
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f2,1072(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// stfs f2,1088(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f11,1092(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// stfs f29,1096(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stfs f30,1100(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stfs f4,1104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// stfs f11,1108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// stfs f29,1112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// stfs f30,1116(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1116, temp.u32);
	// stfs f4,1120(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f7,1124(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f29,1128(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stfs f30,1132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1132, temp.u32);
	// stfs f1,1136(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// stfs f6,1140(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// stfs f28,1144(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f30,1148(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f1,1152(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f10,1156(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stfs f28,1160(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// stfs f30,1164(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1164, temp.u32);
	// stfs f3,1168(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stfs f10,1172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f28,1176(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stfs f30,1180(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f3,1184(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// stfs f6,1188(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f28,1192(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stfs f30,1196(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1196, temp.u32);
	// stfs f31,1200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1200, temp.u32);
	// stfs f31,1204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1204, temp.u32);
	// stfs f9,1208(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// stfs f30,1212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1212, temp.u32);
	// stfs f31,1216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f5,1224(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stfs f30,1228(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1228, temp.u32);
loc_82167D9C:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208ea90
	ctx.lr = 0x82167DA8;
	sub_8208EA90(ctx, base);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f30,12(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f9,4(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x82167d9c
	if (!ctx.cr0.eq) goto loc_82167D9C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82167DE4:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208ea90
	ctx.lr = 0x82167DF0;
	sub_8208EA90(ctx, base);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f30,12(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f9,4(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x82167de4
	if (!ctx.cr0.eq) goto loc_82167DE4;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f10,8(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmuls f13,f6,f26
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// lfs f22,8324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8324);
	ctx.f22.f64 = double(temp.f32);
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f10,f10,f22
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r31,1232
	ctx.r6.s64 = ctx.r31.s64 + 1232;
	// fmuls f0,f7,f26
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fsubs f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f11,f4,f22
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f10,8(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmuls f12,f5,f22
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// stfs f10,8(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fadds f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f22
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f22
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f22
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f22.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// std r5,1232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1232, ctx.r5.u64);
	// std r11,1240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1240, ctx.r11.u64);
	// bl 0x8208ea90
	ctx.lr = 0x82167F5C;
	sub_8208EA90(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f11,1204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f21,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f21.f64 = double(temp.f32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f27,f21
	ctx.f27.f64 = ctx.f21.f64;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f3,f0,f28
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f25,f9,f8
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f24,f9,f7
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
loc_82167FD4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82167168
	ctx.lr = 0x82167FE4;
	sub_82167168(ctx, base);
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// ble cr6,0x82167ff4
	if (!ctx.cr6.gt) goto loc_82167FF4;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
loc_82167FF4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x82167fd4
	if (ctx.cr6.lt) goto loc_82167FD4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// addi r28,r31,1248
	ctx.r28.s64 = ctx.r31.s64 + 1248;
	// addi r27,r31,1264
	ctx.r27.s64 = ctx.r31.s64 + 1264;
	// bne cr6,0x82168034
	if (!ctx.cr6.eq) goto loc_82168034;
	// stfs f31,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f31,1252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// stfs f31,1256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// stfs f30,1260(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// b 0x8216807c
	goto loc_8216807C;
loc_82168034:
	// addi r10,r26,67
	ctx.r10.s64 = ctx.r26.s64 + 67;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f30,1260(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// fsubs f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f12,1248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// stfs f31,1256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// stfs f11,1252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// lfsx f9,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// lfs f10,1076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f8,1264(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f7,1268(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
loc_8216807C:
	// stfs f30,1276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// fmr f29,f21
	ctx.f29.f64 = ctx.f21.f64;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82168090:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82167168
	ctx.lr = 0x821680A0;
	sub_82167168(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x821680b0
	if (!ctx.cr6.gt) goto loc_821680B0;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
loc_821680B0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpwi cr6,r23,8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 8, ctx.xer);
	// blt cr6,0x82168090
	if (ctx.cr6.lt) goto loc_82168090;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,1280
	ctx.r4.s64 = ctx.r31.s64 + 1280;
	// lfs f12,1204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,1220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,1296
	ctx.r5.s64 = ctx.r31.s64 + 1296;
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bne cr6,0x82168104
	if (!ctx.cr6.eq) goto loc_82168104;
	// stfs f31,1280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stfs f31,1284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// stfs f31,1288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// stfs f30,1292(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// stfs f31,1296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stfs f31,1300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// b 0x8216814c
	goto loc_8216814C;
loc_82168104:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r24,67
	ctx.r10.s64 = ctx.r24.s64 + 67;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,1076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,1280(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stfs f10,1284(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// stfs f30,1292(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// stfs f31,1288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// lfs f8,1076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lfsx f6,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f5,1296(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stfs f7,1300(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_8216814C:
	// stfs f30,1308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// stfs f31,1304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// addi r11,r26,67
	ctx.r11.s64 = ctx.r26.s64 + 67;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r31,1344
	ctx.r26.s64 = ctx.r31.s64 + 1344;
	// lfs f11,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lfs f9,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f7,1300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f8,1352(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// fadds f6,f24,f9
	ctx.f6.f64 = double(float(ctx.f24.f64 + ctx.f9.f64));
	// stfs f30,1356(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f5,1344(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f4,1348(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1348, temp.u32);
	// addi r11,r31,1360
	ctx.r11.s64 = ctx.r31.s64 + 1360;
	// lfs f0,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// lfs f2,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f2.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f3,1304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f1,f24,f2
	ctx.f1.f64 = double(float(ctx.f24.f64 - ctx.f2.f64));
	// stfs f30,1372(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stfs f9,1368(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f8,1360(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// fadds f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f7,1364(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// lfs f29,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82167168
	ctx.lr = 0x821681E8;
	sub_82167168(ctx, base);
	// ld r10,1344(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1344);
	// ld r9,1352(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1352);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f6,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f28,f1
	ctx.f28.f64 = double(float(sqrt(ctx.f1.f64)));
	// lfs f5,1364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	ctx.f5.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f0,f2,f26
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f1,f26
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82167168
	ctx.lr = 0x82168240;
	sub_82167168(ctx, base);
	// fsqrts f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// fadds f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fnmsubs f10,f12,f23,f28
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f23.f64 - ctx.f28.f64)));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fnmsubs f8,f28,f29,f10
	ctx.f8.f64 = double(float(-(ctx.f28.f64 * ctx.f29.f64 - ctx.f10.f64)));
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fdivs f29,f7,f8
	ctx.f29.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x82168268
	if (!ctx.cr6.lt) goto loc_82168268;
	// fneg f29,f29
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
loc_82168268:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82166278
	ctx.lr = 0x82168280;
	sub_82166278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// ld r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// bl 0x82187200
	ctx.lr = 0x821682D8;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x821682e8
	if (!ctx.cr6.gt) goto loc_821682E8;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x821682ec
	goto loc_821682EC;
loc_821682E8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821682EC:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r29,r31,1376
	ctx.r29.s64 = ctx.r31.s64 + 1376;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,1384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1384, ctx.r9.u64);
	// std r8,1376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1376, ctx.r8.u64);
	// lfs f4,1384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// lfs f5,1380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f9,f29
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f8,f29
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f3,1380(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// lfs f7,1376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f2,1384(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// stfs f6,1376(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// bl 0x82249c38
	ctx.lr = 0x8216838C;
	sub_82249C38(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x820804f8
	ctx.lr = 0x82168398;
	sub_820804F8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fneg f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// bl 0x821876f8
	ctx.lr = 0x821683A4;
	sub_821876F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,-1
	ctx.r27.s64 = -1;
	// fmr f28,f21
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f21.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lfs f29,-23532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23532);
	ctx.f29.f64 = double(temp.f32);
loc_821683BC:
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f4,f6,f29
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82168418;
	sub_8208EA90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187200
	ctx.lr = 0x82168420;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82168430
	if (!ctx.cr6.gt) goto loc_82168430;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x82168434
	goto loc_82168434;
loc_82168430:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82168434:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x82168468;
	sub_82249C38(ctx, base);
	// lfs f9,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// ble cr6,0x82168488
	if (!ctx.cr6.gt) goto loc_82168488;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82168488
	if (ctx.cr6.lt) goto loc_82168488;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_82168488:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x821683bc
	if (ctx.cr6.lt) goto loc_821683BC;
	// addi r11,r27,71
	ctx.r11.s64 = ctx.r27.s64 + 71;
	// fmr f28,f21
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f21.f64;
	// addi r30,r31,1312
	ctx.r30.s64 = ctx.r31.s64 + 1312;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// ldx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// std r9,1312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1312, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,1320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1320, ctx.r8.u64);
loc_821684C8:
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f3,f6,f29
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82168524;
	sub_8208EA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82187200
	ctx.lr = 0x8216852C;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8216853c
	if (!ctx.cr6.gt) goto loc_8216853C;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x82168540
	goto loc_82168540;
loc_8216853C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82168540:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fabs f2,f13
	ctx.f2.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x82168574;
	sub_82249C38(ctx, base);
	// lfs f9,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bge cr6,0x82168594
	if (!ctx.cr6.lt) goto loc_82168594;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82168594
	if (ctx.cr6.lt) goto loc_82168594;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_82168594:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x821684c8
	if (ctx.cr6.lt) goto loc_821684C8;
	// addi r10,r26,71
	ctx.r10.s64 = ctx.r26.s64 + 71;
	// addi r11,r31,1328
	ctx.r11.s64 = ctx.r31.s64 + 1328;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// std r8,1328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1328, ctx.r8.u64);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,1336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1336, ctx.r7.u64);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,1320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,1316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f22
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// fmuls f2,f4,f22
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f2,1316(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f6,1332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,1328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// stfs f2,1328(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// fmuls f9,f2,f22
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f22.f64));
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f0,1332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// fmuls f8,f0,f22
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f12,1336(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// stfs f31,1336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f9,1328(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stfs f8,1332(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f3,1328(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f1,1332(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,1336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
loc_821686BC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82249958
	ctx.lr = 0x821686C8;
	sub_82249958(ctx, base);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821686CC"))) PPC_WEAK_FUNC(sub_821686CC);
PPC_FUNC_IMPL(__imp__sub_821686CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821686D0"))) PPC_WEAK_FUNC(sub_821686D0);
PPC_FUNC_IMPL(__imp__sub_821686D0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249928
	ctx.lr = 0x821686E8;
	sub_82249928(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x82168724;
	sub_82187920(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82168740;
	sub_8208EA90(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,-19048(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// lfs f29,7948(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168800
	if (ctx.cr6.eq) goto loc_82168800;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82168800
	if (ctx.cr6.eq) goto loc_82168800;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216879C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216879c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216879C;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821687C8;
	sub_8208EA90(ctx, base);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f1
	ctx.cr6.compare(ctx.f1.f64, ctx.f1.f64);
	// bne cr6,0x821687e8
	if (!ctx.cr6.eq) goto loc_821687E8;
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f2
	ctx.cr6.compare(ctx.f2.f64, ctx.f2.f64);
	// bne cr6,0x821687e8
	if (!ctx.cr6.eq) goto loc_821687E8;
	// bl 0x82249c38
	ctx.lr = 0x821687E4;
	sub_82249C38(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
loc_821687E8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x821875f8
	ctx.lr = 0x821687F4;
	sub_821875F8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82168800;
	sub_8208EA90(ctx, base);
loc_82168800:
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// addi r11,r31,864
	ctx.r11.s64 = ctx.r31.s64 + 864;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// std r10,864(r31)
	PPC_STORE_U64(ctx.r31.u32 + 864, ctx.r10.u64);
	// lfs f1,11888(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11888);
	ctx.f1.f64 = double(temp.f32);
	// std r8,872(r31)
	PPC_STORE_U64(ctx.r31.u32 + 872, ctx.r8.u64);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,852(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lfs f8,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmadds f7,f8,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fsqrts f28,f7
	ctx.f28.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// bl 0x82289dc8
	ctx.lr = 0x8216887C;
	sub_82289DC8(ctx, base);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f2,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r30,-7460(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// bl 0x821af030
	ctx.lr = 0x821688A8;
	sub_821AF030(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// bl 0x821af028
	ctx.lr = 0x821688CC;
	sub_821AF028(ctx, base);
	// addi r30,r31,880
	ctx.r30.s64 = ctx.r31.s64 + 880;
	// lfs f10,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f7,968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f5,972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f29
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f8,960(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// fmuls f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// stfs f6,964(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stfs f4,968(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// stfs f3,972(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82168908;
	sub_820804F8(ctx, base);
	// lfs f2,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f12,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 880, ctx.r7.u64);
	// std r6,888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 888, ctx.r6.u64);
	// bl 0x820a42e0
	ctx.lr = 0x82168950;
	sub_820A42E0(ctx, base);
	// ld r5,864(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 864);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// std r5,912(r31)
	PPC_STORE_U64(ctx.r31.u32 + 912, ctx.r5.u64);
	// ld r4,872(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 872);
	// std r4,920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 920, ctx.r4.u64);
	// bl 0x820a42e0
	ctx.lr = 0x82168968;
	sub_820A42E0(ctx, base);
	// lfs f5,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// lfs f8,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f12,f7,f2,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 - ctx.f1.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f11,f3,f8,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmsubs f13,f4,f5,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f6.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 904, ctx.r11.u64);
	// std r10,896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 896, ctx.r10.u64);
	// bl 0x82096f18
	ctx.lr = 0x821689C4;
	sub_82096F18(ctx, base);
	// lfs f10,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f7,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,432
	ctx.r11.s64 = ctx.r31.s64 + 432;
	// lfs f6,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f8,936(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stfs f5,928(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// stfs f3,932(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// ld r8,880(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 880);
	// std r8,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r8.u64);
	// ld r7,888(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 888);
	// std r7,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r7.u64);
	// ld r6,896(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 896);
	// std r6,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r6.u64);
	// ld r5,904(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 904);
	// std r5,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r5.u64);
	// ld r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 912);
	// std r4,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r4.u64);
	// ld r3,920(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 920);
	// std r3,472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 472, ctx.r3.u64);
	// ld r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 928);
	// std r11,480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 480, ctx.r11.u64);
	// ld r10,936(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 936);
	// std r10,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r10.u64);
	// ld r9,944(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 944);
	// std r9,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r9.u64);
	// ld r8,952(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// std r8,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r8.u64);
	// ld r7,960(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 960);
	// std r7,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r7.u64);
	// ld r6,968(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 968);
	// std r6,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r6.u64);
	// ld r5,976(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 976);
	// std r5,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r5.u64);
	// ld r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 984);
	// std r4,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r4.u64);
	// ld r3,992(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 992);
	// std r3,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r3.u64);
	// ld r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1000);
	// std r11,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r11.u64);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249974
	ctx.lr = 0x82168A88;
	sub_82249974(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168A9C"))) PPC_WEAK_FUNC(sub_82168A9C);
PPC_FUNC_IMPL(__imp__sub_82168A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168AA0"))) PPC_WEAK_FUNC(sub_82168AA0);
PPC_FUNC_IMPL(__imp__sub_82168AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82168AA8;
	sub_82248770(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82168AB4;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82168ABC;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82168AC8;
	sub_821837D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x82168AD4;
	sub_821A2548(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,11682
	ctx.r11.s64 = 765591552;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// ori r28,r11,43940
	ctx.r28.u64 = ctx.r11.u64 | 43940;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r26,5120
	ctx.r26.s64 = 5120;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r30,124(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// lwz r29,128(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// addi r3,r30,79
	ctx.r3.s64 = ctx.r30.s64 + 79;
	// addi r23,r29,15
	ctx.r23.s64 = ctx.r29.s64 + 15;
	// divwu r11,r3,r4
	ctx.r11.u32 = ctx.r3.u32 / ctx.r4.u32;
	// rlwinm r23,r23,0,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r22,r11,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r23,r22
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r22.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r11,r11,r26
	ctx.r11.u32 = ctx.r11.u32 / ctx.r26.u32;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// bl 0x8226b2c0
	ctx.lr = 0x82168B64;
	sub_8226B2C0(ctx, base);
	// stw r3,1552(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1552, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82168B80;
	sub_8226B3E0(ctx, base);
	// stw r3,1556(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1556, ctx.r3.u32);
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r27,r10,406
	ctx.r27.u64 = ctx.r10.u64 | 406;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82168BA4;
	sub_8226B3E0(ctx, base);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r6,832
	ctx.r6.s64 = 832;
	// stw r3,1560(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1560, ctx.r3.u32);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8226b2c0
	ctx.lr = 0x82168BFC;
	sub_8226B2C0(ctx, base);
	// stw r3,1564(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1564, ctx.r3.u32);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8226b3e0
	ctx.lr = 0x82168C1C;
	sub_8226B3E0(ctx, base);
	// stw r3,1568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1568, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8226b3e0
	ctx.lr = 0x82168C38;
	sub_8226B3E0(ctx, base);
	// mullw r5,r22,r23
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r23.s32);
	// stw r3,1572(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1572, ctx.r3.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// divwu r3,r4,r26
	ctx.r3.u32 = ctx.r4.u32 / ctx.r26.u32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x82168C94;
	sub_8226B2C0(ctx, base);
	// stw r3,1576(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1576, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82168CB0;
	sub_8226B3E0(ctx, base);
	// stw r3,1580(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1580, ctx.r3.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82168CCC;
	sub_8226B3E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1584(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1584, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,160(r25)
	PPC_STORE_U32(ctx.r25.u32 + 160, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82168CE0;
	sub_821837D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82168CE8"))) PPC_WEAK_FUNC(sub_82168CE8);
PPC_FUNC_IMPL(__imp__sub_82168CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82168CF0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82168e28
	if (ctx.cr6.eq) goto loc_82168E28;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-7460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aef68
	ctx.lr = 0x82168D14;
	sub_821AEF68(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82168e28
	if (ctx.cr6.eq) goto loc_82168E28;
	// addi r28,r31,988
	ctx.r28.s64 = ctx.r31.s64 + 988;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820804f8
	ctx.lr = 0x82168D2C;
	sub_820804F8(ctx, base);
	// addi r29,r31,-20
	ctx.r29.s64 = ctx.r31.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821686d0
	ctx.lr = 0x82168D38;
	sub_821686D0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82168da0
	if (ctx.cr6.lt) goto loc_82168DA0;
	// bne cr6,0x82168e28
	if (!ctx.cr6.eq) goto loc_82168E28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82167bd0
	ctx.lr = 0x82168D50;
	sub_82167BD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821663f0
	ctx.lr = 0x82168D58;
	sub_821663F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82167300
	ctx.lr = 0x82168D60;
	sub_82167300(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aef50
	ctx.lr = 0x82168D6C;
	sub_821AEF50(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x821af010
	ctx.lr = 0x82168D88;
	sub_821AF010(ctx, base);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// b 0x82168e14
	goto loc_82168E14;
loc_82168DA0:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x821af010
	ctx.lr = 0x82168DBC;
	sub_821AF010(ctx, base);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x821af018
	ctx.lr = 0x82168DD8;
	sub_821AF018(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aef50
	ctx.lr = 0x82168DE4;
	sub_821AEF50(ctx, base);
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x821af010
	ctx.lr = 0x82168E00;
	sub_821AF010(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
loc_82168E14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821af018
	ctx.lr = 0x82168E1C;
	sub_821AF018(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821afc00
	ctx.lr = 0x82168E28;
	sub_821AFC00(ctx, base);
loc_82168E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82168E30"))) PPC_WEAK_FUNC(sub_82168E30);
PPC_FUNC_IMPL(__imp__sub_82168E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82168eb0
	if (ctx.cr6.eq) goto loc_82168EB0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x82168E64;
	sub_821A2B00(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82168eb0
	if (ctx.cr6.eq) goto loc_82168EB0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82168ea8
	if (ctx.cr6.lt) goto loc_82168EA8;
	// bne cr6,0x82168eb0
	if (!ctx.cr6.eq) goto loc_82168EB0;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82168e9c
	if (ctx.cr6.eq) goto loc_82168E9C;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82167930
	ctx.lr = 0x82168E94;
	sub_82167930(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166660
	ctx.lr = 0x82168E9C;
	sub_82166660(ctx, base);
loc_82168E9C:
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82166ec8
	ctx.lr = 0x82168EA4;
	sub_82166EC8(ctx, base);
	// b 0x82168eb0
	goto loc_82168EB0;
loc_82168EA8:
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82167930
	ctx.lr = 0x82168EB0;
	sub_82167930(ctx, base);
loc_82168EB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168EC8"))) PPC_WEAK_FUNC(sub_82168EC8);
PPC_FUNC_IMPL(__imp__sub_82168EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// b 0x82168aa0
	sub_82168AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168ED4"))) PPC_WEAK_FUNC(sub_82168ED4);
PPC_FUNC_IMPL(__imp__sub_82168ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168ED8"))) PPC_WEAK_FUNC(sub_82168ED8);
PPC_FUNC_IMPL(__imp__sub_82168ED8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x82168F18;
	sub_821859A0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82185740
	ctx.lr = 0x82168F28;
	sub_82185740(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r9,-23536
	ctx.r6.s64 = ctx.r9.s64 + -23536;
	// addi r5,r8,-23544
	ctx.r5.s64 = ctx.r8.s64 + -23544;
	// addi r4,r7,-23552
	ctx.r4.s64 = ctx.r7.s64 + -23552;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// bl 0x821a9990
	ctx.lr = 0x82168F5C;
	sub_821A9990(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,11888(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11888);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,500
	ctx.r4.s64 = 500;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// li r3,-500
	ctx.r3.s64 = -500;
	// stw r30,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r30.u32);
	// stw r4,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r4.u32);
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stw r3,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r3.u32);
	// lfs f12,-23500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-23504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23504);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// lfs f10,-23508(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23508);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f11,96(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f10,100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f0,868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f0,872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// stfs f31,876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82169000;
	sub_820804F8(ctx, base);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x820804f8
	ctx.lr = 0x82169008;
	sub_820804F8(ctx, base);
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// bl 0x820804f8
	ctx.lr = 0x82169010;
	sub_820804F8(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stfs f31,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f0,-23532(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23512(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23512);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// lfs f12,-23516(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23516);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// lfs f11,-23520(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23520);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// lfs f10,-23524(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23524);
	ctx.f10.f64 = double(temp.f32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// lfs f9,-23528(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23528);
	ctx.f9.f64 = double(temp.f32);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stfs f10,152(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x821690A4;
	sub_821A2B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r3,-7484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7484);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-28984
	ctx.r4.s64 = ctx.r10.s64 + -28984;
	// bl 0x821adfc0
	ctx.lr = 0x821690BC;
	sub_821ADFC0(ctx, base);
	// lwsync 
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,14520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14520, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_821690E8"))) PPC_WEAK_FUNC(sub_821690E8);
PPC_FUNC_IMPL(__imp__sub_821690E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821690F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,160(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-7480(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae208
	ctx.lr = 0x82169114;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x821ae208
	ctx.lr = 0x82169120;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x821ae380
	ctx.lr = 0x8216912C;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x821ae380
	ctx.lr = 0x82169138;
	sub_821AE380(ctx, base);
	// addi r28,r30,700
	ctx.r28.s64 = ctx.r30.s64 + 700;
	// li r29,8
	ctx.r29.s64 = 8;
loc_82169140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x821ae208
	ctx.lr = 0x8216914C;
	sub_821AE208(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82169140
	if (!ctx.cr0.eq) goto loc_82169140;
	// addi r28,r30,732
	ctx.r28.s64 = ctx.r30.s64 + 732;
	// li r29,8
	ctx.r29.s64 = 8;
loc_8216915C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x821ae208
	ctx.lr = 0x82169168;
	sub_821AE208(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8216915c
	if (!ctx.cr0.eq) goto loc_8216915C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// bl 0x821ae380
	ctx.lr = 0x8216917C;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// bl 0x821ae380
	ctx.lr = 0x82169188;
	sub_821AE380(ctx, base);
	// addi r29,r30,780
	ctx.r29.s64 = ctx.r30.s64 + 780;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82169190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x821ae208
	ctx.lr = 0x8216919C;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x821ae208
	ctx.lr = 0x821691A8;
	sub_821AE208(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82169190
	if (!ctx.cr0.eq) goto loc_82169190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,792(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// bl 0x821ae380
	ctx.lr = 0x821691BC;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// bl 0x821ae380
	ctx.lr = 0x821691C8;
	sub_821AE380(ctx, base);
	// addi r28,r30,796
	ctx.r28.s64 = ctx.r30.s64 + 796;
	// li r29,2
	ctx.r29.s64 = 2;
loc_821691D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x821ae208
	ctx.lr = 0x821691DC;
	sub_821AE208(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821691d0
	if (!ctx.cr0.eq) goto loc_821691D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,808(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// bl 0x821ae380
	ctx.lr = 0x821691F0;
	sub_821AE380(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821691F8"))) PPC_WEAK_FUNC(sub_821691F8);
PPC_FUNC_IMPL(__imp__sub_821691F8) {
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
	// bne cr6,0x8216922c
	if (!ctx.cr6.eq) goto loc_8216922C;
loc_82169214:
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
loc_8216922C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169248
	if (ctx.cr6.eq) goto loc_82169248;
	// bl 0x8223a9f8
	ctx.lr = 0x82169240;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169270
	if (!ctx.cr6.eq) goto loc_82169270;
loc_82169248:
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82169270
	if (ctx.cr6.lt) goto loc_82169270;
	// bne cr6,0x82169214
	if (!ctx.cr6.eq) goto loc_82169214;
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
loc_82169270:
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

__attribute__((alias("__imp__sub_82169288"))) PPC_WEAK_FUNC(sub_82169288);
PPC_FUNC_IMPL(__imp__sub_82169288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82169290;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-23464
	ctx.r8.s64 = ctx.r11.s64 + -23464;
	// addi r7,r10,-23472
	ctx.r7.s64 = ctx.r10.s64 + -23472;
	// addi r6,r9,-23480
	ctx.r6.s64 = ctx.r9.s64 + -23480;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// lwsync 
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14524(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14524, ctx.r11.u32);
	// bl 0x821690e8
	ctx.lr = 0x821692D8;
	sub_821690E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x821692E0;
	sub_821857F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x821692E8;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82162518
	ctx.lr = 0x821692F0;
	sub_82162518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821692F8"))) PPC_WEAK_FUNC(sub_821692F8);
PPC_FUNC_IMPL(__imp__sub_821692F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x821695e0
	sub_821695E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169300"))) PPC_WEAK_FUNC(sub_82169300);
PPC_FUNC_IMPL(__imp__sub_82169300) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x821695e0
	sub_821695E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169308"))) PPC_WEAK_FUNC(sub_82169308);
PPC_FUNC_IMPL(__imp__sub_82169308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// b 0x821a2c40
	sub_821A2C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169318"))) PPC_WEAK_FUNC(sub_82169318);
PPC_FUNC_IMPL(__imp__sub_82169318) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821691f8
	ctx.lr = 0x82169340;
	sub_821691F8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82169350
	if (ctx.cr6.lt) goto loc_82169350;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82169380
	goto loc_82169380;
loc_82169350:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8216937c
	if (ctx.cr6.lt) goto loc_8216937C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x8216937c
	if (!ctx.cr6.lt) goto loc_8216937C;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_8216937C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82169380:
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

__attribute__((alias("__imp__sub_8216939C"))) PPC_WEAK_FUNC(sub_8216939C);
PPC_FUNC_IMPL(__imp__sub_8216939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821693A0"))) PPC_WEAK_FUNC(sub_821693A0);
PPC_FUNC_IMPL(__imp__sub_821693A0) {
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
	// bl 0x821691f8
	ctx.lr = 0x821693C0;
	sub_821691F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x821693d4
	if (ctx.cr6.lt) goto loc_821693D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821693ec
	goto loc_821693EC;
loc_821693D4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f31,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
loc_821693EC:
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

