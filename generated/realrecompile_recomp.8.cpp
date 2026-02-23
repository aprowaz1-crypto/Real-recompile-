#include "realrecompile_init.h"

__attribute__((alias("__imp__sub_82154450"))) PPC_WEAK_FUNC(sub_82154450);
PPC_FUNC_IMPL(__imp__sub_82154450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82154458;
	__savegprlr_27(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,1092(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82154548
	if (ctx.cr0.eq) goto loc_82154548;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8214a400
	ctx.lr = 0x82154480;
	sub_8214A400(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82164060
	ctx.lr = 0x82154488;
	sub_82164060(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8215448C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821544A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x821544B0;
	sub_82248A40(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82154538
	if (!ctx.cr6.lt) goto loc_82154538;
	// bl 0x82228e00
	ctx.lr = 0x821544C0;
	sub_82228E00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154538
	if (ctx.cr0.eq) goto loc_82154538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154f08
	ctx.lr = 0x821544D0;
	sub_82154F08(ctx, base);
	// bl 0x82230c00
	ctx.lr = 0x821544D4;
	sub_82230C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154538
	if (ctx.cr0.eq) goto loc_82154538;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// lwz r3,-732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x821544F0;
	sub_82228DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1100
	ctx.r5.s64 = 1100;
	// bl 0x821847a8
	ctx.lr = 0x82154500;
	sub_821847A8(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82154504;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,1000
	ctx.r5.s64 = ctx.r4.s64 + 1000;
	// bl 0x8223a028
	ctx.lr = 0x82154528;
	sub_8223A028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -732);
	// bl 0x82228d78
	ctx.lr = 0x82154538;
	sub_82228D78(ctx, base);
loc_82154538:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82231b50
	ctx.lr = 0x82154548;
	sub_82231B50(ctx, base);
loc_82154548:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154550"))) PPC_WEAK_FUNC(sub_82154550);
PPC_FUNC_IMPL(__imp__sub_82154550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82154558;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,1092(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821547d0
	if (ctx.cr0.eq) goto loc_821547D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef480
	ctx.lr = 0x8215457C;
	sub_820EF480(ctx, base);
	// addi r5,r28,20
	ctx.r5.s64 = ctx.r28.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82232b60
	ctx.lr = 0x8215458C;
	sub_82232B60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,50(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 50);
	// bl 0x82231aa0
	ctx.lr = 0x82154598;
	sub_82231AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82232ac8
	ctx.lr = 0x821545A4;
	sub_82232AC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82233340
	ctx.lr = 0x821545AC;
	sub_82233340(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231a90
	ctx.lr = 0x821545B8;
	sub_82231A90(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82154748
	if (!ctx.cr6.gt) goto loc_82154748;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r25,r28,96
	ctx.r25.s64 = ctx.r28.s64 + 96;
	// addi r22,r11,-14444
	ctx.r22.s64 = ctx.r11.s64 + -14444;
loc_821545DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231e98
	ctx.lr = 0x821545EC;
	sub_82231E98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822327a8
	ctx.lr = 0x82154610;
	sub_822327A8(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82154614;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215462C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228080
	ctx.lr = 0x8215463C;
	sub_82228080(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82157048
	ctx.lr = 0x82154648;
	sub_82157048(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821546d4
	if (!ctx.cr6.eq) goto loc_821546D4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82228b00
	ctx.lr = 0x82154658;
	sub_82228B00(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228888
	ctx.lr = 0x82154668;
	sub_82228888(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82229288
	ctx.lr = 0x82154674;
	sub_82229288(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82229288
	ctx.lr = 0x82154684;
	sub_82229288(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82229288
	ctx.lr = 0x82154694;
	sub_82229288(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231bc8
	ctx.lr = 0x821546AC;
	sub_82231BC8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822318f0
	ctx.lr = 0x821546BC;
	sub_822318F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231eb8
	ctx.lr = 0x821546CC;
	sub_82231EB8(ctx, base);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// b 0x821546ec
	goto loc_821546EC;
loc_821546D4:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231bc8
	ctx.lr = 0x821546EC;
	sub_82231BC8(ctx, base);
loc_821546EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227fe8
	ctx.lr = 0x821546F8;
	sub_82227FE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231b98
	ctx.lr = 0x82154708;
	sub_82231B98(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,10
	ctx.r5.s64 = 10;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x8215472c
	if (!ctx.cr6.eq) goto loc_8215472C;
	// bl 0x822318f0
	ctx.lr = 0x82154724;
	sub_822318F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82154734
	goto loc_82154734;
loc_8215472C:
	// bl 0x822318f0
	ctx.lr = 0x82154730;
	sub_822318F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82154734:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821545dc
	if (ctx.cr6.lt) goto loc_821545DC;
loc_82154748:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-8540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// bl 0x820c07f8
	ctx.lr = 0x8215475C;
	sub_820C07F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82231b30
	ctx.lr = 0x8215476C;
	sub_82231B30(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r4,r30,r11
	ctx.r4.s32 = ctx.r11.s32 ? ctx.r30.s32 / ctx.r11.s32 : 0;
	// bl 0x82231b38
	ctx.lr = 0x8215477C;
	sub_82231B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232a10
	ctx.lr = 0x82154784;
	sub_82232A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232a58
	ctx.lr = 0x8215478C;
	sub_82232A58(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821547bc
	if (!ctx.cr6.gt) goto loc_821547BC;
loc_8215479C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82154450
	ctx.lr = 0x821547AC;
	sub_82154450(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8215479c
	if (ctx.cr6.lt) goto loc_8215479C;
loc_821547BC:
	// bl 0x8215bd08
	ctx.lr = 0x821547C0;
	sub_8215BD08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232530
	ctx.lr = 0x821547D0;
	sub_82232530(ctx, base);
loc_821547D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487b8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821547D8"))) PPC_WEAK_FUNC(sub_821547D8);
PPC_FUNC_IMPL(__imp__sub_821547D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821543e8
	ctx.lr = 0x821547F8;
	sub_821543E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215480c
	if (ctx.cr0.eq) goto loc_8215480C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215480C;
	sub_82183E40(ctx, base);
loc_8215480C:
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

__attribute__((alias("__imp__sub_82154828"))) PPC_WEAK_FUNC(sub_82154828);
PPC_FUNC_IMPL(__imp__sub_82154828) {
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
	// bl 0x821542b0
	ctx.lr = 0x82154840;
	sub_821542B0(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154188
	ctx.lr = 0x8215484C;
	sub_82154188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154550
	ctx.lr = 0x82154854;
	sub_82154550(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82154858;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8215be98
	ctx.lr = 0x82154860;
	sub_8215BE98(ctx, base);
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

__attribute__((alias("__imp__sub_82154878"))) PPC_WEAK_FUNC(sub_82154878);
PPC_FUNC_IMPL(__imp__sub_82154878) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,397
	ctx.r4.s64 = 397;
	// b 0x8210a9b0
	sub_8210A9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821548A4"))) PPC_WEAK_FUNC(sub_821548A4);
PPC_FUNC_IMPL(__imp__sub_821548A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821548A8"))) PPC_WEAK_FUNC(sub_821548A8);
PPC_FUNC_IMPL(__imp__sub_821548A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-25780
	ctx.r11.s64 = ctx.r11.s64 + -25780;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x821548D4;
	sub_821857F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821548e8
	if (ctx.cr0.eq) goto loc_821548E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821548E8;
	sub_82183E40(ctx, base);
loc_821548E8:
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

__attribute__((alias("__imp__sub_82154908"))) PPC_WEAK_FUNC(sub_82154908);
PPC_FUNC_IMPL(__imp__sub_82154908) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-25796
	ctx.r10.s64 = ctx.r10.s64 + -25796;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106eb0
	ctx.lr = 0x82154930;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154948
	if (ctx.cr0.eq) goto loc_82154948;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215494c
	if (!ctx.cr6.eq) goto loc_8215494C;
loc_82154948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215494C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154960"))) PPC_WEAK_FUNC(sub_82154960);
PPC_FUNC_IMPL(__imp__sub_82154960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82154968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r10,-25796
	ctx.r29.s64 = ctx.r10.s64 + -25796;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82154984:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821549a8
	if (ctx.cr6.lt) goto loc_821549A8;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r7.u32);
loc_821549A8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82154984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154984;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821549fc
	if (ctx.cr6.eq) goto loc_821549FC;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82106eb0
	ctx.lr = 0x821549CC;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821549d8
	if (ctx.cr0.eq) goto loc_821549D8;
	// bl 0x821d38e8
	ctx.lr = 0x821549D8;
	sub_821D38E8(ctx, base);
loc_821549D8:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821549fc
	if (ctx.cr6.lt) goto loc_821549FC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
loc_821549FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154A08"))) PPC_WEAK_FUNC(sub_82154A08);
PPC_FUNC_IMPL(__imp__sub_82154A08) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82154A24;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-25780
	ctx.r11.s64 = ctx.r11.s64 + -25780;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r11,r10,34463
	ctx.r11.u64 = ctx.r10.u64 | 34463;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r8,r8,41156
	ctx.r8.u64 = ctx.r8.u64 | 41156;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,-792(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
	// ori r9,r7,41412
	ctx.r9.u64 = ctx.r7.u64 | 41412;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82154960
	ctx.lr = 0x82154A90;
	sub_82154960(ctx, base);
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

__attribute__((alias("__imp__sub_82154AA8"))) PPC_WEAK_FUNC(sub_82154AA8);
PPC_FUNC_IMPL(__imp__sub_82154AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,41156
	ctx.r8.u64 = ctx.r11.u64 | 41156;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r9,41412
	ctx.r9.u64 = ctx.r9.u64 | 41412;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x82154960
	sub_82154960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154AF0"))) PPC_WEAK_FUNC(sub_82154AF0);
PPC_FUNC_IMPL(__imp__sub_82154AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154AF8"))) PPC_WEAK_FUNC(sub_82154AF8);
PPC_FUNC_IMPL(__imp__sub_82154AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82154B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,41156
	ctx.r10.u64 = ctx.r10.u64 | 41156;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r9,r9,41412
	ctx.r9.u64 = ctx.r9.u64 | 41412;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,41176
	ctx.r10.u64 = ctx.r10.u64 | 41176;
	// ori r9,r9,41196
	ctx.r9.u64 = ctx.r9.u64 | 41196;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,41432
	ctx.r10.u64 = ctx.r10.u64 | 41432;
	// ori r9,r9,41452
	ctx.r9.u64 = ctx.r9.u64 | 41452;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154BB8"))) PPC_WEAK_FUNC(sub_82154BB8);
PPC_FUNC_IMPL(__imp__sub_82154BB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82154bfc
	if (!ctx.cr6.eq) goto loc_82154BFC;
	// bl 0x82154908
	ctx.lr = 0x82154BDC;
	sub_82154908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154bfc
	if (ctx.cr0.eq) goto loc_82154BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82154af8
	ctx.lr = 0x82154BF0;
	sub_82154AF8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154960
	ctx.lr = 0x82154BFC;
	sub_82154960(ctx, base);
loc_82154BFC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82154c24
	if (!ctx.cr6.eq) goto loc_82154C24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154908
	ctx.lr = 0x82154C10;
	sub_82154908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154c24
	if (ctx.cr0.eq) goto loc_82154C24;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154960
	ctx.lr = 0x82154C24;
	sub_82154960(ctx, base);
loc_82154C24:
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

__attribute__((alias("__imp__sub_82154C38"))) PPC_WEAK_FUNC(sub_82154C38);
PPC_FUNC_IMPL(__imp__sub_82154C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82154c84
	if (ctx.cr6.eq) goto loc_82154C84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82154c84
	if (ctx.cr6.eq) goto loc_82154C84;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,41156
	ctx.r8.u64 = ctx.r11.u64 | 41156;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r9,41412
	ctx.r9.u64 = ctx.r9.u64 | 41412;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x82154960
	sub_82154960(ctx, base);
	return;
loc_82154C84:
	// b 0x82154af8
	sub_82154AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154C88"))) PPC_WEAK_FUNC(sub_82154C88);
PPC_FUNC_IMPL(__imp__sub_82154C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154C90"))) PPC_WEAK_FUNC(sub_82154C90);
PPC_FUNC_IMPL(__imp__sub_82154C90) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221350
	ctx.lr = 0x82154CA8;
	sub_82221350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154cb8
	if (ctx.cr0.eq) goto loc_82154CB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82154cc4
	goto loc_82154CC4;
loc_82154CB8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x82154CC4;
	sub_82220D10(ctx, base);
loc_82154CC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154CD8"))) PPC_WEAK_FUNC(sub_82154CD8);
PPC_FUNC_IMPL(__imp__sub_82154CD8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82227aa0
	ctx.lr = 0x82154CF0;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154d10
	if (ctx.cr0.eq) goto loc_82154D10;
	// bl 0x82227aa0
	ctx.lr = 0x82154CFC;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82154D10:
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

__attribute__((alias("__imp__sub_82154D28"))) PPC_WEAK_FUNC(sub_82154D28);
PPC_FUNC_IMPL(__imp__sub_82154D28) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82154D40;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154d60
	if (ctx.cr0.eq) goto loc_82154D60;
	// bl 0x82227aa0
	ctx.lr = 0x82154D4C;
	sub_82227AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822283c0
	ctx.lr = 0x82154D54;
	sub_822283C0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82154D60:
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

__attribute__((alias("__imp__sub_82154D78"))) PPC_WEAK_FUNC(sub_82154D78);
PPC_FUNC_IMPL(__imp__sub_82154D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82227aa0
	ctx.lr = 0x82154D98;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154db0
	if (ctx.cr0.eq) goto loc_82154DB0;
	// bl 0x82227aa0
	ctx.lr = 0x82154DA4;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82228810
	ctx.lr = 0x82154DAC;
	sub_82228810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82154DB0:
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

__attribute__((alias("__imp__sub_82154DD0"))) PPC_WEAK_FUNC(sub_82154DD0);
PPC_FUNC_IMPL(__imp__sub_82154DD0) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82154DE8;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154e00
	if (ctx.cr0.eq) goto loc_82154E00;
	// bl 0x82227aa0
	ctx.lr = 0x82154DF4;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228018
	ctx.lr = 0x82154DFC;
	sub_82228018(ctx, base);
	// b 0x82154e10
	goto loc_82154E10;
loc_82154E00:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82154E0C;
	sub_822AA648(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82154E10:
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

__attribute__((alias("__imp__sub_82154E28"))) PPC_WEAK_FUNC(sub_82154E28);
PPC_FUNC_IMPL(__imp__sub_82154E28) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82154E38;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154e4c
	if (ctx.cr0.eq) goto loc_82154E4C;
	// bl 0x82227aa0
	ctx.lr = 0x82154E44;
	sub_82227AA0(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82154e50
	goto loc_82154E50;
loc_82154E4C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82154E50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154E60"))) PPC_WEAK_FUNC(sub_82154E60);
PPC_FUNC_IMPL(__imp__sub_82154E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82227aa0
	ctx.lr = 0x82154E80;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154e98
	if (ctx.cr0.eq) goto loc_82154E98;
	// bl 0x82227aa0
	ctx.lr = 0x82154E8C;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227f98
	ctx.lr = 0x82154E94;
	sub_82227F98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82154E98:
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

__attribute__((alias("__imp__sub_82154EB8"))) PPC_WEAK_FUNC(sub_82154EB8);
PPC_FUNC_IMPL(__imp__sub_82154EB8) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82154ED0;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154ee8
	if (ctx.cr0.eq) goto loc_82154EE8;
	// bl 0x82227aa0
	ctx.lr = 0x82154EDC;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227fe8
	ctx.lr = 0x82154EE4;
	sub_82227FE8(ctx, base);
	// b 0x82154ef0
	goto loc_82154EF0;
loc_82154EE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,4393
	ctx.r3.s64 = ctx.r11.s64 + 4393;
loc_82154EF0:
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

__attribute__((alias("__imp__sub_82154F08"))) PPC_WEAK_FUNC(sub_82154F08);
PPC_FUNC_IMPL(__imp__sub_82154F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,512
	ctx.r31.s64 = 512;
	// bl 0x82227aa0
	ctx.lr = 0x82154F28;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154f40
	if (ctx.cr0.eq) goto loc_82154F40;
	// bl 0x82227aa0
	ctx.lr = 0x82154F34;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82228080
	ctx.lr = 0x82154F3C;
	sub_82228080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82154F40:
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

__attribute__((alias("__imp__sub_82154F60"))) PPC_WEAK_FUNC(sub_82154F60);
PPC_FUNC_IMPL(__imp__sub_82154F60) {
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
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// bl 0x8215bd08
	ctx.lr = 0x82154F74;
	sub_8215BD08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82256348
	ctx.lr = 0x82154F8C;
	sub_82256348(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154FB0"))) PPC_WEAK_FUNC(sub_82154FB0);
PPC_FUNC_IMPL(__imp__sub_82154FB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa98
	ctx.lr = 0x82154FD0;
	sub_8215AA98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aad8
	ctx.lr = 0x82154FD8;
	sub_8215AAD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82154ff0
	if (ctx.cr6.eq) goto loc_82154FF0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82155018
	if (!ctx.cr6.eq) goto loc_82155018;
loc_82154FF0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215501c
	if (ctx.cr6.eq) goto loc_8215501C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215501c
	if (ctx.cr6.eq) goto loc_8215501C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82154f60
	ctx.lr = 0x82155010;
	sub_82154F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215501c
	if (ctx.cr0.eq) goto loc_8215501C;
loc_82155018:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8215501C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa88
	ctx.lr = 0x82155024;
	sub_8215AA88(ctx, base);
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

__attribute__((alias("__imp__sub_82155040"))) PPC_WEAK_FUNC(sub_82155040);
PPC_FUNC_IMPL(__imp__sub_82155040) {
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
	// bl 0x8215bd08
	ctx.lr = 0x82155058;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e54b0
	ctx.lr = 0x82155070;
	sub_820E54B0(ctx, base);
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

__attribute__((alias("__imp__sub_82155088"))) PPC_WEAK_FUNC(sub_82155088);
PPC_FUNC_IMPL(__imp__sub_82155088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// b 0x820e5218
	sub_820E5218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155098"))) PPC_WEAK_FUNC(sub_82155098);
PPC_FUNC_IMPL(__imp__sub_82155098) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e55e0
	ctx.lr = 0x821550BC;
	sub_820E55E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821550c8
	if (ctx.cr0.eq) goto loc_821550C8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_821550C8:
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

__attribute__((alias("__imp__sub_821550E0"))) PPC_WEAK_FUNC(sub_821550E0);
PPC_FUNC_IMPL(__imp__sub_821550E0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5600
	ctx.lr = 0x82155104;
	sub_820E5600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155110
	if (ctx.cr0.eq) goto loc_82155110;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82155110:
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

__attribute__((alias("__imp__sub_82155128"))) PPC_WEAK_FUNC(sub_82155128);
PPC_FUNC_IMPL(__imp__sub_82155128) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8215bd08
	ctx.lr = 0x82155140;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82155144;
	sub_8216CDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155160
	if (ctx.cr0.eq) goto loc_82155160;
	// bl 0x82163ee8
	ctx.lr = 0x82155150;
	sub_82163EE8(ctx, base);
	// lwz r11,3524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82155160
	if (ctx.cr6.eq) goto loc_82155160;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82155160:
	// bl 0x8215bd60
	ctx.lr = 0x82155164;
	sub_8215BD60(ctx, base);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82155180"))) PPC_WEAK_FUNC(sub_82155180);
PPC_FUNC_IMPL(__imp__sub_82155180) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8215aa98
	ctx.lr = 0x8215519C;
	sub_8215AA98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aad8
	ctx.lr = 0x821551A4;
	sub_8215AAD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821551bc
	if (ctx.cr6.eq) goto loc_821551BC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821551c0
	if (!ctx.cr6.eq) goto loc_821551C0;
loc_821551BC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821551C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa88
	ctx.lr = 0x821551C8;
	sub_8215AA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821551E0"))) PPC_WEAK_FUNC(sub_821551E0);
PPC_FUNC_IMPL(__imp__sub_821551E0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8215aa98
	ctx.lr = 0x821551FC;
	sub_8215AA98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aad8
	ctx.lr = 0x82155204;
	sub_8215AAD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215521c
	if (ctx.cr6.eq) goto loc_8215521C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82155220
	if (!ctx.cr6.eq) goto loc_82155220;
loc_8215521C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82155220:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa88
	ctx.lr = 0x82155228;
	sub_8215AA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82155240"))) PPC_WEAK_FUNC(sub_82155240);
PPC_FUNC_IMPL(__imp__sub_82155240) {
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
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-25600
	ctx.r11.s64 = ctx.r11.s64 + -25600;
	// addi r10,r10,-25736
	ctx.r10.s64 = ctx.r10.s64 + -25736;
	// addi r9,r9,-25748
	ctx.r9.s64 = ctx.r9.s64 + -25748;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x82155298
	if (ctx.cr6.eq) goto loc_82155298;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82155298:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x82228e00
	ctx.lr = 0x821552A4;
	sub_82228E00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821552b0
	if (ctx.cr0.eq) goto loc_821552B0;
	// bl 0x82228ec0
	ctx.lr = 0x821552B0;
	sub_82228EC0(ctx, base);
loc_821552B0:
	// addi r3,r31,1168
	ctx.r3.s64 = ctx.r31.s64 + 1168;
	// bl 0x821f4b38
	ctx.lr = 0x821552B8;
	sub_821F4B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x821552C0;
	sub_8214B2A8(ctx, base);
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

__attribute__((alias("__imp__sub_821552D8"))) PPC_WEAK_FUNC(sub_821552D8);
PPC_FUNC_IMPL(__imp__sub_821552D8) {
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
	// bl 0x8214be60
	ctx.lr = 0x821552F0;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x82155300;
	sub_82109E00(ctx, base);
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

__attribute__((alias("__imp__sub_82155318"))) PPC_WEAK_FUNC(sub_82155318);
PPC_FUNC_IMPL(__imp__sub_82155318) {
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
	// bl 0x8214c0a8
	ctx.lr = 0x82155330;
	sub_8214C0A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82155360"))) PPC_WEAK_FUNC(sub_82155360);
PPC_FUNC_IMPL(__imp__sub_82155360) {
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
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155398
	if (ctx.cr0.eq) goto loc_82155398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82155398;
	sub_8214D630(ctx, base);
loc_82155398:
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

__attribute__((alias("__imp__sub_821553B0"))) PPC_WEAK_FUNC(sub_821553B0);
PPC_FUNC_IMPL(__imp__sub_821553B0) {
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
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82155404
	if (ctx.cr6.eq) goto loc_82155404;
	// bl 0x8215ad20
	ctx.lr = 0x821553D4;
	sub_8215AD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// beq 0x8215541c
	if (ctx.cr0.eq) goto loc_8215541C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821553fc
	if (ctx.cr6.eq) goto loc_821553FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821553FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821553FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
loc_82155404:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82155408:
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
loc_8215541C:
	// bl 0x8215b498
	ctx.lr = 0x82155420;
	sub_8215B498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82155408
	goto loc_82155408;
}

__attribute__((alias("__imp__sub_8215545C"))) PPC_WEAK_FUNC(sub_8215545C);
PPC_FUNC_IMPL(__imp__sub_8215545C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b980
	sub_8214B980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155460"))) PPC_WEAK_FUNC(sub_82155460);
PPC_FUNC_IMPL(__imp__sub_82155460) {
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
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215549c
	if (ctx.cr6.eq) goto loc_8215549C;
	// bl 0x8215b498
	ctx.lr = 0x82155484;
	sub_8215B498(ctx, base);
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215ad20
	ctx.lr = 0x8215548C;
	sub_8215AD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215549c
	if (ctx.cr0.eq) goto loc_8215549C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
loc_8215549C:
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

__attribute__((alias("__imp__sub_821554B0"))) PPC_WEAK_FUNC(sub_821554B0);
PPC_FUNC_IMPL(__imp__sub_821554B0) {
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
	// lwz r11,1168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1168
	ctx.r3.s64 = ctx.r3.s64 + 1168;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821554D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821554e8
	if (ctx.cr0.eq) goto loc_821554E8;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
loc_821554E8:
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

__attribute__((alias("__imp__sub_82155500"))) PPC_WEAK_FUNC(sub_82155500);
PPC_FUNC_IMPL(__imp__sub_82155500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x821556a0
	sub_821556A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155508"))) PPC_WEAK_FUNC(sub_82155508);
PPC_FUNC_IMPL(__imp__sub_82155508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821556a0
	sub_821556A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155510"))) PPC_WEAK_FUNC(sub_82155510);
PPC_FUNC_IMPL(__imp__sub_82155510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82155534;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82155538;
	sub_8216CDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155544
	if (ctx.cr0.eq) goto loc_82155544;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82155544:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// bl 0x821ec880
	ctx.lr = 0x8215555C;
	sub_821EC880(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155578"))) PPC_WEAK_FUNC(sub_82155578);
PPC_FUNC_IMPL(__imp__sub_82155578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-25768
	ctx.r4.s64 = ctx.r10.s64 + -25768;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82163e18
	ctx.lr = 0x821555AC;
	sub_82163E18(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82163eb0
	ctx.lr = 0x821555B8;
	sub_82163EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821555cc
	if (ctx.cr0.eq) goto loc_821555CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_821555CC:
	// bl 0x82163ee8
	ctx.lr = 0x821555D0;
	sub_82163EE8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821555F0"))) PPC_WEAK_FUNC(sub_821555F0);
PPC_FUNC_IMPL(__imp__sub_821555F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821555F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82155614;
	sub_8214B730(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25600
	ctx.r10.s64 = ctx.r10.s64 + -25600;
	// addi r9,r9,-25736
	ctx.r9.s64 = ctx.r9.s64 + -25736;
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// addi r8,r8,-25748
	ctx.r8.s64 = ctx.r8.s64 + -25748;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r3,r31,1168
	ctx.r3.s64 = ctx.r31.s64 + 1168;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x821f4a48
	ctx.lr = 0x82155654;
	sub_821F4A48(ctx, base);
	// stw r30,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x8215565C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82155664;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155670;
	sub_821837D0(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82155674;
	sub_82227AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// bl 0x8214b948
	ctx.lr = 0x8215568C;
	sub_8214B948(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155694;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821556A0"))) PPC_WEAK_FUNC(sub_821556A0);
PPC_FUNC_IMPL(__imp__sub_821556A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82155240
	ctx.lr = 0x821556C0;
	sub_82155240(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821556d4
	if (ctx.cr0.eq) goto loc_821556D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821556D4;
	sub_82183E40(ctx, base);
loc_821556D4:
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

__attribute__((alias("__imp__sub_821556F0"))) PPC_WEAK_FUNC(sub_821556F0);
PPC_FUNC_IMPL(__imp__sub_821556F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821556F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,-748(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// lwz r28,-744(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,-740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// bl 0x82220d10
	ctx.lr = 0x82155720;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82155778
	if (!ctx.cr0.eq) goto loc_82155778;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82221b38
	ctx.lr = 0x82155730;
	sub_82221B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155748
	if (ctx.cr0.eq) goto loc_82155748;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82225e08
	ctx.lr = 0x82155740;
	sub_82225E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155778
	if (ctx.cr0.eq) goto loc_82155778;
loc_82155748:
	// lwz r11,-740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,30234
	ctx.r4.s64 = 30234;
	// lwz r11,1816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82155770
	if (!ctx.cr6.eq) goto loc_82155770;
	// li r4,30235
	ctx.r4.s64 = 30235;
loc_82155770:
	// bctrl 
	ctx.lr = 0x82155774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821557cc
	goto loc_821557CC;
loc_82155778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82220d10
	ctx.lr = 0x82155780;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155794
	if (ctx.cr0.eq) goto loc_82155794;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8215578C:
	// stw r11,1160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1160, ctx.r11.u32);
	// b 0x821557cc
	goto loc_821557CC;
loc_82155794:
	// lwz r11,1912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821557b8
	if (ctx.cr6.eq) goto loc_821557B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30548
	ctx.r4.s64 = 30548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8214c2a0
	ctx.lr = 0x821557B0;
	sub_8214C2A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8215578c
	goto loc_8215578C;
loc_821557B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,768(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 768);
	// li r4,16009
	ctx.r4.s64 = 16009;
	// stw r11,1160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1160, ctx.r11.u32);
	// bl 0x82154c38
	ctx.lr = 0x821557CC;
	sub_82154C38(ctx, base);
loc_821557CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821557D8"))) PPC_WEAK_FUNC(sub_821557D8);
PPC_FUNC_IMPL(__imp__sub_821557D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821557E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x821557EC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821557F4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155800;
	sub_821837D0(ctx, base);
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x82080000
	ctx.lr = 0x82155808;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215581c
	if (ctx.cr0.eq) goto loc_8215581C;
	// lwz r4,1132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// bl 0x8215ae30
	ctx.lr = 0x82155818;
	sub_8215AE30(ctx, base);
	// b 0x82155820
	goto loc_82155820;
loc_8215581C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82155820:
	// stw r3,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r3.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82155840
	if (ctx.cr6.eq) goto loc_82155840;
	// bl 0x8215ad00
	ctx.lr = 0x82155834;
	sub_8215AD00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155840
	if (ctx.cr0.eq) goto loc_82155840;
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
loc_82155840:
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215584C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155858"))) PPC_WEAK_FUNC(sub_82155858);
PPC_FUNC_IMPL(__imp__sub_82155858) {
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
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x82155878;
	sub_82221B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215589c
	if (ctx.cr0.eq) goto loc_8215589C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0a8
	ctx.lr = 0x8215588C;
	sub_8214B0A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821558ac
	if (ctx.cr0.eq) goto loc_821558AC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821558a8
	goto loc_821558A8;
loc_8215589C:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x821558A4;
	sub_82154AA8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_821558A8:
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
loc_821558AC:
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

__attribute__((alias("__imp__sub_821558C0"))) PPC_WEAK_FUNC(sub_821558C0);
PPC_FUNC_IMPL(__imp__sub_821558C0) {
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
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82155904
	if (ctx.cr6.eq) goto loc_82155904;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215590c
	if (!ctx.cr6.eq) goto loc_8215590C;
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x821558F8;
	sub_82154AA8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// b 0x8215590c
	goto loc_8215590C;
loc_82155904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x8215590C;
	sub_8214D7B0(ctx, base);
loc_8215590C:
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

__attribute__((alias("__imp__sub_82155920"))) PPC_WEAK_FUNC(sub_82155920);
PPC_FUNC_IMPL(__imp__sub_82155920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82155928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82155578
	ctx.lr = 0x82155938;
	sub_82155578(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82155948;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8215594C;
	sub_8216CDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82155964
	if (!ctx.cr0.eq) goto loc_82155964;
	// bl 0x82155510
	ctx.lr = 0x8215595C;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// b 0x82155980
	goto loc_82155980;
loc_82155964:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82155980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155988"))) PPC_WEAK_FUNC(sub_82155988);
PPC_FUNC_IMPL(__imp__sub_82155988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// bl 0x82163ee8
	ctx.lr = 0x821559AC;
	sub_82163EE8(ctx, base);
	// lbz r11,2367(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82155a2c
	if (ctx.cr0.eq) goto loc_82155A2C;
	// bl 0x82163de0
	ctx.lr = 0x821559BC;
	sub_82163DE0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821559d8
	if (!ctx.cr6.eq) goto loc_821559D8;
	// bl 0x82163ee8
	ctx.lr = 0x821559CC;
	sub_82163EE8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155a2c
	if (ctx.cr6.eq) goto loc_82155A2C;
loc_821559D8:
	// bl 0x8215bd08
	ctx.lr = 0x821559DC;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821559E0;
	sub_8216CDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82155a30
	if (ctx.cr0.eq) goto loc_82155A30;
	// bl 0x82155578
	ctx.lr = 0x821559F0;
	sub_82155578(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82163ee8
	ctx.lr = 0x82155A00;
	sub_82163EE8(ctx, base);
	// lbz r11,2367(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq 0x82155a24
	if (ctx.cr0.eq) goto loc_82155A24;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82155A18:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82155a3c
	goto loc_82155A3C;
loc_82155A24:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82155a18
	goto loc_82155A18;
loc_82155A2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82155A30:
	// bl 0x82155510
	ctx.lr = 0x82155A34;
	sub_82155510(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82155A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155A58"))) PPC_WEAK_FUNC(sub_82155A58);
PPC_FUNC_IMPL(__imp__sub_82155A58) {
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
	ctx.lr = 0x82155A70;
	sub_82163EE8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// lbz r11,2367(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r31,1168
	ctx.r3.s64 = ctx.r31.s64 + 1168;
	// beq 0x82155a90
	if (ctx.cr0.eq) goto loc_82155A90;
	// bl 0x82155988
	ctx.lr = 0x82155A8C;
	sub_82155988(ctx, base);
	// b 0x82155a98
	goto loc_82155A98;
loc_82155A90:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82155920
	ctx.lr = 0x82155A98;
	sub_82155920(ctx, base);
loc_82155A98:
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

__attribute__((alias("__imp__sub_82155AB0"))) PPC_WEAK_FUNC(sub_82155AB0);
PPC_FUNC_IMPL(__imp__sub_82155AB0) {
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
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82155bb8
	if (ctx.cr6.gt) goto loc_82155BB8;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-25760
	ctx.r12.s64 = ctx.r12.s64 + -25760;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,23292
	ctx.r12.s64 = ctx.r12.s64 + 23292;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82155AFC;
	case 1:
		goto loc_82155B08;
	case 2:
		goto loc_82155B20;
	case 3:
		goto loc_82155B2C;
	case 4:
		goto loc_82155B38;
	case 5:
		goto loc_82155B50;
	case 6:
		goto loc_82155B74;
	case 7:
		goto loc_82155B80;
	case 8:
		goto loc_82155B8C;
	case 9:
		goto loc_82155B98;
	case 10:
		goto loc_82155BA4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82155AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821556f0
	ctx.lr = 0x82155B04;
	sub_821556F0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B08:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r4,16009
	ctx.r4.s64 = 16009;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82154c38
	ctx.lr = 0x82155B1C;
	sub_82154C38(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821557d8
	ctx.lr = 0x82155B28;
	sub_821557D8(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155460
	ctx.lr = 0x82155B34;
	sub_82155460(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B38:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214afb8
	ctx.lr = 0x82155B44;
	sub_8214AFB8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
loc_82155B48:
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B50:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x82155bb8
	if (ctx.cr6.lt) goto loc_82155BB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82155bb8
	if (ctx.cr6.gt) goto loc_82155BB8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82155b48
	goto loc_82155B48;
loc_82155B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155858
	ctx.lr = 0x82155B7C;
	sub_82155858(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821558c0
	ctx.lr = 0x82155B88;
	sub_821558C0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155a58
	ctx.lr = 0x82155B94;
	sub_82155A58(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821554b0
	ctx.lr = 0x82155BA0;
	sub_821554B0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
loc_82155BA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82155BB8:
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

__attribute__((alias("__imp__sub_82155BD0"))) PPC_WEAK_FUNC(sub_82155BD0);
PPC_FUNC_IMPL(__imp__sub_82155BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82155BE8;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82155BF0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155BFC;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82155C04;
	sub_821EBB58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82155C1C;
	sub_8215BD08(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82155c68
	if (ctx.cr6.eq) goto loc_82155C68;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82155c6c
	goto loc_82155C6C;
loc_82155C68:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_82155C6C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155C7C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155C88"))) PPC_WEAK_FUNC(sub_82155C88);
PPC_FUNC_IMPL(__imp__sub_82155C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82155CA0;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82155CA8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155CB4;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82155CBC;
	sub_821EBB58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82155CD0;
	sub_8215BD08(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82155d08
	if (ctx.cr6.eq) goto loc_82155D08;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82155d0c
	goto loc_82155D0C;
loc_82155D08:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_82155D0C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155D1C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155D28"))) PPC_WEAK_FUNC(sub_82155D28);
PPC_FUNC_IMPL(__imp__sub_82155D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155D30;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82155D40;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82155D48;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155D54;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82155D5C;
	sub_821EBB58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82155D74;
	sub_8215BD08(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82155da4
	if (ctx.cr6.eq) goto loc_82155DA4;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82155da8
	goto loc_82155DA8;
loc_82155DA4:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_82155DA8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82155DB8;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155DC0"))) PPC_WEAK_FUNC(sub_82155DC0);
PPC_FUNC_IMPL(__imp__sub_82155DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155DE8"))) PPC_WEAK_FUNC(sub_82155DE8);
PPC_FUNC_IMPL(__imp__sub_82155DE8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155e1c
	if (ctx.cr6.eq) goto loc_82155E1C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ed270
	ctx.lr = 0x82155E10;
	sub_821ED270(ctx, base);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82155E1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155E30"))) PPC_WEAK_FUNC(sub_82155E30);
PPC_FUNC_IMPL(__imp__sub_82155E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82155de8
	ctx.lr = 0x82155E50;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155e70
	if (ctx.cr0.eq) goto loc_82155E70;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ed270
	ctx.lr = 0x82155E64;
	sub_821ED270(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82155E70:
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

__attribute__((alias("__imp__sub_82155E90"))) PPC_WEAK_FUNC(sub_82155E90);
PPC_FUNC_IMPL(__imp__sub_82155E90) {
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
	// li r31,-2
	ctx.r31.s64 = -2;
	// bl 0x82155de8
	ctx.lr = 0x82155EA8;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155ec0
	if (ctx.cr0.eq) goto loc_82155EC0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ed270
	ctx.lr = 0x82155EBC;
	sub_821ED270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82155EC0:
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

__attribute__((alias("__imp__sub_82155ED8"))) PPC_WEAK_FUNC(sub_82155ED8);
PPC_FUNC_IMPL(__imp__sub_82155ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// b 0x821ec7d8
	sub_821EC7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155EE8"))) PPC_WEAK_FUNC(sub_82155EE8);
PPC_FUNC_IMPL(__imp__sub_82155EE8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82229288
	sub_82229288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155EF0"))) PPC_WEAK_FUNC(sub_82155EF0);
PPC_FUNC_IMPL(__imp__sub_82155EF0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82229288
	sub_82229288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155EF8"))) PPC_WEAK_FUNC(sub_82155EF8);
PPC_FUNC_IMPL(__imp__sub_82155EF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82229288
	sub_82229288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155F00"))) PPC_WEAK_FUNC(sub_82155F00);
PPC_FUNC_IMPL(__imp__sub_82155F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x82155F24;
	sub_82229288(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82229278
	ctx.lr = 0x82155F40;
	sub_82229278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155F58"))) PPC_WEAK_FUNC(sub_82155F58);
PPC_FUNC_IMPL(__imp__sub_82155F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x82155F7C;
	sub_82229288(ctx, base);
	// add. r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x82155f8c
	if (!ctx.cr0.lt) goto loc_82155F8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82155fa0
	goto loc_82155FA0;
loc_82155F8C:
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r11,r11,38527
	ctx.r11.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82155fa0
	if (!ctx.cr6.gt) goto loc_82155FA0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82155FA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x82155FAC;
	sub_82229278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155FC8"))) PPC_WEAK_FUNC(sub_82155FC8);
PPC_FUNC_IMPL(__imp__sub_82155FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x82155FEC;
	sub_82229288(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82229278
	ctx.lr = 0x82156008;
	sub_82229278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156020"))) PPC_WEAK_FUNC(sub_82156020);
PPC_FUNC_IMPL(__imp__sub_82156020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x82156044;
	sub_82229288(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82229278
	ctx.lr = 0x82156060;
	sub_82229278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156078"))) PPC_WEAK_FUNC(sub_82156078);
PPC_FUNC_IMPL(__imp__sub_82156078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x8215609C;
	sub_82229288(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82229278
	ctx.lr = 0x821560B8;
	sub_82229278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821560D0"))) PPC_WEAK_FUNC(sub_821560D0);
PPC_FUNC_IMPL(__imp__sub_821560D0) {
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82156100
	if (ctx.cr0.eq) goto loc_82156100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222040
	ctx.lr = 0x821560F8;
	sub_82222040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222128
	ctx.lr = 0x82156100;
	sub_82222128(ctx, base);
loc_82156100:
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

__attribute__((alias("__imp__sub_82156118"))) PPC_WEAK_FUNC(sub_82156118);
PPC_FUNC_IMPL(__imp__sub_82156118) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82156134;
	sub_822AA648(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82156138;
	sub_8215BD08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256578
	ctx.lr = 0x82156144;
	sub_82256578(ctx, base);
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

__attribute__((alias("__imp__sub_82156160"))) PPC_WEAK_FUNC(sub_82156160);
PPC_FUNC_IMPL(__imp__sub_82156160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82156174
	if (!ctx.cr0.eq) goto loc_82156174;
	// blr 
	return;
loc_82156174:
	// b 0x82222098
	sub_82222098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156178"))) PPC_WEAK_FUNC(sub_82156178);
PPC_FUNC_IMPL(__imp__sub_82156178) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,-744(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821561b8
	if (ctx.cr0.eq) goto loc_821561B8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bgt cr6,0x821561b4
	if (ctx.cr6.gt) goto loc_821561B4;
	// bl 0x82221e58
	ctx.lr = 0x821561B0;
	sub_82221E58(ctx, base);
	// b 0x821561b8
	goto loc_821561B8;
loc_821561B4:
	// bl 0x822250b8
	ctx.lr = 0x821561B8;
	sub_822250B8(ctx, base);
loc_821561B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821561C8"))) PPC_WEAK_FUNC(sub_821561C8);
PPC_FUNC_IMPL(__imp__sub_821561C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821561f8
	if (!ctx.cr0.eq) goto loc_821561F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156214
	goto loc_82156214;
loc_821561F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82156118
	ctx.lr = 0x82156200;
	sub_82156118(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223418
	ctx.lr = 0x82156214;
	sub_82223418(ctx, base);
loc_82156214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156230"))) PPC_WEAK_FUNC(sub_82156230);
PPC_FUNC_IMPL(__imp__sub_82156230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215624c
	if (!ctx.cr0.eq) goto loc_8215624C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215624C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82223688
	sub_82223688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156260"))) PPC_WEAK_FUNC(sub_82156260);
PPC_FUNC_IMPL(__imp__sub_82156260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82156290
	if (!ctx.cr0.eq) goto loc_82156290;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821562ac
	goto loc_821562AC;
loc_82156290:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82156118
	ctx.lr = 0x82156298;
	sub_82156118(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223418
	ctx.lr = 0x821562AC;
	sub_82223418(ctx, base);
loc_821562AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821562C8"))) PPC_WEAK_FUNC(sub_821562C8);
PPC_FUNC_IMPL(__imp__sub_821562C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821562e4
	if (!ctx.cr0.eq) goto loc_821562E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821562E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82225190
	sub_82225190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821562F0"))) PPC_WEAK_FUNC(sub_821562F0);
PPC_FUNC_IMPL(__imp__sub_821562F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215630c
	if (!ctx.cr0.eq) goto loc_8215630C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215630C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822235a8
	sub_822235A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156320"))) PPC_WEAK_FUNC(sub_82156320);
PPC_FUNC_IMPL(__imp__sub_82156320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215633c
	if (!ctx.cr0.eq) goto loc_8215633C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215633C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82221f08
	sub_82221F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156350"))) PPC_WEAK_FUNC(sub_82156350);
PPC_FUNC_IMPL(__imp__sub_82156350) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82228b00
	ctx.lr = 0x8215636C;
	sub_82228B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821563a4
	if (ctx.cr0.eq) goto loc_821563A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822235a8
	ctx.lr = 0x8215638C;
	sub_822235A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821563a4
	if (ctx.cr0.eq) goto loc_821563A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x821563A0;
	sub_82229288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821563A4:
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

__attribute__((alias("__imp__sub_821563C0"))) PPC_WEAK_FUNC(sub_821563C0);
PPC_FUNC_IMPL(__imp__sub_821563C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821563d4
	if (!ctx.cr0.eq) goto loc_821563D4;
	// blr 
	return;
loc_821563D4:
	// b 0x82221f90
	sub_82221F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821563D8"))) PPC_WEAK_FUNC(sub_821563D8);
PPC_FUNC_IMPL(__imp__sub_821563D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821563ec
	if (!ctx.cr0.eq) goto loc_821563EC;
	// blr 
	return;
loc_821563EC:
	// b 0x82221fe8
	sub_82221FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821563F0"))) PPC_WEAK_FUNC(sub_821563F0);
PPC_FUNC_IMPL(__imp__sub_821563F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215640c
	if (!ctx.cr0.eq) goto loc_8215640C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215640C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82223760
	sub_82223760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156418"))) PPC_WEAK_FUNC(sub_82156418);
PPC_FUNC_IMPL(__imp__sub_82156418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82156434
	if (!ctx.cr0.eq) goto loc_82156434;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82156434:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822235a8
	sub_822235A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156448"))) PPC_WEAK_FUNC(sub_82156448);
PPC_FUNC_IMPL(__imp__sub_82156448) {
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
	// bl 0x82229288
	ctx.lr = 0x82156464;
	sub_82229288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82156474
	if (!ctx.cr0.lt) goto loc_82156474;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82156488
	goto loc_82156488;
loc_82156474:
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r5,r11,38527
	ctx.r5.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82156488
	if (ctx.cr6.gt) goto loc_82156488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82156488:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x82156494;
	sub_82229278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229288
	ctx.lr = 0x821564A0;
	sub_82229288(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
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

__attribute__((alias("__imp__sub_821564C0"))) PPC_WEAK_FUNC(sub_821564C0);
PPC_FUNC_IMPL(__imp__sub_821564C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82228b00
	ctx.lr = 0x821564E4;
	sub_82228B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215651c
	if (ctx.cr0.eq) goto loc_8215651C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822235a8
	ctx.lr = 0x82156504;
	sub_822235A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215651c
	if (ctx.cr0.eq) goto loc_8215651C;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8215651c
	if (ctx.cr6.eq) goto loc_8215651C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215651C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82156538"))) PPC_WEAK_FUNC(sub_82156538);
PPC_FUNC_IMPL(__imp__sub_82156538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156548"))) PPC_WEAK_FUNC(sub_82156548);
PPC_FUNC_IMPL(__imp__sub_82156548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82156550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82156570;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215657C;
	sub_821837D0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82156594
	if (!ctx.cr6.gt) goto loc_82156594;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82156594:
	// bl 0x82080d68
	ctx.lr = 0x82156598;
	sub_82080D68(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821565c4
	if (!ctx.cr6.gt) goto loc_821565C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821565B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821565b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821565B0;
loc_821565C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821565CC;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821565D8"))) PPC_WEAK_FUNC(sub_821565D8);
PPC_FUNC_IMPL(__imp__sub_821565D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821565E0"))) PPC_WEAK_FUNC(sub_821565E0);
PPC_FUNC_IMPL(__imp__sub_821565E0) {
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
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82156614
	if (ctx.cr6.eq) goto loc_82156614;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82156614;
	sub_82183E40(ctx, base);
loc_82156614:
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

__attribute__((alias("__imp__sub_82156630"))) PPC_WEAK_FUNC(sub_82156630);
PPC_FUNC_IMPL(__imp__sub_82156630) {
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
	// bl 0x82156548
	ctx.lr = 0x82156648;
	sub_82156548(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25284
	ctx.r11.s64 = ctx.r11.s64 + -25284;
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

__attribute__((alias("__imp__sub_82156670"))) PPC_WEAK_FUNC(sub_82156670);
PPC_FUNC_IMPL(__imp__sub_82156670) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82156678:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82156688
	if (!ctx.cr0.lt) goto loc_82156688;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82156688:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82156678
	if (ctx.cr6.eq) goto loc_82156678;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821566A0"))) PPC_WEAK_FUNC(sub_821566A0);
PPC_FUNC_IMPL(__imp__sub_821566A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821566B0:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r8,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821566b0
	if (ctx.cr6.eq) goto loc_821566B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821566E0"))) PPC_WEAK_FUNC(sub_821566E0);
PPC_FUNC_IMPL(__imp__sub_821566E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-25284
	ctx.r11.s64 = ctx.r11.s64 + -25284;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821565e0
	ctx.lr = 0x8215670C;
	sub_821565E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156720
	if (ctx.cr0.eq) goto loc_82156720;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156720;
	sub_82183E40(ctx, base);
loc_82156720:
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

__attribute__((alias("__imp__sub_82156740"))) PPC_WEAK_FUNC(sub_82156740);
PPC_FUNC_IMPL(__imp__sub_82156740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821565e0
	ctx.lr = 0x82156760;
	sub_821565E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156774
	if (ctx.cr0.eq) goto loc_82156774;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156774;
	sub_82183E40(ctx, base);
loc_82156774:
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

__attribute__((alias("__imp__sub_82156790"))) PPC_WEAK_FUNC(sub_82156790);
PPC_FUNC_IMPL(__imp__sub_82156790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82156798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156818
	if (ctx.cr6.eq) goto loc_82156818;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82156818
	if (ctx.cr0.eq) goto loc_82156818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821567C4;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821567D0;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821567E0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821567EC;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,398
	ctx.r4.s64 = 398;
	// bl 0x8210a9b0
	ctx.lr = 0x82156800;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8215680C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82156818;
	sub_821AD498(ctx, base);
loc_82156818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156820"))) PPC_WEAK_FUNC(sub_82156820);
PPC_FUNC_IMPL(__imp__sub_82156820) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addic. r11,r11,-25856
	ctx.xer.ca = ctx.r11.u32 > 25855;
	ctx.r11.s64 = ctx.r11.s64 + -25856;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156854
	if (ctx.cr0.eq) goto loc_82156854;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82156880
	if (ctx.cr6.eq) goto loc_82156880;
loc_82156854:
	// li r4,1179
	ctx.r4.s64 = 1179;
	// bl 0x82106eb0
	ctx.lr = 0x8215685C;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156868
	if (ctx.cr0.eq) goto loc_82156868;
	// bl 0x821d38e8
	ctx.lr = 0x82156868;
	sub_821D38E8(ctx, base);
loc_82156868:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,39876
	ctx.r10.u64 = ctx.r10.u64 | 39876;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82156880:
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

__attribute__((alias("__imp__sub_82156898"))) PPC_WEAK_FUNC(sub_82156898);
PPC_FUNC_IMPL(__imp__sub_82156898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,39876
	ctx.r10.u64 = ctx.r10.u64 | 39876;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821568B8"))) PPC_WEAK_FUNC(sub_821568B8);
PPC_FUNC_IMPL(__imp__sub_821568B8) {
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
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x821568DC;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,39876
	ctx.r9.u64 = ctx.r9.u64 | 39876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82156930"))) PPC_WEAK_FUNC(sub_82156930);
PPC_FUNC_IMPL(__imp__sub_82156930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82185a50
	ctx.lr = 0x8215695C;
	sub_82185A50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156970
	if (ctx.cr0.eq) goto loc_82156970;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156970;
	sub_82183E40(ctx, base);
loc_82156970:
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

__attribute__((alias("__imp__sub_82156990"))) PPC_WEAK_FUNC(sub_82156990);
PPC_FUNC_IMPL(__imp__sub_82156990) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821569c4
	if (ctx.cr6.eq) goto loc_821569C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x821569C4;
	sub_82183E40(ctx, base);
loc_821569C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x821569D4;
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

__attribute__((alias("__imp__sub_821569E8"))) PPC_WEAK_FUNC(sub_821569E8);
PPC_FUNC_IMPL(__imp__sub_821569E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82156a04
	if (!ctx.cr6.eq) goto loc_82156A04;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82156A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156A10"))) PPC_WEAK_FUNC(sub_82156A10);
PPC_FUNC_IMPL(__imp__sub_82156A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156A18"))) PPC_WEAK_FUNC(sub_82156A18);
PPC_FUNC_IMPL(__imp__sub_82156A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82156A50;
	sub_822AA648(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x822aa648
	ctx.lr = 0x82156A64;
	sub_822AA648(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82156A70;
	sub_822AA648(ctx, base);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156A90"))) PPC_WEAK_FUNC(sub_82156A90);
PPC_FUNC_IMPL(__imp__sub_82156A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82156AB4;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82156a18
	ctx.lr = 0x82156ACC;
	sub_82156A18(ctx, base);
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

__attribute__((alias("__imp__sub_82156AE8"))) PPC_WEAK_FUNC(sub_82156AE8);
PPC_FUNC_IMPL(__imp__sub_82156AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82156990
	ctx.lr = 0x82156B08;
	sub_82156990(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156b1c
	if (ctx.cr0.eq) goto loc_82156B1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156B1C;
	sub_82183E40(ctx, base);
loc_82156B1C:
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

__attribute__((alias("__imp__sub_82156B38"))) PPC_WEAK_FUNC(sub_82156B38);
PPC_FUNC_IMPL(__imp__sub_82156B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82156B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82156c4c
	if (ctx.cr6.eq) goto loc_82156C4C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82156c4c
	if (!ctx.cr6.lt) goto loc_82156C4C;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x82156B88;
	sub_82256BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a830
	ctx.lr = 0x82156B90;
	sub_8224A830(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// stw r30,38(r31)
	PPC_STORE_U32(ctx.r31.u32 + 38, ctx.r30.u32);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// beq 0x82156c4c
	if (ctx.cr0.eq) goto loc_82156C4C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82156BB8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82156BC4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82156BC8;
	sub_82183850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82156be0
	if (ctx.cr0.eq) goto loc_82156BE0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82183448
	ctx.lr = 0x82156BDC;
	sub_82183448(ctx, base);
	// b 0x82156bf0
	goto loc_82156BF0;
loc_82156BE0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82156BF0;
	sub_821845A0(ctx, base);
loc_82156BF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x82248f70
	ctx.lr = 0x82156C00;
	sub_82248F70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r11,-25248
	ctx.r4.s64 = ctx.r11.s64 + -25248;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8234f538
	ctx.lr = 0x82156C24;
	sub_8234F538(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82156c3c
	if (!ctx.cr6.lt) goto loc_82156C3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156C3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82156C44;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156c50
	goto loc_82156C50;
loc_82156C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82156C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156C58"))) PPC_WEAK_FUNC(sub_82156C58);
PPC_FUNC_IMPL(__imp__sub_82156C58) {
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
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82156c7c
	if (!ctx.cr6.eq) goto loc_82156C7C;
	// bl 0x82156a18
	ctx.lr = 0x82156C74;
	sub_82156A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156c80
	goto loc_82156C80;
loc_82156C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82156C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156C90"))) PPC_WEAK_FUNC(sub_82156C90);
PPC_FUNC_IMPL(__imp__sub_82156C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82256cc0
	ctx.lr = 0x82156CB0;
	sub_82256CC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82156cf8
	if (!ctx.cr0.eq) goto loc_82156CF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// bge cr6,0x82156ce0
	if (!ctx.cr6.lt) goto loc_82156CE0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156CE0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82156cf4
	if (ctx.cr6.eq) goto loc_82156CF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156CF4;
	sub_82183E40(ctx, base);
loc_82156CF4:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82156CF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156D10"))) PPC_WEAK_FUNC(sub_82156D10);
PPC_FUNC_IMPL(__imp__sub_82156D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82156d94
	if (ctx.cr6.eq) goto loc_82156D94;
	// bl 0x82256ce8
	ctx.lr = 0x82156D3C;
	sub_82256CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156d68
	if (ctx.cr0.eq) goto loc_82156D68;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// beq cr6,0x82156d90
	if (ctx.cr6.eq) goto loc_82156D90;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156D64;
	sub_82183E40(ctx, base);
	// b 0x82156d90
	goto loc_82156D90;
loc_82156D68:
	// lwz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82156d88
	if (ctx.cr6.eq) goto loc_82156D88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156D88;
	sub_82183E40(ctx, base);
loc_82156D88:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82156D90:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82156D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156DB0"))) PPC_WEAK_FUNC(sub_82156DB0);
PPC_FUNC_IMPL(__imp__sub_82156DB0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82156e20
	if (ctx.cr6.eq) goto loc_82156E20;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r11.u32);
	// cmplwi cr6,r11,600
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 600, ctx.xer);
	// ble cr6,0x82156df8
	if (!ctx.cr6.gt) goto loc_82156DF8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82156e20
	if (!ctx.cr6.lt) goto loc_82156E20;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82156e1c
	goto loc_82156E1C;
loc_82156DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156d10
	ctx.lr = 0x82156E00;
	sub_82156D10(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82156e20
	if (!ctx.cr6.eq) goto loc_82156E20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82156e20
	if (!ctx.cr6.lt) goto loc_82156E20;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82156E1C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156E20:
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

__attribute__((alias("__imp__sub_82156E38"))) PPC_WEAK_FUNC(sub_82156E38);
PPC_FUNC_IMPL(__imp__sub_82156E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82156e58
	if (ctx.cr6.eq) goto loc_82156E58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82156c90
	sub_82156C90(ctx, base);
	return;
loc_82156E58:
	// b 0x82156db0
	sub_82156DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156E5C"))) PPC_WEAK_FUNC(sub_82156E5C);
PPC_FUNC_IMPL(__imp__sub_82156E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156E60"))) PPC_WEAK_FUNC(sub_82156E60);
PPC_FUNC_IMPL(__imp__sub_82156E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82156EC4;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82156EDC;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156EF8"))) PPC_WEAK_FUNC(sub_82156EF8);
PPC_FUNC_IMPL(__imp__sub_82156EF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F00"))) PPC_WEAK_FUNC(sub_82156F00);
PPC_FUNC_IMPL(__imp__sub_82156F00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F08"))) PPC_WEAK_FUNC(sub_82156F08);
PPC_FUNC_IMPL(__imp__sub_82156F08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F10"))) PPC_WEAK_FUNC(sub_82156F10);
PPC_FUNC_IMPL(__imp__sub_82156F10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F18"))) PPC_WEAK_FUNC(sub_82156F18);
PPC_FUNC_IMPL(__imp__sub_82156F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822aa648
	ctx.lr = 0x82156F44;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82156F5C;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F78"))) PPC_WEAK_FUNC(sub_82156F78);
PPC_FUNC_IMPL(__imp__sub_82156F78) {
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
	// bl 0x82154c88
	ctx.lr = 0x82156F90;
	sub_82154C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f18
	ctx.lr = 0x82156F9C;
	sub_82156F18(ctx, base);
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

__attribute__((alias("__imp__sub_82156FB0"))) PPC_WEAK_FUNC(sub_82156FB0);
PPC_FUNC_IMPL(__imp__sub_82156FB0) {
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
	// bl 0x82156e60
	ctx.lr = 0x82156FC8;
	sub_82156E60(ctx, base);
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

__attribute__((alias("__imp__sub_82156FE0"))) PPC_WEAK_FUNC(sub_82156FE0);
PPC_FUNC_IMPL(__imp__sub_82156FE0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82157000;
	sub_8215BD60(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82157028"))) PPC_WEAK_FUNC(sub_82157028);
PPC_FUNC_IMPL(__imp__sub_82157028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215703c
	if (ctx.cr6.eq) goto loc_8215703C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_8215703C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157048"))) PPC_WEAK_FUNC(sub_82157048);
PPC_FUNC_IMPL(__imp__sub_82157048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215705c
	if (ctx.cr6.eq) goto loc_8215705C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
loc_8215705C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157068"))) PPC_WEAK_FUNC(sub_82157068);
PPC_FUNC_IMPL(__imp__sub_82157068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215707c
	if (ctx.cr6.eq) goto loc_8215707C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_8215707C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157088"))) PPC_WEAK_FUNC(sub_82157088);
PPC_FUNC_IMPL(__imp__sub_82157088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215709c
	if (ctx.cr6.eq) goto loc_8215709C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_8215709C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570A8"))) PPC_WEAK_FUNC(sub_821570A8);
PPC_FUNC_IMPL(__imp__sub_821570A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570bc
	if (ctx.cr6.eq) goto loc_821570BC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
loc_821570BC:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570C8"))) PPC_WEAK_FUNC(sub_821570C8);
PPC_FUNC_IMPL(__imp__sub_821570C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570dc
	if (ctx.cr6.eq) goto loc_821570DC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
loc_821570DC:
	// li r3,135
	ctx.r3.s64 = 135;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570E8"))) PPC_WEAK_FUNC(sub_821570E8);
PPC_FUNC_IMPL(__imp__sub_821570E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570fc
	if (ctx.cr6.eq) goto loc_821570FC;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
loc_821570FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157108"))) PPC_WEAK_FUNC(sub_82157108);
PPC_FUNC_IMPL(__imp__sub_82157108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214a8d0
	ctx.lr = 0x82157128;
	sub_8214A8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82157144
	if (ctx.cr0.eq) goto loc_82157144;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214aae0
	ctx.lr = 0x82157140;
	sub_8214AAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82157144:
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

__attribute__((alias("__imp__sub_82157160"))) PPC_WEAK_FUNC(sub_82157160);
PPC_FUNC_IMPL(__imp__sub_82157160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214a8d0
	ctx.lr = 0x82157180;
	sub_8214A8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215719c
	if (ctx.cr0.eq) goto loc_8215719C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214ad80
	ctx.lr = 0x82157198;
	sub_8214AD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8215719C:
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

__attribute__((alias("__imp__sub_821571B8"))) PPC_WEAK_FUNC(sub_821571B8);
PPC_FUNC_IMPL(__imp__sub_821571B8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c34c0
	ctx.lr = 0x821571D8;
	sub_823C34C0(ctx, base);
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

__attribute__((alias("__imp__sub_821571F0"))) PPC_WEAK_FUNC(sub_821571F0);
PPC_FUNC_IMPL(__imp__sub_821571F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c30b8
	sub_823C30B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821571F8"))) PPC_WEAK_FUNC(sub_821571F8);
PPC_FUNC_IMPL(__imp__sub_821571F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-25236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157218"))) PPC_WEAK_FUNC(sub_82157218);
PPC_FUNC_IMPL(__imp__sub_82157218) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3410
	sub_823C3410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157220"))) PPC_WEAK_FUNC(sub_82157220);
PPC_FUNC_IMPL(__imp__sub_82157220) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3468
	sub_823C3468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157228"))) PPC_WEAK_FUNC(sub_82157228);
PPC_FUNC_IMPL(__imp__sub_82157228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157238"))) PPC_WEAK_FUNC(sub_82157238);
PPC_FUNC_IMPL(__imp__sub_82157238) {
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
	// bl 0x821f0050
	ctx.lr = 0x82157248;
	sub_821F0050(ctx, base);
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
}

__attribute__((alias("__imp__sub_82157260"))) PPC_WEAK_FUNC(sub_82157260);
PPC_FUNC_IMPL(__imp__sub_82157260) {
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215729c
	if (ctx.cr0.eq) goto loc_8215729C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821572a0
	if (ctx.cr6.gt) goto loc_821572A0;
loc_8215729C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821572A0:
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

__attribute__((alias("__imp__sub_821572B8"))) PPC_WEAK_FUNC(sub_821572B8);
PPC_FUNC_IMPL(__imp__sub_821572B8) {
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
	// add. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x8215730c
	if (ctx.cr0.eq) goto loc_8215730C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8215730C:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// bl 0x8218a5f0
	ctx.lr = 0x82157328;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157338"))) PPC_WEAK_FUNC(sub_82157338);
PPC_FUNC_IMPL(__imp__sub_82157338) {
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
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x82155dc0
	ctx.lr = 0x82157354;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157380
	if (!ctx.cr0.eq) goto loc_82157380;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215736c
	if (ctx.cr6.eq) goto loc_8215736C;
	// bl 0x82156898
	ctx.lr = 0x8215736C;
	sub_82156898(ctx, base);
loc_8215736C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157380:
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

__attribute__((alias("__imp__sub_82157398"))) PPC_WEAK_FUNC(sub_82157398);
PPC_FUNC_IMPL(__imp__sub_82157398) {
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
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,501
	ctx.r9.s64 = 501;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,502
	ctx.r8.s64 = 502;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,1200
	ctx.r4.s64 = 1200;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x821573D0;
	sub_82106F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821573E0"))) PPC_WEAK_FUNC(sub_821573E0);
PPC_FUNC_IMPL(__imp__sub_821573E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821573E8;
	__savegprlr_29(ctx, base);
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
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// addi r10,r10,-25224
	ctx.r10.s64 = ctx.r10.s64 + -25224;
	// addi r9,r9,-25232
	ctx.r9.s64 = ctx.r9.s64 + -25232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// bl 0x8215bd60
	ctx.lr = 0x82157420;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157438
	if (!ctx.cr6.eq) goto loc_82157438;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82157438;
	sub_82221280(ctx, base);
loc_82157438:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x821ebaa8
	ctx.lr = 0x82157440;
	sub_821EBAA8(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157450
	if (ctx.cr6.eq) goto loc_82157450;
	// bl 0x82145890
	ctx.lr = 0x82157450;
	sub_82145890(ctx, base);
loc_82157450:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157470
	if (ctx.cr6.eq) goto loc_82157470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157470:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x82157480;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82157488;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82157490;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82157498;
	sub_823C3BC0(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x8209eda0
	ctx.lr = 0x821574A0;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821574A8"))) PPC_WEAK_FUNC(sub_821574A8);
PPC_FUNC_IMPL(__imp__sub_821574A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157928
	sub_82157928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821574B0"))) PPC_WEAK_FUNC(sub_821574B0);
PPC_FUNC_IMPL(__imp__sub_821574B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82157928
	sub_82157928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821574B8"))) PPC_WEAK_FUNC(sub_821574B8);
PPC_FUNC_IMPL(__imp__sub_821574B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821574C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82157568
	if (ctx.cr0.eq) goto loc_82157568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821574E0;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821574EC;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821574FC;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82157508;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82157550
	if (!ctx.cr6.gt) goto loc_82157550;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r10,57588
	ctx.r10.u64 = ctx.r10.u64 | 57588;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,399
	ctx.r4.s64 = 399;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x82157550;
	sub_8210A9B0(ctx, base);
loc_82157550:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8215755C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82157568;
	sub_821AD498(ctx, base);
loc_82157568:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157570"))) PPC_WEAK_FUNC(sub_82157570);
PPC_FUNC_IMPL(__imp__sub_82157570) {
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
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x823c3468
	ctx.lr = 0x82157594;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x8215759C;
	sub_823C3CD8(ctx, base);
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

__attribute__((alias("__imp__sub_821575B0"))) PPC_WEAK_FUNC(sub_821575B0);
PPC_FUNC_IMPL(__imp__sub_821575B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821575D0"))) PPC_WEAK_FUNC(sub_821575D0);
PPC_FUNC_IMPL(__imp__sub_821575D0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82221e50
	ctx.lr = 0x821575EC;
	sub_82221E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215760c
	if (ctx.cr0.eq) goto loc_8215760C;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157604
	if (ctx.cr6.eq) goto loc_82157604;
	// bl 0x82156898
	ctx.lr = 0x82157604;
	sub_82156898(ctx, base);
loc_82157604:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8215763c
	goto loc_8215763C;
loc_8215760C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x821561c8
	ctx.lr = 0x8215761C;
	sub_821561C8(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215762c
	if (ctx.cr6.eq) goto loc_8215762C;
	// bl 0x82156820
	ctx.lr = 0x8215762C;
	sub_82156820(ctx, base);
loc_8215762C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a7e0
	ctx.lr = 0x82157638;
	sub_8214A7E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8215763C:
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82157658"))) PPC_WEAK_FUNC(sub_82157658);
PPC_FUNC_IMPL(__imp__sub_82157658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82157660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,-744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8215767C;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821576b4
	if (ctx.cr6.eq) goto loc_821576B4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82157694
	if (ctx.cr6.eq) goto loc_82157694;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821576ec
	if (!ctx.cr6.eq) goto loc_821576EC;
loc_82157694:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821576a4
	if (ctx.cr6.eq) goto loc_821576A4;
	// bl 0x82156898
	ctx.lr = 0x821576A4;
	sub_82156898(ctx, base);
loc_821576A4:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214aa28
	ctx.lr = 0x821576AC;
	sub_8214AA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821576c8
	goto loc_821576C8;
loc_821576B4:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821576c4
	if (ctx.cr6.eq) goto loc_821576C4;
	// bl 0x82156898
	ctx.lr = 0x821576C4;
	sub_82156898(ctx, base);
loc_821576C4:
	// li r4,30200
	ctx.r4.s64 = 30200;
loc_821576C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82155bd0
	ctx.lr = 0x821576D4;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// bl 0x82221e10
	ctx.lr = 0x821576EC;
	sub_82221E10(ctx, base);
loc_821576EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821576F8"))) PPC_WEAK_FUNC(sub_821576F8);
PPC_FUNC_IMPL(__imp__sub_821576F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821f0050
	ctx.lr = 0x82157718;
	sub_821F0050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157724
	if (!ctx.cr0.eq) goto loc_82157724;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82157724:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,44740
	ctx.r10.u64 = ctx.r10.u64 | 44740;
	// ori r9,r9,44996
	ctx.r9.u64 = ctx.r9.u64 | 44996;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157768"))) PPC_WEAK_FUNC(sub_82157768);
PPC_FUNC_IMPL(__imp__sub_82157768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r3,336
	ctx.r31.s64 = ctx.r3.s64 + 336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e55a0
	ctx.lr = 0x82157794;
	sub_820E55A0(ctx, base);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,45528
	ctx.r11.u64 = ctx.r11.u64 | 45528;
	// ori r10,r10,45548
	ctx.r10.u64 = ctx.r10.u64 | 45548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r31,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821577D8"))) PPC_WEAK_FUNC(sub_821577D8);
PPC_FUNC_IMPL(__imp__sub_821577D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821577E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,360
	ctx.r31.s64 = ctx.r3.s64 + 360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821577FC;
	sub_822AA648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084038
	ctx.lr = 0x82157814;
	sub_82084038(ctx, base);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,49624
	ctx.r11.u64 = ctx.r11.u64 | 49624;
	// ori r10,r10,49644
	ctx.r10.u64 = ctx.r10.u64 | 49644;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r31,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157848"))) PPC_WEAK_FUNC(sub_82157848);
PPC_FUNC_IMPL(__imp__sub_82157848) {
	PPC_FUNC_PROLOGUE();
	// li r10,1211
	ctx.r10.s64 = 1211;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// li r9,1212
	ctx.r9.s64 = 1212;
	// li r8,1213
	ctx.r8.s64 = 1213;
	// li r10,1214
	ctx.r10.s64 = 1214;
	// stw r9,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r9.u32);
	// stw r8,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r8.u32);
	// li r9,1217
	ctx.r9.s64 = 1217;
	// stw r10,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r8,1220
	ctx.r8.s64 = 1220;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// li r10,1229
	ctx.r10.s64 = 1229;
	// li r11,1243
	ctx.r11.s64 = 1243;
	// stw r8,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// li r9,1236
	ctx.r9.s64 = 1236;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r8,1250
	ctx.r8.s64 = 1250;
	// li r10,1257
	ctx.r10.s64 = 1257;
	// stw r9,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r9.u32);
	// li r11,1237
	ctx.r11.s64 = 1237;
	// stw r8,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// li r9,1230
	ctx.r9.s64 = 1230;
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r8,1244
	ctx.r8.s64 = 1244;
	// li r10,1251
	ctx.r10.s64 = 1251;
	// stw r9,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r9.u32);
	// li r11,1232
	ctx.r11.s64 = 1232;
	// stw r8,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// li r9,1258
	ctx.r9.s64 = 1258;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r8,1239
	ctx.r8.s64 = 1239;
	// li r10,1246
	ctx.r10.s64 = 1246;
	// stw r9,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// li r7,1253
	ctx.r7.s64 = 1253;
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// li r11,1260
	ctx.r11.s64 = 1260;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_821578FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215791c
	if (ctx.cr6.lt) goto loc_8215791C;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_8215791C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821578fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821578FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157928"))) PPC_WEAK_FUNC(sub_82157928);
PPC_FUNC_IMPL(__imp__sub_82157928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821573e0
	ctx.lr = 0x82157948;
	sub_821573E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215795c
	if (ctx.cr0.eq) goto loc_8215795C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215795C;
	sub_82183E40(ctx, base);
loc_8215795C:
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

__attribute__((alias("__imp__sub_82157978"))) PPC_WEAK_FUNC(sub_82157978);
PPC_FUNC_IMPL(__imp__sub_82157978) {
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
	// lwz r4,332(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82157398
	ctx.lr = 0x82157994;
	sub_82157398(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821579ac
	if (!ctx.cr6.eq) goto loc_821579AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821575d0
	ctx.lr = 0x821579A8;
	sub_821575D0(ctx, base);
	// b 0x821579b4
	goto loc_821579B4;
loc_821579AC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_821579B4:
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

__attribute__((alias("__imp__sub_821579C8"))) PPC_WEAK_FUNC(sub_821579C8);
PPC_FUNC_IMPL(__imp__sub_821579C8) {
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
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82157a14
	if (ctx.cr6.eq) goto loc_82157A14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157a1c
	if (!ctx.cr6.eq) goto loc_82157A1C;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157a08
	if (ctx.cr6.eq) goto loc_82157A08;
	// bl 0x82156898
	ctx.lr = 0x82157A08;
	sub_82156898(ctx, base);
loc_82157A08:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x82157a1c
	goto loc_82157A1C;
loc_82157A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157658
	ctx.lr = 0x82157A1C;
	sub_82157658(ctx, base);
loc_82157A1C:
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

__attribute__((alias("__imp__sub_82157A30"))) PPC_WEAK_FUNC(sub_82157A30);
PPC_FUNC_IMPL(__imp__sub_82157A30) {
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
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157a68
	if (ctx.cr6.eq) goto loc_82157A68;
	// bl 0x82157978
	ctx.lr = 0x82157A54;
	sub_82157978(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157A68:
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

__attribute__((alias("__imp__sub_82157A80"))) PPC_WEAK_FUNC(sub_82157A80);
PPC_FUNC_IMPL(__imp__sub_82157A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82157a94
	if (!ctx.cr0.lt) goto loc_82157A94;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82157aa0
	goto loc_82157AA0;
loc_82157A94:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82157aa0
	if (ctx.cr6.lt) goto loc_82157AA0;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_82157AA0:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157978
	sub_82157978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157AB0"))) PPC_WEAK_FUNC(sub_82157AB0);
PPC_FUNC_IMPL(__imp__sub_82157AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82157ac4
	if (!ctx.cr0.lt) goto loc_82157AC4;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// b 0x82157ad0
	goto loc_82157AD0;
loc_82157AC4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82157ad0
	if (ctx.cr6.lt) goto loc_82157AD0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82157AD0:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157978
	sub_82157978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157AE0"))) PPC_WEAK_FUNC(sub_82157AE0);
PPC_FUNC_IMPL(__imp__sub_82157AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82157AE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82157AF4;
	sub_82163DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82165b50
	ctx.lr = 0x82157B00;
	sub_82165B50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x82157B1C;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822aa648
	ctx.lr = 0x82157B28;
	sub_822AA648(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82157b80
	if (ctx.cr6.lt) goto loc_82157B80;
	// bne cr6,0x82157b8c
	if (!ctx.cr6.eq) goto loc_82157B8C;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82228b00
	ctx.lr = 0x82157B40;
	sub_82228B00(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821562f0
	ctx.lr = 0x82157B4C;
	sub_821562F0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ee8
	ctx.lr = 0x82157B54;
	sub_82155EE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ef0
	ctx.lr = 0x82157B60;
	sub_82155EF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ef8
	ctx.lr = 0x82157B6C;
	sub_82155EF8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-14444
	ctx.r11.s64 = ctx.r11.s64 + -14444;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x82157b8c
	goto loc_82157B8C;
loc_82157B80:
	// lwz r28,72(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r27,76(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r26,80(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
loc_82157B8C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821572b8
	ctx.lr = 0x82157B9C;
	sub_821572B8(ctx, base);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,48856
	ctx.r11.u64 = ctx.r11.u64 | 48856;
	// ori r10,r10,48876
	ctx.r10.u64 = ctx.r10.u64 | 48876;
	// addi r9,r31,352
	ctx.r9.s64 = ctx.r31.s64 + 352;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lhz r25,2(r25)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17664
	ctx.r7.s64 = ctx.r7.s64 + -17664;
	// stw r28,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r28.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17408
	ctx.r7.s64 = ctx.r7.s64 + -17408;
	// stw r27,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r27.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17152
	ctx.r7.s64 = ctx.r7.s64 + -17152;
	// stw r26,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r26.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r9,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x821577d8
	ctx.lr = 0x82157C24;
	sub_821577D8(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r29,8508
	ctx.r10.s64 = ctx.r29.s64 + 8508;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f0,11484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addis r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 327680;
	// addi r9,r9,-15360
	ctx.r9.s64 = ctx.r9.s64 + -15360;
	// stw r25,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r25.u32);
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-25004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25004);
	ctx.f13.f64 = double(temp.f32);
loc_82157C5C:
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,1239
	ctx.r5.s64 = 1239;
	// li r7,1232
	ctx.r7.s64 = 1232;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r5,1236
	ctx.r5.s64 = 1236;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,1260
	ctx.r4.s64 = 1260;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,1229
	ctx.r9.s64 = 1229;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r5,1257
	ctx.r5.s64 = 1257;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r4,1243
	ctx.r4.s64 = 1243;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r3,1250
	ctx.r3.s64 = 1250;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r9,1246
	ctx.r9.s64 = 1246;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r5,1253
	ctx.r5.s64 = 1253;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r3,1244
	ctx.r3.s64 = 1244;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r29,1251
	ctx.r29.s64 = 1251;
	// li r27,1258
	ctx.r27.s64 = 1258;
	// li r26,1230
	ctx.r26.s64 = 1230;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// li r4,1237
	ctx.r4.s64 = 1237;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r30,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r30.u32);
	// stw r6,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r6.u32);
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r28,272(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r8,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r8.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwa r6,0(r9)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + 0));
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f12,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,20(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bdnz 0x82157c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82157C5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157848
	ctx.lr = 0x82157D7C;
	sub_82157848(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157D88"))) PPC_WEAK_FUNC(sub_82157D88);
PPC_FUNC_IMPL(__imp__sub_82157D88) {
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
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// bl 0x823c3410
	ctx.lr = 0x82157DA4;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82157DAC;
	sub_823C3C70(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x82157DB0;
	sub_821EB440(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ebaa8
	ctx.lr = 0x82157DBC;
	sub_821EBAA8(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82157DC0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157ddc
	if (ctx.cr6.eq) goto loc_82157DDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82221e50
	ctx.lr = 0x82157DD4;
	sub_82221E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157dec
	if (!ctx.cr0.eq) goto loc_82157DEC;
loc_82157DDC:
	// bl 0x8215bd60
	ctx.lr = 0x82157DE0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157df4
	if (!ctx.cr6.eq) goto loc_82157DF4;
loc_82157DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157ae0
	ctx.lr = 0x82157DF4;
	sub_82157AE0(ctx, base);
loc_82157DF4:
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

__attribute__((alias("__imp__sub_82157E08"))) PPC_WEAK_FUNC(sub_82157E08);
PPC_FUNC_IMPL(__imp__sub_82157E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82157E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x8209eda0
	ctx.lr = 0x82157E20;
	sub_8209EDA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82157E2C;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82157E30;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x82157E44;
	sub_823C58B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821859a0
	ctx.lr = 0x82157E58;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// addi r10,r10,-25224
	ctx.r10.s64 = ctx.r10.s64 + -25224;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r9,r9,-25232
	ctx.r9.s64 = ctx.r9.s64 + -25232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x82157E94;
	sub_823C2FF0(ctx, base);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82157EB4;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x822aa648
	ctx.lr = 0x82157EC0;
	sub_822AA648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x822aa648
	ctx.lr = 0x82157ECC;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x82157EE0;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82157EE8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82157EF4;
	sub_821837D0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82157EFC;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157f0c
	if (ctx.cr0.eq) goto loc_82157F0C;
	// bl 0x821568b8
	ctx.lr = 0x82157F08;
	sub_821568B8(ctx, base);
	// b 0x82157f10
	goto loc_82157F10;
loc_82157F0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82157F10:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157f30
	if (!ctx.cr6.eq) goto loc_82157F30;
	// bl 0x82145848
	ctx.lr = 0x82157F2C;
	sub_82145848(ctx, base);
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
loc_82157F30:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157f54
	if (ctx.cr6.eq) goto loc_82157F54;
	// bl 0x8215bd08
	ctx.lr = 0x82157F44;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82221060
	ctx.lr = 0x82157F54;
	sub_82221060(ctx, base);
loc_82157F54:
	// bl 0x82220c70
	ctx.lr = 0x82157F58;
	sub_82220C70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82157F64;
	sub_82221280(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82157F68;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157f78
	if (ctx.cr6.eq) goto loc_82157F78;
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
loc_82157F78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x82157398
	ctx.lr = 0x82157F84;
	sub_82157398(ctx, base);
	// li r11,800
	ctx.r11.s64 = 800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82157768
	ctx.lr = 0x82157F94;
	sub_82157768(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157848
	ctx.lr = 0x82157FA0;
	sub_82157848(ctx, base);
	// bl 0x82157d88
	ctx.lr = 0x82157FA4;
	sub_82157D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821576f8
	ctx.lr = 0x82157FAC;
	sub_821576F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82157FB4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157FC0"))) PPC_WEAK_FUNC(sub_82157FC0);
PPC_FUNC_IMPL(__imp__sub_82157FC0) {
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
	// bl 0x821576f8
	ctx.lr = 0x82157FD8;
	sub_821576F8(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215802c
	if (ctx.cr6.eq) goto loc_8215802C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82158024
	if (ctx.cr6.eq) goto loc_82158024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82158008
	if (ctx.cr6.eq) goto loc_82158008;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8215802c
	if (!ctx.cr6.eq) goto loc_8215802C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157338
	ctx.lr = 0x82158004;
	sub_82157338(ctx, base);
	// b 0x8215802c
	goto loc_8215802C;
loc_82158008:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x82157ae0
	ctx.lr = 0x82158018;
	sub_82157AE0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x8215802c
	goto loc_8215802C;
loc_82158024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821579c8
	ctx.lr = 0x8215802C;
	sub_821579C8(ctx, base);
loc_8215802C:
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

__attribute__((alias("__imp__sub_82158040"))) PPC_WEAK_FUNC(sub_82158040);
PPC_FUNC_IMPL(__imp__sub_82158040) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r10,-24996
	ctx.r10.s64 = ctx.r10.s64 + -24996;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8209eda0
	sub_8209EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158058"))) PPC_WEAK_FUNC(sub_82158058);
PPC_FUNC_IMPL(__imp__sub_82158058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82158060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228be0
	ctx.lr = 0x82158080;
	sub_82228BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82166180
	ctx.lr = 0x8215808C;
	sub_82166180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x8215809C;
	sub_82166180(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x821580B0;
	sub_822AA648(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-24992
	ctx.r5.s64 = ctx.r11.s64 + -24992;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821580CC;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821580D8"))) PPC_WEAK_FUNC(sub_821580D8);
PPC_FUNC_IMPL(__imp__sub_821580D8) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82248a40
	ctx.lr = 0x821580F8;
	sub_82248A40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_82158118"))) PPC_WEAK_FUNC(sub_82158118);
PPC_FUNC_IMPL(__imp__sub_82158118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158160
	if (ctx.cr6.eq) goto loc_82158160;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158148;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158160
	if (ctx.cr0.eq) goto loc_82158160;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x8215815C;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158160:
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

__attribute__((alias("__imp__sub_82158180"))) PPC_WEAK_FUNC(sub_82158180);
PPC_FUNC_IMPL(__imp__sub_82158180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821581c8
	if (ctx.cr6.eq) goto loc_821581C8;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821581B0;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821581c8
	if (ctx.cr0.eq) goto loc_821581C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821581C4;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821581C8:
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

__attribute__((alias("__imp__sub_821581E8"))) PPC_WEAK_FUNC(sub_821581E8);
PPC_FUNC_IMPL(__imp__sub_821581E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158230
	if (ctx.cr6.eq) goto loc_82158230;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158218;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158230
	if (ctx.cr0.eq) goto loc_82158230;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x8215822C;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158230:
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

__attribute__((alias("__imp__sub_82158250"))) PPC_WEAK_FUNC(sub_82158250);
PPC_FUNC_IMPL(__imp__sub_82158250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158298
	if (ctx.cr6.eq) goto loc_82158298;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158280;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158298
	if (ctx.cr0.eq) goto loc_82158298;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158294;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158298:
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

__attribute__((alias("__imp__sub_821582B8"))) PPC_WEAK_FUNC(sub_821582B8);
PPC_FUNC_IMPL(__imp__sub_821582B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158300
	if (ctx.cr6.eq) goto loc_82158300;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821582E8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158300
	if (ctx.cr0.eq) goto loc_82158300;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821582FC;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158300:
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

__attribute__((alias("__imp__sub_82158320"))) PPC_WEAK_FUNC(sub_82158320);
PPC_FUNC_IMPL(__imp__sub_82158320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158368
	if (ctx.cr6.eq) goto loc_82158368;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158350;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158368
	if (ctx.cr0.eq) goto loc_82158368;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158364;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158368:
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

__attribute__((alias("__imp__sub_82158388"))) PPC_WEAK_FUNC(sub_82158388);
PPC_FUNC_IMPL(__imp__sub_82158388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821583d0
	if (ctx.cr6.eq) goto loc_821583D0;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821583B8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821583d0
	if (ctx.cr0.eq) goto loc_821583D0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821583CC;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821583D0:
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

__attribute__((alias("__imp__sub_821583F0"))) PPC_WEAK_FUNC(sub_821583F0);
PPC_FUNC_IMPL(__imp__sub_821583F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158438
	if (ctx.cr6.eq) goto loc_82158438;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158420;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158438
	if (ctx.cr0.eq) goto loc_82158438;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158434;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158438:
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

__attribute__((alias("__imp__sub_82158458"))) PPC_WEAK_FUNC(sub_82158458);
PPC_FUNC_IMPL(__imp__sub_82158458) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158494
	if (ctx.cr6.eq) goto loc_82158494;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158480;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158494
	if (ctx.cr0.eq) goto loc_82158494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bd0
	ctx.lr = 0x82158490;
	sub_82228BD0(ctx, base);
	// b 0x8215849c
	goto loc_8215849C;
loc_82158494:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,4393
	ctx.r3.s64 = ctx.r11.s64 + 4393;
loc_8215849C:
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

__attribute__((alias("__imp__sub_821584B0"))) PPC_WEAK_FUNC(sub_821584B0);
PPC_FUNC_IMPL(__imp__sub_821584B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158534
	if (ctx.cr6.eq) goto loc_82158534;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821584E0;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158534
	if (ctx.cr0.eq) goto loc_82158534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f78
	ctx.lr = 0x821584F0;
	sub_82156F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158180
	ctx.lr = 0x821584F8;
	sub_82158180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156ef8
	ctx.lr = 0x82158504;
	sub_82156EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821581e8
	ctx.lr = 0x8215850C;
	sub_821581E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x82158518;
	sub_82156F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158118
	ctx.lr = 0x82158520;
	sub_82158118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f10
	ctx.lr = 0x8215852C;
	sub_82156F10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82158538
	goto loc_82158538;
loc_82158534:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82158538:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158550"))) PPC_WEAK_FUNC(sub_82158550);
PPC_FUNC_IMPL(__imp__sub_82158550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158598
	if (ctx.cr6.eq) goto loc_82158598;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158580;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158598
	if (ctx.cr0.eq) goto loc_82158598;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158594;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158598:
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

__attribute__((alias("__imp__sub_821585B8"))) PPC_WEAK_FUNC(sub_821585B8);
PPC_FUNC_IMPL(__imp__sub_821585B8) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228c88
	ctx.lr = 0x821585D4;
	sub_82228C88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24996
	ctx.r11.s64 = ctx.r11.s64 + -24996;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82158058
	ctx.lr = 0x821585E8;
	sub_82158058(ctx, base);
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

__attribute__((alias("__imp__sub_82158600"))) PPC_WEAK_FUNC(sub_82158600);
PPC_FUNC_IMPL(__imp__sub_82158600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82158608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158654
	if (ctx.cr6.eq) goto loc_82158654;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158628;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158654
	if (ctx.cr0.eq) goto loc_82158654;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x8218f0b0
	ctx.lr = 0x82158640;
	sub_8218F0B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82223140
	ctx.lr = 0x82158654;
	sub_82223140(ctx, base);
loc_82158654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158660"))) PPC_WEAK_FUNC(sub_82158660);
PPC_FUNC_IMPL(__imp__sub_82158660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215869c
	if (ctx.cr6.eq) goto loc_8215869C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x82158690;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215869c
	if (ctx.cr0.eq) goto loc_8215869C;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_8215869C:
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

__attribute__((alias("__imp__sub_821586B8"))) PPC_WEAK_FUNC(sub_821586B8);
PPC_FUNC_IMPL(__imp__sub_821586B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821586f4
	if (ctx.cr6.eq) goto loc_821586F4;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821586E8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821586f4
	if (ctx.cr0.eq) goto loc_821586F4;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821586F4:
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

__attribute__((alias("__imp__sub_82158710"))) PPC_WEAK_FUNC(sub_82158710);
PPC_FUNC_IMPL(__imp__sub_82158710) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-25000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25000);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8215875c
	if (ctx.cr6.eq) goto loc_8215875C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x82158744;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215875c
	if (ctx.cr0.eq) goto loc_8215875C;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215875c
	if (ctx.cr6.eq) goto loc_8215875C;
	// lfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
loc_8215875C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82158778"))) PPC_WEAK_FUNC(sub_82158778);
PPC_FUNC_IMPL(__imp__sub_82158778) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158834
	if (ctx.cr6.eq) goto loc_82158834;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821587A8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158834
	if (ctx.cr0.eq) goto loc_82158834;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158834
	if (ctx.cr6.eq) goto loc_82158834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821587d8
	if (ctx.cr6.lt) goto loc_821587D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82158834
	goto loc_82158834;
loc_821587D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821587f0
	if (ctx.cr6.lt) goto loc_821587F0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82158834
	goto loc_82158834;
loc_821587F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158808
	if (ctx.cr6.lt) goto loc_82158808;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82158834
	goto loc_82158834;
loc_82158808:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158820
	if (ctx.cr6.lt) goto loc_82158820;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82158834
	goto loc_82158834;
loc_82158820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158834
	if (ctx.cr6.lt) goto loc_82158834;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82158834:
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

__attribute__((alias("__imp__sub_82158850"))) PPC_WEAK_FUNC(sub_82158850);
PPC_FUNC_IMPL(__imp__sub_82158850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// bge cr6,0x82158870
	if (!ctx.cr6.lt) goto loc_82158870;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8215887c
	goto loc_8215887C;
loc_82158870:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8215887c
	if (!ctx.cr6.gt) goto loc_8215887C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8215887C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8215888c
	if (!ctx.cr6.lt) goto loc_8215888C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82158898
	goto loc_82158898;
loc_8215888C:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82158898
	if (!ctx.cr6.gt) goto loc_82158898;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82158898:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x821588a8
	if (!ctx.cr6.lt) goto loc_821588A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821588b4
	goto loc_821588B4;
loc_821588A8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821588b4
	if (!ctx.cr6.gt) goto loc_821588B4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821588B4:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r9,-24952
	ctx.r5.s64 = ctx.r9.s64 + -24952;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,1668
	ctx.r3.s64 = ctx.r11.s64 + 1668;
	// b 0x8218a5f0
	sub_8218A5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821588D8"))) PPC_WEAK_FUNC(sub_821588D8);
PPC_FUNC_IMPL(__imp__sub_821588D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821588E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82158904;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24792
	ctx.r11.s64 = ctx.r11.s64 + -24792;
	// addi r10,r10,-24928
	ctx.r10.s64 = ctx.r10.s64 + -24928;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// addi r9,r9,-24936
	ctx.r9.s64 = ctx.r9.s64 + -24936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x823c35b8
	ctx.lr = 0x82158944;
	sub_823C35B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// li r4,384
	ctx.r4.s64 = 384;
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// addi r3,r31,1668
	ctx.r3.s64 = ctx.r31.s64 + 1668;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82158968;
	sub_822AA648(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82158980
	if (!ctx.cr6.eq) goto loc_82158980;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
loc_82158980:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 | 191;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8214b948
	ctx.lr = 0x821589A0;
	sub_8214B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821589B0"))) PPC_WEAK_FUNC(sub_821589B0);
PPC_FUNC_IMPL(__imp__sub_821589B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82159260
	sub_82159260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821589B8"))) PPC_WEAK_FUNC(sub_821589B8);
PPC_FUNC_IMPL(__imp__sub_821589B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82159260
	sub_82159260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821589C0"))) PPC_WEAK_FUNC(sub_821589C0);
PPC_FUNC_IMPL(__imp__sub_821589C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,2052(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24792
	ctx.r11.s64 = ctx.r11.s64 + -24792;
	// addi r10,r10,-24928
	ctx.r10.s64 = ctx.r10.s64 + -24928;
	// addi r9,r9,-24936
	ctx.r9.s64 = ctx.r9.s64 + -24936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x82158A04;
	sub_821EBAA8(ctx, base);
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158a24
	if (ctx.cr6.eq) goto loc_82158A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82158A24:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158a6c
	if (ctx.cr6.eq) goto loc_82158A6C;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82158a64
	if (ctx.cr6.eq) goto loc_82158A64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82158a6c
	goto loc_82158A6C;
loc_82158A64:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82158A6C;
	sub_82183E40(ctx, base);
loc_82158A6C:
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158a84
	if (ctx.cr6.eq) goto loc_82158A84;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82158A84;
	sub_82183E40(ctx, base);
loc_82158A84:
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x823c31a0
	ctx.lr = 0x82158A90;
	sub_823C31A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x82158A98;
	sub_8214B2A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158AB0"))) PPC_WEAK_FUNC(sub_82158AB0);
PPC_FUNC_IMPL(__imp__sub_82158AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82158AB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82158ACC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82158AD4;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158AE0;
	sub_821837D0(ctx, base);
	// lis r11,431
	ctx.r11.s64 = 28246016;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,10347
	ctx.r11.u64 = ctx.r11.u64 | 10347;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(152));
	// ble cr6,0x82158afc
	if (!ctx.cr6.gt) goto loc_82158AFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82158AFC:
	// li r10,-9
	ctx.r10.s64 = -9;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82158b0c
	if (ctx.cr6.gt) goto loc_82158B0C;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_82158B0C:
	// bl 0x82080d68
	ctx.lr = 0x82158B10;
	sub_82080D68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82158b44
	if (ctx.cr0.eq) goto loc_82158B44;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x82158b48
	if (ctx.cr0.lt) goto loc_82158B48;
loc_82158B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821585b8
	ctx.lr = 0x82158B34;
	sub_821585B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// bge 0x82158b2c
	if (!ctx.cr0.lt) goto loc_82158B2C;
	// b 0x82158b48
	goto loc_82158B48;
loc_82158B44:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82158B48:
	// stw r30,1460(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1460, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,1152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1152, ctx.r28.u32);
	// ble cr6,0x82158b98
	if (!ctx.cr6.gt) goto loc_82158B98;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82158B5C:
	// lwz r11,1152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1152);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82158058
	ctx.lr = 0x82158B68;
	sub_82158058(ctx, base);
	// lwz r10,1152(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1152);
	// add. r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82158b80
	if (!ctx.cr0.eq) goto loc_82158B80;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82158B80:
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82248a40
	ctx.lr = 0x82158B8C;
	sub_82248A40(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,152
	ctx.r31.s64 = ctx.r31.s64 + 152;
	// bne 0x82158b5c
	if (!ctx.cr0.eq) goto loc_82158B5C;
loc_82158B98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158BA0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158BA8"))) PPC_WEAK_FUNC(sub_82158BA8);
PPC_FUNC_IMPL(__imp__sub_82158BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82158BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c0c
	if (ctx.cr0.eq) goto loc_82158C0C;
	// lwz r10,-8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mulli r11,r10,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(152));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82158bf0
	if (ctx.cr0.lt) goto loc_82158BF0;
loc_82158BDC:
	// addi r30,r30,-152
	ctx.r30.s64 = ctx.r30.s64 + -152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158040
	ctx.lr = 0x82158BE8;
	sub_82158040(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82158bdc
	if (!ctx.cr0.lt) goto loc_82158BDC;
loc_82158BF0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c04
	if (ctx.cr0.eq) goto loc_82158C04;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82158C04;
	sub_82183E40(ctx, base);
loc_82158C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82158c2c
	goto loc_82158C2C;
loc_82158C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158040
	ctx.lr = 0x82158C14;
	sub_82158040(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c28
	if (ctx.cr0.eq) goto loc_82158C28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82158C28;
	sub_82183E40(ctx, base);
loc_82158C28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82158C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158C38"))) PPC_WEAK_FUNC(sub_82158C38);
PPC_FUNC_IMPL(__imp__sub_82158C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82158C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82158C54;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82158C5C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158C68;
	sub_821837D0(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82158c80
	if (!ctx.cr6.gt) goto loc_82158C80;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82158C80:
	// bl 0x82080d68
	ctx.lr = 0x82158C84;
	sub_82080D68(ctx, base);
	// stw r3,1156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1156, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82158cb4
	if (!ctx.cr6.gt) goto loc_82158CB4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82158C94:
	// lwz r11,1156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1156);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82158CA8;
	sub_821847A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82158c94
	if (!ctx.cr0.eq) goto loc_82158C94;
loc_82158CB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158CBC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158CC8"))) PPC_WEAK_FUNC(sub_82158CC8);
PPC_FUNC_IMPL(__imp__sub_82158CC8) {
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
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158d90
	if (ctx.cr0.eq) goto loc_82158D90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82158d88
	if (!ctx.cr6.gt) goto loc_82158D88;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6036(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6036, temp.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x8210a9b0
	ctx.lr = 0x82158D3C;
	sub_8210A9B0(ctx, base);
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82158d68
	if (ctx.cr6.eq) goto loc_82158D68;
	// ble cr6,0x82158d88
	if (!ctx.cr6.gt) goto loc_82158D88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82158d88
	if (ctx.cr6.gt) goto loc_82158D88;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6324(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6324, temp.u32);
	// b 0x82158d78
	goto loc_82158D78;
loc_82158D68:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6180(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6180, temp.u32);
loc_82158D78:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x82158D88;
	sub_8210A9B0(ctx, base);
loc_82158D88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82158D90;
	sub_8214D630(ctx, base);
loc_82158D90:
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

__attribute__((alias("__imp__sub_82158DA8"))) PPC_WEAK_FUNC(sub_82158DA8);
PPC_FUNC_IMPL(__imp__sub_82158DA8) {
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
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82158DE0;
	sub_823C5728(ctx, base);
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

__attribute__((alias("__imp__sub_82158DF8"))) PPC_WEAK_FUNC(sub_82158DF8);
PPC_FUNC_IMPL(__imp__sub_82158DF8) {
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
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82158E30;
	sub_823C5728(ctx, base);
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

__attribute__((alias("__imp__sub_82158E48"))) PPC_WEAK_FUNC(sub_82158E48);
PPC_FUNC_IMPL(__imp__sub_82158E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8214cfd8
	ctx.lr = 0x82158E8C;
	sub_8214CFD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82158ea0
	if (!ctx.cr0.eq) goto loc_82158EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823c18f8
	ctx.lr = 0x82158EA0;
	sub_823C18F8(ctx, base);
loc_82158EA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158EB8"))) PPC_WEAK_FUNC(sub_82158EB8);
PPC_FUNC_IMPL(__imp__sub_82158EB8) {
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
	// lwz r10,1464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82158f10
	if (!ctx.cr6.gt) goto loc_82158F10;
loc_82158EDC:
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r8.u32);
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82158edc
	if (ctx.cr6.lt) goto loc_82158EDC;
loc_82158F10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r5,r9,r6
	ctx.r5.s32 = ctx.r6.s32 ? ctx.r9.s32 / ctx.r6.s32 : 0;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82158F88"))) PPC_WEAK_FUNC(sub_82158F88);
PPC_FUNC_IMPL(__imp__sub_82158F88) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1160
	ctx.r3.s64 = ctx.r3.s64 + 1160;
	// bl 0x823c3280
	ctx.lr = 0x82158FAC;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82158FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r7,1464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r8,1472(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r6,r9,r7
	ctx.r6.s32 = ctx.r7.s32 ? ctx.r9.s32 / ctx.r7.s32 : 0;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andc r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 468, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82159048"))) PPC_WEAK_FUNC(sub_82159048);
PPC_FUNC_IMPL(__imp__sub_82159048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82159058:
	// lwz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bge cr6,0x821590c0
	if (!ctx.cr6.lt) goto loc_821590C0;
	// lwz r7,764(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// mulli r8,r11,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8215910c
	if (!ctx.cr6.gt) goto loc_8215910C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82159090:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82159090
	if (ctx.cr6.lt) goto loc_82159090;
	// b 0x8215910c
	goto loc_8215910C;
loc_821590C0:
	// lwz r8,764(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8215910c
	if (!ctx.cr6.gt) goto loc_8215910C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821590E0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821590e0
	if (ctx.cr6.lt) goto loc_821590E0;
loc_8215910C:
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82159058
	if (ctx.cr6.lt) goto loc_82159058;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159120"))) PPC_WEAK_FUNC(sub_82159120);
PPC_FUNC_IMPL(__imp__sub_82159120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159128;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,-24984
	ctx.r8.s64 = ctx.r11.s64 + -24984;
loc_82159148:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82159174
	if (ctx.cr6.lt) goto loc_82159174;
	// lwz r6,764(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_82159174:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82159148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159148;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r3,764(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82106eb0
	ctx.lr = 0x82159194;
	sub_82106EB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821591c8
	if (ctx.cr0.eq) goto loc_821591C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d38e8
	ctx.lr = 0x821591A4;
	sub_821D38E8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821d2d38
	ctx.lr = 0x821591C8;
	sub_821D2D38(ctx, base);
loc_821591C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821591e8
	if (ctx.cr6.lt) goto loc_821591E8;
	// lwz r10,764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_821591E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821591F0"))) PPC_WEAK_FUNC(sub_821591F0);
PPC_FUNC_IMPL(__imp__sub_821591F0) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821591FC:
	// lwz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r8,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r8.u32);
	// bdnz 0x821591fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821591FC;
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159260"))) PPC_WEAK_FUNC(sub_82159260);
PPC_FUNC_IMPL(__imp__sub_82159260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821589c0
	ctx.lr = 0x82159280;
	sub_821589C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159294
	if (ctx.cr0.eq) goto loc_82159294;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82159294;
	sub_82183E40(ctx, base);
loc_82159294:
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

__attribute__((alias("__imp__sub_821592B0"))) PPC_WEAK_FUNC(sub_821592B0);
PPC_FUNC_IMPL(__imp__sub_821592B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821592B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215942c
	if (!ctx.cr6.gt) goto loc_8215942C;
	// addi r26,r3,1668
	ctx.r26.s64 = ctx.r3.s64 + 1668;
	// addi r27,r3,1476
	ctx.r27.s64 = ctx.r3.s64 + 1476;
loc_821592DC:
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215942c
	if (!ctx.cr6.lt) goto loc_8215942C;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r10,1152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158458
	ctx.lr = 0x82159304;
	sub_82158458(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r8.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r28.u32);
	// bl 0x82158778
	ctx.lr = 0x82159340;
	sub_82158778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821591f0
	ctx.lr = 0x82159350;
	sub_821591F0(ctx, base);
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82159414
	if (!ctx.cr6.eq) goto loc_82159414;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158550
	ctx.lr = 0x82159364;
	sub_82158550(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82084038
	ctx.lr = 0x8215937C;
	sub_82084038(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,2776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2776, ctx.r27.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,2796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2796, ctx.r28.u32);
	// bl 0x821583f0
	ctx.lr = 0x821593B4;
	sub_821583F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158388
	ctx.lr = 0x821593C0;
	sub_82158388(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158320
	ctx.lr = 0x821593CC;
	sub_82158320(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82158850
	ctx.lr = 0x821593E4;
	sub_82158850(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r26,3544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3544, ctx.r26.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,3564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3564, ctx.r28.u32);
loc_82159414:
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821592dc
	if (ctx.cr6.lt) goto loc_821592DC;
loc_8215942C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159438"))) PPC_WEAK_FUNC(sub_82159438);
PPC_FUNC_IMPL(__imp__sub_82159438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214be60
	ctx.lr = 0x8215944C;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x8215945C;
	sub_82109E00(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82159460;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82159468;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159474;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8215947C;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8215949c
	if (ctx.cr0.eq) goto loc_8215949C;
	// bl 0x82182e90
	ctx.lr = 0x82159488;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// bl 0x82156630
	ctx.lr = 0x82159498;
	sub_82156630(ctx, base);
	// b 0x821594a0
	goto loc_821594A0;
loc_8215949C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821594A0:
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159048
	ctx.lr = 0x821594AC;
	sub_82159048(ctx, base);
	// bl 0x82158eb8
	ctx.lr = 0x821594B0;
	sub_82158EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821592b0
	ctx.lr = 0x821594B8;
	sub_821592B0(ctx, base);
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x821594C8;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x821594E8;
	sub_823C31B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x821594F8;
	sub_82159120(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x82159508;
	sub_82159120(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x8215950C;
	sub_821EB440(ctx, base);
	// stw r3,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r3.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x821ebaa8
	ctx.lr = 0x82159518;
	sub_821EBAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159520;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159528"))) PPC_WEAK_FUNC(sub_82159528);
PPC_FUNC_IMPL(__imp__sub_82159528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215959c
	if (ctx.cr0.eq) goto loc_8215959C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82159120
	ctx.lr = 0x8215955C;
	sub_82159120(ctx, base);
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82159580
	if (ctx.cr6.lt) goto loc_82159580;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82159580
	if (!ctx.cr6.eq) goto loc_82159580;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_82159580:
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215959c
	if (!ctx.cr6.gt) goto loc_8215959C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8215959c
	if (!ctx.cr6.gt) goto loc_8215959C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_8215959C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821595e4
	if (ctx.cr0.eq) goto loc_821595E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x821595B8;
	sub_82159120(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821595c8
	if (!ctx.cr6.eq) goto loc_821595C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_821595C8:
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821595e4
	if (ctx.cr6.lt) goto loc_821595E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_821595E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158eb8
	ctx.lr = 0x821595EC;
	sub_82158EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821592b0
	ctx.lr = 0x821595F4;
	sub_821592B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159610"))) PPC_WEAK_FUNC(sub_82159610);
PPC_FUNC_IMPL(__imp__sub_82159610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82159618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c53c0
	ctx.lr = 0x82159624;
	sub_823C53C0(ctx, base);
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821596a0
	if (ctx.cr6.eq) goto loc_821596A0;
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r31,r29,-28
	ctx.r31.s64 = ctx.r29.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821596a0
	if (ctx.cr6.eq) goto loc_821596A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,1132
	ctx.r3.s64 = ctx.r29.s64 + 1132;
	// bl 0x823c3240
	ctx.lr = 0x82159694;
	sub_823C3240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159528
	ctx.lr = 0x821596A0;
	sub_82159528(ctx, base);
loc_821596A0:
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x82158f88
	ctx.lr = 0x821596A8;
	sub_82158F88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821596B0"))) PPC_WEAK_FUNC(sub_821596B0);
PPC_FUNC_IMPL(__imp__sub_821596B0) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821596CC;
	sub_822AA648(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x821596D8;
	sub_822AA648(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x821596E4;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82159710"))) PPC_WEAK_FUNC(sub_82159710);
PPC_FUNC_IMPL(__imp__sub_82159710) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159720"))) PPC_WEAK_FUNC(sub_82159720);
PPC_FUNC_IMPL(__imp__sub_82159720) {
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
	// add. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x82159774
	if (ctx.cr0.eq) goto loc_82159774;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82159774:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8218a5f0
	ctx.lr = 0x82159790;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821597A0"))) PPC_WEAK_FUNC(sub_821597A0);
PPC_FUNC_IMPL(__imp__sub_821597A0) {
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
	// lwz r3,756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// addi r10,r10,-24488
	ctx.r10.s64 = ctx.r10.s64 + -24488;
	// addi r9,r9,-24496
	ctx.r9.s64 = ctx.r9.s64 + -24496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x821597f8
	if (ctx.cr6.eq) goto loc_821597F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821597F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821597F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// bl 0x823c31a0
	ctx.lr = 0x82159808;
	sub_823C31A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x82159810;
	sub_8214B2A8(ctx, base);
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

__attribute__((alias("__imp__sub_82159828"))) PPC_WEAK_FUNC(sub_82159828);
PPC_FUNC_IMPL(__imp__sub_82159828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82159900
	sub_82159900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159830"))) PPC_WEAK_FUNC(sub_82159830);
PPC_FUNC_IMPL(__imp__sub_82159830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82159900
	sub_82159900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159838"))) PPC_WEAK_FUNC(sub_82159838);
PPC_FUNC_IMPL(__imp__sub_82159838) {
	PPC_FUNC_PROLOGUE();
	// extsw r5,r4
	ctx.r5.s64 = ctx.r4.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x82084038
	sub_82084038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159850"))) PPC_WEAK_FUNC(sub_82159850);
PPC_FUNC_IMPL(__imp__sub_82159850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82159858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82159880;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// addi r10,r10,-24488
	ctx.r10.s64 = ctx.r10.s64 + -24488;
	// addi r9,r9,-24496
	ctx.r9.s64 = ctx.r9.s64 + -24496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x82248a40
	ctx.lr = 0x821598B8;
	sub_82248A40(ctx, base);
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c35b8
	ctx.lr = 0x821598C8;
	sub_823C35B8(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// stw r28,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 | 63;
	// stw r29,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8214b948
	ctx.lr = 0x821598F4;
	sub_8214B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159900"))) PPC_WEAK_FUNC(sub_82159900);
PPC_FUNC_IMPL(__imp__sub_82159900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821597a0
	ctx.lr = 0x82159920;
	sub_821597A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159934
	if (ctx.cr0.eq) goto loc_82159934;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82159934;
	sub_82183E40(ctx, base);
loc_82159934:
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

__attribute__((alias("__imp__sub_82159950"))) PPC_WEAK_FUNC(sub_82159950);
PPC_FUNC_IMPL(__imp__sub_82159950) {
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
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215997C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82159a18
	if (ctx.cr0.eq) goto loc_82159A18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82159a10
	if (!ctx.cr6.gt) goto loc_82159A10;
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821599d0
	if (ctx.cr6.eq) goto loc_821599D0;
	// ble cr6,0x821599f0
	if (!ctx.cr6.gt) goto loc_821599F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821599f0
	if (ctx.cr6.gt) goto loc_821599F0;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5748(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5748, temp.u32);
	// b 0x821599e0
	goto loc_821599E0;
loc_821599D0:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5604(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5604, temp.u32);
loc_821599E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x821599F0;
	sub_8210A9B0(ctx, base);
loc_821599F0:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5892, temp.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x8210a9b0
	ctx.lr = 0x82159A10;
	sub_8210A9B0(ctx, base);
loc_82159A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82159A18;
	sub_8214D630(ctx, base);
loc_82159A18:
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

__attribute__((alias("__imp__sub_82159A30"))) PPC_WEAK_FUNC(sub_82159A30);
PPC_FUNC_IMPL(__imp__sub_82159A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82159a78
	if (ctx.cr6.lt) goto loc_82159A78;
	// bne cr6,0x82159a8c
	if (!ctx.cr6.eq) goto loc_82159A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82159a80
	goto loc_82159A80;
loc_82159A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82159A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82159A8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c5728
	ctx.lr = 0x82159A9C;
	sub_823C5728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159AB8"))) PPC_WEAK_FUNC(sub_82159AB8);
PPC_FUNC_IMPL(__imp__sub_82159AB8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82159AD8:
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r9.u32);
	// bdnz 0x82159ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159AD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82159B40"))) PPC_WEAK_FUNC(sub_82159B40);
PPC_FUNC_IMPL(__imp__sub_82159B40) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// bl 0x823c3280
	ctx.lr = 0x82159B64;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82159B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 468, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82159BD0"))) PPC_WEAK_FUNC(sub_82159BD0);
PPC_FUNC_IMPL(__imp__sub_82159BD0) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82159BE0:
	// addic. r10,r9,8
	ctx.xer.ca = ctx.r9.u32 > 4294967287;
	ctx.r10.s64 = ctx.r9.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82159bfc
	if (ctx.cr0.lt) goto loc_82159BFC;
	// lwz r10,764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r8.u32);
loc_82159BFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// bdnz 0x82159be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159BE0;
	// addic. r11,r4,8
	ctx.xer.ca = ctx.r4.u32 > 4294967287;
	ctx.r11.s64 = ctx.r4.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159C30"))) PPC_WEAK_FUNC(sub_82159C30);
PPC_FUNC_IMPL(__imp__sub_82159C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823c53c0
	ctx.lr = 0x82159C44;
	sub_823C53C0(ctx, base);
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159cb8
	if (ctx.cr6.eq) goto loc_82159CB8;
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82159cb8
	if (ctx.cr6.eq) goto loc_82159CB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1180
	ctx.r3.s64 = ctx.r30.s64 + 1180;
	// bl 0x823c3240
	ctx.lr = 0x82159CB0;
	sub_823C3240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159ab8
	ctx.lr = 0x82159CB8;
	sub_82159AB8(ctx, base);
loc_82159CB8:
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82159b40
	ctx.lr = 0x82159CC0;
	sub_82159B40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159CC8"))) PPC_WEAK_FUNC(sub_82159CC8);
PPC_FUNC_IMPL(__imp__sub_82159CC8) {
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
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,2008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2008, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,2028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2028, ctx.r6.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x82159bd0
	ctx.lr = 0x82159CF8;
	sub_82159BD0(ctx, base);
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82159d74
	if (!ctx.cr6.eq) goto loc_82159D74;
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r9,r7,20
	ctx.r9.s64 = ctx.r7.s64 + 20;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,5848(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5848, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,5868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5868, ctx.r6.u32);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8176, ctx.r9.u32);
	// stw r10,8172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8172, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r9,8432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8432, ctx.r9.u32);
	// stw r10,8428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8428, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,44(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r9,8688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8688, ctx.r9.u32);
	// stw r10,8684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8684, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8920, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8940, ctx.r6.u32);
loc_82159D74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159D88"))) PPC_WEAK_FUNC(sub_82159D88);
PPC_FUNC_IMPL(__imp__sub_82159D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214be60
	ctx.lr = 0x82159D9C;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x82159DAC;
	sub_82109E00(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82159DB0;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82159DB8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159DC4;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x82159DCC;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82159dec
	if (ctx.cr0.eq) goto loc_82159DEC;
	// bl 0x82182e90
	ctx.lr = 0x82159DD8;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156630
	ctx.lr = 0x82159DE8;
	sub_82156630(ctx, base);
	// b 0x82159df0
	goto loc_82159DF0;
loc_82159DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82159DF0:
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// addi r30,r31,1208
	ctx.r30.s64 = ctx.r31.s64 + 1208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x82159E04;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82159E24;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159ab8
	ctx.lr = 0x82159E2C;
	sub_82159AB8(ctx, base);
	// addi r4,r31,1152
	ctx.r4.s64 = ctx.r31.s64 + 1152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159cc8
	ctx.lr = 0x82159E38;
	sub_82159CC8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ebaa8
	ctx.lr = 0x82159E40;
	sub_821EBAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159E48;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159E50"))) PPC_WEAK_FUNC(sub_82159E50);
PPC_FUNC_IMPL(__imp__sub_82159E50) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82159e80
	if (ctx.cr6.eq) goto loc_82159E80;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3468
	ctx.lr = 0x82159E78;
	sub_823C3468(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82159E80:
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

__attribute__((alias("__imp__sub_82159E98"))) PPC_WEAK_FUNC(sub_82159E98);
PPC_FUNC_IMPL(__imp__sub_82159E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c2ff0
	ctx.lr = 0x82159EC8;
	sub_823C2FF0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,-792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x82159EE0;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82159f08
	if (!ctx.cr0.eq) goto loc_82159F08;
	// bl 0x82183078
	ctx.lr = 0x82159EEC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x82159EF8;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x82159F00;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159F08;
	sub_821837D0(ctx, base);
loc_82159F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159F18"))) PPC_WEAK_FUNC(sub_82159F18);
PPC_FUNC_IMPL(__imp__sub_82159F18) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159F34;
	sub_821E90A8(ctx, base);
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
}

__attribute__((alias("__imp__sub_82159F50"))) PPC_WEAK_FUNC(sub_82159F50);
PPC_FUNC_IMPL(__imp__sub_82159F50) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159F74;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82159fbc
	if (ctx.cr0.eq) goto loc_82159FBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82159fbc
	if (!ctx.cr6.gt) goto loc_82159FBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,10788(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10788, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8210a9b0
	ctx.lr = 0x82159FBC;
	sub_8210A9B0(ctx, base);
loc_82159FBC:
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

__attribute__((alias("__imp__sub_82159FD0"))) PPC_WEAK_FUNC(sub_82159FD0);
PPC_FUNC_IMPL(__imp__sub_82159FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159FF4;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a004
	if (!ctx.cr0.eq) goto loc_8215A004;
loc_82159FFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215a04c
	goto loc_8215A04C;
loc_8215A004:
	// lwz r11,-792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82109e00
	ctx.lr = 0x8215A01C;
	sub_82109E00(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,221
	ctx.r4.s64 = 221;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82106f58
	ctx.lr = 0x8215A02C;
	sub_82106F58(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82159ffc
	if (ctx.cr6.eq) goto loc_82159FFC;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823c3410
	ctx.lr = 0x8215A040;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A058"))) PPC_WEAK_FUNC(sub_8215A058);
PPC_FUNC_IMPL(__imp__sub_8215A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215A060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8215A074;
	sub_82185740(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24044
	ctx.r10.s64 = ctx.r10.s64 + -24044;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r30,-792(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x8215A0B0;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a0d8
	if (!ctx.cr0.eq) goto loc_8215A0D8;
	// bl 0x82183078
	ctx.lr = 0x8215A0BC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x8215A0C8;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x8215A0D0;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215A0D8;
	sub_821837D0(ctx, base);
loc_8215A0D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A0E8"))) PPC_WEAK_FUNC(sub_8215A0E8);
PPC_FUNC_IMPL(__imp__sub_8215A0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x8215A114;
	sub_821857F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a128
	if (ctx.cr0.eq) goto loc_8215A128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215A128;
	sub_82183E40(ctx, base);
loc_8215A128:
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

__attribute__((alias("__imp__sub_8215A148"))) PPC_WEAK_FUNC(sub_8215A148);
PPC_FUNC_IMPL(__imp__sub_8215A148) {
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
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a19c
	if (ctx.cr0.eq) goto loc_8215A19C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821e90a8
	ctx.lr = 0x8215A174;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a19c
	if (ctx.cr0.eq) goto loc_8215A19C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a19c
	if (ctx.cr6.eq) goto loc_8215A19C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x8210a9b0
	ctx.lr = 0x8215A19C;
	sub_8210A9B0(ctx, base);
loc_8215A19C:
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

__attribute__((alias("__imp__sub_8215A1B0"))) PPC_WEAK_FUNC(sub_8215A1B0);
PPC_FUNC_IMPL(__imp__sub_8215A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215A1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r10,-24056
	ctx.r30.s64 = ctx.r10.s64 + -24056;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215A1D8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215a1fc
	if (ctx.cr6.lt) goto loc_8215A1FC;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r7.u32);
loc_8215A1FC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8215a1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215A1D8;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x8215A214;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a220
	if (ctx.cr0.eq) goto loc_8215A220;
	// bl 0x821d38e8
	ctx.lr = 0x8215A220;
	sub_821D38E8(ctx, base);
loc_8215A220:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215a244
	if (ctx.cr6.lt) goto loc_8215A244;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
loc_8215A244:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A250"))) PPC_WEAK_FUNC(sub_8215A250);
PPC_FUNC_IMPL(__imp__sub_8215A250) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-24056
	ctx.r10.s64 = ctx.r10.s64 + -24056;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106eb0
	ctx.lr = 0x8215A278;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a290
	if (ctx.cr0.eq) goto loc_8215A290;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215a294
	if (!ctx.cr6.eq) goto loc_8215A294;
loc_8215A290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215A294:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A2A8"))) PPC_WEAK_FUNC(sub_8215A2A8);
PPC_FUNC_IMPL(__imp__sub_8215A2A8) {
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
	// bl 0x8215a250
	ctx.lr = 0x8215A2C0;
	sub_8215A250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a2e4
	if (ctx.cr0.eq) goto loc_8215A2E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a1b0
	ctx.lr = 0x8215A2DC;
	sub_8215A1B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8215A2E4:
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

__attribute__((alias("__imp__sub_8215A2F8"))) PPC_WEAK_FUNC(sub_8215A2F8);
PPC_FUNC_IMPL(__imp__sub_8215A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8215a34c
	if (ctx.cr6.gt) goto loc_8215A34C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x8215a1b0
	ctx.lr = 0x8215A33C;
	sub_8215A1B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215a3bc
	goto loc_8215A3BC;
loc_8215A34C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215a3b0
	if (!ctx.cr0.eq) goto loc_8215A3B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-7936
	ctx.r10.s64 = ctx.r10.s64 + -7936;
	// divwu r11,r9,r11
	ctx.r11.u32 = ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0;
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// stw r7,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r7.u32);
loc_8215A3B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8215A3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A3D8"))) PPC_WEAK_FUNC(sub_8215A3D8);
PPC_FUNC_IMPL(__imp__sub_8215A3D8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A3FC;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a458
	if (ctx.cr0.eq) goto loc_8215A458;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a458
	if (ctx.cr6.eq) goto loc_8215A458;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a450
	if (ctx.cr6.eq) goto loc_8215A450;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a444
	if (ctx.cr6.eq) goto loc_8215A444;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8215a458
	if (!ctx.cr6.eq) goto loc_8215A458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a250
	ctx.lr = 0x8215A430;
	sub_8215A250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a458
	if (ctx.cr0.eq) goto loc_8215A458;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215a458
	goto loc_8215A458;
loc_8215A444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a2f8
	ctx.lr = 0x8215A44C;
	sub_8215A2F8(ctx, base);
	// b 0x8215a458
	goto loc_8215A458;
loc_8215A450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a2a8
	ctx.lr = 0x8215A458;
	sub_8215A2A8(ctx, base);
loc_8215A458:
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

__attribute__((alias("__imp__sub_8215A470"))) PPC_WEAK_FUNC(sub_8215A470);
PPC_FUNC_IMPL(__imp__sub_8215A470) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8215a1b0
	ctx.lr = 0x8215A4A4;
	sub_8215A1B0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215A4D8"))) PPC_WEAK_FUNC(sub_8215A4D8);
PPC_FUNC_IMPL(__imp__sub_8215A4D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a520
	if (ctx.cr6.eq) goto loc_8215A520;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215a1b0
	ctx.lr = 0x8215A500;
	sub_8215A1B0(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,57796
	ctx.r11.u64 = ctx.r11.u64 | 57796;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8215A520:
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

__attribute__((alias("__imp__sub_8215A538"))) PPC_WEAK_FUNC(sub_8215A538);
PPC_FUNC_IMPL(__imp__sub_8215A538) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r11,r11,-24036
	ctx.r11.s64 = ctx.r11.s64 + -24036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x8215A560;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x8215A568;
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

__attribute__((alias("__imp__sub_8215A580"))) PPC_WEAK_FUNC(sub_8215A580);
PPC_FUNC_IMPL(__imp__sub_8215A580) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8215a5b0
	if (ctx.cr6.gt) goto loc_8215A5B0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x823c3468
	ctx.lr = 0x8215A5A8;
	sub_823C3468(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8215A5B0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_8215A5D0"))) PPC_WEAK_FUNC(sub_8215A5D0);
PPC_FUNC_IMPL(__imp__sub_8215A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215A5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8215A5EC;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24036
	ctx.r11.s64 = ctx.r11.s64 + -24036;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823c2ff0
	ctx.lr = 0x8215A60C;
	sub_823C2FF0(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x822aa648
	ctx.lr = 0x8215A620;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,-792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x8215A634;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a65c
	if (!ctx.cr0.eq) goto loc_8215A65C;
	// bl 0x82183078
	ctx.lr = 0x8215A640;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x8215A64C;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x8215A654;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215A65C;
	sub_821837D0(ctx, base);
loc_8215A65C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A668"))) PPC_WEAK_FUNC(sub_8215A668);
PPC_FUNC_IMPL(__imp__sub_8215A668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215a538
	ctx.lr = 0x8215A688;
	sub_8215A538(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a69c
	if (ctx.cr0.eq) goto loc_8215A69C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215A69C;
	sub_82183E40(ctx, base);
loc_8215A69C:
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

__attribute__((alias("__imp__sub_8215A6B8"))) PPC_WEAK_FUNC(sub_8215A6B8);
PPC_FUNC_IMPL(__imp__sub_8215A6B8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A6DC;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a730
	if (ctx.cr0.eq) goto loc_8215A730;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a730
	if (ctx.cr6.eq) goto loc_8215A730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8215a730
	if (!ctx.cr6.gt) goto loc_8215A730;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,10644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10644, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x8215A730;
	sub_8210A9B0(ctx, base);
loc_8215A730:
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

__attribute__((alias("__imp__sub_8215A748"))) PPC_WEAK_FUNC(sub_8215A748);
PPC_FUNC_IMPL(__imp__sub_8215A748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215A750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,16208
	ctx.r4.s64 = 16208;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215a7a4
	if (ctx.cr6.eq) goto loc_8215A7A4;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,16207
	ctx.r4.s64 = 16207;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8215A7A4:
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x8215A7B4;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,3700
	ctx.r5.s64 = ctx.r11.s64 + 3700;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8215A7D0;
	sub_8218A5F0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,56280
	ctx.r10.u64 = ctx.r10.u64 | 56280;
	// ori r9,r9,56300
	ctx.r9.u64 = ctx.r9.u64 | 56300;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x823c3410
	ctx.lr = 0x8215A80C;
	sub_823C3410(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A830"))) PPC_WEAK_FUNC(sub_8215A830);
PPC_FUNC_IMPL(__imp__sub_8215A830) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A854;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a8b4
	if (ctx.cr0.eq) goto loc_8215A8B4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a8a0
	if (ctx.cr6.eq) goto loc_8215A8A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a894
	if (ctx.cr6.eq) goto loc_8215A894;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8215a8b4
	if (!ctx.cr6.eq) goto loc_8215A8B4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8215a8b0
	goto loc_8215A8B0;
loc_8215A894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a580
	ctx.lr = 0x8215A89C;
	sub_8215A580(ctx, base);
	// b 0x8215a8b4
	goto loc_8215A8B4;
loc_8215A8A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8215A8B0:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8215A8B4:
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

__attribute__((alias("__imp__sub_8215A8C8"))) PPC_WEAK_FUNC(sub_8215A8C8);
PPC_FUNC_IMPL(__imp__sub_8215A8C8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a8f8
	if (ctx.cr6.eq) goto loc_8215A8F8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3410
	ctx.lr = 0x8215A8F0;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A8F8:
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

__attribute__((alias("__imp__sub_8215A910"))) PPC_WEAK_FUNC(sub_8215A910);
PPC_FUNC_IMPL(__imp__sub_8215A910) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a948
	if (ctx.cr6.eq) goto loc_8215A948;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a948
	if (ctx.cr6.eq) goto loc_8215A948;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3468
	ctx.lr = 0x8215A940;
	sub_823C3468(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A948:
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

__attribute__((alias("__imp__sub_8215A960"))) PPC_WEAK_FUNC(sub_8215A960);
PPC_FUNC_IMPL(__imp__sub_8215A960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c2ff0
	ctx.lr = 0x8215A998;
	sub_823C2FF0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82109e00
	ctx.lr = 0x8215A9B8;
	sub_82109E00(ctx, base);
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

__attribute__((alias("__imp__sub_8215A9D8"))) PPC_WEAK_FUNC(sub_8215A9D8);
PPC_FUNC_IMPL(__imp__sub_8215A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x8215AA08;
	sub_823C3048(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215aa1c
	if (ctx.cr0.eq) goto loc_8215AA1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215AA1C;
	sub_82183E40(ctx, base);
loc_8215AA1C:
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

__attribute__((alias("__imp__sub_8215AA38"))) PPC_WEAK_FUNC(sub_8215AA38);
PPC_FUNC_IMPL(__imp__sub_8215AA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,11076(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11076, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8210a9b0
	sub_8210A9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215AA84"))) PPC_WEAK_FUNC(sub_8215AA84);
PPC_FUNC_IMPL(__imp__sub_8215AA84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AA88"))) PPC_WEAK_FUNC(sub_8215AA88);
PPC_FUNC_IMPL(__imp__sub_8215AA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AA98"))) PPC_WEAK_FUNC(sub_8215AA98);
PPC_FUNC_IMPL(__imp__sub_8215AA98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24004
	ctx.r10.s64 = ctx.r10.s64 + -24004;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AAD8"))) PPC_WEAK_FUNC(sub_8215AAD8);
PPC_FUNC_IMPL(__imp__sub_8215AAD8) {
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
	// bl 0x8215bd08
	ctx.lr = 0x8215AAF4;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215ab2c
	if (ctx.cr6.eq) goto loc_8215AB2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// bl 0x82256350
	ctx.lr = 0x8215AB10;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab2c
	if (!ctx.cr0.eq) goto loc_8215AB2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8215ab30
	goto loc_8215AB30;
loc_8215AB2C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8215AB30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AB40;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab88
	if (!ctx.cr0.eq) goto loc_8215AB88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x8215ab90
	if (!ctx.cr0.eq) goto loc_8215AB90;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AB6C;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab8c
	if (!ctx.cr0.eq) goto loc_8215AB8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8215ab90
	goto loc_8215AB90;
loc_8215AB88:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8215AB8C:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8215AB90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,247
	ctx.r4.s64 = 247;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ABA0;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215abe8
	if (!ctx.cr0.eq) goto loc_8215ABE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x8215abf0
	if (!ctx.cr0.eq) goto loc_8215ABF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ABCC;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215abec
	if (!ctx.cr0.eq) goto loc_8215ABEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215abf0
	goto loc_8215ABF0;
loc_8215ABE8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_8215ABEC:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_8215ABF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,249
	ctx.r4.s64 = 249;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC00;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac48
	if (!ctx.cr0.eq) goto loc_8215AC48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x8215ac50
	if (!ctx.cr0.eq) goto loc_8215AC50;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,248
	ctx.r4.s64 = 248;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC2C;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac4c
	if (!ctx.cr0.eq) goto loc_8215AC4C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8215ac50
	goto loc_8215AC50;
loc_8215AC48:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8215AC4C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8215AC50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,245
	ctx.r4.s64 = 245;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC60;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac7c
	if (!ctx.cr0.eq) goto loc_8215AC7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8215ac80
	goto loc_8215AC80;
loc_8215AC7C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_8215AC80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,235
	ctx.r4.s64 = 235;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC90;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215acd8
	if (!ctx.cr0.eq) goto loc_8215ACD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne 0x8215ace0
	if (!ctx.cr0.eq) goto loc_8215ACE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,234
	ctx.r4.s64 = 234;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ACBC;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215acdc
	if (!ctx.cr0.eq) goto loc_8215ACDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8215ace0
	goto loc_8215ACE0;
loc_8215ACD8:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8215ACDC:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8215ACE0:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_8215AD00"))) PPC_WEAK_FUNC(sub_8215AD00);
PPC_FUNC_IMPL(__imp__sub_8215AD00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AD20"))) PPC_WEAK_FUNC(sub_8215AD20);
PPC_FUNC_IMPL(__imp__sub_8215AD20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AD40"))) PPC_WEAK_FUNC(sub_8215AD40);
PPC_FUNC_IMPL(__imp__sub_8215AD40) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215AD64;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne 0x8215ad74
	if (!ctx.cr0.eq) goto loc_8215AD74;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215AD74:
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

__attribute__((alias("__imp__sub_8215AD90"))) PPC_WEAK_FUNC(sub_8215AD90);
PPC_FUNC_IMPL(__imp__sub_8215AD90) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215ADB4;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne 0x8215adc4
	if (!ctx.cr0.eq) goto loc_8215ADC4;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215ADC4:
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

__attribute__((alias("__imp__sub_8215ADE0"))) PPC_WEAK_FUNC(sub_8215ADE0);
PPC_FUNC_IMPL(__imp__sub_8215ADE0) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215AE04;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne 0x8215ae14
	if (!ctx.cr0.eq) goto loc_8215AE14;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215AE14:
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

__attribute__((alias("__imp__sub_8215AE30"))) PPC_WEAK_FUNC(sub_8215AE30);
PPC_FUNC_IMPL(__imp__sub_8215AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215AE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bb10
	ctx.lr = 0x8215AE64;
	sub_8215BB10(ctx, base);
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b910
	ctx.lr = 0x8215AE70;
	sub_8215B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215AE80"))) PPC_WEAK_FUNC(sub_8215AE80);
PPC_FUNC_IMPL(__imp__sub_8215AE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215b888
	ctx.lr = 0x8215AEB0;
	sub_8215B888(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215aec4
	if (ctx.cr0.eq) goto loc_8215AEC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215AEC4;
	sub_82183E40(ctx, base);
loc_8215AEC4:
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

__attribute__((alias("__imp__sub_8215AEE0"))) PPC_WEAK_FUNC(sub_8215AEE0);
PPC_FUNC_IMPL(__imp__sub_8215AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8215AEE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// addi r24,r11,1824
	ctx.r24.s64 = ctx.r11.s64 + 1824;
	// lwz r27,704(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x82227aa0
	ctx.lr = 0x8215AF04;
	sub_82227AA0(ctx, base);
	// lwz r25,32(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8215afdc
	if (ctx.cr6.eq) goto loc_8215AFDC;
loc_8215AF14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822291e8
	ctx.lr = 0x8215AF20;
	sub_822291E8(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8215afd0
	if (ctx.cr6.eq) goto loc_8215AFD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215b500
	ctx.lr = 0x8215AF38;
	sub_8215B500(ctx, base);
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215b520
	ctx.lr = 0x8215AF68;
	sub_8215B520(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b6e0
	ctx.lr = 0x8215AF74;
	sub_8215B6E0(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8215afb8
	if (ctx.cr6.eq) goto loc_8215AFB8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8215afa8
	if (ctx.cr6.eq) goto loc_8215AFA8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x8215afc4
	if (!ctx.cr6.eq) goto loc_8215AFC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b590
	ctx.lr = 0x8215AF98;
	sub_8215B590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b670
	ctx.lr = 0x8215AFA4;
	sub_8215B670(ctx, base);
	// b 0x8215afc4
	goto loc_8215AFC4;
loc_8215AFA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b600
	ctx.lr = 0x8215AFB4;
	sub_8215B600(ctx, base);
	// b 0x8215afc4
	goto loc_8215AFC4;
loc_8215AFB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b590
	ctx.lr = 0x8215AFC4;
	sub_8215B590(ctx, base);
loc_8215AFC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b7e8
	ctx.lr = 0x8215AFD0;
	sub_8215B7E8(ctx, base);
loc_8215AFD0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8215af14
	if (ctx.cr6.lt) goto loc_8215AF14;
loc_8215AFDC:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8215aff0
	if (!ctx.cr6.lt) goto loc_8215AFF0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x8215bcb8
	ctx.lr = 0x8215AFF0;
	sub_8215BCB8(ctx, base);
loc_8215AFF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215AFF8"))) PPC_WEAK_FUNC(sub_8215AFF8);
PPC_FUNC_IMPL(__imp__sub_8215AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8215B000;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8215B00C;
	sub_82227AA0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r27,-1
	ctx.r25.s64 = ctx.r27.s64 + -1;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// addi r28,r11,1824
	ctx.r28.s64 = ctx.r11.s64 + 1824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229078
	ctx.lr = 0x8215B028;
	sub_82229078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229080
	ctx.lr = 0x8215B034;
	sub_82229080(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8215b0c4
	if (ctx.cr6.eq) goto loc_8215B0C4;
	// addi r23,r30,16
	ctx.r23.s64 = ctx.r30.s64 + 16;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
loc_8215B04C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822291e8
	ctx.lr = 0x8215B05C;
	sub_822291E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-744(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -744);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822225f8
	ctx.lr = 0x8215B070;
	sub_822225F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8215b094
	if (ctx.cr6.eq) goto loc_8215B094;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8215b0a4
	if (!ctx.cr6.eq) goto loc_8215B0A4;
	// subf r11,r31,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r31.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215b0a4
	goto loc_8215B0A4;
loc_8215B094:
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x8215b0a4
	if (ctx.cr6.eq) goto loc_8215B0A4;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
loc_8215B0A4:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8215b9d0
	ctx.lr = 0x8215B0B8;
	sub_8215B9D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8215b04c
	if (ctx.cr6.lt) goto loc_8215B04C;
loc_8215B0C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B0D0"))) PPC_WEAK_FUNC(sub_8215B0D0);
PPC_FUNC_IMPL(__imp__sub_8215B0D0) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B0F0;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// bne 0x8215b100
	if (!ctx.cr0.eq) goto loc_8215B100;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8215B100:
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

__attribute__((alias("__imp__sub_8215B118"))) PPC_WEAK_FUNC(sub_8215B118);
PPC_FUNC_IMPL(__imp__sub_8215B118) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B138;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215b148
	if (ctx.cr0.eq) goto loc_8215B148;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8215b154
	goto loc_8215B154;
loc_8215B148:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821561c8
	ctx.lr = 0x8215B150;
	sub_821561C8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8215B154:
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

__attribute__((alias("__imp__sub_8215B170"))) PPC_WEAK_FUNC(sub_8215B170);
PPC_FUNC_IMPL(__imp__sub_8215B170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B19C;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b1b0
	if (ctx.cr6.eq) goto loc_8215B1B0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b1f8
	if (!ctx.cr6.eq) goto loc_8215B1F8;
	// b 0x8215b1f0
	goto loc_8215B1F0;
loc_8215B1B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1BC;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b1e4
	if (ctx.cr6.eq) goto loc_8215B1E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1D0;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b1e4
	if (ctx.cr6.eq) goto loc_8215B1E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1E4;
	sub_822228B8(ctx, base);
loc_8215B1E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1F0;
	sub_822228B8(ctx, base);
loc_8215B1F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B1F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B210"))) PPC_WEAK_FUNC(sub_8215B210);
PPC_FUNC_IMPL(__imp__sub_8215B210) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B230;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215b240
	if (ctx.cr0.eq) goto loc_8215B240;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215aff8
	ctx.lr = 0x8215B248;
	sub_8215AFF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8215b27c
	if (ctx.cr6.lt) goto loc_8215B27C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8215b27c
	if (ctx.cr6.gt) goto loc_8215B27C;
	// bl 0x82227aa0
	ctx.lr = 0x8215B260;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215b274
	if (!ctx.cr6.eq) goto loc_8215B274;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B274:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B27C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215aee0
	ctx.lr = 0x8215B284;
	sub_8215AEE0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
loc_8215B288:
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

__attribute__((alias("__imp__sub_8215B2A0"))) PPC_WEAK_FUNC(sub_8215B2A0);
PPC_FUNC_IMPL(__imp__sub_8215B2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B2CC;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b2e4
	if (ctx.cr6.eq) goto loc_8215B2E4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b32c
	if (!ctx.cr6.eq) goto loc_8215B32C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8215b328
	goto loc_8215B328;
loc_8215B2E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B2F0;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b318
	if (ctx.cr6.eq) goto loc_8215B318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B304;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b318
	if (ctx.cr6.eq) goto loc_8215B318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B318;
	sub_822228B8(ctx, base);
loc_8215B318:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B324;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B328:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B348"))) PPC_WEAK_FUNC(sub_8215B348);
PPC_FUNC_IMPL(__imp__sub_8215B348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B374;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b38c
	if (ctx.cr6.eq) goto loc_8215B38C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b3d4
	if (!ctx.cr6.eq) goto loc_8215B3D4;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8215b3d0
	goto loc_8215B3D0;
loc_8215B38C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B398;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b3c0
	if (ctx.cr6.eq) goto loc_8215B3C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3AC;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b3c0
	if (ctx.cr6.eq) goto loc_8215B3C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3C0;
	sub_822228B8(ctx, base);
loc_8215B3C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3CC;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B3D0:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B3D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B3F0"))) PPC_WEAK_FUNC(sub_8215B3F0);
PPC_FUNC_IMPL(__imp__sub_8215B3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B41C;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b434
	if (ctx.cr6.eq) goto loc_8215B434;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b47c
	if (!ctx.cr6.eq) goto loc_8215B47C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8215b478
	goto loc_8215B478;
loc_8215B434:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B440;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b468
	if (ctx.cr6.eq) goto loc_8215B468;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B454;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b468
	if (ctx.cr6.eq) goto loc_8215B468;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B468;
	sub_822228B8(ctx, base);
loc_8215B468:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B474;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B478:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B47C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B498"))) PPC_WEAK_FUNC(sub_8215B498);
PPC_FUNC_IMPL(__imp__sub_8215B498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-24016
	ctx.r12.s64 = ctx.r12.s64 + -24016;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// nop 
	// addi r12,r12,-19248
	ctx.r12.s64 = ctx.r12.s64 + -19248;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8215B4D0;
	case 1:
		goto loc_8215B4D4;
	case 2:
		goto loc_8215B4D8;
	case 3:
		goto loc_8215B4DC;
	case 4:
		goto loc_8215B4E0;
	case 5:
		goto loc_8215B4E4;
	case 6:
		goto loc_8215B4E8;
	case 7:
		goto loc_8215B4EC;
	case 8:
		goto loc_8215B4F0;
	case 9:
		goto loc_8215B4F4;
	case 10:
		goto loc_8215B4F8;
	case 11:
		goto loc_8215B4F8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8215B4D0:
	// b 0x8215b0d0
	sub_8215B0D0(ctx, base);
	return;
loc_8215B4D4:
	// b 0x8215b118
	sub_8215B118(ctx, base);
	return;
loc_8215B4D8:
	// b 0x8215b170
	sub_8215B170(ctx, base);
	return;
loc_8215B4DC:
	// b 0x8215b210
	sub_8215B210(ctx, base);
	return;
loc_8215B4E0:
	// b 0x8215ad40
	sub_8215AD40(ctx, base);
	return;
loc_8215B4E4:
	// b 0x8215b2a0
	sub_8215B2A0(ctx, base);
	return;
loc_8215B4E8:
	// b 0x8215ad90
	sub_8215AD90(ctx, base);
	return;
loc_8215B4EC:
	// b 0x8215b348
	sub_8215B348(ctx, base);
	return;
loc_8215B4F0:
	// b 0x8215ade0
	sub_8215ADE0(ctx, base);
	return;
loc_8215B4F4:
	// b 0x8215b3f0
	sub_8215B3F0(ctx, base);
	return;
loc_8215B4F8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B500"))) PPC_WEAK_FUNC(sub_8215B500);
PPC_FUNC_IMPL(__imp__sub_8215B500) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B520"))) PPC_WEAK_FUNC(sub_8215B520);
PPC_FUNC_IMPL(__imp__sub_8215B520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B528;
	__savegprlr_29(ctx, base);
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
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82155f00
	ctx.lr = 0x8215B54C;
	sub_82155F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82155f00
	ctx.lr = 0x8215B558;
	sub_82155F00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b588
	if (!ctx.cr6.eq) goto loc_8215B588;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82155f00
	ctx.lr = 0x8215B57C;
	sub_82155F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82155f00
	ctx.lr = 0x8215B588;
	sub_82155F00(ctx, base);
loc_8215B588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B590"))) PPC_WEAK_FUNC(sub_8215B590);
PPC_FUNC_IMPL(__imp__sub_8215B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B598;
	__savegprlr_29(ctx, base);
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
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5BC;
	sub_82155FC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5C8;
	sub_82155FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b5f8
	if (!ctx.cr6.eq) goto loc_8215B5F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5EC;
	sub_82155FC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5F8;
	sub_82155FC8(ctx, base);
loc_8215B5F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B600"))) PPC_WEAK_FUNC(sub_8215B600);
PPC_FUNC_IMPL(__imp__sub_8215B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B608;
	__savegprlr_29(ctx, base);
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
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82156020
	ctx.lr = 0x8215B62C;
	sub_82156020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82156020
	ctx.lr = 0x8215B638;
	sub_82156020(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b668
	if (!ctx.cr6.eq) goto loc_8215B668;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156020
	ctx.lr = 0x8215B65C;
	sub_82156020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156020
	ctx.lr = 0x8215B668;
	sub_82156020(ctx, base);
loc_8215B668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B670"))) PPC_WEAK_FUNC(sub_8215B670);
PPC_FUNC_IMPL(__imp__sub_8215B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B678;
	__savegprlr_29(ctx, base);
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
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82156078
	ctx.lr = 0x8215B69C;
	sub_82156078(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82156078
	ctx.lr = 0x8215B6A8;
	sub_82156078(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b6d8
	if (!ctx.cr6.eq) goto loc_8215B6D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156078
	ctx.lr = 0x8215B6CC;
	sub_82156078(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156078
	ctx.lr = 0x8215B6D8;
	sub_82156078(ctx, base);
loc_8215B6D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B6E0"))) PPC_WEAK_FUNC(sub_8215B6E0);
PPC_FUNC_IMPL(__imp__sub_8215B6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215B6E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8215b708
	if (!ctx.cr6.lt) goto loc_8215B708;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8215b714
	goto loc_8215B714;
loc_8215B708:
	// cmpwi cr6,r30,1260
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1260, ctx.xer);
	// ble cr6,0x8215b714
	if (!ctx.cr6.gt) goto loc_8215B714;
	// li r30,1260
	ctx.r30.s64 = 1260;
loc_8215B714:
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r28,8
	ctx.r25.s64 = ctx.r28.s64 + 8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82229288
	ctx.lr = 0x8215B734;
	sub_82229288(ctx, base);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// ori r31,r11,38527
	ctx.r31.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8215b74c
	if (ctx.cr6.lt) goto loc_8215B74C;
	// subf r29,r3,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8215B74C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8215b75c
	if (!ctx.cr6.lt) goto loc_8215B75C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8215b768
	goto loc_8215B768;
loc_8215B75C:
	// cmpwi cr6,r29,1260
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1260, ctx.xer);
	// ble cr6,0x8215b768
	if (!ctx.cr6.gt) goto loc_8215B768;
	// li r29,1260
	ctx.r29.s64 = 1260;
loc_8215B768:
	// mulli r11,r26,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(72));
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,296
	ctx.r3.s64 = ctx.r27.s64 + 296;
	// bl 0x82155f58
	ctx.lr = 0x8215B77C;
	sub_82155F58(ctx, base);
	// addi r28,r28,152
	ctx.r28.s64 = ctx.r28.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x8215B790;
	sub_82229288(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8215b7a0
	if (ctx.cr6.lt) goto loc_8215B7A0;
	// subf r29,r3,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8215B7A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8215b7b0
	if (!ctx.cr6.lt) goto loc_8215B7B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8215b7bc
	goto loc_8215B7BC;
loc_8215B7B0:
	// cmpwi cr6,r29,1260
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1260, ctx.xer);
	// ble cr6,0x8215b7bc
	if (!ctx.cr6.gt) goto loc_8215B7BC;
	// li r29,1260
	ctx.r29.s64 = 1260;
loc_8215B7BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,440
	ctx.r3.s64 = ctx.r27.s64 + 440;
	// bl 0x82155f58
	ctx.lr = 0x8215B7C8;
	sub_82155F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82155f58
	ctx.lr = 0x8215B7D4;
	sub_82155F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82155f58
	ctx.lr = 0x8215B7E0;
	sub_82155F58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B7E8"))) PPC_WEAK_FUNC(sub_8215B7E8);
PPC_FUNC_IMPL(__imp__sub_8215B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82156448
	ctx.lr = 0x8215B810;
	sub_82156448(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82156448
	ctx.lr = 0x8215B818;
	sub_82156448(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156448
	ctx.lr = 0x8215B82C;
	sub_82156448(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156448
	ctx.lr = 0x8215B834;
	sub_82156448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B840"))) PPC_WEAK_FUNC(sub_8215B840);
PPC_FUNC_IMPL(__imp__sub_8215B840) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8215b870
	if (ctx.cr0.eq) goto loc_8215B870;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215B870;
	sub_82183E40(ctx, base);
loc_8215B870:
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

__attribute__((alias("__imp__sub_8215B888"))) PPC_WEAK_FUNC(sub_8215B888);
PPC_FUNC_IMPL(__imp__sub_8215B888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24000
	ctx.r9.s64 = ctx.r10.s64 + -24000;
	// addi r10,r3,632
	ctx.r10.s64 = ctx.r3.s64 + 632;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
loc_8215B8A8:
	// stwu r11,-24(r10)
	ea = -24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8A8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// addi r9,r11,440
	ctx.r9.s64 = ctx.r11.s64 + 440;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,-14444
	ctx.r8.s64 = ctx.r10.s64 + -14444;
loc_8215B8C8:
	// stwu r8,-72(r9)
	ea = -72 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8215b8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8C8;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,296
	ctx.r10.s64 = ctx.r11.s64 + 296;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215B8DC:
	// stwu r8,-72(r10)
	ea = -72 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8DC;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215B8F0:
	// stwu r8,-72(r10)
	ea = -72 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8F0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215B904:
	// stwu r8,-72(r11)
	ea = -72 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215b904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B910"))) PPC_WEAK_FUNC(sub_8215B910);
PPC_FUNC_IMPL(__imp__sub_8215B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215B918;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215b9c0
	if (ctx.cr6.eq) goto loc_8215B9C0;
	// bl 0x82227aa0
	ctx.lr = 0x8215B934;
	sub_82227AA0(ctx, base);
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8215b9c0
	if (ctx.cr6.eq) goto loc_8215B9C0;
	// addi r29,r30,584
	ctx.r29.s64 = ctx.r30.s64 + 584;
	// addi r30,r30,296
	ctx.r30.s64 = ctx.r30.s64 + 296;
loc_8215B94C:
	// addi r28,r30,-144
	ctx.r28.s64 = ctx.r30.s64 + -144;
	// bl 0x82227aa0
	ctx.lr = 0x8215B954;
	sub_82227AA0(ctx, base);
	// addi r5,r28,-144
	ctx.r5.s64 = ctx.r28.s64 + -144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228888
	ctx.lr = 0x8215B960;
	sub_82228888(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8215B964;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82228928
	ctx.lr = 0x8215B970;
	sub_82228928(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8215B974;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82228888
	ctx.lr = 0x8215B980;
	sub_82228888(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228ae0
	ctx.lr = 0x8215B988;
	sub_82228AE0(ctx, base);
	// addi r28,r30,144
	ctx.r28.s64 = ctx.r30.s64 + 144;
	// bl 0x82227aa0
	ctx.lr = 0x8215B990;
	sub_82227AA0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228928
	ctx.lr = 0x8215B99C;
	sub_82228928(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82228ae0
	ctx.lr = 0x8215B9A4;
	sub_82228AE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229238
	ctx.lr = 0x8215B9AC;
	sub_82229238(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8215b94c
	if (ctx.cr6.lt) goto loc_8215B94C;
loc_8215B9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B9D0"))) PPC_WEAK_FUNC(sub_8215B9D0);
PPC_FUNC_IMPL(__imp__sub_8215B9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8215ba2c
	if (!ctx.cr6.lt) goto loc_8215BA2C;
	// addi r9,r4,25
	ctx.r9.s64 = ctx.r4.s64 + 25;
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// mulli r9,r9,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// stdx r5,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r31,r11,584
	ctx.r31.s64 = ctx.r11.s64 + 584;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x8215BA1C;
	sub_82229278(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x8215BA2C;
	sub_82229278(ctx, base);
loc_8215BA2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BA48"))) PPC_WEAK_FUNC(sub_8215BA48);
PPC_FUNC_IMPL(__imp__sub_8215BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x8215BA6C;
	sub_822AA648(ctx, base);
	// mulli r11,r29,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(72));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82155ee8
	ctx.lr = 0x8215BA7C;
	sub_82155EE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8215ba90
	if (ctx.cr6.lt) goto loc_8215BA90;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215BA90:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x8215baac
	if (ctx.cr6.lt) goto loc_8215BAAC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAAC:
	// cmpwi cr6,r3,50
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 50, ctx.xer);
	// blt cr6,0x8215bac8
	if (ctx.cr6.lt) goto loc_8215BAC8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAC8:
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x8215bae4
	if (ctx.cr6.lt) goto loc_8215BAE4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAE4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x8215BAF0;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820e53f8
	ctx.lr = 0x8215BB08;
	sub_820E53F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BB10"))) PPC_WEAK_FUNC(sub_8215BB10);
PPC_FUNC_IMPL(__imp__sub_8215BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24000
	ctx.r11.s64 = ctx.r11.s64 + -24000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8215BB34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB3C;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb34
	if (!ctx.cr0.lt) goto loc_8215BB34;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB58;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb50
	if (!ctx.cr0.lt) goto loc_8215BB50;
	// addi r29,r31,296
	ctx.r29.s64 = ctx.r31.s64 + 296;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB74;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb6c
	if (!ctx.cr0.lt) goto loc_8215BB6C;
	// addi r29,r31,440
	ctx.r29.s64 = ctx.r31.s64 + 440;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB90;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb88
	if (!ctx.cr0.lt) goto loc_8215BB88;
	// addi r29,r31,584
	ctx.r29.s64 = ctx.r31.s64 + 584;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BBA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229298
	ctx.lr = 0x8215BBAC;
	sub_82229298(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x8215bba4
	if (!ctx.cr0.lt) goto loc_8215BBA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215b910
	ctx.lr = 0x8215BBC0;
	sub_8215B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BBD0"))) PPC_WEAK_FUNC(sub_8215BBD0);
PPC_FUNC_IMPL(__imp__sub_8215BBD0) {
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
	// bl 0x8215b888
	ctx.lr = 0x8215BBE8;
	sub_8215B888(ctx, base);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bbf8
	if (ctx.cr0.eq) goto loc_8215BBF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215BBF8;
	sub_82183E40(ctx, base);
loc_8215BBF8:
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

__attribute__((alias("__imp__sub_8215BC10"))) PPC_WEAK_FUNC(sub_8215BC10);
PPC_FUNC_IMPL(__imp__sub_8215BC10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8215bc78
	if (!ctx.cr6.eq) goto loc_8215BC78;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8215bc68
	if (ctx.cr6.eq) goto loc_8215BC68;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8215bc58
	if (ctx.cr6.eq) goto loc_8215BC58;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r10,-744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82225278
	sub_82225278(ctx, base);
	return;
loc_8215BC58:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,440
	ctx.r4.s64 = ctx.r11.s64 + 440;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC68:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC78:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8215bc9c
	if (ctx.cr6.lt) goto loc_8215BC9C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mulli r10,r5,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(72));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 + 152;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC9C:
	// mulli r10,r5,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(72));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BCB4"))) PPC_WEAK_FUNC(sub_8215BCB4);
PPC_FUNC_IMPL(__imp__sub_8215BCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BCB8"))) PPC_WEAK_FUNC(sub_8215BCB8);
PPC_FUNC_IMPL(__imp__sub_8215BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BCC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8215bd00
	if (!ctx.cr6.lt) goto loc_8215BD00;
	// mulli r11,r4,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(72));
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82156320
	ctx.lr = 0x8215BCE8;
	sub_82156320(ctx, base);
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82156320
	ctx.lr = 0x8215BCF4;
	sub_82156320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215ba48
	ctx.lr = 0x8215BD00;
	sub_8215BA48(ctx, base);
loc_8215BD00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BD08"))) PPC_WEAK_FUNC(sub_8215BD08);
PPC_FUNC_IMPL(__imp__sub_8215BD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD18"))) PPC_WEAK_FUNC(sub_8215BD18);
PPC_FUNC_IMPL(__imp__sub_8215BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD28"))) PPC_WEAK_FUNC(sub_8215BD28);
PPC_FUNC_IMPL(__imp__sub_8215BD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// b 0x82162448
	sub_82162448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BD40"))) PPC_WEAK_FUNC(sub_8215BD40);
PPC_FUNC_IMPL(__imp__sub_8215BD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD50"))) PPC_WEAK_FUNC(sub_8215BD50);
PPC_FUNC_IMPL(__imp__sub_8215BD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,29800
	ctx.r3.s64 = ctx.r11.s64 + 29800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD60"))) PPC_WEAK_FUNC(sub_8215BD60);
PPC_FUNC_IMPL(__imp__sub_8215BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD70"))) PPC_WEAK_FUNC(sub_8215BD70);
PPC_FUNC_IMPL(__imp__sub_8215BD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183078
	ctx.lr = 0x8215BD88;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215BD94;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215BD98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215bdb0
	if (ctx.cr6.eq) goto loc_8215BDB0;
	// li r3,29864
	ctx.r3.s64 = 29864;
	// bl 0x82183448
	ctx.lr = 0x8215BDAC;
	sub_82183448(ctx, base);
	// b 0x8215bdb8
	goto loc_8215BDB8;
loc_8215BDB0:
	// li r3,1867
	ctx.r3.s64 = 1867;
	// bl 0x821845a0
	ctx.lr = 0x8215BDB8;
	sub_821845A0(ctx, base);
loc_8215BDB8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215bdf4
	if (ctx.cr6.eq) goto loc_8215BDF4;
	// bl 0x8216cee0
	ctx.lr = 0x8215BDC8;
	sub_8216CEE0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82162498
	ctx.lr = 0x8215BDD0;
	sub_82162498(ctx, base);
	// addi r3,r31,27424
	ctx.r3.s64 = ctx.r31.s64 + 27424;
	// bl 0x82171648
	ctx.lr = 0x8215BDD8;
	sub_82171648(ctx, base);
	// addi r3,r31,29800
	ctx.r3.s64 = ctx.r31.s64 + 29800;
	// bl 0x8221bae8
	ctx.lr = 0x8215BDE0;
	sub_8221BAE8(ctx, base);
	// addi r3,r31,29808
	ctx.r3.s64 = ctx.r31.s64 + 29808;
	// bl 0x8215cce0
	ctx.lr = 0x8215BDE8;
	sub_8215CCE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r31,-1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1384, ctx.r31.u32);
	// b 0x8215be00
	goto loc_8215BE00;
loc_8215BDF4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1384, ctx.r11.u32);
loc_8215BE00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215BE08;
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

__attribute__((alias("__imp__sub_8215BE20"))) PPC_WEAK_FUNC(sub_8215BE20);
PPC_FUNC_IMPL(__imp__sub_8215BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r31,-1384(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1384);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215be78
	if (ctx.cr6.eq) goto loc_8215BE78;
	// addi r3,r31,29808
	ctx.r3.s64 = ctx.r31.s64 + 29808;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE4C;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,29800
	ctx.r3.s64 = ctx.r31.s64 + 29800;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE54;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,27424
	ctx.r3.s64 = ctx.r31.s64 + 27424;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE5C;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821623d8
	ctx.lr = 0x8215BE64;
	sub_821623D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE6C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215BE78;
	sub_82183E40(ctx, base);
loc_8215BE78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BE98"))) PPC_WEAK_FUNC(sub_8215BE98);
PPC_FUNC_IMPL(__imp__sub_8215BE98) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,468
	ctx.r4.s64 = 468;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BEC8"))) PPC_WEAK_FUNC(sub_8215BEC8);
PPC_FUNC_IMPL(__imp__sub_8215BEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BED8"))) PPC_WEAK_FUNC(sub_8215BED8);
PPC_FUNC_IMPL(__imp__sub_8215BED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-1376
	ctx.r10.s64 = ctx.r11.s64 + -1376;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BEE8"))) PPC_WEAK_FUNC(sub_8215BEE8);
PPC_FUNC_IMPL(__imp__sub_8215BEE8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bfa8
	if (ctx.cr6.eq) goto loc_8215BFA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82184800
	ctx.lr = 0x8215BF28;
	sub_82184800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,3708
	ctx.r4.s64 = ctx.r10.s64 + 3708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8215BF3C;
	sub_82248910(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215bfa8
	if (ctx.cr6.eq) goto loc_8215BFA8;
loc_8215BF44:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215bf9c
	if (ctx.cr6.eq) goto loc_8215BF9C;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8215BF5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215bfc4
	if (!ctx.cr6.eq) goto loc_8215BFC4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215bf8c
	if (ctx.cr6.eq) goto loc_8215BF8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8215bf5c
	if (ctx.cr6.lt) goto loc_8215BF5C;
loc_8215BF8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8215BF90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bfac
	if (!ctx.cr6.eq) goto loc_8215BFAC;
loc_8215BF9C:
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8215bf44
	if (!ctx.cr6.eq) goto loc_8215BF44;
loc_8215BFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215BFAC:
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
loc_8215BFC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8215bf90
	goto loc_8215BF90;
}

__attribute__((alias("__imp__sub_8215BFD0"))) PPC_WEAK_FUNC(sub_8215BFD0);
PPC_FUNC_IMPL(__imp__sub_8215BFD0) {
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
	// bl 0x8215bee8
	ctx.lr = 0x8215BFE0;
	sub_8215BEE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215bff8
	if (!ctx.cr6.eq) goto loc_8215BFF8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215BFF8:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C010"))) PPC_WEAK_FUNC(sub_8215C010);
PPC_FUNC_IMPL(__imp__sub_8215C010) {
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
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c03c
	if (ctx.cr6.eq) goto loc_8215C03C;
	// bl 0x8224a858
	ctx.lr = 0x8215C034;
	sub_8224A858(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -684, ctx.r11.u32);
loc_8215C03C:
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

__attribute__((alias("__imp__sub_8215C050"))) PPC_WEAK_FUNC(sub_8215C050);
PPC_FUNC_IMPL(__imp__sub_8215C050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C058"))) PPC_WEAK_FUNC(sub_8215C058);
PPC_FUNC_IMPL(__imp__sub_8215C058) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C060"))) PPC_WEAK_FUNC(sub_8215C060);
PPC_FUNC_IMPL(__imp__sub_8215C060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,29
	ctx.r3.s64 = ctx.r3.s64 + 29;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C068"))) PPC_WEAK_FUNC(sub_8215C068);
PPC_FUNC_IMPL(__imp__sub_8215C068) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C070"))) PPC_WEAK_FUNC(sub_8215C070);
PPC_FUNC_IMPL(__imp__sub_8215C070) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C078"))) PPC_WEAK_FUNC(sub_8215C078);
PPC_FUNC_IMPL(__imp__sub_8215C078) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C080"))) PPC_WEAK_FUNC(sub_8215C080);
PPC_FUNC_IMPL(__imp__sub_8215C080) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C088"))) PPC_WEAK_FUNC(sub_8215C088);
PPC_FUNC_IMPL(__imp__sub_8215C088) {
	PPC_FUNC_PROLOGUE();
	// b 0x82182e90
	sub_82182E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C090"))) PPC_WEAK_FUNC(sub_8215C090);
PPC_FUNC_IMPL(__imp__sub_8215C090) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C098"))) PPC_WEAK_FUNC(sub_8215C098);
PPC_FUNC_IMPL(__imp__sub_8215C098) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0A0"))) PPC_WEAK_FUNC(sub_8215C0A0);
PPC_FUNC_IMPL(__imp__sub_8215C0A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0A8"))) PPC_WEAK_FUNC(sub_8215C0A8);
PPC_FUNC_IMPL(__imp__sub_8215C0A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0B0"))) PPC_WEAK_FUNC(sub_8215C0B0);
PPC_FUNC_IMPL(__imp__sub_8215C0B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0B8"))) PPC_WEAK_FUNC(sub_8215C0B8);
PPC_FUNC_IMPL(__imp__sub_8215C0B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0C0"))) PPC_WEAK_FUNC(sub_8215C0C0);
PPC_FUNC_IMPL(__imp__sub_8215C0C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0C8"))) PPC_WEAK_FUNC(sub_8215C0C8);
PPC_FUNC_IMPL(__imp__sub_8215C0C8) {
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
	// bl 0x82171868
	ctx.lr = 0x8215C0D8;
	sub_82171868(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8209eda0
	ctx.lr = 0x8215C0E0;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0F0"))) PPC_WEAK_FUNC(sub_8215C0F0);
PPC_FUNC_IMPL(__imp__sub_8215C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215C0F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822aa648
	ctx.lr = 0x8215C110;
	sub_822AA648(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// ble cr6,0x8215c13c
	if (!ctx.cr6.gt) goto loc_8215C13C;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8215C128:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// bdnz 0x8215c128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215C128;
loc_8215C13C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C148"))) PPC_WEAK_FUNC(sub_8215C148);
PPC_FUNC_IMPL(__imp__sub_8215C148) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8209eda0
	ctx.lr = 0x8215C15C;
	sub_8209EDA0(ctx, base);
	// bl 0x82171678
	ctx.lr = 0x8215C160;
	sub_82171678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// bl 0x82183d88
	ctx.lr = 0x8215C170;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-23844
	ctx.r4.s64 = ctx.r10.s64 + -23844;
	// bl 0x82183d88
	ctx.lr = 0x8215C180;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r9,-23852
	ctx.r4.s64 = ctx.r9.s64 + -23852;
	// bl 0x82183d88
	ctx.lr = 0x8215C190;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r8,-23860
	ctx.r4.s64 = ctx.r8.s64 + -23860;
	// bl 0x82183d88
	ctx.lr = 0x8215C1A0;
	sub_82183D88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r7,-23868
	ctx.r4.s64 = ctx.r7.s64 + -23868;
	// bl 0x82183d88
	ctx.lr = 0x8215C1B0;
	sub_82183D88(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r6,-23876
	ctx.r4.s64 = ctx.r6.s64 + -23876;
	// bl 0x82183d88
	ctx.lr = 0x8215C1C0;
	sub_82183D88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r5,-23884
	ctx.r4.s64 = ctx.r5.s64 + -23884;
	// bl 0x82183d88
	ctx.lr = 0x8215C1D0;
	sub_82183D88(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r4,-23892
	ctx.r4.s64 = ctx.r4.s64 + -23892;
	// bl 0x82183d88
	ctx.lr = 0x8215C1E0;
	sub_82183D88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// bl 0x82183d88
	ctx.lr = 0x8215C1F0;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r10,-23916
	ctx.r4.s64 = ctx.r10.s64 + -23916;
	// bl 0x82183d88
	ctx.lr = 0x8215C200;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r9,-23924
	ctx.r4.s64 = ctx.r9.s64 + -23924;
	// bl 0x82183d88
	ctx.lr = 0x8215C210;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r8,-23932
	ctx.r4.s64 = ctx.r8.s64 + -23932;
	// bl 0x82183d88
	ctx.lr = 0x8215C220;
	sub_82183D88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r4,r7,-23940
	ctx.r4.s64 = ctx.r7.s64 + -23940;
	// bl 0x82183d88
	ctx.lr = 0x8215C230;
	sub_82183D88(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r4,r6,-23948
	ctx.r4.s64 = ctx.r6.s64 + -23948;
	// bl 0x82183d88
	ctx.lr = 0x8215C240;
	sub_82183D88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r4,r5,-23956
	ctx.r4.s64 = ctx.r5.s64 + -23956;
	// bl 0x82183d88
	ctx.lr = 0x8215C250;
	sub_82183D88(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r4,r4,-23964
	ctx.r4.s64 = ctx.r4.s64 + -23964;
	// bl 0x82183d88
	ctx.lr = 0x8215C260;
	sub_82183D88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r4,r11,-23972
	ctx.r4.s64 = ctx.r11.s64 + -23972;
	// bl 0x82183d88
	ctx.lr = 0x8215C270;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r10,-23980
	ctx.r4.s64 = ctx.r10.s64 + -23980;
	// bl 0x82183d88
	ctx.lr = 0x8215C280;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r9,-23988
	ctx.r4.s64 = ctx.r9.s64 + -23988;
	// bl 0x82183d88
	ctx.lr = 0x8215C290;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r8,-23996
	ctx.r4.s64 = ctx.r8.s64 + -23996;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x82183d88
	ctx.lr = 0x8215C2A0;
	sub_82183D88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C2B0"))) PPC_WEAK_FUNC(sub_8215C2B0);
PPC_FUNC_IMPL(__imp__sub_8215C2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c2e8
	if (ctx.cr6.eq) goto loc_8215C2E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C2E8:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// addi r9,r10,-10944
	ctx.r9.s64 = ctx.r10.s64 + -10944;
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215c320
	if (ctx.cr6.eq) goto loc_8215C320;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
loc_8215C320:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-680
	ctx.r8.s64 = ctx.r10.s64 + -680;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C348"))) PPC_WEAK_FUNC(sub_8215C348);
PPC_FUNC_IMPL(__imp__sub_8215C348) {
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
	ctx.lr = 0x8215C358;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c370
	if (ctx.cr6.eq) goto loc_8215C370;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215C36C;
	sub_82183448(ctx, base);
	// b 0x8215c378
	goto loc_8215C378;
loc_8215C370:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215C378;
	sub_821845A0(ctx, base);
loc_8215C378:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c39c
	if (ctx.cr6.eq) goto loc_8215C39C;
	// bl 0x82174fd8
	ctx.lr = 0x8215C384;
	sub_82174FD8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215C39C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15480, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C3B8"))) PPC_WEAK_FUNC(sub_8215C3B8);
PPC_FUNC_IMPL(__imp__sub_8215C3B8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-23808
	ctx.r5.s64 = ctx.r11.s64 + -23808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8215C3DC;
	sub_8218CB30(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r10,-23832
	ctx.r8.s64 = ctx.r10.s64 + -23832;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r11,-612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215c410
	if (!ctx.cr6.eq) goto loc_8215C410;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,-680
	ctx.r3.s64 = ctx.r11.s64 + -680;
	// bl 0x822aa648
	ctx.lr = 0x8215C410;
	sub_822AA648(ctx, base);
loc_8215C410:
	// bl 0x8215c348
	ctx.lr = 0x8215C414;
	sub_8215C348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215c2b0
	ctx.lr = 0x8215C41C;
	sub_8215C2B0(ctx, base);
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

__attribute__((alias("__imp__sub_8215C438"))) PPC_WEAK_FUNC(sub_8215C438);
PPC_FUNC_IMPL(__imp__sub_8215C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215C440;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c46c
	if (ctx.cr6.eq) goto loc_8215C46C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215c544
	if (ctx.cr6.eq) goto loc_8215C544;
loc_8215C46C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// addi r26,r10,-680
	ctx.r26.s64 = ctx.r10.s64 + -680;
	// addi r28,r11,-10944
	ctx.r28.s64 = ctx.r11.s64 + -10944;
loc_8215C488:
	// bl 0x82182e90
	ctx.lr = 0x8215C48C;
	sub_82182E90(ctx, base);
	// bl 0x821837d0
	ctx.lr = 0x8215C490;
	sub_821837D0(ctx, base);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x8215c4c8
	if (ctx.cr6.eq) goto loc_8215C4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215c4c8
	if (!ctx.cr6.eq) goto loc_8215C4C8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8215c4cc
	goto loc_8215C4CC;
loc_8215C4C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8215C4CC:
	// stw r11,-612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -612, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c4ec
	if (ctx.cr6.eq) goto loc_8215C4EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215c544
	if (ctx.cr6.eq) goto loc_8215C544;
loc_8215C4EC:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c50c
	if (ctx.cr6.eq) goto loc_8215C50C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C50C:
	// stw r27,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r27.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215c534
	if (ctx.cr6.eq) goto loc_8215C534;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
loc_8215C534:
	// stbx r25,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c488
	if (ctx.cr6.eq) goto loc_8215C488;
loc_8215C544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C550"))) PPC_WEAK_FUNC(sub_8215C550);
PPC_FUNC_IMPL(__imp__sub_8215C550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215C558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-23832
	ctx.r10.s64 = ctx.r11.s64 + -23832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8215c58c
	if (ctx.cr6.eq) goto loc_8215C58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C58C:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r29,15480(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15480);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8215c5b8
	if (ctx.cr6.eq) goto loc_8215C5B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82144a70
	ctx.lr = 0x8215C5AC;
	sub_82144A70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215C5B8;
	sub_82183E40(ctx, base);
loc_8215C5B8:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15480, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,-616(r9)
	PPC_STORE_U32(ctx.r9.u32 + -616, ctx.r10.u32);
	// bl 0x8218cc18
	ctx.lr = 0x8215C5D4;
	sub_8218CC18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C5E0"))) PPC_WEAK_FUNC(sub_8215C5E0);
PPC_FUNC_IMPL(__imp__sub_8215C5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215c550
	ctx.lr = 0x8215C600;
	sub_8215C550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c61c
	if (ctx.cr6.eq) goto loc_8215C61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215C618;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215C61C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C638"))) PPC_WEAK_FUNC(sub_8215C638);
PPC_FUNC_IMPL(__imp__sub_8215C638) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C64C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C650;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c668
	if (ctx.cr6.eq) goto loc_8215C668;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C664;
	sub_82183448(ctx, base);
	// b 0x8215c670
	goto loc_8215C670;
loc_8215C668:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C670;
	sub_821845A0(ctx, base);
loc_8215C670:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c688
	if (ctx.cr6.eq) goto loc_8215C688;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-31176
	ctx.r5.s64 = ctx.r11.s64 + -31176;
	// bl 0x82085930
	ctx.lr = 0x8215C688;
	sub_82085930(ctx, base);
loc_8215C688:
	// bl 0x8215bd60
	ctx.lr = 0x8215C68C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215c6ac
	if (!ctx.cr6.eq) goto loc_8215C6AC;
	// bl 0x82181040
	ctx.lr = 0x8215C69C;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c6ac
	if (ctx.cr6.eq) goto loc_8215C6AC;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82181370
	ctx.lr = 0x8215C6AC;
	sub_82181370(ctx, base);
loc_8215C6AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C6C0"))) PPC_WEAK_FUNC(sub_8215C6C0);
PPC_FUNC_IMPL(__imp__sub_8215C6C0) {
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
	// bl 0x82183078
	ctx.lr = 0x8215C6D4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C6E0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C6E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c6fc
	if (ctx.cr6.eq) goto loc_8215C6FC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C6F8;
	sub_82183448(ctx, base);
	// b 0x8215c704
	goto loc_8215C704;
loc_8215C6FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C704;
	sub_821845A0(ctx, base);
loc_8215C704:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c71c
	if (ctx.cr6.eq) goto loc_8215C71C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,22480
	ctx.r5.s64 = ctx.r11.s64 + 22480;
	// bl 0x82085930
	ctx.lr = 0x8215C71C;
	sub_82085930(ctx, base);
loc_8215C71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C724;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215C738"))) PPC_WEAK_FUNC(sub_8215C738);
PPC_FUNC_IMPL(__imp__sub_8215C738) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C750;
	sub_821837D0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215C754;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C760;
	sub_821837D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x8215C76C;
	sub_82221280(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C770;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c78c
	if (ctx.cr6.eq) goto loc_8215C78C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82183448
	ctx.lr = 0x8215C788;
	sub_82183448(ctx, base);
	// b 0x8215c794
	goto loc_8215C794;
loc_8215C78C:
	// li r3,2061
	ctx.r3.s64 = 2061;
	// bl 0x821845a0
	ctx.lr = 0x8215C794;
	sub_821845A0(ctx, base);
loc_8215C794:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c7a8
	if (ctx.cr6.eq) goto loc_8215C7A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821fe658
	ctx.lr = 0x8215C7A8;
	sub_821FE658(ctx, base);
loc_8215C7A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C7B0;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215C7C8"))) PPC_WEAK_FUNC(sub_8215C7C8);
PPC_FUNC_IMPL(__imp__sub_8215C7C8) {
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
	// bl 0x8215bec8
	ctx.lr = 0x8215C7D8;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c800
	if (ctx.cr6.eq) goto loc_8215C800;
	// bl 0x8215bec8
	ctx.lr = 0x8215C7E8;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C7F4;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C7F8;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C800;
	sub_821837D0(ctx, base);
loc_8215C800:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C810"))) PPC_WEAK_FUNC(sub_8215C810);
PPC_FUNC_IMPL(__imp__sub_8215C810) {
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
	// bl 0x8215bec8
	ctx.lr = 0x8215C820;
	sub_8215BEC8(ctx, base);
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// bl 0x8215bec8
	ctx.lr = 0x8215C828;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c850
	if (ctx.cr6.eq) goto loc_8215C850;
	// bl 0x8215bec8
	ctx.lr = 0x8215C838;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C844;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C848;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C850;
	sub_821837D0(ctx, base);
loc_8215C850:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215C85C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c870
	if (ctx.cr6.eq) goto loc_8215C870;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215C870;
	sub_821FE658(ctx, base);
loc_8215C870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C880"))) PPC_WEAK_FUNC(sub_8215C880);
PPC_FUNC_IMPL(__imp__sub_8215C880) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C894;
	sub_821837D0(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8215C898;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c8c0
	if (ctx.cr6.eq) goto loc_8215C8C0;
	// bl 0x8215bec8
	ctx.lr = 0x8215C8A8;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C8B4;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C8B8;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C8C0;
	sub_821837D0(ctx, base);
loc_8215C8C0:
	// bl 0x82183850
	ctx.lr = 0x8215C8C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c8e0
	if (ctx.cr6.eq) goto loc_8215C8E0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82183448
	ctx.lr = 0x8215C8DC;
	sub_82183448(ctx, base);
	// b 0x8215c8e8
	goto loc_8215C8E8;
loc_8215C8E0:
	// li r3,2061
	ctx.r3.s64 = 2061;
	// bl 0x821845a0
	ctx.lr = 0x8215C8E8;
	sub_821845A0(ctx, base);
loc_8215C8E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c8fc
	if (ctx.cr6.eq) goto loc_8215C8FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215C8FC;
	sub_821FE658(ctx, base);
loc_8215C8FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C910"))) PPC_WEAK_FUNC(sub_8215C910);
PPC_FUNC_IMPL(__imp__sub_8215C910) {
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c934
	if (ctx.cr6.eq) goto loc_8215C934;
	// bl 0x8215f4e8
	ctx.lr = 0x8215C934;
	sub_8215F4E8(ctx, base);
loc_8215C934:
	// bl 0x8215bec8
	ctx.lr = 0x8215C938;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c960
	if (ctx.cr6.eq) goto loc_8215C960;
	// bl 0x8215bec8
	ctx.lr = 0x8215C948;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C954;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C958;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C960;
	sub_821837D0(ctx, base);
loc_8215C960:
	// bl 0x8208f948
	ctx.lr = 0x8215C964;
	sub_8208F948(ctx, base);
	// bl 0x82181040
	ctx.lr = 0x8215C968;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c978
	if (ctx.cr6.eq) goto loc_8215C978;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215C978;
	sub_82181370(ctx, base);
loc_8215C978:
	// bl 0x82183078
	ctx.lr = 0x8215C97C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C988;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C98C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c9a4
	if (ctx.cr6.eq) goto loc_8215C9A4;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C9A0;
	sub_82183448(ctx, base);
	// b 0x8215c9ac
	goto loc_8215C9AC;
loc_8215C9A4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C9AC;
	sub_821845A0(ctx, base);
loc_8215C9AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c9c4
	if (ctx.cr6.eq) goto loc_8215C9C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,22712
	ctx.r5.s64 = ctx.r11.s64 + 22712;
	// bl 0x82085930
	ctx.lr = 0x8215C9C4;
	sub_82085930(ctx, base);
loc_8215C9C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C9CC;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215C9E0"))) PPC_WEAK_FUNC(sub_8215C9E0);
PPC_FUNC_IMPL(__imp__sub_8215C9E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C9F4;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215C9F8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215ca24
	if (ctx.cr6.eq) goto loc_8215CA24;
	// bl 0x82163ee8
	ctx.lr = 0x8215CA08;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CA14;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CA24:
	// bl 0x8215bec8
	ctx.lr = 0x8215CA28;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8215cad8
	if (ctx.cr6.gt) goto loc_8215CAD8;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13748
	ctx.r12.s64 = ctx.r12.s64 + -13748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8215CA84;
	case 1:
		goto loc_8215CA84;
	case 2:
		goto loc_8215CA84;
	case 3:
		goto loc_8215CA84;
	case 4:
		goto loc_8215CAD8;
	case 5:
		goto loc_8215CAD8;
	case 6:
		goto loc_8215CAD8;
	case 7:
		goto loc_8215CAD8;
	case 8:
		goto loc_8215CAD4;
	case 9:
		goto loc_8215CAD8;
	case 10:
		goto loc_8215CAB8;
	case 11:
		goto loc_8215CAD8;
	case 12:
		goto loc_8215CA8C;
	case 13:
		goto loc_8215CA8C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8215CA84:
	// bl 0x8215c810
	ctx.lr = 0x8215CA88;
	sub_8215C810(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
loc_8215CA8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x8215CA94;
	sub_8215C7C8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CAA0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cad8
	if (ctx.cr6.eq) goto loc_8215CAD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215CAB4;
	sub_821FE658(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
loc_8215CAB8:
	// bl 0x82175710
	ctx.lr = 0x8215CABC;
	sub_82175710(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x8215CAC4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cad8
	if (ctx.cr6.eq) goto loc_8215CAD8;
	// bl 0x82175748
	ctx.lr = 0x8215CAD0;
	sub_82175748(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
loc_8215CAD4:
	// bl 0x82085690
	ctx.lr = 0x8215CAD8;
	sub_82085690(ctx, base);
loc_8215CAD8:
	// bl 0x8215bec8
	ctx.lr = 0x8215CADC;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cb0c
	if (ctx.cr6.eq) goto loc_8215CB0C;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CAEC;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215caf8
	if (!ctx.cr6.eq) goto loc_8215CAF8;
	// bl 0x8208f948
	ctx.lr = 0x8215CAF8;
	sub_8208F948(ctx, base);
loc_8215CAF8:
	// bl 0x82181040
	ctx.lr = 0x8215CAFC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cb0c
	if (ctx.cr6.eq) goto loc_8215CB0C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CB0C;
	sub_82181370(ctx, base);
loc_8215CB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CB20"))) PPC_WEAK_FUNC(sub_8215CB20);
PPC_FUNC_IMPL(__imp__sub_8215CB20) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CB34;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215CB38;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215cb64
	if (ctx.cr6.eq) goto loc_8215CB64;
	// bl 0x82163ee8
	ctx.lr = 0x8215CB48;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CB54;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CB64:
	// bl 0x8215bec8
	ctx.lr = 0x8215CB68;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215cb90
	if (ctx.cr6.eq) goto loc_8215CB90;
	// bl 0x8215bec8
	ctx.lr = 0x8215CB78;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215CB84;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215CB88;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CB90;
	sub_821837D0(ctx, base);
loc_8215CB90:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CB9C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cbb0
	if (ctx.cr6.eq) goto loc_8215CBB0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215CBB0;
	sub_821FE658(ctx, base);
loc_8215CBB0:
	// bl 0x8215bec8
	ctx.lr = 0x8215CBB4;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cbe4
	if (ctx.cr6.eq) goto loc_8215CBE4;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CBC4;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215cbd0
	if (!ctx.cr6.eq) goto loc_8215CBD0;
	// bl 0x8208f948
	ctx.lr = 0x8215CBD0;
	sub_8208F948(ctx, base);
loc_8215CBD0:
	// bl 0x82181040
	ctx.lr = 0x8215CBD4;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cbe4
	if (ctx.cr6.eq) goto loc_8215CBE4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CBE4;
	sub_82181370(ctx, base);
loc_8215CBE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CBF8"))) PPC_WEAK_FUNC(sub_8215CBF8);
PPC_FUNC_IMPL(__imp__sub_8215CBF8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CC0C;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215CC10;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215cc3c
	if (ctx.cr6.eq) goto loc_8215CC3C;
	// bl 0x82163ee8
	ctx.lr = 0x8215CC20;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CC2C;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CC3C:
	// bl 0x8215bec8
	ctx.lr = 0x8215CC40;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215cc68
	if (ctx.cr6.eq) goto loc_8215CC68;
	// bl 0x8215bec8
	ctx.lr = 0x8215CC50;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215CC5C;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215CC60;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CC68;
	sub_821837D0(ctx, base);
loc_8215CC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215CC70;
	sub_8215BD28(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230dd8
	ctx.lr = 0x8215CC78;
	sub_82230DD8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CC84;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cc98
	if (ctx.cr6.eq) goto loc_8215CC98;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821fe658
	ctx.lr = 0x8215CC98;
	sub_821FE658(ctx, base);
loc_8215CC98:
	// bl 0x8215bec8
	ctx.lr = 0x8215CC9C;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cccc
	if (ctx.cr6.eq) goto loc_8215CCCC;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CCAC;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215ccb8
	if (!ctx.cr6.eq) goto loc_8215CCB8;
	// bl 0x8208f948
	ctx.lr = 0x8215CCB8;
	sub_8208F948(ctx, base);
loc_8215CCB8:
	// bl 0x82181040
	ctx.lr = 0x8215CCBC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cccc
	if (ctx.cr6.eq) goto loc_8215CCCC;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CCCC;
	sub_82181370(ctx, base);
loc_8215CCCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CCE0"))) PPC_WEAK_FUNC(sub_8215CCE0);
PPC_FUNC_IMPL(__imp__sub_8215CCE0) {
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
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CD20"))) PPC_WEAK_FUNC(sub_8215CD20);
PPC_FUNC_IMPL(__imp__sub_8215CD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82222f50
	sub_82222F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215CD28"))) PPC_WEAK_FUNC(sub_8215CD28);
PPC_FUNC_IMPL(__imp__sub_8215CD28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82222f70
	sub_82222F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215CD30"))) PPC_WEAK_FUNC(sub_8215CD30);
PPC_FUNC_IMPL(__imp__sub_8215CD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8215CD6C;
	sub_822AA648(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215CD98"))) PPC_WEAK_FUNC(sub_8215CD98);
PPC_FUNC_IMPL(__imp__sub_8215CD98) {
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
	// bl 0x82163650
	ctx.lr = 0x8215CDA8;
	sub_82163650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215cdc8
	if (ctx.cr6.eq) goto loc_8215CDC8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215cdcc
	if (!ctx.cr6.eq) goto loc_8215CDCC;
loc_8215CDC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CDCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CDE0"))) PPC_WEAK_FUNC(sub_8215CDE0);
PPC_FUNC_IMPL(__imp__sub_8215CDE0) {
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
	ctx.lr = 0x8215CDF8;
	sub_821855F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23784
	ctx.r8.s64 = ctx.r10.s64 + -23784;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,-600(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215ce44
	if (ctx.cr6.eq) goto loc_8215CE44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215ce44
	if (ctx.cr6.eq) goto loc_8215CE44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8215ce50
	if (!ctx.cr6.eq) goto loc_8215CE50;
loc_8215CE44:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -480, ctx.r11.u32);
loc_8215CE50:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x8215CE58;
	sub_822565C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8215CE78"))) PPC_WEAK_FUNC(sub_8215CE78);
PPC_FUNC_IMPL(__imp__sub_8215CE78) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CE90"))) PPC_WEAK_FUNC(sub_8215CE90);
PPC_FUNC_IMPL(__imp__sub_8215CE90) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CEA8"))) PPC_WEAK_FUNC(sub_8215CEA8);
PPC_FUNC_IMPL(__imp__sub_8215CEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CEB8"))) PPC_WEAK_FUNC(sub_8215CEB8);
PPC_FUNC_IMPL(__imp__sub_8215CEB8) {
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
	// addi r31,r11,-600
	ctx.r31.s64 = ctx.r11.s64 + -600;
	// lwz r11,-600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215cf20
	if (!ctx.cr6.eq) goto loc_8215CF20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82256340
	ctx.lr = 0x8215CEE4;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215cf20
	if (!ctx.cr6.eq) goto loc_8215CF20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,-480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -480, ctx.r9.u32);
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
loc_8215CF20:
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

__attribute__((alias("__imp__sub_8215CF38"))) PPC_WEAK_FUNC(sub_8215CF38);
PPC_FUNC_IMPL(__imp__sub_8215CF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-23784
	ctx.r10.s64 = ctx.r11.s64 + -23784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82088268
	ctx.lr = 0x8215CF68;
	sub_82088268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x8215CF70;
	sub_82185670(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215cf8c
	if (ctx.cr6.eq) goto loc_8215CF8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215CF88;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215CF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CFA8"))) PPC_WEAK_FUNC(sub_8215CFA8);
PPC_FUNC_IMPL(__imp__sub_8215CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-600
	ctx.r31.s64 = ctx.r10.s64 + -600;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x822aa648
	ctx.lr = 0x8215CFF4;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// bl 0x8241e0cc
	ctx.lr = 0x8215D014;
	__imp__XamLoaderGetLaunchDataSize(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d03c
	if (!ctx.cr6.eq) goto loc_8215D03C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241e0bc
	ctx.lr = 0x8215D028;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821847a8
	ctx.lr = 0x8215D038;
	sub_821847A8(ctx, base);
	// bl 0x8215ceb8
	ctx.lr = 0x8215D03C;
	sub_8215CEB8(ctx, base);
loc_8215D03C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D050"))) PPC_WEAK_FUNC(sub_8215D050);
PPC_FUNC_IMPL(__imp__sub_8215D050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215D058;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8241e0ac
	ctx.lr = 0x8215D080;
	__imp__XNotifyGetNext(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d0b4
	if (ctx.cr6.eq) goto loc_8215D0B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8215d0b4
	if (!ctx.cr6.eq) goto loc_8215D0B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d0b0
	if (!ctx.cr6.eq) goto loc_8215D0B0;
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// b 0x8215d0b4
	goto loc_8215D0B4;
loc_8215D0B0:
	// stw r25,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
loc_8215D0B4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16660);
	// bl 0x82156a10
	ctx.lr = 0x8215D0C0;
	sub_82156A10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8215D0C8;
	sub_8215BD60(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215d0e8
	if (!ctx.cr6.eq) goto loc_8215D0E8;
	// bl 0x82170e98
	ctx.lr = 0x8215D0D8;
	sub_82170E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215d0e8
	if (!ctx.cr6.eq) goto loc_8215D0E8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215d388
	if (ctx.cr6.eq) goto loc_8215D388;
loc_8215D0E8:
	// bl 0x8215bd60
	ctx.lr = 0x8215D0EC;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d104
	if (ctx.cr6.eq) goto loc_8215D104;
	// bl 0x822253a8
	ctx.lr = 0x8215D0FC;
	sub_822253A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215d388
	if (!ctx.cr6.eq) goto loc_8215D388;
loc_8215D104:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d388
	if (!ctx.cr6.eq) goto loc_8215D388;
	// bl 0x82170e98
	ctx.lr = 0x8215D114;
	sub_82170E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d134
	if (ctx.cr6.eq) goto loc_8215D134;
	// bl 0x8215bd60
	ctx.lr = 0x8215D120;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d134
	if (!ctx.cr6.eq) goto loc_8215D134;
	// stw r25,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r25.u32);
	// b 0x8215d138
	goto loc_8215D138;
loc_8215D134:
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
loc_8215D138:
	// bl 0x82163650
	ctx.lr = 0x8215D13C;
	sub_82163650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d154
	if (ctx.cr6.eq) goto loc_8215D154;
	// bl 0x8215cd98
	ctx.lr = 0x8215D148;
	sub_8215CD98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x8215d158
	if (!ctx.cr6.eq) goto loc_8215D158;
loc_8215D154:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215D158:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d384
	if (ctx.cr6.eq) goto loc_8215D384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820dd230
	ctx.lr = 0x8215D16C;
	sub_820DD230(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8215D178;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8215D188;
	sub_821ADD20(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x8215D19C;
	sub_8216DB98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8215D1A8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8215D1B4;
	sub_821AD498(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b2118
	ctx.lr = 0x8215D1BC;
	sub_821B2118(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r8.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,-23748(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23748);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23752);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stfs f0,704(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// stfs f13,708(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// lfs f30,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-32376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32376);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f2,-28048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28048);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821d1718
	ctx.lr = 0x8215D210;
	sub_821D1718(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b5ef8
	ctx.lr = 0x8215D218;
	sub_821B5EF8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b29d0
	ctx.lr = 0x8215D220;
	sub_821B29D0(ctx, base);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r4,-23764
	ctx.r4.s64 = ctx.r4.s64 + -23764;
	// bl 0x8218a540
	ctx.lr = 0x8215D238;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x8215D240;
	sub_8218A588(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821a1790
	ctx.lr = 0x8215D258;
	sub_821A1790(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x821d25f8
	ctx.lr = 0x8215D264;
	sub_821D25F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f31,-23768(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23768);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,11196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// bne cr6,0x8215d2fc
	if (!ctx.cr6.eq) goto loc_8215D2FC;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d2fc
	if (!ctx.cr6.eq) goto loc_8215D2FC;
	// bl 0x82222f50
	ctx.lr = 0x8215D294;
	sub_82222F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d2b8
	if (ctx.cr6.eq) goto loc_8215D2B8;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d2408
	ctx.lr = 0x8215D2B4;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2B8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5690
	ctx.lr = 0x8215D2C4;
	sub_820E5690(ctx, base);
	// bl 0x82256340
	ctx.lr = 0x8215D2C8;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x8215d2ec
	if (!ctx.cr6.eq) goto loc_8215D2EC;
	// li r7,50
	ctx.r7.s64 = 50;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x821d2408
	ctx.lr = 0x8215D2E8;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2EC:
	// li r7,24
	ctx.r7.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821d2408
	ctx.lr = 0x8215D2F8;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2FC:
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,78
	ctx.r5.s64 = 78;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d2408
	ctx.lr = 0x8215D314;
	sub_821D2408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lfs f0,8620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
loc_8215D324:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f2,14780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x8215D33C;
	sub_821D1718(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b6008
	ctx.lr = 0x8215D344;
	sub_821B6008(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8215D350;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8215D35C;
	sub_821AD498(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b1dc0
	ctx.lr = 0x8215D364;
	sub_821B1DC0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b1d48
	ctx.lr = 0x8215D36C;
	sub_821B1D48(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-1736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d384
	if (ctx.cr6.eq) goto loc_8215D384;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d16c0
	ctx.lr = 0x8215D384;
	sub_821D16C0(ctx, base);
loc_8215D384:
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
loc_8215D388:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215D3A0"))) PPC_WEAK_FUNC(sub_8215D3A0);
PPC_FUNC_IMPL(__imp__sub_8215D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8215D3A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d638
	if (ctx.cr6.eq) goto loc_8215D638;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d638
	if (!ctx.cr6.eq) goto loc_8215D638;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blt cr6,0x8215d638
	if (ctx.cr6.lt) goto loc_8215D638;
	// bl 0x820851b8
	ctx.lr = 0x8215D3E0;
	sub_820851B8(ctx, base);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// li r5,269
	ctx.r5.s64 = 269;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821847a8
	ctx.lr = 0x8215D3F0;
	sub_821847A8(ctx, base);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d40c
	if (ctx.cr6.eq) goto loc_8215D40C;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d52c
	if (!ctx.cr6.eq) goto loc_8215D52C;
loc_8215D40C:
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x8215D418;
	sub_821A2548(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e0ec
	ctx.lr = 0x8215D424;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,-19048(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r29,300(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r28,304(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addis r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 262144;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8215D464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085ad0
	ctx.lr = 0x8215D46C;
	sub_82085AD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d490
	if (ctx.cr6.eq) goto loc_8215D490;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82086818
	ctx.lr = 0x8215D484;
	sub_82086818(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8215d4a0
	if (!ctx.cr6.lt) goto loc_8215D4A0;
loc_8215D490:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// blt cr6,0x8215d464
	if (ctx.cr6.lt) goto loc_8215D464;
	// b 0x8215d52c
	goto loc_8215D52C;
loc_8215D4A0:
	// bl 0x82183078
	ctx.lr = 0x8215D4A4;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215D4B0;
	sub_821837D0(ctx, base);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x8215D4D8;
	sub_8226B2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d358
	ctx.lr = 0x8215D510;
	sub_8226D358(ctx, base);
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x8215D518;
	sub_821A2548(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x8215D524;
	sub_8226D3A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215D52C;
	sub_821837D0(ctx, base);
loc_8215D52C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82352190
	ctx.lr = 0x8215D534;
	sub_82352190(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16660);
	// bl 0x82156a10
	ctx.lr = 0x8215D540;
	sub_82156A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8215cd30
	ctx.lr = 0x8215D54C;
	sub_8215CD30(ctx, base);
	// bl 0x82222f50
	ctx.lr = 0x8215D550;
	sub_82222F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d5b0
	if (ctx.cr6.eq) goto loc_8215D5B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x822230d0
	ctx.lr = 0x8215D564;
	sub_822230D0(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82222fd0
	ctx.lr = 0x8215D570;
	sub_82222FD0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8215D574;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215d600
	if (!ctx.cr6.eq) goto loc_8215D600;
	// bl 0x8215bd08
	ctx.lr = 0x8215D588;
	sub_8215BD08(ctx, base);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d600
	if (ctx.cr6.eq) goto loc_8215D600;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x8215D5A8;
	sub_8231E120(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5B0:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d5c8
	if (ctx.cr6.eq) goto loc_8215D5C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8215d5dc
	if (ctx.cr6.eq) goto loc_8215D5DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5DC:
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5690
	ctx.lr = 0x8215D5F0;
	sub_820E5690(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
loc_8215D600:
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e0dc
	ctx.lr = 0x8215D60C;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215d62c
	if (ctx.cr6.lt) goto loc_8215D62C;
	// bne cr6,0x8215d638
	if (!ctx.cr6.eq) goto loc_8215D638;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5084
	ctx.r3.s64 = ctx.r11.s64 + 5084;
	// bl 0x82088660
	ctx.lr = 0x8215D62C;
	sub_82088660(ctx, base);
loc_8215D62C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,433
	ctx.r3.s64 = ctx.r1.s64 + 433;
	// bl 0x82088660
	ctx.lr = 0x8215D638;
	sub_82088660(ctx, base);
loc_8215D638:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487c8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215D648"))) PPC_WEAK_FUNC(sub_8215D648);
PPC_FUNC_IMPL(__imp__sub_8215D648) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
loc_8215D650:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8215d674
	if (ctx.cr6.eq) goto loc_8215D674;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8215d650
	if (ctx.cr6.lt) goto loc_8215D650;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215D674:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D680"))) PPC_WEAK_FUNC(sub_8215D680);
PPC_FUNC_IMPL(__imp__sub_8215D680) {
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
	// bl 0x821b1f48
	ctx.lr = 0x8215D690;
	sub_821B1F48(ctx, base);
	// bl 0x821b6e28
	ctx.lr = 0x8215D694;
	sub_821B6E28(ctx, base);
	// bl 0x821dc9f8
	ctx.lr = 0x8215D698;
	sub_821DC9F8(ctx, base);
	// bl 0x8211aba0
	ctx.lr = 0x8215D69C;
	sub_8211ABA0(ctx, base);
	// bl 0x82095650
	ctx.lr = 0x8215D6A0;
	sub_82095650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D6B0"))) PPC_WEAK_FUNC(sub_8215D6B0);
PPC_FUNC_IMPL(__imp__sub_8215D6B0) {
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
	// bl 0x82183850
	ctx.lr = 0x8215D6C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d6e0
	if (ctx.cr6.eq) goto loc_8215D6E0;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x82183448
	ctx.lr = 0x8215D6DC;
	sub_82183448(ctx, base);
	// b 0x8215d6e8
	goto loc_8215D6E8;
loc_8215D6E0:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821845a0
	ctx.lr = 0x8215D6E8;
	sub_821845A0(ctx, base);
loc_8215D6E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d714
	if (ctx.cr6.eq) goto loc_8215D714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821afe40
	ctx.lr = 0x8215D6F8;
	sub_821AFE40(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-7460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7460, ctx.r3.u32);
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
loc_8215D714:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7460, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215D738"))) PPC_WEAK_FUNC(sub_8215D738);
PPC_FUNC_IMPL(__imp__sub_8215D738) {
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
	ctx.lr = 0x8215D748;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215d760
	if (ctx.cr6.eq) goto loc_8215D760;
	// bl 0x82183448
	ctx.lr = 0x8215D75C;
	sub_82183448(ctx, base);
	// b 0x8215d764
	goto loc_8215D764;
loc_8215D760:
	// bl 0x821845a0
	ctx.lr = 0x8215D764;
	sub_821845A0(ctx, base);
loc_8215D764:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d788
	if (ctx.cr6.eq) goto loc_8215D788;
	// bl 0x821dcf28
	ctx.lr = 0x8215D770;
	sub_821DCF28(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D788:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D7A8"))) PPC_WEAK_FUNC(sub_8215D7A8);
PPC_FUNC_IMPL(__imp__sub_8215D7A8) {
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
	ctx.lr = 0x8215D7B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d7d0
	if (ctx.cr6.eq) goto loc_8215D7D0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x8215D7CC;
	sub_82183448(ctx, base);
	// b 0x8215d7d8
	goto loc_8215D7D8;
loc_8215D7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215D7D8;
	sub_821845A0(ctx, base);
loc_8215D7D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d7fc
	if (ctx.cr6.eq) goto loc_8215D7FC;
	// bl 0x822c5dd8
	ctx.lr = 0x8215D7E4;
	sub_822C5DD8(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,27156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D7FC:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D818"))) PPC_WEAK_FUNC(sub_8215D818);
PPC_FUNC_IMPL(__imp__sub_8215D818) {
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
	ctx.lr = 0x8215D828;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d840
	if (ctx.cr6.eq) goto loc_8215D840;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x8215D83C;
	sub_82183448(ctx, base);
	// b 0x8215d848
	goto loc_8215D848;
loc_8215D840:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215D848;
	sub_821845A0(ctx, base);
loc_8215D848:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d86c
	if (ctx.cr6.eq) goto loc_8215D86C;
	// bl 0x82084300
	ctx.lr = 0x8215D854;
	sub_82084300(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,27160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D86C:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D888"))) PPC_WEAK_FUNC(sub_8215D888);
PPC_FUNC_IMPL(__imp__sub_8215D888) {
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
	ctx.lr = 0x8215D898;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d8b0
	if (ctx.cr6.eq) goto loc_8215D8B0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215D8AC;
	sub_82183448(ctx, base);
	// b 0x8215d8b8
	goto loc_8215D8B8;
loc_8215D8B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215D8B8;
	sub_821845A0(ctx, base);
loc_8215D8B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d8dc
	if (ctx.cr6.eq) goto loc_8215D8DC;
	// bl 0x823c6bb8
	ctx.lr = 0x8215D8C4;
	sub_823C6BB8(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r3,-4768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D8DC:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D8F8"))) PPC_WEAK_FUNC(sub_8215D8F8);
PPC_FUNC_IMPL(__imp__sub_8215D8F8) {
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
	ctx.lr = 0x8215D908;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215d920
	if (ctx.cr6.eq) goto loc_8215D920;
	// bl 0x82183448
	ctx.lr = 0x8215D91C;
	sub_82183448(ctx, base);
	// b 0x8215d924
	goto loc_8215D924;
loc_8215D920:
	// bl 0x821845a0
	ctx.lr = 0x8215D924;
	sub_821845A0(ctx, base);
loc_8215D924:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d948
	if (ctx.cr6.eq) goto loc_8215D948;
	// bl 0x8209eda0
	ctx.lr = 0x8215D930;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D948:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D968"))) PPC_WEAK_FUNC(sub_8215D968);
PPC_FUNC_IMPL(__imp__sub_8215D968) {
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
	ctx.lr = 0x8215D978;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d990
	if (ctx.cr6.eq) goto loc_8215D990;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215D98C;
	sub_82183448(ctx, base);
	// b 0x8215d998
	goto loc_8215D998;
loc_8215D990:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215D998;
	sub_821845A0(ctx, base);
loc_8215D998:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d9bc
	if (ctx.cr6.eq) goto loc_8215D9BC;
	// bl 0x8216db60
	ctx.lr = 0x8215D9A4;
	sub_8216DB60(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D9BC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D9D8"))) PPC_WEAK_FUNC(sub_8215D9D8);
PPC_FUNC_IMPL(__imp__sub_8215D9D8) {
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
	ctx.lr = 0x8215D9E8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215da00
	if (ctx.cr6.eq) goto loc_8215DA00;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// bl 0x82183448
	ctx.lr = 0x8215D9FC;
	sub_82183448(ctx, base);
	// b 0x8215da08
	goto loc_8215DA08;
loc_8215DA00:
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x821845a0
	ctx.lr = 0x8215DA08;
	sub_821845A0(ctx, base);
loc_8215DA08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215da2c
	if (ctx.cr6.eq) goto loc_8215DA2C;
	// bl 0x82163a90
	ctx.lr = 0x8215DA14;
	sub_82163A90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DA2C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -420, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DA48"))) PPC_WEAK_FUNC(sub_8215DA48);
PPC_FUNC_IMPL(__imp__sub_8215DA48) {
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
	ctx.lr = 0x8215DA58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215da70
	if (ctx.cr6.eq) goto loc_8215DA70;
	// li r3,356
	ctx.r3.s64 = 356;
	// bl 0x82183448
	ctx.lr = 0x8215DA6C;
	sub_82183448(ctx, base);
	// b 0x8215da78
	goto loc_8215DA78;
loc_8215DA70:
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x821845a0
	ctx.lr = 0x8215DA78;
	sub_821845A0(ctx, base);
loc_8215DA78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215da9c
	if (ctx.cr6.eq) goto loc_8215DA9C;
	// bl 0x82161e90
	ctx.lr = 0x8215DA84;
	sub_82161E90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DA9C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DAB8"))) PPC_WEAK_FUNC(sub_8215DAB8);
PPC_FUNC_IMPL(__imp__sub_8215DAB8) {
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
	ctx.lr = 0x8215DAC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dae0
	if (ctx.cr6.eq) goto loc_8215DAE0;
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x82183448
	ctx.lr = 0x8215DADC;
	sub_82183448(ctx, base);
	// b 0x8215dae8
	goto loc_8215DAE8;
loc_8215DAE0:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821845a0
	ctx.lr = 0x8215DAE8;
	sub_821845A0(ctx, base);
loc_8215DAE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215db0c
	if (ctx.cr6.eq) goto loc_8215DB0C;
	// bl 0x8215f630
	ctx.lr = 0x8215DAF4;
	sub_8215F630(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DB0C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DB28"))) PPC_WEAK_FUNC(sub_8215DB28);
PPC_FUNC_IMPL(__imp__sub_8215DB28) {
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
	ctx.lr = 0x8215DB38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215db50
	if (ctx.cr6.eq) goto loc_8215DB50;
	// bl 0x82183448
	ctx.lr = 0x8215DB4C;
	sub_82183448(ctx, base);
	// b 0x8215db54
	goto loc_8215DB54;
loc_8215DB50:
	// bl 0x821845a0
	ctx.lr = 0x8215DB54;
	sub_821845A0(ctx, base);
loc_8215DB54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215db78
	if (ctx.cr6.eq) goto loc_8215DB78;
	// bl 0x82094c40
	ctx.lr = 0x8215DB60;
	sub_82094C40(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r3,-18236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DB78:
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DB98"))) PPC_WEAK_FUNC(sub_8215DB98);
PPC_FUNC_IMPL(__imp__sub_8215DB98) {
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
	ctx.lr = 0x8215DBA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dbc0
	if (ctx.cr6.eq) goto loc_8215DBC0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8215DBBC;
	sub_82183448(ctx, base);
	// b 0x8215dbc8
	goto loc_8215DBC8;
loc_8215DBC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DBC8;
	sub_821845A0(ctx, base);
loc_8215DBC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dbec
	if (ctx.cr6.eq) goto loc_8215DBEC;
	// bl 0x820b2d78
	ctx.lr = 0x8215DBD4;
	sub_820B2D78(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DBEC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DC08"))) PPC_WEAK_FUNC(sub_8215DC08);
PPC_FUNC_IMPL(__imp__sub_8215DC08) {
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
	ctx.lr = 0x8215DC18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dc30
	if (ctx.cr6.eq) goto loc_8215DC30;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DC2C;
	sub_82183448(ctx, base);
	// b 0x8215dc38
	goto loc_8215DC38;
loc_8215DC30:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DC38;
	sub_821845A0(ctx, base);
loc_8215DC38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dc5c
	if (ctx.cr6.eq) goto loc_8215DC5C;
	// bl 0x82174fd8
	ctx.lr = 0x8215DC44;
	sub_82174FD8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-9772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DC5C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DC78"))) PPC_WEAK_FUNC(sub_8215DC78);
PPC_FUNC_IMPL(__imp__sub_8215DC78) {
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
	ctx.lr = 0x8215DC88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dca0
	if (ctx.cr6.eq) goto loc_8215DCA0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DC9C;
	sub_82183448(ctx, base);
	// b 0x8215dca8
	goto loc_8215DCA8;
loc_8215DCA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DCA8;
	sub_821845A0(ctx, base);
loc_8215DCA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dccc
	if (ctx.cr6.eq) goto loc_8215DCCC;
	// bl 0x82174fd8
	ctx.lr = 0x8215DCB4;
	sub_82174FD8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-9768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DCCC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DCE8"))) PPC_WEAK_FUNC(sub_8215DCE8);
PPC_FUNC_IMPL(__imp__sub_8215DCE8) {
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
	ctx.lr = 0x8215DCF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dd10
	if (ctx.cr6.eq) goto loc_8215DD10;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215DD0C;
	sub_82183448(ctx, base);
	// b 0x8215dd18
	goto loc_8215DD18;
loc_8215DD10:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215DD18;
	sub_821845A0(ctx, base);
loc_8215DD18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dd3c
	if (ctx.cr6.eq) goto loc_8215DD3C;
	// bl 0x8215cde0
	ctx.lr = 0x8215DD24;
	sub_8215CDE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DD3C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -484, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DD58"))) PPC_WEAK_FUNC(sub_8215DD58);
PPC_FUNC_IMPL(__imp__sub_8215DD58) {
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
	ctx.lr = 0x8215DD68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dd80
	if (ctx.cr6.eq) goto loc_8215DD80;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8215DD7C;
	sub_82183448(ctx, base);
	// b 0x8215dd88
	goto loc_8215DD88;
loc_8215DD80:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DD88;
	sub_821845A0(ctx, base);
loc_8215DD88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ddac
	if (ctx.cr6.eq) goto loc_8215DDAC;
	// bl 0x8216dc88
	ctx.lr = 0x8215DD94;
	sub_8216DC88(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DDAC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DDC8"))) PPC_WEAK_FUNC(sub_8215DDC8);
PPC_FUNC_IMPL(__imp__sub_8215DDC8) {
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
	ctx.lr = 0x8215DDD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215ddf0
	if (ctx.cr6.eq) goto loc_8215DDF0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x8215DDEC;
	sub_82183448(ctx, base);
	// b 0x8215ddf8
	goto loc_8215DDF8;
loc_8215DDF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8215DDF8;
	sub_821845A0(ctx, base);
loc_8215DDF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215de1c
	if (ctx.cr6.eq) goto loc_8215DE1C;
	// bl 0x82166190
	ctx.lr = 0x8215DE04;
	sub_82166190(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,14516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DE1C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DE38"))) PPC_WEAK_FUNC(sub_8215DE38);
PPC_FUNC_IMPL(__imp__sub_8215DE38) {
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
	ctx.lr = 0x8215DE48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215de60
	if (ctx.cr6.eq) goto loc_8215DE60;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x8215DE5C;
	sub_82183448(ctx, base);
	// b 0x8215de68
	goto loc_8215DE68;
loc_8215DE60:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215DE68;
	sub_821845A0(ctx, base);
loc_8215DE68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215de8c
	if (ctx.cr6.eq) goto loc_8215DE8C;
	// bl 0x821632c8
	ctx.lr = 0x8215DE74;
	sub_821632C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DE8C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DEA8"))) PPC_WEAK_FUNC(sub_8215DEA8);
PPC_FUNC_IMPL(__imp__sub_8215DEA8) {
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
	ctx.lr = 0x8215DEB8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215ded0
	if (ctx.cr6.eq) goto loc_8215DED0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DECC;
	sub_82183448(ctx, base);
	// b 0x8215ded8
	goto loc_8215DED8;
loc_8215DED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DED8;
	sub_821845A0(ctx, base);
loc_8215DED8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215defc
	if (ctx.cr6.eq) goto loc_8215DEFC;
	// bl 0x822307b8
	ctx.lr = 0x8215DEE4;
	sub_822307B8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DEFC:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DF18"))) PPC_WEAK_FUNC(sub_8215DF18);
PPC_FUNC_IMPL(__imp__sub_8215DF18) {
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
	ctx.lr = 0x8215DF28;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215df44
	if (ctx.cr6.eq) goto loc_8215DF44;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,33232
	ctx.r3.u64 = ctx.r3.u64 | 33232;
	// bl 0x82183448
	ctx.lr = 0x8215DF40;
	sub_82183448(ctx, base);
	// b 0x8215df4c
	goto loc_8215DF4C;
loc_8215DF44:
	// li r3,2077
	ctx.r3.s64 = 2077;
	// bl 0x821845a0
	ctx.lr = 0x8215DF4C;
	sub_821845A0(ctx, base);
loc_8215DF4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215df70
	if (ctx.cr6.eq) goto loc_8215DF70;
	// bl 0x82232990
	ctx.lr = 0x8215DF58;
	sub_82232990(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DF70:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1092, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DF90"))) PPC_WEAK_FUNC(sub_8215DF90);
PPC_FUNC_IMPL(__imp__sub_8215DF90) {
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
	ctx.lr = 0x8215DFA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dfb8
	if (ctx.cr6.eq) goto loc_8215DFB8;
	// li r3,348
	ctx.r3.s64 = 348;
	// bl 0x82183448
	ctx.lr = 0x8215DFB4;
	sub_82183448(ctx, base);
	// b 0x8215dfc0
	goto loc_8215DFC0;
loc_8215DFB8:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x821845a0
	ctx.lr = 0x8215DFC0;
	sub_821845A0(ctx, base);
loc_8215DFC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dfe4
	if (ctx.cr6.eq) goto loc_8215DFE4;
	// bl 0x82170ed8
	ctx.lr = 0x8215DFCC;
	sub_82170ED8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DFE4:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E000"))) PPC_WEAK_FUNC(sub_8215E000);
PPC_FUNC_IMPL(__imp__sub_8215E000) {
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
	ctx.lr = 0x8215E010;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e028
	if (ctx.cr6.eq) goto loc_8215E028;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82183448
	ctx.lr = 0x8215E024;
	sub_82183448(ctx, base);
	// b 0x8215e030
	goto loc_8215E030;
loc_8215E028:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215E030;
	sub_821845A0(ctx, base);
loc_8215E030:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e054
	if (ctx.cr6.eq) goto loc_8215E054;
	// bl 0x82175c60
	ctx.lr = 0x8215E03C;
	sub_82175C60(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,16660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E054:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E070"))) PPC_WEAK_FUNC(sub_8215E070);
PPC_FUNC_IMPL(__imp__sub_8215E070) {
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
	ctx.lr = 0x8215E080;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e098
	if (ctx.cr6.eq) goto loc_8215E098;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8215E094;
	sub_82183448(ctx, base);
	// b 0x8215e0a0
	goto loc_8215E0A0;
loc_8215E098:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8215E0A0;
	sub_821845A0(ctx, base);
loc_8215E0A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e0c4
	if (ctx.cr6.eq) goto loc_8215E0C4;
	// bl 0x82094960
	ctx.lr = 0x8215E0AC;
	sub_82094960(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r3,-18240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E0C4:
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E0E0"))) PPC_WEAK_FUNC(sub_8215E0E0);
PPC_FUNC_IMPL(__imp__sub_8215E0E0) {
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
	ctx.lr = 0x8215E0F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e108
	if (ctx.cr6.eq) goto loc_8215E108;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82183448
	ctx.lr = 0x8215E104;
	sub_82183448(ctx, base);
	// b 0x8215e110
	goto loc_8215E110;
loc_8215E108:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8215E110;
	sub_821845A0(ctx, base);
loc_8215E110:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e134
	if (ctx.cr6.eq) goto loc_8215E134;
	// bl 0x8216d0d0
	ctx.lr = 0x8215E11C;
	sub_8216D0D0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E134:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E150"))) PPC_WEAK_FUNC(sub_8215E150);
PPC_FUNC_IMPL(__imp__sub_8215E150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215E158;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82256d10
	ctx.lr = 0x8215E164;
	sub_82256D10(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r3,110(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// or r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bl 0x82088650
	ctx.lr = 0x8215E190;
	sub_82088650(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// bl 0x8218fef8
	ctx.lr = 0x8215E1A0;
	sub_8218FEF8(ctx, base);
	// lhz r6,110(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// stb r3,24332(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24332, ctx.r3.u8);
	// bl 0x8218fb20
	ctx.lr = 0x8215E1B4;
	sub_8218FB20(ctx, base);
	// lhz r3,110(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// bl 0x822488a0
	ctx.lr = 0x8215E1BC;
	sub_822488A0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,512
	ctx.r10.s64 = 512;
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// li r9,128
	ctx.r9.s64 = 128;
	// std r29,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r29.u64);
	// ori r8,r11,49152
	ctx.r8.u64 = ctx.r11.u64 | 49152;
	// std r29,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r29.u64);
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bl 0x82183850
	ctx.lr = 0x8215E200;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8215e218
	if (ctx.cr6.eq) goto loc_8215E218;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82183448
	ctx.lr = 0x8215E214;
	sub_82183448(ctx, base);
	// b 0x8215e228
	goto loc_8215E228;
loc_8215E218:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r10,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8215E228;
	sub_821845A0(ctx, base);
loc_8215E228:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821897e0
	ctx.lr = 0x8215E264;
	sub_821897E0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186a28
	ctx.lr = 0x8215E26C;
	sub_82186A28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82184808
	ctx.lr = 0x8215E274;
	sub_82184808(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,93
	ctx.r4.s64 = 93;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82186670
	ctx.lr = 0x8215E28C;
	sub_82186670(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E290;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e2a8
	if (ctx.cr6.eq) goto loc_8215E2A8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E2A4;
	sub_82183448(ctx, base);
	// b 0x8215e2b0
	goto loc_8215E2B0;
loc_8215E2A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E2B0;
	sub_821845A0(ctx, base);
loc_8215E2B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e2c0
	if (ctx.cr6.eq) goto loc_8215E2C0;
	// bl 0x82175f68
	ctx.lr = 0x8215E2BC;
	sub_82175F68(ctx, base);
	// b 0x8215e2c4
	goto loc_8215E2C4;
loc_8215E2C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8215E2C4:
	// bl 0x8218c908
	ctx.lr = 0x8215E2C8;
	sub_8218C908(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E2CC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E2D8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E2DC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e2f4
	if (ctx.cr6.eq) goto loc_8215E2F4;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8215E2F0;
	sub_82183448(ctx, base);
	// b 0x8215e2fc
	goto loc_8215E2FC;
loc_8215E2F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8215E2FC;
	sub_821845A0(ctx, base);
loc_8215E2FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e31c
	if (ctx.cr6.eq) goto loc_8215E31C;
	// bl 0x82183078
	ctx.lr = 0x8215E30C;
	sub_82183078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x8218e628
	ctx.lr = 0x8215E31C;
	sub_8218E628(ctx, base);
loc_8215E31C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E324;
	sub_821837D0(ctx, base);
	// bl 0x82187130
	ctx.lr = 0x8215E328;
	sub_82187130(ctx, base);
	// bl 0x8209eda0
	ctx.lr = 0x8215E32C;
	sub_8209EDA0(ctx, base);
	// bl 0x823c2f28
	ctx.lr = 0x8215E330;
	sub_823C2F28(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E334;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e34c
	if (ctx.cr6.eq) goto loc_8215E34C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E348;
	sub_82183448(ctx, base);
	// b 0x8215e354
	goto loc_8215E354;
loc_8215E34C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E354;
	sub_821845A0(ctx, base);
loc_8215E354:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e360
	if (ctx.cr6.eq) goto loc_8215E360;
	// bl 0x82193018
	ctx.lr = 0x8215E360;
	sub_82193018(ctx, base);
loc_8215E360:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8215E364:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821930b0
	ctx.lr = 0x8215E370;
	sub_821930B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8215e364
	if (ctx.cr6.lt) goto loc_8215E364;
	// bl 0x82183850
	ctx.lr = 0x8215E380;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e398
	if (ctx.cr6.eq) goto loc_8215E398;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E394;
	sub_82183448(ctx, base);
	// b 0x8215e3a0
	goto loc_8215E3A0;
loc_8215E398:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E3A0;
	sub_821845A0(ctx, base);
loc_8215E3A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e3b8
	if (ctx.cr6.eq) goto loc_8215E3B8;
	// bl 0x821d18b0
	ctx.lr = 0x8215E3AC;
	sub_821D18B0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-1736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1736, ctx.r3.u32);
	// b 0x8215e3c4
	goto loc_8215E3C4;
loc_8215E3B8:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-1736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1736, ctx.r29.u32);
loc_8215E3C4:
	// bl 0x820f32d8
	ctx.lr = 0x8215E3C8;
	sub_820F32D8(ctx, base);
	// bl 0x820851b8
	ctx.lr = 0x8215E3CC;
	sub_820851B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215E3E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215e3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E3E0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215E408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x8215E40C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e424
	if (ctx.cr6.eq) goto loc_8215E424;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8215E420;
	sub_82183448(ctx, base);
	// b 0x8215e42c
	goto loc_8215E42C;
loc_8215E424:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8215E42C;
	sub_821845A0(ctx, base);
loc_8215E42C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e440
	if (ctx.cr6.eq) goto loc_8215E440;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821927c8
	ctx.lr = 0x8215E440;
	sub_821927C8(ctx, base);
loc_8215E440:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-20040
	ctx.r5.s64 = ctx.r11.s64 + -20040;
	// addi r4,r10,-21176
	ctx.r4.s64 = ctx.r10.s64 + -21176;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218dca8
	ctx.lr = 0x8215E45C;
	sub_8218DCA8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215E468"))) PPC_WEAK_FUNC(sub_8215E468);
PPC_FUNC_IMPL(__imp__sub_8215E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215E470;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,-13808
	ctx.r3.s64 = ctx.r11.s64 + -13808;
	// bl 0x8218f5c0
	ctx.lr = 0x8215E480;
	sub_8218F5C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e0ec
	ctx.lr = 0x8215E488;
	__imp__XGetVideoMode(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822aa648
	ctx.lr = 0x8215E494;
	sub_822AA648(ctx, base);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r10,70
	ctx.r10.s64 = 70;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bne cr6,0x8215e4bc
	if (!ctx.cr6.eq) goto loc_8215E4BC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215e4bc
	if (!ctx.cr6.eq) goto loc_8215E4BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8215e4c4
	goto loc_8215E4C4;
loc_8215E4BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8215E4C4:
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8215e4fc
	if (ctx.cr6.eq) goto loc_8215E4FC;
	// cmplwi cr6,r10,1080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1080, ctx.xer);
	// blt cr6,0x8215e4fc
	if (ctx.cr6.lt) goto loc_8215E4FC;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8215e52c
	goto loc_8215E52C;
loc_8215E4FC:
	// cmplwi cr6,r10,720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 720, ctx.xer);
	// blt cr6,0x8215e50c
	if (ctx.cr6.lt) goto loc_8215E50C;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x8215e52c
	goto loc_8215E52C;
loc_8215E50C:
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x8215e530
	if (!ctx.cr6.eq) goto loc_8215E530;
	// cmplwi cr6,r10,576
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 576, ctx.xer);
	// bne cr6,0x8215e530
	if (!ctx.cr6.eq) goto loc_8215E530;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8215e530
	if (ctx.cr6.eq) goto loc_8215E530;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8215E52C:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8215E530:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8215e548
	if (ctx.cr6.eq) goto loc_8215E548;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8215e558
	if (!ctx.cr6.eq) goto loc_8215E558;
loc_8215E548:
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
loc_8215E558:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821acd70
	ctx.lr = 0x8215E560;
	sub_821ACD70(ctx, base);
	// bl 0x8215d738
	ctx.lr = 0x8215E564;
	sub_8215D738(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E568;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e580
	if (ctx.cr6.eq) goto loc_8215E580;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E57C;
	sub_82183448(ctx, base);
	// b 0x8215e588
	goto loc_8215E588;
loc_8215E580:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E588;
	sub_821845A0(ctx, base);
loc_8215E588:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e5a0
	if (ctx.cr6.eq) goto loc_8215E5A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1400
	ctx.r5.s64 = 1400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821aeec0
	ctx.lr = 0x8215E5A0;
	sub_821AEEC0(ctx, base);
loc_8215E5A0:
	// bl 0x82183850
	ctx.lr = 0x8215E5A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e5bc
	if (ctx.cr6.eq) goto loc_8215E5BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E5B8;
	sub_82183448(ctx, base);
	// b 0x8215e5c4
	goto loc_8215E5C4;
loc_8215E5BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E5C4;
	sub_821845A0(ctx, base);
loc_8215E5C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e5dc
	if (ctx.cr6.eq) goto loc_8215E5DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821aef08
	ctx.lr = 0x8215E5DC;
	sub_821AEF08(ctx, base);
loc_8215E5DC:
	// bl 0x82183850
	ctx.lr = 0x8215E5E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e5f8
	if (ctx.cr6.eq) goto loc_8215E5F8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E5F4;
	sub_82183448(ctx, base);
	// b 0x8215e600
	goto loc_8215E600;
loc_8215E5F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E600;
	sub_821845A0(ctx, base);
loc_8215E600:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e618
	if (ctx.cr6.eq) goto loc_8215E618;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a7a10
	ctx.lr = 0x8215E618;
	sub_821A7A10(ctx, base);
loc_8215E618:
	// bl 0x82154c88
	ctx.lr = 0x8215E61C;
	sub_82154C88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821831f8
	ctx.lr = 0x8215E624;
	sub_821831F8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r29,r11,0,0,11
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// bl 0x82183850
	ctx.lr = 0x8215E630;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e648
	if (ctx.cr6.eq) goto loc_8215E648;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82183448
	ctx.lr = 0x8215E644;
	sub_82183448(ctx, base);
	// b 0x8215e650
	goto loc_8215E650;
loc_8215E648:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x8215E650;
	sub_821845A0(ctx, base);
loc_8215E650:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,4128
	ctx.r30.s64 = ctx.r11.s64 + 4128;
	// beq cr6,0x8215e6b0
	if (ctx.cr6.eq) goto loc_8215E6B0;
	// bl 0x82088650
	ctx.lr = 0x8215E668;
	sub_82088650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82154c88
	ctx.lr = 0x8215E670;
	sub_82154C88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// addi r10,r11,-10624
	ctx.r10.s64 = ctx.r11.s64 + -10624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwinm r8,r29,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// bl 0x821aa528
	ctx.lr = 0x8215E6A8;
	sub_821AA528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8215e6b4
	goto loc_8215E6B4;
loc_8215E6B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8215E6B4:
	// bl 0x821a3640
	ctx.lr = 0x8215E6B8;
	sub_821A3640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa918
	ctx.lr = 0x8215E6C0;
	sub_821AA918(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E6C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e6dc
	if (ctx.cr6.eq) goto loc_8215E6DC;
	// li r3,1196
	ctx.r3.s64 = 1196;
	// bl 0x82183448
	ctx.lr = 0x8215E6D8;
	sub_82183448(ctx, base);
	// b 0x8215e6e4
	goto loc_8215E6E4;
loc_8215E6DC:
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821845a0
	ctx.lr = 0x8215E6E4;
	sub_821845A0(ctx, base);
loc_8215E6E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e6fc
	if (ctx.cr6.eq) goto loc_8215E6FC;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// bl 0x821ac538
	ctx.lr = 0x8215E6FC;
	sub_821AC538(ctx, base);
loc_8215E6FC:
	// bl 0x82183850
	ctx.lr = 0x8215E700;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e718
	if (ctx.cr6.eq) goto loc_8215E718;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215E714;
	sub_82183448(ctx, base);
	// b 0x8215e720
	goto loc_8215E720;
loc_8215E718:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215E720;
	sub_821845A0(ctx, base);
loc_8215E720:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e734
	if (ctx.cr6.eq) goto loc_8215E734;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// bl 0x821a0c48
	ctx.lr = 0x8215E734;
	sub_821A0C48(ctx, base);
loc_8215E734:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8215d6b0
	ctx.lr = 0x8215E73C;
	sub_8215D6B0(ctx, base);
	// bl 0x8215c090
	ctx.lr = 0x8215E740;
	sub_8215C090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8215E748;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E754;
	sub_821837D0(ctx, base);
	// bl 0x8215c090
	ctx.lr = 0x8215E758;
	sub_8215C090(ctx, base);
	// bl 0x821147b8
	ctx.lr = 0x8215E75C;
	sub_821147B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E764;
	sub_821837D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215E770"))) PPC_WEAK_FUNC(sub_8215E770);
PPC_FUNC_IMPL(__imp__sub_8215E770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215E778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8215bd18
	ctx.lr = 0x8215E788;
	sub_8215BD18(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,51200
	ctx.r29.u64 = ctx.r11.u64 | 51200;
loc_8215E790:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bd28
	ctx.lr = 0x8215E798;
	sub_8215BD28(ctx, base);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8215bd18
	ctx.lr = 0x8215E7A4;
	sub_8215BD18(ctx, base);
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 33, ctx.xer);
	// blt cr6,0x8215e790
	if (ctx.cr6.lt) goto loc_8215E790;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7B4;
	sub_8215BD28(ctx, base);
	// li r11,10002
	ctx.r11.s64 = 10002;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7C4;
	sub_8215BD28(ctx, base);
	// li r10,10102
	ctx.r10.s64 = 10102;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7D4;
	sub_8215BD28(ctx, base);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7E0;
	sub_8215BD28(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7F0;
	sub_8215BD28(ctx, base);
	// stb r31,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7FC;
	sub_8215BD28(ctx, base);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// bl 0x8215bec8
	ctx.lr = 0x8215E804;
	sub_8215BEC8(ctx, base);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8215E80C;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,580
	ctx.r3.s64 = ctx.r3.s64 + 580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822331c8
	ctx.lr = 0x8215E818;
	sub_822331C8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8215E81C;
	sub_8215BEC8(ctx, base);
	// stb r30,624(r3)
	PPC_STORE_U8(ctx.r3.u32 + 624, ctx.r30.u8);
	// li r29,2
	ctx.r29.s64 = 2;
loc_8215E824:
	// bl 0x8215bec8
	ctx.lr = 0x8215E828;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// stb r29,611(r11)
	PPC_STORE_U8(ctx.r11.u32 + 611, ctx.r29.u8);
	// blt cr6,0x8215e824
	if (ctx.cr6.lt) goto loc_8215E824;
	// bl 0x8215bec8
	ctx.lr = 0x8215E840;
	sub_8215BEC8(ctx, base);
	// stb r30,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, ctx.r30.u8);
	// bl 0x82175710
	ctx.lr = 0x8215E848;
	sub_82175710(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215E850"))) PPC_WEAK_FUNC(sub_8215E850);
PPC_FUNC_IMPL(__imp__sub_8215E850) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82183078
	ctx.lr = 0x8215E868;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E874;
	sub_821837D0(ctx, base);
	// bl 0x8215d7a8
	ctx.lr = 0x8215E878;
	sub_8215D7A8(ctx, base);
	// bl 0x8215d818
	ctx.lr = 0x8215E87C;
	sub_8215D818(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E880;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e898
	if (ctx.cr6.eq) goto loc_8215E898;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E894;
	sub_82183448(ctx, base);
	// b 0x8215e8a0
	goto loc_8215E8A0;
loc_8215E898:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E8A0;
	sub_821845A0(ctx, base);
loc_8215E8A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e8ac
	if (ctx.cr6.eq) goto loc_8215E8AC;
	// bl 0x82176a00
	ctx.lr = 0x8215E8AC;
	sub_82176A00(ctx, base);
loc_8215E8AC:
	// bl 0x8215d9d8
	ctx.lr = 0x8215E8B0;
	sub_8215D9D8(ctx, base);
	// bl 0x8215ddc8
	ctx.lr = 0x8215E8B4;
	sub_8215DDC8(ctx, base);
	// bl 0x8215db28
	ctx.lr = 0x8215E8B8;
	sub_8215DB28(ctx, base);
	// bl 0x8215db98
	ctx.lr = 0x8215E8BC;
	sub_8215DB98(ctx, base);
	// bl 0x8215e0e0
	ctx.lr = 0x8215E8C0;
	sub_8215E0E0(ctx, base);
	// bl 0x8215e070
	ctx.lr = 0x8215E8C4;
	sub_8215E070(ctx, base);
	// bl 0x820ecd30
	ctx.lr = 0x8215E8C8;
	sub_820ECD30(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x8215dc08
	ctx.lr = 0x8215E8D8;
	sub_8215DC08(ctx, base);
	// bl 0x8215dc78
	ctx.lr = 0x8215E8DC;
	sub_8215DC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821767c0
	ctx.lr = 0x8215E8E4;
	sub_821767C0(ctx, base);
	// bl 0x8215e770
	ctx.lr = 0x8215E8E8;
	sub_8215E770(ctx, base);
	// bl 0x82081ce8
	ctx.lr = 0x8215E8EC;
	sub_82081CE8(ctx, base);
	// bl 0x82080f80
	ctx.lr = 0x8215E8F0;
	sub_82080F80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6d50
	ctx.lr = 0x8215E8F8;
	sub_823C6D50(ctx, base);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8215d888
	ctx.lr = 0x8215E92C;
	sub_8215D888(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,-4768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4768);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8215E944:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215e944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E944;
	// bl 0x8215da48
	ctx.lr = 0x8215E954;
	sub_8215DA48(ctx, base);
	// bl 0x8215de38
	ctx.lr = 0x8215E958;
	sub_8215DE38(ctx, base);
	// bl 0x82083c50
	ctx.lr = 0x8215E95C;
	sub_82083C50(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e5098
	ctx.lr = 0x8215E970;
	sub_820E5098(ctx, base);
	// bl 0x82220d98
	ctx.lr = 0x8215E974;
	sub_82220D98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// addi r4,r10,-10688
	ctx.r4.s64 = ctx.r10.s64 + -10688;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x821e8b58
	ctx.lr = 0x8215E98C;
	sub_821E8B58(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8218de28
	ctx.lr = 0x8215E998;
	sub_8218DE28(ctx, base);
	// bl 0x8215d8f8
	ctx.lr = 0x8215E99C;
	sub_8215D8F8(ctx, base);
	// bl 0x8215d968
	ctx.lr = 0x8215E9A0;
	sub_8215D968(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E9A4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E9B0;
	sub_821837D0(ctx, base);
	// bl 0x8215dea8
	ctx.lr = 0x8215E9B4;
	sub_8215DEA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E9BC;
	sub_821837D0(ctx, base);
	// bl 0x8215df90
	ctx.lr = 0x8215E9C0;
	sub_8215DF90(ctx, base);
	// bl 0x82176608
	ctx.lr = 0x8215E9C4;
	sub_82176608(ctx, base);
	// bl 0x8215e000
	ctx.lr = 0x8215E9C8;
	sub_8215E000(ctx, base);
	// bl 0x8215dce8
	ctx.lr = 0x8215E9CC;
	sub_8215DCE8(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E9D0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E9DC;
	sub_821837D0(ctx, base);
	// bl 0x8215dab8
	ctx.lr = 0x8215E9E0;
	sub_8215DAB8(ctx, base);
	// bl 0x8215dd58
	ctx.lr = 0x8215E9E4;
	sub_8215DD58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E9EC;
	sub_821837D0(ctx, base);
	// bl 0x8215df18
	ctx.lr = 0x8215E9F0;
	sub_8215DF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x8215E9F8;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215EA00;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215EA18"))) PPC_WEAK_FUNC(sub_8215EA18);
PPC_FUNC_IMPL(__imp__sub_8215EA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,-1736(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1736);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ea50
	if (ctx.cr6.eq) goto loc_8215EA50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d1658
	ctx.lr = 0x8215EA44;
	sub_821D1658(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EA50;
	sub_82183E40(ctx, base);
loc_8215EA50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1736, ctx.r11.u32);
	// bl 0x820833b8
	ctx.lr = 0x8215EA5C;
	sub_820833B8(ctx, base);
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lwz r3,21780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ea80
	if (ctx.cr6.eq) goto loc_8215EA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EA80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21780, ctx.r11.u32);
	// bl 0x82186998
	ctx.lr = 0x8215EA8C;
	sub_82186998(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r31,21792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eab0
	if (ctx.cr6.eq) goto loc_8215EAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e4b0
	ctx.lr = 0x8215EAA4;
	sub_8218E4B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EAB0;
	sub_82183E40(ctx, base);
loc_8215EAB0:
	// bl 0x82189a00
	ctx.lr = 0x8215EAB4;
	sub_82189A00(ctx, base);
	// bl 0x82190020
	ctx.lr = 0x8215EAB8;
	sub_82190020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EAD0"))) PPC_WEAK_FUNC(sub_8215EAD0);
PPC_FUNC_IMPL(__imp__sub_8215EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-7472(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eb08
	if (ctx.cr6.eq) goto loc_8215EB08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aed78
	ctx.lr = 0x8215EAFC;
	sub_821AED78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB08;
	sub_82183E40(ctx, base);
loc_8215EB08:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7472(r30)
	PPC_STORE_U32(ctx.r30.u32 + -7472, ctx.r11.u32);
	// lwz r30,-7476(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7476);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eb34
	if (ctx.cr6.eq) goto loc_8215EB34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aed08
	ctx.lr = 0x8215EB28;
	sub_821AED08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB34;
	sub_82183E40(ctx, base);
loc_8215EB34:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7476, ctx.r11.u32);
	// lwz r31,-19016(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19016);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eb60
	if (ctx.cr6.eq) goto loc_8215EB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6f38
	ctx.lr = 0x8215EB54;
	sub_821A6F38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB60;
	sub_82183E40(ctx, base);
loc_8215EB60:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19016(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19016, ctx.r11.u32);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215eb8c
	if (ctx.cr6.eq) goto loc_8215EB8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EB8C:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7460, ctx.r11.u32);
	// lwz r31,-1212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ebb8
	if (ctx.cr6.eq) goto loc_8215EBB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dcfd8
	ctx.lr = 0x8215EBAC;
	sub_821DCFD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EBB8;
	sub_82183E40(ctx, base);
loc_8215EBB8:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1212(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1212, ctx.r11.u32);
	// lwz r3,-8200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ebe4
	if (ctx.cr6.eq) goto loc_8215EBE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EBE4:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8200, ctx.r11.u32);
	// lwz r3,-19232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ec10
	if (ctx.cr6.eq) goto loc_8215EC10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EC10:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19232(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19232, ctx.r11.u32);
	// lwz r3,-8196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ec3c
	if (ctx.cr6.eq) goto loc_8215EC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EC3C:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8196, ctx.r11.u32);
	// lwz r31,-1216(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1216);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ec68
	if (ctx.cr6.eq) goto loc_8215EC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dced0
	ctx.lr = 0x8215EC5C;
	sub_821DCED0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EC68;
	sub_82183E40(ctx, base);
loc_8215EC68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1216(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1216, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215EC88"))) PPC_WEAK_FUNC(sub_8215EC88);
PPC_FUNC_IMPL(__imp__sub_8215EC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,1092(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ecc0
	if (ctx.cr6.eq) goto loc_8215ECC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231e18
	ctx.lr = 0x8215ECB4;
	sub_82231E18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ECC0;
	sub_82183E40(ctx, base);
loc_8215ECC0:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r11.u32);
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ecec
	if (ctx.cr6.eq) goto loc_8215ECEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215ECEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215ECEC:
	// lis r30,-32186
	ctx.r30.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -468, ctx.r11.u32);
	// lwz r31,27156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27156);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ed18
	if (ctx.cr6.eq) goto loc_8215ED18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dfe80
	ctx.lr = 0x8215ED0C;
	sub_820DFE80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED18;
	sub_82183E40(ctx, base);
loc_8215ED18:
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27156, ctx.r11.u32);
	// lwz r30,27160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ed44
	if (ctx.cr6.eq) goto loc_8215ED44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82084a28
	ctx.lr = 0x8215ED38;
	sub_82084A28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED44;
	sub_82183E40(ctx, base);
loc_8215ED44:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27160, ctx.r11.u32);
	// lwz r3,-484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ed70
	if (ctx.cr6.eq) goto loc_8215ED70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215ED70:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-484(r30)
	PPC_STORE_U32(ctx.r30.u32 + -484, ctx.r11.u32);
	// lwz r30,-2048(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2048);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ed9c
	if (ctx.cr6.eq) goto loc_8215ED9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215ED90;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED9C;
	sub_82183E40(ctx, base);
loc_8215ED9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2048, ctx.r11.u32);
	// bl 0x82083a98
	ctx.lr = 0x8215EDA8;
	sub_82083A98(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r30,-432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -432);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215edcc
	if (ctx.cr6.eq) goto loc_8215EDCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821632e8
	ctx.lr = 0x8215EDC0;
	sub_821632E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EDCC;
	sub_82183E40(ctx, base);
loc_8215EDCC:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -432, ctx.r11.u32);
	// lwz r3,-444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215edf8
	if (ctx.cr6.eq) goto loc_8215EDF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EDF8:
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-444(r30)
	PPC_STORE_U32(ctx.r30.u32 + -444, ctx.r11.u32);
	// lwz r30,-4768(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4768);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ee24
	if (ctx.cr6.eq) goto loc_8215EE24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c6cb0
	ctx.lr = 0x8215EE18;
	sub_823C6CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EE24;
	sub_82183E40(ctx, base);
loc_8215EE24:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4768, ctx.r11.u32);
	// lwz r31,-3296(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3296);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ee50
	if (ctx.cr6.eq) goto loc_8215EE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1c30
	ctx.lr = 0x8215EE44;
	sub_821B1C30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EE50;
	sub_82183E40(ctx, base);
loc_8215EE50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3296(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3296, ctx.r11.u32);
	// bl 0x820818a0
	ctx.lr = 0x8215EE5C;
	sub_820818A0(ctx, base);
	// bl 0x82081298
	ctx.lr = 0x8215EE60;
	sub_82081298(ctx, base);
	// bl 0x82080ff8
	ctx.lr = 0x8215EE64;
	sub_82080FF8(ctx, base);
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// lwz r3,-18240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ee88
	if (ctx.cr6.eq) goto loc_8215EE88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EE88:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18240, ctx.r11.u32);
	// lwz r3,15460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215eeb4
	if (ctx.cr6.eq) goto loc_8215EEB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EEB4:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15460, ctx.r11.u32);
	// lwz r30,-8552(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eee0
	if (ctx.cr6.eq) goto loc_8215EEE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2f10
	ctx.lr = 0x8215EED4;
	sub_820B2F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EEE0;
	sub_82183E40(ctx, base);
loc_8215EEE0:
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8552, ctx.r11.u32);
	// lwz r31,-18236(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18236);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ef0c
	if (ctx.cr6.eq) goto loc_8215EF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094ee0
	ctx.lr = 0x8215EF00;
	sub_82094EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF0C;
	sub_82183E40(ctx, base);
loc_8215EF0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18236(r30)
	PPC_STORE_U32(ctx.r30.u32 + -18236, ctx.r11.u32);
	// bl 0x8216c2a0
	ctx.lr = 0x8215EF18;
	sub_8216C2A0(ctx, base);
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r31,14516(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14516);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ef3c
	if (ctx.cr6.eq) goto loc_8215EF3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166140
	ctx.lr = 0x8215EF30;
	sub_82166140(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF3C;
	sub_82183E40(ctx, base);
loc_8215EF3C:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14516, ctx.r11.u32);
	// lwz r30,-420(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -420);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ef68
	if (ctx.cr6.eq) goto loc_8215EF68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163bf0
	ctx.lr = 0x8215EF5C;
	sub_82163BF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF68;
	sub_82183E40(ctx, base);
loc_8215EF68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -420, ctx.r11.u32);
	// bl 0x82114250
	ctx.lr = 0x8215EF74;
	sub_82114250(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r30,1124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ef98
	if (ctx.cr6.eq) goto loc_8215EF98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822367f8
	ctx.lr = 0x8215EF8C;
	sub_822367F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF98;
	sub_82183E40(ctx, base);
loc_8215EF98:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// lwz r3,-752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215efc4
	if (ctx.cr6.eq) goto loc_8215EFC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EFC4:
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-752(r30)
	PPC_STORE_U32(ctx.r30.u32 + -752, ctx.r11.u32);
	// lwz r30,15464(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eff0
	if (ctx.cr6.eq) goto loc_8215EFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215EFE4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EFF0;
	sub_82183E40(ctx, base);
loc_8215EFF0:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15464, ctx.r11.u32);
	// lwz r31,1088(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215f01c
	if (ctx.cr6.eq) goto loc_8215F01C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230770
	ctx.lr = 0x8215F010;
	sub_82230770(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215F01C;
	sub_82183E40(ctx, base);
loc_8215F01C:
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r11.u32);
	// lwz r3,15472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f048
	if (ctx.cr6.eq) goto loc_8215F048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F048:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15472, ctx.r11.u32);
	// bl 0x821764f0
	ctx.lr = 0x8215F054;
	sub_821764F0(ctx, base);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r3,16660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f078
	if (ctx.cr6.eq) goto loc_8215F078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F078:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16660, ctx.r11.u32);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f0a4
	if (ctx.cr6.eq) goto loc_8215F0A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F0A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-796(r30)
	PPC_STORE_U32(ctx.r30.u32 + -796, ctx.r11.u32);
	// bl 0x82220e10
	ctx.lr = 0x8215F0B4;
	sub_82220E10(ctx, base);
	// bl 0x820e5048
	ctx.lr = 0x8215F0B8;
	sub_820E5048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F0D0"))) PPC_WEAK_FUNC(sub_8215F0D0);
PPC_FUNC_IMPL(__imp__sub_8215F0D0) {
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
	// bl 0x82183078
	ctx.lr = 0x8215F0E4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215F0F0;
	sub_821837D0(ctx, base);
	// bl 0x8215e150
	ctx.lr = 0x8215F0F4;
	sub_8215E150(ctx, base);
	// bl 0x8215e468
	ctx.lr = 0x8215F0F8;
	sub_8215E468(ctx, base);
	// bl 0x8215e850
	ctx.lr = 0x8215F0FC;
	sub_8215E850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F104;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215F118"))) PPC_WEAK_FUNC(sub_8215F118);
PPC_FUNC_IMPL(__imp__sub_8215F118) {
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
	// bl 0x8215ea18
	ctx.lr = 0x8215F128;
	sub_8215EA18(ctx, base);
	// bl 0x8215ead0
	ctx.lr = 0x8215F12C;
	sub_8215EAD0(ctx, base);
	// bl 0x8215ec88
	ctx.lr = 0x8215F130;
	sub_8215EC88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F140"))) PPC_WEAK_FUNC(sub_8215F140);
PPC_FUNC_IMPL(__imp__sub_8215F140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f180
	if (ctx.cr6.eq) goto loc_8215F180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8215F180;
	sub_82183E40(ctx, base);
loc_8215F180:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F1A0"))) PPC_WEAK_FUNC(sub_8215F1A0);
PPC_FUNC_IMPL(__imp__sub_8215F1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215F1A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8215F1B4;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8215F1BC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F1C8;
	sub_821837D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,511
	ctx.r5.s64 = 511;
	// addi r3,r11,-23744
	ctx.r3.s64 = ctx.r11.s64 + -23744;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8218f128
	ctx.lr = 0x8215F1DC;
	sub_8218F128(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218f468
	ctx.lr = 0x8215F1E8;
	sub_8218F468(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// addi r10,r3,2047
	ctx.r10.s64 = ctx.r3.s64 + 2047;
	// rlwinm r30,r10,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x82183850
	ctx.lr = 0x8215F1F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8215f210
	if (ctx.cr6.eq) goto loc_8215F210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8215F20C;
	sub_82183448(ctx, base);
	// b 0x8215f21c
	goto loc_8215F21C;
loc_8215F210:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8215F21C;
	sub_821845A0(ctx, base);
loc_8215F21C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r11,r30,2047
	ctx.r11.s64 = ctx.r30.s64 + 2047;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f248
	ctx.lr = 0x8215F234;
	sub_8218F248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f310
	ctx.lr = 0x8215F23C;
	sub_8218F310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F244;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F250"))) PPC_WEAK_FUNC(sub_8215F250);
PPC_FUNC_IMPL(__imp__sub_8215F250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82088650
	ctx.lr = 0x8215F26C;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x8215F274;
	sub_82182F58(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215f298
	if (!ctx.cr6.eq) goto loc_8215F298;
loc_8215F284:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82088648
	ctx.lr = 0x8215F28C;
	sub_82088648(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f284
	if (ctx.cr6.eq) goto loc_8215F284;
loc_8215F298:
	// bl 0x82176c08
	ctx.lr = 0x8215F29C;
	sub_82176C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f2a8
	if (!ctx.cr6.eq) goto loc_8215F2A8;
	// bl 0x82176bf0
	ctx.lr = 0x8215F2A8;
	sub_82176BF0(ctx, base);
loc_8215F2A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215f1a0
	ctx.lr = 0x8215F2B0;
	sub_8215F1A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82088730
	ctx.lr = 0x8215F2C0;
	sub_82088730(ctx, base);
}

__attribute__((alias("__imp__sub_8215F2C0"))) PPC_WEAK_FUNC(sub_8215F2C0);
PPC_FUNC_IMPL(__imp__sub_8215F2C0) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r5,r10,-3504
	ctx.r5.s64 = ctx.r10.s64 + -3504;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820885f0
	ctx.lr = 0x8215F30C;
	sub_820885F0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwsync 
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-472(r9)
	PPC_STORE_U32(ctx.r9.u32 + -472, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8215F338"))) PPC_WEAK_FUNC(sub_8215F338);
PPC_FUNC_IMPL(__imp__sub_8215F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-23724
	ctx.r10.s64 = ctx.r11.s64 + -23724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8218b208
	sub_8218B208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F348"))) PPC_WEAK_FUNC(sub_8215F348);
PPC_FUNC_IMPL(__imp__sub_8215F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F370"))) PPC_WEAK_FUNC(sub_8215F370);
PPC_FUNC_IMPL(__imp__sub_8215F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x8215F394;
	sub_8218B2D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8218a128
	ctx.lr = 0x8215F3A4;
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

__attribute__((alias("__imp__sub_8215F3C0"))) PPC_WEAK_FUNC(sub_8215F3C0);
PPC_FUNC_IMPL(__imp__sub_8215F3C0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f40c
	if (ctx.cr6.eq) goto loc_8215F40C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8215F40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F40C:
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

__attribute__((alias("__imp__sub_8215F428"))) PPC_WEAK_FUNC(sub_8215F428);
PPC_FUNC_IMPL(__imp__sub_8215F428) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f468
	if (ctx.cr6.eq) goto loc_8215F468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8215F468:
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

__attribute__((alias("__imp__sub_8215F480"))) PPC_WEAK_FUNC(sub_8215F480);
PPC_FUNC_IMPL(__imp__sub_8215F480) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F490"))) PPC_WEAK_FUNC(sub_8215F490);
PPC_FUNC_IMPL(__imp__sub_8215F490) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// addi r10,r4,54
	ctx.r10.s64 = ctx.r4.s64 + 54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F4B0"))) PPC_WEAK_FUNC(sub_8215F4B0);
PPC_FUNC_IMPL(__imp__sub_8215F4B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8215F4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F4E8"))) PPC_WEAK_FUNC(sub_8215F4E8);
PPC_FUNC_IMPL(__imp__sub_8215F4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82094d78
	sub_82094D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F4FC"))) PPC_WEAK_FUNC(sub_8215F4FC);
PPC_FUNC_IMPL(__imp__sub_8215F4FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F500"))) PPC_WEAK_FUNC(sub_8215F500);
PPC_FUNC_IMPL(__imp__sub_8215F500) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f520
	if (ctx.cr6.lt) goto loc_8215F520;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bge cr6,0x8215f520
	if (!ctx.cr6.lt) goto loc_8215F520;
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8215F520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F528"))) PPC_WEAK_FUNC(sub_8215F528);
PPC_FUNC_IMPL(__imp__sub_8215F528) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f548
	if (ctx.cr6.lt) goto loc_8215F548;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bge cr6,0x8215f548
	if (!ctx.cr6.lt) goto loc_8215F548;
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8215F548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F550"))) PPC_WEAK_FUNC(sub_8215F550);
PPC_FUNC_IMPL(__imp__sub_8215F550) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x8215F568;
	sub_8218B1E8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23724
	ctx.r9.s64 = ctx.r10.s64 + -23724;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215F5B0"))) PPC_WEAK_FUNC(sub_8215F5B0);
PPC_FUNC_IMPL(__imp__sub_8215F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-23724
	ctx.r10.s64 = ctx.r11.s64 + -23724;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x8215F5DC;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215f5f8
	if (ctx.cr6.eq) goto loc_8215F5F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215F5F4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215F5F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F610"))) PPC_WEAK_FUNC(sub_8215F610);
PPC_FUNC_IMPL(__imp__sub_8215F610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,69
	ctx.r8.s64 = ctx.r11.s64 + 69;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F630"))) PPC_WEAK_FUNC(sub_8215F630);
PPC_FUNC_IMPL(__imp__sub_8215F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215F638;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821855f0
	ctx.lr = 0x8215F644;
	sub_821855F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-23696
	ctx.r9.s64 = ctx.r11.s64 + -23696;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r11,r29,212
	ctx.r11.s64 = ctx.r29.s64 + 212;
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
	// stw r8,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r8.u32);
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// stw r30,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r30.u32);
	// stw r30,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r30.u32);
loc_8215F698:
	// stw r30,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r30.u32);
	// stw r30,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r30.u32);
	// stw r30,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215f698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215F698;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r26,r29,284
	ctx.r26.s64 = ctx.r29.s64 + 284;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r25,r11,-23680
	ctx.r25.s64 = ctx.r11.s64 + -23680;
loc_8215F6C0:
	// stw r30,-20(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20, ctx.r30.u32);
	// stw r30,-8(r26)
	PPC_STORE_U32(ctx.r26.u32 + -8, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x8215F6CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215f6e4
	if (ctx.cr6.eq) goto loc_8215F6E4;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82183448
	ctx.lr = 0x8215F6E0;
	sub_82183448(ctx, base);
	// b 0x8215f6ec
	goto loc_8215F6EC;
loc_8215F6E4:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8215F6EC;
	sub_821845A0(ctx, base);
loc_8215F6EC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f724
	if (ctx.cr6.eq) goto loc_8215F724;
	// bl 0x8218b1e8
	ctx.lr = 0x8215F6FC;
	sub_8218B1E8(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x8215f728
	goto loc_8215F728;
loc_8215F724:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215F728:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x8215f6c0
	if (ctx.cr6.lt) goto loc_8215F6C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8215F744;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F750"))) PPC_WEAK_FUNC(sub_8215F750);
PPC_FUNC_IMPL(__imp__sub_8215F750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-23696
	ctx.r10.s64 = ctx.r11.s64 + -23696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185670
	ctx.lr = 0x8215F77C;
	sub_82185670(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215f798
	if (ctx.cr6.eq) goto loc_8215F798;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215F794;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215F798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F7B0"))) PPC_WEAK_FUNC(sub_8215F7B0);
PPC_FUNC_IMPL(__imp__sub_8215F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215F7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215f7d8
	if (!ctx.cr6.eq) goto loc_8215F7D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
loc_8215F7D8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8215F7F4;
	sub_822AA648(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8215f824
	if (!ctx.cr6.gt) goto loc_8215F824;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8215F810:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8215f810
	if (ctx.cr6.lt) goto loc_8215F810;
loc_8215F824:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8215F834;
	sub_821847A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F840"))) PPC_WEAK_FUNC(sub_8215F840);
PPC_FUNC_IMPL(__imp__sub_8215F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215F848;
	__savegprlr_29(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// subfe r30,r31,r11
	temp.u8 = (~ctx.r31.u32 + ctx.r11.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r31.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215f8ac
	goto loc_8215F8AC;
loc_8215F8A8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8215F8AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-600
	ctx.r11.s64 = ctx.r11.s64 + -600;
	// lwz r31,112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8215f8cc
	if (ctx.cr6.eq) goto loc_8215F8CC;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r31.u32);
	// b 0x8215f8d4
	goto loc_8215F8D4;
loc_8215F8CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8215f960
	if (ctx.cr6.eq) goto loc_8215F960;
loc_8215F8D4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f944
	if (ctx.cr6.eq) goto loc_8215F944;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f928
	if (ctx.cr6.eq) goto loc_8215F928;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8215f944
	if (ctx.cr6.eq) goto loc_8215F944;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
loc_8215F928:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
loc_8215F944:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r29.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
loc_8215F960:
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F968"))) PPC_WEAK_FUNC(sub_8215F968);
PPC_FUNC_IMPL(__imp__sub_8215F968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8215F9BC:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fa40
	if (ctx.cr6.eq) goto loc_8215FA40;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fa24
	if (ctx.cr6.eq) goto loc_8215FA24;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8215fa40
	if (ctx.cr6.eq) goto loc_8215FA40;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
loc_8215FA24:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
loc_8215FA40:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215FA60"))) PPC_WEAK_FUNC(sub_8215FA60);
PPC_FUNC_IMPL(__imp__sub_8215FA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FA88;
	sub_82163A60(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r31,18
	ctx.r9.s64 = ctx.r31.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-8968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8215faac
	if (ctx.cr6.eq) goto loc_8215FAAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215facc
	goto loc_8215FACC;
loc_8215FAAC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215fac8
	if (ctx.cr6.eq) goto loc_8215FAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209ee40
	ctx.lr = 0x8215FAC4;
	sub_8209EE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8215FAC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8215FACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215FAE8"))) PPC_WEAK_FUNC(sub_8215FAE8);
PPC_FUNC_IMPL(__imp__sub_8215FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8215fb50
	if (!ctx.cr6.eq) goto loc_8215FB50;
	// addi r11,r4,30
	ctx.r11.s64 = ctx.r4.s64 + 30;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,-8968(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8968);
	// bl 0x8209ec80
	ctx.lr = 0x8215FB30;
	sub_8209EC80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fb48
	if (ctx.cr6.eq) goto loc_8215FB48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x8215fb54
	goto loc_8215FB54;
loc_8215FB48:
	// li r11,5
	ctx.r11.s64 = 5;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8215FB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215FB54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215FB70"))) PPC_WEAK_FUNC(sub_8215FB70);
PPC_FUNC_IMPL(__imp__sub_8215FB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215FB78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8215FB98;
	sub_82163A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x8215fc3c
	if (ctx.cr6.eq) goto loc_8215FC3C;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// addi r10,r31,23
	ctx.r10.s64 = ctx.r31.s64 + 23;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-8960(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215fbe8
	if (ctx.cr6.eq) goto loc_8215FBE8;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215fbdc
	if (!ctx.cr6.eq) goto loc_8215FBDC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8215fc3c
	if (ctx.cr6.eq) goto loc_8215FC3C;
loc_8215FBDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8215FBE4;
	sub_820A0C38(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8215FBE8:
	// lbz r4,7(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x8215fbf8
	if (!ctx.cr6.eq) goto loc_8215FBF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215FBF8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8215FC04;
	sub_8209ED88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8215fc2c
	if (ctx.cr6.eq) goto loc_8215FC2C;
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
loc_8215FC2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-8960(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a1eb0
	ctx.lr = 0x8215FC3C;
	sub_820A1EB0(ctx, base);
loc_8215FC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FC48"))) PPC_WEAK_FUNC(sub_8215FC48);
PPC_FUNC_IMPL(__imp__sub_8215FC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215FC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r4,18
	ctx.r9.s64 = ctx.r4.s64 + 18;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,-8968(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,-8960(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8960);
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// bge cr6,0x8215fca4
	if (!ctx.cr6.lt) goto loc_8215FCA4;
	// addi r9,r4,51
	ctx.r9.s64 = ctx.r4.s64 + 51;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8215fce4
	if (!ctx.cr6.eq) goto loc_8215FCE4;
loc_8215FCA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fce4
	if (ctx.cr6.eq) goto loc_8215FCE4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FCBC;
	sub_82163A60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209f430
	ctx.lr = 0x8215FCD4;
	sub_8209F430(ctx, base);
	// addi r10,r31,54
	ctx.r10.s64 = ctx.r31.s64 + 54;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u32);
loc_8215FCE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FCF0"))) PPC_WEAK_FUNC(sub_8215FCF0);
PPC_FUNC_IMPL(__imp__sub_8215FCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8215FCF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r10,r26,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215fd88
	if (ctx.cr6.eq) goto loc_8215FD88;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bge cr6,0x8215fd88
	if (!ctx.cr6.lt) goto loc_8215FD88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r4,51
	ctx.r10.s64 = ctx.r4.s64 + 51;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,-8960(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwz r28,-8968(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8968);
	// lwzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8215fd88
	if (!ctx.cr6.eq) goto loc_8215FD88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8215FD50;
	sub_82163A78(ctx, base);
	// lbz r4,7(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x8215fd64
	if (!ctx.cr6.eq) goto loc_8215FD64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215FD64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209ed88
	ctx.lr = 0x8215FD6C;
	sub_8209ED88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a1eb0
	ctx.lr = 0x8215FD80;
	sub_820A1EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8215FD88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FD90"))) PPC_WEAK_FUNC(sub_8215FD90);
PPC_FUNC_IMPL(__imp__sub_8215FD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215FD98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FDB4;
	sub_82163A60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215ff28
	if (ctx.cr6.eq) goto loc_8215FF28;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8215FDD8;
	sub_8209ED88(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215fe94
	if (!ctx.cr6.eq) goto loc_8215FE94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820f6038
	ctx.lr = 0x8215FDF0;
	sub_820F6038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fdfc
	if (ctx.cr6.eq) goto loc_8215FDFC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8215FDFC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214098
	ctx.lr = 0x8215FE10;
	sub_82214098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fe1c
	if (ctx.cr6.eq) goto loc_8215FE1C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8215FE1C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215fe44
	if (!ctx.cr6.eq) goto loc_8215FE44;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8215fe44
	if (!ctx.cr6.eq) goto loc_8215FE44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b5d00
	ctx.lr = 0x8215FE3C;
	sub_820B5D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
loc_8215FE44:
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bge cr6,0x8215fe84
	if (!ctx.cr6.lt) goto loc_8215FE84;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r31,23
	ctx.r9.s64 = ctx.r31.s64 + 23;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fe74
	if (ctx.cr6.eq) goto loc_8215FE74;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215fe7c
	if (!ctx.cr6.eq) goto loc_8215FE7C;
loc_8215FE74:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215fe84
	if (ctx.cr6.eq) goto loc_8215FE84;
loc_8215FE7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8215FE84;
	sub_820A0C38(ctx, base);
loc_8215FE84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209efa8
	ctx.lr = 0x8215FE90;
	sub_8209EFA8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8215FE94:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// bl 0x8215bd60
	ctx.lr = 0x8215FEA4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// bl 0x82228e00
	ctx.lr = 0x8215FEB4;
	sub_82228E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x8215FEC4;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r3,-732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x8215FEDC;
	sub_82228DD8(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_8215FEE0:
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8215fef4
	if (ctx.cr6.eq) goto loc_8215FEF4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8215ff0c
	goto loc_8215FF0C;
loc_8215FEF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209f430
	ctx.lr = 0x8215FF0C;
	sub_8209F430(ctx, base);
loc_8215FF0C:
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// addi r10,r31,54
	ctx.r10.s64 = ctx.r31.s64 + 54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r7.u32);
	// stwx r30,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r30.u32);
loc_8215FF28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FF30"))) PPC_WEAK_FUNC(sub_8215FF30);
PPC_FUNC_IMPL(__imp__sub_8215FF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215FF38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,72
	ctx.r30.s64 = 72;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
loc_8215FF4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FF58;
	sub_82163A60(ctx, base);
	// lwz r11,-8968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8968);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215ffa4
	if (!ctx.cr6.eq) goto loc_8215FFA4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215ff88
	if (ctx.cr6.eq) goto loc_8215FF88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209ee40
	ctx.lr = 0x8215FF80;
	sub_8209EE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215ffa4
	if (ctx.cr6.eq) goto loc_8215FFA4;
loc_8215FF88:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,120
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 120, ctx.xer);
	// blt cr6,0x8215ff4c
	if (ctx.cr6.lt) goto loc_8215FF4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
loc_8215FFA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215FFB0"))) PPC_WEAK_FUNC(sub_8215FFB0);
PPC_FUNC_IMPL(__imp__sub_8215FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215FFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160028
	if (!ctx.cr6.eq) goto loc_82160028;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82160028
	if (ctx.cr6.eq) goto loc_82160028;
	// bl 0x8215f7b0
	ctx.lr = 0x8215FFE4;
	sub_8215F7B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82160000
	if (ctx.cr6.eq) goto loc_82160000;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82160028
	if (!ctx.cr6.eq) goto loc_82160028;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82160028
	goto loc_82160028;
loc_82160000:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-600
	ctx.r11.s64 = ctx.r11.s64 + -600;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82160024
	if (!ctx.cr6.eq) goto loc_82160024;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// b 0x82160028
	goto loc_82160028;
loc_82160024:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82160028:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82160194
	if (ctx.cr6.gt) goto loc_82160194;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82160108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82160108;
	// bdzf 4*cr6+eq,0x82160190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82160190;
	// bdzf 4*cr6+eq,0x82160120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82160120;
	// bne cr6,0x8216014c
	if (!ctx.cr6.eq) goto loc_8216014C;
	// bl 0x8215c068
	ctx.lr = 0x82160054;
	sub_8215C068(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216005C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82160068;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x82160070;
	sub_820824B8(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82080000
	ctx.lr = 0x82160088;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821600a8
	if (ctx.cr6.eq) goto loc_821600A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820d4970
	ctx.lr = 0x821600A4;
	sub_820D4970(ctx, base);
	// b 0x821600ac
	goto loc_821600AC;
loc_821600A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821600AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821600BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821600f0
	if (ctx.cr6.lt) goto loc_821600F0;
	// bne cr6,0x821600f8
	if (!ctx.cr6.eq) goto loc_821600F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821600E0;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821600E8;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
loc_821600F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x821600F8;
	sub_821830F8(ctx, base);
loc_821600F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82160100;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
loc_82160108:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160194
	if (!ctx.cr6.eq) goto loc_82160194;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
loc_82160120:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216018c
	if (ctx.cr6.eq) goto loc_8216018C;
	// bl 0x8209eda0
	ctx.lr = 0x82160134;
	sub_8209EDA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
loc_8216014C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x82160194
	if (ctx.cr0.gt) goto loc_82160194;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r3,-8976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160180
	if (ctx.cr6.eq) goto loc_82160180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82160180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160180:
	// stw r30,-8976(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8976, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8216018C:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82160190:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82160194:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821601A0"))) PPC_WEAK_FUNC(sub_821601A0);
PPC_FUNC_IMPL(__imp__sub_821601A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821601A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r25,r3,216
	ctx.r25.s64 = ctx.r3.s64 + 216;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// subfic r19,r3,-124
	ctx.xer.ca = ctx.r3.u32 <= 4294967172;
	ctx.r19.s64 = -124 - ctx.r3.s64;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
loc_821601D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-420(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -420);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// bl 0x82163a60
	ctx.lr = 0x821601E0;
	sub_82163A60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82160328
	if (ctx.cr6.eq) goto loc_82160328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x82160200;
	sub_8209ED88(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821602ac
	if (!ctx.cr6.eq) goto loc_821602AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f6038
	ctx.lr = 0x82160218;
	sub_820F6038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82160224
	if (ctx.cr6.eq) goto loc_82160224;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82160224:
	// lwz r11,-752(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -752);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214098
	ctx.lr = 0x82160234;
	sub_82214098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82160240
	if (ctx.cr6.eq) goto loc_82160240;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82160240:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160264
	if (!ctx.cr6.eq) goto loc_82160264;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82160264
	if (!ctx.cr6.eq) goto loc_82160264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b5d00
	ctx.lr = 0x82160260;
	sub_820B5D00(ctx, base);
	// b 0x82160328
	goto loc_82160328;
loc_82160264:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bge cr6,0x8216029c
	if (!ctx.cr6.lt) goto loc_8216029C;
	// lwz r3,-8960(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8960);
	// add r11,r19,r25
	ctx.r11.u64 = ctx.r19.u64 + ctx.r25.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216028c
	if (ctx.cr6.eq) goto loc_8216028C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160294
	if (!ctx.cr6.eq) goto loc_82160294;
loc_8216028C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8216029c
	if (ctx.cr6.eq) goto loc_8216029C;
loc_82160294:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8216029C;
	sub_820A0C38(ctx, base);
loc_8216029C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209efa8
	ctx.lr = 0x821602A8;
	sub_8209EFA8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_821602AC:
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// bl 0x8215bd60
	ctx.lr = 0x821602BC;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// bl 0x82228e00
	ctx.lr = 0x821602CC;
	sub_82228E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x821602DC;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r3,-732(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x821602F0;
	sub_82228DD8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_821602F4:
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82160308
	if (ctx.cr6.eq) goto loc_82160308;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82160320
	goto loc_82160320;
loc_82160308:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8209f430
	ctx.lr = 0x82160320;
	sub_8209F430(ctx, base);
loc_82160320:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r20,-144(r25)
	PPC_STORE_U32(ctx.r25.u32 + -144, ctx.r20.u32);
loc_82160328:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x821601d0
	if (ctx.cr6.lt) goto loc_821601D0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160340"))) PPC_WEAK_FUNC(sub_82160340);
PPC_FUNC_IMPL(__imp__sub_82160340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
loc_8216035C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215fb70
	ctx.lr = 0x82160370;
	sub_8215FB70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8216035c
	if (ctx.cr6.lt) goto loc_8216035C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160398"))) PPC_WEAK_FUNC(sub_82160398);
PPC_FUNC_IMPL(__imp__sub_82160398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821603A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
loc_821603B8:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821603f4
	if (ctx.cr6.eq) goto loc_821603F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821603d8
	if (ctx.cr6.eq) goto loc_821603D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82160400
	if (!ctx.cr6.eq) goto loc_82160400;
	// b 0x8216042c
	goto loc_8216042C;
loc_821603D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8968);
	// bl 0x8209ed10
	ctx.lr = 0x821603E4;
	sub_8209ED10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216042c
	if (ctx.cr6.eq) goto loc_8216042C;
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// b 0x82160400
	goto loc_82160400;
loc_821603F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fc48
	ctx.lr = 0x82160400;
	sub_8215FC48(ctx, base);
loc_82160400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fcf0
	ctx.lr = 0x8216040C;
	sub_8215FCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216042c
	if (ctx.cr6.eq) goto loc_8216042C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fd90
	ctx.lr = 0x82160428;
	sub_8215FD90(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8216042C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x821603b8
	if (ctx.cr6.lt) goto loc_821603B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215ffb0
	ctx.lr = 0x82160444;
	sub_8215FFB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160450"))) PPC_WEAK_FUNC(sub_82160450);
PPC_FUNC_IMPL(__imp__sub_82160450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,-23652
	ctx.r8.s64 = ctx.r11.s64 + -23652;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8216048C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216048c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216048C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821604AC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821604ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821604AC;
	// ld r8,144(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r30,144
	ctx.r7.s64 = ctx.r30.s64 + 144;
	// addi r6,r31,160
	ctx.r6.s64 = ctx.r31.s64 + 160;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// std r8,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r8.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ld r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 152);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// std r5,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r5.u64);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
loc_82160528:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82160528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82160528;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r10,r30,256
	ctx.r10.s64 = ctx.r30.s64 + 256;
	// addi r8,r31,256
	ctx.r8.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lwz r8,284(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r8,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r8.u32);
	// bl 0x82248a40
	ctx.lr = 0x8216058C;
	sub_82248A40(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r30,448
	ctx.r4.s64 = ctx.r30.s64 + 448;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82248a40
	ctx.lr = 0x8216059C;
	sub_82248A40(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// addi r4,r30,608
	ctx.r4.s64 = ctx.r30.s64 + 608;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82248a40
	ctx.lr = 0x821605AC;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_821605C8"))) PPC_WEAK_FUNC(sub_821605C8);
PPC_FUNC_IMPL(__imp__sub_821605C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x821605e4
	if (ctx.cr6.lt) goto loc_821605E4;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_821605E4:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x821605f0
	if (!ctx.cr6.eq) goto loc_821605F0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_821605F0:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82160628
	if (ctx.cr6.eq) goto loc_82160628;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82160628
	if (ctx.cr6.eq) goto loc_82160628;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x8216062c
	if (!ctx.cr6.eq) goto loc_8216062C;
loc_82160628:
	// li r7,8
	ctx.r7.s64 = 8;
loc_8216062C:
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// divwu r3,r10,r9
	ctx.r3.u32 = ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160640"))) PPC_WEAK_FUNC(sub_82160640);
PPC_FUNC_IMPL(__imp__sub_82160640) {
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
	ctx.lr = 0x82160664;
	sub_821859A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23648
	ctx.r9.s64 = ctx.r10.s64 + -23648;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82160700"))) PPC_WEAK_FUNC(sub_82160700);
PPC_FUNC_IMPL(__imp__sub_82160700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82160708;
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	ctx.r11.u32 = ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0;
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
	ctx.r6.u32 = ctx.r3.u32 ? ctx.r7.u32 / ctx.r3.u32 : 0;
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
	__restgprlr_28(ctx, base);
	return;
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_17(ctx, base);
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
	__restgprlr_17(ctx, base);
	return;
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
	return;
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161148"))) PPC_WEAK_FUNC(sub_82161148);
PPC_FUNC_IMPL(__imp__sub_82161148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82161150;
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821611D0"))) PPC_WEAK_FUNC(sub_821611D0);
PPC_FUNC_IMPL(__imp__sub_821611D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821611D8;
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x82161B50;
	__savefpr_28(ctx, base);
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
	__restfpr_28(ctx, base);
	// b 0x822487dc
	__restgprlr_29(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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

__attribute__((alias("__imp__sub_82161E90"))) PPC_WEAK_FUNC(sub_82161E90);
PPC_FUNC_IMPL(__imp__sub_82161E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82161E98;
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821622D0"))) PPC_WEAK_FUNC(sub_821622D0);
PPC_FUNC_IMPL(__imp__sub_821622D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821622D8;
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
	return;
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

__attribute__((alias("__imp__sub_821623D8"))) PPC_WEAK_FUNC(sub_821623D8);
PPC_FUNC_IMPL(__imp__sub_821623D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821623E0;
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
	return;
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
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(276));
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
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(276));
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
	return;
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

__attribute__((alias("__imp__sub_82163398"))) PPC_WEAK_FUNC(sub_82163398);
PPC_FUNC_IMPL(__imp__sub_82163398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821633A0;
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
	return;
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

__attribute__((alias("__imp__sub_821638F0"))) PPC_WEAK_FUNC(sub_821638F0);
PPC_FUNC_IMPL(__imp__sub_821638F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821638F8;
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(420));
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

