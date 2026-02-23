#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821735F0"))) PPC_WEAK_FUNC(sub_821735F0);
PPC_FUNC_IMPL(__imp__sub_821735F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821735F8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82173608;
	sub_823C3B68(ctx, base);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c5a60
	ctx.lr = 0x82173614;
	sub_823C5A60(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821859a0
	ctx.lr = 0x82173628;
	sub_821859A0(ctx, base);
	// addi r28,r31,272
	ctx.r28.s64 = ctx.r31.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x82173634;
	sub_8218B1E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r9,-22636
	ctx.r5.s64 = ctx.r9.s64 + -22636;
	// addi r4,r8,-22656
	ctx.r4.s64 = ctx.r8.s64 + -22656;
	// addi r7,r11,-22488
	ctx.r7.s64 = ctx.r11.s64 + -22488;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// addi r6,r10,-22624
	ctx.r6.s64 = ctx.r10.s64 + -22624;
	// stw r4,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r4.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c34c0
	ctx.lr = 0x82173674;
	sub_823C34C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// lwz r10,812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x821736A8;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821736B0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821736BC;
	sub_821837D0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-22668
	ctx.r4.s64 = ctx.r8.s64 + -22668;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x821736D0;
	sub_8218B2D0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r7,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c5678
	ctx.lr = 0x821736E8;
	sub_823C5678(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c60
	ctx.lr = 0x821736F4;
	sub_823C3C60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821736FC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82173708"))) PPC_WEAK_FUNC(sub_82173708);
PPC_FUNC_IMPL(__imp__sub_82173708) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// b 0x82173888
	sub_82173888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173710"))) PPC_WEAK_FUNC(sub_82173710);
PPC_FUNC_IMPL(__imp__sub_82173710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82173888
	sub_82173888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173718"))) PPC_WEAK_FUNC(sub_82173718);
PPC_FUNC_IMPL(__imp__sub_82173718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82173888
	sub_82173888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173720"))) PPC_WEAK_FUNC(sub_82173720);
PPC_FUNC_IMPL(__imp__sub_82173720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82173728;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-22488
	ctx.r6.s64 = ctx.r11.s64 + -22488;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r9,-22624
	ctx.r5.s64 = ctx.r9.s64 + -22624;
	// addi r4,r8,-22636
	ctx.r4.s64 = ctx.r8.s64 + -22636;
	// addi r3,r7,-22656
	ctx.r3.s64 = ctx.r7.s64 + -22656;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// addi r28,r31,272
	ctx.r28.s64 = ctx.r31.s64 + 272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821737bc
	if (ctx.cr6.eq) goto loc_821737BC;
	// lwz r3,808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173798
	if (ctx.cr6.eq) goto loc_82173798;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173798:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821737B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,812
	ctx.r3.s64 = ctx.r31.s64 + 812;
	// bl 0x820de3a0
	ctx.lr = 0x821737BC;
	sub_820DE3A0(ctx, base);
loc_821737BC:
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x823c30b8
	ctx.lr = 0x821737C4;
	sub_823C30B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218b208
	ctx.lr = 0x821737CC;
	sub_8218B208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x821737D4;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821737DC;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x821737E4;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821737EC"))) PPC_WEAK_FUNC(sub_821737EC);
PPC_FUNC_IMPL(__imp__sub_821737EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821737F0"))) PPC_WEAK_FUNC(sub_821737F0);
PPC_FUNC_IMPL(__imp__sub_821737F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x82173808;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82173810;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217381C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82173820;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82173838
	if (ctx.cr6.eq) goto loc_82173838;
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82183448
	ctx.lr = 0x82173834;
	sub_82183448(ctx, base);
	// b 0x82173840
	goto loc_82173840;
loc_82173838:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821845a0
	ctx.lr = 0x82173840;
	sub_821845A0(ctx, base);
loc_82173840:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173854
	if (ctx.cr6.eq) goto loc_82173854;
	// bl 0x821735f0
	ctx.lr = 0x8217384C;
	sub_821735F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82173858
	goto loc_82173858;
loc_82173854:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82173858:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -604, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217386C;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82173888"))) PPC_WEAK_FUNC(sub_82173888);
PPC_FUNC_IMPL(__imp__sub_82173888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82173720
	ctx.lr = 0x821738A8;
	sub_82173720(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821738c4
	if (ctx.cr6.eq) goto loc_821738C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821738C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821738C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821738DC"))) PPC_WEAK_FUNC(sub_821738DC);
PPC_FUNC_IMPL(__imp__sub_821738DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821738E0"))) PPC_WEAK_FUNC(sub_821738E0);
PPC_FUNC_IMPL(__imp__sub_821738E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// ble cr6,0x82173940
	if (!ctx.cr6.gt) goto loc_82173940;
	// bl 0x821142a0
	ctx.lr = 0x82173904;
	sub_821142A0(ctx, base);
	// bl 0x821ff660
	ctx.lr = 0x82173908;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82173970
	if (ctx.cr6.eq) goto loc_82173970;
	// bl 0x820ed3d8
	ctx.lr = 0x82173914;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82173970
	if (ctx.cr6.eq) goto loc_82173970;
	// bl 0x82189760
	ctx.lr = 0x82173920;
	sub_82189760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82173948
	if (!ctx.cr6.eq) goto loc_82173948;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217393C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82173948
	goto loc_82173948;
loc_82173940:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_82173948:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173970
	if (ctx.cr6.eq) goto loc_82173970;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82173970
	if (!ctx.cr6.eq) goto loc_82173970;
	// bl 0x8216e518
	ctx.lr = 0x82173970;
	sub_8216E518(ctx, base);
loc_82173970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82173984"))) PPC_WEAK_FUNC(sub_82173984);
PPC_FUNC_IMPL(__imp__sub_82173984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173988"))) PPC_WEAK_FUNC(sub_82173988);
PPC_FUNC_IMPL(__imp__sub_82173988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lfs f13,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x821739DC;
	sub_823C3558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x821739E4;
	sub_823C3CA8(ctx, base);
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

__attribute__((alias("__imp__sub_821739F8"))) PPC_WEAK_FUNC(sub_821739F8);
PPC_FUNC_IMPL(__imp__sub_821739F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82173A00;
	sub_8224878C(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,-1736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173a48
	if (ctx.cr6.eq) goto loc_82173A48;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82173A38:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82173a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173A38;
	// bl 0x821d1688
	ctx.lr = 0x82173A48;
	sub_821D1688(ctx, base);
loc_82173A48:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x82173A58;
	sub_8216DB98(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b2118
	ctx.lr = 0x82173A60;
	sub_821B2118(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-22672(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22672);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,-22676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f3,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,14780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-32376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x82173A98;
	sub_821D1718(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213a480
	ctx.lr = 0x82173AAC;
	sub_8213A480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b5ef8
	ctx.lr = 0x82173AB4;
	sub_821B5EF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82173ae4
	if (!ctx.cr6.gt) goto loc_82173AE4;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173ae4
	if (ctx.cr6.eq) goto loc_82173AE4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82173AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173AE4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b1d48
	ctx.lr = 0x82173AEC;
	sub_821B1D48(ctx, base);
	// lwz r3,-1736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173b00
	if (ctx.cr6.eq) goto loc_82173B00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821d16c0
	ctx.lr = 0x82173B00;
	sub_821D16C0(ctx, base);
loc_82173B00:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82173B08"))) PPC_WEAK_FUNC(sub_82173B08);
PPC_FUNC_IMPL(__imp__sub_82173B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82173B10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82173B20;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821859a0
	ctx.lr = 0x82173B34;
	sub_821859A0(ctx, base);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x82173B40;
	sub_8218B1E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-22352
	ctx.r8.s64 = ctx.r11.s64 + -22352;
	// addi r7,r10,-22364
	ctx.r7.s64 = ctx.r10.s64 + -22364;
	// addi r6,r9,-22384
	ctx.r6.s64 = ctx.r9.s64 + -22384;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823c34c0
	ctx.lr = 0x82173B74;
	sub_823C34C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
	// addi r3,r4,-680
	ctx.r3.s64 = ctx.r4.s64 + -680;
	// lwz r9,588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r8.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// lwz r11,-612(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -612);
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82173bdc
	if (ctx.cr6.eq) goto loc_82173BDC;
loc_82173BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82173BC4;
	sub_823C3CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d08
	ctx.lr = 0x82173BCC;
	sub_823C3D08(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82173BDC:
	// bl 0x820853c0
	ctx.lr = 0x82173BE0;
	sub_820853C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82173bbc
	if (ctx.cr6.eq) goto loc_82173BBC;
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22396
	ctx.r4.s64 = ctx.r11.s64 + -22396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82173C00;
	sub_8218B2D0(ctx, base);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r3,15480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15480);
	// bl 0x821750b0
	ctx.lr = 0x82173C10;
	sub_821750B0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r11,-780(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173c28
	if (!ctx.cr6.eq) goto loc_82173C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x82173C28;
	sub_821EFAA0(ctx, base);
loc_82173C28:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// bl 0x8216dc78
	ctx.lr = 0x82173C34;
	sub_8216DC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82173C40"))) PPC_WEAK_FUNC(sub_82173C40);
PPC_FUNC_IMPL(__imp__sub_82173C40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82173da0
	sub_82173DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173C48"))) PPC_WEAK_FUNC(sub_82173C48);
PPC_FUNC_IMPL(__imp__sub_82173C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x82173da0
	sub_82173DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173C50"))) PPC_WEAK_FUNC(sub_82173C50);
PPC_FUNC_IMPL(__imp__sub_82173C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82173C58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r11,-22352
	ctx.r7.s64 = ctx.r11.s64 + -22352;
	// addi r6,r9,-22364
	ctx.r6.s64 = ctx.r9.s64 + -22364;
	// addi r5,r8,-22384
	ctx.r5.s64 = ctx.r8.s64 + -22384;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82173cdc
	if (ctx.cr6.eq) goto loc_82173CDC;
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173cb8
	if (ctx.cr6.eq) goto loc_82173CB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82173CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x820de3a0
	ctx.lr = 0x82173CDC;
	sub_820DE3A0(ctx, base);
loc_82173CDC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823c30b8
	ctx.lr = 0x82173CE4;
	sub_823C30B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b208
	ctx.lr = 0x82173CEC;
	sub_8218B208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82173CF4;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82173CFC;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82173D04"))) PPC_WEAK_FUNC(sub_82173D04);
PPC_FUNC_IMPL(__imp__sub_82173D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173D08"))) PPC_WEAK_FUNC(sub_82173D08);
PPC_FUNC_IMPL(__imp__sub_82173D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82173D10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82173d38
	if (!ctx.cr6.eq) goto loc_82173D38;
	// bl 0x8215bec8
	ctx.lr = 0x82173D2C;
	sub_8215BEC8(ctx, base);
	// stw r31,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x82173D38;
	sub_8215C7C8(ctx, base);
loc_82173D38:
	// bl 0x82182e90
	ctx.lr = 0x82173D3C;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82173D44;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82173D50;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82173D54;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82173d6c
	if (ctx.cr6.eq) goto loc_82173D6C;
	// li r3,600
	ctx.r3.s64 = 600;
	// bl 0x82183448
	ctx.lr = 0x82173D68;
	sub_82183448(ctx, base);
	// b 0x82173d74
	goto loc_82173D74;
loc_82173D6C:
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x821845a0
	ctx.lr = 0x82173D74;
	sub_821845A0(ctx, base);
loc_82173D74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173d84
	if (ctx.cr6.eq) goto loc_82173D84;
	// bl 0x82173b08
	ctx.lr = 0x82173D80;
	sub_82173B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82173D84:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-604(r30)
	PPC_STORE_U32(ctx.r30.u32 + -604, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82173D94;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82173DA0"))) PPC_WEAK_FUNC(sub_82173DA0);
PPC_FUNC_IMPL(__imp__sub_82173DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82173c50
	ctx.lr = 0x82173DC0;
	sub_82173C50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173ddc
	if (ctx.cr6.eq) goto loc_82173DDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82173DD8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82173DF4"))) PPC_WEAK_FUNC(sub_82173DF4);
PPC_FUNC_IMPL(__imp__sub_82173DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173DF8"))) PPC_WEAK_FUNC(sub_82173DF8);
PPC_FUNC_IMPL(__imp__sub_82173DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82173E00;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82173E14;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82173E1C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82173E28;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82173E3C;
	sub_8218AA18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x82173E44;
	sub_821D2978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82173E54;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82173e70
	if (ctx.cr6.eq) goto loc_82173E70;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218abc0
	ctx.lr = 0x82173E68;
	sub_8218ABC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82173e74
	goto loc_82173E74;
loc_82173E70:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82173E74:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82173E80;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82173e9c
	if (ctx.cr6.eq) goto loc_82173E9C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x82173E94;
	sub_8218AB00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82173ea0
	goto loc_82173EA0;
loc_82173E9C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82173EA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-22404
	ctx.r4.s64 = ctx.r9.s64 + -22404;
	// bl 0x8218a540
	ctx.lr = 0x82173ED0;
	sub_8218A540(ctx, base);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// bl 0x820ded28
	ctx.lr = 0x82173EEC;
	sub_820DED28(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r5.u32);
	// bl 0x82183850
	ctx.lr = 0x82173F00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82173f18
	if (ctx.cr6.eq) goto loc_82173F18;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82183448
	ctx.lr = 0x82173F14;
	sub_82183448(ctx, base);
	// b 0x82173f20
	goto loc_82173F20;
loc_82173F18:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x82173F20;
	sub_821845A0(ctx, base);
loc_82173F20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173f34
	if (ctx.cr6.eq) goto loc_82173F34;
	// ld r4,540(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 540);
	// bl 0x821b2a50
	ctx.lr = 0x82173F30;
	sub_821B2A50(ctx, base);
	// b 0x82173f38
	goto loc_82173F38;
loc_82173F34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173F38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-29572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32636);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lfs f2,14780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-32376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82173F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x82173F90;
	sub_8218A7F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82173F98;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82173FA4"))) PPC_WEAK_FUNC(sub_82173FA4);
PPC_FUNC_IMPL(__imp__sub_82173FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173FA8"))) PPC_WEAK_FUNC(sub_82173FA8);
PPC_FUNC_IMPL(__imp__sub_82173FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82173FC4"))) PPC_WEAK_FUNC(sub_82173FC4);
PPC_FUNC_IMPL(__imp__sub_82173FC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82173FC8"))) PPC_WEAK_FUNC(sub_82173FC8);
PPC_FUNC_IMPL(__imp__sub_82173FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3c98
	sub_823C3C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173FCC"))) PPC_WEAK_FUNC(sub_82173FCC);
PPC_FUNC_IMPL(__imp__sub_82173FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173FD0"))) PPC_WEAK_FUNC(sub_82173FD0);
PPC_FUNC_IMPL(__imp__sub_82173FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82173FEC"))) PPC_WEAK_FUNC(sub_82173FEC);
PPC_FUNC_IMPL(__imp__sub_82173FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82173FF0"))) PPC_WEAK_FUNC(sub_82173FF0);
PPC_FUNC_IMPL(__imp__sub_82173FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// ble cr6,0x82174050
	if (!ctx.cr6.gt) goto loc_82174050;
	// bl 0x821142a0
	ctx.lr = 0x82174014;
	sub_821142A0(ctx, base);
	// bl 0x821ff660
	ctx.lr = 0x82174018;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174080
	if (ctx.cr6.eq) goto loc_82174080;
	// bl 0x820ed3d8
	ctx.lr = 0x82174024;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174080
	if (ctx.cr6.eq) goto loc_82174080;
	// bl 0x82189760
	ctx.lr = 0x82174030;
	sub_82189760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82174058
	if (!ctx.cr6.eq) goto loc_82174058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217404C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82174058
	goto loc_82174058;
loc_82174050:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_82174058:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174080
	if (ctx.cr6.eq) goto loc_82174080;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82174080
	if (!ctx.cr6.eq) goto loc_82174080;
	// bl 0x8216e518
	ctx.lr = 0x82174080;
	sub_8216E518(ctx, base);
loc_82174080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174094"))) PPC_WEAK_FUNC(sub_82174094);
PPC_FUNC_IMPL(__imp__sub_82174094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174098"))) PPC_WEAK_FUNC(sub_82174098);
PPC_FUNC_IMPL(__imp__sub_82174098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821740B4"))) PPC_WEAK_FUNC(sub_821740B4);
PPC_FUNC_IMPL(__imp__sub_821740B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821740B8"))) PPC_WEAK_FUNC(sub_821740B8);
PPC_FUNC_IMPL(__imp__sub_821740B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x8217410C;
	sub_823C3558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82174114;
	sub_823C3C70(ctx, base);
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

__attribute__((alias("__imp__sub_82174128"))) PPC_WEAK_FUNC(sub_82174128);
PPC_FUNC_IMPL(__imp__sub_82174128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82174130;
	sub_8224878C(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,-1736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174178
	if (ctx.cr6.eq) goto loc_82174178;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82174168:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82174168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82174168;
	// bl 0x821d1688
	ctx.lr = 0x82174178;
	sub_821D1688(ctx, base);
loc_82174178:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x82174188;
	sub_8216DB98(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b2118
	ctx.lr = 0x82174190;
	sub_821B2118(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-22672(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22672);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,-22676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22676);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f3,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,14780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-32376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x821741C8;
	sub_821D1718(ctx, base);
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213a480
	ctx.lr = 0x821741DC;
	sub_8213A480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b5ef8
	ctx.lr = 0x821741E4;
	sub_821B5EF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82174214
	if (!ctx.cr6.gt) goto loc_82174214;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174214
	if (ctx.cr6.eq) goto loc_82174214;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82174214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82174214:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b1d48
	ctx.lr = 0x8217421C;
	sub_821B1D48(ctx, base);
	// lwz r3,-1736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174230
	if (ctx.cr6.eq) goto loc_82174230;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821d16c0
	ctx.lr = 0x82174230;
	sub_821D16C0(ctx, base);
loc_82174230:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82174238"))) PPC_WEAK_FUNC(sub_82174238);
PPC_FUNC_IMPL(__imp__sub_82174238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82174240;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82174250;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821859a0
	ctx.lr = 0x82174264;
	sub_821859A0(ctx, base);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x82174270;
	sub_8218B1E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-22224
	ctx.r8.s64 = ctx.r11.s64 + -22224;
	// addi r7,r10,-22236
	ctx.r7.s64 = ctx.r10.s64 + -22236;
	// addi r6,r9,-22256
	ctx.r6.s64 = ctx.r9.s64 + -22256;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823c34c0
	ctx.lr = 0x821742A4;
	sub_823C34C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
	// addi r3,r4,-680
	ctx.r3.s64 = ctx.r4.s64 + -680;
	// lwz r9,588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r8.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// lwz r11,-612(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -612);
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8217430c
	if (ctx.cr6.eq) goto loc_8217430C;
loc_821742EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x821742F4;
	sub_823C3CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d08
	ctx.lr = 0x821742FC;
	sub_823C3D08(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8217430C:
	// bl 0x82085340
	ctx.lr = 0x82174310;
	sub_82085340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821742ec
	if (ctx.cr6.eq) goto loc_821742EC;
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22268
	ctx.r4.s64 = ctx.r11.s64 + -22268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82174330;
	sub_8218B2D0(ctx, base);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r3,15480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15480);
	// bl 0x821750b0
	ctx.lr = 0x82174340;
	sub_821750B0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r11,-780(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174358
	if (!ctx.cr6.eq) goto loc_82174358;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x82174358;
	sub_821EFAA0(ctx, base);
loc_82174358:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// bl 0x8216dc78
	ctx.lr = 0x82174364;
	sub_8216DC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82174370"))) PPC_WEAK_FUNC(sub_82174370);
PPC_FUNC_IMPL(__imp__sub_82174370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821744d0
	sub_821744D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174378"))) PPC_WEAK_FUNC(sub_82174378);
PPC_FUNC_IMPL(__imp__sub_82174378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821744d0
	sub_821744D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174380"))) PPC_WEAK_FUNC(sub_82174380);
PPC_FUNC_IMPL(__imp__sub_82174380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82174388;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r11,-22224
	ctx.r7.s64 = ctx.r11.s64 + -22224;
	// addi r6,r9,-22236
	ctx.r6.s64 = ctx.r9.s64 + -22236;
	// addi r5,r8,-22256
	ctx.r5.s64 = ctx.r8.s64 + -22256;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217440c
	if (ctx.cr6.eq) goto loc_8217440C;
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821743e8
	if (ctx.cr6.eq) goto loc_821743E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821743E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821743E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82174404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x820de3a0
	ctx.lr = 0x8217440C;
	sub_820DE3A0(ctx, base);
loc_8217440C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823c30b8
	ctx.lr = 0x82174414;
	sub_823C30B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b208
	ctx.lr = 0x8217441C;
	sub_8218B208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82174424;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8217442C;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82174434"))) PPC_WEAK_FUNC(sub_82174434);
PPC_FUNC_IMPL(__imp__sub_82174434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174438"))) PPC_WEAK_FUNC(sub_82174438);
PPC_FUNC_IMPL(__imp__sub_82174438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82174440;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82174468
	if (!ctx.cr6.eq) goto loc_82174468;
	// bl 0x8215bec8
	ctx.lr = 0x8217445C;
	sub_8215BEC8(ctx, base);
	// stw r31,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x82174468;
	sub_8215C7C8(ctx, base);
loc_82174468:
	// bl 0x82182e90
	ctx.lr = 0x8217446C;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82174474;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174480;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82174484;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8217449c
	if (ctx.cr6.eq) goto loc_8217449C;
	// li r3,600
	ctx.r3.s64 = 600;
	// bl 0x82183448
	ctx.lr = 0x82174498;
	sub_82183448(ctx, base);
	// b 0x821744a4
	goto loc_821744A4;
loc_8217449C:
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x821845a0
	ctx.lr = 0x821744A4;
	sub_821845A0(ctx, base);
loc_821744A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821744b4
	if (ctx.cr6.eq) goto loc_821744B4;
	// bl 0x82174238
	ctx.lr = 0x821744B0;
	sub_82174238(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821744B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-604(r30)
	PPC_STORE_U32(ctx.r30.u32 + -604, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821744C4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821744D0"))) PPC_WEAK_FUNC(sub_821744D0);
PPC_FUNC_IMPL(__imp__sub_821744D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82174380
	ctx.lr = 0x821744F0;
	sub_82174380(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217450c
	if (ctx.cr6.eq) goto loc_8217450C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82174508;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217450C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174524"))) PPC_WEAK_FUNC(sub_82174524);
PPC_FUNC_IMPL(__imp__sub_82174524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174528"))) PPC_WEAK_FUNC(sub_82174528);
PPC_FUNC_IMPL(__imp__sub_82174528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8217453C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82174548;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174550;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82174568"))) PPC_WEAK_FUNC(sub_82174568);
PPC_FUNC_IMPL(__imp__sub_82174568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3b68
	ctx.lr = 0x82174584;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821859a0
	ctx.lr = 0x82174598;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r11,-22120
	ctx.r8.s64 = ctx.r11.s64 + -22120;
	// addi r7,r10,-22128
	ctx.r7.s64 = ctx.r10.s64 + -22128;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r5,r6,-680
	ctx.r5.s64 = ctx.r6.s64 + -680;
	// lwz r11,-612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -612);
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82174604
	if (ctx.cr6.eq) goto loc_82174604;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821745e8
	if (ctx.cr6.eq) goto loc_821745E8;
	// bl 0x823c3ca8
	ctx.lr = 0x821745E4;
	sub_823C3CA8(ctx, base);
	// b 0x821745ec
	goto loc_821745EC;
loc_821745E8:
	// bl 0x823c3cd8
	ctx.lr = 0x821745EC;
	sub_823C3CD8(ctx, base);
loc_821745EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217462c
	goto loc_8217462C;
loc_82174604:
	// bl 0x821142a0
	ctx.lr = 0x82174608;
	sub_821142A0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82174620
	if (!ctx.cr6.eq) goto loc_82174620;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-22140
	ctx.r4.s64 = ctx.r11.s64 + -22140;
	// bl 0x821142b0
	ctx.lr = 0x82174620;
	sub_821142B0(ctx, base);
loc_82174620:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x820ed338
	ctx.lr = 0x8217462C;
	sub_820ED338(ctx, base);
loc_8217462C:
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

__attribute__((alias("__imp__sub_82174644"))) PPC_WEAK_FUNC(sub_82174644);
PPC_FUNC_IMPL(__imp__sub_82174644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174648"))) PPC_WEAK_FUNC(sub_82174648);
PPC_FUNC_IMPL(__imp__sub_82174648) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82174738
	sub_82174738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174650"))) PPC_WEAK_FUNC(sub_82174650);
PPC_FUNC_IMPL(__imp__sub_82174650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217467c
	if (ctx.cr6.eq) goto loc_8217467C;
	// bl 0x823c3ca8
	ctx.lr = 0x82174678;
	sub_823C3CA8(ctx, base);
	// b 0x82174680
	goto loc_82174680;
loc_8217467C:
	// bl 0x823c3cd8
	ctx.lr = 0x82174680;
	sub_823C3CD8(ctx, base);
loc_82174680:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174694;
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

__attribute__((alias("__imp__sub_821746A8"))) PPC_WEAK_FUNC(sub_821746A8);
PPC_FUNC_IMPL(__imp__sub_821746A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x821746C0;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821746C8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821746D4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821746D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821746f0
	if (ctx.cr6.eq) goto loc_821746F0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82183448
	ctx.lr = 0x821746EC;
	sub_82183448(ctx, base);
	// b 0x821746f8
	goto loc_821746F8;
loc_821746F0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821746F8;
	sub_821845A0(ctx, base);
loc_821746F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217470c
	if (ctx.cr6.eq) goto loc_8217470C;
	// bl 0x82174568
	ctx.lr = 0x82174704;
	sub_82174568(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82174710
	goto loc_82174710;
loc_8217470C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82174710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174718;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82174734"))) PPC_WEAK_FUNC(sub_82174734);
PPC_FUNC_IMPL(__imp__sub_82174734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174738"))) PPC_WEAK_FUNC(sub_82174738);
PPC_FUNC_IMPL(__imp__sub_82174738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-22120
	ctx.r9.s64 = ctx.r11.s64 + -22120;
	// addi r8,r10,-22128
	ctx.r8.s64 = ctx.r10.s64 + -22128;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x82174774;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8217477C;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82174798
	if (ctx.cr6.eq) goto loc_82174798;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82174794;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82174798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821747B0"))) PPC_WEAK_FUNC(sub_821747B0);
PPC_FUNC_IMPL(__imp__sub_821747B0) {
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
	ctx.lr = 0x821747C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821747d8
	if (ctx.cr6.eq) goto loc_821747D8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x821747D4;
	sub_82183448(ctx, base);
	// b 0x821747e0
	goto loc_821747E0;
loc_821747D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821747E0;
	sub_821845A0(ctx, base);
loc_821747E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174804
	if (ctx.cr6.eq) goto loc_82174804;
	// bl 0x8217a770
	ctx.lr = 0x821747EC;
	sub_8217A770(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,16684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82174804:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16684, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174820"))) PPC_WEAK_FUNC(sub_82174820);
PPC_FUNC_IMPL(__imp__sub_82174820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82174838;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82174850
	if (ctx.cr6.eq) goto loc_82174850;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x8217484C;
	sub_82183448(ctx, base);
	// b 0x82174858
	goto loc_82174858;
loc_82174850:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82174858;
	sub_821845A0(ctx, base);
loc_82174858:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174884
	if (ctx.cr6.eq) goto loc_82174884;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82213790
	ctx.lr = 0x82174868;
	sub_82213790(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82174884:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -752, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821748A4"))) PPC_WEAK_FUNC(sub_821748A4);
PPC_FUNC_IMPL(__imp__sub_821748A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821748A8"))) PPC_WEAK_FUNC(sub_821748A8);
PPC_FUNC_IMPL(__imp__sub_821748A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x821748C8;
	sub_823C3B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22032
	ctx.r9.s64 = ctx.r10.s64 + -22032;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,-19020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19020);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82174910
	if (!ctx.cr6.eq) goto loc_82174910;
loc_821748F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088648
	ctx.lr = 0x82174900;
	sub_82088648(ctx, base);
	// lwz r11,-19020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19020);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821748f8
	if (ctx.cr6.eq) goto loc_821748F8;
loc_82174910:
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

__attribute__((alias("__imp__sub_8217492C"))) PPC_WEAK_FUNC(sub_8217492C);
PPC_FUNC_IMPL(__imp__sub_8217492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174930"))) PPC_WEAK_FUNC(sub_82174930);
PPC_FUNC_IMPL(__imp__sub_82174930) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82183078
	ctx.lr = 0x82174948;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82174954;
	sub_821837D0(ctx, base);
	// bl 0x82176c08
	ctx.lr = 0x82174958;
	sub_82176C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82174964
	if (!ctx.cr6.eq) goto loc_82174964;
	// bl 0x82176bf0
	ctx.lr = 0x82174964;
	sub_82176BF0(ctx, base);
loc_82174964:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15480);
	// bl 0x821750b0
	ctx.lr = 0x82174970;
	sub_821750B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82177748
	ctx.lr = 0x82174984;
	sub_82177748(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217499c
	if (!ctx.cr6.eq) goto loc_8217499C;
	// bl 0x82174820
	ctx.lr = 0x82174998;
	sub_82174820(ctx, base);
	// lwz r3,-752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
loc_8217499C:
	// bl 0x82213770
	ctx.lr = 0x821749A0;
	sub_82213770(ctx, base);
	// bl 0x8215c0a0
	ctx.lr = 0x821749A4;
	sub_8215C0A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,39
	ctx.r8.s64 = 39;
	// li r7,30
	ctx.r7.s64 = 30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82081d78
	ctx.lr = 0x821749C4;
	sub_82081D78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82081700
	ctx.lr = 0x821749D0;
	sub_82081700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821749D8;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_821749F0"))) PPC_WEAK_FUNC(sub_821749F0);
PPC_FUNC_IMPL(__imp__sub_821749F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82174bc0
	if (ctx.cr6.gt) goto loc_82174BC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82174a5c
	// bdzf 4*cr6+eq,0x82174a84
	// bdzf 4*cr6+eq,0x82174aa4
	// bdzf 4*cr6+eq,0x82174ab0
	// bdzf 4*cr6+eq,0x82174ae4
	// bdzf 4*cr6+eq,0x82174b10
	// bne cr6,0x82174b28
	if (!ctx.cr6.eq) goto loc_82174B28;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x82174a50
	if (!ctx.cr6.lt) goto loc_82174A50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174A50:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174A5C:
	// bl 0x82183078
	ctx.lr = 0x82174A60;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82174A6C;
	sub_821837D0(ctx, base);
	// bl 0x821747b0
	ctx.lr = 0x82174A70;
	sub_821747B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174A78;
	sub_821837D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174A84:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16684);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174AA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82174930
	ctx.lr = 0x82174AB8;
	sub_82174930(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82174ABC;
	sub_821142A0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82174ad8
	if (!ctx.cr6.eq) goto loc_82174AD8;
	// bl 0x821142a0
	ctx.lr = 0x82174ACC;
	sub_821142A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-22140
	ctx.r4.s64 = ctx.r11.s64 + -22140;
	// bl 0x821142b0
	ctx.lr = 0x82174AD8;
	sub_821142B0(ctx, base);
loc_82174AD8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174AE4:
	// bl 0x821142a0
	ctx.lr = 0x82174AE8;
	sub_821142A0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82174b04
	if (!ctx.cr6.eq) goto loc_82174B04;
	// bl 0x821142a0
	ctx.lr = 0x82174AF8;
	sub_821142A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-22140
	ctx.r4.s64 = ctx.r11.s64 + -22140;
	// bl 0x821142b0
	ctx.lr = 0x82174B04;
	sub_821142B0(ctx, base);
loc_82174B04:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82174bc0
	goto loc_82174BC0;
loc_82174B10:
	// bl 0x821142a0
	ctx.lr = 0x82174B14;
	sub_821142A0(ctx, base);
	// bl 0x821ff660
	ctx.lr = 0x82174B18;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82174B28:
	// bl 0x821142a0
	ctx.lr = 0x82174B2C;
	sub_821142A0(ctx, base);
	// bl 0x821ff660
	ctx.lr = 0x82174B30;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// bl 0x82177450
	ctx.lr = 0x82174B3C;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// bl 0x82213778
	ctx.lr = 0x82174B50;
	sub_82213778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// bl 0x82081340
	ctx.lr = 0x82174B64;
	sub_82081340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82174bc0
	if (ctx.cr6.eq) goto loc_82174BC0;
	// bl 0x82189760
	ctx.lr = 0x82174B70;
	sub_82189760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82174bc0
	if (!ctx.cr6.eq) goto loc_82174BC0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x82174B84;
	sub_8215CEA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82174ba0
	if (ctx.cr6.eq) goto loc_82174BA0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82174ba4
	goto loc_82174BA4;
loc_82174BA0:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82174BA4:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82174BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82174BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174BD8"))) PPC_WEAK_FUNC(sub_82174BD8);
PPC_FUNC_IMPL(__imp__sub_82174BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x82174BF0;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82174BF8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174C04;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82174C08;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82174c20
	if (ctx.cr6.eq) goto loc_82174C20;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x82174C1C;
	sub_82183448(ctx, base);
	// b 0x82174c28
	goto loc_82174C28;
loc_82174C20:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82174C28;
	sub_821845A0(ctx, base);
loc_82174C28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174c3c
	if (ctx.cr6.eq) goto loc_82174C3C;
	// bl 0x821748a8
	ctx.lr = 0x82174C34;
	sub_821748A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82174c40
	goto loc_82174C40;
loc_82174C3C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82174C40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174C48;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82174C64"))) PPC_WEAK_FUNC(sub_82174C64);
PPC_FUNC_IMPL(__imp__sub_82174C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174C68"))) PPC_WEAK_FUNC(sub_82174C68);
PPC_FUNC_IMPL(__imp__sub_82174C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-22032
	ctx.r10.s64 = ctx.r11.s64 + -22032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c3bc0
	ctx.lr = 0x82174C94;
	sub_823C3BC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82174cb0
	if (ctx.cr6.eq) goto loc_82174CB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82174CAC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82174CB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174CC8"))) PPC_WEAK_FUNC(sub_82174CC8);
PPC_FUNC_IMPL(__imp__sub_82174CC8) {
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
	ctx.lr = 0x82174CD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82174cf0
	if (ctx.cr6.eq) goto loc_82174CF0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x82174CEC;
	sub_82183448(ctx, base);
	// b 0x82174cf8
	goto loc_82174CF8;
loc_82174CF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82174CF8;
	sub_821845A0(ctx, base);
loc_82174CF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174d1c
	if (ctx.cr6.eq) goto loc_82174D1C;
	// bl 0x821638f0
	ctx.lr = 0x82174D04;
	sub_821638F0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82174D1C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -424, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174D38"))) PPC_WEAK_FUNC(sub_82174D38);
PPC_FUNC_IMPL(__imp__sub_82174D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82174D40;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82174ec8
	if (ctx.cr6.gt) goto loc_82174EC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82174d98
	// bdzf 4*cr6+eq,0x82174ea8
	// bne cr6,0x82174ebc
	if (!ctx.cr6.eq) goto loc_82174EBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82174D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82174D98:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82174ec8
	if (ctx.cr6.eq) goto loc_82174EC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174ec8
	if (ctx.cr6.eq) goto loc_82174EC8;
	// bl 0x82183078
	ctx.lr = 0x82174DB8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82174DC4;
	sub_821837D0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x82174DCC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174de0
	if (ctx.cr6.eq) goto loc_82174DE0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821a64b8
	ctx.lr = 0x82174DE0;
	sub_821A64B8(ctx, base);
loc_82174DE0:
	// bl 0x82088650
	ctx.lr = 0x82174DE4;
	sub_82088650(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2578
	ctx.lr = 0x82174DF8;
	sub_821A2578(ctx, base);
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x82174E00;
	sub_821A2CE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19012);
	// bl 0x821a7e78
	ctx.lr = 0x82174E0C;
	sub_821A7E78(ctx, base);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,-19020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19020);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x82174E24;
	sub_821A2D30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2578
	ctx.lr = 0x82174E34;
	sub_821A2578(ctx, base);
	// lwz r11,-19020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19020);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820835b8
	ctx.lr = 0x82174E4C;
	sub_820835B8(ctx, base);
	// bl 0x82174cc8
	ctx.lr = 0x82174E50;
	sub_82174CC8(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82174E54;
	sub_821142A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,8332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f13.f64 = double(temp.f32);
	// li r4,248
	ctx.r4.s64 = 248;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x82174E90;
	sub_821A90A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82184808
	ctx.lr = 0x82174E98;
	sub_82184808(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174EA0;
	sub_821837D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82174EA8:
	// bl 0x821142a0
	ctx.lr = 0x82174EAC;
	sub_821142A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82174EBC:
	// bl 0x821142a0
	ctx.lr = 0x82174EC0;
	sub_821142A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_82174EC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82174ED0"))) PPC_WEAK_FUNC(sub_82174ED0);
PPC_FUNC_IMPL(__imp__sub_82174ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x82174EE8;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82174EF0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174EFC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82174F00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82174f18
	if (ctx.cr6.eq) goto loc_82174F18;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82174F14;
	sub_82183448(ctx, base);
	// b 0x82174f20
	goto loc_82174F20;
loc_82174F18:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82174F20;
	sub_821845A0(ctx, base);
loc_82174F20:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174f4c
	if (ctx.cr6.eq) goto loc_82174F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3b68
	ctx.lr = 0x82174F34;
	sub_823C3B68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-21944
	ctx.r9.s64 = ctx.r10.s64 + -21944;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82174f50
	goto loc_82174F50;
loc_82174F4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82174F50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82174F58;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82174F74"))) PPC_WEAK_FUNC(sub_82174F74);
PPC_FUNC_IMPL(__imp__sub_82174F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174F78"))) PPC_WEAK_FUNC(sub_82174F78);
PPC_FUNC_IMPL(__imp__sub_82174F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c3bc0
	ctx.lr = 0x82174FA4;
	sub_823C3BC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82174fc0
	if (ctx.cr6.eq) goto loc_82174FC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82174FBC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82174FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174FD8"))) PPC_WEAK_FUNC(sub_82174FD8);
PPC_FUNC_IMPL(__imp__sub_82174FD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174FE4"))) PPC_WEAK_FUNC(sub_82174FE4);
PPC_FUNC_IMPL(__imp__sub_82174FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174FE8"))) PPC_WEAK_FUNC(sub_82174FE8);
PPC_FUNC_IMPL(__imp__sub_82174FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r11,15484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82175014
	if (!ctx.cr6.eq) goto loc_82175014;
	// bl 0x823c6e20
	ctx.lr = 0x8217500C;
	sub_823C6E20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15484, ctx.r11.u32);
loc_82175014:
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

__attribute__((alias("__imp__sub_8217502C"))) PPC_WEAK_FUNC(sub_8217502C);
PPC_FUNC_IMPL(__imp__sub_8217502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175030"))) PPC_WEAK_FUNC(sub_82175030);
PPC_FUNC_IMPL(__imp__sub_82175030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82175068
	if (ctx.cr6.eq) goto loc_82175068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82175068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82175068:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175090
	if (ctx.cr6.eq) goto loc_82175090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82175090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82175090:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821750AC"))) PPC_WEAK_FUNC(sub_821750AC);
PPC_FUNC_IMPL(__imp__sub_821750AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821750B0"))) PPC_WEAK_FUNC(sub_821750B0);
PPC_FUNC_IMPL(__imp__sub_821750B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821750B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821750C4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821750D0;
	sub_821837D0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821751a0
	if (!ctx.cr6.eq) goto loc_821751A0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175148
	if (ctx.cr6.eq) goto loc_82175148;
	// bl 0x82080000
	ctx.lr = 0x821750FC;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175198
	if (ctx.cr6.eq) goto loc_82175198;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-9144
	ctx.r5.s64 = ctx.r11.s64 + -9144;
	// addi r4,r10,-21828
	ctx.r4.s64 = ctx.r10.s64 + -21828;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// bl 0x823c6d70
	ctx.lr = 0x82175124;
	sub_823C6D70(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r9,-21860
	ctx.r8.s64 = ctx.r9.s64 + -21860;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x82175140;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82175148:
	// bl 0x82080000
	ctx.lr = 0x8217514C;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175198
	if (ctx.cr6.eq) goto loc_82175198;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-9144
	ctx.r5.s64 = ctx.r11.s64 + -9144;
	// addi r4,r10,-21840
	ctx.r4.s64 = ctx.r10.s64 + -21840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// bl 0x823c6d70
	ctx.lr = 0x82175174;
	sub_823C6D70(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r9,-21860
	ctx.r8.s64 = ctx.r9.s64 + -21860;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x82175190;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82175198:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821751A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821751A8;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821751B0"))) PPC_WEAK_FUNC(sub_821751B0);
PPC_FUNC_IMPL(__imp__sub_821751B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15484);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821751BC"))) PPC_WEAK_FUNC(sub_821751BC);
PPC_FUNC_IMPL(__imp__sub_821751BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821751C0"))) PPC_WEAK_FUNC(sub_821751C0);
PPC_FUNC_IMPL(__imp__sub_821751C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6db0
	ctx.lr = 0x821751E0;
	sub_823C6DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821751fc
	if (ctx.cr6.eq) goto loc_821751FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821751F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821751FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175214"))) PPC_WEAK_FUNC(sub_82175214);
PPC_FUNC_IMPL(__imp__sub_82175214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175218"))) PPC_WEAK_FUNC(sub_82175218);
PPC_FUNC_IMPL(__imp__sub_82175218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175284
	if (ctx.cr6.eq) goto loc_82175284;
	// bl 0x82080000
	ctx.lr = 0x8217525C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821752b0
	if (ctx.cr6.eq) goto loc_821752B0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-8976
	ctx.r5.s64 = ctx.r11.s64 + -8976;
	// addi r4,r10,-21828
	ctx.r4.s64 = ctx.r10.s64 + -21828;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x823c6d70
	ctx.lr = 0x82175280;
	sub_823C6D70(ctx, base);
	// b 0x821752b4
	goto loc_821752B4;
loc_82175284:
	// bl 0x82080000
	ctx.lr = 0x82175288;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821752b0
	if (ctx.cr6.eq) goto loc_821752B0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-8976
	ctx.r5.s64 = ctx.r11.s64 + -8976;
	// addi r4,r10,-21840
	ctx.r4.s64 = ctx.r10.s64 + -21840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x823c6d70
	ctx.lr = 0x821752AC;
	sub_823C6D70(ctx, base);
	// b 0x821752b4
	goto loc_821752B4;
loc_821752B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821752B4:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x820ed0f8
	ctx.lr = 0x821752BC;
	sub_820ED0F8(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x821752C0;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x820ed338
	ctx.lr = 0x821752CC;
	sub_820ED338(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-21804
	ctx.r4.s64 = ctx.r10.s64 + -21804;
	// lwz r30,-780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x821ff6b0
	ctx.lr = 0x821752E4;
	sub_821FF6B0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r9,-21816
	ctx.r4.s64 = ctx.r9.s64 + -21816;
	// bl 0x821ff550
	ctx.lr = 0x821752F4;
	sub_821FF550(ctx, base);
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

__attribute__((alias("__imp__sub_82175310"))) PPC_WEAK_FUNC(sub_82175310);
PPC_FUNC_IMPL(__imp__sub_82175310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,96
	ctx.r9.s64 = ctx.r4.s64 + 96;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lfs f2,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// ld r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r10,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r7,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
loc_821753D4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821753d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821753D4;
	// lwz r10,128(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lwz r9,132(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// lwz r8,136(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// lwz r7,140(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r7,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// lbz r6,144(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// stb r6,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r6.u8);
	// lbz r5,145(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 145);
	// stb r5,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r5.u8);
	// lbz r11,146(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 146);
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r11.u8);
	// lbz r10,147(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 147);
	// stb r10,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r10.u8);
	// ld r9,160(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// std r9,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r9.u64);
	// ld r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// std r8,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r8.u64);
	// ld r7,176(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// std r7,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r7.u64);
	// ld r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// std r6,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r6.u64);
	// lwz r5,192(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// lwz r11,196(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lfs f0,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f13,204(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,204(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f12,208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,208(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f11,212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,212(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r10,216(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r10,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// lwz r9,220(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// lfs f10,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,224(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lbz r8,228(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 228);
	// stb r8,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r8.u8);
	// lbz r7,229(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 229);
	// stb r7,229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 229, ctx.r7.u8);
	// lbz r6,230(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 230);
	// stb r6,230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 230, ctx.r6.u8);
	// lbz r5,231(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 231);
	// stb r5,231(r3)
	PPC_STORE_U8(ctx.r3.u32 + 231, ctx.r5.u8);
	// lwz r11,232(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r10,236(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// lwz r9,240(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// lwz r8,244(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r8,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821754D4"))) PPC_WEAK_FUNC(sub_821754D4);
PPC_FUNC_IMPL(__imp__sub_821754D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821754D8"))) PPC_WEAK_FUNC(sub_821754D8);
PPC_FUNC_IMPL(__imp__sub_821754D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175520
	if (ctx.cr6.eq) goto loc_82175520;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217551c
	if (ctx.cr6.eq) goto loc_8217551C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217551c
	if (ctx.cr6.eq) goto loc_8217551C;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x82175520
	goto loc_82175520;
loc_8217551C:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82175520:
	// bl 0x820ed3d8
	ctx.lr = 0x82175524;
	sub_820ED3D8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// and r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 & ctx.r31.u64;
	// lwz r31,-780(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x821ff660
	ctx.lr = 0x82175538;
	sub_821FF660(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// and r31,r3,r30
	ctx.r31.u64 = ctx.r3.u64 & ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821ff660
	ctx.lr = 0x82175548;
	sub_821FF660(ctx, base);
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175564"))) PPC_WEAK_FUNC(sub_82175564);
PPC_FUNC_IMPL(__imp__sub_82175564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175568"))) PPC_WEAK_FUNC(sub_82175568);
PPC_FUNC_IMPL(__imp__sub_82175568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82175570;
	sub_82248780(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r26,-792(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82175708
	if (ctx.cr6.eq) goto loc_82175708;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82248f70
	ctx.lr = 0x821755B4;
	sub_82248F70(ctx, base);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// std r27,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r27.u64);
	// li r5,128
	ctx.r5.s64 = 128;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r27,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r27.u64);
	// std r27,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r27.u64);
	// std r27,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r27.u64);
	// std r27,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r27.u64);
	// bl 0x82248f70
	ctx.lr = 0x821755E0;
	sub_82248F70(ctx, base);
	// lwz r28,64(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// std r27,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r27.u64);
	// std r27,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r27.u64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// std r27,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r27.u64);
	// std r27,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r27.u64);
	// beq cr6,0x82175634
	if (ctx.cr6.eq) goto loc_82175634;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82175608:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add. r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82175624
	if (ctx.cr0.eq) goto loc_82175624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82175310
	ctx.lr = 0x82175624;
	sub_82175310(ctx, base);
loc_82175624:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// bne 0x82175608
	if (!ctx.cr0.eq) goto loc_82175608;
loc_82175634:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82175638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821e90a8
	ctx.lr = 0x82175644;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217566c
	if (ctx.cr6.eq) goto loc_8217566C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821e8fe8
	ctx.lr = 0x82175658;
	sub_821E8FE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217566c
	if (ctx.cr6.eq) goto loc_8217566C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x8217566C;
	sub_82109E00(ctx, base);
loc_8217566C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// blt cr6,0x82175638
	if (ctx.cr6.lt) goto loc_82175638;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175708
	if (ctx.cr6.eq) goto loc_82175708;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f13,564(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lfs f12,820(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,548(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r6,568(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// lwz r5,804(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// stw r9,1220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1220, ctx.r9.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,1236(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1236, temp.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,1260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1260, ctx.r27.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,1476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1476, ctx.r7.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f13,1492(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1492, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,1496(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1496, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,1516(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1516, ctx.r27.u32);
	// lwz r4,824(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r5.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,1748(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1748, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,1752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1752, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,1772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1772, ctx.r27.u32);
loc_82175708:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82175710"))) PPC_WEAK_FUNC(sub_82175710);
PPC_FUNC_IMPL(__imp__sub_82175710) {
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
	ctx.lr = 0x82175720;
	sub_8215BEC8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15488
	ctx.r3.s64 = ctx.r11.s64 + 15488;
	// li r5,688
	ctx.r5.s64 = 688;
	// bl 0x821847a8
	ctx.lr = 0x82175734;
	sub_821847A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175744"))) PPC_WEAK_FUNC(sub_82175744);
PPC_FUNC_IMPL(__imp__sub_82175744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175748"))) PPC_WEAK_FUNC(sub_82175748);
PPC_FUNC_IMPL(__imp__sub_82175748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82175750;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-21768
	ctx.r5.s64 = ctx.r11.s64 + -21768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218cb30
	ctx.lr = 0x82175768;
	sub_8218CB30(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-21792
	ctx.r9.s64 = ctx.r10.s64 + -21792;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82182e90
	ctx.lr = 0x82175780;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82175788;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82175794;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82175798;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821757b0
	if (ctx.cr6.eq) goto loc_821757B0;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82183448
	ctx.lr = 0x821757AC;
	sub_82183448(ctx, base);
	// b 0x821757b8
	goto loc_821757B8;
loc_821757B0:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821845a0
	ctx.lr = 0x821757B8;
	sub_821845A0(ctx, base);
loc_821757B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821757d0
	if (ctx.cr6.eq) goto loc_821757D0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c58b0
	ctx.lr = 0x821757CC;
	sub_823C58B0(ctx, base);
	// b 0x821757d4
	goto loc_821757D4;
loc_821757D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821757D4:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821757F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// bl 0x821636d8
	ctx.lr = 0x82175804;
	sub_821636D8(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r3,-788(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175818
	if (ctx.cr6.eq) goto loc_82175818;
	// bl 0x821ea9b8
	ctx.lr = 0x82175818;
	sub_821EA9B8(ctx, base);
loc_82175818:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217582c
	if (ctx.cr6.eq) goto loc_8217582C;
	// bl 0x8216d060
	ctx.lr = 0x8217582C;
	sub_8216D060(ctx, base);
loc_8217582C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82175834;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82175840"))) PPC_WEAK_FUNC(sub_82175840);
PPC_FUNC_IMPL(__imp__sub_82175840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-21792
	ctx.r10.s64 = ctx.r11.s64 + -21792;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82175888
	if (ctx.cr6.eq) goto loc_82175888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82175888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82175888:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x8218cc18
	ctx.lr = 0x82175898;
	sub_8218CC18(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821758b4
	if (ctx.cr6.eq) goto loc_821758B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821758B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821758B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821758CC"))) PPC_WEAK_FUNC(sub_821758CC);
PPC_FUNC_IMPL(__imp__sub_821758CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821758D0"))) PPC_WEAK_FUNC(sub_821758D0);
PPC_FUNC_IMPL(__imp__sub_821758D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82163728
	ctx.lr = 0x821758E8;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175a70
	if (ctx.cr6.eq) goto loc_82175A70;
	// bl 0x820ed3d8
	ctx.lr = 0x821758F4;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175a70
	if (ctx.cr6.eq) goto loc_82175A70;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82175954
	if (ctx.cr6.eq) goto loc_82175954;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,16176
	ctx.r9.s64 = ctx.r9.s64 + 16176;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82175a70
	if (ctx.cr6.eq) goto loc_82175A70;
	// li r11,1
	ctx.r11.s64 = 1;
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
loc_82175954:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,-23400
	ctx.r10.s64 = ctx.r10.s64 + -23400;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821759ac
	if (ctx.cr6.eq) goto loc_821759AC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x82175a70
	if (!ctx.cr0.lt) goto loc_82175A70;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r10,16656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16656);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821759AC:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82175a04
	if (ctx.cr6.eq) goto loc_82175A04;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,16656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16656);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82175a70
	if (ctx.cr6.lt) goto loc_82175A70;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82175A04:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82175a70
	if (!ctx.cr6.eq) goto loc_82175A70;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bgt cr6,0x82175a70
	if (ctx.cr6.gt) goto loc_82175A70;
	// bl 0x82182e90
	ctx.lr = 0x82175A28;
	sub_82182E90(ctx, base);
	// bl 0x821837d0
	ctx.lr = 0x82175A2C;
	sub_821837D0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16176
	ctx.r11.s64 = ctx.r11.s64 + 16176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r5,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82175A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82175A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82175A70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175A84"))) PPC_WEAK_FUNC(sub_82175A84);
PPC_FUNC_IMPL(__imp__sub_82175A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175A88"))) PPC_WEAK_FUNC(sub_82175A88);
PPC_FUNC_IMPL(__imp__sub_82175A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82175A90;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f0,-29564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29564);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,-29568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29568);
	ctx.f13.f64 = double(temp.f32);
	// li r31,255
	ctx.r31.s64 = 255;
	// lfs f12,-21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21700);
	ctx.f12.f64 = double(temp.f32);
	// li r5,43
	ctx.r5.s64 = 43;
	// lfs f11,-21704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21704);
	ctx.f11.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82248f70
	ctx.lr = 0x82175AF8;
	sub_82248F70(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lwz r3,-7488(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821add20
	ctx.lr = 0x82175B08;
	sub_821ADD20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821b2118
	ctx.lr = 0x82175B14;
	sub_821B2118(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x82175B20;
	sub_821AD498(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// stw r29,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r29.u32);
	// stfs f30,384(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d1760
	ctx.lr = 0x82175B58;
	sub_821D1760(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x821b5ef8
	ctx.lr = 0x82175B78;
	sub_821B5EF8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821b2118
	ctx.lr = 0x82175B80;
	sub_821B2118(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,688(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stw r30,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r30.u32);
	// stfs f13,692(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// stw r29,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r29.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d1760
	ctx.lr = 0x82175BA8;
	sub_821D1760(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// stw r9,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r9.u32);
	// bl 0x821b5ef8
	ctx.lr = 0x82175BCC;
	sub_821B5EF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x82175BD8;
	sub_821AD498(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821b1d48
	ctx.lr = 0x82175BE0;
	sub_821B1D48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821b1d48
	ctx.lr = 0x82175BE8;
	sub_821B1D48(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8218b408
	ctx.lr = 0x82175BF0;
	sub_8218B408(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8218b408
	ctx.lr = 0x82175BF8;
	sub_8218B408(ctx, base);
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82175c0c
	if (!ctx.cr6.gt) goto loc_82175C0C;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r11,16656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16656);
loc_82175C0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21716
	ctx.r5.s64 = ctx.r11.s64 + -21716;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x8218a5f0
	ctx.lr = 0x82175C24;
	sub_8218A5F0(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x82175C28;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175c3c
	if (!ctx.cr6.eq) goto loc_82175C3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,-21724
	ctx.r6.s64 = ctx.r11.s64 + -21724;
loc_82175C3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-21744
	ctx.r5.s64 = ctx.r11.s64 + -21744;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x8218a5f0
	ctx.lr = 0x82175C50;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82175C60"))) PPC_WEAK_FUNC(sub_82175C60);
PPC_FUNC_IMPL(__imp__sub_82175C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82175C84;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-21696
	ctx.r10.s64 = ctx.r11.s64 + -21696;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82179728
	ctx.lr = 0x82175CAC;
	sub_82179728(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x82175CB8;
	sub_822565C8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82175CDC"))) PPC_WEAK_FUNC(sub_82175CDC);
PPC_FUNC_IMPL(__imp__sub_82175CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175CE0"))) PPC_WEAK_FUNC(sub_82175CE0);
PPC_FUNC_IMPL(__imp__sub_82175CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// beq cr6,0x82175d14
	if (ctx.cr6.eq) goto loc_82175D14;
	// bl 0x82088268
	ctx.lr = 0x82175D10;
	sub_82088268(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82175D14:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175D30"))) PPC_WEAK_FUNC(sub_82175D30);
PPC_FUNC_IMPL(__imp__sub_82175D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82175D4C;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82175D50;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175ed8
	if (ctx.cr6.eq) goto loc_82175ED8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x82175D64;
	sub_8231E120(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x82175d78
	if (!ctx.cr6.eq) goto loc_82175D78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82175ed4
	goto loc_82175ED4;
loc_82175D78:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82175ed8
	if (ctx.cr6.gt) goto loc_82175ED8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175ed0
	if (ctx.cr6.eq) goto loc_82175ED0;
	// bdz 0x82175da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82175DA0;
	// bdz 0x82175e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82175E10;
	// bdz 0x82175e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82175E50;
	// b 0x82175eac
	goto loc_82175EAC;
loc_82175DA0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175ed8
	if (ctx.cr6.eq) goto loc_82175ED8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8241e0ac
	ctx.lr = 0x82175DBC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175ed8
	if (ctx.cr6.eq) goto loc_82175ED8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82175ed8
	if (!ctx.cr6.eq) goto loc_82175ED8;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179770
	ctx.lr = 0x82175DE0;
	sub_82179770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821797c8
	ctx.lr = 0x82175DE8;
	sub_821797C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82175e08
	if (!ctx.cr6.eq) goto loc_82175E08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a248
	ctx.lr = 0x82175DF8;
	sub_8234A248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175e34
	if (ctx.cr6.eq) goto loc_82175E34;
loc_82175E00:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82175ed4
	goto loc_82175ED4;
loc_82175E08:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82175ed4
	goto loc_82175ED4;
loc_82175E10:
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821797c8
	ctx.lr = 0x82175E1C;
	sub_821797C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82175ed8
	if (!ctx.cr6.eq) goto loc_82175ED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a248
	ctx.lr = 0x82175E2C;
	sub_8234A248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82175e00
	if (!ctx.cr6.eq) goto loc_82175E00;
loc_82175E34:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82175ce0
	ctx.lr = 0x82175E44;
	sub_82175CE0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82175ed8
	goto loc_82175ED8;
loc_82175E50:
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82175ed0
	if (ctx.cr6.eq) goto loc_82175ED0;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179770
	ctx.lr = 0x82175E68;
	sub_82179770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821797c8
	ctx.lr = 0x82175E70;
	sub_821797C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82175ea4
	if (!ctx.cr6.eq) goto loc_82175EA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a248
	ctx.lr = 0x82175E80;
	sub_8234A248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82175ed4
	if (!ctx.cr6.eq) goto loc_82175ED4;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82175ce0
	ctx.lr = 0x82175E98;
	sub_82175CE0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82175ed8
	goto loc_82175ED8;
loc_82175EA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82175ed4
	goto loc_82175ED4;
loc_82175EAC:
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821797c8
	ctx.lr = 0x82175EB8;
	sub_821797C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82175ed8
	if (!ctx.cr6.eq) goto loc_82175ED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a248
	ctx.lr = 0x82175EC8;
	sub_8234A248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82175e34
	if (ctx.cr6.eq) goto loc_82175E34;
loc_82175ED0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82175ED4:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82175ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175EF0"))) PPC_WEAK_FUNC(sub_82175EF0);
PPC_FUNC_IMPL(__imp__sub_82175EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82175EF8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-21696
	ctx.r10.s64 = ctx.r11.s64 + -21696;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82175f2c
	if (ctx.cr6.eq) goto loc_82175F2C;
	// bl 0x82088268
	ctx.lr = 0x82175F28;
	sub_82088268(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82175F2C:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8209eda0
	ctx.lr = 0x82175F38;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82175F40;
	sub_821857F0(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175f5c
	if (ctx.cr6.eq) goto loc_82175F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82175F58;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175F5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82175F64"))) PPC_WEAK_FUNC(sub_82175F64);
PPC_FUNC_IMPL(__imp__sub_82175F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175F68"))) PPC_WEAK_FUNC(sub_82175F68);
PPC_FUNC_IMPL(__imp__sub_82175F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82198538
	ctx.lr = 0x82175F80;
	sub_82198538(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21672
	ctx.r10.s64 = ctx.r11.s64 + -21672;
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

__attribute__((alias("__imp__sub_82175FA4"))) PPC_WEAK_FUNC(sub_82175FA4);
PPC_FUNC_IMPL(__imp__sub_82175FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175FA8"))) PPC_WEAK_FUNC(sub_82175FA8);
PPC_FUNC_IMPL(__imp__sub_82175FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82198508
	ctx.lr = 0x82175FC8;
	sub_82198508(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175fe4
	if (ctx.cr6.eq) goto loc_82175FE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82175FE0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175FE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175FFC"))) PPC_WEAK_FUNC(sub_82175FFC);
PPC_FUNC_IMPL(__imp__sub_82175FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176000"))) PPC_WEAK_FUNC(sub_82176000);
PPC_FUNC_IMPL(__imp__sub_82176000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// b 0x821ad958
	sub_821AD958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217600C"))) PPC_WEAK_FUNC(sub_8217600C);
PPC_FUNC_IMPL(__imp__sub_8217600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176010"))) PPC_WEAK_FUNC(sub_82176010);
PPC_FUNC_IMPL(__imp__sub_82176010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad958
	ctx.lr = 0x82176030;
	sub_821AD958(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x8217603C;
	sub_821AD240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176050"))) PPC_WEAK_FUNC(sub_82176050);
PPC_FUNC_IMPL(__imp__sub_82176050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21672
	ctx.r10.s64 = ctx.r11.s64 + -21672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82198538
	ctx.lr = 0x8217607C;
	sub_82198538(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82176098
	if (ctx.cr6.eq) goto loc_82176098;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82176094;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821760B0"))) PPC_WEAK_FUNC(sub_821760B0);
PPC_FUNC_IMPL(__imp__sub_821760B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,63
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 63, ctx.xer);
	// bgt cr6,0x821760e8
	if (ctx.cr6.gt) goto loc_821760E8;
	// beq cr6,0x821760d8
	if (ctx.cr6.eq) goto loc_821760D8;
	// cmplwi cr6,r3,55
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 55, ctx.xer);
	// bgt cr6,0x821760e0
	if (ctx.cr6.gt) goto loc_821760E0;
	// beq cr6,0x821760d8
	if (ctx.cr6.eq) goto loc_821760D8;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// blt cr6,0x82176100
	if (ctx.cr6.lt) goto loc_82176100;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bgt cr6,0x82176100
	if (ctx.cr6.gt) goto loc_82176100;
loc_821760D8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821760E0:
	// cmplwi cr6,r3,59
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 59, ctx.xer);
	// b 0x821760fc
	goto loc_821760FC;
loc_821760E8:
	// cmplwi cr6,r3,67
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 67, ctx.xer);
	// beq cr6,0x821760d8
	if (ctx.cr6.eq) goto loc_821760D8;
	// cmplwi cr6,r3,71
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 71, ctx.xer);
	// beq cr6,0x821760d8
	if (ctx.cr6.eq) goto loc_821760D8;
	// cmplwi cr6,r3,75
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 75, ctx.xer);
loc_821760FC:
	// beq cr6,0x821760d8
	if (ctx.cr6.eq) goto loc_821760D8;
loc_82176100:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 25, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 26, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 27, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 28, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 29, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,35
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 35, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,54
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 54, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,56
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 56, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,58
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 58, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,62
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 62, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,65
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,66
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 66, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,68
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 68, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,69
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 69, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,70
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 70, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,72
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 72, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,73
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 73, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,74
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 74, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,76
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 76, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,77
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 77, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,37
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 37, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,39
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 39, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,40
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 40, ctx.xer);
	// beq cr6,0x82176398
	if (ctx.cr6.eq) goto loc_82176398;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,41
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 41, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,42
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 42, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,44
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 44, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,43
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 43, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,45
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 45, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,46
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 46, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,47
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 47, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,48
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 48, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,50
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 50, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,51
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 51, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,52
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 52, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,84
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 84, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,85
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 85, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,86
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 86, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,87
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 87, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,82
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 82, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,79
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 79, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,80
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 80, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,78
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 78, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,88
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 88, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,90
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 90, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// cmplwi cr6,r3,91
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 91, ctx.xer);
	// beq cr6,0x82176390
	if (ctx.cr6.eq) goto loc_82176390;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82176390:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82176398:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821763A0"))) PPC_WEAK_FUNC(sub_821763A0);
PPC_FUNC_IMPL(__imp__sub_821763A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821763A8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821848c8
	ctx.lr = 0x821763B0;
	sub_821848C8(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x821763B4;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821763C0;
	sub_821837D0(ctx, base);
	// bl 0x82184930
	ctx.lr = 0x821763C4;
	sub_82184930(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821764e0
	if (!ctx.cr6.gt) goto loc_821764E0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r9,-21680
	ctx.r29.s64 = ctx.r9.s64 + -21680;
	// addi r28,r10,-21688
	ctx.r28.s64 = ctx.r10.s64 + -21688;
	// addi r27,r11,-21688
	ctx.r27.s64 = ctx.r11.s64 + -21688;
loc_821763EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821760b0
	ctx.lr = 0x821763F4;
	sub_821760B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82176494
	if (ctx.cr6.eq) goto loc_82176494;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82176450
	if (ctx.cr6.eq) goto loc_82176450;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821764d4
	if (!ctx.cr6.eq) goto loc_821764D4;
	// bl 0x82183850
	ctx.lr = 0x82176410;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82176428
	if (ctx.cr6.eq) goto loc_82176428;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82176424;
	sub_82183448(ctx, base);
	// b 0x82176430
	goto loc_82176430;
loc_82176428:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82176430;
	sub_821845A0(ctx, base);
loc_82176430:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821764d4
	if (ctx.cr6.eq) goto loc_821764D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821984a8
	ctx.lr = 0x82176448;
	sub_821984A8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x821764d4
	goto loc_821764D4;
loc_82176450:
	// bl 0x82183850
	ctx.lr = 0x82176454;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8217646c
	if (ctx.cr6.eq) goto loc_8217646C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82176468;
	sub_82183448(ctx, base);
	// b 0x82176474
	goto loc_82176474;
loc_8217646C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82176474;
	sub_821845A0(ctx, base);
loc_82176474:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821764d4
	if (ctx.cr6.eq) goto loc_821764D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821984a8
	ctx.lr = 0x8217648C;
	sub_821984A8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x821764d4
	goto loc_821764D4;
loc_82176494:
	// bl 0x82183850
	ctx.lr = 0x82176498;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821764b0
	if (ctx.cr6.eq) goto loc_821764B0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x821764AC;
	sub_82183448(ctx, base);
	// b 0x821764b8
	goto loc_821764B8;
loc_821764B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821764B8;
	sub_821845A0(ctx, base);
loc_821764B8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821764d4
	if (ctx.cr6.eq) goto loc_821764D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821984a8
	ctx.lr = 0x821764D0;
	sub_821984A8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_821764D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821763ec
	if (ctx.cr6.lt) goto loc_821763EC;
loc_821764E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x821764E8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821764F0"))) PPC_WEAK_FUNC(sub_821764F0);
PPC_FUNC_IMPL(__imp__sub_821764F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r3,16664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82176524
	if (ctx.cr6.eq) goto loc_82176524;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82176524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82176524:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176540"))) PPC_WEAK_FUNC(sub_82176540);
PPC_FUNC_IMPL(__imp__sub_82176540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r8,r11,32796
	ctx.r8.u64 = ctx.r11.u64 | 32796;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r7,r10,32800
	ctx.r7.u64 = ctx.r10.u64 | 32800;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-21664
	ctx.r6.s64 = ctx.r9.s64 + -21664;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ori r4,r4,32776
	ctx.r4.u64 = ctx.r4.u64 | 32776;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x8217659C;
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

__attribute__((alias("__imp__sub_821765B4"))) PPC_WEAK_FUNC(sub_821765B4);
PPC_FUNC_IMPL(__imp__sub_821765B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821765B8"))) PPC_WEAK_FUNC(sub_821765B8);
PPC_FUNC_IMPL(__imp__sub_821765B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-21664
	ctx.r10.s64 = ctx.r11.s64 + -21664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821765C8"))) PPC_WEAK_FUNC(sub_821765C8);
PPC_FUNC_IMPL(__imp__sub_821765C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821765DC"))) PPC_WEAK_FUNC(sub_821765DC);
PPC_FUNC_IMPL(__imp__sub_821765DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821765E0"))) PPC_WEAK_FUNC(sub_821765E0);
PPC_FUNC_IMPL(__imp__sub_821765E0) {
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

__attribute__((alias("__imp__sub_821765F4"))) PPC_WEAK_FUNC(sub_821765F4);
PPC_FUNC_IMPL(__imp__sub_821765F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821765F8"))) PPC_WEAK_FUNC(sub_821765F8);
PPC_FUNC_IMPL(__imp__sub_821765F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176604"))) PPC_WEAK_FUNC(sub_82176604);
PPC_FUNC_IMPL(__imp__sub_82176604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176608"))) PPC_WEAK_FUNC(sub_82176608);
PPC_FUNC_IMPL(__imp__sub_82176608) {
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
	ctx.lr = 0x82176618;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82176634
	if (ctx.cr6.eq) goto loc_82176634;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,55656
	ctx.r3.u64 = ctx.r3.u64 | 55656;
	// bl 0x82183448
	ctx.lr = 0x82176630;
	sub_82183448(ctx, base);
	// b 0x8217663c
	goto loc_8217663C;
loc_82176634:
	// li r3,15767
	ctx.r3.s64 = 15767;
	// bl 0x821845a0
	ctx.lr = 0x8217663C;
	sub_821845A0(ctx, base);
loc_8217663C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82176660
	if (ctx.cr6.eq) goto loc_82176660;
	// bl 0x8217a7c0
	ctx.lr = 0x82176648;
	sub_8217A7C0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,16664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82176660:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217667C"))) PPC_WEAK_FUNC(sub_8217667C);
PPC_FUNC_IMPL(__imp__sub_8217667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176680"))) PPC_WEAK_FUNC(sub_82176680);
PPC_FUNC_IMPL(__imp__sub_82176680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21664
	ctx.r9.s64 = ctx.r11.s64 + -21664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821766b8
	if (ctx.cr6.eq) goto loc_821766B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821766B4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821766B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821766CC"))) PPC_WEAK_FUNC(sub_821766CC);
PPC_FUNC_IMPL(__imp__sub_821766CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821766D0"))) PPC_WEAK_FUNC(sub_821766D0);
PPC_FUNC_IMPL(__imp__sub_821766D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820851b8
	ctx.lr = 0x821766E4;
	sub_820851B8(ctx, base);
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217673c
	if (ctx.cr6.eq) goto loc_8217673C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8217673c
	if (ctx.cr6.gt) goto loc_8217673C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217672c
	if (ctx.cr6.eq) goto loc_8217672C;
	// bdz 0x8217673c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217673C;
	// bdz 0x8217672c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217672C;
	// bdz 0x8217671c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217671C;
	// bdz 0x8217673c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217673C;
	// b 0x82176724
	goto loc_82176724;
loc_8217671C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82176730
	goto loc_82176730;
loc_82176724:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82176730
	goto loc_82176730;
loc_8217672C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82176730:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,26852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26852);
	// bl 0x821928b0
	ctx.lr = 0x8217673C;
	sub_821928B0(ctx, base);
loc_8217673C:
	// bl 0x82256da8
	ctx.lr = 0x82176740;
	sub_82256DA8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x821767ac
	if (ctx.cr6.gt) goto loc_821767AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82176774
	// bdzf 4*cr6+eq,0x8217678c
	// bdzf 4*cr6+eq,0x8217679c
	// bdzf 4*cr6+eq,0x82176794
	// bdzf 4*cr6+eq,0x8217677c
	// bne cr6,0x82176784
	if (!ctx.cr6.eq) goto loc_82176784;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821767a0
	goto loc_821767A0;
loc_82176774:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x821767a0
	goto loc_821767A0;
loc_8217677C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821767a0
	goto loc_821767A0;
loc_82176784:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821767a0
	goto loc_821767A0;
loc_8217678C:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821767a0
	goto loc_821767A0;
loc_82176794:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821767a0
	goto loc_821767A0;
loc_8217679C:
	// li r4,3
	ctx.r4.s64 = 3;
loc_821767A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,26852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26852);
	// bl 0x821928b0
	ctx.lr = 0x821767AC;
	sub_821928B0(ctx, base);
loc_821767AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821767C0"))) PPC_WEAK_FUNC(sub_821767C0);
PPC_FUNC_IMPL(__imp__sub_821767C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x821767DC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x821767E8;
	sub_821837D0(ctx, base);
	// bl 0x82164908
	ctx.lr = 0x821767EC;
	sub_82164908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821767F4;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82176850
	if (!ctx.cr6.eq) goto loc_82176850;
	// bl 0x8215bec8
	ctx.lr = 0x82176800;
	sub_8215BEC8(ctx, base);
	// li r4,688
	ctx.r4.s64 = 688;
	// bl 0x822aa648
	ctx.lr = 0x82176808;
	sub_822AA648(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8217680C;
	sub_8215BD60(ctx, base);
	// bl 0x8215cce0
	ctx.lr = 0x82176810;
	sub_8215CCE0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82176814;
	sub_8215BD08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821766d0
	ctx.lr = 0x82176820;
	sub_821766D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82163eb0
	ctx.lr = 0x82176830;
	sub_82163EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82176848
	if (ctx.cr6.eq) goto loc_82176848;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
loc_82176848:
	// bl 0x82182e90
	ctx.lr = 0x8217684C;
	sub_82182E90(ctx, base);
	// bl 0x821985c8
	ctx.lr = 0x82176850;
	sub_821985C8(ctx, base);
loc_82176850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176868"))) PPC_WEAK_FUNC(sub_82176868);
PPC_FUNC_IMPL(__imp__sub_82176868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82176870;
	sub_82248784(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82176914
	if (ctx.cr6.eq) goto loc_82176914;
	// bl 0x82163ed8
	ctx.lr = 0x82176884;
	sub_82163ED8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,7964
	ctx.r29.u64 = ctx.r11.u64 | 7964;
loc_82176894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230e20
	ctx.lr = 0x8217689C;
	sub_82230E20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82230e38
	ctx.lr = 0x821768A4;
	sub_82230E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82176900
	if (ctx.cr6.eq) goto loc_82176900;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x821768B8;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82176900
	if (ctx.cr6.eq) goto loc_82176900;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x821768D4;
	sub_8218AD90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82176900
	if (ctx.cr6.eq) goto loc_82176900;
	// mulli r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 * 132;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x821768F8;
	sub_821847A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d75e0
	ctx.lr = 0x82176900;
	sub_820D75E0(ctx, base);
loc_82176900:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,175
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 175, ctx.xer);
	// blt cr6,0x82176894
	if (ctx.cr6.lt) goto loc_82176894;
loc_82176914:
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8217691C"))) PPC_WEAK_FUNC(sub_8217691C);
PPC_FUNC_IMPL(__imp__sub_8217691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176920"))) PPC_WEAK_FUNC(sub_82176920);
PPC_FUNC_IMPL(__imp__sub_82176920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82176928;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82176868
	ctx.lr = 0x82176934;
	sub_82176868(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82176938;
	sub_82163EE8(ctx, base);
	// li r4,7540
	ctx.r4.s64 = 7540;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82176944;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821769f4
	if (ctx.cr6.eq) goto loc_821769F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,3348
	ctx.r3.s64 = ctx.r31.s64 + 3348;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822336d8
	ctx.lr = 0x8217695C;
	sub_822336D8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82176960;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2296
	ctx.r3.s64 = ctx.r3.s64 + 2296;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822331c8
	ctx.lr = 0x8217696C;
	sub_822331C8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82176970;
	sub_82163EE8(ctx, base);
	// addi r31,r3,2296
	ctx.r31.s64 = ctx.r3.s64 + 2296;
	// bl 0x82163ee8
	ctx.lr = 0x82176978;
	sub_82163EE8(ctx, base);
	// addi r3,r3,3339
	ctx.r3.s64 = ctx.r3.s64 + 3339;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82233408
	ctx.lr = 0x82176984;
	sub_82233408(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,1096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821769cc
	if (ctx.cr6.eq) goto loc_821769CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,2394
	ctx.r31.s64 = 2394;
loc_8217699C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82232e30
	ctx.lr = 0x821769A4;
	sub_82232E30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821769AC;
	sub_82163EE8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822335a0
	ctx.lr = 0x821769BC;
	sub_822335A0(ctx, base);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,3339
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3339, ctx.xer);
	// blt cr6,0x8217699c
	if (ctx.cr6.lt) goto loc_8217699C;
loc_821769CC:
	// bl 0x82163ee8
	ctx.lr = 0x821769D0;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2372
	ctx.r3.s64 = ctx.r3.s64 + 2372;
	// bl 0x82233340
	ctx.lr = 0x821769D8;
	sub_82233340(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x821769DC;
	sub_8215BEC8(ctx, base);
	// addi r31,r3,580
	ctx.r31.s64 = ctx.r3.s64 + 580;
	// bl 0x82163ee8
	ctx.lr = 0x821769E4;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x821769F4;
	sub_82248A40(ctx, base);
loc_821769F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821769FC"))) PPC_WEAK_FUNC(sub_821769FC);
PPC_FUNC_IMPL(__imp__sub_821769FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176A00"))) PPC_WEAK_FUNC(sub_82176A00);
PPC_FUNC_IMPL(__imp__sub_82176A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82176A18;
	sub_821855F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-21556
	ctx.r10.s64 = ctx.r11.s64 + -21556;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,16668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16668, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176A48"))) PPC_WEAK_FUNC(sub_82176A48);
PPC_FUNC_IMPL(__imp__sub_82176A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21556
	ctx.r10.s64 = ctx.r11.s64 + -21556;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16668, ctx.r11.u32);
	// bl 0x82185670
	ctx.lr = 0x82176A84;
	sub_82185670(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82176aa0
	if (ctx.cr6.eq) goto loc_82176AA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82176A9C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176AB8"))) PPC_WEAK_FUNC(sub_82176AB8);
PPC_FUNC_IMPL(__imp__sub_82176AB8) {
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
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82176ae8
	if (!ctx.cr6.eq) goto loc_82176AE8;
	// bl 0x82188738
	ctx.lr = 0x82176ADC;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21512
	ctx.r4.s64 = ctx.r11.s64 + -21512;
	// b 0x82176af4
	goto loc_82176AF4;
loc_82176AE8:
	// bl 0x82188738
	ctx.lr = 0x82176AEC;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21536
	ctx.r4.s64 = ctx.r11.s64 + -21536;
loc_82176AF4:
	// bl 0x82199348
	ctx.lr = 0x82176AF8;
	sub_82199348(ctx, base);
	// bl 0x82188738
	ctx.lr = 0x82176AFC;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21540
	ctx.r4.s64 = ctx.r11.s64 + -21540;
	// bl 0x82199000
	ctx.lr = 0x82176B08;
	sub_82199000(ctx, base);
	// bl 0x82188738
	ctx.lr = 0x82176B0C;
	sub_82188738(ctx, base);
	// bl 0x821993d0
	ctx.lr = 0x82176B10;
	sub_821993D0(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176B2C"))) PPC_WEAK_FUNC(sub_82176B2C);
PPC_FUNC_IMPL(__imp__sub_82176B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176B30"))) PPC_WEAK_FUNC(sub_82176B30);
PPC_FUNC_IMPL(__imp__sub_82176B30) {
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
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82176b8c
	if (!ctx.cr6.eq) goto loc_82176B8C;
	// bl 0x82188738
	ctx.lr = 0x82176B54;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// bl 0x82198f38
	ctx.lr = 0x82176B60;
	sub_82198F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82176b7c
	if (ctx.cr6.eq) goto loc_82176B7C;
loc_82176B68:
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
loc_82176B7C:
	// bl 0x82188738
	ctx.lr = 0x82176B80;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21512
	ctx.r4.s64 = ctx.r11.s64 + -21512;
	// b 0x82176bb0
	goto loc_82176BB0;
loc_82176B8C:
	// bl 0x82188738
	ctx.lr = 0x82176B90;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21492
	ctx.r4.s64 = ctx.r11.s64 + -21492;
	// bl 0x82198f38
	ctx.lr = 0x82176B9C;
	sub_82198F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82176b68
	if (!ctx.cr6.eq) goto loc_82176B68;
	// bl 0x82188738
	ctx.lr = 0x82176BA8;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21536
	ctx.r4.s64 = ctx.r11.s64 + -21536;
loc_82176BB0:
	// bl 0x82199348
	ctx.lr = 0x82176BB4;
	sub_82199348(ctx, base);
	// bl 0x82188728
	ctx.lr = 0x82176BB8;
	sub_82188728(ctx, base);
	// bl 0x82188738
	ctx.lr = 0x82176BBC;
	sub_82188738(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21540
	ctx.r4.s64 = ctx.r11.s64 + -21540;
	// bl 0x82199418
	ctx.lr = 0x82176BC8;
	sub_82199418(ctx, base);
	// bl 0x82188738
	ctx.lr = 0x82176BCC;
	sub_82188738(ctx, base);
	// bl 0x821993d0
	ctx.lr = 0x82176BD0;
	sub_821993D0(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176BF0"))) PPC_WEAK_FUNC(sub_82176BF0);
PPC_FUNC_IMPL(__imp__sub_82176BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82176ab8
	sub_82176AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176C04"))) PPC_WEAK_FUNC(sub_82176C04);
PPC_FUNC_IMPL(__imp__sub_82176C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176C08"))) PPC_WEAK_FUNC(sub_82176C08);
PPC_FUNC_IMPL(__imp__sub_82176C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82176c1c
	if (!ctx.cr6.eq) goto loc_82176C1C;
	// b 0x82176b30
	sub_82176B30(ctx, base);
	return;
loc_82176C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176C24"))) PPC_WEAK_FUNC(sub_82176C24);
PPC_FUNC_IMPL(__imp__sub_82176C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176C28"))) PPC_WEAK_FUNC(sub_82176C28);
PPC_FUNC_IMPL(__imp__sub_82176C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21448
	ctx.r9.s64 = ctx.r11.s64 + -21448;
	// addi r8,r10,-21456
	ctx.r8.s64 = ctx.r10.s64 + -21456;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x823c30b8
	ctx.lr = 0x82176C64;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82176C6C;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82176C74;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176C8C"))) PPC_WEAK_FUNC(sub_82176C8C);
PPC_FUNC_IMPL(__imp__sub_82176C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176C90"))) PPC_WEAK_FUNC(sub_82176C90);
PPC_FUNC_IMPL(__imp__sub_82176C90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82176d50
	sub_82176D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176C98"))) PPC_WEAK_FUNC(sub_82176C98);
PPC_FUNC_IMPL(__imp__sub_82176C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82176CB8;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x821859a0
	ctx.lr = 0x82176CCC;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21448
	ctx.r9.s64 = ctx.r11.s64 + -21448;
	// addi r8,r10,-21456
	ctx.r8.s64 = ctx.r10.s64 + -21456;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x82176CF0;
	sub_82182E90(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x823c34c0
	ctx.lr = 0x82176D14;
	sub_823C34C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r30.u64);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x8215c0b0
	ctx.lr = 0x82176D2C;
	sub_8215C0B0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82176D4C"))) PPC_WEAK_FUNC(sub_82176D4C);
PPC_FUNC_IMPL(__imp__sub_82176D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176D50"))) PPC_WEAK_FUNC(sub_82176D50);
PPC_FUNC_IMPL(__imp__sub_82176D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82176D58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21448
	ctx.r9.s64 = ctx.r11.s64 + -21448;
	// addi r8,r10,-21456
	ctx.r8.s64 = ctx.r10.s64 + -21456;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x823c30b8
	ctx.lr = 0x82176D88;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82176D90;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82176D98;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82176db4
	if (ctx.cr6.eq) goto loc_82176DB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82176DB0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82176DBC"))) PPC_WEAK_FUNC(sub_82176DBC);
PPC_FUNC_IMPL(__imp__sub_82176DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176DC0"))) PPC_WEAK_FUNC(sub_82176DC0);
PPC_FUNC_IMPL(__imp__sub_82176DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82176ddc
	if (!ctx.cr6.eq) goto loc_82176DDC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82176DDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176DE4"))) PPC_WEAK_FUNC(sub_82176DE4);
PPC_FUNC_IMPL(__imp__sub_82176DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176DE8"))) PPC_WEAK_FUNC(sub_82176DE8);
PPC_FUNC_IMPL(__imp__sub_82176DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82176e74
	if (ctx.cr6.eq) goto loc_82176E74;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82176e74
	if (ctx.cr6.eq) goto loc_82176E74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade28
	ctx.lr = 0x82176E28;
	sub_821ADE28(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82176E34;
	sub_821ADDC0(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82176E40;
	sub_821ADD20(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x82176E54;
	sub_821AD6A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82176E60;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82176E6C;
	sub_821AD498(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_82176E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176E8C"))) PPC_WEAK_FUNC(sub_82176E8C);
PPC_FUNC_IMPL(__imp__sub_82176E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176E90"))) PPC_WEAK_FUNC(sub_82176E90);
PPC_FUNC_IMPL(__imp__sub_82176E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82176ef4
	if (ctx.cr6.eq) goto loc_82176EF4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82176ef4
	if (ctx.cr6.eq) goto loc_82176EF4;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x82176ED4;
	sub_821AD6A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x821ad600
	ctx.lr = 0x82176EE0;
	sub_821AD600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x821ad498
	ctx.lr = 0x82176EEC;
	sub_821AD498(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82176EF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176F0C"))) PPC_WEAK_FUNC(sub_82176F0C);
PPC_FUNC_IMPL(__imp__sub_82176F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176F10"))) PPC_WEAK_FUNC(sub_82176F10);
PPC_FUNC_IMPL(__imp__sub_82176F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176F2C"))) PPC_WEAK_FUNC(sub_82176F2C);
PPC_FUNC_IMPL(__imp__sub_82176F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176F30"))) PPC_WEAK_FUNC(sub_82176F30);
PPC_FUNC_IMPL(__imp__sub_82176F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82088600
	ctx.lr = 0x82176F48;
	sub_82088600(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r11.u64);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x823c3410
	ctx.lr = 0x82176F60;
	sub_823C3410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176F74"))) PPC_WEAK_FUNC(sub_82176F74);
PPC_FUNC_IMPL(__imp__sub_82176F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176F78"))) PPC_WEAK_FUNC(sub_82176F78);
PPC_FUNC_IMPL(__imp__sub_82176F78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x823c3468
	sub_823C3468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176F8C"))) PPC_WEAK_FUNC(sub_82176F8C);
PPC_FUNC_IMPL(__imp__sub_82176F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176F90"))) PPC_WEAK_FUNC(sub_82176F90);
PPC_FUNC_IMPL(__imp__sub_82176F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176F98"))) PPC_WEAK_FUNC(sub_82176F98);
PPC_FUNC_IMPL(__imp__sub_82176F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176FA0"))) PPC_WEAK_FUNC(sub_82176FA0);
PPC_FUNC_IMPL(__imp__sub_82176FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82176c98
	ctx.lr = 0x82176FB8;
	sub_82176C98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21344
	ctx.r9.s64 = ctx.r11.s64 + -21344;
	// addi r8,r10,-21352
	ctx.r8.s64 = ctx.r10.s64 + -21352;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176FF0"))) PPC_WEAK_FUNC(sub_82176FF0);
PPC_FUNC_IMPL(__imp__sub_82176FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82176f78
	ctx.lr = 0x82177008;
	sub_82176F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217701C;
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

__attribute__((alias("__imp__sub_82177030"))) PPC_WEAK_FUNC(sub_82177030);
PPC_FUNC_IMPL(__imp__sub_82177030) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82177038
	sub_82177038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82177038"))) PPC_WEAK_FUNC(sub_82177038);
PPC_FUNC_IMPL(__imp__sub_82177038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21344
	ctx.r9.s64 = ctx.r11.s64 + -21344;
	// addi r8,r10,-21352
	ctx.r8.s64 = ctx.r10.s64 + -21352;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82176c28
	ctx.lr = 0x82177070;
	sub_82176C28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8217708c
	if (ctx.cr6.eq) goto loc_8217708C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82177088;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217708C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821770A4"))) PPC_WEAK_FUNC(sub_821770A4);
PPC_FUNC_IMPL(__imp__sub_821770A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821770A8"))) PPC_WEAK_FUNC(sub_821770A8);
PPC_FUNC_IMPL(__imp__sub_821770A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// bl 0x82176f30
	ctx.lr = 0x821770CC;
	sub_82176F30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821770E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821770F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82176f10
	ctx.lr = 0x821770FC;
	sub_82176F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177148
	if (ctx.cr6.eq) goto loc_82177148;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,41668
	ctx.r8.u64 = ctx.r11.u64 | 41668;
	// li r4,1186
	ctx.r4.s64 = 1186;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// bl 0x82106eb0
	ctx.lr = 0x82177124;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82177128;
	sub_821D38E8(ctx, base);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r7,41924
	ctx.r5.u64 = ctx.r7.u64 | 41924;
	// ori r4,r6,42180
	ctx.r4.u64 = ctx.r6.u64 | 42180;
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
loc_82177148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177160"))) PPC_WEAK_FUNC(sub_82177160);
PPC_FUNC_IMPL(__imp__sub_82177160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bne cr6,0x821771f4
	if (!ctx.cr6.eq) goto loc_821771F4;
	// bl 0x82176f78
	ctx.lr = 0x82177188;
	sub_82176F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217719C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82176f10
	ctx.lr = 0x821771A4;
	sub_82176F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821771f4
	if (ctx.cr6.eq) goto loc_821771F4;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,41668
	ctx.r8.u64 = ctx.r11.u64 | 41668;
	// ori r7,r9,41924
	ctx.r7.u64 = ctx.r9.u64 | 41924;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1187
	ctx.r4.s64 = 1187;
	// stwx r30,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r6,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x82106eb0
	ctx.lr = 0x821771E0;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821771E4;
	sub_821D38E8(ctx, base);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r3,r4,42180
	ctx.r3.u64 = ctx.r4.u64 | 42180;
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
loc_821771F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217720C"))) PPC_WEAK_FUNC(sub_8217720C);
PPC_FUNC_IMPL(__imp__sub_8217720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177210"))) PPC_WEAK_FUNC(sub_82177210);
PPC_FUNC_IMPL(__imp__sub_82177210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82177218;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176de8
	ctx.lr = 0x8217722C;
	sub_82176DE8(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-1736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217725c
	if (ctx.cr6.eq) goto loc_8217725C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217724C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217724c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217724C;
	// bl 0x821d1688
	ctx.lr = 0x8217725C;
	sub_821D1688(ctx, base);
loc_8217725C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x8217726C;
	sub_8216DB98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176f10
	ctx.lr = 0x82177274;
	sub_82176F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821772f0
	if (ctx.cr6.eq) goto loc_821772F0;
	// bl 0x820ed3d8
	ctx.lr = 0x82177284;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821772f0
	if (ctx.cr6.eq) goto loc_821772F0;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821772a8
	if (ctx.cr6.lt) goto loc_821772A8;
	// bne cr6,0x821772ac
	if (!ctx.cr6.eq) goto loc_821772AC;
	// li r5,20102
	ctx.r5.s64 = 20102;
	// b 0x821772ac
	goto loc_821772AC;
loc_821772A8:
	// li r5,20101
	ctx.r5.s64 = 20101;
loc_821772AC:
	// li r4,1189
	ctx.r4.s64 = 1189;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x821772B8;
	sub_82106F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176f98
	ctx.lr = 0x821772C0;
	sub_82176F98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r8,r10,42452
	ctx.r8.u64 = ctx.r10.u64 | 42452;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// li r4,408
	ctx.r4.s64 = 408;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// bl 0x8210a9b0
	ctx.lr = 0x821772F0;
	sub_8210A9B0(ctx, base);
loc_821772F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176e90
	ctx.lr = 0x821772F8;
	sub_82176E90(ctx, base);
	// lwz r3,-1736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217730c
	if (ctx.cr6.eq) goto loc_8217730C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d16c0
	ctx.lr = 0x8217730C;
	sub_821D16C0(ctx, base);
loc_8217730C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82177314"))) PPC_WEAK_FUNC(sub_82177314);
PPC_FUNC_IMPL(__imp__sub_82177314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177318"))) PPC_WEAK_FUNC(sub_82177318);
PPC_FUNC_IMPL(__imp__sub_82177318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82176f90
	ctx.lr = 0x82177334;
	sub_82176F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821773c0
	if (ctx.cr6.eq) goto loc_821773C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176f10
	ctx.lr = 0x82177344;
	sub_82176F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177364
	if (ctx.cr6.eq) goto loc_82177364;
	// li r4,1186
	ctx.r4.s64 = 1186;
	// bl 0x82106eb0
	ctx.lr = 0x82177358;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821773c0
	if (ctx.cr6.eq) goto loc_821773C0;
loc_82177364:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,41668
	ctx.r8.u64 = ctx.r11.u64 | 41668;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r9,41924
	ctx.r6.u64 = ctx.r9.u64 | 41924;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r5,r7,42180
	ctx.r5.u64 = ctx.r7.u64 | 42180;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1188
	ctx.r4.s64 = 1188;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r10,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u32);
	// bl 0x82106eb0
	ctx.lr = 0x821773A8;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821773AC;
	sub_821D38E8(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821773C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821773C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821773D8"))) PPC_WEAK_FUNC(sub_821773D8);
PPC_FUNC_IMPL(__imp__sub_821773D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82176f90
	ctx.lr = 0x821773F0;
	sub_82176F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82177438
	if (ctx.cr6.eq) goto loc_82177438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82176f10
	ctx.lr = 0x82177400;
	sub_82176F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217741c
	if (ctx.cr6.eq) goto loc_8217741C;
	// li r4,1187
	ctx.r4.s64 = 1187;
	// bl 0x82106eb0
	ctx.lr = 0x82177410;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82177438
	if (ctx.cr6.eq) goto loc_82177438;
loc_8217741C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82177438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82177438:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217744C"))) PPC_WEAK_FUNC(sub_8217744C);
PPC_FUNC_IMPL(__imp__sub_8217744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177450"))) PPC_WEAK_FUNC(sub_82177450);
PPC_FUNC_IMPL(__imp__sub_82177450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16676);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177464"))) PPC_WEAK_FUNC(sub_82177464);
PPC_FUNC_IMPL(__imp__sub_82177464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177468"))) PPC_WEAK_FUNC(sub_82177468);
PPC_FUNC_IMPL(__imp__sub_82177468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821774A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821774a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821774A0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822aa648
	ctx.lr = 0x821774B4;
	sub_822AA648(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// addi r10,r31,94
	ctx.r10.s64 = ctx.r31.s64 + 94;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_821774CC:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r30,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r30.u16);
	// sthu r30,8(r10)
	// bdnz 0x821774cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821774CC;
	// sth r11,8096(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8096, ctx.r11.u16);
	// li r9,100
	ctx.r9.s64 = 100;
	// sth r11,8100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8100, ctx.r11.u16);
	// addi r10,r31,8114
	ctx.r10.s64 = ctx.r31.s64 + 8114;
	// sth r30,8098(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8098, ctx.r30.u16);
	// sth r30,8102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8102, ctx.r30.u16);
	// sth r11,8104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8104, ctx.r11.u16);
	// sth r30,8106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8106, ctx.r30.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r11,8108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8108, ctx.r11.u16);
	// sth r30,8110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8110, ctx.r30.u16);
	// sth r11,8112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8112, ctx.r11.u16);
	// sth r30,8114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8114, ctx.r30.u16);
loc_82177514:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r11,4(r10)
	// bdnz 0x82177514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82177514;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r30.u32);
	// stw r30,8524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8524, ctx.r30.u32);
	// stw r11,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r11.u32);
	// stw r11,8528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8528, ctx.r11.u32);
	// stw r30,8532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8532, ctx.r30.u32);
	// stw r11,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r11.u32);
	// stw r30,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r30.u32);
	// stw r11,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r11.u32);
	// stw r30,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r30.u32);
	// stw r11,8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8552, ctx.r11.u32);
	// stw r30,8556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8556, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177568"))) PPC_WEAK_FUNC(sub_82177568);
PPC_FUNC_IMPL(__imp__sub_82177568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82177570;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82177588;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-21236
	ctx.r10.s64 = ctx.r11.s64 + -21236;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x821775c0
	if (ctx.cr6.eq) goto loc_821775C0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821775C0:
	// bl 0x821767c0
	ctx.lr = 0x821775C4;
	sub_821767C0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821775C8;
	sub_8215BD08(ctx, base);
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821775e8
	if (ctx.cr6.eq) goto loc_821775E8;
	// bl 0x82182e90
	ctx.lr = 0x821775DC;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x820ed338
	ctx.lr = 0x821775E8;
	sub_820ED338(ctx, base);
loc_821775E8:
	// bl 0x82183850
	ctx.lr = 0x821775EC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82177604
	if (ctx.cr6.eq) goto loc_82177604;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82177600;
	sub_82183448(ctx, base);
	// b 0x8217760c
	goto loc_8217760C;
loc_82177604:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8217760C;
	sub_821845A0(ctx, base);
loc_8217760C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177618
	if (ctx.cr6.eq) goto loc_82177618;
	// bl 0x823c14d8
	ctx.lr = 0x82177618;
	sub_823C14D8(ctx, base);
loc_82177618:
	// bl 0x82183850
	ctx.lr = 0x8217761C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82177634
	if (ctx.cr6.eq) goto loc_82177634;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82177630;
	sub_82183448(ctx, base);
	// b 0x8217763c
	goto loc_8217763C;
loc_82177634:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8217763C;
	sub_821845A0(ctx, base);
loc_8217763C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217764c
	if (ctx.cr6.eq) goto loc_8217764C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c1580
	ctx.lr = 0x8217764C;
	sub_823C1580(ctx, base);
loc_8217764C:
	// bl 0x82183850
	ctx.lr = 0x82177650;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82177668
	if (ctx.cr6.eq) goto loc_82177668;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82177664;
	sub_82183448(ctx, base);
	// b 0x82177670
	goto loc_82177670;
loc_82177668:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82177670;
	sub_821845A0(ctx, base);
loc_82177670:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177698
	if (ctx.cr6.eq) goto loc_82177698;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-8912
	ctx.r5.s64 = ctx.r11.s64 + -8912;
	// addi r4,r10,-21248
	ctx.r4.s64 = ctx.r10.s64 + -21248;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x823c6d70
	ctx.lr = 0x82177694;
	sub_823C6D70(ctx, base);
	// b 0x8217769c
	goto loc_8217769C;
loc_82177698:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8217769C:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820aec80
	ctx.lr = 0x821776A8;
	sub_820AEC80(ctx, base);
	// lwsync 
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,16676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16676, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821776C0"))) PPC_WEAK_FUNC(sub_821776C0);
PPC_FUNC_IMPL(__imp__sub_821776C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r10,r11,-21236
	ctx.r10.s64 = ctx.r11.s64 + -21236;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16676, ctx.r11.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177710
	if (ctx.cr6.eq) goto loc_82177710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82177710:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82177728
	if (ctx.cr6.eq) goto loc_82177728;
	// bl 0x820ed0f8
	ctx.lr = 0x82177728;
	sub_820ED0F8(ctx, base);
loc_82177728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82177730;
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

__attribute__((alias("__imp__sub_82177744"))) PPC_WEAK_FUNC(sub_82177744);
PPC_FUNC_IMPL(__imp__sub_82177744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177748"))) PPC_WEAK_FUNC(sub_82177748);
PPC_FUNC_IMPL(__imp__sub_82177748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82177750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8217775C;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82177764;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82177770;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82177774;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8217778c
	if (ctx.cr6.eq) goto loc_8217778C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x82177788;
	sub_82183448(ctx, base);
	// b 0x82177794
	goto loc_82177794;
loc_8217778C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82177794;
	sub_821845A0(ctx, base);
loc_82177794:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821777a4
	if (ctx.cr6.eq) goto loc_821777A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82177568
	ctx.lr = 0x821777A4;
	sub_82177568(ctx, base);
loc_821777A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821777AC;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821777B4"))) PPC_WEAK_FUNC(sub_821777B4);
PPC_FUNC_IMPL(__imp__sub_821777B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821777B8"))) PPC_WEAK_FUNC(sub_821777B8);
PPC_FUNC_IMPL(__imp__sub_821777B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821776c0
	ctx.lr = 0x821777D8;
	sub_821776C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821777f4
	if (ctx.cr6.eq) goto loc_821777F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821777F0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821777F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217780C"))) PPC_WEAK_FUNC(sub_8217780C);
PPC_FUNC_IMPL(__imp__sub_8217780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177810"))) PPC_WEAK_FUNC(sub_82177810);
PPC_FUNC_IMPL(__imp__sub_82177810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82177818;
	sub_8224877C(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82163ee8
	ctx.lr = 0x8217782C;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82248a40
	ctx.lr = 0x8217783C;
	sub_82248A40(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-1208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177868
	if (ctx.cr6.eq) goto loc_82177868;
	// lbz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821de190
	ctx.lr = 0x82177858;
	sub_821DE190(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de188
	ctx.lr = 0x82177860;
	sub_821DE188(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de178
	ctx.lr = 0x82177868;
	sub_821DE178(ctx, base);
loc_82177868:
	// bl 0x821142a0
	ctx.lr = 0x8217786C;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177940
	if (ctx.cr6.eq) goto loc_82177940;
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,163(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 163);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r6,161(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f0,-23044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23044);
	ctx.f0.f64 = double(temp.f32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
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
	// stfd f2,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// bl 0x821142a0
	ctx.lr = 0x821778E8;
	sub_821142A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82114430
	ctx.lr = 0x821778F4;
	sub_82114430(ctx, base);
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x821142a0
	ctx.lr = 0x82177904;
	sub_821142A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82114430
	ctx.lr = 0x82177910;
	sub_82114430(ctx, base);
	// fmuls f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x821142a0
	ctx.lr = 0x82177924;
	sub_821142A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82114430
	ctx.lr = 0x82177930;
	sub_82114430(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82177934;
	sub_821142A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82114430
	ctx.lr = 0x82177940;
	sub_82114430(ctx, base);
loc_82177940:
	// bl 0x8222eef8
	ctx.lr = 0x82177944;
	sub_8222EEF8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82177948;
	sub_82163EE8(ctx, base);
	// addi r3,r3,3348
	ctx.r3.s64 = ctx.r3.s64 + 3348;
	// bl 0x822336d8
	ctx.lr = 0x82177950;
	sub_822336D8(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x82177954;
	sub_82163DF0(ctx, base);
	// bl 0x82177468
	ctx.lr = 0x82177958;
	sub_82177468(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82177960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x82177968;
	sub_82163E58(ctx, base);
	// bl 0x82164060
	ctx.lr = 0x8217796C;
	sub_82164060(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// blt cr6,0x82177960
	if (ctx.cr6.lt) goto loc_82177960;
	// bl 0x82163ee8
	ctx.lr = 0x8217797C;
	sub_82163EE8(ctx, base);
	// addi r3,r3,3516
	ctx.r3.s64 = ctx.r3.s64 + 3516;
	// bl 0x82163ff8
	ctx.lr = 0x82177984;
	sub_82163FF8(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-8540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177b50
	if (ctx.cr6.eq) goto loc_82177B50;
	// bl 0x82165b88
	ctx.lr = 0x82177998;
	sub_82165B88(ctx, base);
	// lwz r25,-8540(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8540);
	// bl 0x82163df0
	ctx.lr = 0x821779A0;
	sub_82163DF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82177b50
	if (ctx.cr6.eq) goto loc_82177B50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177b50
	if (ctx.cr6.eq) goto loc_82177B50;
	// lwz r29,1664(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1664);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82177a28
	if (ctx.cr6.eq) goto loc_82177A28;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82177a28
	if (!ctx.cr6.gt) goto loc_82177A28;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_821779DC:
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r31.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r26,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r26.u16);
	// sth r26,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r26.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// sth r7,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// bl 0x82164d90
	ctx.lr = 0x82177A14;
	sub_82164D90(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821779dc
	if (ctx.cr6.lt) goto loc_821779DC;
loc_82177A28:
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r26,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r26.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82165138
	ctx.lr = 0x82177A3C;
	sub_82165138(ctx, base);
	// lwz r29,1668(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1668);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82177aac
	if (ctx.cr6.eq) goto loc_82177AAC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82177aac
	if (!ctx.cr6.gt) goto loc_82177AAC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82177A5C:
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// ble cr6,0x82177a88
	if (!ctx.cr6.gt) goto loc_82177A88;
	// li r11,9999
	ctx.r11.s64 = 9999;
loc_82177A88:
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82165138
	ctx.lr = 0x82177A98;
	sub_82165138(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82177a5c
	if (ctx.cr6.lt) goto loc_82177A5C;
loc_82177AAC:
	// lwz r29,1672(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1672);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82177b10
	if (ctx.cr6.eq) goto loc_82177B10;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82177b10
	if (!ctx.cr6.gt) goto loc_82177B10;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82177ACC:
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// sth r7,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// bl 0x82165260
	ctx.lr = 0x82177AFC;
	sub_82165260(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82177acc
	if (ctx.cr6.lt) goto loc_82177ACC;
loc_82177B10:
	// lwz r11,1660(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177b50
	if (ctx.cr6.eq) goto loc_82177B50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82163df0
	ctx.lr = 0x82177B28;
	sub_82163DF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82177b38
	if (!ctx.cr6.lt) goto loc_82177B38;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82177b4c
	goto loc_82177B4C;
loc_82177B38:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51612
	ctx.r11.u64 = ctx.r11.u64 | 51612;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82177b4c
	if (!ctx.cr6.gt) goto loc_82177B4C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82177B4C:
	// stw r31,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r31.u32);
loc_82177B50:
	// bl 0x82163dd0
	ctx.lr = 0x82177B54;
	sub_82163DD0(ctx, base);
	// addi r3,r3,5264
	ctx.r3.s64 = ctx.r3.s64 + 5264;
	// bl 0x82163f20
	ctx.lr = 0x82177B5C;
	sub_82163F20(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82177B70"))) PPC_WEAK_FUNC(sub_82177B70);
PPC_FUNC_IMPL(__imp__sub_82177B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82189760
	ctx.lr = 0x82177B88;
	sub_82189760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82177bb8
	if (!ctx.cr6.eq) goto loc_82177BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82177810
	ctx.lr = 0x82177B98;
	sub_82177810(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177bb8
	if (ctx.cr6.eq) goto loc_82177BB8;
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
	ctx.lr = 0x82177BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82177BB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177BCC"))) PPC_WEAK_FUNC(sub_82177BCC);
PPC_FUNC_IMPL(__imp__sub_82177BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177BD0"))) PPC_WEAK_FUNC(sub_82177BD0);
PPC_FUNC_IMPL(__imp__sub_82177BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177BE0"))) PPC_WEAK_FUNC(sub_82177BE0);
PPC_FUNC_IMPL(__imp__sub_82177BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16680);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177BEC"))) PPC_WEAK_FUNC(sub_82177BEC);
PPC_FUNC_IMPL(__imp__sub_82177BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177BF0"))) PPC_WEAK_FUNC(sub_82177BF0);
PPC_FUNC_IMPL(__imp__sub_82177BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21220
	ctx.r9.s64 = ctx.r11.s64 + -21220;
	// addi r8,r10,-21228
	ctx.r8.s64 = ctx.r10.s64 + -21228;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bl 0x8217bb20
	ctx.lr = 0x82177C24;
	sub_8217BB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217b940
	ctx.lr = 0x82177C2C;
	sub_8217B940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177C40"))) PPC_WEAK_FUNC(sub_82177C40);
PPC_FUNC_IMPL(__imp__sub_82177C40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82177cc8
	sub_82177CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82177C48"))) PPC_WEAK_FUNC(sub_82177C48);
PPC_FUNC_IMPL(__imp__sub_82177C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8217b8c0
	ctx.lr = 0x82177C6C;
	sub_8217B8C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-21220
	ctx.r9.s64 = ctx.r11.s64 + -21220;
	// addi r8,r10,-21228
	ctx.r8.s64 = ctx.r10.s64 + -21228;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// bl 0x8217bca0
	ctx.lr = 0x82177CA8;
	sub_8217BCA0(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82177CC8"))) PPC_WEAK_FUNC(sub_82177CC8);
PPC_FUNC_IMPL(__imp__sub_82177CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21220
	ctx.r9.s64 = ctx.r11.s64 + -21220;
	// addi r8,r10,-21228
	ctx.r8.s64 = ctx.r10.s64 + -21228;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8217bb20
	ctx.lr = 0x82177D04;
	sub_8217BB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217b940
	ctx.lr = 0x82177D0C;
	sub_8217B940(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82177d28
	if (ctx.cr6.eq) goto loc_82177D28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82177D24;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82177D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82177D40"))) PPC_WEAK_FUNC(sub_82177D40);
PPC_FUNC_IMPL(__imp__sub_82177D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82177D48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,16680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16680, ctx.r30.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// bge cr6,0x82177d84
	if (!ctx.cr6.lt) goto loc_82177D84;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
loc_82177D84:
	// bl 0x8215bd08
	ctx.lr = 0x82177D88;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820ef490
	ctx.lr = 0x82177D98;
	sub_820EF490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4c70
	ctx.lr = 0x82177DA0;
	sub_820E4C70(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bne cr6,0x82177db0
	if (!ctx.cr6.eq) goto loc_82177DB0;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82177DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82177DB8"))) PPC_WEAK_FUNC(sub_82177DB8);
PPC_FUNC_IMPL(__imp__sub_82177DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82177DC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r30,15472(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15472);
	// bgt cr6,0x82178134
	if (ctx.cr6.gt) goto loc_82178134;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82177e38
	// bdzf 4*cr6+eq,0x82177f5c
	// bdzf 4*cr6+eq,0x82177fec
	// bdzf 4*cr6+eq,0x82178054
	// bdzf 4*cr6+eq,0x821780c0
	// bne cr6,0x821780f0
	if (!ctx.cr6.eq) goto loc_821780F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179fa8
	ctx.lr = 0x82177E08;
	sub_82179FA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x82177e28
	if (ctx.cr6.eq) goto loc_82177E28;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177E28:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177E38:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82177e98
	if (!ctx.cr6.eq) goto loc_82177E98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82171100
	ctx.lr = 0x82177E50;
	sub_82171100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821780a8
	if (ctx.cr6.eq) goto loc_821780A8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82177e84
	if (!ctx.cr6.eq) goto loc_82177E84;
	// bl 0x82163728
	ctx.lr = 0x82177E68;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82177e84
	if (!ctx.cr6.eq) goto loc_82177E84;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163a30
	ctx.lr = 0x82177E7C;
	sub_82163A30(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82177E84:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177E98:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r29,3
	ctx.r29.s64 = 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82177ec8
	if (!ctx.cr6.eq) goto loc_82177EC8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177ec8
	if (ctx.cr6.eq) goto loc_82177EC8;
	// bl 0x821638c0
	ctx.lr = 0x82177EBC;
	sub_821638C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82178134
	if (!ctx.cr6.eq) goto loc_82178134;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_82177EC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821707d0
	ctx.lr = 0x82177ED0;
	sub_821707D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178134
	if (ctx.cr6.eq) goto loc_82178134;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82177f00
	if (!ctx.cr6.eq) goto loc_82177F00;
	// bl 0x82163728
	ctx.lr = 0x82177EE8;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82177f00
	if (!ctx.cr6.eq) goto loc_82177F00;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82177EF8;
	sub_821636D8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82177F00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821707d8
	ctx.lr = 0x82177F08;
	sub_821707D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82177f38
	if (ctx.cr6.eq) goto loc_82177F38;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82177f30
	if (ctx.cr6.eq) goto loc_82177F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177F30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170800
	ctx.lr = 0x82177F38;
	sub_82170800(ctx, base);
loc_82177F38:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x82177e28
	if (!ctx.cr6.eq) goto loc_82177E28;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177F5C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x82177f9c
	if (!ctx.cr6.eq) goto loc_82177F9C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24999
	ctx.r5.s64 = 24999;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177F9C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178134
	if (ctx.cr6.eq) goto loc_82178134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170800
	ctx.lr = 0x82177FB8;
	sub_82170800(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x82177e28
	if (!ctx.cr6.eq) goto loc_82177E28;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82177FEC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178024
	if (!ctx.cr6.eq) goto loc_82178024;
	// bl 0x8217bb70
	ctx.lr = 0x82178000;
	sub_8217BB70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821780a8
	if (ctx.cr6.eq) goto loc_821780A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170e58
	ctx.lr = 0x82178010;
	sub_82170E58(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82178024:
	// bl 0x8217bc90
	ctx.lr = 0x82178028;
	sub_8217BC90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178134
	if (ctx.cr6.eq) goto loc_82178134;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,16680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16680, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82178054:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x82178094
	if (!ctx.cr6.eq) goto loc_82178094;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24999
	ctx.r5.s64 = 24999;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82178094:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821780A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178134
	if (ctx.cr6.eq) goto loc_82178134;
loc_821780A8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821780C0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821780a8
	if (!ctx.cr6.eq) goto loc_821780A8;
	// bl 0x82163728
	ctx.lr = 0x821780D0;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178134
	if (ctx.cr6.eq) goto loc_82178134;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821780F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82178108
	if (!ctx.cr6.eq) goto loc_82178108;
	// bl 0x8215bd08
	ctx.lr = 0x82178100;
	sub_8215BD08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82178108:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217811c
	if (!ctx.cr6.eq) goto loc_8217811C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8217811C:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x8217b990
	ctx.lr = 0x8217812C;
	sub_8217B990(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82178134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8217813C"))) PPC_WEAK_FUNC(sub_8217813C);
PPC_FUNC_IMPL(__imp__sub_8217813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178140"))) PPC_WEAK_FUNC(sub_82178140);
PPC_FUNC_IMPL(__imp__sub_82178140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8217d548
	ctx.lr = 0x82178164;
	sub_8217D548(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8217d300
	ctx.lr = 0x8217816C;
	sub_8217D300(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x8217cfa0
	ctx.lr = 0x82178174;
	sub_8217CFA0(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8217c7e0
	ctx.lr = 0x8217817C;
	sub_8217C7E0(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x8217c680
	ctx.lr = 0x82178184;
	sub_8217C680(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x8217c3f0
	ctx.lr = 0x8217818C;
	sub_8217C3F0(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x8217c070
	ctx.lr = 0x82178194;
	sub_8217C070(ctx, base);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x8217bd68
	ctx.lr = 0x8217819C;
	sub_8217BD68(ctx, base);
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

__attribute__((alias("__imp__sub_821781B4"))) PPC_WEAK_FUNC(sub_821781B4);
PPC_FUNC_IMPL(__imp__sub_821781B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821781B8"))) PPC_WEAK_FUNC(sub_821781B8);
PPC_FUNC_IMPL(__imp__sub_821781B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821781d4
	if (ctx.cr6.eq) goto loc_821781D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821781D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821781DC"))) PPC_WEAK_FUNC(sub_821781DC);
PPC_FUNC_IMPL(__imp__sub_821781DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821781E0"))) PPC_WEAK_FUNC(sub_821781E0);
PPC_FUNC_IMPL(__imp__sub_821781E0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178220
	if (ctx.cr6.eq) goto loc_82178220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82178220:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_8217823C"))) PPC_WEAK_FUNC(sub_8217823C);
PPC_FUNC_IMPL(__imp__sub_8217823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178240"))) PPC_WEAK_FUNC(sub_82178240);
PPC_FUNC_IMPL(__imp__sub_82178240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178250
	if (ctx.cr6.eq) goto loc_82178250;
	// b 0x82179bc8
	sub_82179BC8(ctx, base);
	return;
loc_82178250:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178258"))) PPC_WEAK_FUNC(sub_82178258);
PPC_FUNC_IMPL(__imp__sub_82178258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d608
	ctx.lr = 0x82178284;
	sub_8217D608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821782ac
	if (!ctx.cr6.eq) goto loc_821782AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x82178298;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821782ac
	if (ctx.cr6.eq) goto loc_821782AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821782b0
	goto loc_821782B0;
loc_821782AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821782B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821782C8"))) PPC_WEAK_FUNC(sub_821782C8);
PPC_FUNC_IMPL(__imp__sub_821782C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217830c
	if (!ctx.cr6.eq) goto loc_8217830C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x821782F8;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217830c
	if (ctx.cr6.eq) goto loc_8217830C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82178310
	goto loc_82178310;
loc_8217830C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178328"))) PPC_WEAK_FUNC(sub_82178328);
PPC_FUNC_IMPL(__imp__sub_82178328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,292
	ctx.r30.s64 = ctx.r3.s64 + 292;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217836c
	if (!ctx.cr6.eq) goto loc_8217836C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x82178358;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217836c
	if (ctx.cr6.eq) goto loc_8217836C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82178370
	goto loc_82178370;
loc_8217836C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178370:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178388"))) PPC_WEAK_FUNC(sub_82178388);
PPC_FUNC_IMPL(__imp__sub_82178388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,392
	ctx.r30.s64 = ctx.r3.s64 + 392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x821783AC;
	sub_82156F00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821783d4
	if (!ctx.cr6.eq) goto loc_821783D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x821783C0;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821783d4
	if (ctx.cr6.eq) goto loc_821783D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821783d8
	goto loc_821783D8;
loc_821783D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821783D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821783F0"))) PPC_WEAK_FUNC(sub_821783F0);
PPC_FUNC_IMPL(__imp__sub_821783F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,440
	ctx.r30.s64 = ctx.r3.s64 + 440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217c158
	ctx.lr = 0x82178414;
	sub_8217C158(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217843c
	if (!ctx.cr6.eq) goto loc_8217843C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x82178428;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217843c
	if (ctx.cr6.eq) goto loc_8217843C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82178440
	goto loc_82178440;
loc_8217843C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178458"))) PPC_WEAK_FUNC(sub_82178458);
PPC_FUNC_IMPL(__imp__sub_82178458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,476
	ctx.r30.s64 = ctx.r3.s64 + 476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217bdc0
	ctx.lr = 0x8217847C;
	sub_8217BDC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821784a4
	if (!ctx.cr6.eq) goto loc_821784A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179cb0
	ctx.lr = 0x82178490;
	sub_82179CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821784a4
	if (ctx.cr6.eq) goto loc_821784A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821784a8
	goto loc_821784A8;
loc_821784A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821784A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821784C0"))) PPC_WEAK_FUNC(sub_821784C0);
PPC_FUNC_IMPL(__imp__sub_821784C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178504
	if (ctx.cr6.eq) goto loc_82178504;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82178504
	if (ctx.cr6.eq) goto loc_82178504;
	// bl 0x82188710
	ctx.lr = 0x821784F8;
	sub_82188710(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82189ab8
	ctx.lr = 0x82178504;
	sub_82189AB8(ctx, base);
loc_82178504:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217851c
	if (ctx.cr6.eq) goto loc_8217851C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82178518;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8217851C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178534"))) PPC_WEAK_FUNC(sub_82178534);
PPC_FUNC_IMPL(__imp__sub_82178534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178538"))) PPC_WEAK_FUNC(sub_82178538);
PPC_FUNC_IMPL(__imp__sub_82178538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8217d930
	ctx.lr = 0x8217856C;
	sub_8217D930(ctx, base);
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

__attribute__((alias("__imp__sub_82178584"))) PPC_WEAK_FUNC(sub_82178584);
PPC_FUNC_IMPL(__imp__sub_82178584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178588"))) PPC_WEAK_FUNC(sub_82178588);
PPC_FUNC_IMPL(__imp__sub_82178588) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8217dda0
	sub_8217DDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82178590"))) PPC_WEAK_FUNC(sub_82178590);
PPC_FUNC_IMPL(__imp__sub_82178590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82178598;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8217da58
	ctx.lr = 0x821785B0;
	sub_8217DA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821785c4
	if (!ctx.cr6.eq) goto loc_821785C4;
loc_821785B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821785C4:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821785b8
	if (ctx.cr6.lt) goto loc_821785B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d998
	ctx.lr = 0x821785DC;
	sub_8217D998(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821785E8"))) PPC_WEAK_FUNC(sub_821785E8);
PPC_FUNC_IMPL(__imp__sub_821785E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_821785F8"))) PPC_WEAK_FUNC(sub_821785F8);
PPC_FUNC_IMPL(__imp__sub_821785F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82178600;
	sub_82248788(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217862c
	if (!ctx.cr6.eq) goto loc_8217862C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217862C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821786a4
	if (!ctx.cr6.gt) goto loc_821786A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82178654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8217865C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217865c
	if (!ctx.cr6.eq) goto loc_8217865C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82178688
	if (ctx.cr6.lt) goto loc_82178688;
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// b 0x8217868c
	goto loc_8217868C;
loc_82178688:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8217868C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x8217869C;
	sub_821847A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_821786A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821786B0"))) PPC_WEAK_FUNC(sub_821786B0);
PPC_FUNC_IMPL(__imp__sub_821786B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821786B8"))) PPC_WEAK_FUNC(sub_821786B8);
PPC_FUNC_IMPL(__imp__sub_821786B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82179868
	sub_82179868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821786C0"))) PPC_WEAK_FUNC(sub_821786C0);
PPC_FUNC_IMPL(__imp__sub_821786C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8217d9f8
	sub_8217D9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821786C8"))) PPC_WEAK_FUNC(sub_821786C8);
PPC_FUNC_IMPL(__imp__sub_821786C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821786D0;
	sub_82248770(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82178874
	if (ctx.cr6.eq) goto loc_82178874;
	// bl 0x82183078
	ctx.lr = 0x821786EC;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821786F8;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82178718
	if (!ctx.cr6.eq) goto loc_82178718;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,-21168
	ctx.r6.s64 = ctx.r11.s64 + -21168;
	// b 0x82178720
	goto loc_82178720;
loc_82178718:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,-21188
	ctx.r6.s64 = ctx.r11.s64 + -21188;
loc_82178720:
	// bl 0x821785f8
	ctx.lr = 0x82178724;
	sub_821785F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218f520
	ctx.lr = 0x82178734;
	sub_8218F520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217886c
	if (ctx.cr6.eq) goto loc_8217886C;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218f128
	ctx.lr = 0x8217874C;
	sub_8218F128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217886c
	if (ctx.cr6.eq) goto loc_8217886C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218f468
	ctx.lr = 0x82178760;
	sub_8218F468(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r29,r11,0,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184710
	ctx.lr = 0x82178778;
	sub_82184710(ctx, base);
	// addi r10,r29,2047
	ctx.r10.s64 = ctx.r29.s64 + 2047;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r10,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218f248
	ctx.lr = 0x82178790;
	sub_8218F248(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218f310
	ctx.lr = 0x82178798;
	sub_8218F310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r24,r11,4393
	ctx.r24.s64 = ctx.r11.s64 + 4393;
loc_821787B4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82178840
	if (!ctx.cr6.eq) goto loc_82178840;
	// subf. r29,r31,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8217882c
	if (ctx.cr0.eq) goto loc_8217882C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x8217dd98
	ctx.lr = 0x821787D8;
	sub_8217DD98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821787f8
	if (ctx.cr6.eq) goto loc_821787F8;
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821785f8
	ctx.lr = 0x821787F4;
	sub_821785F8(ctx, base);
	// b 0x82178808
	goto loc_82178808;
loc_821787F8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821785f8
	ctx.lr = 0x82178804;
	sub_821785F8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82178808:
	// bl 0x82188738
	ctx.lr = 0x8217880C;
	sub_82188738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x821992d0
	ctx.lr = 0x8217881C;
	sub_821992D0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82178828
	if (!ctx.cr6.eq) goto loc_82178828;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
loc_82178828:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8217882C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82178858
	if (ctx.cr6.eq) goto loc_82178858;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82178840:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x821787b4
	goto loc_821787B4;
loc_82178858:
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82178880
	if (!ctx.cr6.eq) goto loc_82178880;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821784c0
	ctx.lr = 0x8217886C;
	sub_821784C0(ctx, base);
loc_8217886C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x82178874;
	sub_821837D0(ctx, base);
loc_82178874:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82178880:
	// bl 0x82189ab8
	ctx.lr = 0x82178884;
	sub_82189AB8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217888C;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82178898"))) PPC_WEAK_FUNC(sub_82178898);
PPC_FUNC_IMPL(__imp__sub_82178898) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821788c0
	if (!ctx.cr6.gt) goto loc_821788C0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x821786c8
	ctx.lr = 0x821788C0;
	sub_821786C8(ctx, base);
loc_821788C0:
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

__attribute__((alias("__imp__sub_821788D4"))) PPC_WEAK_FUNC(sub_821788D4);
PPC_FUNC_IMPL(__imp__sub_821788D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821788D8"))) PPC_WEAK_FUNC(sub_821788D8);
PPC_FUNC_IMPL(__imp__sub_821788D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x821784c0
	sub_821784C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821788EC"))) PPC_WEAK_FUNC(sub_821788EC);
PPC_FUNC_IMPL(__imp__sub_821788EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821788F0"))) PPC_WEAK_FUNC(sub_821788F0);
PPC_FUNC_IMPL(__imp__sub_821788F0) {
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

__attribute__((alias("__imp__sub_82178908"))) PPC_WEAK_FUNC(sub_82178908);
PPC_FUNC_IMPL(__imp__sub_82178908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178930
	if (ctx.cr6.eq) goto loc_82178930;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82178930;
	sub_82183E40(ctx, base);
loc_82178930:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82178954"))) PPC_WEAK_FUNC(sub_82178954);
PPC_FUNC_IMPL(__imp__sub_82178954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178958"))) PPC_WEAK_FUNC(sub_82178958);
PPC_FUNC_IMPL(__imp__sub_82178958) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82178974:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821789a0
	if (!ctx.cr0.eq) goto loc_821789A0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821789a0
	if (!ctx.cr0.eq) goto loc_821789A0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821789b0
	if (ctx.cr0.eq) goto loc_821789B0;
loc_821789A0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bgt 0x82178974
	if (ctx.cr0.gt) goto loc_82178974;
	// blr 
	return;
loc_821789B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821789B8"))) PPC_WEAK_FUNC(sub_821789B8);
PPC_FUNC_IMPL(__imp__sub_821789B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821789C0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821789fc
	if (!ctx.cr6.gt) goto loc_821789FC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821789f0
	if (ctx.cr6.eq) goto loc_821789F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821789F0;
	sub_82183E40(ctx, base);
loc_821789F0:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
loc_821789FC:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,32
	ctx.r29.s64 = 32;
loc_82178A08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178a1c
	if (ctx.cr6.eq) goto loc_82178A1C;
	// bl 0x821786b8
	ctx.lr = 0x82178A18;
	sub_821786B8(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82178A1C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82178a08
	if (!ctx.cr0.eq) goto loc_82178A08;
	// bl 0x82183078
	ctx.lr = 0x82178A2C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82178A38;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82178a84
	if (!ctx.cr6.gt) goto loc_82178A84;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r31,r30,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82178a58
	if (!ctx.cr6.gt) goto loc_82178A58;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82178A58:
	// bl 0x82183850
	ctx.lr = 0x82178A5C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82178a74
	if (ctx.cr6.eq) goto loc_82178A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82178A70;
	sub_82183448(ctx, base);
	// b 0x82178a80
	goto loc_82178A80;
loc_82178A74:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82178A80;
	sub_821845A0(ctx, base);
loc_82178A80:
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
loc_82178A84:
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// bl 0x821837d0
	ctx.lr = 0x82178A94;
	sub_821837D0(ctx, base);
	// li r23,32
	ctx.r23.s64 = 32;
loc_82178A98:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178c5c
	if (ctx.cr6.eq) goto loc_82178C5C;
	// bl 0x821786b8
	ctx.lr = 0x82178AA8;
	sub_821786B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82178c5c
	if (!ctx.cr6.gt) goto loc_82178C5C;
loc_82178AB8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821786c0
	ctx.lr = 0x82178AC4;
	sub_821786C0(ctx, base);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// bgt cr6,0x82178c50
	if (ctx.cr6.gt) goto loc_82178C50;
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29952
	ctx.r12.s64 = ctx.r12.s64 + -29952;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-29884(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29884);
	// lwz r16,-29796(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29796);
	// lwz r16,-29820(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29820);
	// lwz r16,-29832(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29832);
	// lwz r16,-29808(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29808);
	// lwz r16,-29808(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29808);
	// lwz r16,-29872(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29872);
	// lwz r16,-29784(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29784);
	// lwz r16,-29616(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29616);
	// lwz r16,-29772(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29772);
	// lwz r16,-29884(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29884);
	// lwz r16,-29796(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29796);
	// lwz r16,-29820(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29820);
	// lwz r16,-29832(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29832);
	// lwz r16,-29808(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29808);
	// lwz r16,-29772(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29772);
	// lwz r16,-29872(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29872);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82178bbc
	goto loc_82178BBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e028
	ctx.lr = 0x82178B5C;
	sub_8217E028(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,7
	ctx.r31.s64 = 7;
	// bl 0x8217e028
	ctx.lr = 0x82178B70;
	sub_8217E028(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82178bc8
	goto loc_82178BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82178bbc
	goto loc_82178BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82178bbc
	goto loc_82178BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82178bbc
	goto loc_82178BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82178bbc
	goto loc_82178BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82178bbc
	goto loc_82178BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,10
	ctx.r31.s64 = 10;
loc_82178BBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8217e028
	ctx.lr = 0x82178BC4;
	sub_8217E028(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82178BC8:
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ble cr6,0x82178c10
	if (!ctx.cr6.gt) goto loc_82178C10;
loc_82178BE0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf. r5,r6,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82178c04
	if (!ctx.cr0.eq) goto loc_82178C04;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82178c04
	if (!ctx.cr0.eq) goto loc_82178C04;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82178c70
	if (ctx.cr0.eq) goto loc_82178C70;
loc_82178C04:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bgt 0x82178be0
	if (ctx.cr0.gt) goto loc_82178BE0;
loc_82178C10:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82178c50
	if (!ctx.cr6.lt) goto loc_82178C50;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r31,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r31.u32);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r29.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r6.u32);
loc_82178C50:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82178ab8
	if (ctx.cr6.lt) goto loc_82178AB8;
loc_82178C5C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82178a98
	if (!ctx.cr0.eq) goto loc_82178A98;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82178C70:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82178c50
	if (!ctx.cr6.lt) goto loc_82178C50;
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// b 0x82178c50
	goto loc_82178C50;
}

__attribute__((alias("__imp__sub_82178C84"))) PPC_WEAK_FUNC(sub_82178C84);
PPC_FUNC_IMPL(__imp__sub_82178C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178C88"))) PPC_WEAK_FUNC(sub_82178C88);
PPC_FUNC_IMPL(__imp__sub_82178C88) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82178958
	ctx.lr = 0x82178CB0;
	sub_82178958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178cc8
	if (ctx.cr6.eq) goto loc_82178CC8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82178ccc
	if (ctx.cr6.eq) goto loc_82178CCC;
loc_82178CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178CDC"))) PPC_WEAK_FUNC(sub_82178CDC);
PPC_FUNC_IMPL(__imp__sub_82178CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178CE0"))) PPC_WEAK_FUNC(sub_82178CE0);
PPC_FUNC_IMPL(__imp__sub_82178CE0) {
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
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82178958
	ctx.lr = 0x82178D08;
	sub_82178958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178d20
	if (ctx.cr6.eq) goto loc_82178D20;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82178d24
	if (ctx.cr6.eq) goto loc_82178D24;
loc_82178D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178D34"))) PPC_WEAK_FUNC(sub_82178D34);
PPC_FUNC_IMPL(__imp__sub_82178D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178D38"))) PPC_WEAK_FUNC(sub_82178D38);
PPC_FUNC_IMPL(__imp__sub_82178D38) {
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
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82178958
	ctx.lr = 0x82178D60;
	sub_82178958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178d78
	if (ctx.cr6.eq) goto loc_82178D78;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178d7c
	if (!ctx.cr6.eq) goto loc_82178D7C;
loc_82178D78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178D7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178D8C"))) PPC_WEAK_FUNC(sub_82178D8C);
PPC_FUNC_IMPL(__imp__sub_82178D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178D90"))) PPC_WEAK_FUNC(sub_82178D90);
PPC_FUNC_IMPL(__imp__sub_82178D90) {
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
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82178958
	ctx.lr = 0x82178DB8;
	sub_82178958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178dd0
	if (ctx.cr6.eq) goto loc_82178DD0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82178dd4
	if (ctx.cr6.eq) goto loc_82178DD4;
loc_82178DD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178DD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178DE4"))) PPC_WEAK_FUNC(sub_82178DE4);
PPC_FUNC_IMPL(__imp__sub_82178DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178DE8"))) PPC_WEAK_FUNC(sub_82178DE8);
PPC_FUNC_IMPL(__imp__sub_82178DE8) {
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
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82178958
	ctx.lr = 0x82178E10;
	sub_82178958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178e28
	if (ctx.cr6.eq) goto loc_82178E28;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178e2c
	if (!ctx.cr6.eq) goto loc_82178E2C;
loc_82178E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178E3C"))) PPC_WEAK_FUNC(sub_82178E3C);
PPC_FUNC_IMPL(__imp__sub_82178E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178E40"))) PPC_WEAK_FUNC(sub_82178E40);
PPC_FUNC_IMPL(__imp__sub_82178E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82178E48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,15472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// bl 0x821711d0
	ctx.lr = 0x82178E60;
	sub_821711D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r31,3516
	ctx.r31.s64 = ctx.r31.s64 + 3516;
loc_82178E68:
	// lwz r3,15472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82171270
	ctx.lr = 0x82178E74;
	sub_82171270(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r3,15472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
	// bl 0x82170860
	ctx.lr = 0x82178E8C;
	sub_82170860(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82178ebc
	if (ctx.cr6.gt) goto loc_82178EBC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82178eb0
	if (ctx.cr6.eq) goto loc_82178EB0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,7540
	ctx.r31.s64 = ctx.r31.s64 + 7540;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82178e68
	if (ctx.cr6.lt) goto loc_82178E68;
loc_82178EB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82178EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82178EC8"))) PPC_WEAK_FUNC(sub_82178EC8);
PPC_FUNC_IMPL(__imp__sub_82178EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82178ED0;
	sub_82248780(ctx, base);
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
	// beq cr6,0x82178fbc
	if (ctx.cr6.eq) goto loc_82178FBC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r26,r11,7968
	ctx.r26.u64 = ctx.r11.u64 | 7968;
loc_82178EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231060
	ctx.lr = 0x82178EF8;
	sub_82231060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82178f10
	if (!ctx.cr6.eq) goto loc_82178F10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230c20
	ctx.lr = 0x82178F08;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178fa4
	if (ctx.cr6.eq) goto loc_82178FA4;
loc_82178F10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82165300
	ctx.lr = 0x82178F18;
	sub_82165300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821652f8
	ctx.lr = 0x82178F24;
	sub_821652F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230df8
	ctx.lr = 0x82178F30;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82178f54
	if (ctx.cr6.lt) goto loc_82178F54;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82178f54
	if (!ctx.cr6.lt) goto loc_82178F54;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r3,420
	ctx.r11.s64 = ctx.r3.s64 * 420;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82178f58
	goto loc_82178F58;
loc_82178F54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82178F58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230df8
	ctx.lr = 0x82178F60;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82178f84
	if (ctx.cr6.lt) goto loc_82178F84;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82178f84
	if (!ctx.cr6.lt) goto loc_82178F84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82178f88
	goto loc_82178F88;
loc_82178F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82178F88:
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82248a40
	ctx.lr = 0x82178F94;
	sub_82248A40(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82178FA4;
	sub_82248A40(ctx, base);
loc_82178FA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,225
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 225, ctx.xer);
	// blt cr6,0x82178ef0
	if (ctx.cr6.lt) goto loc_82178EF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82178FBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82178FC4"))) PPC_WEAK_FUNC(sub_82178FC4);
PPC_FUNC_IMPL(__imp__sub_82178FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178FC8"))) PPC_WEAK_FUNC(sub_82178FC8);
PPC_FUNC_IMPL(__imp__sub_82178FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82178FD0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821790bc
	if (ctx.cr6.eq) goto loc_821790BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r26,r11,7968
	ctx.r26.u64 = ctx.r11.u64 | 7968;
loc_82178FF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231060
	ctx.lr = 0x82178FF8;
	sub_82231060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82179010
	if (!ctx.cr6.eq) goto loc_82179010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230c20
	ctx.lr = 0x82179008;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821790a4
	if (ctx.cr6.eq) goto loc_821790A4;
loc_82179010:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82165300
	ctx.lr = 0x82179018;
	sub_82165300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821652f8
	ctx.lr = 0x82179024;
	sub_821652F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230df8
	ctx.lr = 0x82179030;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82179054
	if (ctx.cr6.lt) goto loc_82179054;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82179054
	if (!ctx.cr6.lt) goto loc_82179054;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r3,420
	ctx.r11.s64 = ctx.r3.s64 * 420;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82179058
	goto loc_82179058;
loc_82179054:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82179058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230df8
	ctx.lr = 0x82179060;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82179084
	if (ctx.cr6.lt) goto loc_82179084;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82179084
	if (!ctx.cr6.lt) goto loc_82179084;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82179088
	goto loc_82179088;
loc_82179084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82179088:
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82248a40
	ctx.lr = 0x82179094;
	sub_82248A40(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x821790A4;
	sub_82248A40(ctx, base);
loc_821790A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,225
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 225, ctx.xer);
	// blt cr6,0x82178ff0
	if (ctx.cr6.lt) goto loc_82178FF0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821790BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821790C4"))) PPC_WEAK_FUNC(sub_821790C4);
PPC_FUNC_IMPL(__imp__sub_821790C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821790C8"))) PPC_WEAK_FUNC(sub_821790C8);
PPC_FUNC_IMPL(__imp__sub_821790C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821790D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821791b8
	if (ctx.cr6.eq) goto loc_821791B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821791b8
	if (ctx.cr6.eq) goto loc_821791B8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r27,r11,7968
	ctx.r27.u64 = ctx.r11.u64 | 7968;
loc_821790FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82231060
	ctx.lr = 0x82179104;
	sub_82231060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217911c
	if (!ctx.cr6.eq) goto loc_8217911C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c20
	ctx.lr = 0x82179114;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821791ac
	if (ctx.cr6.eq) goto loc_821791AC;
loc_8217911C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230df8
	ctx.lr = 0x82179124;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82179148
	if (ctx.cr6.lt) goto loc_82179148;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82179148
	if (!ctx.cr6.lt) goto loc_82179148;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r10,r3,420
	ctx.r10.s64 = ctx.r3.s64 * 420;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x8217914c
	goto loc_8217914C;
loc_82179148:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8217914C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230df8
	ctx.lr = 0x82179154;
	sub_82230DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82179178
	if (ctx.cr6.lt) goto loc_82179178;
	// cmpwi cr6,r3,175
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 175, ctx.xer);
	// bge cr6,0x82179178
	if (!ctx.cr6.lt) goto loc_82179178;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x8217917c
	goto loc_8217917C;
loc_82179178:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217917C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82165300
	ctx.lr = 0x82179184;
	sub_82165300(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821652f8
	ctx.lr = 0x82179190;
	sub_821652F8(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x8217919C;
	sub_82248A40(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248a40
	ctx.lr = 0x821791AC;
	sub_82248A40(ctx, base);
loc_821791AC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,225
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 225, ctx.xer);
	// blt cr6,0x821790fc
	if (ctx.cr6.lt) goto loc_821790FC;
loc_821791B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821791C0"))) PPC_WEAK_FUNC(sub_821791C0);
PPC_FUNC_IMPL(__imp__sub_821791C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r3,15472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	// bl 0x821711d0
	ctx.lr = 0x821791E0;
	sub_821711D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821791E8;
	sub_82163EE8(ctx, base);
	// stw r30,3516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3516, ctx.r30.u32);
	// lwz r3,15472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	// bl 0x82170860
	ctx.lr = 0x821791F4;
	sub_82170860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821791FC;
	sub_82163EE8(ctx, base);
	// stw r31,3520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3520, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82179218"))) PPC_WEAK_FUNC(sub_82179218);
PPC_FUNC_IMPL(__imp__sub_82179218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82179220;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82179270
	if (ctx.cr6.eq) goto loc_82179270;
	// bl 0x82163ee8
	ctx.lr = 0x82179238;
	sub_82163EE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821711d0
	ctx.lr = 0x82179244;
	sub_821711D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170860
	ctx.lr = 0x82179250;
	sub_82170860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// bl 0x82171270
	ctx.lr = 0x82179260;
	sub_82171270(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82179270
	if (!ctx.cr6.eq) goto loc_82179270;
	// stw r29,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r29.u32);
	// stw r28,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r28.u32);
loc_82179270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82179278"))) PPC_WEAK_FUNC(sub_82179278);
PPC_FUNC_IMPL(__imp__sub_82179278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82179294;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821792A0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821792A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821792c0
	if (ctx.cr6.eq) goto loc_821792C0;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,31068
	ctx.r3.u64 = ctx.r3.u64 | 31068;
	// bl 0x82183448
	ctx.lr = 0x821792BC;
	sub_82183448(ctx, base);
	// b 0x821792c8
	goto loc_821792C8;
loc_821792C0:
	// li r3,6038
	ctx.r3.s64 = 6038;
	// bl 0x821845a0
	ctx.lr = 0x821792C8;
	sub_821845A0(ctx, base);
loc_821792C8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821792dc
	if (ctx.cr6.eq) goto loc_821792DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821792DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821792E4;
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

__attribute__((alias("__imp__sub_821792FC"))) PPC_WEAK_FUNC(sub_821792FC);
PPC_FUNC_IMPL(__imp__sub_821792FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179300"))) PPC_WEAK_FUNC(sub_82179300);
PPC_FUNC_IMPL(__imp__sub_82179300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82179328
	if (ctx.cr6.eq) goto loc_82179328;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82179328;
	sub_82183E40(ctx, base);
loc_82179328:
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

__attribute__((alias("__imp__sub_82179344"))) PPC_WEAK_FUNC(sub_82179344);
PPC_FUNC_IMPL(__imp__sub_82179344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179348"))) PPC_WEAK_FUNC(sub_82179348);
PPC_FUNC_IMPL(__imp__sub_82179348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82179364;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x821837d0
	ctx.lr = 0x82179370;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82179374;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82179390
	if (ctx.cr6.eq) goto loc_82179390;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,31068
	ctx.r3.u64 = ctx.r3.u64 | 31068;
	// bl 0x82183448
	ctx.lr = 0x8217938C;
	sub_82183448(ctx, base);
	// b 0x82179398
	goto loc_82179398;
loc_82179390:
	// li r3,6038
	ctx.r3.s64 = 6038;
	// bl 0x821845a0
	ctx.lr = 0x82179398;
	sub_821845A0(ctx, base);
loc_82179398:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821793ac
	if (ctx.cr6.eq) goto loc_821793AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821793AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821793B4;
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

__attribute__((alias("__imp__sub_821793CC"))) PPC_WEAK_FUNC(sub_821793CC);
PPC_FUNC_IMPL(__imp__sub_821793CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821793D0"))) PPC_WEAK_FUNC(sub_821793D0);
PPC_FUNC_IMPL(__imp__sub_821793D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821793f8
	if (ctx.cr6.eq) goto loc_821793F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821793F8;
	sub_82183E40(ctx, base);
loc_821793F8:
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

__attribute__((alias("__imp__sub_82179414"))) PPC_WEAK_FUNC(sub_82179414);
PPC_FUNC_IMPL(__imp__sub_82179414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179418"))) PPC_WEAK_FUNC(sub_82179418);
PPC_FUNC_IMPL(__imp__sub_82179418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82179444
	if (ctx.cr6.eq) goto loc_82179444;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82179444;
	sub_82183E40(ctx, base);
loc_82179444:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82179460
	if (ctx.cr6.eq) goto loc_82179460;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82179460;
	sub_82183E40(ctx, base);
loc_82179460:
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

__attribute__((alias("__imp__sub_8217947C"))) PPC_WEAK_FUNC(sub_8217947C);
PPC_FUNC_IMPL(__imp__sub_8217947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

