#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821F13F8"))) PPC_WEAK_FUNC(sub_821F13F8);
PPC_FUNC_IMPL(__imp__sub_821F13F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821F1400;
	sub_82248778(ctx, base);
	// stwu r1,-3776(r1)
	ea = -3776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,21492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21492, ctx.r6.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mulli r10,r11,2148
	ctx.r10.s64 = ctx.r11.s64 * 2148;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r9,21480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r9,2148
	ctx.r11.s64 = ctx.r9.s64 * 2148;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82232d88
	ctx.lr = 0x821F1430;
	sub_82232D88(ctx, base);
	// stw r3,2144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2144, ctx.r3.u32);
	// lwz r8,21480(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r8,2148
	ctx.r11.s64 = ctx.r8.s64 * 2148;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// stw r24,21488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21488, ctx.r24.u32);
	// beq cr6,0x821f1478
	if (ctx.cr6.eq) goto loc_821F1478;
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821847a8
	ctx.lr = 0x821F1474;
	sub_821847A8(ctx, base);
	// b 0x821f1480
	goto loc_821F1480;
loc_821F1478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0728
	ctx.lr = 0x821F1480;
	sub_821F0728(ctx, base);
loc_821F1480:
	// lwz r11,21496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f156c
	if (!ctx.cr6.eq) goto loc_821F156C;
	// li r10,225
	ctx.r10.s64 = 225;
	// stw r29,1888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1888, ctx.r29.u32);
	// addi r11,r1,2788
	ctx.r11.s64 = ctx.r1.s64 + 2788;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F149C:
	// stw r29,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r29.u32);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f149c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F149C;
	// li r10,225
	ctx.r10.s64 = 225;
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F14B4:
	// stw r29,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r29.u32);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f14b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F14B4;
	// addi r4,r1,1888
	ctx.r4.s64 = ctx.r1.s64 + 1888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0680
	ctx.lr = 0x821F14CC;
	sub_821F0680(ctx, base);
	// lwz r10,1888(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f1554
	if (!ctx.cr6.gt) goto loc_821F1554;
	// addi r11,r1,1892
	ctx.r11.s64 = ctx.r1.s64 + 1892;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F14E8:
	// lwz r10,900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f1510
	if (ctx.cr6.eq) goto loc_821F1510;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_821F1510:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f14e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F14E8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x821f1554
	if (!ctx.cr6.gt) goto loc_821F1554;
	// bl 0x8218fba8
	ctx.lr = 0x821F1524;
	sub_8218FBA8(ctx, base);
	// divwu r9,r3,r30
	ctx.r9.u32 = ctx.r3.u32 / ctx.r30.u32;
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twllei r30,0
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stw r4,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r4.u32);
	// b 0x821f156c
	goto loc_821F156C;
loc_821F1554:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
loc_821F156C:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,2140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2140, ctx.r9.u32);
	// lwz r7,21480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r7,2148
	ctx.r11.s64 = ctx.r7.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,2144(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	// lhz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// lwz r3,21480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r3,2148
	ctx.r11.s64 = ctx.r3.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r29.u32);
	// lwz r10,21480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r10,2148
	ctx.r11.s64 = ctx.r10.s64 * 2148;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,2144(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	// lhz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821f162c
	if (!ctx.cr6.gt) goto loc_821F162C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_821F15D8:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,2144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x821f1604
	if (!ctx.cr6.eq) goto loc_821F1604;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
loc_821F1604:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,2144(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	// lhz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821f15d8
	if (ctx.cr6.lt) goto loc_821F15D8;
loc_821F162C:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,21496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21496);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821f1788
	if (!ctx.cr6.eq) goto loc_821F1788;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,21480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21480, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,22192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22192, ctx.r11.u32);
loc_821F1664:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x821f0160
	ctx.lr = 0x821F167C;
	sub_821F0160(ctx, base);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// cmpwi cr6,r30,2016
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2016, ctx.xer);
	// blt cr6,0x821f1664
	if (ctx.cr6.lt) goto loc_821F1664;
	// lwz r10,21480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r25,r11,-8680
	ctx.r25.s64 = ctx.r11.s64 + -8680;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f1708
	if (!ctx.cr6.gt) goto loc_821F1708;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r26,r25,-4
	ctx.r26.s64 = ctx.r25.s64 + -4;
loc_821F16B4:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x821f0160
	ctx.lr = 0x821F16CC;
	sub_821F0160(ctx, base);
	// lwzu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// addi r27,r27,336
	ctx.r27.s64 = ctx.r27.s64 + 336;
	// stw r24,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r24.u32);
	// stw r24,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r24.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r29,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r29.u32);
	// lwz r10,21480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r10,2148
	ctx.r11.s64 = ctx.r10.s64 * 2148;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f16b4
	if (ctx.cr6.lt) goto loc_821F16B4;
loc_821F1708:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f1788
	if (!ctx.cr6.gt) goto loc_821F1788;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r28,r28,336
	ctx.r28.s64 = ctx.r28.s64 * 336;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
loc_821F1734:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x821f0160
	ctx.lr = 0x821F174C;
	sub_821F0160(ctx, base);
	// lwzu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// addi r28,r28,336
	ctx.r28.s64 = ctx.r28.s64 + 336;
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
	// stw r24,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r24.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r29,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r29.u32);
	// lwz r10,21480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r10,2148
	ctx.r11.s64 = ctx.r10.s64 * 2148;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f1734
	if (ctx.cr6.lt) goto loc_821F1734;
