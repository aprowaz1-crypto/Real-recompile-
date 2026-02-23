#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822283B8"))) PPC_WEAK_FUNC(sub_822283B8);
PPC_FUNC_IMPL(__imp__sub_822283B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82228248
	sub_82228248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822283BC"))) PPC_WEAK_FUNC(sub_822283BC);
PPC_FUNC_IMPL(__imp__sub_822283BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822283C0"))) PPC_WEAK_FUNC(sub_822283C0);
PPC_FUNC_IMPL(__imp__sub_822283C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x822283e8
	if (ctx.cr6.lt) goto loc_822283E8;
	// addi r10,r4,6
	ctx.r10.s64 = ctx.r4.s64 + 6;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// stw r6,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r6.u32);
loc_822283E8:
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822283F8"))) PPC_WEAK_FUNC(sub_822283F8);
PPC_FUNC_IMPL(__imp__sub_822283F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x82228420
	if (ctx.cr6.lt) goto loc_82228420;
	// addi r10,r4,6
	ctx.r10.s64 = ctx.r4.s64 + 6;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// stw r6,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r6.u32);
loc_82228420:
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222843C"))) PPC_WEAK_FUNC(sub_8222843C);
PPC_FUNC_IMPL(__imp__sub_8222843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228440"))) PPC_WEAK_FUNC(sub_82228440);
PPC_FUNC_IMPL(__imp__sub_82228440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82228448;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4796);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x822284cc
	if (!ctx.cr6.lt) goto loc_822284CC;
	// lwz r11,4792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r29,r11,26
	ctx.r29.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r29,240
	ctx.r11.s64 = ctx.r29.s64 + 240;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stwx r26,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u32);
	// bl 0x822aa648
	ctx.lr = 0x82228498;
	sub_822AA648(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,15
	ctx.r6.s64 = 15;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4804
	ctx.r3.s64 = ctx.r11.s64 + 4804;
	// bl 0x8218a1d8
	ctx.lr = 0x822284BC;
	sub_8218A1D8(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// lwz r11,4796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4796, ctx.r8.u32);
loc_822284CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822284E0"))) PPC_WEAK_FUNC(sub_822284E0);
PPC_FUNC_IMPL(__imp__sub_822284E0) {
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
	// lwz r11,4792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x822aa648
	ctx.lr = 0x82228520;
	sub_822AA648(ctx, base);
	// lwz r10,4792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// lwz r11,4796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// stw r6,4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4792, ctx.r6.u32);
	// beq cr6,0x82228544
	if (ctx.cr6.eq) goto loc_82228544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4796, ctx.r11.u32);
loc_82228544:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82228558"))) PPC_WEAK_FUNC(sub_82228558);
PPC_FUNC_IMPL(__imp__sub_82228558) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
loc_82228570:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82228590
	if (ctx.cr6.lt) goto loc_82228590;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82228590
	if (ctx.cr6.lt) goto loc_82228590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82228590:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2308
	ctx.r11.s64 = ctx.r11.s64 + 2308;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82228570
	if (ctx.cr6.lt) goto loc_82228570;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822285A4"))) PPC_WEAK_FUNC(sub_822285A4);
PPC_FUNC_IMPL(__imp__sub_822285A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822285A8"))) PPC_WEAK_FUNC(sub_822285A8);
PPC_FUNC_IMPL(__imp__sub_822285A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822285B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82230ed8
	ctx.lr = 0x822285C4;
	sub_82230ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8222863c
	if (!ctx.cr6.gt) goto loc_8222863C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8222863c
	if (ctx.cr6.gt) goto loc_8222863C;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222863c
	if (!ctx.cr6.gt) goto loc_8222863C;
	// addi r31,r29,160
	ctx.r31.s64 = ctx.r29.s64 + 160;
loc_822285E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82228628
	if (ctx.cr6.lt) goto loc_82228628;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x82228628
	if (ctx.cr6.lt) goto loc_82228628;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82228628
	if (ctx.cr6.lt) goto loc_82228628;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x82228628
	if (ctx.cr6.lt) goto loc_82228628;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82228628
	if (ctx.cr6.eq) goto loc_82228628;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82230d50
	ctx.lr = 0x82228620;
	sub_82230D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82228648
	if (!ctx.cr6.eq) goto loc_82228648;
loc_82228628:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2308
	ctx.r31.s64 = ctx.r31.s64 + 2308;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822285e8
	if (ctx.cr6.lt) goto loc_822285E8;
loc_8222863C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82228648:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82228654"))) PPC_WEAK_FUNC(sub_82228654);
PPC_FUNC_IMPL(__imp__sub_82228654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228658"))) PPC_WEAK_FUNC(sub_82228658);
PPC_FUNC_IMPL(__imp__sub_82228658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x821847a8
	ctx.lr = 0x82228688;
	sub_821847A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82230ed8
	ctx.lr = 0x82228690;
	sub_82230ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822286a4
	if (!ctx.cr6.gt) goto loc_822286A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// ble cr6,0x822286a8
	if (!ctx.cr6.gt) goto loc_822286A8;
loc_822286A4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_822286A8:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822286C4"))) PPC_WEAK_FUNC(sub_822286C4);
PPC_FUNC_IMPL(__imp__sub_822286C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822286C8"))) PPC_WEAK_FUNC(sub_822286C8);
PPC_FUNC_IMPL(__imp__sub_822286C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822286D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1852
	ctx.r5.s64 = 1852;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x821847a8
	ctx.lr = 0x822286F4;
	sub_821847A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227dc0
	ctx.lr = 0x82228700;
	sub_82227DC0(ctx, base);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227ad8
	ctx.lr = 0x8222870C;
	sub_82227AD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227b48
	ctx.lr = 0x82228718;
	sub_82227B48(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82228728"))) PPC_WEAK_FUNC(sub_82228728);
PPC_FUNC_IMPL(__imp__sub_82228728) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,19
	ctx.r10.s64 = 19;
	// bne cr6,0x82228740
	if (!ctx.cr6.eq) goto loc_82228740;
	// li r10,17
	ctx.r10.s64 = 17;
loc_82228740:
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228748"))) PPC_WEAK_FUNC(sub_82228748);
PPC_FUNC_IMPL(__imp__sub_82228748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82228750;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82228804
	if (ctx.cr6.lt) goto loc_82228804;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82228804
	if (ctx.cr6.lt) goto loc_82228804;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r27,164(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82228800
	if (ctx.cr6.eq) goto loc_82228800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5398
	ctx.lr = 0x82228794;
	sub_820E5398(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822287cc
	if (!ctx.cr6.eq) goto loc_822287CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e53c8
	ctx.lr = 0x822287AC;
	sub_820E53C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228800
	if (ctx.cr6.eq) goto loc_82228800;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82222770
	ctx.lr = 0x822287C4;
	sub_82222770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228800
	if (ctx.cr6.eq) goto loc_82228800;
loc_822287CC:
	// lwz r29,188(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82228800
	if (!ctx.cr6.eq) goto loc_82228800;
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82228800
	if (ctx.cr6.eq) goto loc_82228800;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82222770
	ctx.lr = 0x822287F4;
	sub_82222770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228800
	if (ctx.cr6.eq) goto loc_82228800;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82228800:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82228804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222880C"))) PPC_WEAK_FUNC(sub_8222880C);
PPC_FUNC_IMPL(__imp__sub_8222880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228810"))) PPC_WEAK_FUNC(sub_82228810);
PPC_FUNC_IMPL(__imp__sub_82228810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82228870
	if (ctx.cr6.lt) goto loc_82228870;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82228870
	if (ctx.cr6.lt) goto loc_82228870;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r3,-744(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// bl 0x82221230
	ctx.lr = 0x8222885C;
	sub_82221230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228870
	if (ctx.cr6.eq) goto loc_82228870;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228748
	ctx.lr = 0x82228870;
	sub_82228748(ctx, base);
loc_82228870:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228888"))) PPC_WEAK_FUNC(sub_82228888);
PPC_FUNC_IMPL(__imp__sub_82228888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82228890;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8222891c
	if (ctx.cr6.lt) goto loc_8222891C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8222891c
	if (ctx.cr6.lt) goto loc_8222891C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222891c
	if (ctx.cr6.eq) goto loc_8222891C;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82228a80
	ctx.lr = 0x822288D4;
	sub_82228A80(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822288f0
	if (ctx.cr6.lt) goto loc_822288F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822288f0
	if (ctx.cr6.lt) goto loc_822288F0;
	// addi r5,r31,172
	ctx.r5.s64 = ctx.r31.s64 + 172;
	// b 0x822288f8
	goto loc_822288F8;
loc_822288F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,4393
	ctx.r5.s64 = ctx.r11.s64 + 4393;
loc_822288F8:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8218a128
	ctx.lr = 0x82228904;
	sub_8218A128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228018
	ctx.lr = 0x82228910;
	sub_82228018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8222891C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82228924"))) PPC_WEAK_FUNC(sub_82228924);
PPC_FUNC_IMPL(__imp__sub_82228924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228928"))) PPC_WEAK_FUNC(sub_82228928);
PPC_FUNC_IMPL(__imp__sub_82228928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82228930;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822289bc
	if (ctx.cr6.lt) goto loc_822289BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822289bc
	if (ctx.cr6.lt) goto loc_822289BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822289bc
	if (ctx.cr6.eq) goto loc_822289BC;
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82228a80
	ctx.lr = 0x82228974;
	sub_82228A80(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82228990
	if (ctx.cr6.lt) goto loc_82228990;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82228990
	if (ctx.cr6.lt) goto loc_82228990;
	// addi r5,r31,172
	ctx.r5.s64 = ctx.r31.s64 + 172;
	// b 0x82228998
	goto loc_82228998;
loc_82228990:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,4393
	ctx.r5.s64 = ctx.r11.s64 + 4393;
loc_82228998:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8218a128
	ctx.lr = 0x822289A4;
	sub_8218A128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228018
	ctx.lr = 0x822289B0;
	sub_82228018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822289BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822289C4"))) PPC_WEAK_FUNC(sub_822289C4);
PPC_FUNC_IMPL(__imp__sub_822289C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822289C8"))) PPC_WEAK_FUNC(sub_822289C8);
PPC_FUNC_IMPL(__imp__sub_822289C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822289D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// addi r9,r10,-2176
	ctx.r9.s64 = ctx.r10.s64 + -2176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,456
	ctx.r31.s64 = ctx.r11.s64 + 456;
loc_822289F4:
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x8214a400
	ctx.lr = 0x822289FC;
	sub_8214A400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164060
	ctx.lr = 0x82228A04;
	sub_82164060(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2308
	ctx.r31.s64 = ctx.r31.s64 + 2308;
	// bge 0x822289f4
	if (!ctx.cr0.lt) goto loc_822289F4;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228248
	ctx.lr = 0x82228A1C;
	sub_82228248(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82228A28"))) PPC_WEAK_FUNC(sub_82228A28);
PPC_FUNC_IMPL(__imp__sub_82228A28) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x82228A48;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82228A54;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x822aa648
	ctx.lr = 0x82228A60;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82228A80"))) PPC_WEAK_FUNC(sub_82228A80);
PPC_FUNC_IMPL(__imp__sub_82228A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228AAC"))) PPC_WEAK_FUNC(sub_82228AAC);
PPC_FUNC_IMPL(__imp__sub_82228AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228AB0"))) PPC_WEAK_FUNC(sub_82228AB0);
PPC_FUNC_IMPL(__imp__sub_82228AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228ADC"))) PPC_WEAK_FUNC(sub_82228ADC);
PPC_FUNC_IMPL(__imp__sub_82228ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228AE0"))) PPC_WEAK_FUNC(sub_82228AE0);
PPC_FUNC_IMPL(__imp__sub_82228AE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228AFC"))) PPC_WEAK_FUNC(sub_82228AFC);
PPC_FUNC_IMPL(__imp__sub_82228AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228B00"))) PPC_WEAK_FUNC(sub_82228B00);
PPC_FUNC_IMPL(__imp__sub_82228B00) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82228B2C;
	sub_822AA648(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x82228B38;
	sub_822AA648(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x82228B44;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82228B68"))) PPC_WEAK_FUNC(sub_82228B68);
PPC_FUNC_IMPL(__imp__sub_82228B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228B80"))) PPC_WEAK_FUNC(sub_82228B80);
PPC_FUNC_IMPL(__imp__sub_82228B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x82228BA8;
	sub_822AA648(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x82228BB8;
	sub_8218A128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228BD0"))) PPC_WEAK_FUNC(sub_82228BD0);
PPC_FUNC_IMPL(__imp__sub_82228BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228BD8"))) PPC_WEAK_FUNC(sub_82228BD8);
PPC_FUNC_IMPL(__imp__sub_82228BD8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228BE0"))) PPC_WEAK_FUNC(sub_82228BE0);
PPC_FUNC_IMPL(__imp__sub_82228BE0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x82228C04;
	sub_822AA648(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82228C24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82228c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228C24;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x822aa648
	ctx.lr = 0x82228C38;
	sub_822AA648(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f13,-2156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228C84"))) PPC_WEAK_FUNC(sub_82228C84);
PPC_FUNC_IMPL(__imp__sub_82228C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228C88"))) PPC_WEAK_FUNC(sub_82228C88);
PPC_FUNC_IMPL(__imp__sub_82228C88) {
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
	// bl 0x82228be0
	ctx.lr = 0x82228CA0;
	sub_82228BE0(ctx, base);
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

__attribute__((alias("__imp__sub_82228CB8"))) PPC_WEAK_FUNC(sub_82228CB8);
PPC_FUNC_IMPL(__imp__sub_82228CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228CC8"))) PPC_WEAK_FUNC(sub_82228CC8);
PPC_FUNC_IMPL(__imp__sub_82228CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82228CDC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82228cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228CDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228CE8"))) PPC_WEAK_FUNC(sub_82228CE8);
PPC_FUNC_IMPL(__imp__sub_82228CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,-14444
	ctx.r9.s64 = ctx.r11.s64 + -14444;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82228D08:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82228d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228D08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228D14"))) PPC_WEAK_FUNC(sub_82228D14);
PPC_FUNC_IMPL(__imp__sub_82228D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228D18"))) PPC_WEAK_FUNC(sub_82228D18);
PPC_FUNC_IMPL(__imp__sub_82228D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82228D20;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228d70
	if (ctx.cr6.eq) goto loc_82228D70;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x82228d70
	if (ctx.cr6.eq) goto loc_82228D70;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
loc_82228D48:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228d5c
	if (ctx.cr6.eq) goto loc_82228D5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82228D5C;
	sub_82183E40(ctx, base);
loc_82228D5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,8(r31)
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82228d48
	if (ctx.cr6.lt) goto loc_82228D48;
loc_82228D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82228D78"))) PPC_WEAK_FUNC(sub_82228D78);
PPC_FUNC_IMPL(__imp__sub_82228D78) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82228dc4
	if (!ctx.cr6.lt) goto loc_82228DC4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228dc4
	if (ctx.cr6.eq) goto loc_82228DC4;
	// li r5,1100
	ctx.r5.s64 = 1100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x82228DC0;
	sub_821847A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82228DC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228DD4"))) PPC_WEAK_FUNC(sub_82228DD4);
PPC_FUNC_IMPL(__imp__sub_82228DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228DD8"))) PPC_WEAK_FUNC(sub_82228DD8);
PPC_FUNC_IMPL(__imp__sub_82228DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82228df4
	if (!ctx.cr6.lt) goto loc_82228DF4;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_82228DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228DFC"))) PPC_WEAK_FUNC(sub_82228DFC);
PPC_FUNC_IMPL(__imp__sub_82228DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228E00"))) PPC_WEAK_FUNC(sub_82228E00);
PPC_FUNC_IMPL(__imp__sub_82228E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82228e2c
	if (ctx.cr6.lt) goto loc_82228E2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82228E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228E34"))) PPC_WEAK_FUNC(sub_82228E34);
PPC_FUNC_IMPL(__imp__sub_82228E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228E38"))) PPC_WEAK_FUNC(sub_82228E38);
PPC_FUNC_IMPL(__imp__sub_82228E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82228E40;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x82228E48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82228e60
	if (ctx.cr6.eq) goto loc_82228E60;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x82228E5C;
	sub_82183448(ctx, base);
	// b 0x82228e68
	goto loc_82228E68;
loc_82228E60:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82228E68;
	sub_821845A0(ctx, base);
loc_82228E68:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228eac
	if (ctx.cr6.eq) goto loc_82228EAC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_82228E88:
	// bl 0x82182e90
	ctx.lr = 0x82228E8C;
	sub_82182E90(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r29,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// bne 0x82228e88
	if (!ctx.cr0.eq) goto loc_82228E88;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r28,-732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -732, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82228EAC:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -732, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82228EC0"))) PPC_WEAK_FUNC(sub_82228EC0);
PPC_FUNC_IMPL(__imp__sub_82228EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r31,-732(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -732);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82228ef8
	if (ctx.cr6.eq) goto loc_82228EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228d18
	ctx.lr = 0x82228EEC;
	sub_82228D18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82228EF8;
	sub_82183E40(ctx, base);
loc_82228EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-732(r30)
	PPC_STORE_U32(ctx.r30.u32 + -732, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228F1C"))) PPC_WEAK_FUNC(sub_82228F1C);
PPC_FUNC_IMPL(__imp__sub_82228F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228F20"))) PPC_WEAK_FUNC(sub_82228F20);
PPC_FUNC_IMPL(__imp__sub_82228F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82228F28;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82228fbc
	if (ctx.cr6.eq) goto loc_82228FBC;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r24,8
	ctx.r24.s64 = 8;
loc_82228F50:
	// bl 0x82183078
	ctx.lr = 0x82228F54;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821837d0
	ctx.lr = 0x82228F60;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82228F64;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82228f7c
	if (ctx.cr6.eq) goto loc_82228F7C;
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82183448
	ctx.lr = 0x82228F78;
	sub_82183448(ctx, base);
	// b 0x82228f84
	goto loc_82228F84;
loc_82228F7C:
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x821845a0
	ctx.lr = 0x82228F84;
	sub_821845A0(ctx, base);
loc_82228F84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82228F90;
	sub_821837D0(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82228fa4
	if (ctx.cr6.eq) goto loc_82228FA4;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x82228fa8
	goto loc_82228FA8;
loc_82228FA4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82228FA8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82228f50
	if (!ctx.cr0.eq) goto loc_82228F50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82228fc4
	if (ctx.cr6.eq) goto loc_82228FC4;
loc_82228FBC:
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_82228FC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82228FD0"))) PPC_WEAK_FUNC(sub_82228FD0);
PPC_FUNC_IMPL(__imp__sub_82228FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82228FD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229030
	if (!ctx.cr6.eq) goto loc_82229030;
	// bl 0x82183078
	ctx.lr = 0x82228FFC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82229008;
	sub_821837D0(ctx, base);
	// bl 0x82228e38
	ctx.lr = 0x8222900C;
	sub_82228E38(ctx, base);
	// lwz r3,-732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229028
	if (ctx.cr6.eq) goto loc_82229028;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82228f20
	ctx.lr = 0x82229024;
	sub_82228F20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82229028:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82229030;
	sub_821837D0(ctx, base);
loc_82229030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222903C"))) PPC_WEAK_FUNC(sub_8222903C);
PPC_FUNC_IMPL(__imp__sub_8222903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229040"))) PPC_WEAK_FUNC(sub_82229040);
PPC_FUNC_IMPL(__imp__sub_82229040) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229074"))) PPC_WEAK_FUNC(sub_82229074);
PPC_FUNC_IMPL(__imp__sub_82229074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229078"))) PPC_WEAK_FUNC(sub_82229078);
PPC_FUNC_IMPL(__imp__sub_82229078) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229080"))) PPC_WEAK_FUNC(sub_82229080);
PPC_FUNC_IMPL(__imp__sub_82229080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229088"))) PPC_WEAK_FUNC(sub_82229088);
PPC_FUNC_IMPL(__imp__sub_82229088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82229090;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,135
	ctx.r10.s64 = 135;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// stw r27,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r27.u32);
	// bl 0x8215bec8
	ctx.lr = 0x822290CC;
	sub_8215BEC8(ctx, base);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x82232e08
	ctx.lr = 0x822290D8;
	sub_82232E08(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,1092(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822291e0
	if (ctx.cr6.eq) goto loc_822291E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232558
	ctx.lr = 0x822290F4;
	sub_82232558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231bf0
	ctx.lr = 0x822290FC;
	sub_82231BF0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822291dc
	if (ctx.cr6.eq) goto loc_822291DC;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r23,3
	ctx.r23.s64 = 3;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
loc_82229128:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82229154
	if (ctx.cr6.eq) goto loc_82229154;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82229150
	if (ctx.cr6.eq) goto loc_82229150;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82229154
	if (!ctx.cr6.eq) goto loc_82229154;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// b 0x82229154
	goto loc_82229154;
loc_82229150:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_82229154:
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82229194
	if (ctx.cr6.lt) goto loc_82229194;
	// beq cr6,0x8222917c
	if (ctx.cr6.eq) goto loc_8222917C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82229198
	if (!ctx.cr6.lt) goto loc_82229198;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x82229198
	goto loc_82229198;
loc_8222917C:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82229198
	if (!ctx.cr6.eq) goto loc_82229198;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x82229198
	goto loc_82229198;
loc_82229194:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82229198:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82225508
	ctx.lr = 0x822291A4;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822291c8
	if (ctx.cr6.eq) goto loc_822291C8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-740(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -740);
	// bl 0x82225e70
	ctx.lr = 0x822291B8;
	sub_82225E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822291c8
	if (ctx.cr6.eq) goto loc_822291C8;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_822291C8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82229128
	if (ctx.cr6.lt) goto loc_82229128;
loc_822291DC:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_822291E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_822291E8"))) PPC_WEAK_FUNC(sub_822291E8);
PPC_FUNC_IMPL(__imp__sub_822291E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82227aa0
	ctx.lr = 0x82229208;
	sub_82227AA0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229234"))) PPC_WEAK_FUNC(sub_82229234);
PPC_FUNC_IMPL(__imp__sub_82229234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229238"))) PPC_WEAK_FUNC(sub_82229238);
PPC_FUNC_IMPL(__imp__sub_82229238) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x82229258;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822aa648
	ctx.lr = 0x82229264;
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
}

__attribute__((alias("__imp__sub_82229278"))) PPC_WEAK_FUNC(sub_82229278);
PPC_FUNC_IMPL(__imp__sub_82229278) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229288"))) PPC_WEAK_FUNC(sub_82229288);
PPC_FUNC_IMPL(__imp__sub_82229288) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229298"))) PPC_WEAK_FUNC(sub_82229298);
PPC_FUNC_IMPL(__imp__sub_82229298) {
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
	// addi r10,r11,-24004
	ctx.r10.s64 = ctx.r11.s64 + -24004;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x822292C4;
	sub_822AA648(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x822292D0;
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

__attribute__((alias("__imp__sub_822292E8"))) PPC_WEAK_FUNC(sub_822292E8);
PPC_FUNC_IMPL(__imp__sub_822292E8) {
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
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82354688
	ctx.lr = 0x82229320;
	sub_82354688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229358
	if (ctx.cr6.eq) goto loc_82229358;
	// bl 0x823589b0
	ctx.lr = 0x82229330;
	sub_823589B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229340
	if (ctx.cr6.eq) goto loc_82229340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82229340;
	sub_82183E40(ctx, base);
loc_82229340:
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
	ctx.lr = 0x82229358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82229358:
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

__attribute__((alias("__imp__sub_8222936C"))) PPC_WEAK_FUNC(sub_8222936C);
PPC_FUNC_IMPL(__imp__sub_8222936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229370"))) PPC_WEAK_FUNC(sub_82229370);
PPC_FUNC_IMPL(__imp__sub_82229370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82229378;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x8222938C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82229398;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8222939C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822293b4
	if (ctx.cr6.eq) goto loc_822293B4;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82183448
	ctx.lr = 0x822293B0;
	sub_82183448(ctx, base);
	// b 0x822293bc
	goto loc_822293BC;
loc_822293B4:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x822293BC;
	sub_821845A0(ctx, base);
loc_822293BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229420
	if (ctx.cr6.eq) goto loc_82229420;
	// bl 0x82358610
	ctx.lr = 0x822293C8;
	sub_82358610(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229420
	if (ctx.cr6.eq) goto loc_82229420;
	// bl 0x82183850
	ctx.lr = 0x822293D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x822293f0
	if (ctx.cr6.eq) goto loc_822293F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x822293EC;
	sub_82183448(ctx, base);
	// b 0x822293fc
	goto loc_822293FC;
loc_822293F0:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822293FC;
	sub_821845A0(ctx, base);
loc_822293FC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82229434
	if (!ctx.cr6.eq) goto loc_82229434;
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
	ctx.lr = 0x82229420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82229420:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82229428;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82229434:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82358fa0
	ctx.lr = 0x82229444;
	sub_82358FA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229484
	if (!ctx.cr6.eq) goto loc_82229484;
loc_8222944C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82229458;
	sub_82183E40(ctx, base);
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
	ctx.lr = 0x82229470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82229478;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82229484:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82354718
	ctx.lr = 0x822294B0;
	sub_82354718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222944c
	if (ctx.cr6.eq) goto loc_8222944C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822294C0;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822294CC"))) PPC_WEAK_FUNC(sub_822294CC);
PPC_FUNC_IMPL(__imp__sub_822294CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822294D0"))) PPC_WEAK_FUNC(sub_822294D0);
PPC_FUNC_IMPL(__imp__sub_822294D0) {
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
	// bl 0x82354848
	ctx.lr = 0x822294E0;
	sub_82354848(ctx, base);
	// lis r11,272
	ctx.r11.s64 = 17825792;
	// ori r11,r11,78
	ctx.r11.u64 = ctx.r11.u64 | 78;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822294f4
	if (ctx.cr6.lt) goto loc_822294F4;
	// bl 0x82354848
	ctx.lr = 0x822294F4;
	sub_82354848(ctx, base);
loc_822294F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229504"))) PPC_WEAK_FUNC(sub_82229504);
PPC_FUNC_IMPL(__imp__sub_82229504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229508"))) PPC_WEAK_FUNC(sub_82229508);
PPC_FUNC_IMPL(__imp__sub_82229508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229524"))) PPC_WEAK_FUNC(sub_82229524);
PPC_FUNC_IMPL(__imp__sub_82229524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229528"))) PPC_WEAK_FUNC(sub_82229528);
PPC_FUNC_IMPL(__imp__sub_82229528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222954c
	if (ctx.cr6.eq) goto loc_8222954C;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8222954C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229554"))) PPC_WEAK_FUNC(sub_82229554);
PPC_FUNC_IMPL(__imp__sub_82229554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229558"))) PPC_WEAK_FUNC(sub_82229558);
PPC_FUNC_IMPL(__imp__sub_82229558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_82229590:
	// lwzu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82229590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229590;
	// addi r9,r11,190
	ctx.r9.s64 = ctx.r11.s64 + 190;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r3,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822295C0"))) PPC_WEAK_FUNC(sub_822295C0);
PPC_FUNC_IMPL(__imp__sub_822295C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,190
	ctx.r10.s64 = ctx.r10.s64 + 190;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822295FC"))) PPC_WEAK_FUNC(sub_822295FC);
PPC_FUNC_IMPL(__imp__sub_822295FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229600"))) PPC_WEAK_FUNC(sub_82229600);
PPC_FUNC_IMPL(__imp__sub_82229600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,190
	ctx.r10.s64 = ctx.r10.s64 + 190;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222963C"))) PPC_WEAK_FUNC(sub_8222963C);
PPC_FUNC_IMPL(__imp__sub_8222963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229640"))) PPC_WEAK_FUNC(sub_82229640);
PPC_FUNC_IMPL(__imp__sub_82229640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,190
	ctx.r10.s64 = ctx.r10.s64 + 190;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229674"))) PPC_WEAK_FUNC(sub_82229674);
PPC_FUNC_IMPL(__imp__sub_82229674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229678"))) PPC_WEAK_FUNC(sub_82229678);
PPC_FUNC_IMPL(__imp__sub_82229678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,195
	ctx.r10.s64 = ctx.r10.s64 + 195;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822296A4"))) PPC_WEAK_FUNC(sub_822296A4);
PPC_FUNC_IMPL(__imp__sub_822296A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822296A8"))) PPC_WEAK_FUNC(sub_822296A8);
PPC_FUNC_IMPL(__imp__sub_822296A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,195
	ctx.r10.s64 = ctx.r10.s64 + 195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822296D0"))) PPC_WEAK_FUNC(sub_822296D0);
PPC_FUNC_IMPL(__imp__sub_822296D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822296EC"))) PPC_WEAK_FUNC(sub_822296EC);
PPC_FUNC_IMPL(__imp__sub_822296EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822296F0"))) PPC_WEAK_FUNC(sub_822296F0);
PPC_FUNC_IMPL(__imp__sub_822296F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222970C"))) PPC_WEAK_FUNC(sub_8222970C);
PPC_FUNC_IMPL(__imp__sub_8222970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229710"))) PPC_WEAK_FUNC(sub_82229710);
PPC_FUNC_IMPL(__imp__sub_82229710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229728
	if (ctx.cr6.eq) goto loc_82229728;
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// blr 
	return;
loc_82229728:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229730"))) PPC_WEAK_FUNC(sub_82229730);
PPC_FUNC_IMPL(__imp__sub_82229730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229748"))) PPC_WEAK_FUNC(sub_82229748);
PPC_FUNC_IMPL(__imp__sub_82229748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82229750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-728(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822297b8
	if (ctx.cr6.eq) goto loc_822297B8;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8222978C:
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
	ctx.lr = 0x822297A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// and r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 & ctx.r29.u64;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x8222978c
	if (!ctx.cr0.eq) goto loc_8222978C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822297B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822297C0"))) PPC_WEAK_FUNC(sub_822297C0);
PPC_FUNC_IMPL(__imp__sub_822297C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822297f0
	if (ctx.cr6.eq) goto loc_822297F0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822297f0
	if (ctx.cr6.lt) goto loc_822297F0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x822297f0
	if (!ctx.cr6.lt) goto loc_822297F0;
	// addi r10,r3,58
	ctx.r10.s64 = ctx.r3.s64 + 58;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
loc_822297F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822297F8"))) PPC_WEAK_FUNC(sub_822297F8);
PPC_FUNC_IMPL(__imp__sub_822297F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r3,58
	ctx.r10.s64 = ctx.r3.s64 + 58;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229828"))) PPC_WEAK_FUNC(sub_82229828);
PPC_FUNC_IMPL(__imp__sub_82229828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,-728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229860
	if (ctx.cr6.eq) goto loc_82229860;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82229860
	if (ctx.cr6.lt) goto loc_82229860;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x82229860
	if (!ctx.cr6.lt) goto loc_82229860;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// blr 
	return;
loc_82229860:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229868"))) PPC_WEAK_FUNC(sub_82229868);
PPC_FUNC_IMPL(__imp__sub_82229868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229884"))) PPC_WEAK_FUNC(sub_82229884);
PPC_FUNC_IMPL(__imp__sub_82229884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229888"))) PPC_WEAK_FUNC(sub_82229888);
PPC_FUNC_IMPL(__imp__sub_82229888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,456
	ctx.r3.s64 = ctx.r11.s64 + 456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822298A4"))) PPC_WEAK_FUNC(sub_822298A4);
PPC_FUNC_IMPL(__imp__sub_822298A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822298A8"))) PPC_WEAK_FUNC(sub_822298A8);
PPC_FUNC_IMPL(__imp__sub_822298A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822298C4"))) PPC_WEAK_FUNC(sub_822298C4);
PPC_FUNC_IMPL(__imp__sub_822298C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822298C8"))) PPC_WEAK_FUNC(sub_822298C8);
PPC_FUNC_IMPL(__imp__sub_822298C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822298E4"))) PPC_WEAK_FUNC(sub_822298E4);
PPC_FUNC_IMPL(__imp__sub_822298E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822298E8"))) PPC_WEAK_FUNC(sub_822298E8);
PPC_FUNC_IMPL(__imp__sub_822298E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822298F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222993c
	if (ctx.cr6.eq) goto loc_8222993C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82229918:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// bne 0x82229918
	if (!ctx.cr0.eq) goto loc_82229918;
loc_8222993C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222994C"))) PPC_WEAK_FUNC(sub_8222994C);
PPC_FUNC_IMPL(__imp__sub_8222994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229950"))) PPC_WEAK_FUNC(sub_82229950);
PPC_FUNC_IMPL(__imp__sub_82229950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222997C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229998"))) PPC_WEAK_FUNC(sub_82229998);
PPC_FUNC_IMPL(__imp__sub_82229998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822299C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822299d4
	if (ctx.cr6.gt) goto loc_822299D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822299e8
	goto loc_822299E8;
loc_822299D4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822299E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A00"))) PPC_WEAK_FUNC(sub_82229A00);
PPC_FUNC_IMPL(__imp__sub_82229A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82229A08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229a54
	if (ctx.cr6.eq) goto loc_82229A54;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82229A30:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bne 0x82229a30
	if (!ctx.cr0.eq) goto loc_82229A30;
loc_82229A54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82229A64"))) PPC_WEAK_FUNC(sub_82229A64);
PPC_FUNC_IMPL(__imp__sub_82229A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A68"))) PPC_WEAK_FUNC(sub_82229A68);
PPC_FUNC_IMPL(__imp__sub_82229A68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A70"))) PPC_WEAK_FUNC(sub_82229A70);
PPC_FUNC_IMPL(__imp__sub_82229A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A78"))) PPC_WEAK_FUNC(sub_82229A78);
PPC_FUNC_IMPL(__imp__sub_82229A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82229AC0"))) PPC_WEAK_FUNC(sub_82229AC0);
PPC_FUNC_IMPL(__imp__sub_82229AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229AC8"))) PPC_WEAK_FUNC(sub_82229AC8);
PPC_FUNC_IMPL(__imp__sub_82229AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82229b04
	if (ctx.cr6.gt) goto loc_82229B04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82229b18
	goto loc_82229B18;
loc_82229B04:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82229B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229B30"))) PPC_WEAK_FUNC(sub_82229B30);
PPC_FUNC_IMPL(__imp__sub_82229B30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229B3C"))) PPC_WEAK_FUNC(sub_82229B3C);
PPC_FUNC_IMPL(__imp__sub_82229B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229B40"))) PPC_WEAK_FUNC(sub_82229B40);
PPC_FUNC_IMPL(__imp__sub_82229B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229B48"))) PPC_WEAK_FUNC(sub_82229B48);
PPC_FUNC_IMPL(__imp__sub_82229B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-2460
	ctx.r10.s64 = ctx.r11.s64 + -2460;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823574a0
	ctx.lr = 0x82229B74;
	sub_823574A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82229b8c
	if (ctx.cr6.eq) goto loc_82229B8C;
	// bl 0x82357128
	ctx.lr = 0x82229B88;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82229B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229BA4"))) PPC_WEAK_FUNC(sub_82229BA4);
PPC_FUNC_IMPL(__imp__sub_82229BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229BA8"))) PPC_WEAK_FUNC(sub_82229BA8);
PPC_FUNC_IMPL(__imp__sub_82229BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2040
	ctx.r9.s64 = ctx.r11.s64 + -2040;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82229c1c
	if (!ctx.cr6.eq) goto loc_82229C1C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229c20
	if (ctx.cr6.eq) goto loc_82229C20;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82229c14
	if (ctx.cr6.eq) goto loc_82229C14;
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
	ctx.lr = 0x82229C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82229c1c
	goto loc_82229C1C;
loc_82229C14:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82229C1C;
	sub_82183E40(ctx, base);
loc_82229C1C:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82229C20:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82359338
	ctx.lr = 0x82229C30;
	sub_82359338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229C48"))) PPC_WEAK_FUNC(sub_82229C48);
PPC_FUNC_IMPL(__imp__sub_82229C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82229C50;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82229cac
	if (ctx.cr6.eq) goto loc_82229CAC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82229cac
	if (ctx.cr6.eq) goto loc_82229CAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359238
	ctx.lr = 0x82229C90;
	sub_82359238(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82229cac
	if (ctx.cr6.eq) goto loc_82229CAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82229CAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82229CB8"))) PPC_WEAK_FUNC(sub_82229CB8);
PPC_FUNC_IMPL(__imp__sub_82229CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82359398
	ctx.lr = 0x82229CD4;
	sub_82359398(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82229d38
	if (!ctx.cr6.eq) goto loc_82229D38;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229d3c
	if (ctx.cr6.eq) goto loc_82229D3C;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82229d30
	if (ctx.cr6.eq) goto loc_82229D30;
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
	ctx.lr = 0x82229D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82229d38
	goto loc_82229D38;
loc_82229D30:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82229D38;
	sub_82183E40(ctx, base);
loc_82229D38:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82229D3C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82229D5C"))) PPC_WEAK_FUNC(sub_82229D5C);
PPC_FUNC_IMPL(__imp__sub_82229D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229D60"))) PPC_WEAK_FUNC(sub_82229D60);
PPC_FUNC_IMPL(__imp__sub_82229D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82229D68;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82229db4
	if (ctx.cr6.eq) goto loc_82229DB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82229ea0
	if (ctx.cr6.lt) goto loc_82229EA0;
loc_82229D98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82359238
	ctx.lr = 0x82229DA4;
	sub_82359238(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82229DB4:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229dfc
	if (ctx.cr6.eq) goto loc_82229DFC;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82229df0
	if (ctx.cr6.eq) goto loc_82229DF0;
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
	ctx.lr = 0x82229DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82229df8
	goto loc_82229DF8;
loc_82229DF0:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82229DF8;
	sub_82183E40(ctx, base);
loc_82229DF8:
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
loc_82229DFC:
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r29,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// bl 0x823570e0
	ctx.lr = 0x82229E10;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82229e24
	if (!ctx.cr6.eq) goto loc_82229E24;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82080d68
	ctx.lr = 0x82229E20;
	sub_82080D68(ctx, base);
	// b 0x82229e58
	goto loc_82229E58;
loc_82229E24:
	// lis r11,341
	ctx.r11.s64 = 22347776;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82229e50
	if (ctx.cr6.gt) goto loc_82229E50;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-9
	ctx.r10.s64 = -9;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// ble cr6,0x82229e54
	if (!ctx.cr6.gt) goto loc_82229E54;
loc_82229E50:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82229E54:
	// bl 0x823570f0
	ctx.lr = 0x82229E58;
	sub_823570F0(ctx, base);
loc_82229E58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229e88
	if (ctx.cr6.eq) goto loc_82229E88;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addic. r31,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r31.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82229e88
	if (ctx.cr0.lt) goto loc_82229E88;
loc_82229E74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222a920
	ctx.lr = 0x82229E7C;
	sub_8222A920(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// bge 0x82229e74
	if (!ctx.cr0.lt) goto loc_82229E74;
loc_82229E88:
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82229E94;
	sub_823570E0(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229d98
	if (!ctx.cr6.eq) goto loc_82229D98;
loc_82229EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82229EAC"))) PPC_WEAK_FUNC(sub_82229EAC);
PPC_FUNC_IMPL(__imp__sub_82229EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229EB0"))) PPC_WEAK_FUNC(sub_82229EB0);
PPC_FUNC_IMPL(__imp__sub_82229EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2004
	ctx.r9.s64 = ctx.r11.s64 + -2004;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82229f24
	if (!ctx.cr6.eq) goto loc_82229F24;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229f28
	if (ctx.cr6.eq) goto loc_82229F28;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82229f1c
	if (ctx.cr6.eq) goto loc_82229F1C;
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
	ctx.lr = 0x82229F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82229f24
	goto loc_82229F24;
loc_82229F1C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82229F24;
	sub_82183E40(ctx, base);
loc_82229F24:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82229F28:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x823594f8
	ctx.lr = 0x82229F38;
	sub_823594F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F50"))) PPC_WEAK_FUNC(sub_82229F50);
PPC_FUNC_IMPL(__imp__sub_82229F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82229F58;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82229fa4
	if (ctx.cr6.eq) goto loc_82229FA4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82229fa4
	if (ctx.cr6.eq) goto loc_82229FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82229FA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82229FB0"))) PPC_WEAK_FUNC(sub_82229FB0);
PPC_FUNC_IMPL(__imp__sub_82229FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8222a028
	if (!ctx.cr6.eq) goto loc_8222A028;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a02c
	if (ctx.cr6.eq) goto loc_8222A02C;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222a020
	if (ctx.cr6.eq) goto loc_8222A020;
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
	ctx.lr = 0x8222A01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222a028
	goto loc_8222A028;
loc_8222A020:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8222A028;
	sub_82183E40(ctx, base);
loc_8222A028:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_8222A02C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82359558
	ctx.lr = 0x8222A03C;
	sub_82359558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A054"))) PPC_WEAK_FUNC(sub_8222A054);
PPC_FUNC_IMPL(__imp__sub_8222A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A058"))) PPC_WEAK_FUNC(sub_8222A058);
PPC_FUNC_IMPL(__imp__sub_8222A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222A060;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222a0bc
	if (!ctx.cr6.eq) goto loc_8222A0BC;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a0c0
	if (ctx.cr6.eq) goto loc_8222A0C0;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222a0b4
	if (ctx.cr6.eq) goto loc_8222A0B4;
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
	ctx.lr = 0x8222A0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222a0bc
	goto loc_8222A0BC;
loc_8222A0B4:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8222A0BC;
	sub_82183E40(ctx, base);
loc_8222A0BC:
	// stw r29,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r29.u32);
loc_8222A0C0:
	// stw r29,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// bl 0x823570e0
	ctx.lr = 0x8222A0D0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8222a0e4
	if (!ctx.cr6.eq) goto loc_8222A0E4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82080d68
	ctx.lr = 0x8222A0E0;
	sub_82080D68(ctx, base);
	// b 0x8222a118
	goto loc_8222A118;
loc_8222A0E4:
	// lis r11,682
	ctx.r11.s64 = 44695552;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8222a110
	if (ctx.cr6.gt) goto loc_8222A110;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-9
	ctx.r10.s64 = -9;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// ble cr6,0x8222a114
	if (!ctx.cr6.gt) goto loc_8222A114;
loc_8222A110:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222A114:
	// bl 0x823570f0
	ctx.lr = 0x8222A118;
	sub_823570F0(ctx, base);
loc_8222A118:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a148
	if (ctx.cr6.eq) goto loc_8222A148;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addic. r31,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r31.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x8222a148
	if (ctx.cr0.lt) goto loc_8222A148;
loc_8222A134:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac18
	ctx.lr = 0x8222A13C;
	sub_8222AC18(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bge 0x8222a134
	if (!ctx.cr0.lt) goto loc_8222A134;
loc_8222A148:
	// stw r29,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8222A154;
	sub_823570E0(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a16c
	if (!ctx.cr6.eq) goto loc_8222A16C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222A16C:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222A17C"))) PPC_WEAK_FUNC(sub_8222A17C);
PPC_FUNC_IMPL(__imp__sub_8222A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A180"))) PPC_WEAK_FUNC(sub_8222A180);
PPC_FUNC_IMPL(__imp__sub_8222A180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82229ba8
	ctx.lr = 0x8222A1A0;
	sub_82229BA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a1b8
	if (ctx.cr6.eq) goto loc_8222A1B8;
	// bl 0x82357128
	ctx.lr = 0x8222A1B4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222A1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A1D0"))) PPC_WEAK_FUNC(sub_8222A1D0);
PPC_FUNC_IMPL(__imp__sub_8222A1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82229eb0
	ctx.lr = 0x8222A1F0;
	sub_82229EB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a208
	if (ctx.cr6.eq) goto loc_8222A208;
	// bl 0x82357128
	ctx.lr = 0x8222A204;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222A208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A220"))) PPC_WEAK_FUNC(sub_8222A220);
PPC_FUNC_IMPL(__imp__sub_8222A220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8222A228;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
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
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// bl 0x823592c8
	ctx.lr = 0x8222A2A4;
	sub_823592C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// addi r10,r11,-2040
	ctx.r10.s64 = ctx.r11.s64 + -2040;
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// bl 0x82357260
	ctx.lr = 0x8222A2C4;
	sub_82357260(ctx, base);
	// addi r27,r30,240
	ctx.r27.s64 = ctx.r30.s64 + 240;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r26,r11,-2004
	ctx.r26.s64 = ctx.r11.s64 + -2004;
loc_8222A2D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823594b0
	ctx.lr = 0x8222A2E0;
	sub_823594B0(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// stw r31,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r31.u32);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8222a2d8
	if (!ctx.cr0.lt) goto loc_8222A2D8;
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823594b0
	ctx.lr = 0x8222A30C;
	sub_823594B0(ctx, base);
	// stw r26,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r26.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
	// addi r28,r30,456
	ctx.r28.s64 = ctx.r30.s64 + 456;
	// stw r31,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r31.u32);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r31.u32);
	// bl 0x823594b0
	ctx.lr = 0x8222A32C;
	sub_823594B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r26,456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 456, ctx.r26.u32);
	// addi r26,r30,528
	ctx.r26.s64 = ctx.r30.s64 + 528;
	// stw r31,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r31.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r31,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r31.u32);
	// addi r23,r11,-1960
	ctx.r23.s64 = ctx.r11.s64 + -1960;
	// stw r31,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r31.u32);
	// stw r31,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r31.u32);
loc_8222A350:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222ac18
	ctx.lr = 0x8222A358;
	sub_8222AC18(ctx, base);
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,96
	ctx.r26.s64 = ctx.r26.s64 + 96;
	// bge 0x8222a350
	if (!ctx.cr0.lt) goto loc_8222A350;
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// bl 0x82356b48
	ctx.lr = 0x8222A370;
	sub_82356B48(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x8222A37C;
	sub_822AA648(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8222A380;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x8222A38C;
	sub_821837D0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r25,r30,228
	ctx.r25.s64 = ctx.r30.s64 + 228;
	// stw r9,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r9.u32);
	// li r26,2
	ctx.r26.s64 = 2;
loc_8222A3B0:
	// stwu r31,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r25.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,72
	ctx.r27.s64 = ctx.r27.s64 + 72;
	// bne 0x8222a3b0
	if (!ctx.cr0.eq) goto loc_8222A3B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222A3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r31,744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 744, ctx.r31.u32);
	// stw r31,748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 748, ctx.r31.u32);
	// addi r11,r30,776
	ctx.r11.s64 = ctx.r30.s64 + 776;
	// stw r31,752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 752, ctx.r31.u32);
	// stw r31,756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 756, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222A418:
	// stw r31,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8222a418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222A418;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x8222A42C;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8222A438"))) PPC_WEAK_FUNC(sub_8222A438);
PPC_FUNC_IMPL(__imp__sub_8222A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222A440;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,720
	ctx.r3.s64 = ctx.r3.s64 + 720;
	// bl 0x82356b78
	ctx.lr = 0x8222A450;
	sub_82356B78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r29,720
	ctx.r31.s64 = ctx.r29.s64 + 720;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r28,r11,-2460
	ctx.r28.s64 = ctx.r11.s64 + -2460;
loc_8222A460:
	// stwu r28,-96(r31)
	ea = -96 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823574a0
	ctx.lr = 0x8222A46C;
	sub_823574A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8222a460
	if (!ctx.cr0.lt) goto loc_8222A460;
	// addi r3,r29,456
	ctx.r3.s64 = ctx.r29.s64 + 456;
	// bl 0x82229eb0
	ctx.lr = 0x8222A47C;
	sub_82229EB0(ctx, base);
	// addi r3,r29,384
	ctx.r3.s64 = ctx.r29.s64 + 384;
	// bl 0x82229eb0
	ctx.lr = 0x8222A484;
	sub_82229EB0(ctx, base);
	// addi r31,r29,384
	ctx.r31.s64 = ctx.r29.s64 + 384;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8222A48C:
	// addi r31,r31,-72
	ctx.r31.s64 = ctx.r31.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229eb0
	ctx.lr = 0x8222A498;
	sub_82229EB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8222a48c
	if (!ctx.cr0.lt) goto loc_8222A48C;
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x823573b0
	ctx.lr = 0x8222A4A8;
	sub_823573B0(ctx, base);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82229ba8
	ctx.lr = 0x8222A4B0;
	sub_82229BA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222A4B8"))) PPC_WEAK_FUNC(sub_8222A4B8);
PPC_FUNC_IMPL(__imp__sub_8222A4B8) {
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
	ctx.lr = 0x8222A4C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8222a4e0
	if (ctx.cr6.eq) goto loc_8222A4E0;
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82183448
	ctx.lr = 0x8222A4DC;
	sub_82183448(ctx, base);
	// b 0x8222a4e8
	goto loc_8222A4E8;
loc_8222A4E0:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x821845a0
	ctx.lr = 0x8222A4E8;
	sub_821845A0(ctx, base);
loc_8222A4E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a50c
	if (ctx.cr6.eq) goto loc_8222A50C;
	// bl 0x8222a220
	ctx.lr = 0x8222A4F4;
	sub_8222A220(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222A50C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -728, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A528"))) PPC_WEAK_FUNC(sub_8222A528);
PPC_FUNC_IMPL(__imp__sub_8222A528) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a554
	if (ctx.cr6.eq) goto loc_8222A554;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222a580
	goto loc_8222A580;
loc_8222A554:
	// bl 0x82183078
	ctx.lr = 0x8222A558;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x8222A564;
	sub_821837D0(ctx, base);
	// bl 0x8222a4b8
	ctx.lr = 0x8222A568;
	sub_8222A4B8(ctx, base);
	// lwz r11,-728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -728);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821837d0
	ctx.lr = 0x8222A57C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222A580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A598"))) PPC_WEAK_FUNC(sub_8222A598);
PPC_FUNC_IMPL(__imp__sub_8222A598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r31,-728(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -728);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222a5d0
	if (ctx.cr6.eq) goto loc_8222A5D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a438
	ctx.lr = 0x8222A5C4;
	sub_8222A438(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8222A5D0;
	sub_82183E40(ctx, base);
loc_8222A5D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-728(r30)
	PPC_STORE_U32(ctx.r30.u32 + -728, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A5F4"))) PPC_WEAK_FUNC(sub_8222A5F4);
PPC_FUNC_IMPL(__imp__sub_8222A5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A5F8"))) PPC_WEAK_FUNC(sub_8222A5F8);
PPC_FUNC_IMPL(__imp__sub_8222A5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1928
	ctx.r3.s64 = ctx.r11.s64 + -1928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A604"))) PPC_WEAK_FUNC(sub_8222A604);
PPC_FUNC_IMPL(__imp__sub_8222A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A608"))) PPC_WEAK_FUNC(sub_8222A608);
PPC_FUNC_IMPL(__imp__sub_8222A608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222A610;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbzx r9,r3,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bne cr6,0x8222a664
	if (!ctx.cr6.eq) goto loc_8222A664;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222a688
	if (ctx.cr6.eq) goto loc_8222A688;
	// ble cr6,0x8222a690
	if (!ctx.cr6.gt) goto loc_8222A690;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bgt cr6,0x8222a690
	if (ctx.cr6.gt) goto loc_8222A690;
loc_8222A65C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222a68c
	goto loc_8222A68C;
loc_8222A664:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8222a690
	if (!ctx.cr6.eq) goto loc_8222A690;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8222a688
	if (ctx.cr6.lt) goto loc_8222A688;
	// beq cr6,0x8222a65c
	if (ctx.cr6.eq) goto loc_8222A65C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x8222a690
	if (!ctx.cr6.lt) goto loc_8222A690;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8222a68c
	goto loc_8222A68C;
loc_8222A688:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222A68C:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8222A690:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222A6B8;
	sub_8235A2A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222A6C0"))) PPC_WEAK_FUNC(sub_8222A6C0);
PPC_FUNC_IMPL(__imp__sub_8222A6C0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82359e18
	ctx.lr = 0x8222A708;
	sub_82359E18(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8222a740
	if (!ctx.cr6.eq) goto loc_8222A740;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8222a738
	if (ctx.cr6.lt) goto loc_8222A738;
	// bne cr6,0x8222a768
	if (!ctx.cr6.eq) goto loc_8222A768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8222A728;
	sub_82355AB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x8222a768
	goto loc_8222A768;
loc_8222A738:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222a768
	goto loc_8222A768;
loc_8222A740:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8222a768
	if (!ctx.cr6.eq) goto loc_8222A768;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8222a764
	if (ctx.cr6.lt) goto loc_8222A764;
	// beq cr6,0x8222a738
	if (ctx.cr6.eq) goto loc_8222A738;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8222a768
	if (!ctx.cr6.lt) goto loc_8222A768;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8222a768
	goto loc_8222A768;
loc_8222A764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A768:
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

__attribute__((alias("__imp__sub_8222A780"))) PPC_WEAK_FUNC(sub_8222A780);
PPC_FUNC_IMPL(__imp__sub_8222A780) {
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
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,33033
	ctx.r4.u64 = ctx.r4.u64 | 33033;
	// bl 0x82359e18
	ctx.lr = 0x8222A7A0;
	sub_82359E18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a7bc
	if (ctx.cr6.eq) goto loc_8222A7BC;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222A7BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7D4"))) PPC_WEAK_FUNC(sub_8222A7D4);
PPC_FUNC_IMPL(__imp__sub_8222A7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A7D8"))) PPC_WEAK_FUNC(sub_8222A7D8);
PPC_FUNC_IMPL(__imp__sub_8222A7D8) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x8235a2a0
	ctx.lr = 0x8222A800;
	sub_8235A2A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A810"))) PPC_WEAK_FUNC(sub_8222A810);
PPC_FUNC_IMPL(__imp__sub_8222A810) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8222A830;
	sub_822AA648(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359e18
	ctx.lr = 0x8222A848;
	sub_82359E18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bne cr6,0x8222a858
	if (!ctx.cr6.eq) goto loc_8222A858;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8222A858:
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

__attribute__((alias("__imp__sub_8222A86C"))) PPC_WEAK_FUNC(sub_8222A86C);
PPC_FUNC_IMPL(__imp__sub_8222A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A870"))) PPC_WEAK_FUNC(sub_8222A870);
PPC_FUNC_IMPL(__imp__sub_8222A870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222A878;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8222A888:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// lbzx r9,r3,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222A8E4;
	sub_8235A2A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 18, ctx.xer);
	// blt cr6,0x8222a888
	if (ctx.cr6.lt) goto loc_8222A888;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// lfs f13,-1936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1936);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222A91C"))) PPC_WEAK_FUNC(sub_8222A91C);
PPC_FUNC_IMPL(__imp__sub_8222A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A920"))) PPC_WEAK_FUNC(sub_8222A920);
PPC_FUNC_IMPL(__imp__sub_8222A920) {
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
	// bl 0x82355d50
	ctx.lr = 0x8222A938;
	sub_82355D50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8222a870
	ctx.lr = 0x8222A94C;
	sub_8222A870(ctx, base);
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

__attribute__((alias("__imp__sub_8222A964"))) PPC_WEAK_FUNC(sub_8222A964);
PPC_FUNC_IMPL(__imp__sub_8222A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A968"))) PPC_WEAK_FUNC(sub_8222A968);
PPC_FUNC_IMPL(__imp__sub_8222A968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A974"))) PPC_WEAK_FUNC(sub_8222A974);
PPC_FUNC_IMPL(__imp__sub_8222A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A978"))) PPC_WEAK_FUNC(sub_8222A978);
PPC_FUNC_IMPL(__imp__sub_8222A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222A980;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823574f0
	ctx.lr = 0x8222A98C;
	sub_823574F0(ctx, base);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82357620
	ctx.lr = 0x8222A9A0;
	sub_82357620(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8222A9AC;
	sub_822AA648(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356fe0
	ctx.lr = 0x8222A9B8;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357880
	ctx.lr = 0x8222A9C4;
	sub_82357880(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4393
	ctx.r4.s64 = ctx.r11.s64 + 4393;
	// bl 0x823578b8
	ctx.lr = 0x8222A9D4;
	sub_823578B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823575f0
	ctx.lr = 0x8222A9E0;
	sub_823575F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575e0
	ctx.lr = 0x8222A9EC;
	sub_823575E0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8222A9F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222AA28;
	sub_8235A2A0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r30,40
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 40, ctx.xer);
	// blt cr6,0x8222a9f4
	if (ctx.cr6.lt) goto loc_8222A9F4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222AA3C"))) PPC_WEAK_FUNC(sub_8222AA3C);
PPC_FUNC_IMPL(__imp__sub_8222AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA40"))) PPC_WEAK_FUNC(sub_8222AA40);
PPC_FUNC_IMPL(__imp__sub_8222AA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8222AA48;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823578b8
	ctx.lr = 0x8222AA5C;
	sub_823578B8(ctx, base);
	// ld r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82356fe0
	ctx.lr = 0x8222AA70;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357880
	ctx.lr = 0x8222AA7C;
	sub_82357880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// bl 0x823575f0
	ctx.lr = 0x8222AA88;
	sub_823575F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 64);
	// bl 0x823575e0
	ctx.lr = 0x8222AA94;
	sub_823575E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
loc_8222AAC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229288
	ctx.lr = 0x8222AAD0;
	sub_82229288(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzu r27,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r27,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222AB10;
	sub_8235A2A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x8222aac4
	if (ctx.cr6.lt) goto loc_8222AAC4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8222AB24"))) PPC_WEAK_FUNC(sub_8222AB24);
PPC_FUNC_IMPL(__imp__sub_8222AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AB28"))) PPC_WEAK_FUNC(sub_8222AB28);
PPC_FUNC_IMPL(__imp__sub_8222AB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222AB30;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82357608
	ctx.lr = 0x8222AB40;
	sub_82357608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8218a128
	ctx.lr = 0x8222AB54;
	sub_8218A128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357600
	ctx.lr = 0x8222AB5C;
	sub_82357600(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,48(r29)
	PPC_STORE_U64(ctx.r29.u32 + 48, ctx.r9.u64);
	// bl 0x823575f8
	ctx.lr = 0x8222AB70;
	sub_823575F8(ctx, base);
	// std r3,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575e8
	ctx.lr = 0x8222AB7C;
	sub_823575E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r3,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r3.u64);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
loc_8222ABAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222ABC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r27,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82359e18
	ctx.lr = 0x8222ABE0;
	sub_82359E18(ctx, base);
	// subfic r7,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r3.s64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// bl 0x82229278
	ctx.lr = 0x8222ABFC;
	sub_82229278(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x8222abac
	if (ctx.cr6.lt) goto loc_8222ABAC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222AC14"))) PPC_WEAK_FUNC(sub_8222AC14);
PPC_FUNC_IMPL(__imp__sub_8222AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AC18"))) PPC_WEAK_FUNC(sub_8222AC18);
PPC_FUNC_IMPL(__imp__sub_8222AC18) {
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
	// bl 0x82357438
	ctx.lr = 0x8222AC30;
	sub_82357438(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2460
	ctx.r10.s64 = ctx.r11.s64 + -2460;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8222a978
	ctx.lr = 0x8222AC44;
	sub_8222A978(ctx, base);
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

__attribute__((alias("__imp__sub_8222AC5C"))) PPC_WEAK_FUNC(sub_8222AC5C);
PPC_FUNC_IMPL(__imp__sub_8222AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AC60"))) PPC_WEAK_FUNC(sub_8222AC60);
PPC_FUNC_IMPL(__imp__sub_8222AC60) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222aca8
	if (ctx.cr6.eq) goto loc_8222ACA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222AC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -724, ctx.r11.u32);
loc_8222ACA8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8222ACBC"))) PPC_WEAK_FUNC(sub_8222ACBC);
PPC_FUNC_IMPL(__imp__sub_8222ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ACC0"))) PPC_WEAK_FUNC(sub_8222ACC0);
PPC_FUNC_IMPL(__imp__sub_8222ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222acf0
	if (ctx.cr6.eq) goto loc_8222ACF0;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8222ACF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ACFC"))) PPC_WEAK_FUNC(sub_8222ACFC);
PPC_FUNC_IMPL(__imp__sub_8222ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AD00"))) PPC_WEAK_FUNC(sub_8222AD00);
PPC_FUNC_IMPL(__imp__sub_8222AD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222AD08;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8222AD14;
	sub_8215BD60(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8222AD18;
	sub_82227AA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ae08
	if (ctx.cr6.eq) goto loc_8222AE08;
	// bl 0x82227aa0
	ctx.lr = 0x8222AD24;
	sub_82227AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82227c98
	ctx.lr = 0x8222AD2C;
	sub_82227C98(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x8222AD30;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ae08
	if (ctx.cr6.eq) goto loc_8222AE08;
	// bl 0x8215bd60
	ctx.lr = 0x8222AD40;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222ae08
	if (!ctx.cr6.eq) goto loc_8222AE08;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822210a0
	ctx.lr = 0x8222AD58;
	sub_822210A0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222ae08
	if (ctx.cr6.eq) goto loc_8222AE08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579a0
	ctx.lr = 0x8222AD68;
	sub_823579A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823558e0
	ctx.lr = 0x8222AD78;
	sub_823558E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ae00
	if (ctx.cr6.eq) goto loc_8222AE00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823548c8
	ctx.lr = 0x8222AD88;
	sub_823548C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8235a590
	ctx.lr = 0x8222AD90;
	sub_8235A590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222ae00
	if (!ctx.cr6.eq) goto loc_8222AE00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823548c8
	ctx.lr = 0x8222ADA0;
	sub_823548C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82356608
	ctx.lr = 0x8222ADB0;
	sub_82356608(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8222ADB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222addc
	if (ctx.cr6.eq) goto loc_8222ADDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222adb8
	if (ctx.cr6.eq) goto loc_8222ADB8;
loc_8222ADDC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222ae00
	if (ctx.cr6.eq) goto loc_8222AE00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356608
	ctx.lr = 0x8222ADEC;
	sub_82356608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82228440
	ctx.lr = 0x8222AE00;
	sub_82228440(ctx, base);
loc_8222AE00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823579f8
	ctx.lr = 0x8222AE08;
	sub_823579F8(ctx, base);
loc_8222AE08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222AE14"))) PPC_WEAK_FUNC(sub_8222AE14);
PPC_FUNC_IMPL(__imp__sub_8222AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AE18"))) PPC_WEAK_FUNC(sub_8222AE18);
PPC_FUNC_IMPL(__imp__sub_8222AE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8222AE20;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82225508
	ctx.lr = 0x8222AE30;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ae48
	if (ctx.cr6.eq) goto loc_8222AE48;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82225698
	ctx.lr = 0x8222AE48;
	sub_82225698(ctx, base);
loc_8222AE48:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x822210a0
	ctx.lr = 0x8222AE54;
	sub_822210A0(ctx, base);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// ori r31,r11,2
	ctx.r31.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x8222ae9c
	if (!ctx.cr6.eq) goto loc_8222AE9C;
	// subf. r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222ae74
	if (ctx.cr0.eq) goto loc_8222AE74;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8222ae9c
	if (!ctx.cr6.eq) goto loc_8222AE9C;
loc_8222AE74:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222af58
	if (!ctx.cr6.eq) goto loc_8222AF58;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222AE9C:
	// bl 0x82354838
	ctx.lr = 0x8222AEA0;
	sub_82354838(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af54
	if (ctx.cr6.eq) goto loc_8222AF54;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x822210a0
	ctx.lr = 0x8222AEB4;
	sub_822210A0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222af2c
	if (ctx.cr6.eq) goto loc_8222AF2C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355530
	ctx.lr = 0x8222AEC4;
	sub_82355530(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222af2c
	if (!ctx.cr6.eq) goto loc_8222AF2C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// subf. r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222af14
	if (ctx.cr0.eq) goto loc_8222AF14;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8222af0c
	if (ctx.cr6.eq) goto loc_8222AF0C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222af2c
	if (!ctx.cr6.eq) goto loc_8222AF2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222AF0C:
	// bl 0x8215bd60
	ctx.lr = 0x8222AF10;
	sub_8215BD60(ctx, base);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
loc_8222AF14:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// stw r31,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8222AF2C:
	// bl 0x82227aa0
	ctx.lr = 0x8222AF30;
	sub_82227AA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af54
	if (ctx.cr6.eq) goto loc_8222AF54;
	// bl 0x82227aa0
	ctx.lr = 0x8222AF3C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222AF54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8222AF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222AF60"))) PPC_WEAK_FUNC(sub_8222AF60);
PPC_FUNC_IMPL(__imp__sub_8222AF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222AF68;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822296f0
	ctx.lr = 0x8222AF74;
	sub_822296F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823572b8
	ctx.lr = 0x8222AF80;
	sub_823572B8(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222AF88:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256578
	ctx.lr = 0x8222AF94;
	sub_82256578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222afb4
	if (!ctx.cr6.eq) goto loc_8222AFB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357358
	ctx.lr = 0x8222AFA4;
	sub_82357358(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8222afc4
	if (ctx.cr6.eq) goto loc_8222AFC4;
loc_8222AFB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8222af88
	if (ctx.cr6.lt) goto loc_8222AF88;
	// b 0x8222afc8
	goto loc_8222AFC8;
loc_8222AFC4:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8222AFC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229730
	ctx.lr = 0x8222AFD0;
	sub_82229730(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82222f70
	ctx.lr = 0x8222AFD8;
	sub_82222F70(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8222AFDC;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222AFF0"))) PPC_WEAK_FUNC(sub_8222AFF0);
PPC_FUNC_IMPL(__imp__sub_8222AFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222AFF8;
	sub_82248788(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -728);
	// stw r28,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r28.u32);
	// bl 0x82354838
	ctx.lr = 0x8222B014;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b06c
	if (ctx.cr6.eq) goto loc_8222B06C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222a920
	ctx.lr = 0x8222B028;
	sub_8222A920(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355630
	ctx.lr = 0x8222B034;
	sub_82355630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222b058
	if (ctx.cr6.eq) goto loc_8222B058;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355b00
	ctx.lr = 0x8222B044;
	sub_82355B00(ctx, base);
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b058
	if (ctx.cr6.eq) goto loc_8222B058;
	// lwz r11,-728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -728);
	// stw r28,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r28.u32);
loc_8222B058:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x8222B06C;
	sub_82355DE8(ctx, base);
loc_8222B06C:
	// lwz r11,-728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -728);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r29.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222B080"))) PPC_WEAK_FUNC(sub_8222B080);
PPC_FUNC_IMPL(__imp__sub_8222B080) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-728(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -728);
	// stw r10,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r10.u32);
	// lwz r11,-728(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -728);
	// stw r10,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0A0"))) PPC_WEAK_FUNC(sub_8222B0A0);
PPC_FUNC_IMPL(__imp__sub_8222B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// stw r10,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0B8"))) PPC_WEAK_FUNC(sub_8222B0B8);
PPC_FUNC_IMPL(__imp__sub_8222B0B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0C8"))) PPC_WEAK_FUNC(sub_8222B0C8);
PPC_FUNC_IMPL(__imp__sub_8222B0C8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221148
	ctx.lr = 0x8222B0E8;
	sub_82221148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8222b0fc
	if (!ctx.cr6.eq) goto loc_8222B0FC;
	// bl 0x8215bd60
	ctx.lr = 0x8222B0F4;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8222B0FC:
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

__attribute__((alias("__imp__sub_8222B114"))) PPC_WEAK_FUNC(sub_8222B114);
PPC_FUNC_IMPL(__imp__sub_8222B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B118"))) PPC_WEAK_FUNC(sub_8222B118);
PPC_FUNC_IMPL(__imp__sub_8222B118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222B120;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822296d0
	ctx.lr = 0x8222B12C;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b24c
	if (ctx.cr6.eq) goto loc_8222B24C;
loc_8222B14C:
	// bl 0x822296d0
	ctx.lr = 0x8222B150;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ab60
	ctx.lr = 0x8222B174;
	sub_8235AB60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222b190
	if (!ctx.cr6.eq) goto loc_8222B190;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8222b14c
	if (ctx.cr6.lt) goto loc_8222B14C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222B190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235aa40
	ctx.lr = 0x8222B198;
	sub_8235AA40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222b1d4
	if (!ctx.cr6.eq) goto loc_8222B1D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lfs f13,-1712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1712);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222B1D4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,-744(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x8235aa40
	ctx.lr = 0x8222B1E4;
	sub_8235AA40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82222b98
	ctx.lr = 0x8222B1F4;
	sub_82222B98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x8235a990
	ctx.lr = 0x8222B208;
	sub_8235A990(ctx, base);
	// stfs f1,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235a9a8
	ctx.lr = 0x8222B214;
	sub_8235A9A8(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// bl 0x823a1048
	ctx.lr = 0x8222B234;
	sub_823A1048(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,184(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
loc_8222B24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222B258"))) PPC_WEAK_FUNC(sub_8222B258);
PPC_FUNC_IMPL(__imp__sub_8222B258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222B260;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822296d0
	ctx.lr = 0x8222B26C;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b2fc
	if (ctx.cr6.eq) goto loc_8222B2FC;
loc_8222B28C:
	// bl 0x822296d0
	ctx.lr = 0x8222B290;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235ab60
	ctx.lr = 0x8222B2B4;
	sub_8235AB60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222b2d0
	if (!ctx.cr6.eq) goto loc_8222B2D0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8222b28c
	if (ctx.cr6.lt) goto loc_8222B28C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222B2D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r9.u32);
	// lfs f13,-1712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1712);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r8.u32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// stfs f0,180(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// stfs f0,184(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
loc_8222B2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222B308"))) PPC_WEAK_FUNC(sub_8222B308);
PPC_FUNC_IMPL(__imp__sub_8222B308) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// blt cr6,0x8222b378
	if (ctx.cr6.lt) goto loc_8222B378;
	// cmplwi cr6,r5,2457
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2457, ctx.xer);
	// bgt cr6,0x8222b378
	if (ctx.cr6.gt) goto loc_8222B378;
	// bl 0x82227aa0
	ctx.lr = 0x8222B340;
	sub_82227AA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b360
	if (ctx.cr6.eq) goto loc_8222B360;
	// bl 0x82227aa0
	ctx.lr = 0x8222B34C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_8222B378:
	// cmplwi cr6,r5,8192
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8192, ctx.xer);
	// blt cr6,0x8222b360
	if (ctx.cr6.lt) goto loc_8222B360;
	// cmplwi cr6,r5,10649
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10649, ctx.xer);
	// bgt cr6,0x8222b360
	if (ctx.cr6.gt) goto loc_8222B360;
	// bl 0x82225508
	ctx.lr = 0x8222B38C;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222b360
	if (ctx.cr6.eq) goto loc_8222B360;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82226e70
	ctx.lr = 0x8222B3A4;
	sub_82226E70(ctx, base);
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

__attribute__((alias("__imp__sub_8222B3B8"))) PPC_WEAK_FUNC(sub_8222B3B8);
PPC_FUNC_IMPL(__imp__sub_8222B3B8) {
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
	ctx.lr = 0x8222B3C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8222b3e0
	if (ctx.cr6.eq) goto loc_8222B3E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8222B3DC;
	sub_82183448(ctx, base);
	// b 0x8222b3e8
	goto loc_8222B3E8;
loc_8222B3E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8222B3E8;
	sub_821845A0(ctx, base);
loc_8222B3E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// beq cr6,0x8222b414
	if (ctx.cr6.eq) goto loc_8222B414;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,-1600
	ctx.r9.s64 = ctx.r11.s64 + -1600;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,-724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222B414:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -724, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B42C"))) PPC_WEAK_FUNC(sub_8222B42C);
PPC_FUNC_IMPL(__imp__sub_8222B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B430"))) PPC_WEAK_FUNC(sub_8222B430);
PPC_FUNC_IMPL(__imp__sub_8222B430) {
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
	// addi r9,r11,-1704
	ctx.r9.s64 = ctx.r11.s64 + -1704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8222b468
	if (ctx.cr6.eq) goto loc_8222B468;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8222B464;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222B468:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8222B47C"))) PPC_WEAK_FUNC(sub_8222B47C);
PPC_FUNC_IMPL(__imp__sub_8222B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B480"))) PPC_WEAK_FUNC(sub_8222B480);
PPC_FUNC_IMPL(__imp__sub_8222B480) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b4d4
	if (!ctx.cr6.eq) goto loc_8222B4D4;
	// bl 0x82183078
	ctx.lr = 0x8222B4AC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x8222B4B8;
	sub_821837D0(ctx, base);
	// bl 0x8222b3b8
	ctx.lr = 0x8222B4BC;
	sub_8222B3B8(ctx, base);
	// lwz r11,-724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -724);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821837d0
	ctx.lr = 0x8222B4D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222B4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B4EC"))) PPC_WEAK_FUNC(sub_8222B4EC);
PPC_FUNC_IMPL(__imp__sub_8222B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B4F0"))) PPC_WEAK_FUNC(sub_8222B4F0);
PPC_FUNC_IMPL(__imp__sub_8222B4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8222B4F8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbzx r9,r3,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222B538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222B54C;
	sub_8235A2A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222B554"))) PPC_WEAK_FUNC(sub_8222B554);
PPC_FUNC_IMPL(__imp__sub_8222B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B558"))) PPC_WEAK_FUNC(sub_8222B558);
PPC_FUNC_IMPL(__imp__sub_8222B558) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356fe0
	ctx.lr = 0x8222B57C;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357880
	ctx.lr = 0x8222B588;
	sub_82357880(ctx, base);
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

__attribute__((alias("__imp__sub_8222B59C"))) PPC_WEAK_FUNC(sub_8222B59C);
PPC_FUNC_IMPL(__imp__sub_8222B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B5A0"))) PPC_WEAK_FUNC(sub_8222B5A0);
PPC_FUNC_IMPL(__imp__sub_8222B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1500
	ctx.r3.s64 = ctx.r11.s64 + -1500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B5AC"))) PPC_WEAK_FUNC(sub_8222B5AC);
PPC_FUNC_IMPL(__imp__sub_8222B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B5B0"))) PPC_WEAK_FUNC(sub_8222B5B0);
PPC_FUNC_IMPL(__imp__sub_8222B5B0) {
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
	// bl 0x8235af48
	ctx.lr = 0x8222B5C8;
	sub_8235AF48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-1476
	ctx.r10.s64 = ctx.r11.s64 + -1476;
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

__attribute__((alias("__imp__sub_8222B5EC"))) PPC_WEAK_FUNC(sub_8222B5EC);
PPC_FUNC_IMPL(__imp__sub_8222B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B5F0"))) PPC_WEAK_FUNC(sub_8222B5F0);
PPC_FUNC_IMPL(__imp__sub_8222B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-1476
	ctx.r10.s64 = ctx.r11.s64 + -1476;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8235afc0
	sub_8235AFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B600"))) PPC_WEAK_FUNC(sub_8222B600);
PPC_FUNC_IMPL(__imp__sub_8222B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B60C"))) PPC_WEAK_FUNC(sub_8222B60C);
PPC_FUNC_IMPL(__imp__sub_8222B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B610"))) PPC_WEAK_FUNC(sub_8222B610);
PPC_FUNC_IMPL(__imp__sub_8222B610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-1476
	ctx.r10.s64 = ctx.r11.s64 + -1476;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8235afc0
	ctx.lr = 0x8222B63C;
	sub_8235AFC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222b654
	if (ctx.cr6.eq) goto loc_8222B654;
	// bl 0x82357128
	ctx.lr = 0x8222B650;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222B654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B66C"))) PPC_WEAK_FUNC(sub_8222B66C);
PPC_FUNC_IMPL(__imp__sub_8222B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B670"))) PPC_WEAK_FUNC(sub_8222B670);
PPC_FUNC_IMPL(__imp__sub_8222B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222B678;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbzx r9,r3,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// blt cr6,0x8222b6c0
	if (ctx.cr6.lt) goto loc_8222B6C0;
	// bne cr6,0x8222b6e4
	if (!ctx.cr6.eq) goto loc_8222B6E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8222b6e0
	goto loc_8222B6E0;
loc_8222B6C0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8222b6dc
	if (ctx.cr6.eq) goto loc_8222B6DC;
	// ble cr6,0x8222b6e4
	if (!ctx.cr6.gt) goto loc_8222B6E4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bgt cr6,0x8222b6e4
	if (ctx.cr6.gt) goto loc_8222B6E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b6e0
	goto loc_8222B6E0;
loc_8222B6DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B6E0:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8222B6E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222B70C;
	sub_8235A2A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222B714"))) PPC_WEAK_FUNC(sub_8222B714);
PPC_FUNC_IMPL(__imp__sub_8222B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B718"))) PPC_WEAK_FUNC(sub_8222B718);
PPC_FUNC_IMPL(__imp__sub_8222B718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8222B720;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8222B730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbzx r9,r3,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bne cr6,0x8222b764
	if (!ctx.cr6.eq) goto loc_8222B764;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_8222B764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8235a2a0
	ctx.lr = 0x8222B78C;
	sub_8235A2A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8222b730
	if (ctx.cr6.lt) goto loc_8222B730;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8222B7A0"))) PPC_WEAK_FUNC(sub_8222B7A0);
PPC_FUNC_IMPL(__imp__sub_8222B7A0) {
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
	// bl 0x8235ad80
	ctx.lr = 0x8222B7B8;
	sub_8235AD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222b718
	ctx.lr = 0x8222B7C0;
	sub_8222B718(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8222B7D4"))) PPC_WEAK_FUNC(sub_8222B7D4);
PPC_FUNC_IMPL(__imp__sub_8222B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222B7D8"))) PPC_WEAK_FUNC(sub_8222B7D8);
PPC_FUNC_IMPL(__imp__sub_8222B7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1281
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1281, ctx.xer);
	// bgt cr6,0x8222b95c
	if (ctx.cr6.gt) goto loc_8222B95C;
	// beq cr6,0x8222b950
	if (ctx.cr6.eq) goto loc_8222B950;
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// bgt cr6,0x8222b8d4
	if (ctx.cr6.gt) goto loc_8222B8D4;
	// beq cr6,0x8222b8c8
	if (ctx.cr6.eq) goto loc_8222B8C8;
	// cmpwi cr6,r11,513
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 513, ctx.xer);
	// bgt cr6,0x8222b880
	if (ctx.cr6.gt) goto loc_8222B880;
	// beq cr6,0x8222b864
	if (ctx.cr6.eq) goto loc_8222B864;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8222b858
	if (ctx.cr6.eq) goto loc_8222B858;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x8222b84c
	if (ctx.cr6.eq) goto loc_8222B84C;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222ba98
	goto loc_8222BA98;
loc_8222B84C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B858:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222ba98
	goto loc_8222BA98;
loc_8222B880:
	// cmpwi cr6,r11,544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 544, ctx.xer);
	// beq cr6,0x8222b8ac
	if (ctx.cr6.eq) goto loc_8222B8AC;
	// cmpwi cr6,r11,545
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 545, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222ba98
	goto loc_8222BA98;
loc_8222B8AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222ba98
	goto loc_8222BA98;
loc_8222B8C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B8D4:
	// cmpwi cr6,r11,1040
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1040, ctx.xer);
	// bgt cr6,0x8222b928
	if (ctx.cr6.gt) goto loc_8222B928;
	// beq cr6,0x8222b91c
	if (ctx.cr6.eq) goto loc_8222B91C;
	// cmpwi cr6,r11,769
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 769, ctx.xer);
	// beq cr6,0x8222b910
	if (ctx.cr6.eq) goto loc_8222B910;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// beq cr6,0x8222b904
	if (ctx.cr6.eq) goto loc_8222B904;
	// cmpwi cr6,r11,1025
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1025, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B910:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B91C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B928:
	// cmpwi cr6,r11,1041
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1041, ctx.xer);
	// beq cr6,0x8222b944
	if (ctx.cr6.eq) goto loc_8222B944;
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B950:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222B95C:
	// cmpwi cr6,r11,1378
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1378, ctx.xer);
	// bgt cr6,0x8222ba28
	if (ctx.cr6.gt) goto loc_8222BA28;
	// beq cr6,0x8222ba1c
	if (ctx.cr6.eq) goto loc_8222BA1C;
	// addi r11,r11,-1360
	ctx.r11.s64 = ctx.r11.s64 + -1360;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x8222ba9c
	if (ctx.cr6.gt) goto loc_8222BA9C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18036
	ctx.r12.s64 = ctx.r12.s64 + -18036;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-17964(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17964);
	// lwz r17,-17952(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17952);
	// lwz r17,-17940(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17940);
	// lwz r17,-17928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17928);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17764);
	// lwz r17,-17916(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17916);
	// lwz r17,-17904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17904);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x8222ba8c
	goto loc_8222BA8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x8222ba8c
	goto loc_8222BA8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x8222ba8c
	goto loc_8222BA8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x8222ba8c
	goto loc_8222BA8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x8222ba8c
	goto loc_8222BA8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA28:
	// cmpwi cr6,r11,1537
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1537, ctx.xer);
	// bgt cr6,0x8222ba68
	if (ctx.cr6.gt) goto loc_8222BA68;
	// beq cr6,0x8222ba5c
	if (ctx.cr6.eq) goto loc_8222BA5C;
	// cmpwi cr6,r11,1379
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1379, ctx.xer);
	// beq cr6,0x8222ba50
	if (ctx.cr6.eq) goto loc_8222BA50;
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA68:
	// cmpwi cr6,r11,1552
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1552, ctx.xer);
	// beq cr6,0x8222ba84
	if (ctx.cr6.eq) goto loc_8222BA84;
	// cmpwi cr6,r11,1553
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1553, ctx.xer);
	// bne cr6,0x8222ba9c
	if (!ctx.cr6.eq) goto loc_8222BA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x8222ba8c
	goto loc_8222BA8C;
loc_8222BA84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
loc_8222BA8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222BA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BA98:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8222BA9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c80
	ctx.lr = 0x8222BAA4;
	sub_82227C80(ctx, base);
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

__attribute__((alias("__imp__sub_8222BAC0"))) PPC_WEAK_FUNC(sub_8222BAC0);
PPC_FUNC_IMPL(__imp__sub_8222BAC0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222c130
	ctx.lr = 0x8222BADC;
	sub_8222C130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-1280
	ctx.r10.s64 = ctx.r11.s64 + -1280;
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

__attribute__((alias("__imp__sub_8222BB00"))) PPC_WEAK_FUNC(sub_8222BB00);
PPC_FUNC_IMPL(__imp__sub_8222BB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-1280
	ctx.r10.s64 = ctx.r11.s64 + -1280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8222bc48
	ctx.lr = 0x8222BB2C;
	sub_8222BC48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222bb48
	if (ctx.cr6.eq) goto loc_8222BB48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8222BB44;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222BB48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BB60"))) PPC_WEAK_FUNC(sub_8222BB60);
PPC_FUNC_IMPL(__imp__sub_8222BB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8222bc58
	sub_8222BC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BB64"))) PPC_WEAK_FUNC(sub_8222BB64);
PPC_FUNC_IMPL(__imp__sub_8222BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BB68"))) PPC_WEAK_FUNC(sub_8222BB68);
PPC_FUNC_IMPL(__imp__sub_8222BB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221b88
	ctx.lr = 0x8222BB8C;
	sub_82221B88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222bba4
	if (ctx.cr6.eq) goto loc_8222BBA4;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BBA4;
	sub_820EF498(ctx, base);
loc_8222BBA4:
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

__attribute__((alias("__imp__sub_8222BBC0"))) PPC_WEAK_FUNC(sub_8222BBC0);
PPC_FUNC_IMPL(__imp__sub_8222BBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x8222bc10
	if (!ctx.cr6.eq) goto loc_8222BC10;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x8222BBF8;
	sub_82225028(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8222bc2c
	if (ctx.cr6.lt) goto loc_8222BC2C;
	// bne cr6,0x8222bc10
	if (!ctx.cr6.eq) goto loc_8222BC10;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BC10;
	sub_820EF498(ctx, base);
loc_8222BC10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8222BC14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8222BC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222bc14
	goto loc_8222BC14;
}

__attribute__((alias("__imp__sub_8222BC34"))) PPC_WEAK_FUNC(sub_8222BC34);
PPC_FUNC_IMPL(__imp__sub_8222BC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BC38"))) PPC_WEAK_FUNC(sub_8222BC38);
PPC_FUNC_IMPL(__imp__sub_8222BC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-1036
	ctx.r3.s64 = ctx.r11.s64 + -1036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BC44"))) PPC_WEAK_FUNC(sub_8222BC44);
PPC_FUNC_IMPL(__imp__sub_8222BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BC48"))) PPC_WEAK_FUNC(sub_8222BC48);
PPC_FUNC_IMPL(__imp__sub_8222BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-872
	ctx.r10.s64 = ctx.r11.s64 + -872;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82227c70
	sub_82227C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BC58"))) PPC_WEAK_FUNC(sub_8222BC58);
PPC_FUNC_IMPL(__imp__sub_8222BC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x822283b8
	sub_822283B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BC5C"))) PPC_WEAK_FUNC(sub_8222BC5C);
PPC_FUNC_IMPL(__imp__sub_8222BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BC60"))) PPC_WEAK_FUNC(sub_8222BC60);
PPC_FUNC_IMPL(__imp__sub_8222BC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r3,744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222BC70"))) PPC_WEAK_FUNC(sub_8222BC70);
PPC_FUNC_IMPL(__imp__sub_8222BC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BC9C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8222bcb0
	if (!ctx.cr6.eq) goto loc_8222BCB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BCB0;
	sub_820EF498(ctx, base);
loc_8222BCB0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BCC0;
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

__attribute__((alias("__imp__sub_8222BCDC"))) PPC_WEAK_FUNC(sub_8222BCDC);
PPC_FUNC_IMPL(__imp__sub_8222BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BCE0"))) PPC_WEAK_FUNC(sub_8222BCE0);
PPC_FUNC_IMPL(__imp__sub_8222BCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BD0C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222bd24
	if (ctx.cr6.eq) goto loc_8222BD24;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222bd30
	if (!ctx.cr6.eq) goto loc_8222BD30;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8222bd28
	goto loc_8222BD28;
loc_8222BD24:
	// li r4,7
	ctx.r4.s64 = 7;
loc_8222BD28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BD30;
	sub_820EF498(ctx, base);
loc_8222BD30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BD40;
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

__attribute__((alias("__imp__sub_8222BD5C"))) PPC_WEAK_FUNC(sub_8222BD5C);
PPC_FUNC_IMPL(__imp__sub_8222BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BD60"))) PPC_WEAK_FUNC(sub_8222BD60);
PPC_FUNC_IMPL(__imp__sub_8222BD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BD8C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222bda4
	if (ctx.cr6.eq) goto loc_8222BDA4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222bdb0
	if (!ctx.cr6.eq) goto loc_8222BDB0;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8222bda8
	goto loc_8222BDA8;
loc_8222BDA4:
	// li r4,4
	ctx.r4.s64 = 4;
loc_8222BDA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BDB0;
	sub_820EF498(ctx, base);
loc_8222BDB0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BDC0;
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

__attribute__((alias("__imp__sub_8222BDDC"))) PPC_WEAK_FUNC(sub_8222BDDC);
PPC_FUNC_IMPL(__imp__sub_8222BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BDE0"))) PPC_WEAK_FUNC(sub_8222BDE0);
PPC_FUNC_IMPL(__imp__sub_8222BDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BE0C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222be24
	if (ctx.cr6.eq) goto loc_8222BE24;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222be30
	if (!ctx.cr6.eq) goto loc_8222BE30;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8222be28
	goto loc_8222BE28;
loc_8222BE24:
	// li r4,9
	ctx.r4.s64 = 9;
loc_8222BE28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BE30;
	sub_820EF498(ctx, base);
loc_8222BE30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BE40;
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

__attribute__((alias("__imp__sub_8222BE5C"))) PPC_WEAK_FUNC(sub_8222BE5C);
PPC_FUNC_IMPL(__imp__sub_8222BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BE60"))) PPC_WEAK_FUNC(sub_8222BE60);
PPC_FUNC_IMPL(__imp__sub_8222BE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BE8C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222bea4
	if (ctx.cr6.eq) goto loc_8222BEA4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222beb0
	if (!ctx.cr6.eq) goto loc_8222BEB0;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8222bea8
	goto loc_8222BEA8;
loc_8222BEA4:
	// li r4,13
	ctx.r4.s64 = 13;
loc_8222BEA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BEB0;
	sub_820EF498(ctx, base);
loc_8222BEB0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BEC0;
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

__attribute__((alias("__imp__sub_8222BEDC"))) PPC_WEAK_FUNC(sub_8222BEDC);
PPC_FUNC_IMPL(__imp__sub_8222BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BEE0"))) PPC_WEAK_FUNC(sub_8222BEE0);
PPC_FUNC_IMPL(__imp__sub_8222BEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BF0C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222bf24
	if (ctx.cr6.eq) goto loc_8222BF24;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222bf30
	if (!ctx.cr6.eq) goto loc_8222BF30;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8222bf28
	goto loc_8222BF28;
loc_8222BF24:
	// li r4,9
	ctx.r4.s64 = 9;
loc_8222BF28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222BF30;
	sub_820EF498(ctx, base);
loc_8222BF30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BF40;
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

__attribute__((alias("__imp__sub_8222BF5C"))) PPC_WEAK_FUNC(sub_8222BF5C);
PPC_FUNC_IMPL(__imp__sub_8222BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BF60"))) PPC_WEAK_FUNC(sub_8222BF60);
PPC_FUNC_IMPL(__imp__sub_8222BF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BF8C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bne cr6,0x8222bfa0
	if (!ctx.cr6.eq) goto loc_8222BFA0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8222BFA0:
	// bl 0x820ef498
	ctx.lr = 0x8222BFA4;
	sub_820EF498(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222BFB4;
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

__attribute__((alias("__imp__sub_8222BFD0"))) PPC_WEAK_FUNC(sub_8222BFD0);
PPC_FUNC_IMPL(__imp__sub_8222BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222BFFC;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bne cr6,0x8222c010
	if (!ctx.cr6.eq) goto loc_8222C010;
	// li r4,9
	ctx.r4.s64 = 9;
loc_8222C010:
	// bl 0x820ef498
	ctx.lr = 0x8222C014;
	sub_820EF498(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C024;
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

__attribute__((alias("__imp__sub_8222C040"))) PPC_WEAK_FUNC(sub_8222C040);
PPC_FUNC_IMPL(__imp__sub_8222C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222C06C;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8222c084
	if (ctx.cr6.eq) goto loc_8222C084;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8222c090
	if (!ctx.cr6.eq) goto loc_8222C090;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x8222c088
	goto loc_8222C088;
loc_8222C084:
	// li r4,19
	ctx.r4.s64 = 19;
loc_8222C088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C090;
	sub_820EF498(ctx, base);
loc_8222C090:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C0A0;
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

__attribute__((alias("__imp__sub_8222C0BC"))) PPC_WEAK_FUNC(sub_8222C0BC);
PPC_FUNC_IMPL(__imp__sub_8222C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C0C0"))) PPC_WEAK_FUNC(sub_8222C0C0);
PPC_FUNC_IMPL(__imp__sub_8222C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82227cb8
	ctx.lr = 0x8222C0EC;
	sub_82227CB8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8222c100
	if (!ctx.cr6.eq) goto loc_8222C100;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C100;
	sub_820EF498(ctx, base);
loc_8222C100:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C110;
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

__attribute__((alias("__imp__sub_8222C12C"))) PPC_WEAK_FUNC(sub_8222C12C);
PPC_FUNC_IMPL(__imp__sub_8222C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C130"))) PPC_WEAK_FUNC(sub_8222C130);
PPC_FUNC_IMPL(__imp__sub_8222C130) {
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
	// bl 0x822289c8
	ctx.lr = 0x8222C148;
	sub_822289C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-872
	ctx.r10.s64 = ctx.r11.s64 + -872;
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

__attribute__((alias("__imp__sub_8222C16C"))) PPC_WEAK_FUNC(sub_8222C16C);
PPC_FUNC_IMPL(__imp__sub_8222C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C170"))) PPC_WEAK_FUNC(sub_8222C170);
PPC_FUNC_IMPL(__imp__sub_8222C170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-872
	ctx.r10.s64 = ctx.r11.s64 + -872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82227c70
	ctx.lr = 0x8222C19C;
	sub_82227C70(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222c1b8
	if (ctx.cr6.eq) goto loc_8222C1B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8222C1B4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222C1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C1D0"))) PPC_WEAK_FUNC(sub_8222C1D0);
PPC_FUNC_IMPL(__imp__sub_8222C1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C1D8"))) PPC_WEAK_FUNC(sub_8222C1D8);
PPC_FUNC_IMPL(__imp__sub_8222C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8222C1E0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222C200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8222c264
	if (ctx.cr6.eq) goto loc_8222C264;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222c258
	if (!ctx.cr6.gt) goto loc_8222C258;
loc_8222C22C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea8
	ctx.lr = 0x8222C23C;
	sub_82227EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c248
	if (ctx.cr6.eq) goto loc_8222C248;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8222C248:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222c22c
	if (ctx.cr6.lt) goto loc_8222C22C;
loc_8222C258:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8222c268
	if (ctx.cr6.lt) goto loc_8222C268;
loc_8222C264:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8222C268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8222C270"))) PPC_WEAK_FUNC(sub_8222C270);
PPC_FUNC_IMPL(__imp__sub_8222C270) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x8222C290;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222c2f8
	if (!ctx.cr6.eq) goto loc_8222C2F8;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
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
	// lwz r3,-744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222C2CC;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c314
	if (ctx.cr6.eq) goto loc_8222C314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C2E4;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C2F4;
	sub_82227CB8(ctx, base);
	// b 0x8222c314
	goto loc_8222C314;
loc_8222C2F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222C314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C314:
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

__attribute__((alias("__imp__sub_8222C330"))) PPC_WEAK_FUNC(sub_8222C330);
PPC_FUNC_IMPL(__imp__sub_8222C330) {
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
	// li r11,257
	ctx.r11.s64 = 257;
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
	ctx.lr = 0x8222C370;
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

__attribute__((alias("__imp__sub_8222C380"))) PPC_WEAK_FUNC(sub_8222C380);
PPC_FUNC_IMPL(__imp__sub_8222C380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82228110
	ctx.lr = 0x8222C3A4;
	sub_82228110(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8222C3B8;
	sub_8215BD08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256338
	ctx.lr = 0x8222C3C8;
	sub_82256338(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r31,-8460(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8460);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222c3f0
	if (ctx.cr6.eq) goto loc_8222C3F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5398
	ctx.lr = 0x8222C3E0;
	sub_820E5398(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e53c8
	ctx.lr = 0x8222C3EC;
	sub_820E53C8(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
loc_8222C3F0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8222c464
	if (!ctx.cr6.lt) goto loc_8222C464;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228b00
	ctx.lr = 0x8222C408;
	sub_82228B00(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228a28
	ctx.lr = 0x8222C410;
	sub_82228A28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822235a8
	ctx.lr = 0x8222C424;
	sub_822235A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228ab0
	ctx.lr = 0x8222C430;
	sub_82228AB0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228a28
	ctx.lr = 0x8222C438;
	sub_82228A28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822235a8
	ctx.lr = 0x8222C44C;
	sub_822235A8(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228ab0
	ctx.lr = 0x8222C458;
	sub_82228AB0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
loc_8222C464:
	// li r11,768
	ctx.r11.s64 = 768;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,72
	ctx.r9.s64 = 72;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82221658
	ctx.lr = 0x8222C48C;
	sub_82221658(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c4c4
	if (ctx.cr6.eq) goto loc_8222C4C4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C4A4;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C4B4;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C4C4;
	sub_82227CC8(ctx, base);
loc_8222C4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C4E0"))) PPC_WEAK_FUNC(sub_8222C4E0);
PPC_FUNC_IMPL(__imp__sub_8222C4E0) {
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
	// li r11,769
	ctx.r11.s64 = 769;
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
	ctx.lr = 0x8222C520;
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

__attribute__((alias("__imp__sub_8222C530"))) PPC_WEAK_FUNC(sub_8222C530);
PPC_FUNC_IMPL(__imp__sub_8222C530) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222C570;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c5a8
	if (ctx.cr6.eq) goto loc_8222C5A8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C588;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C598;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C5A8;
	sub_82227CC8(ctx, base);
loc_8222C5A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8222C5C4"))) PPC_WEAK_FUNC(sub_8222C5C4);
PPC_FUNC_IMPL(__imp__sub_8222C5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C5C8"))) PPC_WEAK_FUNC(sub_8222C5C8);
PPC_FUNC_IMPL(__imp__sub_8222C5C8) {
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
	// li r11,1025
	ctx.r11.s64 = 1025;
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
	ctx.lr = 0x8222C608;
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

__attribute__((alias("__imp__sub_8222C618"))) PPC_WEAK_FUNC(sub_8222C618);
PPC_FUNC_IMPL(__imp__sub_8222C618) {
	PPC_FUNC_PROLOGUE();
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
	// li r10,1040
	ctx.r10.s64 = 1040;
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
	ctx.lr = 0x8222C664;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c69c
	if (ctx.cr6.eq) goto loc_8222C69C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C67C;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C68C;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C69C;
	sub_82227CC8(ctx, base);
loc_8222C69C:
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

__attribute__((alias("__imp__sub_8222C6B8"))) PPC_WEAK_FUNC(sub_8222C6B8);
PPC_FUNC_IMPL(__imp__sub_8222C6B8) {
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
	// li r11,1041
	ctx.r11.s64 = 1041;
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
	ctx.lr = 0x8222C6F8;
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

__attribute__((alias("__imp__sub_8222C708"))) PPC_WEAK_FUNC(sub_8222C708);
PPC_FUNC_IMPL(__imp__sub_8222C708) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,1280
	ctx.r11.s64 = 1280;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,1852
	ctx.r10.s64 = 1852;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -744);
	// bl 0x82221658
	ctx.lr = 0x8222C748;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c780
	if (ctx.cr6.eq) goto loc_8222C780;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C760;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C770;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C780;
	sub_82227CC8(ctx, base);
loc_8222C780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8222C79C"))) PPC_WEAK_FUNC(sub_8222C79C);
PPC_FUNC_IMPL(__imp__sub_8222C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C7A0"))) PPC_WEAK_FUNC(sub_8222C7A0);
PPC_FUNC_IMPL(__imp__sub_8222C7A0) {
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
	// li r11,1281
	ctx.r11.s64 = 1281;
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
	ctx.lr = 0x8222C7E0;
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

__attribute__((alias("__imp__sub_8222C7F0"))) PPC_WEAK_FUNC(sub_8222C7F0);
PPC_FUNC_IMPL(__imp__sub_8222C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222c1d8
	ctx.lr = 0x8222C810;
	sub_8222C1D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c834
	if (ctx.cr6.eq) goto loc_8222C834;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x8222c834
	if (!ctx.cr6.lt) goto loc_8222C834;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C834;
	sub_820EF498(ctx, base);
loc_8222C834:
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

__attribute__((alias("__imp__sub_8222C850"))) PPC_WEAK_FUNC(sub_8222C850);
PPC_FUNC_IMPL(__imp__sub_8222C850) {
	PPC_FUNC_PROLOGUE();
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
	// li r10,1360
	ctx.r10.s64 = 1360;
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
	ctx.lr = 0x8222C89C;
	sub_82221658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222c8d4
	if (ctx.cr6.eq) goto loc_8222C8D4;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef498
	ctx.lr = 0x8222C8B4;
	sub_820EF498(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cb8
	ctx.lr = 0x8222C8C4;
	sub_82227CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cc8
	ctx.lr = 0x8222C8D4;
	sub_82227CC8(ctx, base);
loc_8222C8D4:
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

__attribute__((alias("__imp__sub_8222C8F0"))) PPC_WEAK_FUNC(sub_8222C8F0);
PPC_FUNC_IMPL(__imp__sub_8222C8F0) {
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
	// li r11,1361
	ctx.r11.s64 = 1361;
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
	ctx.lr = 0x8222C930;
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