loc_821F1788:
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,1092(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// bl 0x82231aa8
	ctx.lr = 0x821F1794;
	sub_82231AA8(ctx, base);
	// li r30,108
	ctx.r30.s64 = 108;
loc_821F1798:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1092(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82231b40
	ctx.lr = 0x821F17B0;
	sub_82231B40(ctx, base);
	// stwx r3,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,124
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 124, ctx.xer);
	// blt cr6,0x821f1798
	if (ctx.cr6.lt) goto loc_821F1798;
	// stw r24,21484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21484, ctx.r24.u32);
	// addi r1,r1,3776
	ctx.r1.s64 = ctx.r1.s64 + 3776;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821F17D0"))) PPC_WEAK_FUNC(sub_821F17D0);
PPC_FUNC_IMPL(__imp__sub_821F17D0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821f13f8
	sub_821F13F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F17E0"))) PPC_WEAK_FUNC(sub_821F17E0);
PPC_FUNC_IMPL(__imp__sub_821F17E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r10,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r10.u8);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F186C"))) PPC_WEAK_FUNC(sub_821F186C);
PPC_FUNC_IMPL(__imp__sub_821F186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1870"))) PPC_WEAK_FUNC(sub_821F1870);
PPC_FUNC_IMPL(__imp__sub_821F1870) {
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
	// lwz r3,-768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f18a4
	if (ctx.cr6.eq) goto loc_821F18A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F18A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F18A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -768, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821F18C0"))) PPC_WEAK_FUNC(sub_821F18C0);
PPC_FUNC_IMPL(__imp__sub_821F18C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -768);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F18CC"))) PPC_WEAK_FUNC(sub_821F18CC);
PPC_FUNC_IMPL(__imp__sub_821F18CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F18D0"))) PPC_WEAK_FUNC(sub_821F18D0);
PPC_FUNC_IMPL(__imp__sub_821F18D0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x821F18F4;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-8656
	ctx.r8.s64 = ctx.r11.s64 + -8656;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// lfs f0,2148(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
loc_821F1960:
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stfs f0,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// stw r9,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stb r9,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r9.u8);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stb r9,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r9.u8);
	// stwu r10,116(r11)
	ea = 116 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f1960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1960;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// lfs f0,31988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31988);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lfs f13,-21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21700);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18004);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-21184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f13,308(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f12,312(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f11,316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1A58"))) PPC_WEAK_FUNC(sub_821F1A58);
PPC_FUNC_IMPL(__imp__sub_821F1A58) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1A64"))) PPC_WEAK_FUNC(sub_821F1A64);
PPC_FUNC_IMPL(__imp__sub_821F1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1A68"))) PPC_WEAK_FUNC(sub_821F1A68);
PPC_FUNC_IMPL(__imp__sub_821F1A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1A7C"))) PPC_WEAK_FUNC(sub_821F1A7C);
PPC_FUNC_IMPL(__imp__sub_821F1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1A80"))) PPC_WEAK_FUNC(sub_821F1A80);
PPC_FUNC_IMPL(__imp__sub_821F1A80) {
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
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1aac
	if (ctx.cr6.eq) goto loc_821F1AAC;
	// bl 0x82204ee0
	ctx.lr = 0x821F1AA4;
	sub_82204EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f1ac0
	if (ctx.cr6.eq) goto loc_821F1AC0;
loc_821F1AAC:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f1ac0
	if (ctx.cr6.eq) goto loc_821F1AC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_821F1AC0:
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

__attribute__((alias("__imp__sub_821F1AD4"))) PPC_WEAK_FUNC(sub_821F1AD4);
PPC_FUNC_IMPL(__imp__sub_821F1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1AD8"))) PPC_WEAK_FUNC(sub_821F1AD8);
PPC_FUNC_IMPL(__imp__sub_821F1AD8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821f1b1c
	if (ctx.cr6.eq) goto loc_821F1B1C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821f1b1c
	if (ctx.cr6.eq) goto loc_821F1B1C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f1b14
	if (ctx.cr6.eq) goto loc_821F1B14;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821f1b14
	if (ctx.cr6.eq) goto loc_821F1B14;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x821f1b1c
	if (ctx.cr6.gt) goto loc_821F1B1C;
loc_821F1B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F1B1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1B24"))) PPC_WEAK_FUNC(sub_821F1B24);
PPC_FUNC_IMPL(__imp__sub_821F1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1B28"))) PPC_WEAK_FUNC(sub_821F1B28);
PPC_FUNC_IMPL(__imp__sub_821F1B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mulli r11,r5,116
	ctx.r11.s64 = ctx.r5.s64 * 116;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x821f1b5c
	if (!ctx.cr6.eq) goto loc_821F1B5C;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
loc_821F1B4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f1b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1B4C;
	// blr 
	return;
loc_821F1B5C:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
loc_821F1B60:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f1b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1B60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1B70"))) PPC_WEAK_FUNC(sub_821F1B70);
PPC_FUNC_IMPL(__imp__sub_821F1B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1bf0
	if (ctx.cr6.eq) goto loc_821F1BF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820a0608
	ctx.lr = 0x821F1B9C;
	sub_820A0608(ctx, base);
	// addi r31,r3,596
	ctx.r31.s64 = ctx.r3.s64 + 596;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F1BB0;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x821F1BBC;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F1BC8;
	sub_820EF4F8(ctx, base);
	// addi r31,r30,900
	ctx.r31.s64 = ctx.r30.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F1BD8;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x821F1BE4;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F1BF0;
	sub_820EF4F8(ctx, base);
loc_821F1BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1C08"))) PPC_WEAK_FUNC(sub_821F1C08);
PPC_FUNC_IMPL(__imp__sub_821F1C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F1C10;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821f1c3c
	if (!ctx.cr6.eq) goto loc_821F1C3C;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x821f1c40
	goto loc_821F1C40;
loc_821F1C3C:
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
loc_821F1C40:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r29,512
	ctx.r29.s64 = 512;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821F1C5C:
	// stfs f31,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stfs f31,-12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f31,-4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfsu f31,4(r11)
	// bdnz 0x821f1c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1C5C;
	// mulli r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 * 44;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,320(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// lwz r31,324(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821f1d90
	if (!ctx.cr6.gt) goto loc_821F1D90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f1d90
	if (ctx.cr6.eq) goto loc_821F1D90;
	// bl 0x82230c00
	ctx.lr = 0x821F1C94;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f1d6c
	if (!ctx.cr6.eq) goto loc_821F1D6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_821F1CA4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,201
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 201, ctx.xer);
	// beq cr6,0x821f1cc4
	if (ctx.cr6.eq) goto loc_821F1CC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821f1ca4
	if (ctx.cr6.lt) goto loc_821F1CA4;
	// b 0x821f1ce0
	goto loc_821F1CE0;
loc_821F1CC4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x821F1CE0;
	sub_821847A8(ctx, base);
loc_821F1CE0:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F1CF0:
	// stfs f31,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stfs f31,-12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f31,-4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfsu f31,4(r11)
	// bdnz 0x821f1cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1CF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_821F1D0C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,201
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 201, ctx.xer);
	// beq cr6,0x821f1d2c
	if (ctx.cr6.eq) goto loc_821F1D2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821f1d0c
	if (ctx.cr6.lt) goto loc_821F1D0C;
	// b 0x821f1d48
	goto loc_821F1D48;
loc_821F1D2C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x821F1D48;
	sub_821847A8(ctx, base);
loc_821F1D48:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_821F1D50:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,201
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 201, ctx.xer);
	// beq cr6,0x821f1da0
	if (ctx.cr6.eq) goto loc_821F1DA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821f1d50
	if (ctx.cr6.lt) goto loc_821F1D50;
loc_821F1D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_821F1D74:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,100
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 100, ctx.xer);
	// beq cr6,0x821f1da0
	if (ctx.cr6.eq) goto loc_821F1DA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821f1d74
	if (ctx.cr6.lt) goto loc_821F1D74;
loc_821F1D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F1DA0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x821F1DBC;
	sub_821847A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F1DCC"))) PPC_WEAK_FUNC(sub_821F1DCC);
PPC_FUNC_IMPL(__imp__sub_821F1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1DD0"))) PPC_WEAK_FUNC(sub_821F1DD0);
PPC_FUNC_IMPL(__imp__sub_821F1DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x821f1e0c
	if (ctx.cr6.eq) goto loc_821F1E0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1E0C;
	sub_82183E40(ctx, base);
loc_821F1E0C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1e24
	if (ctx.cr6.eq) goto loc_821F1E24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1E24;
	sub_82183E40(ctx, base);
loc_821F1E24:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1e3c
	if (ctx.cr6.eq) goto loc_821F1E3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1E3C;
	sub_82183E40(ctx, base);
loc_821F1E3C:
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

__attribute__((alias("__imp__sub_821F1E58"))) PPC_WEAK_FUNC(sub_821F1E58);
PPC_FUNC_IMPL(__imp__sub_821F1E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F1E60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1e88
	if (ctx.cr6.eq) goto loc_821F1E88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F1E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F1E88:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1eb0
	if (ctx.cr6.eq) goto loc_821F1EB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F1EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F1EB0:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f1ee8
	if (!ctx.cr6.eq) goto loc_821F1EE8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1ee8
	if (ctx.cr6.eq) goto loc_821F1EE8;
	// bl 0x820ae430
	ctx.lr = 0x821F1ED4;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1ee8
	if (ctx.cr6.eq) goto loc_821F1EE8;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82103e78
	ctx.lr = 0x821F1EE8;
	sub_82103E78(ctx, base);
loc_821F1EE8:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1efc
	if (ctx.cr6.eq) goto loc_821F1EFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1EFC;
	sub_82183E40(ctx, base);
loc_821F1EFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31988);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21700);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18004);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-21184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21184);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f10,316(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1f78
	if (ctx.cr6.eq) goto loc_821F1F78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F1F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F1F78:
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r29,r31,332
	ctx.r29.s64 = ctx.r31.s64 + 332;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// beq cr6,0x821f1fa0
	if (ctx.cr6.eq) goto loc_821F1FA0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1FA0;
	sub_82183E40(ctx, base);
loc_821F1FA0:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1fb8
	if (ctx.cr6.eq) goto loc_821F1FB8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1FB8;
	sub_82183E40(ctx, base);
loc_821F1FB8:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1fd0
	if (ctx.cr6.eq) goto loc_821F1FD0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F1FD0;
	sub_82183E40(ctx, base);
loc_821F1FD0:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
loc_821F1FE8:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1ffc
	if (ctx.cr6.eq) goto loc_821F1FFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F1FFC;
	sub_82183E40(ctx, base);
loc_821F1FFC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r30,116(r29)
	ea = 116 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
	// bne 0x821f1fe8
	if (!ctx.cr0.eq) goto loc_821F1FE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F2020"))) PPC_WEAK_FUNC(sub_821F2020);
PPC_FUNC_IMPL(__imp__sub_821F2020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F2028;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f2150
	if (ctx.cr6.eq) goto loc_821F2150;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f2064
	if (!ctx.cr6.eq) goto loc_821F2064;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f2150
	if (ctx.cr6.eq) goto loc_821F2150;
loc_821F2064:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821f2078
	if (ctx.cr6.eq) goto loc_821F2078;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821f213c
	if (!ctx.cr6.eq) goto loc_821F213C;
loc_821F2078:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f213c
	if (ctx.cr6.eq) goto loc_821F213C;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821f20b0
	if (!ctx.cr6.eq) goto loc_821F20B0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821f20b0
	if (!ctx.cr6.eq) goto loc_821F20B0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821f20b0
	if (!ctx.cr6.eq) goto loc_821F20B0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f2150
	if (ctx.cr6.eq) goto loc_821F2150;
loc_821F20B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2150
	if (ctx.cr6.eq) goto loc_821F2150;
	// bl 0x820a0608
	ctx.lr = 0x821F20C4;
	sub_820A0608(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2150
	if (ctx.cr6.eq) goto loc_821F2150;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x82097288
	ctx.lr = 0x821F20D8;
	sub_82097288(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x821f20e8
	if (ctx.cr6.eq) goto loc_821F20E8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_821F20E8:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f2348
	ctx.lr = 0x821F210C;
	sub_820F2348(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821F213C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
loc_821F2150:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F215C"))) PPC_WEAK_FUNC(sub_821F215C);
PPC_FUNC_IMPL(__imp__sub_821F215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2160"))) PPC_WEAK_FUNC(sub_821F2160);
PPC_FUNC_IMPL(__imp__sub_821F2160) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x821f2020
	sub_821F2020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F217C"))) PPC_WEAK_FUNC(sub_821F217C);
PPC_FUNC_IMPL(__imp__sub_821F217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2180"))) PPC_WEAK_FUNC(sub_821F2180);
PPC_FUNC_IMPL(__imp__sub_821F2180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F2188;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821f21b0
	if (ctx.cr6.eq) goto loc_821F21B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821f2294
	if (!ctx.cr6.eq) goto loc_821F2294;
loc_821F21B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2294
	if (ctx.cr6.eq) goto loc_821F2294;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820a0608
	ctx.lr = 0x821F21C8;
	sub_820A0608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2294
	if (ctx.cr6.eq) goto loc_821F2294;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,280(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f1c08
	ctx.lr = 0x821F21E8;
	sub_821F1C08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f2244
	if (!ctx.cr6.eq) goto loc_821F2244;
	// ld r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 416);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 424);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// addi r11,r31,416
	ctx.r11.s64 = ctx.r31.s64 + 416;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfsx f13,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r11.u64);
	// std r3,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r3.u64);
loc_821F2244:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,400
	ctx.r6.s64 = ctx.r31.s64 + 400;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r5,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r5.u64);
	// std r4,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r4.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F2294:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F22A0"))) PPC_WEAK_FUNC(sub_821F22A0);
PPC_FUNC_IMPL(__imp__sub_821F22A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821F22A8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r27,-8960(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821f2364
	if (ctx.cr6.eq) goto loc_821F2364;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_821F22CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a0608
	ctx.lr = 0x821F22D8;
	sub_820A0608(ctx, base);
	// stw r25,2992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2992, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820bed48
	ctx.lr = 0x821F22E4;
	sub_820BED48(ctx, base);
	// lwz r10,368(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 368);
	// addic. r11,r31,2064
	ctx.xer.ca = ctx.r31.u32 > 4294965231;
	ctx.r11.s64 = ctx.r31.s64 + 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r10.u32);
	// beq 0x821f22f8
	if (ctx.cr0.eq) goto loc_821F22F8;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_821F22F8:
	// stw r28,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bf8e8
	ctx.lr = 0x821F2308;
	sub_820BF8E8(ctx, base);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F2318;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x821F2324;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F2330;
	sub_820EF4F8(ctx, base);
	// addi r31,r31,900
	ctx.r31.s64 = ctx.r31.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F2340;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x821F234C;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F2358;
	sub_820EF4F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x821f22cc
	if (ctx.cr6.lt) goto loc_821F22CC;
loc_821F2364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821F236C"))) PPC_WEAK_FUNC(sub_821F236C);
PPC_FUNC_IMPL(__imp__sub_821F236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2370"))) PPC_WEAK_FUNC(sub_821F2370);
PPC_FUNC_IMPL(__imp__sub_821F2370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215fb70
	ctx.lr = 0x821F23A0;
	sub_8215FB70(ctx, base);
	// mulli r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 * 116;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F23C8"))) PPC_WEAK_FUNC(sub_821F23C8);
PPC_FUNC_IMPL(__imp__sub_821F23C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F23D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209f860
	ctx.lr = 0x821F23F4;
	sub_8209F860(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820a0750
	ctx.lr = 0x821F2404;
	sub_820A0750(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0608
	ctx.lr = 0x821F2410;
	sub_820A0608(ctx, base);
	// addi r28,r3,596
	ctx.r28.s64 = ctx.r3.s64 + 596;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F2424;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82156f00
	ctx.lr = 0x821F2430;
	sub_82156F00(ctx, base);
	// addi r28,r31,900
	ctx.r28.s64 = ctx.r31.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F2440;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82156f00
	ctx.lr = 0x821F244C;
	sub_82156F00(ctx, base);
	// lwz r9,2048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// li r10,10010
	ctx.r10.s64 = 10010;
	// addic. r11,r31,2064
	ctx.xer.ca = ctx.r31.u32 > 4294965231;
	ctx.r11.s64 = ctx.r31.s64 + 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 368, ctx.r9.u32);
	// stw r10,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r10.u32);
	// beq 0x821f246c
	if (ctx.cr0.eq) goto loc_821F246C;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_821F246C:
	// stw r28,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// stw r11,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r11.u32);
	// bl 0x820bec88
	ctx.lr = 0x821F2480;
	sub_820BEC88(ctx, base);
	// mulli r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 * 116;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x821f24c0
	if (!ctx.cr6.eq) goto loc_821F24C0;
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// b 0x821f24c8
	goto loc_821F24C8;
loc_821F24C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_821F24C8:
	// bl 0x821f2020
	ctx.lr = 0x821F24CC;
	sub_821F2020(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F24E8"))) PPC_WEAK_FUNC(sub_821F24E8);
PPC_FUNC_IMPL(__imp__sub_821F24E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F24F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0608
	ctx.lr = 0x821F2508;
	sub_820A0608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,596
	ctx.r3.s64 = ctx.r3.s64 + 596;
	// bl 0x82156f00
	ctx.lr = 0x821F2518;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// bl 0x82156f00
	ctx.lr = 0x821F2524;
	sub_82156F00(ctx, base);
	// mulli r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 * 116;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F2544"))) PPC_WEAK_FUNC(sub_821F2544);
PPC_FUNC_IMPL(__imp__sub_821F2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2548"))) PPC_WEAK_FUNC(sub_821F2548);
PPC_FUNC_IMPL(__imp__sub_821F2548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F2550;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,-8960(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f2608
	if (ctx.cr6.eq) goto loc_821F2608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a0608
	ctx.lr = 0x821F2574;
	sub_820A0608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2608
	if (ctx.cr6.eq) goto loc_821F2608;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209f860
	ctx.lr = 0x821F2594;
	sub_8209F860(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a0750
	ctx.lr = 0x821F25A4;
	sub_820A0750(ctx, base);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F25B4;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x821F25C0;
	sub_82156F00(ctx, base);
	// addi r30,r31,900
	ctx.r30.s64 = ctx.r31.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F25D0;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x821F25DC;
	sub_82156F00(ctx, base);
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x821F25EC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2608
	if (ctx.cr6.eq) goto loc_821F2608;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2608
	if (ctx.cr6.eq) goto loc_821F2608;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_821F2608:
	// mulli r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 * 116;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F2628"))) PPC_WEAK_FUNC(sub_821F2628);
PPC_FUNC_IMPL(__imp__sub_821F2628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f268c
	if (!ctx.cr6.eq) goto loc_821F268C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2674
	if (ctx.cr6.eq) goto loc_821F2674;
	// bl 0x82163a60
	ctx.lr = 0x821F2668;
	sub_82163A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2674
	if (ctx.cr6.eq) goto loc_821F2674;
	// bl 0x82101208
	ctx.lr = 0x821F2674;
	sub_82101208(ctx, base);
loc_821F2674:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f268c
	if (ctx.cr6.eq) goto loc_821F268C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209efa8
	ctx.lr = 0x821F268C;
	sub_8209EFA8(ctx, base);
loc_821F268C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F26B4"))) PPC_WEAK_FUNC(sub_821F26B4);
PPC_FUNC_IMPL(__imp__sub_821F26B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F26B8"))) PPC_WEAK_FUNC(sub_821F26B8);
PPC_FUNC_IMPL(__imp__sub_821F26B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f26e8
	if (ctx.cr6.eq) goto loc_821F26E8;
	// bl 0x820a0c38
	ctx.lr = 0x821F26E8;
	sub_820A0C38(ctx, base);
loc_821F26E8:
	// mulli r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 * 116;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F2718"))) PPC_WEAK_FUNC(sub_821F2718);
PPC_FUNC_IMPL(__imp__sub_821F2718) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8215bd28
	ctx.lr = 0x821F273C;
	sub_8215BD28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2748
	if (ctx.cr6.eq) goto loc_821F2748;
	// bl 0x8216bfd0
	ctx.lr = 0x821F2748;
	sub_8216BFD0(ctx, base);
loc_821F2748:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f276c
	if (ctx.cr6.eq) goto loc_821F276C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82163a78
	ctx.lr = 0x821F2760;
	sub_82163A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f276c
	if (ctx.cr6.eq) goto loc_821F276C;
	// bl 0x821012b0
	ctx.lr = 0x821F276C;
	sub_821012B0(ctx, base);
loc_821F276C:
	// mulli r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 * 116;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821f2800
	if (!ctx.cr6.eq) goto loc_821F2800;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f2800
	if (!ctx.cr6.eq) goto loc_821F2800;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_821F27C0:
	// lwzu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x821f27c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F27C0;
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stb r9,12(r8)
	PPC_STORE_U8(ctx.r8.u32 + 12, ctx.r9.u8);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x821f2884
	goto loc_821F2884;
loc_821F2800:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// stw r6,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stb r9,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r9.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stb r9,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_821F2884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F289C"))) PPC_WEAK_FUNC(sub_821F289C);
PPC_FUNC_IMPL(__imp__sub_821F289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F28A0"))) PPC_WEAK_FUNC(sub_821F28A0);
PPC_FUNC_IMPL(__imp__sub_821F28A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215fae8
	ctx.lr = 0x821F28C8;
	sub_8215FAE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f28e4
	if (!ctx.cr6.eq) goto loc_821F28E4;
	// mulli r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 * 116;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x821f28e8
	goto loc_821F28E8;
loc_821F28E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F28E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F2900"))) PPC_WEAK_FUNC(sub_821F2900);
PPC_FUNC_IMPL(__imp__sub_821F2900) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2934
	if (ctx.cr6.eq) goto loc_821F2934;
	// bl 0x82163a60
	ctx.lr = 0x821F2928;
	sub_82163A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2934
	if (ctx.cr6.eq) goto loc_821F2934;
	// bl 0x82101208
	ctx.lr = 0x821F2934;
	sub_82101208(ctx, base);
loc_821F2934:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f294c
	if (ctx.cr6.eq) goto loc_821F294C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209efa8
	ctx.lr = 0x821F294C;
	sub_8209EFA8(ctx, base);
loc_821F294C:
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

__attribute__((alias("__imp__sub_821F2960"))) PPC_WEAK_FUNC(sub_821F2960);
PPC_FUNC_IMPL(__imp__sub_821F2960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82185a50
	ctx.lr = 0x821F2980;
	sub_82185A50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f299c
	if (ctx.cr6.eq) goto loc_821F299C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F2998;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F299C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F29B4"))) PPC_WEAK_FUNC(sub_821F29B4);
PPC_FUNC_IMPL(__imp__sub_821F29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F29B8"))) PPC_WEAK_FUNC(sub_821F29B8);
PPC_FUNC_IMPL(__imp__sub_821F29B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821F29C0;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2b50
	if (ctx.cr6.eq) goto loc_821F2B50;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2b50
	if (ctx.cr6.eq) goto loc_821F2B50;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f2b50
	if (ctx.cr6.eq) goto loc_821F2B50;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f2b50
	if (ctx.cr6.eq) goto loc_821F2B50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dd230
	ctx.lr = 0x821F2A04;
	sub_820DD230(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x821F2A14;
	sub_821ADE68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821F2A20;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcf8
	ctx.lr = 0x821F2A2C;
	sub_821ADCF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821F2A38;
	sub_821ADDC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x821F2A44;
	sub_821ADD70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x821F2A50;
	sub_821ADCD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x821F2A60;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x821F2A6C;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad318
	ctx.lr = 0x821F2A78;
	sub_821AD318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6f8
	ctx.lr = 0x821F2A84;
	sub_821AD6F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x821F2A90;
	sub_821AD2D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x821F2A9C;
	sub_821AD528(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f2af0
	if (ctx.cr6.eq) goto loc_821F2AF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F2AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F2AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821F2AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F2AF0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821F2AFC;
	sub_821AD6F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821F2B08;
	sub_821AD498(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821F2B14;
	sub_821AD600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad318
	ctx.lr = 0x821F2B20;
	sub_821AD318(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x821F2B2C;
	sub_821AD528(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x821F2B38;
	sub_821AD2D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2b50
	if (ctx.cr6.eq) goto loc_821F2B50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d16c0
	ctx.lr = 0x821F2B50;
	sub_821D16C0(ctx, base);
loc_821F2B50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821F2B58"))) PPC_WEAK_FUNC(sub_821F2B58);
PPC_FUNC_IMPL(__imp__sub_821F2B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stb r10,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r10.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stb r9,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r9.u8);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stb r8,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r8.u8);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stb r7,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r7.u8);
	// lwz r6,-4(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
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
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r8,13(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r6,15(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r6,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r6.u8);
	// stb r9,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r9.u8);
	// stb r8,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r8.u8);
	// stb r7,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r7.u8);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r4,21(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r10,23(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r5,22(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// stb r5,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r5.u8);
	// stb r4,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r4.u8);
	// stb r11,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r11.u8);
	// stb r10,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r10.u8);
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lbz r9,30(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r8,29(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// lbz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lbz r6,31(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// stb r6,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r6.u8);
	// stb r9,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r9.u8);
	// stb r8,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r8.u8);
	// stb r7,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r7.u8);
	// lfs f11,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lbz r4,9(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r5,10(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r7,17(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r9,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r9.u8);
	// stb r8,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r8.u8);
	// stb r7,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r7.u8);
	// stb r6,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r6.u8);
	// lfs f9,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lbz r5,27(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// lbz r4,26(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r11,25(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// stb r5,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r5.u8);
	// stb r4,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r4.u8);
	// stb r11,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r11.u8);
	// stb r10,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r10.u8);
	// lfs f8,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lbz r7,35(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// lbz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r8,33(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// lbz r6,34(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// stb r7,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r7.u8);
	// stb r9,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r9.u8);
	// stb r8,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r8.u8);
	// stb r6,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r6.u8);
	// lfs f7,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F2CE4"))) PPC_WEAK_FUNC(sub_821F2CE4);
PPC_FUNC_IMPL(__imp__sub_821F2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2CE8"))) PPC_WEAK_FUNC(sub_821F2CE8);
PPC_FUNC_IMPL(__imp__sub_821F2CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r7,11(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r5,13(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r6,14(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r9,17(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r7,19(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lbz r5,21(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r6,22(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lfs f9,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lbz r9,26(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r8,25(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r10,27(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lbz r6,31(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// lbz r5,30(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r4,29(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lfs f7,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lbz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// lbz r9,33(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// lbz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r7,35(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// lfs f6,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lbz r6,38(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r5,37(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// lbz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lbz r11,39(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F2EA0"))) PPC_WEAK_FUNC(sub_821F2EA0);
PPC_FUNC_IMPL(__imp__sub_821F2EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821F2EA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x821F2EBC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F2EC8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821F2ECC;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821F2ED8;
	sub_82183078(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x821f2eec
	if (ctx.cr6.lt) goto loc_821F2EEC;
	// bne cr6,0x821f2ef4
	if (!ctx.cr6.eq) goto loc_821F2EF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821f2ef0
	goto loc_821F2EF0;
loc_821F2EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F2EF0:
	// bl 0x821830f8
	ctx.lr = 0x821F2EF4;
	sub_821830F8(ctx, base);
loc_821F2EF4:
	// bl 0x82183850
	ctx.lr = 0x821F2EF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821f2f10
	if (ctx.cr6.eq) goto loc_821F2F10;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82183448
	ctx.lr = 0x821F2F0C;
	sub_82183448(ctx, base);
	// b 0x821f2f18
	goto loc_821F2F18;
loc_821F2F10:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821845a0
	ctx.lr = 0x821F2F18;
	sub_821845A0(ctx, base);
loc_821F2F18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2f38
	if (ctx.cr6.eq) goto loc_821F2F38;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821f18d0
	ctx.lr = 0x821F2F2C;
	sub_821F18D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -768, ctx.r3.u32);
	// b 0x821f2f44
	goto loc_821F2F44;
loc_821F2F38:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -768, ctx.r11.u32);
loc_821F2F44:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x821f2f68
	if (ctx.cr6.lt) goto loc_821F2F68;
	// bne cr6,0x821f2f70
	if (!ctx.cr6.eq) goto loc_821F2F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821F2F58;
	sub_821830F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F2F60;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F2F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x821F2F70;
	sub_821830F8(ctx, base);
loc_821F2F70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F2F78;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821F2F80"))) PPC_WEAK_FUNC(sub_821F2F80);
PPC_FUNC_IMPL(__imp__sub_821F2F80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f12,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821F2FE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2180
	ctx.lr = 0x821F2FF4;
	sub_821F2180(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821f2fe8
	if (ctx.cr6.lt) goto loc_821F2FE8;
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3038
	if (ctx.cr6.eq) goto loc_821F3038;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,656
	ctx.r8.s64 = ctx.r11.s64 + 656;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,656(r11)
	PPC_STORE_U64(ctx.r11.u32 + 656, ctx.r7.u64);
	// std r6,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r6.u64);
	// std r5,672(r11)
	PPC_STORE_U64(ctx.r11.u32 + 672, ctx.r5.u64);
	// std r4,680(r11)
	PPC_STORE_U64(ctx.r11.u32 + 680, ctx.r4.u64);
loc_821F3038:
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

__attribute__((alias("__imp__sub_821F3050"))) PPC_WEAK_FUNC(sub_821F3050);
PPC_FUNC_IMPL(__imp__sub_821F3050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F3058;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821f330c
	if (ctx.cr6.lt) goto loc_821F330C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x821f330c
	if (!ctx.cr6.lt) goto loc_821F330C;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f330c
	if (ctx.cr6.eq) goto loc_821F330C;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821f32d0
	if (ctx.cr6.gt) goto loc_821F32D0;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12472
	ctx.r12.s64 = ctx.r12.s64 + 12472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,12516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12516);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,12588(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12588);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,12668(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12668);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,13008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	// lwz r16,12916(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12916);
	// lwz r16,12516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12516);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f17e0
	ctx.lr = 0x821F30EC;
	sub_821F17E0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F30FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f30fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F30FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82230c00
	ctx.lr = 0x821F3134;
	sub_82230C00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f3144
	if (!ctx.cr6.eq) goto loc_821F3144;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_821F3144:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F3164:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f3164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F3164;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821f322c
	if (!ctx.cr6.eq) goto loc_821F322C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f322c
	if (!ctx.cr6.eq) goto loc_821F322C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3300
	if (ctx.cr6.eq) goto loc_821F3300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820a0608
	ctx.lr = 0x821F31B0;
	sub_820A0608(ctx, base);
	// addi r31,r3,596
	ctx.r31.s64 = ctx.r3.s64 + 596;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F31C4;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x821F31D0;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F31DC;
	sub_820EF4F8(ctx, base);
	// addi r31,r29,900
	ctx.r31.s64 = ctx.r29.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x821F31EC;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x821F31F8;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x821F3204;
	sub_820EF4F8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f3300
	if (ctx.cr6.eq) goto loc_821F3300;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821f3300
	if (ctx.cr6.eq) goto loc_821F3300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f23c8
	ctx.lr = 0x821F3220;
	sub_821F23C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821F322C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f2548
	ctx.lr = 0x821F3238;
	sub_821F2548(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F325C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f325c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F325C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f3294
	if (!ctx.cr6.eq) goto loc_821F3294;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f2900
	ctx.lr = 0x821F328C;
	sub_821F2900(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_821F3294:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F32B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f32b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F32B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821F32D0:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F32F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f32f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F32F4;
loc_821F3300:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821F330C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F3318"))) PPC_WEAK_FUNC(sub_821F3318);
PPC_FUNC_IMPL(__imp__sub_821F3318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F3320;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249924
	ctx.lr = 0x821F3328;
	sub_82249924(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,248(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x821F333C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3348;
	sub_821837D0(ctx, base);
	// lwz r3,324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f335c
	if (ctx.cr6.eq) goto loc_821F335C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F335C;
	sub_82183E40(ctx, base);
loc_821F335C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,31988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31988);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r30,284
	ctx.r31.s64 = ctx.r30.s64 + 284;
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r29,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r29.u32);
	// lfs f29,-21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21700);
	ctx.f29.f64 = double(temp.f32);
	// stw r29,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r29.u32);
	// lfs f28,18004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18004);
	ctx.f28.f64 = double(temp.f32);
	// stw r29,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r29.u32);
	// lfs f27,-21184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21184);
	ctx.f27.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f31,284(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// stfs f30,288(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 288, temp.u32);
	// stfs f31,292(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 292, temp.u32);
	// stfs f31,296(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 296, temp.u32);
	// stfs f31,300(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 300, temp.u32);
	// stfs f31,304(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 304, temp.u32);
	// stfs f29,308(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 308, temp.u32);
	// stfs f28,312(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 312, temp.u32);
	// stfs f27,316(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 316, temp.u32);
	// beq cr6,0x821f33d0
	if (ctx.cr6.eq) goto loc_821F33D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F33D0;
	sub_82183E40(ctx, base);
loc_821F33D0:
	// stw r29,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r29.u32);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,24(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f28,28(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f27,32(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x821F3410;
	sub_821847A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r28,40
	ctx.r27.s64 = ctx.r28.s64 + 40;
	// bl 0x821f2ce8
	ctx.lr = 0x821F341C;
	sub_821F2CE8(ctx, base);
	// lwz r31,320(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f34ac
	if (!ctx.cr6.gt) goto loc_821F34AC;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821f3448
	if (ctx.cr6.gt) goto loc_821F3448;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821f344c
	goto loc_821F344C;
loc_821F3448:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_821F344C:
	// bl 0x82183850
	ctx.lr = 0x821F3450;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f3468
	if (ctx.cr6.eq) goto loc_821F3468;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821F3464;
	sub_82183448(ctx, base);
	// b 0x821f3474
	goto loc_821F3474;
loc_821F3468:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F3474;
	sub_821845A0(ctx, base);
loc_821F3474:
	// stw r3,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r3.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x821F348C;
	sub_821847A8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f34ac
	if (!ctx.cr6.gt) goto loc_821F34AC;
loc_821F3494:
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x821f2b58
	ctx.lr = 0x821F34A0;
	sub_821F2B58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// bne 0x821f3494
	if (!ctx.cr0.eq) goto loc_821F3494;
loc_821F34AC:
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// bl 0x821f2f80
	ctx.lr = 0x821F34C0;
	sub_821F2F80(ctx, base);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F34CC;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249970
	ctx.lr = 0x821F34D8;
	sub_82249970(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F34DC"))) PPC_WEAK_FUNC(sub_821F34DC);
PPC_FUNC_IMPL(__imp__sub_821F34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F34E0"))) PPC_WEAK_FUNC(sub_821F34E0);
PPC_FUNC_IMPL(__imp__sub_821F34E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821F34E8;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,248(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x821F34FC;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3508;
	sub_821837D0(ctx, base);
	// addi r31,r30,332
	ctx.r31.s64 = ctx.r30.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1dd0
	ctx.lr = 0x821F3514;
	sub_821F1DD0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r29,r30,336
	ctx.r29.s64 = ctx.r30.s64 + 336;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// stw r9,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r9.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// stw r8,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r8.u32);
	// lbz r6,332(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 332);
	// lbz r5,335(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 335);
	// lbz r4,334(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 334);
	// lbz r7,333(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 333);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// stw r11,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r11.u32);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 336);
	// lbz r9,339(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 339);
	// lbz r8,338(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 338);
	// lbz r3,337(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 337);
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r7.u32);
	// ble cr6,0x821f359c
	if (!ctx.cr6.gt) goto loc_821F359C;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_821F359C:
	// bl 0x82183850
	ctx.lr = 0x821F35A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f35b8
	if (ctx.cr6.eq) goto loc_821F35B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183448
	ctx.lr = 0x821F35B4;
	sub_82183448(ctx, base);
	// b 0x821f35c4
	goto loc_821F35C4;
loc_821F35B8:
	// addi r11,r26,15
	ctx.r11.s64 = ctx.r26.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F35C4;
	sub_821845A0(ctx, base);
loc_821F35C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r3.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821f35dc
	if (!ctx.cr6.gt) goto loc_821F35DC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_821F35DC:
	// bl 0x82183850
	ctx.lr = 0x821F35E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f35f8
	if (ctx.cr6.eq) goto loc_821F35F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183448
	ctx.lr = 0x821F35F4;
	sub_82183448(ctx, base);
	// b 0x821f3604
	goto loc_821F3604;
loc_821F35F8:
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F3604;
	sub_821845A0(ctx, base);
loc_821F3604:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f3668
	if (!ctx.cr6.gt) goto loc_821F3668;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F361C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r5,83(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r4,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r4.u8);
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stb r6,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r3,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821f361c
	if (ctx.cr6.lt) goto loc_821F361C;
loc_821F3668:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f36c8
	if (!ctx.cr6.gt) goto loc_821F36C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F367C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,348(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r5,85(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
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
	// stwx r3,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821f367c
	if (ctx.cr6.lt) goto loc_821F367C;
loc_821F36C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// addi r31,r30,340
	ctx.r31.s64 = ctx.r30.s64 + 340;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// lbz r5,342(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 342);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// lbz r8,340(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 340);
	// lbz r7,343(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 343);
	// lbz r6,341(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 341);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// bgt cr6,0x821f3720
	if (ctx.cr6.gt) goto loc_821F3720;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821f3724
	goto loc_821F3724;
loc_821F3720:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_821F3724:
	// bl 0x82183850
	ctx.lr = 0x821F3728;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f3740
	if (ctx.cr6.eq) goto loc_821F3740;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821F373C;
	sub_82183448(ctx, base);
	// b 0x821f374c
	goto loc_821F374C;
loc_821F3740:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F374C;
	sub_821845A0(ctx, base);
loc_821F374C:
	// stw r3,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x821F3768;
	sub_821847A8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f3818
	if (!ctx.cr6.gt) goto loc_821F3818;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F377C:
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r4,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r4.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stb r3,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r3.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821f377c
	if (ctx.cr6.lt) goto loc_821F377C;
loc_821F3818:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821F3828;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821F3830"))) PPC_WEAK_FUNC(sub_821F3830);
PPC_FUNC_IMPL(__imp__sub_821F3830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821F3838;
	sub_82248764(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,44(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,48(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82230b98
	ctx.lr = 0x821F3868;
	sub_82230B98(ctx, base);
	// lis r21,-32182
	ctx.r21.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-420(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -420);
	// lwz r22,60(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// bl 0x82163a60
	ctx.lr = 0x821F387C;
	sub_82163A60(ctx, base);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f38ac
	if (!ctx.cr6.eq) goto loc_821F38AC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f38ac
	if (ctx.cr6.eq) goto loc_821F38AC;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f38ac
	if (ctx.cr6.eq) goto loc_821F38AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F38AC;
	sub_82183E40(ctx, base);
loc_821F38AC:
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r19.u32);
	// bl 0x82101208
	ctx.lr = 0x821F38BC;
	sub_82101208(ctx, base);
	// clrlwi r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	// stb r20,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r20.u8);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stb r24,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r24.u8);
	// bne cr6,0x821f38f8
	if (!ctx.cr6.eq) goto loc_821F38F8;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1088(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1088);
	// bl 0x82230860
	ctx.lr = 0x821F38E8;
	sub_82230860(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1088(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1088);
	// bl 0x82230668
	ctx.lr = 0x821F38F4;
	sub_82230668(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_821F38F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82231530
	ctx.lr = 0x821F3908;
	sub_82231530(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230c00
	ctx.lr = 0x821F3914;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f39d4
	if (!ctx.cr6.eq) goto loc_821F39D4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x821f39d4
	if (!ctx.cr6.eq) goto loc_821F39D4;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f39d4
	if (ctx.cr6.eq) goto loc_821F39D4;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x8209eda0
	ctx.lr = 0x821F3938;
	sub_8209EDA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163dd0
	ctx.lr = 0x821F3940;
	sub_82163DD0(ctx, base);
	// mulli r11,r29,1748
	ctx.r11.s64 = ctx.r29.s64 * 1748;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r25,r11,5584
	ctx.r25.s64 = ctx.r11.s64 + 5584;
	// bl 0x82182e90
	ctx.lr = 0x821F3950;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821F3958;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3964;
	sub_821837D0(ctx, base);
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82080000
	ctx.lr = 0x821F396C;
	sub_82080000(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3984
	if (ctx.cr6.eq) goto loc_821F3984;
	// addi r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 + 1000;
	// bl 0x82239f58
	ctx.lr = 0x821F3980;
	sub_82239F58(ctx, base);
	// b 0x821f3988
	goto loc_821F3988;
loc_821F3984:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_821F3988:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223a3f8
	ctx.lr = 0x821F3998;
	sub_8223A3F8(ctx, base);
	// li r5,1100
	ctx.r5.s64 = 1100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// bl 0x821847a8
	ctx.lr = 0x821F39A8;
	sub_821847A8(ctx, base);
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// stb r19,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r19.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x821f39cc
	if (ctx.cr6.eq) goto loc_821F39CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x821F39CC;
	sub_82183E40(ctx, base);
loc_821F39CC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F39D4;
	sub_821837D0(ctx, base);
loc_821F39D4:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215c050
	ctx.lr = 0x821F39E0;
	sub_8215C050(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230b90
	ctx.lr = 0x821F39EC;
	sub_82230B90(ctx, base);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,13912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13912);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82230b90
	ctx.lr = 0x821F3A18;
	sub_82230B90(ctx, base);
	// lhz r7,26(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,-420(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -420);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f31,f9,f31
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x82163a78
	ctx.lr = 0x821F3A70;
	sub_82163A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821012b0
	ctx.lr = 0x821F3A78;
	sub_821012B0(ctx, base);
	// stfs f30,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stb r24,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r24.u8);
	// stfs f31,64(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stb r24,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r24.u8);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215c060
	ctx.lr = 0x821F3A94;
	sub_8215C060(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r20,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r20.u8);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stb r19,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r19.u8);
	// stw r24,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r24.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r8.u64);
	// std r7,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r7.u64);
	// std r6,48(r29)
	PPC_STORE_U64(ctx.r29.u32 + 48, ctx.r6.u64);
	// std r5,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r5.u64);
	// beq cr6,0x821f3bac
	if (ctx.cr6.eq) goto loc_821F3BAC;
	// bl 0x82227aa0
	ctx.lr = 0x821F3ADC;
	sub_82227AA0(ctx, base);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r26,-732(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + -732);
	// stb r24,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r24.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F3B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230c00
	ctx.lr = 0x821F3B0C;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f3bac
	if (ctx.cr6.eq) goto loc_821F3BAC;
	// bl 0x82228e00
	ctx.lr = 0x821F3B18;
	sub_82228E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f3b94
	if (ctx.cr6.eq) goto loc_821F3B94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228080
	ctx.lr = 0x821F3B2C;
	sub_82228080(ctx, base);
	// bl 0x82230c00
	ctx.lr = 0x821F3B30;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f3b94
	if (ctx.cr6.eq) goto loc_821F3B94;
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// bl 0x82239f58
	ctx.lr = 0x821F3B40;
	sub_82239F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228dd8
	ctx.lr = 0x821F3B4C;
	sub_82228DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,1100
	ctx.r5.s64 = 1100;
	// bl 0x821847a8
	ctx.lr = 0x821F3B5C;
	sub_821847A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F3B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r4,1000
	ctx.r5.s64 = ctx.r4.s64 + 1000;
	// bl 0x8223a028
	ctx.lr = 0x821F3B84;
	sub_8223A028(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228d78
	ctx.lr = 0x821F3B94;
	sub_82228D78(ctx, base);
loc_821F3B94:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// lwz r3,-732(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x821F3BA8;
	sub_82228DD8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_821F3BAC:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x8215bd60
	ctx.lr = 0x821F3BB4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f3bc4
	if (ctx.cr6.eq) goto loc_821F3BC4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_821F3BC4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215fd90
	ctx.lr = 0x821F3BD8;
	sub_8215FD90(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r19,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r19.u32);
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821F3BF4"))) PPC_WEAK_FUNC(sub_821F3BF4);
PPC_FUNC_IMPL(__imp__sub_821F3BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3BF8"))) PPC_WEAK_FUNC(sub_821F3BF8);
PPC_FUNC_IMPL(__imp__sub_821F3BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-8656
	ctx.r10.s64 = ctx.r11.s64 + -8656;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821f1e58
	ctx.lr = 0x821F3C24;
	sub_821F1E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821F3C2C;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f3c48
	if (ctx.cr6.eq) goto loc_821F3C48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F3C44;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F3C48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F3C60"))) PPC_WEAK_FUNC(sub_821F3C60);
PPC_FUNC_IMPL(__imp__sub_821F3C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821F3C68;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f3f64
	if (!ctx.cr6.eq) goto loc_821F3F64;
	// lwz r30,248(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// bl 0x82183078
	ctx.lr = 0x821F3C84;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3C90;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3cc8
	if (ctx.cr6.eq) goto loc_821F3CC8;
	// bl 0x820ae430
	ctx.lr = 0x821F3CA8;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3cc8
	if (ctx.cr6.eq) goto loc_821F3CC8;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f3cc8
	if (!ctx.cr6.eq) goto loc_821F3CC8;
	// stw r24,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82103e78
	ctx.lr = 0x821F3CC8;
	sub_82103E78(ctx, base);
loc_821F3CC8:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3ce8
	if (ctx.cr6.eq) goto loc_821F3CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F3CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F3CE8:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r3,736
	ctx.r3.s64 = 736;
	// stw r27,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r27.u32);
	// bl 0x82080000
	ctx.lr = 0x821F3CF8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3d08
	if (ctx.cr6.eq) goto loc_821F3D08;
	// bl 0x82205548
	ctx.lr = 0x821F3D04;
	sub_82205548(ctx, base);
	// b 0x821f3d0c
	goto loc_821F3D0C;
loc_821F3D08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821F3D0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r3,656
	ctx.r7.s64 = ctx.r3.s64 + 656;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r5,656(r3)
	PPC_STORE_U64(ctx.r3.u32 + 656, ctx.r5.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r6,664(r3)
	PPC_STORE_U64(ctx.r3.u32 + 664, ctx.r6.u64);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,672(r3)
	PPC_STORE_U64(ctx.r3.u32 + 672, ctx.r11.u64);
	// std r4,680(r3)
	PPC_STORE_U64(ctx.r3.u32 + 680, ctx.r4.u64);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3d8c
	if (ctx.cr6.eq) goto loc_821F3D8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F3D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F3D8C:
	// stw r27,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r27.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x821F3D98;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3db0
	if (ctx.cr6.eq) goto loc_821F3DB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x82204d60
	ctx.lr = 0x821F3DAC;
	sub_82204D60(ctx, base);
	// b 0x821f3db4
	goto loc_821F3DB4;
loc_821F3DB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821F3DB4:
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3dd8
	if (ctx.cr6.eq) goto loc_821F3DD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F3DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F3DD8:
	// stw r27,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r27.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82080000
	ctx.lr = 0x821F3DE4;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3e14
	if (ctx.cr6.eq) goto loc_821F3E14;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,79
	ctx.r4.s64 = 79;
	// bl 0x821859a0
	ctx.lr = 0x821F3E00;
	sub_821859A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-8648
	ctx.r9.s64 = ctx.r10.s64 + -8648;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x821f3e18
	goto loc_821F3E18;
loc_821F3E14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821F3E18:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x821F3E20;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821F3E2C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821F3E30;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821F3E3C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821F3E44;
	sub_821830F8(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x821F3E4C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3e5c
	if (ctx.cr6.eq) goto loc_821F3E5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82204fa8
	ctx.lr = 0x821F3E5C;
	sub_82204FA8(ctx, base);
loc_821F3E5C:
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821f3e74
	if (ctx.cr6.lt) goto loc_821F3E74;
	// bne cr6,0x821f3e7c
	if (!ctx.cr6.eq) goto loc_821F3E7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821f3e78
	goto loc_821F3E78;
loc_821F3E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F3E78:
	// bl 0x821830f8
	ctx.lr = 0x821F3E7C;
	sub_821830F8(ctx, base);
loc_821F3E7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3E84;
	sub_821837D0(ctx, base);
	// bl 0x8215c058
	ctx.lr = 0x821F3E88;
	sub_8215C058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821F3E90;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3E9C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821F3EA0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821F3EAC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821F3EB4;
	sub_821830F8(ctx, base);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// li r28,2
	ctx.r28.s64 = 2;
loc_821F3EBC:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3ed0
	if (ctx.cr6.eq) goto loc_821F3ED0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F3ED0;
	sub_82183E40(ctx, base);
loc_821F3ED0:
	// stw r27,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r27.u32);
	// bl 0x82183850
	ctx.lr = 0x821F3ED8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821f3ef0
	if (ctx.cr6.eq) goto loc_821F3EF0;
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82183448
	ctx.lr = 0x821F3EEC;
	sub_82183448(ctx, base);
	// b 0x821f3ef8
	goto loc_821F3EF8;
loc_821F3EF0:
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x821845a0
	ctx.lr = 0x821F3EF8;
	sub_821845A0(ctx, base);
loc_821F3EF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3f14
	if (ctx.cr6.eq) goto loc_821F3F14;
	// addi r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 + 1000;
	// bl 0x82239f58
	ctx.lr = 0x821F3F0C;
	sub_82239F58(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x821f3f18
	goto loc_821F3F18;
loc_821F3F14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821F3F18:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r11,116(r29)
	ea = 116 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x821f3ebc
	if (!ctx.cr0.eq) goto loc_821F3EBC;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x821f3f38
	if (ctx.cr6.lt) goto loc_821F3F38;
	// bne cr6,0x821f3f40
	if (!ctx.cr6.eq) goto loc_821F3F40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821f3f3c
	goto loc_821F3F3C;
loc_821F3F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F3F3C:
	// bl 0x821830f8
	ctx.lr = 0x821F3F40;
	sub_821830F8(ctx, base);
loc_821F3F40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F3F48;
	sub_821837D0(ctx, base);
	// stw r24,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r24.u32);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// bl 0x821837d0
	ctx.lr = 0x821F3F64;
	sub_821837D0(ctx, base);
loc_821F3F64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821F3F6C"))) PPC_WEAK_FUNC(sub_821F3F6C);
PPC_FUNC_IMPL(__imp__sub_821F3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3F70"))) PPC_WEAK_FUNC(sub_821F3F70);
PPC_FUNC_IMPL(__imp__sub_821F3F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821F3F78;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3f90
	if (ctx.cr6.eq) goto loc_821F3F90;
	// bl 0x82204f08
	ctx.lr = 0x821F3F90;
	sub_82204F08(ctx, base);
loc_821F3F90:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,72
	ctx.r27.s64 = 72;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_821F3FAC:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f41fc
	if (ctx.cr6.gt) goto loc_821F41FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f4058
	// bdzf 4*cr6+eq,0x821f40c0
	// bdzf 4*cr6+eq,0x821f410c
	// bdzf 4*cr6+eq,0x821f4144
	// bdzf 4*cr6+eq,0x821f416c
	// bdzf 4*cr6+eq,0x821f4190
	// bdzf 4*cr6+eq,0x821f41b0
	// bne cr6,0x821f41d4
	if (!ctx.cr6.eq) goto loc_821F41D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215f4b0
	ctx.lr = 0x821F3FF0;
	sub_8215F4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f4020
	if (!ctx.cr6.eq) goto loc_821F4020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215f528
	ctx.lr = 0x821F4004;
	sub_8215F528(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215fa60
	ctx.lr = 0x821F4018;
	sub_8215FA60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f41fc
	if (ctx.cr6.eq) goto loc_821F41FC;
loc_821F4020:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x821f41fc
	if (!ctx.cr0.lt) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f3830
	ctx.lr = 0x821F4054;
	sub_821F3830(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F4058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215fa60
	ctx.lr = 0x821F4064;
	sub_8215FA60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f4094
	if (!ctx.cr6.eq) goto loc_821F4094;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2370
	ctx.lr = 0x821F4090;
	sub_821F2370(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F4094:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f41fc
	if (ctx.cr6.eq) goto loc_821F41FC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x821f41fc
	if (ctx.cr0.gt) goto loc_821F41FC;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821F40BC;
	sub_821F28A0(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F40C0:
	// lwz r3,-8960(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x821F40C8;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215f500
	ctx.lr = 0x821F40DC;
	sub_8215F500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f23c8
	ctx.lr = 0x821F4108;
	sub_821F23C8(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F410C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x821f41fc
	if (!ctx.cr0.lt) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f24e8
	ctx.lr = 0x821F4140;
	sub_821F24E8(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F4144:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f415c
	if (ctx.cr6.eq) goto loc_821F415C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
loc_821F415C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2548
	ctx.lr = 0x821F4168;
	sub_821F2548(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F416C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -468);
	// bl 0x8215f4b0
	ctx.lr = 0x821F4178;
	sub_8215F4B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2548
	ctx.lr = 0x821F418C;
	sub_821F2548(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F4190:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bgt 0x821f41fc
	if (ctx.cr0.gt) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f26b8
	ctx.lr = 0x821F41AC;
	sub_821F26B8(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F41B0:
	// lwz r11,-8960(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2628
	ctx.lr = 0x821F41D0;
	sub_821F2628(ctx, base);
	// b 0x821f41fc
	goto loc_821F41FC;
loc_821F41D4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f41f0
	if (!ctx.cr6.eq) goto loc_821F41F0;
	// lwz r11,-8968(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8968);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f41fc
	if (!ctx.cr6.eq) goto loc_821F41FC;
loc_821F41F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2718
	ctx.lr = 0x821F41FC;
	sub_821F2718(ctx, base);
loc_821F41FC:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// cmpwi cr6,r27,80
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 80, ctx.xer);
	// blt cr6,0x821f3fac
	if (ctx.cr6.lt) goto loc_821F3FAC;
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f4248
	if (!ctx.cr6.eq) goto loc_821F4248;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
loc_821F4224:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f4248
	if (!ctx.cr6.eq) goto loc_821F4248;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821f4224
	if (ctx.cr6.lt) goto loc_821F4224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f1e58
	ctx.lr = 0x821F4248;
	sub_821F1E58(ctx, base);
loc_821F4248:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821F4250"))) PPC_WEAK_FUNC(sub_821F4250);
PPC_FUNC_IMPL(__imp__sub_821F4250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f4278
	// bdzf 4*cr6+eq,0x821f427c
	// bdzf 4*cr6+eq,0x821f4280
	// bne cr6,0x821f42ac
	if (!ctx.cr6.eq) goto loc_821F42AC;
	// b 0x821f3c60
	sub_821F3C60(ctx, base);
	return;
loc_821F4278:
	// b 0x821f1a80
	sub_821F1A80(ctx, base);
	return;
loc_821F427C:
	// b 0x821f3f70
	sub_821F3F70(ctx, base);
	return;
loc_821F4280:
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// blr 
	return;
loc_821F42AC:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F42C4"))) PPC_WEAK_FUNC(sub_821F42C4);
PPC_FUNC_IMPL(__imp__sub_821F42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F42C8"))) PPC_WEAK_FUNC(sub_821F42C8);
PPC_FUNC_IMPL(__imp__sub_821F42C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F42D8"))) PPC_WEAK_FUNC(sub_821F42D8);
PPC_FUNC_IMPL(__imp__sub_821F42D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F42F8"))) PPC_WEAK_FUNC(sub_821F42F8);
PPC_FUNC_IMPL(__imp__sub_821F42F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4318"))) PPC_WEAK_FUNC(sub_821F4318);
PPC_FUNC_IMPL(__imp__sub_821F4318) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r9,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r9.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4338"))) PPC_WEAK_FUNC(sub_821F4338);
PPC_FUNC_IMPL(__imp__sub_821F4338) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4358"))) PPC_WEAK_FUNC(sub_821F4358);
PPC_FUNC_IMPL(__imp__sub_821F4358) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r10.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4374"))) PPC_WEAK_FUNC(sub_821F4374);
PPC_FUNC_IMPL(__imp__sub_821F4374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4378"))) PPC_WEAK_FUNC(sub_821F4378);
PPC_FUNC_IMPL(__imp__sub_821F4378) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r10.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4394"))) PPC_WEAK_FUNC(sub_821F4394);
PPC_FUNC_IMPL(__imp__sub_821F4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4398"))) PPC_WEAK_FUNC(sub_821F4398);
PPC_FUNC_IMPL(__imp__sub_821F4398) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r10.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F43B4"))) PPC_WEAK_FUNC(sub_821F43B4);
PPC_FUNC_IMPL(__imp__sub_821F43B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F43B8"))) PPC_WEAK_FUNC(sub_821F43B8);
PPC_FUNC_IMPL(__imp__sub_821F43B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F43C0;
	sub_82248780(ctx, base);
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
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r11,9
	ctx.r11.s64 = 9;
	// bne cr6,0x821f43ec
	if (!ctx.cr6.eq) goto loc_821F43EC;
	// li r11,10
	ctx.r11.s64 = 10;
loc_821F43EC:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// beq cr6,0x821f440c
	if (ctx.cr6.eq) goto loc_821F440C;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x821F4408;
	sub_8218A128(ctx, base);
	// b 0x821f4418
	goto loc_821F4418;
loc_821F440C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-8636
	ctx.r5.s64 = ctx.r11.s64 + -8636;
	// bl 0x8218a5f0
	ctx.lr = 0x821F4418;
	sub_8218A5F0(ctx, base);
loc_821F4418:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32340, ctx.r30.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r28,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r28.u32);
	// stw r27,32636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32636, ctx.r27.u32);
	// stw r26,32640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32640, ctx.r26.u32);
	// stw r11,32644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32644, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F4444"))) PPC_WEAK_FUNC(sub_821F4444);
PPC_FUNC_IMPL(__imp__sub_821F4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4448"))) PPC_WEAK_FUNC(sub_821F4448);
PPC_FUNC_IMPL(__imp__sub_821F4448) {
	PPC_FUNC_PROLOGUE();
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4460"))) PPC_WEAK_FUNC(sub_821F4460);
PPC_FUNC_IMPL(__imp__sub_821F4460) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4480"))) PPC_WEAK_FUNC(sub_821F4480);
PPC_FUNC_IMPL(__imp__sub_821F4480) {
	PPC_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F44A0"))) PPC_WEAK_FUNC(sub_821F44A0);
PPC_FUNC_IMPL(__imp__sub_821F44A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F44B8"))) PPC_WEAK_FUNC(sub_821F44B8);
PPC_FUNC_IMPL(__imp__sub_821F44B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r7,32656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32656, ctx.r7.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F44DC"))) PPC_WEAK_FUNC(sub_821F44DC);
PPC_FUNC_IMPL(__imp__sub_821F44DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F44E0"))) PPC_WEAK_FUNC(sub_821F44E0);
PPC_FUNC_IMPL(__imp__sub_821F44E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r7,32656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32656, ctx.r7.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4504"))) PPC_WEAK_FUNC(sub_821F4504);
PPC_FUNC_IMPL(__imp__sub_821F4504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4508"))) PPC_WEAK_FUNC(sub_821F4508);
PPC_FUNC_IMPL(__imp__sub_821F4508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F4510;
	sub_82248780(ctx, base);
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
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r11,22
	ctx.r11.s64 = 22;
	// bne cr6,0x821f453c
	if (!ctx.cr6.eq) goto loc_821F453C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_821F453C:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// beq cr6,0x821f455c
	if (ctx.cr6.eq) goto loc_821F455C;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x821F4558;
	sub_8218A128(ctx, base);
	// b 0x821f4568
	goto loc_821F4568;
loc_821F455C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-8620
	ctx.r5.s64 = ctx.r11.s64 + -8620;
	// bl 0x8218a5f0
	ctx.lr = 0x821F4568;
	sub_8218A5F0(ctx, base);
loc_821F4568:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32340, ctx.r30.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r28,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r28.u32);
	// stw r27,32636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32636, ctx.r27.u32);
	// stw r26,32640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32640, ctx.r26.u32);
	// stw r11,32644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32644, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F4594"))) PPC_WEAK_FUNC(sub_821F4594);
PPC_FUNC_IMPL(__imp__sub_821F4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4598"))) PPC_WEAK_FUNC(sub_821F4598);
PPC_FUNC_IMPL(__imp__sub_821F4598) {
	PPC_FUNC_PROLOGUE();
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F45B0"))) PPC_WEAK_FUNC(sub_821F45B0);
PPC_FUNC_IMPL(__imp__sub_821F45B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F45D0"))) PPC_WEAK_FUNC(sub_821F45D0);
PPC_FUNC_IMPL(__imp__sub_821F45D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F45F0"))) PPC_WEAK_FUNC(sub_821F45F0);
PPC_FUNC_IMPL(__imp__sub_821F45F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4608"))) PPC_WEAK_FUNC(sub_821F4608);
PPC_FUNC_IMPL(__imp__sub_821F4608) {
	PPC_FUNC_PROLOGUE();
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4628"))) PPC_WEAK_FUNC(sub_821F4628);
PPC_FUNC_IMPL(__imp__sub_821F4628) {
	PPC_FUNC_PROLOGUE();
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4648"))) PPC_WEAK_FUNC(sub_821F4648);
PPC_FUNC_IMPL(__imp__sub_821F4648) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r11,36
	ctx.r11.s64 = 36;
	// bne cr6,0x821f4658
	if (!ctx.cr6.eq) goto loc_821F4658;
	// li r11,35
	ctx.r11.s64 = 35;
loc_821F4658:
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,32632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32632, ctx.r11.u32);
	// stw r11,32636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32636, ctx.r11.u32);
	// stw r10,32644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32644, ctx.r10.u32);
	// stw r6,32640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32640, ctx.r6.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F468C"))) PPC_WEAK_FUNC(sub_821F468C);
PPC_FUNC_IMPL(__imp__sub_821F468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4690"))) PPC_WEAK_FUNC(sub_821F4690);
PPC_FUNC_IMPL(__imp__sub_821F4690) {
	PPC_FUNC_PROLOGUE();
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,32656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32656, ctx.r5.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F46AC"))) PPC_WEAK_FUNC(sub_821F46AC);
PPC_FUNC_IMPL(__imp__sub_821F46AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F46B0"))) PPC_WEAK_FUNC(sub_821F46B0);
PPC_FUNC_IMPL(__imp__sub_821F46B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F46B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,32716
	ctx.r29.s64 = ctx.r3.s64 + 32716;
loc_821F46C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821f4710
	if (!ctx.cr6.eq) goto loc_821F4710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821F46DC;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f4760
	if (ctx.cr6.eq) goto loc_821F4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,28(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82163e58
	ctx.lr = 0x821F46F0;
	sub_82163E58(ctx, base);
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821f4710
	if (ctx.cr6.eq) goto loc_821F4710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e38
	ctx.lr = 0x821F4704;
	sub_82163E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82165308
	ctx.lr = 0x821F470C;
	sub_82165308(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_821F4710:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f4740
	if (!ctx.cr6.eq) goto loc_821F4740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821F4724;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f4740
	if (ctx.cr6.eq) goto loc_821F4740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e38
	ctx.lr = 0x821F4734;
	sub_82163E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82165308
	ctx.lr = 0x821F473C;
	sub_82165308(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_821F4740:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f4760
	if (!ctx.cr6.eq) goto loc_821F4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82163e38
	ctx.lr = 0x821F4758;
	sub_82163E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82165308
	ctx.lr = 0x821F4760;
	sub_82165308(ctx, base);
loc_821F4760:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x821f46c8
	if (ctx.cr6.lt) goto loc_821F46C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F477C"))) PPC_WEAK_FUNC(sub_821F477C);
PPC_FUNC_IMPL(__imp__sub_821F477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4780"))) PPC_WEAK_FUNC(sub_821F4780);
PPC_FUNC_IMPL(__imp__sub_821F4780) {
	PPC_FUNC_PROLOGUE();
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4794"))) PPC_WEAK_FUNC(sub_821F4794);
PPC_FUNC_IMPL(__imp__sub_821F4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4798"))) PPC_WEAK_FUNC(sub_821F4798);
PPC_FUNC_IMPL(__imp__sub_821F4798) {
	PPC_FUNC_PROLOGUE();
	// li r11,42
	ctx.r11.s64 = 42;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F47AC"))) PPC_WEAK_FUNC(sub_821F47AC);
PPC_FUNC_IMPL(__imp__sub_821F47AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F47B0"))) PPC_WEAK_FUNC(sub_821F47B0);
PPC_FUNC_IMPL(__imp__sub_821F47B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x821F47D4;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821859a0
	ctx.lr = 0x821F47E8;
	sub_821859A0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r9,-8600
	ctx.r7.s64 = ctx.r9.s64 + -8600;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r6,r8,-8608
	ctx.r6.s64 = ctx.r8.s64 + -8608;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4840"))) PPC_WEAK_FUNC(sub_821F4840);
PPC_FUNC_IMPL(__imp__sub_821F4840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f4864
	if (ctx.cr6.eq) goto loc_821F4864;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,1812(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821F4864:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F486C"))) PPC_WEAK_FUNC(sub_821F486C);
PPC_FUNC_IMPL(__imp__sub_821F486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4870"))) PPC_WEAK_FUNC(sub_821F4870);
PPC_FUNC_IMPL(__imp__sub_821F4870) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4878"))) PPC_WEAK_FUNC(sub_821F4878);
PPC_FUNC_IMPL(__imp__sub_821F4878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4880"))) PPC_WEAK_FUNC(sub_821F4880);
PPC_FUNC_IMPL(__imp__sub_821F4880) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82163ee8
	ctx.lr = 0x821F48A0;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82248a40
	ctx.lr = 0x821F48B0;
	sub_82248A40(ctx, base);
	// lbz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821de190
	ctx.lr = 0x821F48BC;
	sub_821DE190(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de188
	ctx.lr = 0x821F48C8;
	sub_821DE188(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de178
	ctx.lr = 0x821F48D0;
	sub_821DE178(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x821F48D4;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f49a8
	if (ctx.cr6.eq) goto loc_821F49A8;
	// lbz r11,143(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,147(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r6,145(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,-23044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23044);
	ctx.f0.f64 = double(temp.f32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f31,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f30,f5,f0
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// bl 0x821142a0
	ctx.lr = 0x821F4950;
	sub_821142A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x821F495C;
	sub_82114430(ctx, base);
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x821142a0
	ctx.lr = 0x821F496C;
	sub_821142A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x821F4978;
	sub_82114430(ctx, base);
	// fmuls f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821142a0
	ctx.lr = 0x821F498C;
	sub_821142A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82114430
	ctx.lr = 0x821F4998;
	sub_82114430(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x821F499C;
	sub_821142A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82114430
	ctx.lr = 0x821F49A8;
	sub_82114430(ctx, base);
loc_821F49A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_821F49C8"))) PPC_WEAK_FUNC(sub_821F49C8);
PPC_FUNC_IMPL(__imp__sub_821F49C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-8600
	ctx.r9.s64 = ctx.r11.s64 + -8600;
	// addi r8,r10,-8608
	ctx.r8.s64 = ctx.r10.s64 + -8608;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x821F4A04;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821F4A0C;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f4a28
	if (ctx.cr6.eq) goto loc_821F4A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821F4A24;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F4A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4A40"))) PPC_WEAK_FUNC(sub_821F4A40);
PPC_FUNC_IMPL(__imp__sub_821F4A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821f49c8
	sub_821F49C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F4A48"))) PPC_WEAK_FUNC(sub_821F4A48);
PPC_FUNC_IMPL(__imp__sub_821F4A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f47b0
	ctx.lr = 0x821F4A6C;
	sub_821F47B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-8416
	ctx.r9.s64 = ctx.r11.s64 + -8416;
	// addi r8,r10,-8428
	ctx.r8.s64 = ctx.r10.s64 + -8428;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x821F4A98;
	sub_82182E90(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// addi r3,r31,32668
	ctx.r3.s64 = ctx.r31.s64 + 32668;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,32648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32648, ctx.r30.u32);
	// stw r30,32652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32652, ctx.r30.u32);
	// stw r30,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r30.u32);
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// bl 0x821ebb58
	ctx.lr = 0x821F4AE4;
	sub_821EBB58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r30,32712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32712, ctx.r30.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// ori r11,r5,32800
	ctx.r11.u64 = ctx.r5.u64 | 32800;
	// li r4,32200
	ctx.r4.s64 = 32200;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821F4B00;
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

__attribute__((alias("__imp__sub_821F4B1C"))) PPC_WEAK_FUNC(sub_821F4B1C);
PPC_FUNC_IMPL(__imp__sub_821F4B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4B20"))) PPC_WEAK_FUNC(sub_821F4B20);
PPC_FUNC_IMPL(__imp__sub_821F4B20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34016
	ctx.r3.u64 = ctx.r3.u64 | 34016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4B2C"))) PPC_WEAK_FUNC(sub_821F4B2C);
PPC_FUNC_IMPL(__imp__sub_821F4B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4B30"))) PPC_WEAK_FUNC(sub_821F4B30);
PPC_FUNC_IMPL(__imp__sub_821F4B30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1748
	ctx.r3.s64 = 1748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4B38"))) PPC_WEAK_FUNC(sub_821F4B38);
PPC_FUNC_IMPL(__imp__sub_821F4B38) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-8600
	ctx.r9.s64 = ctx.r11.s64 + -8600;
	// addi r8,r10,-8608
	ctx.r8.s64 = ctx.r10.s64 + -8608;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bl 0x82185a50
	ctx.lr = 0x821F4B6C;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821F4B74;
	sub_821857F0(ctx, base);
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

__attribute__((alias("__imp__sub_821F4B88"))) PPC_WEAK_FUNC(sub_821F4B88);
PPC_FUNC_IMPL(__imp__sub_821F4B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F4B90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821F4BA0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4BAC;
	sub_821837D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F4BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x821F4BC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f4bf0
	if (ctx.cr6.eq) goto loc_821F4BF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821F4BDC;
	sub_82183448(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4BE8;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F4BF0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F4BFC;
	sub_821845A0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4C08;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F4C10"))) PPC_WEAK_FUNC(sub_821F4C10);
PPC_FUNC_IMPL(__imp__sub_821F4C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F4C18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821F4C28;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4C34;
	sub_821837D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F4C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x821F4C50;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821f4c78
	if (ctx.cr6.eq) goto loc_821F4C78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821F4C64;
	sub_82183448(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4C70;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F4C78:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821F4C84;
	sub_821845A0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F4C90;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F4C98"))) PPC_WEAK_FUNC(sub_821F4C98);
PPC_FUNC_IMPL(__imp__sub_821F4C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f4cc4
	if (ctx.cr6.eq) goto loc_821F4CC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F4CC4;
	sub_82183E40(ctx, base);
loc_821F4CC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ee0
	ctx.lr = 0x821F4CE0;
	sub_821E6EE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ed0
	ctx.lr = 0x821F4CF0;
	sub_821E6ED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4D08"))) PPC_WEAK_FUNC(sub_821F4D08);
PPC_FUNC_IMPL(__imp__sub_821F4D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821F4D10;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r26,68(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r24,-32180
	ctx.r24.s64 = -2108948480;
	// ori r25,r11,33988
	ctx.r25.u64 = ctx.r11.u64 | 33988;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f4ef8
	if (ctx.cr6.eq) goto loc_821F4EF8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,26416
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26416, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,7540
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7540, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// li r9,6604
	ctx.r9.s64 = 6604;
	// addi r4,r26,32
	ctx.r4.s64 = ctx.r26.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r30,r4,2
	ctx.r30.s64 = ctx.r4.s64 + 2;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
loc_821F4DA0:
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f4da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4DA0;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r7,1885
	ctx.r7.s64 = 1885;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r26,26448
	ctx.r5.s64 = ctx.r26.s64 + 26448;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// addi r29,r5,2
	ctx.r29.s64 = ctx.r5.s64 + 2;
	// addi r28,r5,3
	ctx.r28.s64 = ctx.r5.s64 + 3;
loc_821F4DFC:
	// lbzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f4dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4DFC;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r26,r25
	ctx.r10.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r28,r10,2
	ctx.r28.s64 = ctx.r10.s64 + 2;
	// addi r27,r10,3
	ctx.r27.s64 = ctx.r10.s64 + 3;
loc_821F4E58:
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f4e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4E58;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f4f5c
	if (!ctx.cr6.eq) goto loc_821F4F5C;
	// lwz r3,15472(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f4ebc
	if (ctx.cr6.eq) goto loc_821F4EBC;
	// bl 0x821709a0
	ctx.lr = 0x821F4EA8;
	sub_821709A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f4ebc
	if (!ctx.cr6.eq) goto loc_821F4EBC;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_821F4EBC:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r26,14208
	ctx.r29.s64 = ctx.r26.s64 + 14208;
	// addi r30,r26,8654
	ctx.r30.s64 = ctx.r26.s64 + 8654;
loc_821F4EC8:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4ee4
	if (ctx.cr6.eq) goto loc_821F4EE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239cf8
	ctx.lr = 0x821F4EDC;
	sub_82239CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f4f5c
	if (ctx.cr6.eq) goto loc_821F4F5C;
loc_821F4EE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,752
	ctx.r30.s64 = ctx.r30.s64 + 752;
	// addi r29,r29,1748
	ctx.r29.s64 = ctx.r29.s64 + 1748;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// blt cr6,0x821f4ec8
	if (ctx.cr6.lt) goto loc_821F4EC8;
loc_821F4EF8:
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x821660d0
	ctx.lr = 0x821F4F00;
	sub_821660D0(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x821F4F04;
	sub_82163EE8(ctx, base);
	// li r5,7540
	ctx.r5.s64 = 7540;
	// addi r4,r26,26448
	ctx.r4.s64 = ctx.r26.s64 + 26448;
	// bl 0x821847a8
	ctx.lr = 0x821F4F10;
	sub_821847A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82163eb0
	ctx.lr = 0x821F4F20;
	sub_82163EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f4f40
	if (ctx.cr6.eq) goto loc_821F4F40;
	// add. r4,r26,r25
	ctx.r4.u64 = ctx.r26.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821f4f40
	if (ctx.cr0.eq) goto loc_821F4F40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821847a8
	ctx.lr = 0x821F4F40;
	sub_821847A8(ctx, base);
loc_821F4F40:
	// lwz r3,15472(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f4f50
	if (ctx.cr6.eq) goto loc_821F4F50;
	// bl 0x82170a00
	ctx.lr = 0x821F4F50;
	sub_82170A00(ctx, base);
loc_821F4F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_821F4F5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821F4F68"))) PPC_WEAK_FUNC(sub_821F4F68);
PPC_FUNC_IMPL(__imp__sub_821F4F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F4FA4;
	sub_8231E120(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4FC4"))) PPC_WEAK_FUNC(sub_821F4FC4);
PPC_FUNC_IMPL(__imp__sub_821F4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4FC8"))) PPC_WEAK_FUNC(sub_821F4FC8);
PPC_FUNC_IMPL(__imp__sub_821F4FC8) {
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
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,32632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32632, ctx.r5.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5004;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,32200
	ctx.r4.s64 = 32200;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822aa648
	ctx.lr = 0x821F5014;
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

__attribute__((alias("__imp__sub_821F5028"))) PPC_WEAK_FUNC(sub_821F5028);
PPC_FUNC_IMPL(__imp__sub_821F5028) {
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
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r5,32632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32632, ctx.r5.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5064;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,32200
	ctx.r4.s64 = 32200;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822aa648
	ctx.lr = 0x821F5074;
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

__attribute__((alias("__imp__sub_821F5088"))) PPC_WEAK_FUNC(sub_821F5088);
PPC_FUNC_IMPL(__imp__sub_821F5088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821F5090;
	sub_82248784(ctx, base);
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,32504
	ctx.r3.s64 = ctx.r3.s64 + 32504;
	// beq cr6,0x821f50c4
	if (ctx.cr6.eq) goto loc_821F50C4;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x821F50C0;
	sub_8218A128(ctx, base);
	// b 0x821f50d0
	goto loc_821F50D0;
loc_821F50C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-8200
	ctx.r5.s64 = ctx.r11.s64 + -8200;
	// bl 0x8218a5f0
	ctx.lr = 0x821F50D0;
	sub_8218A5F0(ctx, base);
loc_821F50D0:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32340, ctx.r30.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r27.u32);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// stw r11,32636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32636, ctx.r11.u32);
	// stw r11,32640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32640, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r9.u32);
	// stw r11,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r11.u32);
	// stw r9,32644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32644, ctx.r9.u32);
	// bne cr6,0x821f512c
	if (!ctx.cr6.eq) goto loc_821F512C;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5128;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_821F512C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821F5134"))) PPC_WEAK_FUNC(sub_821F5134);
PPC_FUNC_IMPL(__imp__sub_821F5134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5138"))) PPC_WEAK_FUNC(sub_821F5138);
PPC_FUNC_IMPL(__imp__sub_821F5138) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// bne cr6,0x821f5184
	if (!ctx.cr6.eq) goto loc_821F5184;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5180;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_821F5184:
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

__attribute__((alias("__imp__sub_821F5198"))) PPC_WEAK_FUNC(sub_821F5198);
PPC_FUNC_IMPL(__imp__sub_821F5198) {
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
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r5,32632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32632, ctx.r5.u32);
	// stw r6,32652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32652, ctx.r6.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F51D8;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,32200
	ctx.r4.s64 = 32200;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822aa648
	ctx.lr = 0x821F51E8;
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

__attribute__((alias("__imp__sub_821F51FC"))) PPC_WEAK_FUNC(sub_821F51FC);
PPC_FUNC_IMPL(__imp__sub_821F51FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5200"))) PPC_WEAK_FUNC(sub_821F5200);
PPC_FUNC_IMPL(__imp__sub_821F5200) {
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
	// stw r4,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r4.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r5,32632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32632, ctx.r5.u32);
	// stw r11,32652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32652, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5240;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,32200
	ctx.r4.s64 = 32200;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822aa648
	ctx.lr = 0x821F5250;
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

__attribute__((alias("__imp__sub_821F5264"))) PPC_WEAK_FUNC(sub_821F5264);
PPC_FUNC_IMPL(__imp__sub_821F5264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5268"))) PPC_WEAK_FUNC(sub_821F5268);
PPC_FUNC_IMPL(__imp__sub_821F5268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F5270;
	sub_82248780(ctx, base);
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
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r11,28
	ctx.r11.s64 = 28;
	// bne cr6,0x821f529c
	if (!ctx.cr6.eq) goto loc_821F529C;
	// li r11,29
	ctx.r11.s64 = 29;
loc_821F529C:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f52bc
	if (ctx.cr6.eq) goto loc_821F52BC;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// bl 0x8218a128
	ctx.lr = 0x821F52B8;
	sub_8218A128(ctx, base);
	// b 0x821f52e8
	goto loc_821F52E8;
loc_821F52BC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821F52D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// bl 0x8218a5f0
	ctx.lr = 0x821F52E8;
	sub_8218A5F0(ctx, base);
loc_821F52E8:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32340, ctx.r30.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r28,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r28.u32);
	// stw r27,32636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32636, ctx.r27.u32);
	// stw r26,32640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32640, ctx.r26.u32);
	// stw r10,32644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32644, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bne cr6,0x821f532c
	if (!ctx.cr6.eq) goto loc_821F532C;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F5328;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_821F532C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F5334"))) PPC_WEAK_FUNC(sub_821F5334);
PPC_FUNC_IMPL(__imp__sub_821F5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5338"))) PPC_WEAK_FUNC(sub_821F5338);
PPC_FUNC_IMPL(__imp__sub_821F5338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821F5340;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r11,34
	ctx.r11.s64 = 34;
	// bne cr6,0x821f5374
	if (!ctx.cr6.eq) goto loc_821F5374;
	// li r11,33
	ctx.r11.s64 = 33;
loc_821F5374:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f5394
	if (ctx.cr6.eq) goto loc_821F5394;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// bl 0x8218a128
	ctx.lr = 0x821F5390;
	sub_8218A128(ctx, base);
	// b 0x821f53c0
	goto loc_821F53C0;
loc_821F5394:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821F53B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,32504
	ctx.r3.s64 = ctx.r31.s64 + 32504;
	// bl 0x8218a5f0
	ctx.lr = 0x821F53C0;
	sub_8218A5F0(ctx, base);
loc_821F53C0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// ori r6,r11,32800
	ctx.r6.u64 = ctx.r11.u64 | 32800;
	// stw r29,32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32340, ctx.r29.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r30.u32);
	// stw r26,32636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32636, ctx.r26.u32);
	// stw r25,32640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32640, ctx.r25.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r9,32644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32644, ctx.r9.u32);
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821F540C"))) PPC_WEAK_FUNC(sub_821F540C);
PPC_FUNC_IMPL(__imp__sub_821F540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5410"))) PPC_WEAK_FUNC(sub_821F5410);
PPC_FUNC_IMPL(__imp__sub_821F5410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-796(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F5434;
	sub_821E7018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F5440;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r30,r3
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r3.u64, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x821f5450
	if (ctx.cr6.lt) goto loc_821F5450;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F5450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F5468"))) PPC_WEAK_FUNC(sub_821F5468);
PPC_FUNC_IMPL(__imp__sub_821F5468) {
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
	// stw r4,32652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32652, ctx.r4.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,-796(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F54A8;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821F54C0"))) PPC_WEAK_FUNC(sub_821F54C0);
PPC_FUNC_IMPL(__imp__sub_821F54C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r9,32340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32340, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F54E4"))) PPC_WEAK_FUNC(sub_821F54E4);
PPC_FUNC_IMPL(__imp__sub_821F54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F54E8"))) PPC_WEAK_FUNC(sub_821F54E8);
PPC_FUNC_IMPL(__imp__sub_821F54E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821F54F0;
	sub_82248774(ctx, base);
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32660);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5554
	if (ctx.cr6.eq) goto loc_821F5554;
	// lwz r11,32664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f5548
	if (!ctx.cr6.eq) goto loc_821F5548;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,32664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32664, ctx.r26.u32);
	// stw r4,32668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32668, ctx.r4.u32);
	// stw r5,32672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32672, ctx.r5.u32);
	// stw r26,32680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32680, ctx.r26.u32);
	// stw r6,32692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32692, ctx.r6.u32);
	// stw r11,32684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F5540;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,32688(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32688, ctx.r10.u32);
loc_821F5548:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821F5554:
	// lwz r11,32340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f55b8
	if (ctx.cr6.eq) goto loc_821F55B8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821ebb58
	ctx.lr = 0x821F5568;
	sub_821EBB58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F5588;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lwz r3,-784(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -784);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821F55AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821F55B8:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x821F55CC;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822aa648
	ctx.lr = 0x821F55D8;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x822aa648
	ctx.lr = 0x821F55E4;
	sub_822AA648(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// ori r30,r11,65001
	ctx.r30.u64 = ctx.r11.u64 | 65001;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// bgt cr6,0x821f5750
	if (ctx.cr6.gt) goto loc_821F5750;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f561c
	// bdzf 4*cr6+eq,0x821f569c
	// bdzf 4*cr6+eq,0x821f569c
	// bdzf 4*cr6+eq,0x821f5548
	// bdzf 4*cr6+eq,0x821f5548
	// bdzf 4*cr6+eq,0x821f5548
	// bne cr6,0x821f5548
	if (!ctx.cr6.eq) goto loc_821F5548;
loc_821F561C:
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// li r4,30175
	ctx.r4.s64 = 30175;
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F5638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x82256be8
	ctx.lr = 0x821F5654;
	sub_82256BE8(ctx, base);
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// li r4,20032
	ctx.r4.s64 = 20032;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F566C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x82256be8
	ctx.lr = 0x821F5688;
	sub_82256BE8(ctx, base);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// b 0x821f5750
	goto loc_821F5750;
loc_821F569C:
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// li r4,30174
	ctx.r4.s64 = 30174;
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F56B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x82256be8
	ctx.lr = 0x821F56D4;
	sub_82256BE8(ctx, base);
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// li r4,20030
	ctx.r4.s64 = 20030;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F56EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x82256be8
	ctx.lr = 0x821F5708;
	sub_82256BE8(ctx, base);
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// li r4,20031
	ctx.r4.s64 = 20031;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821F5720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x82256be8
	ctx.lr = 0x821F573C;
	sub_82256BE8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
loc_821F5750:
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x821f57b4
	if (ctx.cr6.lt) goto loc_821F57B4;
	// beq cr6,0x821f5798
	if (ctx.cr6.eq) goto loc_821F5798;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// bge cr6,0x821f57b4
	if (!ctx.cr6.lt) goto loc_821F57B4;
	// bctrl 
	ctx.lr = 0x821F577C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x821F5794;
	sub_8218A5F0(ctx, base);
	// b 0x821f57c8
	goto loc_821F57C8;
loc_821F5798:
	// bctrl 
	ctx.lr = 0x821F579C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8218a5f0
	ctx.lr = 0x821F57B0;
	sub_8218A5F0(ctx, base);
	// b 0x821f57c8
	goto loc_821F57C8;
loc_821F57B4:
	// bctrl 
	ctx.lr = 0x821F57B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8218a5f0
	ctx.lr = 0x821F57C8;
	sub_8218A5F0(ctx, base);
loc_821F57C8:
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256be8
	ctx.lr = 0x821F57E4;
	sub_82256BE8(ctx, base);
	// addi r31,r28,32352
	ctx.r31.s64 = ctx.r28.s64 + 32352;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821F57F4;
	sub_822AA648(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F57F8;
	sub_8215BD08(ctx, base);
	// addi r10,r28,32344
	ctx.r10.s64 = ctx.r28.s64 + 32344;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82256628
	ctx.lr = 0x821F5820;
	sub_82256628(ctx, base);
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821F5834"))) PPC_WEAK_FUNC(sub_821F5834);
PPC_FUNC_IMPL(__imp__sub_821F5834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5838"))) PPC_WEAK_FUNC(sub_821F5838);
PPC_FUNC_IMPL(__imp__sub_821F5838) {
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
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// addi r31,r3,32716
	ctx.r31.s64 = ctx.r3.s64 + 32716;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821F5868;
	sub_822AA648(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x821e6f10
	ctx.lr = 0x821F5878;
	sub_821E6F10(ctx, base);
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

__attribute__((alias("__imp__sub_821F588C"))) PPC_WEAK_FUNC(sub_821F588C);
PPC_FUNC_IMPL(__imp__sub_821F588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5890"))) PPC_WEAK_FUNC(sub_821F5890);
PPC_FUNC_IMPL(__imp__sub_821F5890) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f58e4
	if (ctx.cr6.lt) goto loc_821F58E4;
	// beq cr6,0x821f58c8
	if (ctx.cr6.eq) goto loc_821F58C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821f5910
	if (!ctx.cr6.lt) goto loc_821F5910;
	// bl 0x82155510
	ctx.lr = 0x821F58C0;
	sub_82155510(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821f590c
	goto loc_821F590C;
loc_821F58C8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f5910
	if (!ctx.cr6.eq) goto loc_821F5910;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821f590c
	goto loc_821F590C;
loc_821F58E4:
	// bl 0x8215bd08
	ctx.lr = 0x821F58E8;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F5900;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f5910
	if (ctx.cr6.eq) goto loc_821F5910;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821F590C:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821F5910:
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

__attribute__((alias("__imp__sub_821F5924"))) PPC_WEAK_FUNC(sub_821F5924);
PPC_FUNC_IMPL(__imp__sub_821F5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5928"))) PPC_WEAK_FUNC(sub_821F5928);
PPC_FUNC_IMPL(__imp__sub_821F5928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f5980
	if (ctx.cr6.lt) goto loc_821F5980;
	// beq cr6,0x821f5964
	if (ctx.cr6.eq) goto loc_821F5964;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821f59bc
	if (!ctx.cr6.lt) goto loc_821F59BC;
	// bl 0x82155510
	ctx.lr = 0x821F595C;
	sub_82155510(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821f59b8
	goto loc_821F59B8;
loc_821F5964:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f59bc
	if (!ctx.cr6.eq) goto loc_821F59BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821f59b8
	goto loc_821F59B8;
loc_821F5980:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f59bc
	if (!ctx.cr6.eq) goto loc_821F59BC;
	// bl 0x8215bd08
	ctx.lr = 0x821F5998;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// lwz r3,-796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F59AC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f59bc
	if (ctx.cr6.eq) goto loc_821F59BC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821F59B8:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_821F59BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F59D4"))) PPC_WEAK_FUNC(sub_821F59D4);
PPC_FUNC_IMPL(__imp__sub_821F59D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F59D8"))) PPC_WEAK_FUNC(sub_821F59D8);
PPC_FUNC_IMPL(__imp__sub_821F59D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f5a24
	if (!ctx.cr6.eq) goto loc_821F5A24;
	// lwz r11,32340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5a14
	if (ctx.cr6.eq) goto loc_821F5A14;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5a24
	if (ctx.cr6.eq) goto loc_821F5A24;
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5a24
	if (ctx.cr6.eq) goto loc_821F5A24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F5A14:
	// lwz r11,32352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32352);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821F5A24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F5A2C"))) PPC_WEAK_FUNC(sub_821F5A2C);
PPC_FUNC_IMPL(__imp__sub_821F5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5A30"))) PPC_WEAK_FUNC(sub_821F5A30);
PPC_FUNC_IMPL(__imp__sub_821F5A30) {
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
	// lwz r11,32340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5a64
	if (ctx.cr6.eq) goto loc_821F5A64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,1812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f5a64
	if (ctx.cr6.eq) goto loc_821F5A64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ec880
	ctx.lr = 0x821F5A64;
	sub_821EC880(ctx, base);
loc_821F5A64:
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

__attribute__((alias("__imp__sub_821F5A78"))) PPC_WEAK_FUNC(sub_821F5A78);
PPC_FUNC_IMPL(__imp__sub_821F5A78) {
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
	// bl 0x8216f5b0
	ctx.lr = 0x821F5A90;
	sub_8216F5B0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
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
}

__attribute__((alias("__imp__sub_821F5AAC"))) PPC_WEAK_FUNC(sub_821F5AAC);
PPC_FUNC_IMPL(__imp__sub_821F5AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5AB0"))) PPC_WEAK_FUNC(sub_821F5AB0);
PPC_FUNC_IMPL(__imp__sub_821F5AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F5AB8;
	sub_8224878C(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x821f6050
	if (ctx.cr6.gt) goto loc_821F6050;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23268
	ctx.r12.s64 = ctx.r12.s64 + 23268;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,23320(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23320);
	// lwz r16,23348(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23348);
	// lwz r16,23412(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23412);
	// lwz r16,23484(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23484);
	// lwz r16,23524(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23524);
	// lwz r16,23624(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23624);
	// lwz r16,23860(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23860);
	// lwz r16,24008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24008);
	// lwz r16,24100(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24100);
	// lwz r16,24492(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24492);
	// lwz r16,24540(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24540);
	// lwz r16,24572(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24572);
	// lwz r16,24632(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24632);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821F5B24;
	sub_821F4B88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ef0
	ctx.lr = 0x821F5B44;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F5B48;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F5B5C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f6050
	if (!ctx.cr6.eq) goto loc_821F6050;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821f5bac
	if (ctx.cr6.eq) goto loc_821F5BAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5BAC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30178
	ctx.r5.s64 = 30178;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5BD4;
	sub_821F54E8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F5BEC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5c24
	if (ctx.cr6.eq) goto loc_821F5C24;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F5C0C;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f5c38
	if (!ctx.cr6.eq) goto loc_821F5C38;
loc_821F5C14:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5C24:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f5c38
	if (ctx.cr6.eq) goto loc_821F5C38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5c14
	if (ctx.cr6.eq) goto loc_821F5C14;
loc_821F5C38:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// li r29,6
	ctx.r29.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5c9c
	if (ctx.cr6.eq) goto loc_821F5C9C;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f5d28
	if (!ctx.cr6.eq) goto loc_821F5D28;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,30110
	ctx.r10.s64 = 30110;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// stw r29,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r29.u32);
	// stw r10,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r10.u32);
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F5C88;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r9.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5C9C:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5d04
	if (ctx.cr6.eq) goto loc_821F5D04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821F5CB0;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,30110
	ctx.r10.s64 = 30110;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F5CD4;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r3,-784(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -784);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821F5CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5D04:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821F5D10;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821F5D1C;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821F5D28;
	sub_822AA648(ctx, base);
loc_821F5D28:
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f5d54
	if (ctx.cr6.eq) goto loc_821F5D54;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F5D4C;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f6050
	if (!ctx.cr6.eq) goto loc_821F6050;
loc_821F5D54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F5D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821F5D80;
	sub_821E6EE0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F5D84;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F5D98;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F5DB0;
	sub_8215CE78(ctx, base);
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f5ddc
	if (!ctx.cr6.gt) goto loc_821F5DDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821F5DDC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f6050
	if (ctx.cr6.gt) goto loc_821F6050;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f6050
	if (!ctx.cr6.eq) goto loc_821F6050;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F5E0C;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F5E14;
	sub_821F5A30(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F5E2C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f5f84
	if (ctx.cr6.gt) goto loc_821F5F84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f5f84
	// bdzf 4*cr6+eq,0x821f5f04
	// bdzf 4*cr6+eq,0x821f5f2c
	// bne cr6,0x821f5f54
	if (!ctx.cr6.eq) goto loc_821F5F54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F5E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x821f6050
	if (ctx.cr6.gt) goto loc_821F6050;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f5f04
	// bdzf 4*cr6+eq,0x821f5f04
	// bne cr6,0x821f5ed4
	if (!ctx.cr6.eq) goto loc_821F5ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F5EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30112
	ctx.r5.s64 = 30112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5EC4;
	sub_821F54E8(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5ED4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30176
	ctx.r5.s64 = 30176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5EEC;
	sub_821F54E8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,32648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32648, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5F04:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30121
	ctx.r5.s64 = 30121;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5F1C;
	sub_821F54E8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5F2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30119
	ctx.r5.s64 = 30119;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5F44;
	sub_821F54E8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5F54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30120
	ctx.r5.s64 = 30120;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5F6C;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F5F84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30118
	ctx.r5.s64 = 30118;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F5F9C;
	sub_821F54E8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F5FB4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F5FC8;
	sub_8215BD08(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F5FE4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6004;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6050
	if (ctx.cr6.eq) goto loc_821F6050;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F6020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821F6040;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F6048;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821F6050:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F6058"))) PPC_WEAK_FUNC(sub_821F6058);
PPC_FUNC_IMPL(__imp__sub_821F6058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821F6060;
	sub_8224876C(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x821f72ac
	if (ctx.cr6.gt) goto loc_821F72AC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24716
	ctx.r12.s64 = ctx.r12.s64 + 24716;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,24848(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24848);
	// lwz r16,24876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24876);
	// lwz r16,25016(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25016);
	// lwz r16,25392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25392);
	// lwz r16,25168(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25168);
	// lwz r16,25204(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25204);
	// lwz r16,25272(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25272);
	// lwz r16,25500(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25500);
	// lwz r16,25692(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25692);
	// lwz r16,26108(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26108);
	// lwz r16,26172(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26172);
	// lwz r16,26220(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26220);
	// lwz r16,26260(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26260);
	// lwz r16,26368(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26368);
	// lwz r16,26624(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26624);
	// lwz r16,26772(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26772);
	// lwz r16,26864(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// lwz r16,27304(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27304);
	// lwz r16,27360(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27360);
	// lwz r16,27392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27392);
	// lwz r16,27492(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27492);
	// lwz r16,28092(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28092);
	// lwz r16,28132(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28132);
	// lwz r16,28256(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28256);
	// lwz r16,28372(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28372);
	// lwz r16,28628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r16,28832(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28832);
	// lwz r16,28952(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28952);
	// lwz r16,27304(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27304);
	// lwz r16,29140(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29140);
	// lwz r16,29184(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29184);
	// lwz r16,29300(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29300);
	// lwz r16,29332(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821F611C;
	sub_821F4B88(ctx, base);
loc_821F611C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821F613C;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F6158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6170
	if (ctx.cr6.eq) goto loc_821F6170;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6170:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f6190
	if (!ctx.cr6.eq) goto loc_821F6190;
	// bl 0x8215bd60
	ctx.lr = 0x821F6180;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6190:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30116
	ctx.r5.s64 = 30116;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F61A8;
	sub_821F54E8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F61C0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6210
	if (ctx.cr6.eq) goto loc_821F6210;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F61E0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f6224
	if (!ctx.cr6.eq) goto loc_821F6224;
loc_821F61E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30115
	ctx.r5.s64 = 30115;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6200;
	sub_821F54E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6210:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6224
	if (ctx.cr6.eq) goto loc_821F6224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f61e8
	if (ctx.cr6.eq) goto loc_821F61E8;
loc_821F6224:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x821F622C;
	sub_822565C8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F6240;
	sub_8215CE78(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565d0
	ctx.lr = 0x821F625C;
	sub_822565D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8241e0ac
	ctx.lr = 0x821F6288;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82088268
	ctx.lr = 0x821F62C0;
	sub_82088268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r21,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r21.u32);
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821F62E0;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F62FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r7,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r3.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r6,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821F6314;
	sub_8215BD60(ctx, base);
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-484(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F6328;
	sub_8215CE90(ctx, base);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6338;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6378
	if (ctx.cr6.eq) goto loc_821F6378;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F6358;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f611c
	if (!ctx.cr6.eq) goto loc_821F611C;
loc_821F6360:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6378:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f611c
	if (ctx.cr6.eq) goto loc_821F611C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6360
	if (ctx.cr6.eq) goto loc_821F6360;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
loc_821F63A4:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82256340
	ctx.lr = 0x821F63AC;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f63cc
	if (!ctx.cr6.eq) goto loc_821F63CC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821f63a4
	if (ctx.cr6.lt) goto loc_821F63A4;
loc_821F63CC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821f6af0
	if (!ctx.cr6.lt) goto loc_821F6AF0;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82183078
	ctx.lr = 0x821F63E0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F63EC;
	sub_821837D0(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82080000
	ctx.lr = 0x821F63F4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f6408
	if (ctx.cr6.eq) goto loc_821F6408;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82404dd8
	ctx.lr = 0x821F6404;
	sub_82404DD8(ctx, base);
	// b 0x821f640c
	goto loc_821F640C;
loc_821F6408:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_821F640C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// li r30,1
	ctx.r30.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F6424:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821f6424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F6424;
	// stb r21,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r21.u8);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82404e40
	ctx.lr = 0x821F6444;
	sub_82404E40(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821F6454;
	sub_821837D0(ctx, base);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82404f98
	ctx.lr = 0x821F6464;
	sub_82404F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82404dc0
	ctx.lr = 0x821F6474;
	sub_82404DC0(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f6550
	if (!ctx.cr6.eq) goto loc_821F6550;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f64a8
	if (ctx.cr6.eq) goto loc_821F64A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
	// b 0x821f64b4
	goto loc_821F64B4;
loc_821F64A8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r21,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r21.u8);
loc_821F64B4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r29,88(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// bl 0x82163ee8
	ctx.lr = 0x821F64C4;
	sub_82163EE8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stb r29,2350(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2350, ctx.r29.u8);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f64ec
	if (ctx.cr6.lt) goto loc_821F64EC;
	// bne cr6,0x821f64ec
	if (!ctx.cr6.eq) goto loc_821F64EC;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// b 0x821f64f0
	goto loc_821F64F0;
loc_821F64EC:
	// stb r21,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r21.u8);
loc_821F64F0:
	// lbz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82163ee8
	ctx.lr = 0x821F64F8;
	sub_82163EE8(ctx, base);
	// stb r29,2366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2366, ctx.r29.u8);
	// bl 0x8215bd08
	ctx.lr = 0x821F6500;
	sub_8215BD08(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821f6550
	if (!ctx.cr6.eq) goto loc_821F6550;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f6548
	if (ctx.cr6.lt) goto loc_821F6548;
	// beq cr6,0x821f653c
	if (ctx.cr6.eq) goto loc_821F653C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821f6548
	if (!ctx.cr6.lt) goto loc_821F6548;
	// bl 0x82163ee8
	ctx.lr = 0x821F6530;
	sub_82163EE8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r11.u8);
	// b 0x821f6550
	goto loc_821F6550;
loc_821F653C:
	// bl 0x82163ee8
	ctx.lr = 0x821F6540;
	sub_82163EE8(ctx, base);
	// stb r21,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r21.u8);
	// b 0x821f6550
	goto loc_821F6550;
loc_821F6548:
	// bl 0x82163ee8
	ctx.lr = 0x821F654C;
	sub_82163EE8(ctx, base);
	// stb r30,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r30.u8);
loc_821F6550:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821f658c
	if (!ctx.cr6.lt) goto loc_821F658C;
loc_821F6564:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82256340
	ctx.lr = 0x821F656C;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f658c
	if (!ctx.cr6.eq) goto loc_821F658C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821f6564
	if (ctx.cr6.lt) goto loc_821F6564;
loc_821F658C:
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bge cr6,0x821f65ac
	if (!ctx.cr6.lt) goto loc_821F65AC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82404e40
	ctx.lr = 0x821F65A4;
	sub_82404E40(ctx, base);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F65AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f65c8
	if (ctx.cr6.eq) goto loc_821F65C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F65C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F65C8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f6af0
	if (!ctx.cr6.eq) goto loc_821F6AF0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F65E4;
	sub_8231E120(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f6af0
	if (ctx.cr6.eq) goto loc_821F6AF0;
loc_821F65EC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ef0
	ctx.lr = 0x821F660C;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F6610;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F6624;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821f65ec
	if (ctx.cr6.eq) goto loc_821F65EC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30115
	ctx.r5.s64 = 30115;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6684;
	sub_821F54E8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F669C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f66d4
	if (!ctx.cr6.eq) goto loc_821F66D4;
loc_821F66B0:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6af0
	if (ctx.cr6.eq) goto loc_821F6AF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f66e8
	if (ctx.cr6.eq) goto loc_821F66E8;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F66D4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F66E0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f6af0
	if (!ctx.cr6.eq) goto loc_821F6AF0;
loc_821F66E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f675c
	if (ctx.cr6.eq) goto loc_821F675C;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f67f0
	if (!ctx.cr6.eq) goto loc_821F67F0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// li r10,30110
	ctx.r10.s64 = 30110;
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r11,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r11.u32);
	// stw r10,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r10.u32);
	// stw r21,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r21.u32);
	// stw r21,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r21.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6744;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r9,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F675C:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f67cc
	if (ctx.cr6.eq) goto loc_821F67CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ebb58
	ctx.lr = 0x821F6770;
	sub_821EBB58(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,30110
	ctx.r10.s64 = 30110;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6798;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r3,-784(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -784);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821F67BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F67CC:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x821F67D8;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822aa648
	ctx.lr = 0x821F67E4;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822aa648
	ctx.lr = 0x821F67F0;
	sub_822AA648(ctx, base);
loc_821F67F0:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6820
	if (ctx.cr6.eq) goto loc_821F6820;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F6818;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
loc_821F6820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F683C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821F684C;
	sub_821E6EE0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F6850;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F6864;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F687C;
	sub_8215CE78(ctx, base);
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f68a8
	if (!ctx.cr6.gt) goto loc_821F68A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821F68A8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f72ac
	if (ctx.cr6.gt) goto loc_821F72AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F68D8;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F68E0;
	sub_821F5A30(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F68F8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f6a80
	if (ctx.cr6.gt) goto loc_821F6A80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f6a80
	// bdzf 4*cr6+eq,0x821f6a00
	// bdzf 4*cr6+eq,0x821f6a28
	// bne cr6,0x821f6a50
	if (!ctx.cr6.eq) goto loc_821F6A50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F6948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x821f72ac
	if (ctx.cr6.gt) goto loc_821F72AC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f6a00
	// bdzf 4*cr6+eq,0x821f6a00
	// bne cr6,0x821f69d0
	if (!ctx.cr6.eq) goto loc_821F69D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
loc_821F696C:
	// lbzx r28,r29,r30
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82163ee8
	ctx.lr = 0x821F6974;
	sub_82163EE8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stb r28,2350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2350, ctx.r28.u8);
	// blt cr6,0x821f696c
	if (ctx.cr6.lt) goto loc_821F696C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F699C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82163ee8
	ctx.lr = 0x821F69A4;
	sub_82163EE8(ctx, base);
	// stb r30,2366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2366, ctx.r30.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30112
	ctx.r5.s64 = 30112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F69C0;
	sub_821F54E8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F69D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30529
	ctx.r5.s64 = 30529;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F69E8;
	sub_821F54E8(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,32648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32648, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6A00:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30122
	ctx.r5.s64 = 30122;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6A18;
	sub_821F54E8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6A28:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30111
	ctx.r5.s64 = 30111;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6A40;
	sub_821F54E8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6A50:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30120
	ctx.r5.s64 = 30120;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6A68;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6A80:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30118
	ctx.r5.s64 = 30118;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6A98;
	sub_821F54E8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6AB0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6AC4;
	sub_8215BD08(ctx, base);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6ACC;
	sub_8215BD08(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6AE8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
loc_821F6AF0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6B08;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6b40
	if (ctx.cr6.eq) goto loc_821F6B40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F6B28;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f6af0
	if (!ctx.cr6.eq) goto loc_821F6AF0;
loc_821F6B30:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6B40:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6af0
	if (ctx.cr6.eq) goto loc_821F6AF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6b30
	if (ctx.cr6.eq) goto loc_821F6B30;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6B6C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32648);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6d80
	if (ctx.cr6.eq) goto loc_821F6D80;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F6B98;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f6d94
	if (!ctx.cr6.eq) goto loc_821F6D94;
loc_821F6BA0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r24,1124(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1124);
	// addi r22,r11,1696
	ctx.r22.s64 = ctx.r11.s64 + 1696;
	// addi r30,r11,2052
	ctx.r30.s64 = ctx.r11.s64 + 2052;
	// bl 0x82163df0
	ctx.lr = 0x821F6BBC;
	sub_82163DF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,121
	ctx.r4.s64 = 121;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d78b0
	ctx.lr = 0x821F6BD4;
	sub_820D78B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F6BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164e00
	ctx.lr = 0x821F6BF8;
	sub_82164E00(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// beq cr6,0x821f6c98
	if (ctx.cr6.eq) goto loc_821F6C98;
loc_821F6C0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164d80
	ctx.lr = 0x821F6C18;
	sub_82164D80(ctx, base);
	// lhz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x821f6c8c
	if (ctx.cr6.eq) goto loc_821F6C8C;
	// lhz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// beq cr6,0x821f6c8c
	if (ctx.cr6.eq) goto loc_821F6C8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822362f8
	ctx.lr = 0x821F6C40;
	sub_822362F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6c70
	if (ctx.cr6.eq) goto loc_821F6C70;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x821F6C5C;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f6c8c
	if (ctx.cr6.eq) goto loc_821F6C8C;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6c8c
	if (ctx.cr6.eq) goto loc_821F6C8C;
loc_821F6C70:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,-68(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -68);
	// sth r21,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r21.u16);
	// sth r8,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r8.u16);
loc_821F6C8C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821f6c0c
	if (ctx.cr6.lt) goto loc_821F6C0C;
loc_821F6C98:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_821F6CA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82164c98
	ctx.lr = 0x821F6CA8;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6d58
	if (ctx.cr6.eq) goto loc_821F6D58;
	// bl 0x82163dd0
	ctx.lr = 0x821F6CB4;
	sub_82163DD0(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r28,r11,5584
	ctx.r28.s64 = ctx.r11.s64 + 5584;
	// bl 0x82163e58
	ctx.lr = 0x821F6CC4;
	sub_82163E58(ctx, base);
	// addi r30,r28,672
	ctx.r30.s64 = ctx.r28.s64 + 672;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_821F6CD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x822362f8
	ctx.lr = 0x821F6CE4;
	sub_822362F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6d14
	if (ctx.cr6.eq) goto loc_821F6D14;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x820c79c8
	ctx.lr = 0x821F6D00;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f6d28
	if (ctx.cr6.eq) goto loc_821F6D28;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6d28
	if (ctx.cr6.eq) goto loc_821F6D28;
loc_821F6D14:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x820d7970
	ctx.lr = 0x821F6D28;
	sub_820D7970(ctx, base);
loc_821F6D28:
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// cmpwi cr6,r29,680
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 680, ctx.xer);
	// blt cr6,0x821f6cd0
	if (ctx.cr6.lt) goto loc_821F6CD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82164830
	ctx.lr = 0x821F6D44;
	sub_82164830(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82164420
	ctx.lr = 0x821F6D4C;
	sub_82164420(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82239630
	ctx.lr = 0x821F6D58;
	sub_82239630(ctx, base);
loc_821F6D58:
	// addi r27,r27,1748
	ctx.r27.s64 = ctx.r27.s64 + 1748;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r27,12236
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12236, ctx.xer);
	// blt cr6,0x821f6ca0
	if (ctx.cr6.lt) goto loc_821F6CA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6D80:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6d94
	if (ctx.cr6.eq) goto loc_821F6D94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6ba0
	if (ctx.cr6.eq) goto loc_821F6BA0;
loc_821F6D94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30347
	ctx.r5.s64 = 30347;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6DAC;
	sub_821F54E8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6DC4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6DEC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6e24
	if (ctx.cr6.eq) goto loc_821F6E24;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F6E0C;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f6e38
	if (!ctx.cr6.eq) goto loc_821F6E38;
loc_821F6E14:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6E24:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6e38
	if (ctx.cr6.eq) goto loc_821F6E38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6e14
	if (ctx.cr6.eq) goto loc_821F6E14;
loc_821F6E38:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30115
	ctx.r5.s64 = 30115;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6E50;
	sub_821F54E8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F6E68;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821F6E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F6E98;
	sub_821E7018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F6EA4;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r29,r3
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x821f6b30
	if (!ctx.cr6.gt) goto loc_821F6B30;
loc_821F6EAC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30104
	ctx.r5.s64 = 30104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F6EC4;
	sub_821F54E8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6f30
	if (ctx.cr6.eq) goto loc_821F6F30;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f6fc4
	if (!ctx.cr6.eq) goto loc_821F6FC4;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// li r10,30113
	ctx.r10.s64 = 30113;
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r11,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r11.u32);
	// stw r10,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r10.u32);
	// stw r21,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r21.u32);
	// stw r21,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r21.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6F18;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r9,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6F30:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6fa0
	if (ctx.cr6.eq) goto loc_821F6FA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ebb58
	ctx.lr = 0x821F6F44;
	sub_821EBB58(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,30113
	ctx.r10.s64 = 30113;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821F6F6C;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r3,-784(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -784);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821F6F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F6FA0:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x821F6FAC;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822aa648
	ctx.lr = 0x821F6FB8;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822aa648
	ctx.lr = 0x821F6FC4;
	sub_822AA648(ctx, base);
loc_821F6FC4:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f6ff4
	if (ctx.cr6.eq) goto loc_821F6FF4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F6FEC;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
loc_821F6FF4:
	// bl 0x82163ee8
	ctx.lr = 0x821F6FF8;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2367, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821F7008;
	sub_821F4C98(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x821F700C;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x821F7018;
	sub_821F4B88(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821F702C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bctrl 
	ctx.lr = 0x821F7048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ed0
	ctx.lr = 0x821F7058;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F705C;
	sub_8215BD08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F7070;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F7088;
	sub_8215CE78(ctx, base);
	// li r10,180
	ctx.r10.s64 = 180;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f70b4
	if (!ctx.cr6.gt) goto loc_821F70B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821F70B4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f72ac
	if (ctx.cr6.gt) goto loc_821F72AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f72ac
	if (!ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F70E4;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F70EC;
	sub_821F5A30(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f7100
	if (ctx.cr6.eq) goto loc_821F7100;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821F7100;
	sub_82183E40(ctx, base);
loc_821F7100:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7120;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f71ac
	if (ctx.cr6.gt) goto loc_821F71AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f71ac
	// bdzf 4*cr6+eq,0x821f717c
	// bne cr6,0x821f6eac
	if (!ctx.cr6.eq) goto loc_821F6EAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30114
	ctx.r5.s64 = 30114;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F716C;
	sub_821F54E8(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F717C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30102
	ctx.r5.s64 = 30102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F7194;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821F71AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30103
	ctx.r5.s64 = 30103;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F71C4;
	sub_821F54E8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F71DC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// bl 0x82163ee8
	ctx.lr = 0x821F71E8;
	sub_82163EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,2367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2367, ctx.r11.u8);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7208;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F722C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F7238;
	sub_821E7018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef0
	ctx.lr = 0x821F7244;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F7248;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F725C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F727C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f72ac
	if (ctx.cr6.eq) goto loc_821F72AC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f66b0
	if (ctx.cr6.eq) goto loc_821F66B0;
	// b 0x821f66d4
	goto loc_821F66D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821F729C;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F72A4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821F72AC:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821F72B4"))) PPC_WEAK_FUNC(sub_821F72B4);
PPC_FUNC_IMPL(__imp__sub_821F72B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F72B8"))) PPC_WEAK_FUNC(sub_821F72B8);
PPC_FUNC_IMPL(__imp__sub_821F72B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F72C0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f75bc
	if (ctx.cr6.gt) goto loc_821F75BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f730c
	// bdzf 4*cr6+eq,0x821f7384
	// bdzf 4*cr6+eq,0x821f73e0
	// bdzf 4*cr6+eq,0x821f7540
	// bdzf 4*cr6+eq,0x821f7450
	// bdzf 4*cr6+eq,0x821f7474
	// bdzf 4*cr6+eq,0x821f74b8
	// bne cr6,0x821f75ac
	if (!ctx.cr6.eq) goto loc_821F75AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F730C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821F731C;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F7338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f7358
	if (ctx.cr6.eq) goto loc_821F7358;
loc_821F7340:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7358:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x821F7360;
	sub_822565C8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F7374;
	sub_8215CE78(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7384:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821F7394;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F73B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f7340
	if (!ctx.cr6.eq) goto loc_821F7340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30116
	ctx.r5.s64 = 30116;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F73D0;
	sub_821F54E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F73E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F73E8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f75bc
	if (ctx.cr6.eq) goto loc_821F75BC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7438
	if (ctx.cr6.eq) goto loc_821F7438;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F7408;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f7358
	if (!ctx.cr6.eq) goto loc_821F7358;
loc_821F7410:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30115
	ctx.r5.s64 = 30115;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F7428;
	sub_821F54E8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7438:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f7358
	if (ctx.cr6.eq) goto loc_821F7358;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7410
	if (ctx.cr6.eq) goto loc_821F7410;
	// b 0x821f7358
	goto loc_821F7358;
loc_821F7450:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565d0
	ctx.lr = 0x821F745C;
	sub_822565D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f75bc
	if (!ctx.cr6.eq) goto loc_821F75BC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7474:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8241e0ac
	ctx.lr = 0x821F7488;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f75bc
	if (ctx.cr6.eq) goto loc_821F75BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821f75bc
	if (!ctx.cr6.eq) goto loc_821F75BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f75bc
	if (!ctx.cr6.eq) goto loc_821F75BC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F74B8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82088268
	ctx.lr = 0x821F74C0;
	sub_82088268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f75bc
	if (ctx.cr6.eq) goto loc_821F75BC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821F74E0;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F74FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f7518
	if (ctx.cr6.eq) goto loc_821F7518;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x821f7520
	goto loc_821F7520;
loc_821F7518:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821F7520:
	// bl 0x8215bd60
	ctx.lr = 0x821F7524;
	sub_8215BD60(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F7538;
	sub_8215CE90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7548;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f75bc
	if (ctx.cr6.eq) goto loc_821F75BC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7588
	if (ctx.cr6.eq) goto loc_821F7588;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F7568;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f759c
	if (!ctx.cr6.eq) goto loc_821F759C;
loc_821F7570:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7588:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f759c
	if (ctx.cr6.eq) goto loc_821F759C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7570
	if (ctx.cr6.eq) goto loc_821F7570;
loc_821F759C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F75AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F75B4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821F75BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F75C4"))) PPC_WEAK_FUNC(sub_821F75C4);
PPC_FUNC_IMPL(__imp__sub_821F75C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F75C8"))) PPC_WEAK_FUNC(sub_821F75C8);
PPC_FUNC_IMPL(__imp__sub_821F75C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F75D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f79d4
	if (ctx.cr6.gt) goto loc_821F79D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f765c
	// bdzf 4*cr6+eq,0x821f7754
	// bdzf 4*cr6+eq,0x821f7814
	// bdzf 4*cr6+eq,0x821f78a8
	// bdzf 4*cr6+eq,0x821f7924
	// bdzf 4*cr6+eq,0x821f7954
	// bdzf 4*cr6+eq,0x821f79bc
	// bne cr6,0x821f78f0
	if (!ctx.cr6.eq) goto loc_821F78F0;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F7618;
	sub_8231E120(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f7644
	if (!ctx.cr6.eq) goto loc_821F7644;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x823206c8
	ctx.lr = 0x821F7634;
	sub_823206C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7644:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F765C:
	// lwz r4,32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,-796
	ctx.r30.s64 = ctx.r11.s64 + -796;
	// bne cr6,0x821f767c
	if (!ctx.cr6.eq) goto loc_821F767C;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821f7690
	goto loc_821F7690;
loc_821F767C:
	// lwz r29,-796(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F7688;
	sub_821E7018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821F7690:
	// bl 0x821e6ef0
	ctx.lr = 0x821F7694;
	sub_821E6EF0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f7718
	if (!ctx.cr6.eq) goto loc_821F7718;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x821f76e8
	if (!ctx.cr6.eq) goto loc_821F76E8;
	// lwz r11,32652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f76e8
	if (!ctx.cr6.gt) goto loc_821F76E8;
	// bl 0x8215bd08
	ctx.lr = 0x821F76BC;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,107
	ctx.r4.s64 = 107;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F76D0;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F76E8:
	// bl 0x8215bd08
	ctx.lr = 0x821F76EC;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F7700;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7718:
	// bl 0x8215bd08
	ctx.lr = 0x821F771C;
	sub_8215BD08(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821f7730
	if (!ctx.cr6.eq) goto loc_821F7730;
	// bl 0x8215bd08
	ctx.lr = 0x821F772C;
	sub_8215BD08(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_821F7730:
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F773C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7754:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-796(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f79d4
	if (!ctx.cr6.eq) goto loc_821F79D4;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821f77b8
	if (ctx.cr6.eq) goto loc_821F77B8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821f7798
	if (ctx.cr6.eq) goto loc_821F7798;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7798:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F77B8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x821f77d0
	if (!ctx.cr6.eq) goto loc_821F77D0;
	// lwz r4,32652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32652);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f77e0
	if (!ctx.cr6.eq) goto loc_821F77E0;
loc_821F77D0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F77E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F77E8;
	sub_821E7018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F77F4;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r3,r29
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r29.u64, ctx.xer);
	// bge cr6,0x821f77d0
	if (!ctx.cr6.lt) goto loc_821F77D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7814:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x821e6f08
	ctx.lr = 0x821F7824;
	sub_821E6F08(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,112
	ctx.r30.s64 = 112;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bgt cr6,0x821f7860
	if (ctx.cr6.gt) goto loc_821F7860;
	// beq cr6,0x821f7858
	if (ctx.cr6.eq) goto loc_821F7858;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821f7850
	if (ctx.cr6.eq) goto loc_821F7850;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821f786c
	if (!ctx.cr6.eq) goto loc_821F786C;
	// li r30,118
	ctx.r30.s64 = 118;
	// b 0x821f786c
	goto loc_821F786C;
loc_821F7850:
	// li r30,112
	ctx.r30.s64 = 112;
	// b 0x821f786c
	goto loc_821F786C;
loc_821F7858:
	// li r30,125
	ctx.r30.s64 = 125;
	// b 0x821f786c
	goto loc_821F786C;
loc_821F7860:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x821f786c
	if (!ctx.cr6.eq) goto loc_821F786C;
	// li r30,131
	ctx.r30.s64 = 131;
loc_821F786C:
	// bl 0x8215bd08
	ctx.lr = 0x821F7870;
	sub_8215BD08(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821f7884
	if (!ctx.cr6.eq) goto loc_821F7884;
	// bl 0x8215bd08
	ctx.lr = 0x821F7880;
	sub_8215BD08(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_821F7884:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F7890;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F78A8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f79d4
	if (!ctx.cr6.eq) goto loc_821F79D4;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// beq cr6,0x821f78e0
	if (ctx.cr6.eq) goto loc_821F78E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F78E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F78F0:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F78FC;
	sub_8231E120(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F790C;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F7914;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7924:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F793C;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F7954:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,32652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32652);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7058
	ctx.lr = 0x821F7964;
	sub_821E7058(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r31,32388
	ctx.r30.s64 = ctx.r31.s64 + 32388;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-8172
	ctx.r5.s64 = ctx.r10.s64 + -8172;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821F7980;
	sub_8218A5F0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32484, ctx.r30.u32);
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,24999
	ctx.r5.s64 = 24999;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F79A4;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F79BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F79C4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f79d4
	if (ctx.cr6.eq) goto loc_821F79D4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821F79D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F79DC"))) PPC_WEAK_FUNC(sub_821F79DC);
PPC_FUNC_IMPL(__imp__sub_821F79DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F79E0"))) PPC_WEAK_FUNC(sub_821F79E0);
PPC_FUNC_IMPL(__imp__sub_821F79E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F79E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x821f8054
	if (ctx.cr6.gt) goto loc_821F8054;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31252
	ctx.r12.s64 = ctx.r12.s64 + 31252;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,31312(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31312);
	// lwz r16,31584(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31584);
	// lwz r16,31648(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31648);
	// lwz r16,31748(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31748);
	// lwz r16,31948(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31948);
	// lwz r16,32128(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// lwz r16,32168(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// lwz r16,32344(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// lwz r16,32544(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32544);
	// lwz r16,32596(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32596);
	// lwz r16,32636(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32636);
	// lwz r16,32668(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32668);
	// lwz r16,32716(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32716);
	// lwz r16,32740(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32740);
	// lwz r16,-32744(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32744);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F7A5C;
	sub_8231E120(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x823206c8
	ctx.lr = 0x821F7A6C;
	sub_823206C8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821f7aa0
	if (ctx.cr6.eq) goto loc_821F7AA0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821f7aa0
	if (ctx.cr6.eq) goto loc_821F7AA0;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x821f7aa0
	if (ctx.cr6.eq) goto loc_821F7AA0;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821f7aa0
	if (ctx.cr6.eq) goto loc_821F7AA0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7AA0:
	// lwz r29,-796(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F7AB0;
	sub_821E7018(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F7ABC;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r28,r3
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x821f7b1c
	if (!ctx.cr6.gt) goto loc_821F7B1C;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// addi r30,r31,32388
	ctx.r30.s64 = ctx.r31.s64 + 32388;
	// lwz r4,32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
	// bl 0x821e7018
	ctx.lr = 0x821F7AD4;
	sub_821E7018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rldicl r6,r3,54,10
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 54) & 0x3FFFFFFFFFFFFF;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821F7AEC;
	sub_8218A5F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// stw r30,32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32484, ctx.r30.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r9,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7B1C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7b50
	if (ctx.cr6.eq) goto loc_821F7B50;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f7b50
	if (ctx.cr6.eq) goto loc_821F7B50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7B50:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,24999
	ctx.r9.s64 = 24999;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// addi r6,r11,2900
	ctx.r6.s64 = ctx.r11.s64 + 2900;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32484, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7BA8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7bf0
	if (ctx.cr6.eq) goto loc_821F7BF0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F7BC8;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
loc_821F7BCC:
	// beq cr6,0x821f7b50
	if (ctx.cr6.eq) goto loc_821F7B50;
loc_821F7BD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7BF0:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f7bd0
	if (ctx.cr6.eq) goto loc_821F7BD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x821f7bcc
	goto loc_821F7BCC;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823496c0
	ctx.lr = 0x821F7C14;
	sub_823496C0(ctx, base);
	// addi r4,r31,32504
	ctx.r4.s64 = ctx.r31.s64 + 32504;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f18
	ctx.lr = 0x821F7C20;
	sub_821E6F18(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32636);
	// bl 0x821e6f28
	ctx.lr = 0x821F7C2C;
	sub_821E6F28(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32640);
	// bl 0x821e6f38
	ctx.lr = 0x821F7C38;
	sub_821E6F38(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32644);
	// bl 0x821e6f30
	ctx.lr = 0x821F7C44;
	sub_821E6F30(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,113
	ctx.r29.s64 = 113;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bgt cr6,0x821f7c80
	if (ctx.cr6.gt) goto loc_821F7C80;
	// beq cr6,0x821f7c78
	if (ctx.cr6.eq) goto loc_821F7C78;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821f7c70
	if (ctx.cr6.eq) goto loc_821F7C70;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821f7c8c
	if (!ctx.cr6.eq) goto loc_821F7C8C;
	// li r29,119
	ctx.r29.s64 = 119;
	// b 0x821f7c8c
	goto loc_821F7C8C;
loc_821F7C70:
	// li r29,113
	ctx.r29.s64 = 113;
	// b 0x821f7c8c
	goto loc_821F7C8C;
loc_821F7C78:
	// li r29,126
	ctx.r29.s64 = 126;
	// b 0x821f7c8c
	goto loc_821F7C8C;
loc_821F7C80:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x821f7c8c
	if (!ctx.cr6.eq) goto loc_821F7C8C;
	// li r29,132
	ctx.r29.s64 = 132;
loc_821F7C8C:
	// bl 0x8215bd08
	ctx.lr = 0x821F7C90;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F7CA4;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F7CBC;
	sub_8215CE78(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8054
	if (!ctx.cr6.eq) goto loc_821F8054;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f7d50
	if (ctx.cr6.gt) goto loc_821F7D50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f7d50
	// bdzf 4*cr6+eq,0x821f7d1c
	// bne cr6,0x821f8054
	if (!ctx.cr6.eq) goto loc_821F8054;
loc_821F7D04:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7D1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7D50:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7D88;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823496c0
	ctx.lr = 0x821F7DB8;
	sub_823496C0(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32640);
	// bl 0x821e6f38
	ctx.lr = 0x821F7DC4;
	sub_821E6F38(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,114
	ctx.r29.s64 = 114;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x821f7e00
	if (ctx.cr6.gt) goto loc_821F7E00;
	// beq cr6,0x821f7df8
	if (ctx.cr6.eq) goto loc_821F7DF8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821f7df0
	if (ctx.cr6.eq) goto loc_821F7DF0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821f7e0c
	if (!ctx.cr6.eq) goto loc_821F7E0C;
	// li r29,120
	ctx.r29.s64 = 120;
	// b 0x821f7e0c
	goto loc_821F7E0C;
loc_821F7DF0:
	// li r29,114
	ctx.r29.s64 = 114;
	// b 0x821f7e0c
	goto loc_821F7E0C;
loc_821F7DF8:
	// li r29,127
	ctx.r29.s64 = 127;
	// b 0x821f7e0c
	goto loc_821F7E0C;
loc_821F7E00:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x821f7e0c
	if (!ctx.cr6.eq) goto loc_821F7E0C;
	// li r29,133
	ctx.r29.s64 = 133;
loc_821F7E0C:
	// bl 0x8215bd08
	ctx.lr = 0x821F7E10;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F7E24;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x821f7e48
	if (ctx.cr6.eq) goto loc_821F7E48;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F7E48;
	sub_8215CE78(ctx, base);
loc_821F7E48:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8054
	if (!ctx.cr6.eq) goto loc_821F8054;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f7edc
	if (ctx.cr6.gt) goto loc_821F7EDC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f7d04
	if (ctx.cr6.eq) goto loc_821F7D04;
	// bdz 0x821f7edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821F7EDC;
	// bdz 0x821f7edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821F7EDC;
	// bdz 0x821f7edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821F7EDC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,24999
	ctx.r9.s64 = 24999;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F7EDC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,24999
	ctx.r9.s64 = 24999;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f7f8c
	if (!ctx.cr6.eq) goto loc_821F7F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7F34;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f7f8c
	if (!ctx.cr6.eq) goto loc_821F7F8C;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bgt 0x821f8054
	if (ctx.cr0.gt) goto loc_821F8054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F7F6C;
	sub_821F5A30(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F7F84;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
loc_821F7F8C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F7FB4;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F7FD4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821F7FE8;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F8000;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8054
	if (ctx.cr6.eq) goto loc_821F8054;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8054
	if (!ctx.cr6.eq) goto loc_821F8054;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F8034;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F803C;
	sub_82155510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F804C;
	sub_8215CE90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821F8054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F805C"))) PPC_WEAK_FUNC(sub_821F805C);
PPC_FUNC_IMPL(__imp__sub_821F805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F8060"))) PPC_WEAK_FUNC(sub_821F8060);
PPC_FUNC_IMPL(__imp__sub_821F8060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f82a0
	if (ctx.cr6.gt) goto loc_821F82A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f80b8
	// bdzf 4*cr6+eq,0x821f8130
	// bdzf 4*cr6+eq,0x821f81b0
	// bdzf 4*cr6+eq,0x821f81d4
	// bdzf 4*cr6+eq,0x821f8204
	// bdzf 4*cr6+eq,0x821f8228
	// bdzf 4*cr6+eq,0x821f8244
	// bne cr6,0x821f8270
	if (!ctx.cr6.eq) goto loc_821F8270;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F80B8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,115
	ctx.r30.s64 = 115;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x821f80f4
	if (ctx.cr6.gt) goto loc_821F80F4;
	// beq cr6,0x821f80ec
	if (ctx.cr6.eq) goto loc_821F80EC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821f80e4
	if (ctx.cr6.eq) goto loc_821F80E4;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821f8100
	if (!ctx.cr6.eq) goto loc_821F8100;
	// li r30,121
	ctx.r30.s64 = 121;
	// b 0x821f8100
	goto loc_821F8100;
loc_821F80E4:
	// li r30,115
	ctx.r30.s64 = 115;
	// b 0x821f8100
	goto loc_821F8100;
loc_821F80EC:
	// li r30,128
	ctx.r30.s64 = 128;
	// b 0x821f8100
	goto loc_821F8100;
loc_821F80F4:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x821f8100
	if (!ctx.cr6.eq) goto loc_821F8100;
	// li r30,134
	ctx.r30.s64 = 134;
loc_821F8100:
	// bl 0x8215bd08
	ctx.lr = 0x821F8104;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F811C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f82a0
	if (ctx.cr6.eq) goto loc_821F82A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8130:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f82a0
	if (!ctx.cr6.eq) goto loc_821F82A0;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821f8184
	if (ctx.cr6.gt) goto loc_821F8184;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f8184
	// bdzf 4*cr6+eq,0x821f8184
	// bdzf 4*cr6+eq,0x821f8184
	// bdzf 4*cr6+eq,0x821f8170
	// bne cr6,0x821f8184
	if (!ctx.cr6.eq) goto loc_821F8184;
loc_821F8170:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8184:
	// li r11,24999
	ctx.r11.s64 = 24999;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F81B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F81B8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f82a0
	if (ctx.cr6.eq) goto loc_821F82A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F81D4:
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f8238
	if (!ctx.cr6.eq) goto loc_821F8238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F81E8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f8238
	if (!ctx.cr6.eq) goto loc_821F8238;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8204:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bgt 0x821f82a0
	if (ctx.cr0.gt) goto loc_821F82A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F821C;
	sub_821F5A30(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F8230;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f82a0
	if (ctx.cr6.eq) goto loc_821F82A0;
loc_821F8238:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8244:
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F825C;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f82a0
	if (ctx.cr6.eq) goto loc_821F82A0;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f82a0
	goto loc_821F82A0;
loc_821F8270:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F8280;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8288;
	sub_82155510(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F8298;
	sub_8215CE90(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_821F82A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F82B8"))) PPC_WEAK_FUNC(sub_821F82B8);
PPC_FUNC_IMPL(__imp__sub_821F82B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F82C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x821f8618
	if (ctx.cr6.gt) goto loc_821F8618;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32020
	ctx.r12.s64 = ctx.r12.s64 + -32020;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-31968(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31968);
	// lwz r16,-31952(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
	// lwz r16,-31768(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31768);
	// lwz r16,-31732(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31732);
	// lwz r16,-31572(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31572);
	// lwz r16,-31548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31548);
	// lwz r16,-31516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31516);
	// lwz r16,-31464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31464);
	// lwz r16,-31424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31424);
	// lwz r16,-31392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31392);
	// lwz r16,-31344(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31344);
	// lwz r16,-31320(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31320);
	// lwz r16,-31268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31268);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f8350
	if (ctx.cr6.eq) goto loc_821F8350;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F8348;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f8618
	if (!ctx.cr6.eq) goto loc_821F8618;
loc_821F8350:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x821e6ed0
	ctx.lr = 0x821F8364;
	sub_821E6ED0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,116
	ctx.r30.s64 = 116;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bgt cr6,0x821f83ac
	if (ctx.cr6.gt) goto loc_821F83AC;
	// beq cr6,0x821f83a4
	if (ctx.cr6.eq) goto loc_821F83A4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821f839c
	if (ctx.cr6.eq) goto loc_821F839C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821f83b8
	if (!ctx.cr6.eq) goto loc_821F83B8;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// li r30,122
	ctx.r30.s64 = 122;
	// lwz r4,32656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32656);
	// bl 0x821e6f40
	ctx.lr = 0x821F8398;
	sub_821E6F40(ctx, base);
	// b 0x821f83b8
	goto loc_821F83B8;
loc_821F839C:
	// li r30,116
	ctx.r30.s64 = 116;
	// b 0x821f83b8
	goto loc_821F83B8;
loc_821F83A4:
	// li r30,129
	ctx.r30.s64 = 129;
	// b 0x821f83b8
	goto loc_821F83B8;
loc_821F83AC:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x821f83b8
	if (!ctx.cr6.eq) goto loc_821F83B8;
	// li r30,135
	ctx.r30.s64 = 135;
loc_821F83B8:
	// bl 0x8215bd08
	ctx.lr = 0x821F83BC;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F83D0;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8618
	if (ctx.cr6.eq) goto loc_821F8618;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8618
	if (!ctx.cr6.eq) goto loc_821F8618;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f847c
	if (ctx.cr6.gt) goto loc_821F847C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f847c
	// bdzf 4*cr6+eq,0x821f8448
	// bne cr6,0x821f847c
	if (!ctx.cr6.eq) goto loc_821F847C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8448:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F847C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F84CC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8618
	if (ctx.cr6.eq) goto loc_821F8618;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f8550
	if (!ctx.cr6.eq) goto loc_821F8550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F84F8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f8550
	if (!ctx.cr6.eq) goto loc_821F8550;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bgt 0x821f8618
	if (ctx.cr0.gt) goto loc_821F8618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F8530;
	sub_821F5A30(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F8548;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8618
	if (ctx.cr6.eq) goto loc_821F8618;
loc_821F8550:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F8578;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8618
	if (ctx.cr6.eq) goto loc_821F8618;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8598;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821F85AC;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F85C4;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8618
	if (ctx.cr6.eq) goto loc_821F8618;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8618
	if (!ctx.cr6.eq) goto loc_821F8618;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F85F8;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8600;
	sub_82155510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F8610;
	sub_8215CE90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821F8618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F8620"))) PPC_WEAK_FUNC(sub_821F8620);
PPC_FUNC_IMPL(__imp__sub_821F8620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F8628;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821f89c8
	if (ctx.cr6.gt) goto loc_821F89C8;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31148
	ctx.r12.s64 = ctx.r12.s64 + -31148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-31092(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31092);
	// lwz r16,-31076(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31076);
	// lwz r16,-30896(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30896);
	// lwz r16,-30832(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30832);
	// lwz r16,-30628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30628);
	// lwz r16,-30604(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30604);
	// lwz r16,-30264(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30264);
	// lwz r16,-30572(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30572);
	// lwz r16,-30520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30520);
	// lwz r16,-30480(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30480);
	// lwz r16,-30448(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30448);
	// lwz r16,-30400(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30400);
	// lwz r16,-30376(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30376);
	// lwz r16,-30324(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30324);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x821e6ee0
	ctx.lr = 0x821F86B0;
	sub_821E6EE0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,117
	ctx.r30.s64 = 117;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821f86f8
	if (ctx.cr6.gt) goto loc_821F86F8;
	// beq cr6,0x821f86f0
	if (ctx.cr6.eq) goto loc_821F86F0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821f86e8
	if (ctx.cr6.eq) goto loc_821F86E8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x821f8704
	if (!ctx.cr6.eq) goto loc_821F8704;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// li r30,123
	ctx.r30.s64 = 123;
	// lwz r4,32656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32656);
	// bl 0x821e6f40
	ctx.lr = 0x821F86E4;
	sub_821E6F40(ctx, base);
	// b 0x821f8704
	goto loc_821F8704;
loc_821F86E8:
	// li r30,117
	ctx.r30.s64 = 117;
	// b 0x821f8704
	goto loc_821F8704;
loc_821F86F0:
	// li r30,130
	ctx.r30.s64 = 130;
	// b 0x821f8704
	goto loc_821F8704;
loc_821F86F8:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x821f8704
	if (!ctx.cr6.eq) goto loc_821F8704;
	// li r30,136
	ctx.r30.s64 = 136;
loc_821F8704:
	// bl 0x8215bd08
	ctx.lr = 0x821F8708;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F871C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x821f8740
	if (!ctx.cr6.eq) goto loc_821F8740;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F8740;
	sub_8215CE78(ctx, base);
loc_821F8740:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f89c8
	if (!ctx.cr6.eq) goto loc_821F89C8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x821f8780
	if (!ctx.cr6.eq) goto loc_821F8780;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F8780;
	sub_8215CE90(ctx, base);
loc_821F8780:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f8818
	if (ctx.cr6.gt) goto loc_821F8818;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f8818
	// bdzf 4*cr6+eq,0x821f8818
	// bdzf 4*cr6+eq,0x821f8818
	// bne cr6,0x821f87d0
	if (!ctx.cr6.eq) goto loc_821F87D0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F87D0:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,24999
	ctx.r9.s64 = 24999;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8818:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,24999
	ctx.r9.s64 = 24999;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F887C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f8900
	if (!ctx.cr6.eq) goto loc_821F8900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F88A8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f8900
	if (!ctx.cr6.eq) goto loc_821F8900;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bgt 0x821f89c8
	if (ctx.cr0.gt) goto loc_821F89C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F88E0;
	sub_821F5A30(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F88F8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
loc_821F8900:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F8928;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8948;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821F895C;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F8974;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f89c8
	if (ctx.cr6.eq) goto loc_821F89C8;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f89c8
	if (!ctx.cr6.eq) goto loc_821F89C8;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F89A8;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F89B0;
	sub_82155510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F89C0;
	sub_8215CE90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821F89C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F89D0"))) PPC_WEAK_FUNC(sub_821F89D0);
PPC_FUNC_IMPL(__imp__sub_821F89D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F89D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x821f8d88
	if (ctx.cr6.gt) goto loc_821F8D88;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30204
	ctx.r12.s64 = ctx.r12.s64 + -30204;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-30152(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30152);
	// lwz r16,-30088(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30088);
	// lwz r16,-30044(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30044);
	// lwz r16,-29908(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29908);
	// lwz r16,-29716(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29716);
	// lwz r16,-29664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29664);
	// lwz r16,-29556(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29556);
	// lwz r16,-29508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29508);
	// lwz r16,-29508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29508);
	// lwz r16,-29440(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29440);
	// lwz r16,-29440(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29440);
	// lwz r16,-29372(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29372);
	// lwz r16,-29336(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29336);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F8A44;
	sub_8231E120(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F8A5C;
	sub_823206C8(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F8A70;
	sub_8215CE78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,30167
	ctx.r10.s64 = 30167;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f8ac4
	if (ctx.cr6.eq) goto loc_821F8AC4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F8ABC;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f8d88
	if (!ctx.cr6.eq) goto loc_821F8D88;
loc_821F8AC4:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823496c0
	ctx.lr = 0x821F8AD4;
	sub_823496C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// addi r4,r11,4393
	ctx.r4.s64 = ctx.r11.s64 + 4393;
	// bl 0x821e6f18
	ctx.lr = 0x821F8AE4;
	sub_821E6F18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f28
	ctx.lr = 0x821F8AF0;
	sub_821E6F28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f38
	ctx.lr = 0x821F8AFC;
	sub_821E6F38(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F8B00;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F8B14;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8d88
	if (!ctx.cr6.eq) goto loc_821F8D88;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f8bb4
	if (ctx.cr6.gt) goto loc_821F8BB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f8bb4
	// bdzf 4*cr6+eq,0x821f8b68
	// bdzf 4*cr6+eq,0x821f8bb4
	// bne cr6,0x821f8b78
	if (!ctx.cr6.eq) goto loc_821F8B78;
loc_821F8B68:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F8B80;
	sub_821F5A30(ctx, base);
loc_821F8B80:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,30102
	ctx.r11.s64 = 30102;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// stw r9,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8BB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F8BBC;
	sub_821F5A30(ctx, base);
loc_821F8BBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,30103
	ctx.r10.s64 = 30103;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821F8BF0;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F8C08;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f8d88
	if (!ctx.cr6.eq) goto loc_821F8D88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F8C3C;
	sub_821F5A30(ctx, base);
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821f8c58
	if (ctx.cr6.eq) goto loc_821F8C58;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821f8b80
	if (ctx.cr6.eq) goto loc_821F8B80;
	// b 0x821f8bbc
	goto loc_821F8BBC;
loc_821F8C58:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,30168
	ctx.r11.s64 = 30168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// stw r9,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F8CA4;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F8CC4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F8CF0;
	sub_823206C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F8D08;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// bl 0x8215bd08
	ctx.lr = 0x821F8D14;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F8D2C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8d88
	if (ctx.cr6.eq) goto loc_821F8D88;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8d88
	if (!ctx.cr6.eq) goto loc_821F8D88;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8D70;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F8D88;
	sub_8215CE90(ctx, base);
loc_821F8D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F8D90"))) PPC_WEAK_FUNC(sub_821F8D90);
PPC_FUNC_IMPL(__imp__sub_821F8D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F8D98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f8f60
	if (ctx.cr6.gt) goto loc_821F8F60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f8e40
	// bdzf 4*cr6+eq,0x821f8ec8
	// bdzf 4*cr6+eq,0x821f8f30
	// bne cr6,0x821f8f50
	if (!ctx.cr6.eq) goto loc_821F8F50;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ef0
	ctx.lr = 0x821F8DD4;
	sub_821E6EF0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f8e10
	if (!ctx.cr6.eq) goto loc_821F8E10;
	// bl 0x8215bd08
	ctx.lr = 0x821F8DE4;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,107
	ctx.r4.s64 = 107;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F8DF8;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8f60
	if (ctx.cr6.eq) goto loc_821F8F60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8E10:
	// bl 0x8215bd08
	ctx.lr = 0x821F8E14;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F8E28;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8f60
	if (ctx.cr6.eq) goto loc_821F8F60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8E40:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-796(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f8f60
	if (!ctx.cr6.eq) goto loc_821F8F60;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821f8e78
	if (ctx.cr6.eq) goto loc_821F8E78;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8E78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32652);
	// bl 0x821e7018
	ctx.lr = 0x821F8E84;
	sub_821E7018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F8E90;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r3,r29
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r29.u64, ctx.xer);
	// bge cr6,0x821f8eb0
	if (!ctx.cr6.lt) goto loc_821F8EB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8EB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8EC8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,32652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32652);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7058
	ctx.lr = 0x821F8ED8;
	sub_821E7058(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r31,32388
	ctx.r30.s64 = ctx.r31.s64 + 32388;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-8172
	ctx.r5.s64 = ctx.r10.s64 + -8172;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821F8EF4;
	sub_8218A5F0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32484, ctx.r30.u32);
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,24999
	ctx.r5.s64 = 24999;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821F8F18;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8f60
	if (ctx.cr6.eq) goto loc_821F8F60;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F8F38;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f8f60
	if (ctx.cr6.eq) goto loc_821F8F60;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F8F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F8F58;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821F8F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F8F68"))) PPC_WEAK_FUNC(sub_821F8F68);
PPC_FUNC_IMPL(__imp__sub_821F8F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f9188
	if (ctx.cr6.gt) goto loc_821F9188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f8ff0
	// bdzf 4*cr6+eq,0x821f9010
	// bdzf 4*cr6+eq,0x821f909c
	// bdzf 4*cr6+eq,0x821f90c0
	// bdzf 4*cr6+eq,0x821f90ec
	// bdzf 4*cr6+eq,0x821f9108
	// bdzf 4*cr6+eq,0x821f911c
	// bne cr6,0x821f914c
	if (!ctx.cr6.eq) goto loc_821F914C;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,32656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32656);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f40
	ctx.lr = 0x821F8FC4;
	sub_821E6F40(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F8FC8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F8FDC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9188
	if (ctx.cr6.eq) goto loc_821F9188;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F8FF0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9188
	if (!ctx.cr6.eq) goto loc_821F9188;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F9010:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821f9090
	if (ctx.cr6.eq) goto loc_821F9090;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821f9064
	if (ctx.cr6.eq) goto loc_821F9064;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x821f9188
	if (!ctx.cr6.eq) goto loc_821F9188;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F9064:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F9090:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F909C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F90A4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9188
	if (ctx.cr6.eq) goto loc_821F9188;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F90C0:
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F90D8;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9188
	if (ctx.cr6.eq) goto loc_821F9188;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F90EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F90F4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9188
	if (ctx.cr6.eq) goto loc_821F9188;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F9108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F9110;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F911C:
	// bl 0x8215bd08
	ctx.lr = 0x821F9120;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F9138;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9188
	if (ctx.cr6.eq) goto loc_821F9188;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f9188
	goto loc_821F9188;
loc_821F914C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9188
	if (!ctx.cr6.eq) goto loc_821F9188;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F9168;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F9170;
	sub_82155510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F9180;
	sub_8215CE90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821F9188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F91A0"))) PPC_WEAK_FUNC(sub_821F91A0);
PPC_FUNC_IMPL(__imp__sub_821F91A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821f93c0
	if (ctx.cr6.gt) goto loc_821F93C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f9228
	// bdzf 4*cr6+eq,0x821f9248
	// bdzf 4*cr6+eq,0x821f92d4
	// bdzf 4*cr6+eq,0x821f92f8
	// bdzf 4*cr6+eq,0x821f9324
	// bdzf 4*cr6+eq,0x821f9340
	// bdzf 4*cr6+eq,0x821f9354
	// bne cr6,0x821f9384
	if (!ctx.cr6.eq) goto loc_821F9384;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,32656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32656);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f40
	ctx.lr = 0x821F91FC;
	sub_821E6F40(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F9200;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,111
	ctx.r4.s64 = 111;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F9214;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f93c0
	if (ctx.cr6.eq) goto loc_821F93C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9228:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f93c0
	if (!ctx.cr6.eq) goto loc_821F93C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9248:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821f92c8
	if (ctx.cr6.eq) goto loc_821F92C8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821f929c
	if (ctx.cr6.eq) goto loc_821F929C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x821f93c0
	if (!ctx.cr6.eq) goto loc_821F93C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F929C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F92C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F92D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F92DC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f93c0
	if (ctx.cr6.eq) goto loc_821F93C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F92F8:
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F9310;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f93c0
	if (ctx.cr6.eq) goto loc_821F93C0;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F932C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f93c0
	if (ctx.cr6.eq) goto loc_821F93C0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F9348;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9354:
	// bl 0x8215bd08
	ctx.lr = 0x821F9358;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F9370;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f93c0
	if (ctx.cr6.eq) goto loc_821F93C0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821f93c0
	goto loc_821F93C0;
loc_821F9384:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f93c0
	if (!ctx.cr6.eq) goto loc_821F93C0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821F93A0;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F93A8;
	sub_82155510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F93B8;
	sub_8215CE90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821F93C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F93D8"))) PPC_WEAK_FUNC(sub_821F93D8);
PPC_FUNC_IMPL(__imp__sub_821F93D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821F93E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x821f9ddc
	if (ctx.cr6.gt) goto loc_821F9DDC;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27636
	ctx.r12.s64 = ctx.r12.s64 + -27636;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-27540(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27540);
	// lwz r16,-27272(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27272);
	// lwz r16,-27172(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27172);
	// lwz r16,-27108(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27108);
	// lwz r16,-26968(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26968);
	// lwz r16,-26896(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26896);
	// lwz r16,-26736(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26736);
	// lwz r16,-26484(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26484);
	// lwz r16,-26416(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26416);
	// lwz r16,-26380(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26380);
	// lwz r16,-26248(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26248);
	// lwz r16,-26196(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26196);
	// lwz r16,-26016(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26016);
	// lwz r16,-25968(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25968);
	// lwz r16,-25124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25124);
	// lwz r16,-25884(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25884);
	// lwz r16,-25816(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25816);
	// lwz r16,-25780(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25780);
	// lwz r16,-25668(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25668);
	// lwz r16,-25520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25520);
	// lwz r16,-25428(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25428);
	// lwz r16,-25220(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25220);
	// lwz r16,-25180(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25180);
	// lwz r16,-25148(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25148);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F9478;
	sub_8231E120(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F9490;
	sub_823206C8(ctx, base);
	// lwz r4,32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
	// lwz r28,-796(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e7018
	ctx.lr = 0x821F94A0;
	sub_821E7018(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821F94AC;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r27,r3
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x821f9518
	if (!ctx.cr6.gt) goto loc_821F9518;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// addi r30,r31,32388
	ctx.r30.s64 = ctx.r31.s64 + 32388;
	// lwz r4,32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
	// bl 0x821e7018
	ctx.lr = 0x821F94C4;
	sub_821E7018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rldicl r6,r3,54,10
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 54) & 0x3FFFFFFFFFFFFF;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821F94DC;
	sub_8218A5F0(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32484, ctx.r30.u32);
	// li r11,30152
	ctx.r11.s64 = 30152;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f94f4
	if (!ctx.cr6.eq) goto loc_821F94F4;
	// li r11,30104
	ctx.r11.s64 = 30104;
loc_821F94F4:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r29,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r29.u32);
	// stw r29,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r29.u32);
	// stw r11,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9518:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x821f95a8
	if (ctx.cr6.eq) goto loc_821F95A8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r29,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r29.u32);
	// addi r8,r11,35
	ctx.r8.s64 = ctx.r11.s64 + 35;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r7.u32);
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821f9568
	if (ctx.cr6.eq) goto loc_821F9568;
	// li r11,30162
	ctx.r11.s64 = 30162;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9568:
	// li r11,30163
	ctx.r11.s64 = 30163;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9580;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f95b8
	if (ctx.cr6.eq) goto loc_821F95B8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F95A0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f9b3c
	if (!ctx.cr6.eq) goto loc_821F9B3C;
loc_821F95A8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F95B8:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9b3c
	if (ctx.cr6.eq) goto loc_821F9B3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f95a8
	if (ctx.cr6.eq) goto loc_821F95A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r11,30151
	ctx.r11.s64 = 30151;
	// bne cr6,0x821f95f8
	if (!ctx.cr6.eq) goto loc_821F95F8;
	// li r11,30107
	ctx.r11.s64 = 30107;
loc_821F95F8:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9624;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9650
	if (ctx.cr6.eq) goto loc_821F9650;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F964C;
	sub_823206C8(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_821F9650:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9688
	if (ctx.cr6.eq) goto loc_821F9688;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F9668;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f969c
	if (!ctx.cr6.eq) goto loc_821F969C;
loc_821F9670:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9688:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f969c
	if (ctx.cr6.eq) goto loc_821F969C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9670
	if (ctx.cr6.eq) goto loc_821F9670;
loc_821F969C:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r11,30153
	ctx.r11.s64 = 30153;
	// bne cr6,0x821f96c4
	if (!ctx.cr6.eq) goto loc_821F96C4;
	// li r11,30159
	ctx.r11.s64 = 30159;
loc_821F96C4:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,180
	ctx.r9.s64 = 180;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9710
	if (ctx.cr6.eq) goto loc_821F9710;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F9708;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
loc_821F9710:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823496c0
	ctx.lr = 0x821F9720;
	sub_823496C0(ctx, base);
	// addi r4,r31,32504
	ctx.r4.s64 = ctx.r31.s64 + 32504;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f18
	ctx.lr = 0x821F972C;
	sub_821E6F18(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32636);
	// bl 0x821e6f28
	ctx.lr = 0x821F9738;
	sub_821E6F28(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32640);
	// bl 0x821e6f38
	ctx.lr = 0x821F9744;
	sub_821E6F38(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32644);
	// bl 0x821e6f30
	ctx.lr = 0x821F9750;
	sub_821E6F30(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F9754;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F9768;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F9780;
	sub_8215CE78(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f97a4
	if (!ctx.cr6.gt) goto loc_821F97A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821F97A4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f9844
	if (ctx.cr6.gt) goto loc_821F9844;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f9844
	// bdzf 4*cr6+eq,0x821f97f8
	// bne cr6,0x821f9844
	if (!ctx.cr6.eq) goto loc_821F9844;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F97F8:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821F9808;
	sub_821F5A30(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,30148
	ctx.r11.s64 = 30148;
	// stw r29,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9828
	if (!ctx.cr6.eq) goto loc_821F9828;
	// li r11,30102
	ctx.r11.s64 = 30102;
loc_821F9828:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F984C;
	sub_821F5A30(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,30149
	ctx.r11.s64 = 30149;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f9870
	if (!ctx.cr6.eq) goto loc_821F9870;
	// li r11,30103
	ctx.r11.s64 = 30103;
loc_821F9870:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ed0
	ctx.lr = 0x821F98A0;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F98A4;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,135
	ctx.r4.s64 = 135;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F98B8;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f9844
	if (ctx.cr6.gt) goto loc_821F9844;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f9844
	// bdzf 4*cr6+eq,0x821f97f8
	// bne cr6,0x821f9930
	if (!ctx.cr6.eq) goto loc_821F9930;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F9938;
	sub_821F5A30(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,30152
	ctx.r11.s64 = 30152;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f995c
	if (!ctx.cr6.eq) goto loc_821F995C;
	// li r11,30104
	ctx.r11.s64 = 30104;
loc_821F995C:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821F997C;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,134
	ctx.r4.s64 = 134;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F9994;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821f9a18
	if (ctx.cr6.eq) goto loc_821F9A18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bl 0x821f5a30
	ctx.lr = 0x821F99D8;
	sub_821F5A30(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,30149
	ctx.r11.s64 = 30149;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f99f4
	if (!ctx.cr6.eq) goto loc_821F99F4;
	// li r11,30103
	ctx.r11.s64 = 30103;
loc_821F99F4:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// stw r9,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9A18:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,13
	ctx.r10.s64 = 13;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r11,30155
	ctx.r11.s64 = 30155;
	// bne cr6,0x821f9a34
	if (!ctx.cr6.eq) goto loc_821F9A34;
	// li r11,30160
	ctx.r11.s64 = 30160;
loc_821F9A34:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r9.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821F9A58;
	sub_821F5A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821F9A78;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9A98;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9ac4
	if (ctx.cr6.eq) goto loc_821F9AC4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F9ABC;
	sub_823206C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
loc_821F9AC4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F9AD4;
	sub_8215CE90(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9AEC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// bl 0x8215bd08
	ctx.lr = 0x821F9AF8;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821F9B10;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
loc_821F9B3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9B54;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821F9B68;
	sub_821F4B88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F9B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,30154
	ctx.r11.s64 = 30154;
	// stw r9,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f9b98
	if (!ctx.cr6.eq) goto loc_821F9B98;
	// li r11,30161
	ctx.r11.s64 = 30161;
loc_821F9B98:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9bdc
	if (ctx.cr6.eq) goto loc_821F9BDC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821F9BD4;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
loc_821F9BDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F9BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ed0
	ctx.lr = 0x821F9C08;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821F9C0C;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821F9C20;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821F9C38;
	sub_8215CE78(ctx, base);
	// li r10,180
	ctx.r10.s64 = 180;
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f9c64
	if (!ctx.cr6.gt) goto loc_821F9C64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821F9C64:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f9ddc
	if (ctx.cr6.gt) goto loc_821F9DDC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f9ddc
	if (!ctx.cr6.eq) goto loc_821F9DDC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821F9C94;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821F9C9C;
	sub_821F5A30(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9CB4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r29,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f9d54
	if (ctx.cr6.gt) goto loc_821F9D54;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f9d54
	// bdzf 4*cr6+eq,0x821f9d28
	// bne cr6,0x821f9d54
	if (!ctx.cr6.eq) goto loc_821F9D54;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,30155
	ctx.r11.s64 = 30155;
	// bne cr6,0x821f9d14
	if (!ctx.cr6.eq) goto loc_821F9D14;
	// li r11,30106
	ctx.r11.s64 = 30106;
loc_821F9D14:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9D28:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,30148
	ctx.r11.s64 = 30148;
	// bne cr6,0x821f9d40
	if (!ctx.cr6.eq) goto loc_821F9D40;
	// li r11,30102
	ctx.r11.s64 = 30102;
loc_821F9D40:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821F9D54:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,30149
	ctx.r11.s64 = 30149;
	// bne cr6,0x821f9d68
	if (!ctx.cr6.eq) goto loc_821F9D68;
	// li r11,30103
	ctx.r11.s64 = 30103;
loc_821F9D68:
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9D84;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9DAC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f9ddc
	if (ctx.cr6.eq) goto loc_821F9DDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821F9DCC;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821F9DD4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821F9DDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821F9DE4"))) PPC_WEAK_FUNC(sub_821F9DE4);
PPC_FUNC_IMPL(__imp__sub_821F9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F9DE8"))) PPC_WEAK_FUNC(sub_821F9DE8);
PPC_FUNC_IMPL(__imp__sub_821F9DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F9DF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x821fa5d4
	if (ctx.cr6.gt) goto loc_821FA5D4;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25060
	ctx.r12.s64 = ctx.r12.s64 + -25060;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-24968(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24968);
	// lwz r16,-24872(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// lwz r16,-24832(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// lwz r16,-24736(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// lwz r16,-24660(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// lwz r16,-23084(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23084);
	// lwz r16,-24564(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24564);
	// lwz r16,-24508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// lwz r16,-24348(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// lwz r16,-24124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24124);
	// lwz r16,-24072(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24072);
	// lwz r16,-23912(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23912);
	// lwz r16,-23864(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23864);
	// lwz r16,-23084(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23084);
	// lwz r16,-23780(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// lwz r16,-23712(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23712);
	// lwz r16,-23676(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23676);
	// lwz r16,-23628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23628);
	// lwz r16,-23480(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23480);
	// lwz r16,-23388(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// lwz r16,-23228(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23228);
	// lwz r16,-23188(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23188);
	// lwz r16,-23156(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23156);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821F9E84;
	sub_8231E120(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821F9E9C;
	sub_823206C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r30.u32);
	// stw r29,32712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32712, ctx.r29.u32);
	// stw r29,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r29.u32);
	// stw r29,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r29.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x822e6048
	ctx.lr = 0x821F9EC0;
	sub_822E6048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9EE0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
loc_821F9EE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9F08;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9f48
	if (ctx.cr6.eq) goto loc_821F9F48;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F9F28;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f9ee8
	if (!ctx.cr6.eq) goto loc_821F9EE8;
loc_821F9F30:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,32712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32712, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F9F48:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9ee8
	if (ctx.cr6.eq) goto loc_821F9EE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9f30
	if (ctx.cr6.eq) goto loc_821F9F30;
	// b 0x821f9ee8
	goto loc_821F9EE8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// bne cr6,0x821f9f9c
	if (!ctx.cr6.eq) goto loc_821F9F9C;
	// li r11,30172
	ctx.r11.s64 = 30172;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F9F9C:
	// li r11,30171
	ctx.r11.s64 = 30171;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821F9FB4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f9ff4
	if (ctx.cr6.eq) goto loc_821F9FF4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821F9FD4;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f9ee8
	if (!ctx.cr6.eq) goto loc_821F9EE8;
loc_821F9FDC:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82163e38
	ctx.lr = 0x821F9FE4;
	sub_82163E38(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F9FF4:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9ee8
	if (ctx.cr6.eq) goto loc_821F9EE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9fdc
	if (ctx.cr6.eq) goto loc_821F9FDC;
	// b 0x821f9ee8
	goto loc_821F9EE8;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,30177
	ctx.r10.s64 = 30177;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// li r7,180
	ctx.r7.s64 = 180;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa064
	if (ctx.cr6.eq) goto loc_821FA064;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FA05C;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
loc_821FA064:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x823496c0
	ctx.lr = 0x821FA074;
	sub_823496C0(ctx, base);
	// addi r4,r31,32504
	ctx.r4.s64 = ctx.r31.s64 + 32504;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f18
	ctx.lr = 0x821FA080;
	sub_821E6F18(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32636);
	// bl 0x821e6f28
	ctx.lr = 0x821FA08C;
	sub_821E6F28(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32640);
	// bl 0x821e6f38
	ctx.lr = 0x821FA098;
	sub_821E6F38(ctx, base);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r4,32644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32644);
	// bl 0x821e6f30
	ctx.lr = 0x821FA0A4;
	sub_821E6F30(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FA0A8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,133
	ctx.r4.s64 = 133;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FA0BC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FA0D4;
	sub_8215CE78(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fa0f8
	if (!ctx.cr6.gt) goto loc_821FA0F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FA0F8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821fa18c
	if (ctx.cr6.gt) goto loc_821FA18C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fa18c
	// bdzf 4*cr6+eq,0x821fa140
	// bdzf 4*cr6+eq,0x821fa18c
	// bne cr6,0x821fa150
	if (!ctx.cr6.eq) goto loc_821FA150;
loc_821FA140:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FA150:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FA160;
	sub_821F5A30(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,30170
	ctx.r10.s64 = 30170;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FA18C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821FA190:
	// bl 0x821f5a30
	ctx.lr = 0x821FA194;
	sub_821F5A30(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,30173
	ctx.r9.s64 = 30173;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r10.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r9.u32);
	// stw r8,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r8.u32);
	// stw r7,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821FA1C8;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,137
	ctx.r4.s64 = 137;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821FA1E0;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821fa25c
	if (ctx.cr6.eq) goto loc_821FA25C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821fa190
	if (!ctx.cr6.eq) goto loc_821FA190;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FA230;
	sub_821F5A30(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,30170
	ctx.r10.s64 = 30170;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r8,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FA25C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa278
	if (ctx.cr6.eq) goto loc_821FA278;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x823206c8
	ctx.lr = 0x821FA270;
	sub_823206C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_821FA278:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FA288;
	sub_8215CE90(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821FA2B0;
	sub_821F54E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,32500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32500);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA2D0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa2fc
	if (ctx.cr6.eq) goto loc_821FA2FC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821FA2F4;
	sub_823206C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
loc_821FA2FC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FA30C;
	sub_8215CE90(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA324;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// bl 0x8215bd08
	ctx.lr = 0x821FA330;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821FA348;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821FA390;
	sub_821F4B88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FA3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa3d4
	if (ctx.cr6.eq) goto loc_821FA3D4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FA3CC;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
loc_821FA3D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FA3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ed0
	ctx.lr = 0x821FA400;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FA404;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FA418;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FA430;
	sub_8215CE78(ctx, base);
	// li r10,180
	ctx.r10.s64 = 180;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fa45c
	if (!ctx.cr6.gt) goto loc_821FA45C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FA45C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fa5d4
	if (ctx.cr6.gt) goto loc_821FA5D4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fa5d4
	if (!ctx.cr6.eq) goto loc_821FA5D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FA48C;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FA494;
	sub_821F5A30(ctx, base);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA4AC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fa52c
	if (ctx.cr6.gt) goto loc_821FA52C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fa52c
	// bdzf 4*cr6+eq,0x821fa510
	// bne cr6,0x821fa52c
	if (!ctx.cr6.eq) goto loc_821FA52C;
	// li r11,30155
	ctx.r11.s64 = 30155;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FA510:
	// li r11,30102
	ctx.r11.s64 = 30102;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FA52C:
	// li r11,30103
	ctx.r11.s64 = 30103;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// stw r10,32500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32500, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA54C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA574;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fa5d4
	if (ctx.cr6.eq) goto loc_821FA5D4;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa5b0
	if (ctx.cr6.eq) goto loc_821FA5B0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821FA5AC;
	sub_823206C8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
loc_821FA5B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FA5C0;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FA5C8;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FA5D0;
	sub_82155510(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_821FA5D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FA5DC"))) PPC_WEAK_FUNC(sub_821FA5DC);
PPC_FUNC_IMPL(__imp__sub_821FA5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FA5E0"))) PPC_WEAK_FUNC(sub_821FA5E0);
PPC_FUNC_IMPL(__imp__sub_821FA5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x821fa6a4
	if (ctx.cr6.gt) goto loc_821FA6A4;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23000
	ctx.r12.s64 = ctx.r12.s64 + -23000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-22928(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22928);
	// lwz r16,-22916(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22936(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
	// lwz r16,-22928(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22928);
	// lwz r16,-22936(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22916(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22936(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22876);
	// lwz r16,-22936(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821fa6e8
	goto loc_821FA6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FA678;
	sub_821F5A30(ctx, base);
	// b 0x821fa6cc
	goto loc_821FA6CC;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FA68C;
	sub_821F5A30(ctx, base);
	// li r11,30102
	ctx.r11.s64 = 30102;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r30.u32);
	// stw r11,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r11.u32);
	// stw r10,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r10.u32);
	// b 0x821fa6e4
	goto loc_821FA6E4;
loc_821FA6A4:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa6cc
	if (ctx.cr6.eq) goto loc_821FA6CC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,1812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821fa6cc
	if (ctx.cr6.eq) goto loc_821FA6CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ec880
	ctx.lr = 0x821FA6CC;
	sub_821EC880(ctx, base);
loc_821FA6CC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,30103
	ctx.r10.s64 = 30103;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,32496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32496, ctx.r9.u32);
	// stw r10,32384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32384, ctx.r10.u32);
	// stw r11,32380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32380, ctx.r11.u32);
loc_821FA6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FA6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FA700"))) PPC_WEAK_FUNC(sub_821FA700);
PPC_FUNC_IMPL(__imp__sub_821FA700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FA708;
	sub_82248788(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x821fb6dc
	if (ctx.cr6.gt) goto loc_821FB6DC;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22732
	ctx.r12.s64 = ctx.r12.s64 + -22732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-22604(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22604);
	// lwz r16,-22488(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22488);
	// lwz r16,-22376(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22376);
	// lwz r16,-22312(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// lwz r16,-22264(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// lwz r16,-22000(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22000);
	// lwz r16,-21892(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21892);
	// lwz r16,-21800(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21800);
	// lwz r16,-21388(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21388);
	// lwz r16,-21356(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21356);
	// lwz r16,-21240(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21240);
	// lwz r16,-20364(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20364);
	// lwz r16,-20464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20464);
	// lwz r16,-20324(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20324);
	// lwz r16,-20060(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20060);
	// lwz r16,-19576(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19576);
	// lwz r16,-19428(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19428);
	// lwz r16,-19336(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19336);
	// lwz r16,-19028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19028);
	// lwz r16,-21388(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21388);
	// lwz r16,-18988(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18988);
	// lwz r16,-18948(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18948);
	// lwz r16,-21192(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21192);
	// lwz r16,-21160(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21160);
	// lwz r16,-20876(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20876);
	// lwz r16,-20688(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20688);
	// lwz r16,-20604(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20604);
	// lwz r16,-20464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20464);
	// lwz r16,-18852(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18852);
	// lwz r16,-21388(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21388);
	// lwz r16,-18796(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18796);
	// lwz r16,-18748(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18748);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821FA7C0;
	sub_8231E120(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821FA7D0;
	sub_821F4B88(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821FA7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x821fa8f8
	if (ctx.cr6.eq) goto loc_821FA8F8;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30147
	ctx.r5.s64 = 30147;
	// bne cr6,0x821fa814
	if (!ctx.cr6.eq) goto loc_821FA814;
	// li r5,30108
	ctx.r5.s64 = 30108;
loc_821FA814:
	// bl 0x821f54e8
	ctx.lr = 0x821FA818;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FA830;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa874
	if (ctx.cr6.eq) goto loc_821FA874;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FA850;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fac84
	if (!ctx.cr6.eq) goto loc_821FAC84;
loc_821FA858:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821fa8f8
	if (!ctx.cr6.eq) goto loc_821FA8F8;
loc_821FA864:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FA874:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fac84
	if (ctx.cr6.eq) goto loc_821FAC84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fa858
	if (ctx.cr6.eq) goto loc_821FA858;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ef0
	ctx.lr = 0x821FA8A8;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FA8AC;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FA8C0;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821fac84
	if (!ctx.cr6.eq) goto loc_821FAC84;
loc_821FA8F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821faa00
	if (!ctx.cr6.eq) goto loc_821FAA00;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa96c
	if (ctx.cr6.eq) goto loc_821FA96C;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821faa00
	if (!ctx.cr6.eq) goto loc_821FAA00;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,30101
	ctx.r8.s64 = 30101;
	// stw r10,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r10.u32);
	// stw r10,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r10.u32);
	// stw r9,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r9.u32);
	// stw r8,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r8.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FA954;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r7,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r7.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FA96C:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fa9dc
	if (ctx.cr6.eq) goto loc_821FA9DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FA980;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30101
	ctx.r9.s64 = 30101;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FA9A8;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,-784(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -784);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FA9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FA9DC:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FA9E8;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FA9F4;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FAA00;
	sub_822AA648(ctx, base);
loc_821FAA00:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821faa30
	if (ctx.cr6.eq) goto loc_821FAA30;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FAA28;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
loc_821FAA30:
	// bl 0x8215bd08
	ctx.lr = 0x821FAA34;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821FAA4C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FAA64;
	sub_8215CE78(ctx, base);
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821faa90
	if (!ctx.cr6.gt) goto loc_821FAA90;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FAA90:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fb6dc
	if (ctx.cr6.gt) goto loc_821FB6DC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FAAC0;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FAAC8;
	sub_821F5A30(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FAAE0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fac3c
	if (ctx.cr6.gt) goto loc_821FAC3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fab9c
	// bdzf 4*cr6+eq,0x821fabc4
	// bne cr6,0x821fabfc
	if (!ctx.cr6.eq) goto loc_821FABFC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821fab44
	if (ctx.cr6.eq) goto loc_821FAB44;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fab44
	if (ctx.cr6.eq) goto loc_821FAB44;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fab44
	if (ctx.cr6.eq) goto loc_821FAB44;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x821fab4c
	goto loc_821FAB4C;
loc_821FAB44:
	// li r11,14
	ctx.r11.s64 = 14;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821FAB4C:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821FAB68;
	sub_8231E120(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30169
	ctx.r5.s64 = 30169;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FAB8C;
	sub_821F54E8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FAB9C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30111
	ctx.r5.s64 = 30111;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FABB4;
	sub_821F54E8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FABC4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30149
	ctx.r5.s64 = 30149;
	// bne cr6,0x821fabe8
	if (!ctx.cr6.eq) goto loc_821FABE8;
	// li r5,30103
	ctx.r5.s64 = 30103;
loc_821FABE8:
	// bl 0x821f54e8
	ctx.lr = 0x821FABEC;
	sub_821F54E8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FABFC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30148
	ctx.r5.s64 = 30148;
	// bne cr6,0x821fac20
	if (!ctx.cr6.eq) goto loc_821FAC20;
	// li r5,30102
	ctx.r5.s64 = 30102;
loc_821FAC20:
	// bl 0x821f54e8
	ctx.lr = 0x821FAC24;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FAC3C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30149
	ctx.r5.s64 = 30149;
	// bne cr6,0x821fac60
	if (!ctx.cr6.eq) goto loc_821FAC60;
	// li r5,30103
	ctx.r5.s64 = 30103;
loc_821FAC60:
	// bl 0x821f54e8
	ctx.lr = 0x821FAC64;
	sub_821F54E8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FAC7C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
loc_821FAC84:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FAC9C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FACC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821FACCC;
	sub_821E7018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef0
	ctx.lr = 0x821FACD8;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FACDC;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FACF0;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821fa8f8
	if (ctx.cr6.eq) goto loc_821FA8F8;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FAD40;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fada4
	if (ctx.cr6.eq) goto loc_821FADA4;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fae2c
	if (!ctx.cr6.eq) goto loc_821FAE2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,30164
	ctx.r8.s64 = 30164;
	// stw r10,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r10.u32);
	// stw r10,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r10.u32);
	// stw r9,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r9.u32);
	// stw r8,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r8.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FAD98;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r7.u32);
	// b 0x821fae2c
	goto loc_821FAE2C;
loc_821FADA4:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fae08
	if (ctx.cr6.eq) goto loc_821FAE08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FADB8;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30164
	ctx.r9.s64 = 30164;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FADE0;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,-784(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -784);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FAE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821fae2c
	goto loc_821FAE2C;
loc_821FAE08:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FAE14;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FAE20;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FAE2C;
	sub_822AA648(ctx, base);
loc_821FAE2C:
	// li r11,180
	ctx.r11.s64 = 180;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f08
	ctx.lr = 0x821FAE44;
	sub_821E6F08(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FAE48;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FAE5C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FAE90;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821faf20
	if (ctx.cr6.eq) goto loc_821FAF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FAEA0;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4c10
	ctx.lr = 0x821FAEAC;
	sub_821F4C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r29,-796(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bctrl 
	ctx.lr = 0x821FAEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821FAED4;
	sub_821E6EE0(ctx, base);
	// addi r29,r31,32716
	ctx.r29.s64 = ctx.r31.s64 + 32716;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x821FAEE4;
	sub_822AA648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f10
	ctx.lr = 0x821FAEF0;
	sub_821E6F10(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FAEF4;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FAF08;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FAF20:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821faf44
	if (!ctx.cr6.gt) goto loc_821FAF44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FAF44:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fb6dc
	if (ctx.cr6.gt) goto loc_821FB6DC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FAF6C;
	sub_821F4C98(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FAF7C;
	sub_821F5A30(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FAF8C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FAFB0;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821faf20
	if (ctx.cr6.eq) goto loc_821FAF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f46b0
	ctx.lr = 0x821FAFC0;
	sub_821F46B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821faff0
	if (ctx.cr6.eq) goto loc_821FAFF0;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30165
	ctx.r5.s64 = 30165;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FAFE8;
	sub_821F54E8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FAFF0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB018;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb050
	if (ctx.cr6.eq) goto loc_821FB050;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FB038;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fac84
	if (!ctx.cr6.eq) goto loc_821FAC84;
loc_821FB040:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB050:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fac84
	if (ctx.cr6.eq) goto loc_821FAC84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fb040
	if (ctx.cr6.eq) goto loc_821FB040;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30109
	ctx.r5.s64 = 30109;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FB08C;
	sub_821F54E8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB0A4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb158
	if (ctx.cr6.eq) goto loc_821FB158;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FB0C4;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fa864
	if (!ctx.cr6.eq) goto loc_821FA864;
loc_821FB0CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821FB0F4;
	sub_821E7018(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821FB100;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r28,r3
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r3.u64, ctx.xer);
	// bgt cr6,0x821fb17c
	if (ctx.cr6.gt) goto loc_821FB17C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,14
	ctx.r10.s64 = 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x821FB124;
	sub_8231E120(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30169
	ctx.r5.s64 = 30169;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FB148;
	sub_821F54E8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB158:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fa864
	if (ctx.cr6.eq) goto loc_821FA864;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fb0cc
	if (ctx.cr6.eq) goto loc_821FB0CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB17C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30104
	ctx.r5.s64 = 30104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FB194;
	sub_821F54E8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FB1AC;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821FB1B8;
	sub_821F4B88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821fb280
	if (ctx.cr6.eq) goto loc_821FB280;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb230
	if (ctx.cr6.eq) goto loc_821FB230;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fb378
	if (!ctx.cr6.eq) goto loc_821FB378;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,30150
	ctx.r8.s64 = 30150;
	// stw r10,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r10.u32);
	// stw r10,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r10.u32);
	// stw r9,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r9.u32);
	// stw r8,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r8.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FB218;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r7,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r7.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB230:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb354
	if (ctx.cr6.eq) goto loc_821FB354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FB244;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30150
	ctx.r9.s64 = 30150;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FB26C;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,-784(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -784);
	// b 0x821fb330
	goto loc_821FB330;
loc_821FB280:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fb378
	if (!ctx.cr6.eq) goto loc_821FB378;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb2e4
	if (ctx.cr6.eq) goto loc_821FB2E4;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fb378
	if (!ctx.cr6.eq) goto loc_821FB378;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,30105
	ctx.r8.s64 = 30105;
	// stw r10,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r10.u32);
	// stw r10,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r10.u32);
	// stw r9,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r9.u32);
	// stw r8,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r8.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FB2CC;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r7,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r7.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB2E4:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb354
	if (ctx.cr6.eq) goto loc_821FB354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FB2F8;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30105
	ctx.r9.s64 = 30105;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FB320;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r3,-784(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -784);
loc_821FB330:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FB344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB354:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FB360;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FB36C;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FB378;
	sub_822AA648(ctx, base);
loc_821FB378:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb3a8
	if (ctx.cr6.eq) goto loc_821FB3A8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FB3A0;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
loc_821FB3A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ed0
	ctx.lr = 0x821FB3D4;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FB3D8;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FB3EC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FB404;
	sub_8215CE78(ctx, base);
	// li r10,180
	ctx.r10.s64 = 180;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fb430
	if (!ctx.cr6.gt) goto loc_821FB430;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FB430:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fb6dc
	if (ctx.cr6.gt) goto loc_821FB6DC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fb6dc
	if (!ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FB460;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FB468;
	sub_821F5A30(ctx, base);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB480;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fb574
	if (ctx.cr6.gt) goto loc_821FB574;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fb4fc
	// bdzf 4*cr6+eq,0x821fb534
	// bne cr6,0x821fb17c
	if (!ctx.cr6.eq) goto loc_821FB17C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb4c8
	if (ctx.cr6.eq) goto loc_821FB4C8;
	// li r5,30155
	ctx.r5.s64 = 30155;
	// b 0x821fb4d8
	goto loc_821FB4D8;
loc_821FB4C8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fb4ec
	if (!ctx.cr6.eq) goto loc_821FB4EC;
	// li r5,30106
	ctx.r5.s64 = 30106;
loc_821FB4D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FB4EC;
	sub_821F54E8(ctx, base);
loc_821FB4EC:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB4FC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30149
	ctx.r5.s64 = 30149;
	// bne cr6,0x821fb520
	if (!ctx.cr6.eq) goto loc_821FB520;
	// li r5,30103
	ctx.r5.s64 = 30103;
loc_821FB520:
	// bl 0x821f54e8
	ctx.lr = 0x821FB524;
	sub_821F54E8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB534:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30148
	ctx.r5.s64 = 30148;
	// bne cr6,0x821fb558
	if (!ctx.cr6.eq) goto loc_821FB558;
	// li r5,30102
	ctx.r5.s64 = 30102;
loc_821FB558:
	// bl 0x821f54e8
	ctx.lr = 0x821FB55C;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB574:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30149
	ctx.r5.s64 = 30149;
	// bne cr6,0x821fb598
	if (!ctx.cr6.eq) goto loc_821FB598;
	// li r5,30103
	ctx.r5.s64 = 30103;
loc_821FB598:
	// bl 0x821f54e8
	ctx.lr = 0x821FB59C;
	sub_821F54E8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB5B4;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30107
	ctx.r5.s64 = 30107;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FB5EC;
	sub_821F54E8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB604;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb644
	if (ctx.cr6.eq) goto loc_821FB644;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FB624;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fa858
	if (!ctx.cr6.eq) goto loc_821FA858;
loc_821FB62C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FB644:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fa858
	if (ctx.cr6.eq) goto loc_821FA858;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fb62c
	if (ctx.cr6.eq) goto loc_821FB62C;
	// b 0x821fa858
	goto loc_821FA858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FB664;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb6dc
	if (ctx.cr6.eq) goto loc_821FB6DC;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821FB684;
	sub_821F54E8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821FB6A4;
	sub_823206C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FB6AC;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FB6B4;
	sub_82155510(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FB6CC;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FB6D4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821FB6DC:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FB6E4"))) PPC_WEAK_FUNC(sub_821FB6E4);
PPC_FUNC_IMPL(__imp__sub_821FB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FB6E8"))) PPC_WEAK_FUNC(sub_821FB6E8);
PPC_FUNC_IMPL(__imp__sub_821FB6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FB6F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x821fbd08
	if (ctx.cr6.gt) goto loc_821FBD08;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18660
	ctx.r12.s64 = ctx.r12.s64 + -18660;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-18600(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18600);
	// lwz r16,-18572(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18572);
	// lwz r16,-18452(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18452);
	// lwz r16,-18292(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18292);
	// lwz r16,-17996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17996);
	// lwz r16,-17932(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17932);
	// lwz r16,-17884(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17884);
	// lwz r16,-17776(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17776);
	// lwz r16,-17608(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17608);
	// lwz r16,-17584(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17584);
	// lwz r16,-17520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17520);
	// lwz r16,-17356(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17356);
	// lwz r16,-17312(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17312);
	// lwz r16,-17204(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17204);
	// lwz r16,-17168(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821FB764;
	sub_821F4B88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821FB784:
	// lwz r11,-8460(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8460);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb7b0
	if (ctx.cr6.eq) goto loc_821FB7B0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821FB7B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x821fb784
	if (ctx.cr6.lt) goto loc_821FB784;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x821fb7dc
	if (!ctx.cr6.eq) goto loc_821FB7DC;
	// bl 0x8215bd08
	ctx.lr = 0x821FB7C8;
	sub_8215BD08(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821FB7DC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821FB7F0;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82256340
	ctx.lr = 0x821FB7FC;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb7dc
	if (ctx.cr6.eq) goto loc_821FB7DC;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82183078
	ctx.lr = 0x821FB80C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FB818;
	sub_821837D0(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82080000
	ctx.lr = 0x821FB820;
	sub_82080000(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fb838
	if (ctx.cr6.eq) goto loc_821FB838;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82404dd8
	ctx.lr = 0x821FB834;
	sub_82404DD8(ctx, base);
	// b 0x821fb83c
	goto loc_821FB83C;
loc_821FB838:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FB83C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// li r28,1
	ctx.r28.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821FB854:
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821fb854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FB854;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82404e40
	ctx.lr = 0x821FB874;
	sub_82404E40(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FB884;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82404f98
	ctx.lr = 0x821FB894;
	sub_82404F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbd08
	if (ctx.cr6.eq) goto loc_821FBD08;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82404dc0
	ctx.lr = 0x821FB8A4;
	sub_82404DC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fb980
	if (!ctx.cr6.eq) goto loc_821FB980;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fb8d8
	if (ctx.cr6.eq) goto loc_821FB8D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r28,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r28.u8);
	// b 0x821fb8e4
	goto loc_821FB8E4;
loc_821FB8D8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
loc_821FB8E4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r29,88(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// bl 0x82163ee8
	ctx.lr = 0x821FB8F4;
	sub_82163EE8(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stb r29,2350(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2350, ctx.r29.u8);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821fb91c
	if (ctx.cr6.lt) goto loc_821FB91C;
	// bne cr6,0x821fb91c
	if (!ctx.cr6.eq) goto loc_821FB91C;
	// stb r28,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r28.u8);
	// b 0x821fb920
	goto loc_821FB920;
loc_821FB91C:
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
loc_821FB920:
	// lbz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82163ee8
	ctx.lr = 0x821FB928;
	sub_82163EE8(ctx, base);
	// stb r29,2366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2366, ctx.r29.u8);
	// bl 0x8215bd08
	ctx.lr = 0x821FB930;
	sub_8215BD08(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821fb980
	if (!ctx.cr6.eq) goto loc_821FB980;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821fb978
	if (ctx.cr6.lt) goto loc_821FB978;
	// beq cr6,0x821fb96c
	if (ctx.cr6.eq) goto loc_821FB96C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821fb978
	if (!ctx.cr6.lt) goto loc_821FB978;
	// bl 0x82163ee8
	ctx.lr = 0x821FB960;
	sub_82163EE8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r11.u8);
	// b 0x821fb980
	goto loc_821FB980;
loc_821FB96C:
	// bl 0x82163ee8
	ctx.lr = 0x821FB970;
	sub_82163EE8(ctx, base);
	// stb r30,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r30.u8);
	// b 0x821fb980
	goto loc_821FB980;
loc_821FB978:
	// bl 0x82163ee8
	ctx.lr = 0x821FB97C;
	sub_82163EE8(ctx, base);
	// stb r28,2326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2326, ctx.r28.u8);
loc_821FB980:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fb9a0
	if (ctx.cr6.eq) goto loc_821FB9A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FB9A0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6ef0
	ctx.lr = 0x821FB9C4;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FB9C8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FB9DC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbd08
	if (ctx.cr6.eq) goto loc_821FBD08;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fbd08
	if (!ctx.cr6.eq) goto loc_821FBD08;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821fb7dc
	if (!ctx.cr6.eq) goto loc_821FB7DC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FBA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821FBA50;
	sub_821E6EE0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FBA54;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FBA68;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbd08
	if (ctx.cr6.eq) goto loc_821FBD08;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FBA80;
	sub_8215CE78(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fbd08
	if (!ctx.cr6.eq) goto loc_821FBD08;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FBAB4;
	sub_8215CE90(ctx, base);
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821fb7dc
	if (!ctx.cr6.eq) goto loc_821FB7DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FBADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fb7dc
	if (!ctx.cr6.eq) goto loc_821FB7DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
loc_821FBAEC:
	// lbzx r28,r29,r30
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82163ee8
	ctx.lr = 0x821FBAF4;
	sub_82163EE8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stb r28,2350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2350, ctx.r28.u8);
	// blt cr6,0x821fbaec
	if (ctx.cr6.lt) goto loc_821FBAEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FBB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82163ee8
	ctx.lr = 0x821FBB24;
	sub_82163EE8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r30,2366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2366, ctx.r30.u8);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FBB40;
	sub_821F4C98(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f08
	ctx.lr = 0x821FBB60;
	sub_821E6F08(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FBB64;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FBB78;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbd08
	if (ctx.cr6.eq) goto loc_821FBD08;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fbd08
	if (!ctx.cr6.eq) goto loc_821FBD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FBBAC;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb7dc
	if (ctx.cr6.eq) goto loc_821FB7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4c10
	ctx.lr = 0x821FBBC0;
	sub_821F4C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r29,-796(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bctrl 
	ctx.lr = 0x821FBBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821FBBE8;
	sub_821E6EE0(ctx, base);
	// addi r29,r31,32716
	ctx.r29.s64 = ctx.r31.s64 + 32716;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x821FBBF8;
	sub_822AA648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f10
	ctx.lr = 0x821FBC04;
	sub_821E6F10(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FBC08;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FBC1C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbd08
	if (ctx.cr6.eq) goto loc_821FBD08;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fbd08
	if (!ctx.cr6.eq) goto loc_821FBD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FBC50;
	sub_821F4C98(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fbd08
	if (!ctx.cr6.eq) goto loc_821FBD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FBC7C;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fb7dc
	if (ctx.cr6.eq) goto loc_821FB7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f46b0
	ctx.lr = 0x821FBC8C;
	sub_821F46B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fb7dc
	if (!ctx.cr6.eq) goto loc_821FB7DC;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FBCA0;
	sub_8215BD08(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8215bd08
	ctx.lr = 0x821FBCA8;
	sub_8215BD08(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FBCB0;
	sub_8215BD08(ctx, base);
	// stw r28,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r28.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FBCB8;
	sub_8215BD08(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r28,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r28.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821FBCD0;
	sub_8215BD08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FBCF8;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FBD00;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821FBD08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FBD10"))) PPC_WEAK_FUNC(sub_821FBD10);
PPC_FUNC_IMPL(__imp__sub_821FBD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FBD18;
	sub_8224878C(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x821fca40
	if (ctx.cr6.gt) goto loc_821FCA40;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17084
	ctx.r12.s64 = ctx.r12.s64 + -17084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-16964(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16964);
	// lwz r16,-16688(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16688);
	// lwz r16,-16508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16508);
	// lwz r16,-16424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16424);
	// lwz r16,-16300(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16300);
	// lwz r16,-16188(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16188);
	// lwz r16,-16140(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16140);
	// lwz r16,-15888(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15888);
	// lwz r16,-15796(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15796);
	// lwz r16,-15720(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15720);
	// lwz r16,-15464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15464);
	// lwz r16,-15432(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15432);
	// lwz r16,-15180(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15180);
	// lwz r16,-15032(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15032);
	// lwz r16,-14940(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14940);
	// lwz r16,-14588(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14588);
	// lwz r16,-15464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15464);
	// lwz r16,-14556(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14556);
	// lwz r16,-14516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14516);
	// lwz r16,-14752(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14752);
	// lwz r16,-14636(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14636);
	// lwz r16,-14280(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14280);
	// lwz r16,-14212(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14212);
	// lwz r16,-14384(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14384);
	// lwz r16,-13760(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13760);
	// lwz r16,-14328(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14328);
	// lwz r16,-14160(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14160);
	// lwz r16,-13884(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13884);
	// lwz r16,-14408(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14408);
	// lwz r16,-13808(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13808);
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fbe08
	if (ctx.cr6.eq) goto loc_821FBE08;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fbe8c
	if (!ctx.cr6.eq) goto loc_821FBE8C;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// li r9,30164
	ctx.r9.s64 = 30164;
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r10,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r10.u32);
	// stw r9,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r9.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FBDFC;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r8.u32);
	// b 0x821fbe8c
	goto loc_821FBE8C;
loc_821FBE08:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fbe68
	if (ctx.cr6.eq) goto loc_821FBE68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FBE1C;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,30164
	ctx.r9.s64 = 30164;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FBE40;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r3,-784(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -784);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821FBE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821fbe8c
	goto loc_821FBE8C;
loc_821FBE68:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FBE74;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FBE80;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FBE8C;
	sub_822AA648(ctx, base);
loc_821FBE8C:
	// li r11,180
	ctx.r11.s64 = 180;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// bl 0x821e6f08
	ctx.lr = 0x821FBEA4;
	sub_821E6F08(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FBEA8;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FBEBC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FBEEC;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbf74
	if (ctx.cr6.eq) goto loc_821FBF74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4c10
	ctx.lr = 0x821FBF00;
	sub_821F4C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r29,-796(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bctrl 
	ctx.lr = 0x821FBF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6ee0
	ctx.lr = 0x821FBF28;
	sub_821E6EE0(ctx, base);
	// addi r29,r31,32716
	ctx.r29.s64 = ctx.r31.s64 + 32716;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x821FBF38;
	sub_822AA648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// bl 0x821e6f10
	ctx.lr = 0x821FBF44;
	sub_821E6F10(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FBF48;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FBF5C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FBF74:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fbf98
	if (!ctx.cr6.gt) goto loc_821FBF98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FBF98:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fca40
	if (ctx.cr6.gt) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FBFC0;
	sub_821F4C98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FBFD0;
	sub_821F5A30(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FBFE0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FC004;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fbf74
	if (ctx.cr6.eq) goto loc_821FBF74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f46b0
	ctx.lr = 0x821FC014;
	sub_821F46B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fc044
	if (ctx.cr6.eq) goto loc_821FC044;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30165
	ctx.r5.s64 = 30165;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC03C;
	sub_821F54E8(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC044:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC05C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc094
	if (ctx.cr6.eq) goto loc_821FC094;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FC07C;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fc0a8
	if (!ctx.cr6.eq) goto loc_821FC0A8;
loc_821FC084:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC094:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc0a8
	if (ctx.cr6.eq) goto loc_821FC0A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fc084
	if (ctx.cr6.eq) goto loc_821FC084;
loc_821FC0A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FC0B0;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x821f4b88
	ctx.lr = 0x821FC0D0;
	sub_821F4B88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FC0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc14c
	if (ctx.cr6.eq) goto loc_821FC14C;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fc1e0
	if (!ctx.cr6.eq) goto loc_821FC1E0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30101
	ctx.r9.s64 = 30101;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r10,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r10.u32);
	// stw r9,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r9.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC134;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r8,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC14C:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc1bc
	if (ctx.cr6.eq) goto loc_821FC1BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FC160;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30101
	ctx.r9.s64 = 30101;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC188;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r3,-784(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -784);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC1BC:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FC1C8;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FC1D4;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FC1E0;
	sub_822AA648(ctx, base);
loc_821FC1E0:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc210
	if (ctx.cr6.eq) goto loc_821FC210;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FC208;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
loc_821FC210:
	// bl 0x8215bd08
	ctx.lr = 0x821FC214;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x821e7d80
	ctx.lr = 0x821FC22C;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fc260
	if (!ctx.cr6.gt) goto loc_821FC260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FC260:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fca40
	if (ctx.cr6.gt) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FC288;
	sub_821F5A30(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC2A0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-796(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fc370
	if (ctx.cr6.gt) goto loc_821FC370;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fc2e4
	// bdzf 4*cr6+eq,0x821fc370
	// bne cr6,0x821fc340
	if (!ctx.cr6.eq) goto loc_821FC340;
loc_821FC2D4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC2E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FC2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821FC304;
	sub_821E7018(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef8
	ctx.lr = 0x821FC310;
	sub_821E6EF8(ctx, base);
	// cmpld cr6,r29,r3
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x821fc2d4
	if (!ctx.cr6.gt) goto loc_821FC2D4;
loc_821FC318:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30104
	ctx.r5.s64 = 30104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC330;
	sub_821F54E8(ctx, base);
loc_821FC330:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC340:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30102
	ctx.r5.s64 = 30102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC358;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC370:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30103
	ctx.r5.s64 = 30103;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC388;
	sub_821F54E8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC3A0;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
loc_821FC3A8:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc410
	if (ctx.cr6.eq) goto loc_821FC410;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fc4a4
	if (!ctx.cr6.eq) goto loc_821FC4A4;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30105
	ctx.r9.s64 = 30105;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r10,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r10.u32);
	// stw r9,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r9.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC3F8;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r8,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC410:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc480
	if (ctx.cr6.eq) goto loc_821FC480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FC424;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30105
	ctx.r9.s64 = 30105;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC44C;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,-784(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -784);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC480:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FC48C;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FC498;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FC4A4;
	sub_822AA648(ctx, base);
loc_821FC4A4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc4d4
	if (ctx.cr6.eq) goto loc_821FC4D4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FC4CC;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
loc_821FC4D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FC4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ed0
	ctx.lr = 0x821FC500;
	sub_821E6ED0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FC504;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FC518;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,180
	ctx.r11.s64 = 180;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -484);
	// bl 0x8215ce78
	ctx.lr = 0x821FC540;
	sub_8215CE78(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fc55c
	if (!ctx.cr6.gt) goto loc_821FC55C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FC55C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fca40
	if (ctx.cr6.gt) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215ce90
	ctx.lr = 0x821FC58C;
	sub_8215CE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a30
	ctx.lr = 0x821FC594;
	sub_821F5A30(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC5AC;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fc638
	if (ctx.cr6.gt) goto loc_821FC638;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fc638
	// bdzf 4*cr6+eq,0x821fc608
	// bne cr6,0x821fc318
	if (!ctx.cr6.eq) goto loc_821FC318;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30106
	ctx.r5.s64 = 30106;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC5F8;
	sub_821F54E8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC608:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30102
	ctx.r5.s64 = 30102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC620;
	sub_821F54E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC638:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30103
	ctx.r5.s64 = 30103;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC650;
	sub_821F54E8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC668;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,-796(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FC68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7018
	ctx.lr = 0x821FC698;
	sub_821E7018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef0
	ctx.lr = 0x821FC6A4;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FC6A8;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,-796(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -796);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FC6BC;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821fc3a8
	if (!ctx.cr6.eq) goto loc_821FC3A8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC70C;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30107
	ctx.r5.s64 = 30107;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f54e8
	ctx.lr = 0x821FC73C;
	sub_821F54E8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC754;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc794
	if (ctx.cr6.eq) goto loc_821FC794;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x821FC774;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821fc330
	if (!ctx.cr6.eq) goto loc_821FC330;
loc_821FC77C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC794:
	// lwz r11,32344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32344);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc330
	if (ctx.cr6.eq) goto loc_821FC330;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fc77c
	if (ctx.cr6.eq) goto loc_821FC77C;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FC7C0;
	sub_821F4C98(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC7D8;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// addi r6,r31,32484
	ctx.r6.s64 = ctx.r31.s64 + 32484;
	// lwz r7,32496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32384);
	// lwz r4,32380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32380);
	// bl 0x821f54e8
	ctx.lr = 0x821FC7F8;
	sub_821F54E8(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FC810;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FC820;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FC828;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// bl 0x8215bd08
	ctx.lr = 0x821FC850;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e7d80
	ctx.lr = 0x821FC864;
	sub_821E7D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa5e0
	ctx.lr = 0x821FC898;
	sub_821FA5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fc0a8
	if (ctx.cr6.eq) goto loc_821FC0A8;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,32660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc910
	if (ctx.cr6.eq) goto loc_821FC910;
	// lwz r11,32664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fc9ac
	if (!ctx.cr6.eq) goto loc_821FC9AC;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30166
	ctx.r9.s64 = 30166;
	// stw r30,32664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32664, ctx.r30.u32);
	// stw r30,32680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32680, ctx.r30.u32);
	// stw r10,32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32668, ctx.r10.u32);
	// stw r9,32672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32672, ctx.r9.u32);
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// stw r11,32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32684, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC8F0;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r8,32688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32688, ctx.r8.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC910:
	// lwz r11,32340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc988
	if (ctx.cr6.eq) goto loc_821FC988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FC924;
	sub_821EBB58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,30166
	ctx.r9.s64 = 30166;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FC94C;
	sub_8215BD08(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,-784(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -784);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FC988:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821FC994;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821FC9A0;
	sub_822AA648(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x821FC9AC;
	sub_822AA648(ctx, base);
loc_821FC9AC:
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fc9d8
	if (!ctx.cr6.gt) goto loc_821FC9D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_821FC9D8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fca40
	if (ctx.cr6.gt) goto loc_821FCA40;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fca40
	if (!ctx.cr6.eq) goto loc_821FCA40;
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821f5a30
	ctx.lr = 0x821FCA08;
	sub_821F5A30(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f59d8
	ctx.lr = 0x821FCA18;
	sub_821F59D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fca40
	if (ctx.cr6.eq) goto loc_821FCA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4c98
	ctx.lr = 0x821FCA28;
	sub_821F4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x821FCA30;
	sub_82155510(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_821FCA40:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FCA48"))) PPC_WEAK_FUNC(sub_821FCA48);
PPC_FUNC_IMPL(__imp__sub_821FCA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13712
	ctx.r12.s64 = ctx.r12.s64 + -13712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821FCA70"))) PPC_WEAK_FUNC(sub_821FCA70);
PPC_FUNC_IMPL(__imp__sub_821FCA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-13544(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r16,-13544(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r16,-13540(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13540);
	// lwz r16,-13536(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13536);
	// lwz r16,-13532(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13532);
	// lwz r16,-13536(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13536);
	// lwz r16,-13528(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13528);
	// lwz r16,-13524(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13524);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13516);
	// lwz r16,-13512(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13512);
	// lwz r16,-13508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13508);
	// lwz r16,-13524(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13524);
	// lwz r16,-13504(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13504);
	// lwz r16,-13504(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13504);
	// lwz r16,-13500(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13500);
	// lwz r16,-13496(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13496);
	// lwz r16,-13492(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13492);
	// lwz r16,-13488(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13488);
	// lwz r16,-13524(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13524);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13516);
	// lwz r16,-13512(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13512);
	// lwz r16,-13508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13508);
	// lwz r16,-13524(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13524);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13520(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13520);
	// lwz r16,-13516(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13516);
	// lwz r16,-13512(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13512);
	// lwz r16,-13508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13508);
	// lwz r16,-13472(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13472);
	// lwz r16,-13472(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13472);
	// lwz r16,-13468(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13468);
	// lwz r16,-13468(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13468);
	// lwz r16,-13484(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13484);
	// lwz r16,-13480(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13480);
	// lwz r16,-13476(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13476);
	// lwz r16,-13464(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13464);
	// lwz r16,-13448(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13448);
	// lwz r16,-13432(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13432);
	// b 0x821fa700
	sub_821FA700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB1C"))) PPC_WEAK_FUNC(sub_821FCB1C);
PPC_FUNC_IMPL(__imp__sub_821FCB1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f5ab0
	sub_821F5AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB20"))) PPC_WEAK_FUNC(sub_821FCB20);
PPC_FUNC_IMPL(__imp__sub_821FCB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f6058
	sub_821F6058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB24"))) PPC_WEAK_FUNC(sub_821FCB24);
PPC_FUNC_IMPL(__imp__sub_821FCB24) {
	PPC_FUNC_PROLOGUE();
	// b 0x821fb6e8
	sub_821FB6E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB28"))) PPC_WEAK_FUNC(sub_821FCB28);
PPC_FUNC_IMPL(__imp__sub_821FCB28) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f72b8
	sub_821F72B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB2C"))) PPC_WEAK_FUNC(sub_821FCB2C);
PPC_FUNC_IMPL(__imp__sub_821FCB2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f75c8
	sub_821F75C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB30"))) PPC_WEAK_FUNC(sub_821FCB30);
PPC_FUNC_IMPL(__imp__sub_821FCB30) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f79e0
	sub_821F79E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB34"))) PPC_WEAK_FUNC(sub_821FCB34);
PPC_FUNC_IMPL(__imp__sub_821FCB34) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8060
	sub_821F8060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB38"))) PPC_WEAK_FUNC(sub_821FCB38);
PPC_FUNC_IMPL(__imp__sub_821FCB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f82b8
	sub_821F82B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB3C"))) PPC_WEAK_FUNC(sub_821FCB3C);
PPC_FUNC_IMPL(__imp__sub_821FCB3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8620
	sub_821F8620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB40"))) PPC_WEAK_FUNC(sub_821FCB40);
PPC_FUNC_IMPL(__imp__sub_821FCB40) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f79e0
	sub_821F79E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB44"))) PPC_WEAK_FUNC(sub_821FCB44);
PPC_FUNC_IMPL(__imp__sub_821FCB44) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8060
	sub_821F8060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB48"))) PPC_WEAK_FUNC(sub_821FCB48);
PPC_FUNC_IMPL(__imp__sub_821FCB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f82b8
	sub_821F82B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB4C"))) PPC_WEAK_FUNC(sub_821FCB4C);
PPC_FUNC_IMPL(__imp__sub_821FCB4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8620
	sub_821F8620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB50"))) PPC_WEAK_FUNC(sub_821FCB50);
PPC_FUNC_IMPL(__imp__sub_821FCB50) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f89d0
	sub_821F89D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB54"))) PPC_WEAK_FUNC(sub_821FCB54);
PPC_FUNC_IMPL(__imp__sub_821FCB54) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8d90
	sub_821F8D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB58"))) PPC_WEAK_FUNC(sub_821FCB58);
PPC_FUNC_IMPL(__imp__sub_821FCB58) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f8f68
	sub_821F8F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB5C"))) PPC_WEAK_FUNC(sub_821FCB5C);
PPC_FUNC_IMPL(__imp__sub_821FCB5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f91a0
	sub_821F91A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB60"))) PPC_WEAK_FUNC(sub_821FCB60);
PPC_FUNC_IMPL(__imp__sub_821FCB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f93d8
	sub_821F93D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB64"))) PPC_WEAK_FUNC(sub_821FCB64);
PPC_FUNC_IMPL(__imp__sub_821FCB64) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f9de8
	sub_821F9DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCB68"))) PPC_WEAK_FUNC(sub_821FCB68);
PPC_FUNC_IMPL(__imp__sub_821FCB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821FCB78"))) PPC_WEAK_FUNC(sub_821FCB78);
PPC_FUNC_IMPL(__imp__sub_821FCB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821FCB88"))) PPC_WEAK_FUNC(sub_821FCB88);
PPC_FUNC_IMPL(__imp__sub_821FCB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821FCB98"))) PPC_WEAK_FUNC(sub_821FCB98);
PPC_FUNC_IMPL(__imp__sub_821FCB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FCB9C"))) PPC_WEAK_FUNC(sub_821FCB9C);
PPC_FUNC_IMPL(__imp__sub_821FCB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FCBA0"))) PPC_WEAK_FUNC(sub_821FCBA0);
PPC_FUNC_IMPL(__imp__sub_821FCBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821FCBA8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,68(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x82163de0
	ctx.lr = 0x821FCBB4;
	sub_82163DE0(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821FCBCC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821fcbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FCBCC;
	// li r5,8560
	ctx.r5.s64 = 8560;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82248a40
	ctx.lr = 0x821FCBE8;
	sub_82248A40(ctx, base);
	// addi r4,r30,8592
	ctx.r4.s64 = ctx.r30.s64 + 8592;
	// addi r3,r31,8592
	ctx.r3.s64 = ctx.r31.s64 + 8592;
	// bl 0x82165fd8
	ctx.lr = 0x821FCBF4;
	sub_82165FD8(ctx, base);
	// addi r30,r27,26448
	ctx.r30.s64 = ctx.r27.s64 + 26448;
	// bl 0x82163ee8
	ctx.lr = 0x821FCBFC;
	sub_82163EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,7540
	ctx.r5.s64 = 7540;
	// bl 0x82248a40
	ctx.lr = 0x821FCC0C;
	sub_82248A40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82163eb0
	ctx.lr = 0x821FCC1C;
	sub_82163EB0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r26,r10,33988
	ctx.r26.u64 = ctx.r10.u64 | 33988;
	// beq cr6,0x821fcc44
	if (ctx.cr6.eq) goto loc_821FCC44;
	// add. r3,r27,r26
	ctx.r3.u64 = ctx.r27.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fcc44
	if (ctx.cr0.eq) goto loc_821FCC44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821847a8
	ctx.lr = 0x821FCC44;
	sub_821847A8(ctx, base);
loc_821FCC44:
	// li r9,6604
	ctx.r9.s64 = 6604;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,26416
	ctx.r10.s64 = 26416;
	// li r8,7540
	ctx.r8.s64 = 7540;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 2;
	// addi r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 3;
loc_821FCC98:
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821fcc98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FCC98;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r8,1885
	ctx.r8.s64 = 1885;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// addi r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 2;
	// addi r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 3;
loc_821FCCF0:
	// lbzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821fccf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FCCF0;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// addi r29,r10,3
	ctx.r29.s64 = ctx.r10.s64 + 3;
loc_821FCD4C:
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821fcd4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FCD4C;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821FCD8C"))) PPC_WEAK_FUNC(sub_821FCD8C);
PPC_FUNC_IMPL(__imp__sub_821FCD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FCD90"))) PPC_WEAK_FUNC(sub_821FCD90);
PPC_FUNC_IMPL(__imp__sub_821FCD90) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82184800
	ctx.lr = 0x821FCDC0;
	sub_82184800(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82184800
	ctx.lr = 0x821FCDD0;
	sub_82184800(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82184800
	ctx.lr = 0x821FCDE0;
	sub_82184800(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82184800
	ctx.lr = 0x821FCDF0;
	sub_82184800(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x822aa648
	ctx.lr = 0x821FCDFC;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x822aa648
	ctx.lr = 0x821FCE08;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x822aa648
	ctx.lr = 0x821FCE14;
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

__attribute__((alias("__imp__sub_821FCE28"))) PPC_WEAK_FUNC(sub_821FCE28);
PPC_FUNC_IMPL(__imp__sub_821FCE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// b 0x82098498
	sub_82098498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FCE34"))) PPC_WEAK_FUNC(sub_821FCE34);
PPC_FUNC_IMPL(__imp__sub_821FCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FCE38"))) PPC_WEAK_FUNC(sub_821FCE38);
PPC_FUNC_IMPL(__imp__sub_821FCE38) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FCE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fce78
	if (ctx.cr6.eq) goto loc_821FCE78;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FCE78:
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

__attribute__((alias("__imp__sub_821FCE8C"))) PPC_WEAK_FUNC(sub_821FCE8C);
PPC_FUNC_IMPL(__imp__sub_821FCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FCE90"))) PPC_WEAK_FUNC(sub_821FCE90);
PPC_FUNC_IMPL(__imp__sub_821FCE90) {
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
	// bl 0x82164c50
	ctx.lr = 0x821FCEA8;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821fcebc
	if (!ctx.cr6.eq) goto loc_821FCEBC;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x821fcef0
	goto loc_821FCEF0;
loc_821FCEBC:
	// ori r10,r11,32912
	ctx.r10.u64 = ctx.r11.u64 | 32912;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821fced4
	if (!ctx.cr6.eq) goto loc_821FCED4;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x821fceec
	goto loc_821FCEEC;
loc_821FCED4:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821fcee8
	if (ctx.cr6.eq) goto loc_821FCEE8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// bne cr6,0x821fceec
	if (!ctx.cr6.eq) goto loc_821FCEEC;
loc_821FCEE8:
	// li r10,21
	ctx.r10.s64 = 21;
loc_821FCEEC:
	// lis r11,0
	ctx.r11.s64 = 0;
loc_821FCEF0:
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821FCF0C"))) PPC_WEAK_FUNC(sub_821FCF0C);
PPC_FUNC_IMPL(__imp__sub_821FCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FCF10"))) PPC_WEAK_FUNC(sub_821FCF10);
PPC_FUNC_IMPL(__imp__sub_821FCF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,32872
	ctx.r10.u64 = ctx.r11.u64 | 32872;
	// lwzx r31,r3,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821FCF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd038
	if (ctx.cr6.eq) goto loc_821FD038;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FCF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd018
	if (ctx.cr6.eq) goto loc_821FD018;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FCF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32920
	ctx.r8.u64 = ctx.r9.u64 | 32920;
	// stwx r3,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821FCFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x821fd038
	if (ctx.cr6.gt) goto loc_821FD038;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fcfc8
	// bdzf 4*cr6+eq,0x821fcfc8
	// bdzf 4*cr6+eq,0x821fcfc8
	// bdzf 4*cr6+eq,0x821fcfc8
	// bdzf 4*cr6+eq,0x821fcff0
	// bne cr6,0x821fd004
	if (!ctx.cr6.eq) goto loc_821FD004;
loc_821FCFC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205738
	ctx.lr = 0x821FCFD0;
	sub_82205738(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32952
	ctx.r9.u64 = ctx.r11.u64 | 32952;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,15
	ctx.r7.s64 = 15;
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x821fd038
	goto loc_821FD038;
loc_821FCFF0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x821fd038
	goto loc_821FD038;
loc_821FD004:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x821fd038
	goto loc_821FD038;
loc_821FD018:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32920
	ctx.r9.u64 = ctx.r11.u64 | 32920;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,8
	ctx.r6.s64 = 8;
	// stwx r7,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
loc_821FD038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FD050"))) PPC_WEAK_FUNC(sub_821FD050);
PPC_FUNC_IMPL(__imp__sub_821FD050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,32876
	ctx.r10.u64 = ctx.r11.u64 | 32876;
	// lwzx r31,r3,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821FD088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd130
	if (ctx.cr6.eq) goto loc_821FD130;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd110
	if (ctx.cr6.eq) goto loc_821FD110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32924
	ctx.r8.u64 = ctx.r9.u64 | 32924;
	// stwx r3,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821FD0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bge cr6,0x821fd130
	if (!ctx.cr6.lt) goto loc_821FD130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205738
	ctx.lr = 0x821FD0F0;
	sub_82205738(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32952
	ctx.r9.u64 = ctx.r11.u64 | 32952;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,15
	ctx.r7.s64 = 15;
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x821fd130
	goto loc_821FD130;
loc_821FD110:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32924
	ctx.r9.u64 = ctx.r11.u64 | 32924;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,10
	ctx.r6.s64 = 10;
	// stwx r7,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
loc_821FD130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FD148"))) PPC_WEAK_FUNC(sub_821FD148);
PPC_FUNC_IMPL(__imp__sub_821FD148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FD150;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,-32656
	ctx.r27.s64 = ctx.r27.s64 + -32656;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e1cd0
	ctx.lr = 0x821FD16C;
	sub_823E1CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd238
	if (ctx.cr6.eq) goto loc_821FD238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2570
	ctx.lr = 0x821FD17C;
	sub_823E2570(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd238
	if (ctx.cr6.eq) goto loc_821FD238;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,32900
	ctx.r7.u64 = ctx.r10.u64 | 32900;
	// ori r6,r8,32908
	ctx.r6.u64 = ctx.r8.u64 | 32908;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r29,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// bl 0x823e22f0
	ctx.lr = 0x821FD1BC;
	sub_823E22F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd210
	if (ctx.cr6.eq) goto loc_821FD210;
	// bl 0x82163df0
	ctx.lr = 0x821FD1C8;
	sub_82163DF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821FD1D0;
	sub_82163EE8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,32924
	ctx.r10.u64 = ctx.r11.u64 | 32924;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// ori r10,r11,32876
	ctx.r10.u64 = ctx.r11.u64 | 32876;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821fd1f4
	if (!ctx.cr6.eq) goto loc_821FD1F4;
	// ori r10,r11,32872
	ctx.r10.u64 = ctx.r11.u64 | 32872;
loc_821FD1F4:
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x822058f8
	ctx.lr = 0x821FD1FC;
	sub_822058F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821fd210
	if (ctx.cr6.eq) goto loc_821FD210;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_821FD210:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd230
	if (ctx.cr6.eq) goto loc_821FD230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD230:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_821FD238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FD240"))) PPC_WEAK_FUNC(sub_821FD240);
PPC_FUNC_IMPL(__imp__sub_821FD240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FD248;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-32656
	ctx.r29.s64 = ctx.r29.s64 + -32656;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e1cd0
	ctx.lr = 0x821FD264;
	sub_823E1CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd2ec
	if (ctx.cr6.eq) goto loc_821FD2EC;
	// bl 0x8215bec8
	ctx.lr = 0x821FD270;
	sub_8215BEC8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32956
	ctx.r9.u64 = ctx.r11.u64 | 32956;
	// ori r8,r10,32924
	ctx.r8.u64 = ctx.r10.u64 | 32924;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r28,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r28.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r7,156(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x821fd2ac
	if (!ctx.cr6.eq) goto loc_821FD2AC;
	// li r10,10
	ctx.r10.s64 = 10;
loc_821FD2AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd2c8
	if (ctx.cr6.eq) goto loc_821FD2C8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x821FD2C8;
	sub_820DA248(ctx, base);
loc_821FD2C8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd2e8
	if (ctx.cr6.eq) goto loc_821FD2E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD2E8:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_821FD2EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FD2F4"))) PPC_WEAK_FUNC(sub_821FD2F4);
PPC_FUNC_IMPL(__imp__sub_821FD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FD2F8"))) PPC_WEAK_FUNC(sub_821FD2F8);
PPC_FUNC_IMPL(__imp__sub_821FD2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FD300;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r28,-32652
	ctx.r28.s64 = ctx.r28.s64 + -32652;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd3d8
	if (ctx.cr6.eq) goto loc_821FD3D8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd3d8
	if (ctx.cr6.eq) goto loc_821FD3D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821FD358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd3a4
	if (ctx.cr6.eq) goto loc_821FD3A4;
	// bl 0x8222e080
	ctx.lr = 0x821FD368;
	sub_8222E080(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// li r6,25
	ctx.r6.s64 = 25;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r8,r10,32908
	ctx.r8.u64 = ctx.r10.u64 | 32908;
	// stwx r6,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// beq cr6,0x821fd398
	if (ctx.cr6.eq) goto loc_821FD398;
	// stwx r29,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r29.u32);
	// b 0x821fd3b4
	goto loc_821FD3B4;
loc_821FD398:
	// li r5,6
	ctx.r5.s64 = 6;
	// stwx r5,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x821fd3b4
	goto loc_821FD3B4;
loc_821FD3A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FD3B4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd3d4
	if (ctx.cr6.eq) goto loc_821FD3D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD3D4:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_821FD3D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FD3E0"))) PPC_WEAK_FUNC(sub_821FD3E0);
PPC_FUNC_IMPL(__imp__sub_821FD3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FD3E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x821FD3F4;
	sub_82163DF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x821FD400;
	sub_8215BD28(ctx, base);
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r31,-32580
	ctx.r31.s64 = ctx.r31.s64 + -32580;
	// bl 0x82230de8
	ctx.lr = 0x821FD414;
	sub_82230DE8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// ori r10,r11,32904
	ctx.r10.u64 = ctx.r11.u64 | 32904;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fd434
	if (ctx.cr6.eq) goto loc_821FD434;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821fd488
	if (!ctx.cr6.eq) goto loc_821FD488;
loc_821FD434:
	// bl 0x8215bd08
	ctx.lr = 0x821FD438;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821FD43C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd45c
	if (ctx.cr6.eq) goto loc_821FD45C;
	// bl 0x82164c50
	ctx.lr = 0x821FD448;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd45c
	if (ctx.cr6.eq) goto loc_821FD45C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x821fd478
	goto loc_821FD478;
loc_821FD45C:
	// bl 0x8215bd08
	ctx.lr = 0x821FD460;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821FD464;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd488
	if (!ctx.cr6.eq) goto loc_821FD488;
	// li r11,100
	ctx.r11.s64 = 100;
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821FD478:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231530
	ctx.lr = 0x821FD484;
	sub_82231530(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_821FD488:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FD490"))) PPC_WEAK_FUNC(sub_821FD490);
PPC_FUNC_IMPL(__imp__sub_821FD490) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd4e4
	if (ctx.cr6.eq) goto loc_821FD4E4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821FD4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r7,32900
	ctx.r5.u64 = ctx.r7.u64 | 32900;
	// stwx r6,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
loc_821FD4E4:
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

__attribute__((alias("__imp__sub_821FD4F8"))) PPC_WEAK_FUNC(sub_821FD4F8);
PPC_FUNC_IMPL(__imp__sub_821FD4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,-8532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fd5f4
	if (ctx.cr6.eq) goto loc_821FD5F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820cc6e0
	ctx.lr = 0x821FD528;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x821fd5f4
	if (!ctx.cr6.eq) goto loc_821FD5F4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d9d08
	ctx.lr = 0x821FD53C;
	sub_820D9D08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd58c
	if (ctx.cr6.eq) goto loc_821FD58C;
	// bl 0x8215bd08
	ctx.lr = 0x821FD548;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821FD54C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd578
	if (ctx.cr6.eq) goto loc_821FD578;
	// bl 0x8222e080
	ctx.lr = 0x821FD558;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd578
	if (ctx.cr6.eq) goto loc_821FD578;
	// bl 0x82230210
	ctx.lr = 0x821FD564;
	sub_82230210(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x821fd5f4
	goto loc_821FD5F4;
loc_821FD578:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x821fd5f4
	goto loc_821FD5F4;
loc_821FD58C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32904
	ctx.r10.u64 = ctx.r11.u64 | 32904;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821fd5f4
	if (ctx.cr6.eq) goto loc_821FD5F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32912
	ctx.r10.u64 = ctx.r11.u64 | 32912;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821fd5e0
	if (!ctx.cr6.eq) goto loc_821FD5E0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32920
	ctx.r9.u64 = ctx.r11.u64 | 32920;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x821fd5f4
	goto loc_821FD5F4;
loc_821FD5E0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x821FD5EC;
	sub_821EA9B8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_821FD5F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FD60C"))) PPC_WEAK_FUNC(sub_821FD60C);
PPC_FUNC_IMPL(__imp__sub_821FD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FD610"))) PPC_WEAK_FUNC(sub_821FD610);
PPC_FUNC_IMPL(__imp__sub_821FD610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821FD630;
	sub_821EBB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e278
	ctx.lr = 0x821FD638;
	sub_8222E278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd678
	if (ctx.cr6.eq) goto loc_821FD678;
loc_821FD640:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821FD65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10013
	ctx.r3.s64 = 10013;
	// bl 0x8208f658
	ctx.lr = 0x821FD664;
	sub_8208F658(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r6,r8,32900
	ctx.r6.u64 = ctx.r8.u64 | 32900;
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x821fd6f0
	goto loc_821FD6F0;
loc_821FD678:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e488
	ctx.lr = 0x821FD680;
	sub_8222E488(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd640
	if (!ctx.cr6.eq) goto loc_821FD640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222fad0
	ctx.lr = 0x821FD690;
	sub_8222FAD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd640
	if (!ctx.cr6.eq) goto loc_821FD640;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// bl 0x821ec880
	ctx.lr = 0x821FD6A8;
	sub_821EC880(ctx, base);
	// lwz r3,-784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x821FD6B0;
	sub_821EC858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd6f0
	if (!ctx.cr6.eq) goto loc_821FD6F0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32904
	ctx.r10.u64 = ctx.r11.u64 | 32904;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821fd6e0
	if (!ctx.cr6.eq) goto loc_821FD6E0;
	// bl 0x82163ee8
	ctx.lr = 0x821FD6D0;
	sub_82163EE8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fd6e4
	if (!ctx.cr6.eq) goto loc_821FD6E4;
loc_821FD6E0:
	// li r10,6
	ctx.r10.s64 = 6;
loc_821FD6E4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FD6F0:
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

__attribute__((alias("__imp__sub_821FD708"))) PPC_WEAK_FUNC(sub_821FD708);
PPC_FUNC_IMPL(__imp__sub_821FD708) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821FD734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fd74c
	if (ctx.cr6.eq) goto loc_821FD74C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FD74C:
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

__attribute__((alias("__imp__sub_821FD760"))) PPC_WEAK_FUNC(sub_821FD760);
PPC_FUNC_IMPL(__imp__sub_821FD760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FD768;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,1812(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821fd800
	if (!ctx.cr6.eq) goto loc_821FD800;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fd800
	if (ctx.cr6.eq) goto loc_821FD800;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FD7A8;
	sub_821EA8B8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,32900
	ctx.r7.u64 = ctx.r10.u64 | 32900;
	// ori r6,r9,32908
	ctx.r6.u64 = ctx.r9.u64 | 32908;
	// addi r5,r5,-32576
	ctx.r5.s64 = ctx.r5.s64 + -32576;
	// ori r3,r8,32964
	ctx.r3.u64 = ctx.r8.u64 | 32964;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r29,4
	ctx.r29.s64 = 4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821FD800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FD808"))) PPC_WEAK_FUNC(sub_821FD808);
PPC_FUNC_IMPL(__imp__sub_821FD808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FD810;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x821FD824;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fd920
	if (!ctx.cr6.eq) goto loc_821FD920;
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// addi r28,r28,-32668
	ctx.r28.s64 = ctx.r28.s64 + -32668;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd854
	if (ctx.cr6.eq) goto loc_821FD854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD854:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32904
	ctx.r9.u64 = ctx.r11.u64 | 32904;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821fd8b0
	if (ctx.cr6.eq) goto loc_821FD8B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821fd8a8
	if (ctx.cr6.eq) goto loc_821FD8A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fd8b4
	if (!ctx.cr6.eq) goto loc_821FD8B4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32912
	ctx.r10.u64 = ctx.r11.u64 | 32912;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821fd8b0
	if (ctx.cr6.eq) goto loc_821FD8B0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821fd8b0
	if (ctx.cr6.eq) goto loc_821FD8B0;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x821fd8b4
	goto loc_821FD8B4;
loc_821FD8A8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821fd8b4
	goto loc_821FD8B4;
loc_821FD8B0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821FD8B4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32916
	ctx.r10.u64 = ctx.r11.u64 | 32916;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fd8cc
	if (ctx.cr6.eq) goto loc_821FD8CC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821FD8CC:
	// bl 0x82182e90
	ctx.lr = 0x821FD8D0;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FD8D8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FD8E4;
	sub_821837D0(ctx, base);
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x82080000
	ctx.lr = 0x821FD8EC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd900
	if (ctx.cr6.eq) goto loc_821FD900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822098c8
	ctx.lr = 0x821FD8FC;
	sub_822098C8(ctx, base);
	// b 0x821fd904
	goto loc_821FD904;
loc_821FD900:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FD904:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FD920;
	sub_821837D0(ctx, base);
loc_821FD920:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FD928"))) PPC_WEAK_FUNC(sub_821FD928);
PPC_FUNC_IMPL(__imp__sub_821FD928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FD930;
	sub_82248788(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x821FD944;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fdb54
	if (!ctx.cr6.eq) goto loc_821FDB54;
	// addis r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 65536;
	// addi r29,r29,-32664
	ctx.r29.s64 = ctx.r29.s64 + -32664;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd974
	if (ctx.cr6.eq) goto loc_821FD974;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FD974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FD974:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32920
	ctx.r9.u64 = ctx.r11.u64 | 32920;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fd998
	if (ctx.cr6.eq) goto loc_821FD998;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821FD998:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fcd90
	ctx.lr = 0x821FD9A0;
	sub_821FCD90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,376
	ctx.r10.s64 = 376;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r9,378
	ctx.r9.s64 = 378;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r31,385
	ctx.r31.s64 = 385;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r30,r1,264
	ctx.r30.s64 = ctx.r1.s64 + 264;
loc_821FD9C4:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,-337
	ctx.r10.s64 = ctx.r31.s64 + -337;
	// stw r11,-176(r30)
	PPC_STORE_U32(ctx.r30.u32 + -176, ctx.r11.u32);
	// addi r11,r31,-345
	ctx.r11.s64 = ctx.r31.s64 + -345;
	// stw r31,-140(r30)
	PPC_STORE_U32(ctx.r30.u32 + -140, ctx.r31.u32);
	// addi r9,r31,-235
	ctx.r9.s64 = ctx.r31.s64 + -235;
	// addi r8,r31,-386
	ctx.r8.s64 = ctx.r31.s64 + -386;
	// stw r10,-104(r30)
	PPC_STORE_U32(ctx.r30.u32 + -104, ctx.r10.u32);
	// stw r11,-68(r30)
	PPC_STORE_U32(ctx.r30.u32 + -68, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r9.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x821fda34
	if (ctx.cr6.gt) goto loc_821FDA34;
	// addi r11,r31,-386
	ctx.r11.s64 = ctx.r31.s64 + -386;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fda18
	// bdzf 4*cr6+eq,0x821fda20
	// bne cr6,0x821fda28
	if (!ctx.cr6.eq) goto loc_821FDA28;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x821fda2c
	goto loc_821FDA2C;
loc_821FDA18:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x821fda2c
	goto loc_821FDA2C;
loc_821FDA20:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x821fda2c
	goto loc_821FDA2C;
loc_821FDA28:
	// li r3,23
	ctx.r3.s64 = 23;
loc_821FDA2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e0a8
	ctx.lr = 0x821FDA34;
	sub_8222E0A8(ctx, base);
loc_821FDA34:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r9,r31,-385
	ctx.r9.s64 = ctx.r31.s64 + -385;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// lwz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821fd9c4
	if (ctx.cr6.lt) goto loc_821FD9C4;
	// bl 0x8215bd08
	ctx.lr = 0x821FDA58;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821FDA5C;
	sub_8216CDF0(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fda84
	if (!ctx.cr6.eq) goto loc_821FDA84;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
loc_821FDA84:
	// bl 0x8222e080
	ctx.lr = 0x821FDA88;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fdaac
	if (!ctx.cr6.eq) goto loc_821FDAAC;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
loc_821FDAAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-8168
	ctx.r30.s64 = ctx.r11.s64 + -8168;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821FDAB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222e0a8
	ctx.lr = 0x821FDAC4;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fdae4
	if (!ctx.cr6.eq) goto loc_821FDAE4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fdab8
	if (ctx.cr6.lt) goto loc_821FDAB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
loc_821FDAE4:
	// bl 0x82182e90
	ctx.lr = 0x821FDAE8;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FDAF0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FDAFC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821FDB00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fdb18
	if (ctx.cr6.eq) goto loc_821FDB18;
	// li r3,1120
	ctx.r3.s64 = 1120;
	// bl 0x82183448
	ctx.lr = 0x821FDB14;
	sub_82183448(ctx, base);
	// b 0x821fdb20
	goto loc_821FDB20;
loc_821FDB18:
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x821845a0
	ctx.lr = 0x821FDB20;
	sub_821845A0(ctx, base);
loc_821FDB20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fdb34
	if (ctx.cr6.eq) goto loc_821FDB34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82206d78
	ctx.lr = 0x821FDB30;
	sub_82206D78(ctx, base);
	// b 0x821fdb38
	goto loc_821FDB38;
loc_821FDB34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FDB38:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FDB54;
	sub_821837D0(ctx, base);
loc_821FDB54:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FDB5C"))) PPC_WEAK_FUNC(sub_821FDB5C);
PPC_FUNC_IMPL(__imp__sub_821FDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FDB60"))) PPC_WEAK_FUNC(sub_821FDB60);
PPC_FUNC_IMPL(__imp__sub_821FDB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821FDB68;
	sub_8224877C(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x821FDB7C;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fdcfc
	if (!ctx.cr6.eq) goto loc_821FDCFC;
	// addis r26,r25,1
	ctx.r26.s64 = ctx.r25.s64 + 65536;
	// addi r26,r26,-32660
	ctx.r26.s64 = ctx.r26.s64 + -32660;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fdbac
	if (ctx.cr6.eq) goto loc_821FDBAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FDBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FDBAC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,32924
	ctx.r10.u64 = ctx.r11.u64 | 32924;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fdbd0
	if (ctx.cr6.eq) goto loc_821FDBD0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821FDBD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fcd90
	ctx.lr = 0x821FDBD8;
	sub_821FCD90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,372
	ctx.r10.s64 = 372;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r9,379
	ctx.r9.s64 = 379;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r11,402
	ctx.r11.s64 = 402;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,264
	ctx.r10.s64 = ctx.r1.s64 + 264;
loc_821FDBFC:
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// addi r8,r11,-337
	ctx.r8.s64 = ctx.r11.s64 + -337;
	// stw r9,-176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -176, ctx.r9.u32);
	// addi r9,r11,-346
	ctx.r9.s64 = ctx.r11.s64 + -346;
	// stw r11,-140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -140, ctx.r11.u32);
	// addi r7,r11,-244
	ctx.r7.s64 = ctx.r11.s64 + -244;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,-104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -104, ctx.r8.u32);
	// stw r9,-68(r10)
	PPC_STORE_U32(ctx.r10.u32 + -68, ctx.r9.u32);
	// stw r7,-32(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32, ctx.r7.u32);
	// addi r8,r11,-402
	ctx.r8.s64 = ctx.r11.s64 + -402;
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// lwz r9,344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821fdbfc
	if (ctx.cr6.lt) goto loc_821FDBFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821fdc8c
	if (!ctx.cr6.gt) goto loc_821FDC8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r28,r11,-8168
	ctx.r28.s64 = ctx.r11.s64 + -8168;
loc_821FDC54:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8222e0a8
	ctx.lr = 0x821FDC60;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r1,268
	ctx.r11.s64 = ctx.r1.s64 + 268;
	// beq cr6,0x821fdc74
	if (ctx.cr6.eq) goto loc_821FDC74;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// b 0x821fdc78
	goto loc_821FDC78;
loc_821FDC74:
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
loc_821FDC78:
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fdc54
	if (ctx.cr6.lt) goto loc_821FDC54;
loc_821FDC8C:
	// bl 0x82182e90
	ctx.lr = 0x821FDC90;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FDC98;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FDCA4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821FDCA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fdcc0
	if (ctx.cr6.eq) goto loc_821FDCC0;
	// li r3,1120
	ctx.r3.s64 = 1120;
	// bl 0x82183448
	ctx.lr = 0x821FDCBC;
	sub_82183448(ctx, base);
	// b 0x821fdcc8
	goto loc_821FDCC8;
loc_821FDCC0:
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x821845a0
	ctx.lr = 0x821FDCC8;
	sub_821845A0(ctx, base);
loc_821FDCC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fdcdc
	if (ctx.cr6.eq) goto loc_821FDCDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82206d78
	ctx.lr = 0x821FDCD8;
	sub_82206D78(ctx, base);
	// b 0x821fdce0
	goto loc_821FDCE0;
loc_821FDCDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FDCE0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r25,r9
	PPC_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FDCFC;
	sub_821837D0(ctx, base);
loc_821FDCFC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821FDD04"))) PPC_WEAK_FUNC(sub_821FDD04);
PPC_FUNC_IMPL(__imp__sub_821FDD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FDD08"))) PPC_WEAK_FUNC(sub_821FDD08);
PPC_FUNC_IMPL(__imp__sub_821FDD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FDD10;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FDD2C;
	sub_821EA8B8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x821FDD30;
	sub_8215BEC8(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r10.u32);
	// bl 0x821eb3e8
	ctx.lr = 0x821FDD3C;
	sub_821EB3E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x821FDD44;
	sub_821EBAA8(ctx, base);
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// addi r31,r31,-32656
	ctx.r31.s64 = ctx.r31.s64 + -32656;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fdd6c
	if (ctx.cr6.eq) goto loc_821FDD6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FDD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FDD6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x821FDD78;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FDD80;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FDD8C;
	sub_821837D0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,34463
	ctx.r10.u64 = ctx.r10.u64 | 34463;
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,135
	ctx.r7.s64 = 135;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FDDE4;
	sub_8215BD08(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,217
	ctx.r4.s64 = 217;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r9,102
	ctx.r9.s64 = 102;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x821FDE1C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fde34
	if (ctx.cr6.eq) goto loc_821FDE34;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82183448
	ctx.lr = 0x821FDE30;
	sub_82183448(ctx, base);
	// b 0x821fde3c
	goto loc_821FDE3C;
loc_821FDE34:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x821FDE3C;
	sub_821845A0(ctx, base);
loc_821FDE3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fde50
	if (ctx.cr6.eq) goto loc_821FDE50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823e2ff8
	ctx.lr = 0x821FDE4C;
	sub_823E2FF8(ctx, base);
	// b 0x821fde54
	goto loc_821FDE54;
loc_821FDE50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FDE54:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FDE70;
	sub_821837D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FDE78"))) PPC_WEAK_FUNC(sub_821FDE78);
PPC_FUNC_IMPL(__imp__sub_821FDE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821FDE80;
	sub_8224877C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FDE9C;
	sub_821EA8B8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x821FDEA0;
	sub_8215BEC8(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r10.u32);
	// bl 0x821eb3e8
	ctx.lr = 0x821FDEAC;
	sub_821EB3E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x821FDEB4;
	sub_821EBAA8(ctx, base);
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// addi r25,r25,-32656
	ctx.r25.s64 = ctx.r25.s64 + -32656;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fdedc
	if (ctx.cr6.eq) goto loc_821FDEDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FDEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FDEDC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32924
	ctx.r9.u64 = ctx.r11.u64 | 32924;
	// ori r8,r10,32872
	ctx.r8.u64 = ctx.r10.u64 | 32872;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// lwzx r31,r30,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// beq cr6,0x821fdf10
	if (ctx.cr6.eq) goto loc_821FDF10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32876
	ctx.r10.u64 = ctx.r11.u64 | 32876;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_821FDF10:
	// bl 0x82182e90
	ctx.lr = 0x821FDF14;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FDF1C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FDF28;
	sub_821837D0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,34463
	ctx.r10.u64 = ctx.r10.u64 | 34463;
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,135
	ctx.r7.s64 = 135;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821FDF80;
	sub_8215BD08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82205790
	ctx.lr = 0x821FDF98;
	sub_82205790(ctx, base);
	// bl 0x82170770
	ctx.lr = 0x821FDF9C;
	sub_82170770(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205790
	ctx.lr = 0x821FDFA8;
	sub_82205790(ctx, base);
	// bl 0x82170798
	ctx.lr = 0x821FDFAC;
	sub_82170798(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205740
	ctx.lr = 0x821FDFB8;
	sub_82205740(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205790
	ctx.lr = 0x821FDFC4;
	sub_82205790(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822057e0
	ctx.lr = 0x821FDFD0;
	sub_822057E0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205830
	ctx.lr = 0x821FDFDC;
	sub_82205830(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205880
	ctx.lr = 0x821FDFE8;
	sub_82205880(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r3,32948
	ctx.r11.u64 = ctx.r3.u64 | 32948;
	// lwzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822310b0
	ctx.lr = 0x821FE000;
	sub_822310B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe040
	if (!ctx.cr6.eq) goto loc_821FE040;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_821FE00C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c00
	ctx.lr = 0x821FE014;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe02c
	if (ctx.cr6.eq) goto loc_821FE02C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822310b0
	ctx.lr = 0x821FE024;
	sub_822310B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe03c
	if (!ctx.cr6.eq) goto loc_821FE03C;
loc_821FE02C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// blt cr6,0x821fe00c
	if (ctx.cr6.lt) goto loc_821FE00C;
	// b 0x821fe040
	goto loc_821FE040;
loc_821FE03C:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821FE040:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32952
	ctx.r10.u64 = ctx.r11.u64 | 32952;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x822058d0
	ctx.lr = 0x821FE05C;
	sub_822058D0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822058e0
	ctx.lr = 0x821FE068;
	sub_822058E0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821FE070;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fe088
	if (ctx.cr6.eq) goto loc_821FE088;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82183448
	ctx.lr = 0x821FE084;
	sub_82183448(ctx, base);
	// b 0x821fe090
	goto loc_821FE090;
loc_821FE088:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x821FE090;
	sub_821845A0(ctx, base);
loc_821FE090:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe0a4
	if (ctx.cr6.eq) goto loc_821FE0A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823e2ff8
	ctx.lr = 0x821FE0A0;
	sub_823E2FF8(ctx, base);
	// b 0x821fe0a8
	goto loc_821FE0A8;
loc_821FE0A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821FE0A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FE0C4;
	sub_821837D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821FE0CC"))) PPC_WEAK_FUNC(sub_821FE0CC);
PPC_FUNC_IMPL(__imp__sub_821FE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FE0D0"))) PPC_WEAK_FUNC(sub_821FE0D0);
PPC_FUNC_IMPL(__imp__sub_821FE0D0) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,32880
	ctx.r10.u64 = ctx.r11.u64 | 32880;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fe114
	if (!ctx.cr6.eq) goto loc_821FE114;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// b 0x821fe138
	goto loc_821FE138;
loc_821FE114:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821fe144
	if (!ctx.cr6.eq) goto loc_821FE144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10001
	ctx.r3.s64 = 10001;
	// bl 0x8208f658
	ctx.lr = 0x821FE134;
	sub_8208F658(ctx, base);
	// li r8,18
	ctx.r8.s64 = 18;
loc_821FE138:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r9,32900
	ctx.r7.u64 = ctx.r9.u64 | 32900;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
loc_821FE144:
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

__attribute__((alias("__imp__sub_821FE158"))) PPC_WEAK_FUNC(sub_821FE158);
PPC_FUNC_IMPL(__imp__sub_821FE158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FE160;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e080
	ctx.lr = 0x821FE16C;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe1d8
	if (!ctx.cr6.eq) goto loc_821FE1D8;
	// bl 0x82182e90
	ctx.lr = 0x821FE178;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FE180;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE18C;
	sub_821837D0(ctx, base);
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x821FE194;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe1a8
	if (ctx.cr6.eq) goto loc_821FE1A8;
	// bl 0x82209f20
	ctx.lr = 0x821FE1A0;
	sub_82209F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821fe1ac
	goto loc_821FE1AC;
loc_821FE1A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FE1AC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,32884
	ctx.r8.u64 = ctx.r10.u64 | 32884;
	// ori r7,r9,32900
	ctx.r7.u64 = ctx.r9.u64 | 32900;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FE1D0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FE1D8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe220
	if (ctx.cr6.eq) goto loc_821FE220;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,32900
	ctx.r7.u64 = ctx.r10.u64 | 32900;
	// ori r6,r8,32908
	ctx.r6.u64 = ctx.r8.u64 | 32908;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x821FE21C;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x821FE220;
	sub_821EB3E8(ctx, base);
loc_821FE220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FE228"))) PPC_WEAK_FUNC(sub_821FE228);
PPC_FUNC_IMPL(__imp__sub_821FE228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FE230;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,-32648
	ctx.r28.s64 = ctx.r28.s64 + -32648;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe260
	if (ctx.cr6.eq) goto loc_821FE260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FE260:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x821FE26C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FE274;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE280;
	sub_821837D0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r9,r10,32912
	ctx.r9.u64 = ctx.r10.u64 | 32912;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x821fe29c
	if (!ctx.cr6.eq) goto loc_821FE29C;
	// li r30,2
	ctx.r30.s64 = 2;
loc_821FE29C:
	// bl 0x82183850
	ctx.lr = 0x821FE2A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fe2b8
	if (ctx.cr6.eq) goto loc_821FE2B8;
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82183448
	ctx.lr = 0x821FE2B4;
	sub_82183448(ctx, base);
	// b 0x821fe2c0
	goto loc_821FE2C0;
loc_821FE2B8:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x821845a0
	ctx.lr = 0x821FE2C0;
	sub_821845A0(ctx, base);
loc_821FE2C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe2dc
	if (ctx.cr6.eq) goto loc_821FE2DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8220e6d0
	ctx.lr = 0x821FE2D8;
	sub_8220E6D0(ctx, base);
	// b 0x821fe2e0
	goto loc_821FE2E0;
loc_821FE2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FE2E0:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE2EC;
	sub_821837D0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,22
	ctx.r10.s64 = 22;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FE304"))) PPC_WEAK_FUNC(sub_821FE304);
PPC_FUNC_IMPL(__imp__sub_821FE304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FE308"))) PPC_WEAK_FUNC(sub_821FE308);
PPC_FUNC_IMPL(__imp__sub_821FE308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FE310;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r30,-32640
	ctx.r30.s64 = ctx.r30.s64 + -32640;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe340
	if (ctx.cr6.eq) goto loc_821FE340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FE340:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x821FE34C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FE354;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE360;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821FE364;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fe37c
	if (ctx.cr6.eq) goto loc_821FE37C;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x82183448
	ctx.lr = 0x821FE378;
	sub_82183448(ctx, base);
	// b 0x821fe384
	goto loc_821FE384;
loc_821FE37C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821845a0
	ctx.lr = 0x821FE384;
	sub_821845A0(ctx, base);
loc_821FE384:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe3bc
	if (ctx.cr6.eq) goto loc_821FE3BC;
	// bl 0x8215bd08
	ctx.lr = 0x821FE394;
	sub_8215BD08(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82182e90
	ctx.lr = 0x821FE39C;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ff40
	ctx.lr = 0x821FE3B8;
	sub_8220FF40(ctx, base);
	// b 0x821fe3c0
	goto loc_821FE3C0;
loc_821FE3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FE3C0:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE3CC;
	sub_821837D0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FE3E4"))) PPC_WEAK_FUNC(sub_821FE3E4);
PPC_FUNC_IMPL(__imp__sub_821FE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FE3E8"))) PPC_WEAK_FUNC(sub_821FE3E8);
PPC_FUNC_IMPL(__imp__sub_821FE3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FE3F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,-32640
	ctx.r30.s64 = ctx.r30.s64 + -32640;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe534
	if (ctx.cr6.eq) goto loc_821FE534;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fe4fc
	if (ctx.cr6.eq) goto loc_821FE4FC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r28,-8532(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821fe534
	if (ctx.cr6.eq) goto loc_821FE534;
	// bl 0x82163ee8
	ctx.lr = 0x821FE440;
	sub_82163EE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lhz r5,3348(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3348);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,1088(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x821FE460;
	sub_82230860(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r5,3360(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x821FE474;
	sub_82230860(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x821FE478;
	sub_82163DF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x821FE484;
	sub_8215BD28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230de8
	ctx.lr = 0x821FE490;
	sub_82230DE8(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821FE494;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821FE498;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe4b4
	if (ctx.cr6.eq) goto loc_821FE4B4;
	// bl 0x82164c50
	ctx.lr = 0x821FE4A4;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe4b4
	if (ctx.cr6.eq) goto loc_821FE4B4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821fe4b8
	goto loc_821FE4B8;
loc_821FE4B4:
	// li r3,100
	ctx.r3.s64 = 100;
loc_821FE4B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231530
	ctx.lr = 0x821FE4C4;
	sub_82231530(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// ori r8,r11,32900
	ctx.r8.u64 = ctx.r11.u64 | 32900;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r7,r9,32908
	ctx.r7.u64 = ctx.r9.u64 | 32908;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwx r5,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r4,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821FE4FC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// beq cr6,0x821fe52c
	if (ctx.cr6.eq) goto loc_821FE52C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FE52C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821FE534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FE53C"))) PPC_WEAK_FUNC(sub_821FE53C);
PPC_FUNC_IMPL(__imp__sub_821FE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FE540"))) PPC_WEAK_FUNC(sub_821FE540);
PPC_FUNC_IMPL(__imp__sub_821FE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FE548;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821fe64c
	if (!ctx.cr6.eq) goto loc_821FE64C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fe648
	if (ctx.cr6.gt) goto loc_821FE648;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fe648
	if (ctx.cr6.eq) goto loc_821FE648;
	// bdz 0x821fe588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821FE588;
	// bdz 0x821fe5b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821FE5B4;
	// b 0x821fe5e0
	goto loc_821FE5E0;
loc_821FE588:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FE58C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FE594;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe644
	if (ctx.cr6.eq) goto loc_821FE644;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x821fe58c
	if (ctx.cr6.lt) goto loc_821FE58C;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FE5B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FE5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FE5C0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe644
	if (!ctx.cr6.eq) goto loc_821FE644;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x821fe5b8
	if (ctx.cr6.lt) goto loc_821FE5B8;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FE5E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230c00
	ctx.lr = 0x821FE5E8;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe600
	if (ctx.cr6.eq) goto loc_821FE600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FE5F8;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe644
	if (!ctx.cr6.eq) goto loc_821FE644;
loc_821FE600:
	// bl 0x8215bd08
	ctx.lr = 0x821FE604;
	sub_8215BD08(ctx, base);
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FE610;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe648
	if (!ctx.cr6.eq) goto loc_821FE648;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FE61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FE624;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fe644
	if (!ctx.cr6.eq) goto loc_821FE644;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x821fe61c
	if (ctx.cr6.lt) goto loc_821FE61C;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FE644:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821FE648:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_821FE64C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FE654"))) PPC_WEAK_FUNC(sub_821FE654);
PPC_FUNC_IMPL(__imp__sub_821FE654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FE658"))) PPC_WEAK_FUNC(sub_821FE658);
PPC_FUNC_IMPL(__imp__sub_821FE658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821FE660;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8218ca50
	ctx.lr = 0x821FE678;
	sub_8218CA50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r10,r11,-8128
	ctx.r10.s64 = ctx.r11.s64 + -8128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f4a48
	ctx.lr = 0x821FE68C;
	sub_821F4A48(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r28,r28,-32632
	ctx.r28.s64 = ctx.r28.s64 + -32632;
	// ori r10,r7,32912
	ctx.r10.u64 = ctx.r7.u64 | 32912;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// ori r4,r9,32900
	ctx.r4.u64 = ctx.r9.u64 | 32900;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// ori r3,r8,32908
	ctx.r3.u64 = ctx.r8.u64 | 32908;
	// ori r9,r6,32952
	ctx.r9.u64 = ctx.r6.u64 | 32952;
	// ori r8,r5,32956
	ctx.r8.u64 = ctx.r5.u64 | 32956;
	// addi r27,r27,-32588
	ctx.r27.s64 = ctx.r27.s64 + -32588;
	// addi r7,r7,-32576
	ctx.r7.s64 = ctx.r7.s64 + -32576;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// bl 0x82163df0
	ctx.lr = 0x821FE704;
	sub_82163DF0(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-8540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8540);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,1632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1632);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r25,40(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8215bec8
	ctx.lr = 0x821FE734;
	sub_8215BEC8(ctx, base);
	// stw r25,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r25.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x8215bec8
	ctx.lr = 0x821FE744;
	sub_8215BEC8(ctx, base);
	// stw r30,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd3e0
	ctx.lr = 0x821FE750;
	sub_821FD3E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82098200
	ctx.lr = 0x821FE758;
	sub_82098200(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x821fe7e0
	if (ctx.cr6.eq) goto loc_821FE7E0;
	// bl 0x82183078
	ctx.lr = 0x821FE778;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821FE784;
	sub_821837D0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x821FE78C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe7a4
	if (ctx.cr6.eq) goto loc_821FE7A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82098b80
	ctx.lr = 0x821FE79C;
	sub_82098B80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821fe7a8
	goto loc_821FE7A8;
loc_821FE7A4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821FE7A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82080000
	ctx.lr = 0x821FE7B0;
	sub_82080000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe7cc
	if (ctx.cr6.eq) goto loc_821FE7CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,7960
	ctx.r10.s64 = ctx.r11.s64 + 7960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821fe7d0
	goto loc_821FE7D0;
loc_821FE7CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821FE7D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef488
	ctx.lr = 0x821FE7D8;
	sub_820EF488(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE7E0;
	sub_821837D0(ctx, base);
loc_821FE7E0:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,7
	ctx.r11.s64 = 7;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,-32668
	ctx.r3.s64 = ctx.r3.s64 + -32668;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x821FE7FC;
	sub_822AA648(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-32620
	ctx.r11.s64 = ctx.r11.s64 + -32620;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821FE814:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821fe814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FE814;
	// bl 0x82182e90
	ctx.lr = 0x821FE820;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821FE828;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE834;
	sub_821837D0(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r11,-772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fe880
	if (!ctx.cr6.eq) goto loc_821FE880;
	// bl 0x82183850
	ctx.lr = 0x821FE848;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821fe860
	if (ctx.cr6.eq) goto loc_821FE860;
	// li r3,22240
	ctx.r3.s64 = 22240;
	// bl 0x82183448
	ctx.lr = 0x821FE85C;
	sub_82183448(ctx, base);
	// b 0x821fe868
	goto loc_821FE868;
loc_821FE860:
	// li r3,1390
	ctx.r3.s64 = 1390;
	// bl 0x821845a0
	ctx.lr = 0x821FE868;
	sub_821845A0(ctx, base);
loc_821FE868:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe87c
	if (ctx.cr6.eq) goto loc_821FE87C;
	// bl 0x821f0228
	ctx.lr = 0x821FE874;
	sub_821F0228(ctx, base);
	// stw r3,-772(r29)
	PPC_STORE_U32(ctx.r29.u32 + -772, ctx.r3.u32);
	// b 0x821fe880
	goto loc_821FE880;
loc_821FE87C:
	// stw r30,-772(r29)
	PPC_STORE_U32(ctx.r29.u32 + -772, ctx.r30.u32);
loc_821FE880:
	// bl 0x821f18c0
	ctx.lr = 0x821FE884;
	sub_821F18C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821fe8a0
	if (!ctx.cr6.eq) goto loc_821FE8A0;
	// bl 0x82182e90
	ctx.lr = 0x821FE890;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821f2ea0
	ctx.lr = 0x821FE8A0;
	sub_821F2EA0(ctx, base);
loc_821FE8A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e52a8
	ctx.lr = 0x821FE8B0;
	sub_820E52A8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x821FE8C4;
	sub_8208F758(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FE8CC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821FE8D8"))) PPC_WEAK_FUNC(sub_821FE8D8);
PPC_FUNC_IMPL(__imp__sub_821FE8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FE8E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r10,r11,-8128
	ctx.r10.s64 = ctx.r11.s64 + -8128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r31,-32672
	ctx.r31.s64 = ctx.r31.s64 + -32672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821FE904:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe924
	if (ctx.cr6.eq) goto loc_821FE924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FE924:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x821fe904
	if (!ctx.cr0.eq) goto loc_821FE904;
	// bl 0x821f18c0
	ctx.lr = 0x821FE934;
	sub_821F18C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe940
	if (ctx.cr6.eq) goto loc_821FE940;
	// bl 0x821f1870
	ctx.lr = 0x821FE940;
	sub_821F1870(ctx, base);
loc_821FE940:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r30,-772(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -772);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fe964
	if (ctx.cr6.eq) goto loc_821FE964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821FE958;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821FE964;
	sub_82183E40(ctx, base);
loc_821FE964:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r29,-772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -772, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ori r9,r10,32908
	ctx.r9.u64 = ctx.r10.u64 | 32908;
	// lwzx r31,r28,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x821fe9ac
	if (ctx.cr6.eq) goto loc_821FE9AC;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fe9a4
	if (ctx.cr6.eq) goto loc_821FE9A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FE9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FE9A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-9764(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9764, ctx.r29.u32);
loc_821FE9AC:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x821fe9c4
	if (ctx.cr6.eq) goto loc_821FE9C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x821fe9c4
	if (ctx.cr6.eq) goto loc_821FE9C4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x821fe9ec
	if (!ctx.cr6.eq) goto loc_821FE9EC;
loc_821FE9C4:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8208f758
	ctx.lr = 0x821FE9D8;
	sub_8208F758(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4640
	ctx.r4.u64 = ctx.r4.u64 | 4640;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x821FE9EC;
	sub_8208F758(ctx, base);
loc_821FE9EC:
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x821f4b38
	ctx.lr = 0x821FE9F4;
	sub_821F4B38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218cc18
	ctx.lr = 0x821FE9FC;
	sub_8218CC18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FEA04"))) PPC_WEAK_FUNC(sub_821FEA04);
PPC_FUNC_IMPL(__imp__sub_821FEA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FEA08"))) PPC_WEAK_FUNC(sub_821FEA08);
PPC_FUNC_IMPL(__imp__sub_821FEA08) {
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
	// bl 0x82163ee8
	ctx.lr = 0x821FEA20;
	sub_82163EE8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lbz r8,2367(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// beq cr6,0x821fea58
	if (ctx.cr6.eq) goto loc_821FEA58;
	// bl 0x82155988
	ctx.lr = 0x821FEA44;
	sub_82155988(ctx, base);
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
loc_821FEA58:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82155920
	ctx.lr = 0x821FEA60;
	sub_82155920(ctx, base);
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

__attribute__((alias("__imp__sub_821FEA74"))) PPC_WEAK_FUNC(sub_821FEA74);
PPC_FUNC_IMPL(__imp__sub_821FEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FEA78"))) PPC_WEAK_FUNC(sub_821FEA78);
PPC_FUNC_IMPL(__imp__sub_821FEA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FEA80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,32868
	ctx.r10.u64 = ctx.r11.u64 | 32868;
	// lwzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821FEAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fec8c
	if (ctx.cr6.eq) goto loc_821FEC8C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fec8c
	if (ctx.cr6.eq) goto loc_821FEC8C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821FEAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fec4c
	if (ctx.cr6.eq) goto loc_821FEC4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FEAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32916
	ctx.r8.u64 = ctx.r9.u64 | 32916;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821FEB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x821fec8c
	if (ctx.cr6.gt) goto loc_821FEC8C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821feb5c
	// bdzf 4*cr6+eq,0x821feb74
	// bdzf 4*cr6+eq,0x821fec8c
	// bdzf 4*cr6+eq,0x821fec8c
	// bdzf 4*cr6+eq,0x821feba8
	// bdzf 4*cr6+eq,0x821fec8c
	// bdzf 4*cr6+eq,0x821febc0
	// bne cr6,0x821fec34
	if (!ctx.cr6.eq) goto loc_821FEC34;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEB5C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,21
	ctx.r10.s64 = 21;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEB74:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,32908
	ctx.r9.u64 = ctx.r11.u64 | 32908;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821FEB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215c6c0
	ctx.lr = 0x821FEBA0;
	sub_8215C6C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEBA8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,23
	ctx.r10.s64 = 23;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEBC0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FEBD4;
	sub_821EA8B8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// ori r7,r9,32908
	ctx.r7.u64 = ctx.r9.u64 | 32908;
	// addi r3,r3,-32576
	ctx.r3.s64 = ctx.r3.s64 + -32576;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ori r7,r8,32956
	ctx.r7.u64 = ctx.r8.u64 | 32956;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x821fe540
	ctx.lr = 0x821FEC2C;
	sub_821FE540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEC34:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821FEC4C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32904
	ctx.r9.u64 = ctx.r11.u64 | 32904;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,25
	ctx.r6.s64 = 25;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// ori r9,r11,32908
	ctx.r9.u64 = ctx.r11.u64 | 32908;
	// li r10,7
	ctx.r10.s64 = 7;
	// beq cr6,0x821fec88
	if (ctx.cr6.eq) goto loc_821FEC88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821FEC88:
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FEC8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FEC94"))) PPC_WEAK_FUNC(sub_821FEC94);
PPC_FUNC_IMPL(__imp__sub_821FEC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FEC98"))) PPC_WEAK_FUNC(sub_821FEC98);
PPC_FUNC_IMPL(__imp__sub_821FEC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FECA0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,-32648
	ctx.r27.s64 = ctx.r27.s64 + -32648;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FECC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fee80
	if (ctx.cr6.eq) goto loc_821FEE80;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-8532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fee80
	if (ctx.cr6.eq) goto loc_821FEE80;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821fee5c
	if (ctx.cr6.gt) goto loc_821FEE5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fed78
	// bdzf 4*cr6+eq,0x821fede0
	// bne cr6,0x821fee4c
	if (!ctx.cr6.eq) goto loc_821FEE4C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FED20;
	sub_821EA8B8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// ori r7,r9,32908
	ctx.r7.u64 = ctx.r9.u64 | 32908;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,-32576
	ctx.r6.s64 = ctx.r6.s64 + -32576;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r4,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r4.u32);
	// li r3,25
	ctx.r3.s64 = 25;
	// li r11,5
	ctx.r11.s64 = 5;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r5,32964
	ctx.r9.u64 = ctx.r5.u64 | 32964;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r7,300(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x821fee5c
	goto loc_821FEE5C;
loc_821FED78:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FED8C;
	sub_821EA8B8(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r7,r9,32908
	ctx.r7.u64 = ctx.r9.u64 | 32908;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r5.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r6,r6,-32576
	ctx.r6.s64 = ctx.r6.s64 + -32576;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r3,32964
	ctx.r9.u64 = ctx.r3.u64 | 32964;
	// stwx r4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x821fee5c
	goto loc_821FEE5C;
loc_821FEDE0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x821FEDF4;
	sub_821EA8B8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// ori r7,r9,32908
	ctx.r7.u64 = ctx.r9.u64 | 32908;
	// addi r3,r3,-32576
	ctx.r3.s64 = ctx.r3.s64 + -32576;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ori r8,r9,32956
	ctx.r8.u64 = ctx.r9.u64 | 32956;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x821fe540
	ctx.lr = 0x821FEE48;
	sub_821FE540(ctx, base);
	// b 0x821fee5c
	goto loc_821FEE5C;
loc_821FEE4C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,32900
	ctx.r9.u64 = ctx.r11.u64 | 32900;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_821FEE5C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fee7c
	if (ctx.cr6.eq) goto loc_821FEE7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FEE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FEE7C:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_821FEE80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FEE88"))) PPC_WEAK_FUNC(sub_821FEE88);
PPC_FUNC_IMPL(__imp__sub_821FEE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821FEE90;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x82098510
	ctx.lr = 0x821FEEA4;
	sub_82098510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ff1dc
	if (ctx.cr6.eq) goto loc_821FF1DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32908
	ctx.r9.u64 = ctx.r11.u64 | 32908;
	// ori r8,r10,32956
	ctx.r8.u64 = ctx.r10.u64 | 32956;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r30,r31,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x8215bd28
	ctx.lr = 0x821FEECC;
	sub_8215BD28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x821fef0c
	if (ctx.cr6.eq) goto loc_821FEF0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230c00
	ctx.lr = 0x821FEEE0;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821feef8
	if (ctx.cr6.eq) goto loc_821FEEF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x821FEEF0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fef0c
	if (ctx.cr6.eq) goto loc_821FEF0C;
loc_821FEEF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231530
	ctx.lr = 0x821FEF08;
	sub_82231530(ctx, base);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
loc_821FEF0C:
	// bl 0x82183078
	ctx.lr = 0x821FEF10;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821FEF1C;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bgt cr6,0x821ff1d4
	if (ctx.cr6.gt) goto loc_821FF1D4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821fef78
	// bdzf 4*cr6+eq,0x821fefb4
	// bdzf 4*cr6+eq,0x821ff1d4
	// bdzf 4*cr6+eq,0x821ff1d4
	// bdzf 4*cr6+eq,0x821ff024
	// bdzf 4*cr6+eq,0x821ff128
	// bdzf 4*cr6+eq,0x821ff160
	// bne cr6,0x821ff19c
	if (!ctx.cr6.eq) goto loc_821FF19C;
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
	ctx.lr = 0x821FEF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82085690
	ctx.lr = 0x821FEF68;
	sub_82085690(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FEF70;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FEF78:
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
	ctx.lr = 0x821FEF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82080000
	ctx.lr = 0x821FEF98;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// bl 0x8208f270
	ctx.lr = 0x821FEFA4;
	sub_8208F270(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FEFAC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FEFB4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,32960
	ctx.r8.u64 = ctx.r11.u64 | 32960;
	// ori r7,r9,32964
	ctx.r7.u64 = ctx.r9.u64 | 32964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r31,r31,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r30,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bctrl 
	ctx.lr = 0x821FEFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34800
	ctx.r3.u64 = ctx.r3.u64 | 34800;
	// bl 0x82080000
	ctx.lr = 0x821FEFFC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c7948
	ctx.lr = 0x821FF014;
	sub_823C7948(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF01C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FF024:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32960
	ctx.r9.u64 = ctx.r11.u64 | 32960;
	// ori r8,r10,32964
	ctx.r8.u64 = ctx.r10.u64 | 32964;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r27,r31,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x821ff054
	if (!ctx.cr6.eq) goto loc_821FF054;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
loc_821FF054:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32868
	ctx.r10.u64 = ctx.r11.u64 | 32868;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ff0dc
	if (ctx.cr6.eq) goto loc_821FF0DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822073f0
	ctx.lr = 0x821FF070;
	sub_822073F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ff0dc
	if (ctx.cr6.eq) goto loc_821FF0DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x822073f8
	ctx.lr = 0x821FF084;
	sub_822073F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ff090
	if (ctx.cr6.eq) goto loc_821FF090;
	// li r30,3
	ctx.r30.s64 = 3;
loc_821FF090:
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
	ctx.lr = 0x821FF0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34784
	ctx.r3.u64 = ctx.r3.u64 | 34784;
	// bl 0x82080000
	ctx.lr = 0x821FF0B4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823e8298
	ctx.lr = 0x821FF0CC;
	sub_823E8298(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF0D4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FF0DC:
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
	ctx.lr = 0x821FF0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34784
	ctx.r3.u64 = ctx.r3.u64 | 34784;
	// bl 0x82080000
	ctx.lr = 0x821FF100;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823e8298
	ctx.lr = 0x821FF118;
	sub_823E8298(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF120;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FF128:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,-484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821FF13C;
	sub_8215BD60(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// ori r8,r10,32900
	ctx.r8.u64 = ctx.r10.u64 | 32900;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// bl 0x821837d0
	ctx.lr = 0x821FF158;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FF160:
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
	ctx.lr = 0x821FF178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x821FF180;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// bl 0x82175748
	ctx.lr = 0x821FF18C;
	sub_82175748(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF194;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821FF19C:
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
	ctx.lr = 0x821FF1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x821FF1C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1d4
	if (ctx.cr6.eq) goto loc_821FF1D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821fe658
	ctx.lr = 0x821FF1D4;
	sub_821FE658(ctx, base);
loc_821FF1D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF1DC;
	sub_821837D0(ctx, base);
loc_821FF1DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821FF1E4"))) PPC_WEAK_FUNC(sub_821FF1E4);
PPC_FUNC_IMPL(__imp__sub_821FF1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF1E8"))) PPC_WEAK_FUNC(sub_821FF1E8);
PPC_FUNC_IMPL(__imp__sub_821FF1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821fe8d8
	ctx.lr = 0x821FF208;
	sub_821FE8D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ff224
	if (ctx.cr6.eq) goto loc_821FF224;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821FF220;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821FF224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF23C"))) PPC_WEAK_FUNC(sub_821FF23C);
PPC_FUNC_IMPL(__imp__sub_821FF23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF240"))) PPC_WEAK_FUNC(sub_821FF240);
PPC_FUNC_IMPL(__imp__sub_821FF240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821FF248;
	sub_82248750(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-11120
	ctx.r11.s64 = ctx.r11.s64 + -11120;
	// addi r10,r10,-11016
	ctx.r10.s64 = ctx.r10.s64 + -11016;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// lis r31,-32224
	ctx.r31.s64 = -2111832064;
	// lis r30,-32224
	ctx.r30.s64 = -2111832064;
	// addi r9,r9,-10736
	ctx.r9.s64 = ctx.r9.s64 + -10736;
	// addi r8,r8,-10488
	ctx.r8.s64 = ctx.r8.s64 + -10488;
	// addi r7,r7,-5624
	ctx.r7.s64 = ctx.r7.s64 + -5624;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r6,-12744
	ctx.r6.s64 = ctx.r6.s64 + -12744;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r5,r5,-12656
	ctx.r5.s64 = ctx.r5.s64 + -12656;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r4,r4,-10400
	ctx.r4.s64 = ctx.r4.s64 + -10400;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r11,r31,-10232
	ctx.r11.s64 = ctx.r31.s64 + -10232;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r10,r30,-5512
	ctx.r10.s64 = ctx.r30.s64 + -5512;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r29,-32224
	ctx.r29.s64 = -2111832064;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r28,-32224
	ctx.r28.s64 = -2111832064;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r27,-32224
	ctx.r27.s64 = -2111832064;
	// lis r26,-32224
	ctx.r26.s64 = -2111832064;
	// lis r25,-32224
	ctx.r25.s64 = -2111832064;
	// lis r24,-32224
	ctx.r24.s64 = -2111832064;
	// lis r23,-32224
	ctx.r23.s64 = -2111832064;
	// lis r22,-32224
	ctx.r22.s64 = -2111832064;
	// addi r9,r29,-9944
	ctx.r9.s64 = ctx.r29.s64 + -9944;
	// addi r8,r28,-12528
	ctx.r8.s64 = ctx.r28.s64 + -12528;
	// addi r7,r27,-9376
	ctx.r7.s64 = ctx.r27.s64 + -9376;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r6,r26,-12208
	ctx.r6.s64 = ctx.r26.s64 + -12208;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r5,r25,-8952
	ctx.r5.s64 = ctx.r25.s64 + -8952;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r4,r24,-8584
	ctx.r4.s64 = ctx.r24.s64 + -8584;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// addi r11,r23,-7984
	ctx.r11.s64 = ctx.r23.s64 + -7984;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// addi r10,r22,-11960
	ctx.r10.s64 = ctx.r22.s64 + -11960;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lis r21,-32224
	ctx.r21.s64 = -2111832064;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r20,-32224
	ctx.r20.s64 = -2111832064;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r19,-32224
	ctx.r19.s64 = -2111832064;
	// lis r18,-32224
	ctx.r18.s64 = -2111832064;
	// lis r17,-32224
	ctx.r17.s64 = -2111832064;
	// lis r16,-32224
	ctx.r16.s64 = -2111832064;
	// lis r15,-32224
	ctx.r15.s64 = -2111832064;
	// lis r14,-32224
	ctx.r14.s64 = -2111832064;
	// addi r9,r21,-11712
	ctx.r9.s64 = ctx.r21.s64 + -11712;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r8,r20,-7848
	ctx.r8.s64 = ctx.r20.s64 + -7848;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r7,r19,-11528
	ctx.r7.s64 = ctx.r19.s64 + -11528;
	// addi r6,r18,-7640
	ctx.r6.s64 = ctx.r18.s64 + -7640;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r5,r17,-4968
	ctx.r5.s64 = ctx.r17.s64 + -4968;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r4,r16,-7416
	ctx.r4.s64 = ctx.r16.s64 + -7416;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// addi r11,r15,-7192
	ctx.r11.s64 = ctx.r15.s64 + -7192;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// addi r10,r14,-4472
	ctx.r10.s64 = ctx.r14.s64 + -4472;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r9,r3,-4704
	ctx.r9.s64 = ctx.r3.s64 + -4704;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// ori r8,r8,32900
	ctx.r8.u64 = ctx.r8.u64 | 32900;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821FF3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FF3C0"))) PPC_WEAK_FUNC(sub_821FF3C0);
PPC_FUNC_IMPL(__imp__sub_821FF3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FF3C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820984c0
	ctx.lr = 0x821FF3DC;
	sub_820984C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x821FF3E0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821FF3EC;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820983d8
	ctx.lr = 0x821FF3F4;
	sub_820983D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff240
	ctx.lr = 0x821FF3FC;
	sub_821FF240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF404;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FF40C"))) PPC_WEAK_FUNC(sub_821FF40C);
PPC_FUNC_IMPL(__imp__sub_821FF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

