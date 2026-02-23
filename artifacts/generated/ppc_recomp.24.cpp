#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82150870"))) PPC_WEAK_FUNC(sub_82150870);
PPC_FUNC_IMPL(__imp__sub_82150870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82150878;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82150898;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r28,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r28.u32);
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-27120
	ctx.r10.s64 = ctx.r10.s64 + -27120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-27128
	ctx.r9.s64 = ctx.r9.s64 + -27128;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156ef8
	ctx.lr = 0x821508F4;
	sub_82156EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156f00
	ctx.lr = 0x82150900;
	sub_82156F00(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170860
	ctx.lr = 0x8215090C;
	sub_82170860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156f08
	ctx.lr = 0x82150918;
	sub_82156F08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x82150924;
	sub_8214B948(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185ba0
	ctx.lr = 0x82150930;
	sub_82185BA0(ctx, base);
	// li r11,3072
	ctx.r11.s64 = 3072;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x8215094C;
	sub_821EA8B8(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82150950;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82150958;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82150964;
	sub_821837D0(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82080000
	ctx.lr = 0x8215096C;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215097c
	if (ctx.cr0.eq) goto loc_8215097C;
	// bl 0x82159e98
	ctx.lr = 0x82150978;
	sub_82159E98(ctx, base);
	// b 0x82150980
	goto loc_82150980;
loc_8215097C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82150980:
	// stw r3,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215098C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82150998"))) PPC_WEAK_FUNC(sub_82150998);
PPC_FUNC_IMPL(__imp__sub_82150998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82150548
	ctx.lr = 0x821509B8;
	sub_82150548(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821509cc
	if (ctx.cr0.eq) goto loc_821509CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821509CC;
	sub_82183E40(ctx, base);
loc_821509CC:
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

__attribute__((alias("__imp__sub_821509E8"))) PPC_WEAK_FUNC(sub_821509E8);
PPC_FUNC_IMPL(__imp__sub_821509E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214be60
	ctx.lr = 0x82150A04;
	sub_8214BE60(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-772(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x821570c8
	ctx.lr = 0x82150A18;
	sub_821570C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821f17d0
	ctx.lr = 0x82150A2C;
	sub_821F17D0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82150A30;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,22192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 22192, ctx.r11.u32);
	// bl 0x821f02a0
	ctx.lr = 0x82150A40;
	sub_821F02A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150A58"))) PPC_WEAK_FUNC(sub_82150A58);
PPC_FUNC_IMPL(__imp__sub_82150A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82150a94
	if (!ctx.cr6.eq) goto loc_82150A94;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149a50
	ctx.lr = 0x82150A84;
	sub_82149A50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82150A94;
	sub_823C5728(ctx, base);
loc_82150A94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150AA8"))) PPC_WEAK_FUNC(sub_82150AA8);
PPC_FUNC_IMPL(__imp__sub_82150AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82150ae4
	if (!ctx.cr6.eq) goto loc_82150AE4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149a50
	ctx.lr = 0x82150AD4;
	sub_82149A50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82150AE4;
	sub_823C5728(ctx, base);
loc_82150AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150AF8"))) PPC_WEAK_FUNC(sub_82150AF8);
PPC_FUNC_IMPL(__imp__sub_82150AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821eb3e8
	ctx.lr = 0x82150B14;
	sub_821EB3E8(ctx, base);
	// li r10,225
	ctx.r10.s64 = 225;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82150B28:
	// stw r31,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82150b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82150B28;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f0680
	ctx.lr = 0x82150B44;
	sub_821F0680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82150b78
	if (!ctx.cr6.gt) goto loc_82150B78;
	// addi r10,r1,984
	ctx.r10.s64 = ctx.r1.s64 + 984;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82150B58:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82150b68
	if (ctx.cr6.eq) goto loc_82150B68;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82150B68:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82150b58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82150B58;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bgt cr6,0x82150b80
	if (ctx.cr6.gt) goto loc_82150B80;
loc_82150B78:
	// li r3,117
	ctx.r3.s64 = 117;
	// b 0x82150b84
	goto loc_82150B84;
loc_82150B80:
	// li r3,101
	ctx.r3.s64 = 101;
loc_82150B84:
	// bl 0x821ebaa8
	ctx.lr = 0x82150B88;
	sub_821EBAA8(ctx, base);
	// li r4,16210
	ctx.r4.s64 = 16210;
	// lwz r3,1160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// bl 0x82159fd0
	ctx.lr = 0x82150B94;
	sub_82159FD0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,1132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149e08
	ctx.lr = 0x82150BB0;
	sub_82149E08(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1164, ctx.r11.u32);
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150BD0"))) PPC_WEAK_FUNC(sub_82150BD0);
PPC_FUNC_IMPL(__imp__sub_82150BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-1392(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82150c00
	if (ctx.cr0.eq) goto loc_82150C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214a780
	ctx.lr = 0x82150C00;
	sub_8214A780(ctx, base);
loc_82150C00:
	// lwz r11,1132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82150c28
	if (ctx.cr6.eq) goto loc_82150C28;
	// ble cr6,0x82150c80
	if (!ctx.cr6.gt) goto loc_82150C80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82150c80
	if (ctx.cr6.gt) goto loc_82150C80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149a70
	ctx.lr = 0x82150C24;
	sub_82149A70(ctx, base);
	// b 0x82150c80
	goto loc_82150C80;
loc_82150C28:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82228b00
	ctx.lr = 0x82150C30;
	sub_82228B00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x82150C38;
	sub_82228B00(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821562f0
	ctx.lr = 0x82150C44;
	sub_821562F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821562f0
	ctx.lr = 0x82150C50;
	sub_821562F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149b00
	ctx.lr = 0x82150C64;
	sub_82149B00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149a70
	ctx.lr = 0x82150C70;
	sub_82149A70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-14444
	ctx.r11.s64 = ctx.r11.s64 + -14444;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82150C80:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149bc8
	ctx.lr = 0x82150C90;
	sub_82149BC8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149be8
	ctx.lr = 0x82150CA0;
	sub_82149BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149848
	ctx.lr = 0x82150CA8;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82150cdc
	if (ctx.cr0.eq) goto loc_82150CDC;
	// bl 0x821498d0
	ctx.lr = 0x82150CB8;
	sub_821498D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821498f0
	ctx.lr = 0x82150CC0;
	sub_821498F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149908
	ctx.lr = 0x82150CC8;
	sub_82149908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// bl 0x82156f10
	ctx.lr = 0x82150CD4;
	sub_82156F10(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82150d10
	goto loc_82150D10;
loc_82150CDC:
	// bl 0x82149860
	ctx.lr = 0x82150CE0;
	sub_82149860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150d14
	if (ctx.cr0.eq) goto loc_82150D14;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10001
	ctx.r3.s64 = 10001;
	// bl 0x8208f658
	ctx.lr = 0x82150D04;
	sub_8208F658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821499e8
	ctx.lr = 0x82150D0C;
	sub_821499E8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
loc_82150D10:
	// stw r11,1164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1164, ctx.r11.u32);
loc_82150D14:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150D2C"))) PPC_WEAK_FUNC(sub_82150D2C);
PPC_FUNC_IMPL(__imp__sub_82150D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150D30"))) PPC_WEAK_FUNC(sub_82150D30);
PPC_FUNC_IMPL(__imp__sub_82150D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8215bd60
	ctx.lr = 0x82150D48;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c678
	ctx.lr = 0x82150D58;
	sub_8214C678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150d70
	if (ctx.cr0.eq) goto loc_82150D70;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x82150D68;
	sub_821EBAA8(ctx, base);
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82157108
	ctx.lr = 0x82150D70;
	sub_82157108(ctx, base);
loc_82150D70:
	// li r4,16211
	ctx.r4.s64 = 16211;
	// lwz r3,1160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// bl 0x82159fd0
	ctx.lr = 0x82150D7C;
	sub_82159FD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150D90"))) PPC_WEAK_FUNC(sub_82150D90);
PPC_FUNC_IMPL(__imp__sub_82150D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82150db0
	if (ctx.cr6.lt) goto loc_82150DB0;
	// beq cr6,0x82150dac
	if (ctx.cr6.eq) goto loc_82150DAC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// b 0x821507b8
	sub_821507B8(ctx, base);
	return;
loc_82150DAC:
	// b 0x82150af8
	sub_82150AF8(ctx, base);
	return;
loc_82150DB0:
	// b 0x82150760
	sub_82150760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150DB4"))) PPC_WEAK_FUNC(sub_82150DB4);
PPC_FUNC_IMPL(__imp__sub_82150DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150DB8"))) PPC_WEAK_FUNC(sub_82150DB8);
PPC_FUNC_IMPL(__imp__sub_82150DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82150e10
	if (ctx.cr6.eq) goto loc_82150E10;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82150e04
	if (ctx.cr6.eq) goto loc_82150E04;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82150df8
	if (ctx.cr6.eq) goto loc_82150DF8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82150e24
	if (!ctx.cr6.eq) goto loc_82150E24;
	// bl 0x82150810
	ctx.lr = 0x82150DF4;
	sub_82150810(ctx, base);
	// b 0x82150e24
	goto loc_82150E24;
loc_82150DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150d30
	ctx.lr = 0x82150E00;
	sub_82150D30(ctx, base);
	// b 0x82150e24
	goto loc_82150E24;
loc_82150E04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150bd0
	ctx.lr = 0x82150E0C;
	sub_82150BD0(ctx, base);
	// b 0x82150e24
	goto loc_82150E24;
loc_82150E10:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149798
	ctx.lr = 0x82150E1C;
	sub_82149798(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
loc_82150E24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150E38"))) PPC_WEAK_FUNC(sub_82150E38);
PPC_FUNC_IMPL(__imp__sub_82150E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,1168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-26544
	ctx.r11.s64 = ctx.r11.s64 + -26544;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x82150e94
	if (ctx.cr6.eq) goto loc_82150E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150E94:
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150ebc
	if (ctx.cr6.eq) goto loc_82150EBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150EBC:
	// lwz r3,1160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150ee0
	if (ctx.cr6.eq) goto loc_82150EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150EE0:
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150f04
	if (ctx.cr6.eq) goto loc_82150F04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150F04:
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x82150F10;
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

__attribute__((alias("__imp__sub_82150F28"))) PPC_WEAK_FUNC(sub_82150F28);
PPC_FUNC_IMPL(__imp__sub_82150F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82150f38
	if (ctx.cr6.eq) goto loc_82150F38;
	// b 0x8214b980
	sub_8214B980(ctx, base);
	return;
loc_82150F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150F40"))) PPC_WEAK_FUNC(sub_82150F40);
PPC_FUNC_IMPL(__imp__sub_82150F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214be60
	sub_8214BE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150F44"))) PPC_WEAK_FUNC(sub_82150F44);
PPC_FUNC_IMPL(__imp__sub_82150F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150F48"))) PPC_WEAK_FUNC(sub_82150F48);
PPC_FUNC_IMPL(__imp__sub_82150F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c090
	ctx.lr = 0x82150F74;
	sub_8214C090(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150F88"))) PPC_WEAK_FUNC(sub_82150F88);
PPC_FUNC_IMPL(__imp__sub_82150F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8214d360
	ctx.lr = 0x82150FA0;
	sub_8214D360(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149a10
	ctx.lr = 0x82150FAC;
	sub_82149A10(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150FC8"))) PPC_WEAK_FUNC(sub_82150FC8);
PPC_FUNC_IMPL(__imp__sub_82150FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149878
	ctx.lr = 0x82150FE8;
	sub_82149878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151000
	if (ctx.cr0.eq) goto loc_82151000;
	// li r11,28
	ctx.r11.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x8214d528
	ctx.lr = 0x82151000;
	sub_8214D528(ctx, base);
loc_82151000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151014"))) PPC_WEAK_FUNC(sub_82151014);
PPC_FUNC_IMPL(__imp__sub_82151014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151018"))) PPC_WEAK_FUNC(sub_82151018);
PPC_FUNC_IMPL(__imp__sub_82151018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82151040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151080
	if (ctx.cr0.eq) goto loc_82151080;
	// lwz r3,908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82151058
	if (ctx.cr6.eq) goto loc_82151058;
	// bl 0x8215aa38
	ctx.lr = 0x82151058;
	sub_8215AA38(ctx, base);
loc_82151058:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82151068
	if (ctx.cr6.eq) goto loc_82151068;
	// bl 0x8215a6b8
	ctx.lr = 0x82151068;
	sub_8215A6B8(ctx, base);
loc_82151068:
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82151078
	if (ctx.cr6.eq) goto loc_82151078;
	// bl 0x8215a148
	ctx.lr = 0x82151078;
	sub_8215A148(ctx, base);
loc_82151078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82151080;
	sub_8214D630(ctx, base);
loc_82151080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151094"))) PPC_WEAK_FUNC(sub_82151094);
PPC_FUNC_IMPL(__imp__sub_82151094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151098"))) PPC_WEAK_FUNC(sub_82151098);
PPC_FUNC_IMPL(__imp__sub_82151098) {
	PPC_FUNC_PROLOGUE();
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, ctx.r11.u32);
	// b 0x8214bfd0
	sub_8214BFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821510A4"))) PPC_WEAK_FUNC(sub_821510A4);
PPC_FUNC_IMPL(__imp__sub_821510A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821510A8"))) PPC_WEAK_FUNC(sub_821510A8);
PPC_FUNC_IMPL(__imp__sub_821510A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821497e8
	ctx.lr = 0x821510C8;
	sub_821497E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821510ec
	if (ctx.cr0.eq) goto loc_821510EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821510EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821510EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151100"))) PPC_WEAK_FUNC(sub_82151100);
PPC_FUNC_IMPL(__imp__sub_82151100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149798
	ctx.lr = 0x82151120;
	sub_82149798(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215113C"))) PPC_WEAK_FUNC(sub_8215113C);
PPC_FUNC_IMPL(__imp__sub_8215113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151140"))) PPC_WEAK_FUNC(sub_82151140);
PPC_FUNC_IMPL(__imp__sub_82151140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82151158;
	sub_82227AA0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x822283f8
	ctx.lr = 0x82151160;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151184
	if (ctx.cr0.eq) goto loc_82151184;
	// bl 0x82227aa0
	ctx.lr = 0x8215116C;
	sub_82227AA0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82227cd8
	ctx.lr = 0x82151174;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82151184
	if (!ctx.cr6.eq) goto loc_82151184;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_82151184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151198"))) PPC_WEAK_FUNC(sub_82151198);
PPC_FUNC_IMPL(__imp__sub_82151198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821511B0;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821511C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821511d0
	if (ctx.cr0.eq) goto loc_821511D0;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_821511D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821511E4"))) PPC_WEAK_FUNC(sub_821511E4);
PPC_FUNC_IMPL(__imp__sub_821511E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821511E8"))) PPC_WEAK_FUNC(sub_821511E8);
PPC_FUNC_IMPL(__imp__sub_821511E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214cd40
	sub_8214CD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821511EC"))) PPC_WEAK_FUNC(sub_821511EC);
PPC_FUNC_IMPL(__imp__sub_821511EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821511F0"))) PPC_WEAK_FUNC(sub_821511F0);
PPC_FUNC_IMPL(__imp__sub_821511F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821499b8
	ctx.lr = 0x82151210;
	sub_821499B8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215122C"))) PPC_WEAK_FUNC(sub_8215122C);
PPC_FUNC_IMPL(__imp__sub_8215122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151230"))) PPC_WEAK_FUNC(sub_82151230);
PPC_FUNC_IMPL(__imp__sub_82151230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-1392(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149fa0
	ctx.lr = 0x82151258;
	sub_82149FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151270
	if (ctx.cr0.eq) goto loc_82151270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821499c0
	ctx.lr = 0x82151268;
	sub_821499C0(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
loc_82151270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151288"))) PPC_WEAK_FUNC(sub_82151288);
PPC_FUNC_IMPL(__imp__sub_82151288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0f30
	ctx.lr = 0x821512A8;
	sub_820A0F30(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821512C4"))) PPC_WEAK_FUNC(sub_821512C4);
PPC_FUNC_IMPL(__imp__sub_821512C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821512C8"))) PPC_WEAK_FUNC(sub_821512C8);
PPC_FUNC_IMPL(__imp__sub_821512C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-8960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8960);
	// addi r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 + 204;
loc_821512EC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82151324
	if (!ctx.cr6.eq) goto loc_82151324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821512ec
	if (ctx.cr6.lt) goto loc_821512EC;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82154828
	ctx.lr = 0x82151310;
	sub_82154828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82151324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151338"))) PPC_WEAK_FUNC(sub_82151338);
PPC_FUNC_IMPL(__imp__sub_82151338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0c38
	ctx.lr = 0x8215135C;
	sub_820A0C38(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151378"))) PPC_WEAK_FUNC(sub_82151378);
PPC_FUNC_IMPL(__imp__sub_82151378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151398"))) PPC_WEAK_FUNC(sub_82151398);
PPC_FUNC_IMPL(__imp__sub_82151398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82151520
	sub_82151520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821513A0"))) PPC_WEAK_FUNC(sub_821513A0);
PPC_FUNC_IMPL(__imp__sub_821513A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82151520
	sub_82151520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821513A8"))) PPC_WEAK_FUNC(sub_821513A8);
PPC_FUNC_IMPL(__imp__sub_821513A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821513B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x821513D0;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-26544
	ctx.r11.s64 = ctx.r11.s64 + -26544;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// stw r30,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r30.u32);
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// bl 0x82185ba0
	ctx.lr = 0x8215142C;
	sub_82185BA0(ctx, base);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x8215143C;
	sub_8214B948(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82151440;
	sub_82227AA0(ctx, base);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x82182e90
	ctx.lr = 0x82151448;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82151450;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215145C;
	sub_821837D0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x82151464;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82151474
	if (ctx.cr0.eq) goto loc_82151474;
	// bl 0x8215a058
	ctx.lr = 0x82151470;
	sub_8215A058(ctx, base);
	// b 0x82151478
	goto loc_82151478;
loc_82151474:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82151478:
	// stw r3,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r3.u32);
	// li r3,332
	ctx.r3.s64 = 332;
	// bl 0x82080000
	ctx.lr = 0x82151484;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82151494
	if (ctx.cr0.eq) goto loc_82151494;
	// bl 0x8215a5d0
	ctx.lr = 0x82151490;
	sub_8215A5D0(ctx, base);
	// b 0x82151498
	goto loc_82151498;
loc_82151494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82151498:
	// stw r3,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r3.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82080000
	ctx.lr = 0x821514A4;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821514b4
	if (ctx.cr0.eq) goto loc_821514B4;
	// bl 0x8215a960
	ctx.lr = 0x821514B0;
	sub_8215A960(ctx, base);
	// b 0x821514b8
	goto loc_821514B8;
loc_821514B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821514B8:
	// stw r3,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x821514C4;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821514d4
	if (ctx.cr0.eq) goto loc_821514D4;
	// bl 0x821568b8
	ctx.lr = 0x821514D0;
	sub_821568B8(ctx, base);
	// b 0x821514d8
	goto loc_821514D8;
loc_821514D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821514D8:
	// li r11,3136
	ctx.r11.s64 = 3136;
	// stw r3,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r3.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821514E8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151508
	if (!ctx.cr6.eq) goto loc_82151508;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x82151508;
	sub_821EA8B8(ctx, base);
loc_82151508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82151510;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8215151C"))) PPC_WEAK_FUNC(sub_8215151C);
PPC_FUNC_IMPL(__imp__sub_8215151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151520"))) PPC_WEAK_FUNC(sub_82151520);
PPC_FUNC_IMPL(__imp__sub_82151520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82150e38
	ctx.lr = 0x82151540;
	sub_82150E38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151554
	if (ctx.cr0.eq) goto loc_82151554;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82151554;
	sub_82183E40(ctx, base);
loc_82151554:
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

__attribute__((alias("__imp__sub_82151570"))) PPC_WEAK_FUNC(sub_82151570);
PPC_FUNC_IMPL(__imp__sub_82151570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x82151590;
	sub_82229A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821515a0
	if (ctx.cr0.eq) goto loc_821515A0;
loc_82151598:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821515c4
	goto loc_821515C4;
loc_821515A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821515bc
	if (ctx.cr0.eq) goto loc_821515BC;
	// bl 0x821496f0
	ctx.lr = 0x821515B4;
	sub_821496F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151598
	if (ctx.cr0.eq) goto loc_82151598;
loc_821515BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3a78
	ctx.lr = 0x821515C4;
	sub_820F3A78(ctx, base);
loc_821515C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821515D8"))) PPC_WEAK_FUNC(sub_821515D8);
PPC_FUNC_IMPL(__imp__sub_821515D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821515F0;
	sub_82227AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82228fd0
	ctx.lr = 0x82151600;
	sub_82228FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c0a8
	ctx.lr = 0x82151608;
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
	ctx.lr = 0x8215161C;
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

__attribute__((alias("__imp__sub_82151630"))) PPC_WEAK_FUNC(sub_82151630);
PPC_FUNC_IMPL(__imp__sub_82151630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r31,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8214b948
	ctx.lr = 0x82151658;
	sub_8214B948(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215166C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151690"))) PPC_WEAK_FUNC(sub_82151690);
PPC_FUNC_IMPL(__imp__sub_82151690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r30,-1392(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1392);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821516f4
	if (ctx.cr6.eq) goto loc_821516F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821516f8
	if (!ctx.cr6.eq) goto loc_821516F8;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821516dc
	if (ctx.cr6.eq) goto loc_821516DC;
	// bl 0x82154aa8
	ctx.lr = 0x821516DC;
	sub_82154AA8(ctx, base);
loc_821516DC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b350
	ctx.lr = 0x821516E8;
	sub_8214B350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821499e8
	ctx.lr = 0x821516F0;
	sub_821499E8(ctx, base);
	// b 0x821516f8
	goto loc_821516F8;
loc_821516F4:
	// bl 0x8214a978
	ctx.lr = 0x821516F8;
	sub_8214A978(ctx, base);
loc_821516F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151710"))) PPC_WEAK_FUNC(sub_82151710);
PPC_FUNC_IMPL(__imp__sub_82151710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149890
	ctx.lr = 0x82151734;
	sub_82149890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821517a4
	if (ctx.cr0.eq) goto loc_821517A4;
	// bl 0x82227aa0
	ctx.lr = 0x82151740;
	sub_82227AA0(ctx, base);
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x821517a4
	if (ctx.cr6.gt) goto loc_821517A4;
	// bl 0x8215bd60
	ctx.lr = 0x82151754;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151770
	if (ctx.cr6.eq) goto loc_82151770;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821517a4
	if (ctx.cr6.eq) goto loc_821517A4;
loc_82151770:
	// bl 0x8215bd60
	ctx.lr = 0x82151774;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821517a4
	if (ctx.cr6.eq) goto loc_821517A4;
	// bl 0x8215bd08
	ctx.lr = 0x82151784;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8214d0f8
	ctx.lr = 0x82151794;
	sub_8214D0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821517a4
	if (ctx.cr0.eq) goto loc_821517A4;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// bl 0x8215a910
	ctx.lr = 0x821517A4;
	sub_8215A910(ctx, base);
loc_821517A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821517BC"))) PPC_WEAK_FUNC(sub_821517BC);
PPC_FUNC_IMPL(__imp__sub_821517BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821517C0"))) PPC_WEAK_FUNC(sub_821517C0);
PPC_FUNC_IMPL(__imp__sub_821517C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149890
	ctx.lr = 0x821517E4;
	sub_82149890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215184c
	if (ctx.cr0.eq) goto loc_8215184C;
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8215184c
	if (ctx.cr6.gt) goto loc_8215184C;
	// bl 0x82227aa0
	ctx.lr = 0x821517FC;
	sub_82227AA0(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215184c
	if (!ctx.cr6.eq) goto loc_8215184C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8215bd60
	ctx.lr = 0x82151814;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151824
	if (ctx.cr6.eq) goto loc_82151824;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82151824:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x8214cf10
	ctx.lr = 0x82151830;
	sub_8214CF10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151844
	if (ctx.cr0.eq) goto loc_82151844;
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// bl 0x8215a910
	ctx.lr = 0x82151840;
	sub_8215A910(ctx, base);
	// b 0x8215184c
	goto loc_8215184C;
loc_82151844:
	// li r3,10002
	ctx.r3.s64 = 10002;
	// bl 0x8208f658
	ctx.lr = 0x8215184C;
	sub_8208F658(ctx, base);
loc_8215184C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151864"))) PPC_WEAK_FUNC(sub_82151864);
PPC_FUNC_IMPL(__imp__sub_82151864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151868"))) PPC_WEAK_FUNC(sub_82151868);
PPC_FUNC_IMPL(__imp__sub_82151868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd60
	ctx.lr = 0x82151884;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151948
	if (!ctx.cr6.eq) goto loc_82151948;
	// bl 0x8215bd60
	ctx.lr = 0x82151894;
	sub_8215BD60(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821518a8
	if (ctx.cr6.eq) goto loc_821518A8;
loc_821518A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215194c
	goto loc_8215194C;
loc_821518A8:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a930
	ctx.lr = 0x821518B4;
	sub_8214A930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821518cc
	if (!ctx.cr0.eq) goto loc_821518CC;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a8e8
	ctx.lr = 0x821518C4;
	sub_8214A8E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151948
	if (ctx.cr0.eq) goto loc_82151948;
loc_821518CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821518E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151948
	if (ctx.cr0.eq) goto loc_82151948;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x8214bb90
	ctx.lr = 0x821518F8;
	sub_8214BB90(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x82151904;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151948
	if (ctx.cr0.eq) goto loc_82151948;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x82151914;
	sub_82154AA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30213
	ctx.r4.s64 = 30213;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x82151924;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8215193C;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x821518a0
	goto loc_821518A0;
loc_82151948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215194C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151964"))) PPC_WEAK_FUNC(sub_82151964);
PPC_FUNC_IMPL(__imp__sub_82151964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151968"))) PPC_WEAK_FUNC(sub_82151968);
PPC_FUNC_IMPL(__imp__sub_82151968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82151970;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82226fe8
	ctx.lr = 0x82151978;
	sub_82226FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151a48
	if (ctx.cr0.eq) goto loc_82151A48;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,-740(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82227aa0
	ctx.lr = 0x8215198C;
	sub_82227AA0(ctx, base);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// rlwinm r11,r29,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// addme r11,r11
	// and r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x82227aa0
	ctx.lr = 0x821519A4;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,708(r27)
	PPC_STORE_U32(ctx.r27.u32 + 708, ctx.r28.u32);
	// stw r28,712(r27)
	PPC_STORE_U32(ctx.r27.u32 + 712, ctx.r28.u32);
	// stw r11,704(r27)
	PPC_STORE_U32(ctx.r27.u32 + 704, ctx.r11.u32);
	// beq cr6,0x82151a48
	if (ctx.cr6.eq) goto loc_82151A48;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821519C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82225490
	ctx.lr = 0x821519C8;
	sub_82225490(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82151a2c
	if (!ctx.cr6.gt) goto loc_82151A2C;
loc_821519D8:
	// bl 0x82227aa0
	ctx.lr = 0x821519DC;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227fd8
	ctx.lr = 0x821519E4;
	sub_82227FD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82151a20
	if (!ctx.cr6.eq) goto loc_82151A20;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82227aa0
	ctx.lr = 0x821519F8;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822280a8
	ctx.lr = 0x82151A00;
	sub_822280A8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x82227aa0
	ctx.lr = 0x82151A08;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227fe8
	ctx.lr = 0x82151A10;
	sub_82227FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8224a628
	ctx.lr = 0x82151A20;
	sub_8224A628(ctx, base);
loc_82151A20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821519d8
	if (ctx.cr6.lt) goto loc_821519D8;
loc_82151A2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82225b88
	ctx.lr = 0x82151A3C;
	sub_82225B88(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821519c0
	if (ctx.cr6.lt) goto loc_821519C0;
loc_82151A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82151A50"))) PPC_WEAK_FUNC(sub_82151A50);
PPC_FUNC_IMPL(__imp__sub_82151A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82227aa0
	ctx.lr = 0x82151A70;
	sub_82227AA0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822283f8
	ctx.lr = 0x82151A78;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151b0c
	if (ctx.cr0.eq) goto loc_82151B0C;
	// bl 0x82227aa0
	ctx.lr = 0x82151A84;
	sub_82227AA0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82227cd8
	ctx.lr = 0x82151A8C;
	sub_82227CD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82151acc
	if (ctx.cr6.eq) goto loc_82151ACC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82151b0c
	if (!ctx.cr6.eq) goto loc_82151B0C;
	// bl 0x82227aa0
	ctx.lr = 0x82151AA4;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151ac4
	if (ctx.cr0.eq) goto loc_82151AC4;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82151afc
	goto loc_82151AFC;
loc_82151AC4:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82151afc
	goto loc_82151AFC;
loc_82151ACC:
	// lwz r11,1180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82151b04
	if (!ctx.cr6.eq) goto loc_82151B04;
	// bl 0x82227aa0
	ctx.lr = 0x82151AE0;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151b04
	if (ctx.cr0.eq) goto loc_82151B04;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82151AFC:
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x82151b0c
	goto loc_82151B0C;
loc_82151B04:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_82151B0C:
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

__attribute__((alias("__imp__sub_82151B28"))) PPC_WEAK_FUNC(sub_82151B28);
PPC_FUNC_IMPL(__imp__sub_82151B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82151B30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x82151B3C;
	sub_82227AA0(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// lwz r29,-1392(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1392);
	// blt cr6,0x82151b5c
	if (ctx.cr6.lt) goto loc_82151B5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151B5C:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x82151b74
	if (ctx.cr6.lt) goto loc_82151B74;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x82151b74
	if (ctx.cr6.gt) goto loc_82151B74;
	// li r3,116
	ctx.r3.s64 = 116;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151B74:
	// bl 0x8215bd60
	ctx.lr = 0x82151B78;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151c24
	if (ctx.cr6.eq) goto loc_82151C24;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82151bac
	if (!ctx.cr6.eq) goto loc_82151BAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149848
	ctx.lr = 0x82151B9C;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151c38
	if (ctx.cr0.eq) goto loc_82151C38;
	// li r3,108
	ctx.r3.s64 = 108;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151BAC:
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82151c04
	if (ctx.cr6.eq) goto loc_82151C04;
	// ble cr6,0x82151c40
	if (!ctx.cr6.gt) goto loc_82151C40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82151c40
	if (ctx.cr6.gt) goto loc_82151C40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149848
	ctx.lr = 0x82151BCC;
	sub_82149848(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151bf0
	if (ctx.cr0.eq) goto loc_82151BF0;
	// beq cr6,0x82151be8
	if (ctx.cr6.eq) goto loc_82151BE8;
	// li r3,118
	ctx.r3.s64 = 118;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151BE8:
	// li r3,104
	ctx.r3.s64 = 104;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151BF0:
	// beq cr6,0x82151bfc
	if (ctx.cr6.eq) goto loc_82151BFC;
	// li r3,119
	ctx.r3.s64 = 119;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151BFC:
	// li r3,105
	ctx.r3.s64 = 105;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149848
	ctx.lr = 0x82151C0C;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151c1c
	if (ctx.cr0.eq) goto loc_82151C1C;
	// li r3,106
	ctx.r3.s64 = 106;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151C1C:
	// li r3,107
	ctx.r3.s64 = 107;
	// b 0x82151c3c
	goto loc_82151C3C;
loc_82151C24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149848
	ctx.lr = 0x82151C2C;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,108
	ctx.r3.s64 = 108;
	// bne 0x82151c3c
	if (!ctx.cr0.eq) goto loc_82151C3C;
loc_82151C38:
	// li r3,109
	ctx.r3.s64 = 109;
loc_82151C3C:
	// bl 0x821ebaa8
	ctx.lr = 0x82151C40;
	sub_821EBAA8(ctx, base);
loc_82151C40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82151C48"))) PPC_WEAK_FUNC(sub_82151C48);
PPC_FUNC_IMPL(__imp__sub_82151C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82151cc8
	if (ctx.cr6.eq) goto loc_82151CC8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82151cc8
	if (!ctx.cr6.gt) goto loc_82151CC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82151ccc
	if (!ctx.cr6.eq) goto loc_82151CCC;
loc_82151CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82151CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151CE4"))) PPC_WEAK_FUNC(sub_82151CE4);
PPC_FUNC_IMPL(__imp__sub_82151CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151CE8"))) PPC_WEAK_FUNC(sub_82151CE8);
PPC_FUNC_IMPL(__imp__sub_82151CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82151CF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x82151D00;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x821eb3e8
	ctx.lr = 0x82151D14;
	sub_821EB3E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151b28
	ctx.lr = 0x82151D1C;
	sub_82151B28(ctx, base);
	// lwz r10,1152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r31,-1392(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821570a8
	ctx.lr = 0x82151D30;
	sub_821570A8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,1132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149e08
	ctx.lr = 0x82151D48;
	sub_82149E08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82151D58"))) PPC_WEAK_FUNC(sub_82151D58);
PPC_FUNC_IMPL(__imp__sub_82151D58) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,-1392(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1392);
	// beq cr6,0x82151d98
	if (ctx.cr6.eq) goto loc_82151D98;
	// ble cr6,0x82151da0
	if (!ctx.cr6.gt) goto loc_82151DA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82151da0
	if (ctx.cr6.gt) goto loc_82151DA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82151d9c
	goto loc_82151D9C;
loc_82151D98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82151D9C:
	// bl 0x82149a70
	ctx.lr = 0x82151DA0;
	sub_82149A70(ctx, base);
loc_82151DA0:
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x82151DA8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x82227aa0
	ctx.lr = 0x82151DBC;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151de0
	if (ctx.cr0.eq) goto loc_82151DE0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
loc_82151DE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151DF8"))) PPC_WEAK_FUNC(sub_82151DF8);
PPC_FUNC_IMPL(__imp__sub_82151DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82151E10;
	sub_82227AA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822283f8
	ctx.lr = 0x82151E18;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151e68
	if (ctx.cr0.eq) goto loc_82151E68;
	// bl 0x82227aa0
	ctx.lr = 0x82151E24;
	sub_82227AA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82227cd8
	ctx.lr = 0x82151E2C;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82151e60
	if (ctx.cr6.eq) goto loc_82151E60;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82151e68
	if (!ctx.cr6.eq) goto loc_82151E68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30221
	ctx.r4.s64 = 30221;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x82151E4C;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r10.u32);
	// b 0x82151e68
	goto loc_82151E68;
loc_82151E60:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_82151E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151E7C"))) PPC_WEAK_FUNC(sub_82151E7C);
PPC_FUNC_IMPL(__imp__sub_82151E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151E80"))) PPC_WEAK_FUNC(sub_82151E80);
PPC_FUNC_IMPL(__imp__sub_82151E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8215bd60
	ctx.lr = 0x82151E98;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151eb8
	if (ctx.cr6.eq) goto loc_82151EB8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821497d0
	ctx.lr = 0x82151EB0;
	sub_821497D0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82151ebc
	goto loc_82151EBC;
loc_82151EB8:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82151EBC:
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82151ED4"))) PPC_WEAK_FUNC(sub_82151ED4);
PPC_FUNC_IMPL(__imp__sub_82151ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151ED8"))) PPC_WEAK_FUNC(sub_82151ED8);
PPC_FUNC_IMPL(__imp__sub_82151ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82151EE0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-1392(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1392);
	// bl 0x8215bd60
	ctx.lr = 0x82151EF4;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151f08
	if (!ctx.cr6.eq) goto loc_82151F08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821498f0
	ctx.lr = 0x82151F08;
	sub_821498F0(ctx, base);
loc_82151F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149848
	ctx.lr = 0x82151F10;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151fc8
	if (ctx.cr0.eq) goto loc_82151FC8;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x82151F20;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,-1392(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1392);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x82227aa0
	ctx.lr = 0x82151F38;
	sub_82227AA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82227e70
	ctx.lr = 0x82151F40;
	sub_82227E70(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bge cr6,0x82151f50
	if (!ctx.cr6.lt) goto loc_82151F50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151b28
	ctx.lr = 0x82151F50;
	sub_82151B28(ctx, base);
loc_82151F50:
	// bl 0x82227aa0
	ctx.lr = 0x82151F54;
	sub_82227AA0(ctx, base);
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82228080
	ctx.lr = 0x82151F64;
	sub_82228080(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149ae8
	ctx.lr = 0x82151F94;
	sub_82149AE8(ctx, base);
	// stw r29,1180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1180, ctx.r29.u32);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151fc0
	if (ctx.cr6.eq) goto loc_82151FC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30502
	ctx.r4.s64 = 30502;
	// addi r3,r30,756
	ctx.r3.s64 = ctx.r30.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x82151FB4;
	sub_82155BD0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
loc_82151FB8:
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
	// b 0x82151ff8
	goto loc_82151FF8;
loc_82151FC0:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82151fb8
	goto loc_82151FB8;
loc_82151FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149860
	ctx.lr = 0x82151FD0;
	sub_82149860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82151ff8
	if (ctx.cr0.eq) goto loc_82151FF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214caf8
	ctx.lr = 0x82151FE0;
	sub_8214CAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821498d0
	ctx.lr = 0x82151FE8;
	sub_821498D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,1180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1180, ctx.r11.u32);
	// stw r10,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r10.u32);
loc_82151FF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82152000"))) PPC_WEAK_FUNC(sub_82152000);
PPC_FUNC_IMPL(__imp__sub_82152000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x8215201C;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152034
	if (ctx.cr0.eq) goto loc_82152034;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
loc_82152034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152048"))) PPC_WEAK_FUNC(sub_82152048);
PPC_FUNC_IMPL(__imp__sub_82152048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x82152064;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215207c
	if (ctx.cr0.eq) goto loc_8215207C;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
loc_8215207C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152090"))) PPC_WEAK_FUNC(sub_82152090);
PPC_FUNC_IMPL(__imp__sub_82152090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821520A8;
	sub_82227AA0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822283f8
	ctx.lr = 0x821520B0;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821520f0
	if (ctx.cr0.eq) goto loc_821520F0;
	// bl 0x82227aa0
	ctx.lr = 0x821520BC;
	sub_82227AA0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82227cd8
	ctx.lr = 0x821520C4;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821520e0
	if (ctx.cr6.eq) goto loc_821520E0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821520f0
	if (!ctx.cr6.eq) goto loc_821520F0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x821520f0
	goto loc_821520F0;
loc_821520E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r10.u32);
loc_821520F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152104"))) PPC_WEAK_FUNC(sub_82152104);
PPC_FUNC_IMPL(__imp__sub_82152104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152108"))) PPC_WEAK_FUNC(sub_82152108);
PPC_FUNC_IMPL(__imp__sub_82152108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1180, ctx.r11.u32);
	// bl 0x82227aa0
	ctx.lr = 0x8215212C;
	sub_82227AA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149848
	ctx.lr = 0x8215213C;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152184
	if (!ctx.cr0.eq) goto loc_82152184;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821521c4
	if (ctx.cr0.eq) goto loc_821521C4;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215a910
	ctx.lr = 0x82152168;
	sub_8215A910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152170;
	sub_82151B28(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r10.u32);
	// b 0x821521c4
	goto loc_821521C4;
loc_82152184:
	// bl 0x82227aa0
	ctx.lr = 0x82152188;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821521ac
	if (ctx.cr0.eq) goto loc_821521AC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x821521c4
	goto loc_821521C4;
loc_821521AC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821521c4
	if (!ctx.cr6.eq) goto loc_821521C4;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215a8c8
	ctx.lr = 0x821521C4;
	sub_8215A8C8(ctx, base);
loc_821521C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821521DC"))) PPC_WEAK_FUNC(sub_821521DC);
PPC_FUNC_IMPL(__imp__sub_821521DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821521E0"))) PPC_WEAK_FUNC(sub_821521E0);
PPC_FUNC_IMPL(__imp__sub_821521E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821521F8;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152220
	if (ctx.cr0.eq) goto loc_82152220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152218;
	sub_82151B28(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_82152220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152234"))) PPC_WEAK_FUNC(sub_82152234);
PPC_FUNC_IMPL(__imp__sub_82152234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152238"))) PPC_WEAK_FUNC(sub_82152238);
PPC_FUNC_IMPL(__imp__sub_82152238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82152240;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8215224C;
	sub_82227AA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r29,-1392(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bne cr6,0x82152270
	if (!ctx.cr6.eq) goto loc_82152270;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82152270:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82227e70
	ctx.lr = 0x82152278;
	sub_82227E70(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x82152288
	if (ctx.cr6.gt) goto loc_82152288;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215a8c8
	ctx.lr = 0x82152288;
	sub_8215A8C8(ctx, base);
loc_82152288:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149848
	ctx.lr = 0x82152290;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821522e4
	if (!ctx.cr0.eq) goto loc_821522E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821522AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152380
	if (ctx.cr0.eq) goto loc_82152380;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215a910
	ctx.lr = 0x821522BC;
	sub_8215A910(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r9.u32);
	// bl 0x82151b28
	ctx.lr = 0x821522E0;
	sub_82151B28(ctx, base);
	// b 0x82152380
	goto loc_82152380;
loc_821522E4:
	// bl 0x82227aa0
	ctx.lr = 0x821522E8;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821522F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8215233c
	if (!ctx.cr0.eq) goto loc_8215233C;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152380
	if (ctx.cr0.eq) goto loc_82152380;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// bl 0x8215a910
	ctx.lr = 0x82152324;
	sub_8215A910(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// b 0x82152380
	goto loc_82152380;
loc_8215233C:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152380
	if (ctx.cr0.eq) goto loc_82152380;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// addi r11,r10,-7560
	ctx.r11.s64 = ctx.r10.s64 + -7560;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 * 9;
	// bl 0x8215a470
	ctx.lr = 0x82152370;
	sub_8215A470(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x8215a910
	ctx.lr = 0x82152380;
	sub_8215A910(ctx, base);
loc_82152380:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82152388"))) PPC_WEAK_FUNC(sub_82152388);
PPC_FUNC_IMPL(__imp__sub_82152388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149848
	ctx.lr = 0x821523A8;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152400
	if (!ctx.cr0.eq) goto loc_82152400;
	// bl 0x82227aa0
	ctx.lr = 0x821523B4;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821523C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152434
	if (ctx.cr0.eq) goto loc_82152434;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// bl 0x82151b28
	ctx.lr = 0x821523DC;
	sub_82151B28(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r10.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// lwz r10,1156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x82152434
	goto loc_82152434;
loc_82152400:
	// bl 0x82227aa0
	ctx.lr = 0x82152404;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152434
	if (ctx.cr0.eq) goto loc_82152434;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152424;
	sub_82151B28(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x82156820
	ctx.lr = 0x82152434;
	sub_82156820(ctx, base);
loc_82152434:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152448"))) PPC_WEAK_FUNC(sub_82152448);
PPC_FUNC_IMPL(__imp__sub_82152448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82152460;
	sub_82227AA0(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822283f8
	ctx.lr = 0x82152468;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821524b0
	if (ctx.cr0.eq) goto loc_821524B0;
	// bl 0x82227aa0
	ctx.lr = 0x82152474;
	sub_82227AA0(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82227cd8
	ctx.lr = 0x8215247C;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821524a8
	if (ctx.cr6.eq) goto loc_821524A8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821524b0
	if (!ctx.cr6.eq) goto loc_821524B0;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x82156898
	ctx.lr = 0x8215249C;
	sub_82156898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x821524A4;
	sub_82151B28(ctx, base);
	// b 0x821524b0
	goto loc_821524B0;
loc_821524A8:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_821524B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821524C4"))) PPC_WEAK_FUNC(sub_821524C4);
PPC_FUNC_IMPL(__imp__sub_821524C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821524C8"))) PPC_WEAK_FUNC(sub_821524C8);
PPC_FUNC_IMPL(__imp__sub_821524C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821524E0;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821524F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152518
	if (!ctx.cr0.eq) goto loc_82152518;
	// bl 0x82227aa0
	ctx.lr = 0x821524FC;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215250C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x8215255c
	goto loc_8215255C;
loc_82152518:
	// bl 0x82227aa0
	ctx.lr = 0x8215251C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215252C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215255c
	if (ctx.cr0.eq) goto loc_8215255C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214ccb8
	ctx.lr = 0x8215253C;
	sub_8214CCB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215255c
	if (ctx.cr0.eq) goto loc_8215255C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151968
	ctx.lr = 0x8215254C;
	sub_82151968(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// bl 0x82156898
	ctx.lr = 0x8215255C;
	sub_82156898(ctx, base);
loc_8215255C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152570"))) PPC_WEAK_FUNC(sub_82152570);
PPC_FUNC_IMPL(__imp__sub_82152570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82152588;
	sub_82227AA0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822283f8
	ctx.lr = 0x82152590;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821525fc
	if (ctx.cr0.eq) goto loc_821525FC;
	// bl 0x82227aa0
	ctx.lr = 0x8215259C;
	sub_82227AA0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82227cd8
	ctx.lr = 0x821525A4;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821525c0
	if (ctx.cr6.eq) goto loc_821525C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821525fc
	if (!ctx.cr6.eq) goto loc_821525FC;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x821525fc
	goto loc_821525FC;
loc_821525C0:
	// bl 0x82227aa0
	ctx.lr = 0x821525C4;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821525D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821525fc
	if (ctx.cr0.eq) goto loc_821525FC;
	// li r11,14
	ctx.r11.s64 = 14;
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// bl 0x82156898
	ctx.lr = 0x821525FC;
	sub_82156898(ctx, base);
loc_821525FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152610"))) PPC_WEAK_FUNC(sub_82152610);
PPC_FUNC_IMPL(__imp__sub_82152610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82227aa0
	ctx.lr = 0x8215262C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215272c
	if (ctx.cr0.eq) goto loc_8215272C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x82152658;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82152708
	if (!ctx.cr6.eq) goto loc_82152708;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8215266C;
	sub_8214A978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821526ec
	if (!ctx.cr0.gt) goto loc_821526EC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x821526e0
	if (!ctx.cr6.gt) goto loc_821526E0;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x821526ec
	if (!ctx.cr6.eq) goto loc_821526EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x8214bb90
	ctx.lr = 0x82152694;
	sub_8214BB90(ctx, base);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821526a4
	if (ctx.cr6.eq) goto loc_821526A4;
	// bl 0x82154aa8
	ctx.lr = 0x821526A4;
	sub_82154AA8(ctx, base);
loc_821526A4:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x821526B0;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215272c
	if (ctx.cr0.eq) goto loc_8215272C;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214aa28
	ctx.lr = 0x821526C0;
	sub_8214AA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82155bd0
	ctx.lr = 0x821526D0;
	sub_82155BD0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x821526D4;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8215272c
	goto loc_8215272C;
loc_821526E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x821526E8;
	sub_8214D7B0(ctx, base);
	// b 0x8215272c
	goto loc_8215272C;
loc_821526EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,30222
	ctx.r4.s64 = 30222;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8215272c
	goto loc_8215272C;
loc_82152708:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215271C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215272c
	if (ctx.cr0.eq) goto loc_8215272C;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_8215272C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152744"))) PPC_WEAK_FUNC(sub_82152744);
PPC_FUNC_IMPL(__imp__sub_82152744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152748"))) PPC_WEAK_FUNC(sub_82152748);
PPC_FUNC_IMPL(__imp__sub_82152748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x82152768;
	sub_82229A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215279c
	if (!ctx.cr0.eq) goto loc_8215279C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149878
	ctx.lr = 0x8215277C;
	sub_82149878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215279c
	if (ctx.cr0.eq) goto loc_8215279C;
	// bl 0x821f18c0
	ctx.lr = 0x82152788;
	sub_821F18C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82152794
	if (ctx.cr0.eq) goto loc_82152794;
	// bl 0x821f1870
	ctx.lr = 0x82152794;
	sub_821F1870(ctx, base);
loc_82152794:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_8215279C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821527B0"))) PPC_WEAK_FUNC(sub_821527B0);
PPC_FUNC_IMPL(__imp__sub_821527B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821527B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x821527CC;
	sub_82229A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821528ec
	if (!ctx.cr0.eq) goto loc_821528EC;
	// bl 0x8215bd60
	ctx.lr = 0x821527D8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152800
	if (!ctx.cr6.eq) goto loc_82152800;
	// bl 0x821f18c0
	ctx.lr = 0x821527E8;
	sub_821F18C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821527f4
	if (ctx.cr0.eq) goto loc_821527F4;
	// bl 0x821f1870
	ctx.lr = 0x821527F4;
	sub_821F1870(ctx, base);
loc_821527F4:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x821528ec
	goto loc_821528EC;
loc_82152800:
	// bl 0x821f18c0
	ctx.lr = 0x82152804;
	sub_821F18C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821f22a0
	ctx.lr = 0x8215280C;
	sub_821F22A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f1b70
	ctx.lr = 0x82152814;
	sub_821F1B70(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x82152824;
	sub_82163A60(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82230de8
	ctx.lr = 0x8215282C;
	sub_82230DE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820ef480
	ctx.lr = 0x82152844;
	sub_820EF480(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82152848;
	sub_82163EE8(ctx, base);
	// addi r5,r3,2296
	ctx.r5.s64 = ctx.r3.s64 + 2296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82232b60
	ctx.lr = 0x82152858;
	sub_82232B60(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8215285C;
	sub_8215BEC8(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232ac8
	ctx.lr = 0x82152868;
	sub_82232AC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822327a8
	ctx.lr = 0x8215288C;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231e98
	ctx.lr = 0x8215289C;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822327a8
	ctx.lr = 0x821528C0;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82231e98
	ctx.lr = 0x821528D0;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232530
	ctx.lr = 0x821528D8;
	sub_82232530(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821528EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821528EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821528F4"))) PPC_WEAK_FUNC(sub_821528F4);
PPC_FUNC_IMPL(__imp__sub_821528F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821528F8"))) PPC_WEAK_FUNC(sub_821528F8);
PPC_FUNC_IMPL(__imp__sub_821528F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215fa60
	ctx.lr = 0x8215291C;
	sub_8215FA60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215292c
	if (ctx.cr0.eq) goto loc_8215292C;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_8215292C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152940"))) PPC_WEAK_FUNC(sub_82152940);
PPC_FUNC_IMPL(__imp__sub_82152940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215fb70
	ctx.lr = 0x8215296C;
	sub_8215FB70(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152988"))) PPC_WEAK_FUNC(sub_82152988);
PPC_FUNC_IMPL(__imp__sub_82152988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x821529A8;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821529dc
	if (!ctx.cr6.eq) goto loc_821529DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215f500
	ctx.lr = 0x821529C0;
	sub_8215F500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821529dc
	if (!ctx.cr0.eq) goto loc_821529DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821529DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821529DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821529F0"))) PPC_WEAK_FUNC(sub_821529F0);
PPC_FUNC_IMPL(__imp__sub_821529F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821529F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
loc_82152A08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -468);
	// bl 0x8215fa60
	ctx.lr = 0x82152A14;
	sub_8215FA60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152a30
	if (ctx.cr0.eq) goto loc_82152A30;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82152a08
	if (ctx.cr6.lt) goto loc_82152A08;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1176, ctx.r11.u32);
loc_82152A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82152A38"))) PPC_WEAK_FUNC(sub_82152A38);
PPC_FUNC_IMPL(__imp__sub_82152A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x821570a8
	ctx.lr = 0x82152A58;
	sub_821570A8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8215f840
	ctx.lr = 0x82152A80;
	sub_8215F840(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152A9C"))) PPC_WEAK_FUNC(sub_82152A9C);
PPC_FUNC_IMPL(__imp__sub_82152A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152AA0"))) PPC_WEAK_FUNC(sub_82152AA0);
PPC_FUNC_IMPL(__imp__sub_82152AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x82152AC0;
	sub_82229A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152ad0
	if (!ctx.cr0.eq) goto loc_82152AD0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_82152AD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152AE4"))) PPC_WEAK_FUNC(sub_82152AE4);
PPC_FUNC_IMPL(__imp__sub_82152AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152AE8"))) PPC_WEAK_FUNC(sub_82152AE8);
PPC_FUNC_IMPL(__imp__sub_82152AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82152B00;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152b3c
	if (!ctx.cr0.eq) goto loc_82152B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152B20;
	sub_82151B28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// lwz r3,-1392(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1392);
	// bl 0x821498b0
	ctx.lr = 0x82152B34;
	sub_821498B0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_82152B3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152B50"))) PPC_WEAK_FUNC(sub_82152B50);
PPC_FUNC_IMPL(__imp__sub_82152B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8215bd60
	ctx.lr = 0x82152B68;
	sub_8215BD60(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152bcc
	if (!ctx.cr6.eq) goto loc_82152BCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152bcc
	if (!ctx.cr0.eq) goto loc_82152BCC;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82152bc4
	if (ctx.cr6.eq) goto loc_82152BC4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82152bb8
	if (ctx.cr6.eq) goto loc_82152BB8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x82152bcc
	if (!ctx.cr6.eq) goto loc_82152BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cd40
	ctx.lr = 0x82152BB4;
	sub_8214CD40(ctx, base);
	// b 0x82152bcc
	goto loc_82152BCC;
loc_82152BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152610
	ctx.lr = 0x82152BC0;
	sub_82152610(ctx, base);
	// b 0x82152bcc
	goto loc_82152BCC;
loc_82152BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151198
	ctx.lr = 0x82152BCC;
	sub_82151198(ctx, base);
loc_82152BCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152BE0"))) PPC_WEAK_FUNC(sub_82152BE0);
PPC_FUNC_IMPL(__imp__sub_82152BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82152BE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8215bd60
	ctx.lr = 0x82152BF8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,-1392(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1392);
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x82227aa0
	ctx.lr = 0x82152C14;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227e70
	ctx.lr = 0x82152C1C;
	sub_82227E70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82152C24;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152c74
	if (ctx.cr6.eq) goto loc_82152C74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154e60
	ctx.lr = 0x82152C38;
	sub_82154E60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152c5c
	if (ctx.cr0.eq) goto loc_82152C5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154eb8
	ctx.lr = 0x82152C48;
	sub_82154EB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149a90
	ctx.lr = 0x82152C58;
	sub_82149A90(ctx, base);
	// b 0x82152c74
	goto loc_82152C74;
loc_82152C5C:
	// lwz r3,1164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1164);
	// bl 0x8215a910
	ctx.lr = 0x82152C64;
	sub_8215A910(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149be8
	ctx.lr = 0x82152C74;
	sub_82149BE8(ctx, base);
loc_82152C74:
	// lwz r11,1184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152cd0
	if (ctx.cr6.eq) goto loc_82152CD0;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bge cr6,0x82152d94
	if (!ctx.cr6.lt) goto loc_82152D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149fb8
	ctx.lr = 0x82152C94;
	sub_82149FB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152C9C;
	sub_82151B28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1184, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82152CA8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152d94
	if (!ctx.cr6.eq) goto loc_82152D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154eb8
	ctx.lr = 0x82152CBC;
	sub_82154EB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149a90
	ctx.lr = 0x82152CCC;
	sub_82149A90(ctx, base);
	// b 0x82152d94
	goto loc_82152D94;
loc_82152CD0:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x82152cec
	if (!ctx.cr6.lt) goto loc_82152CEC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821499a0
	ctx.lr = 0x82152CE8;
	sub_821499A0(ctx, base);
	// b 0x82152d94
	goto loc_82152D94;
loc_82152CEC:
	// bl 0x8214a060
	ctx.lr = 0x82152CF0;
	sub_8214A060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152d94
	if (ctx.cr0.eq) goto loc_82152D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149910
	ctx.lr = 0x82152D04;
	sub_82149910(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149928
	ctx.lr = 0x82152D10;
	sub_82149928(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152D18;
	sub_82151B28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149bc8
	ctx.lr = 0x82152D28;
	sub_82149BC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149be8
	ctx.lr = 0x82152D38;
	sub_82149BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154eb8
	ctx.lr = 0x82152D40;
	sub_82154EB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149a90
	ctx.lr = 0x82152D50;
	sub_82149A90(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82152D54;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228080
	ctx.lr = 0x82152D5C;
	sub_82228080(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x82152D64;
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
	ctx.lr = 0x82152D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149ae8
	ctx.lr = 0x82152D8C;
	sub_82149AE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1184, ctx.r11.u32);
loc_82152D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82152D9C"))) PPC_WEAK_FUNC(sub_82152D9C);
PPC_FUNC_IMPL(__imp__sub_82152D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152DA0"))) PPC_WEAK_FUNC(sub_82152DA0);
PPC_FUNC_IMPL(__imp__sub_82152DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82152DA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152e04
	if (!ctx.cr6.eq) goto loc_82152E04;
	// bl 0x82227aa0
	ctx.lr = 0x82152DC4;
	sub_82227AA0(ctx, base);
	// lwz r11,4796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4796);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82152e04
	if (!ctx.cr6.gt) goto loc_82152E04;
	// bl 0x82227ce8
	ctx.lr = 0x82152DD8;
	sub_82227CE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227d18
	ctx.lr = 0x82152DE4;
	sub_82227D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// bl 0x8215a748
	ctx.lr = 0x82152DF4;
	sub_8215A748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822284e0
	ctx.lr = 0x82152DFC;
	sub_822284E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151b28
	ctx.lr = 0x82152E04;
	sub_82151B28(ctx, base);
loc_82152E04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82152E0C"))) PPC_WEAK_FUNC(sub_82152E0C);
PPC_FUNC_IMPL(__imp__sub_82152E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152E10"))) PPC_WEAK_FUNC(sub_82152E10);
PPC_FUNC_IMPL(__imp__sub_82152E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82152e40
	if (ctx.cr6.eq) goto loc_82152E40;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82152e58
	if (!ctx.cr6.eq) goto loc_82152E58;
	// bl 0x82152ae8
	ctx.lr = 0x82152E3C;
	sub_82152AE8(ctx, base);
	// b 0x82152e58
	goto loc_82152E58;
loc_82152E40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151a50
	ctx.lr = 0x82152E48;
	sub_82151A50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152e58
	if (ctx.cr0.eq) goto loc_82152E58;
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x8215a4d8
	ctx.lr = 0x82152E58;
	sub_8215A4D8(ctx, base);
loc_82152E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152E6C"))) PPC_WEAK_FUNC(sub_82152E6C);
PPC_FUNC_IMPL(__imp__sub_82152E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152E70"))) PPC_WEAK_FUNC(sub_82152E70);
PPC_FUNC_IMPL(__imp__sub_82152E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82152ed4
	if (ctx.cr6.eq) goto loc_82152ED4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82152ec0
	if (ctx.cr6.eq) goto loc_82152EC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82152eb4
	if (ctx.cr6.eq) goto loc_82152EB4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82152edc
	if (!ctx.cr6.eq) goto loc_82152EDC;
	// bl 0x82152aa0
	ctx.lr = 0x82152EB0;
	sub_82152AA0(ctx, base);
	// b 0x82152edc
	goto loc_82152EDC;
loc_82152EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152a38
	ctx.lr = 0x82152EBC;
	sub_82152A38(ctx, base);
	// b 0x82152edc
	goto loc_82152EDC;
loc_82152EC0:
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82154828
	ctx.lr = 0x82152EC8;
	sub_82154828(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// b 0x82152edc
	goto loc_82152EDC;
loc_82152ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821529f0
	ctx.lr = 0x82152EDC;
	sub_821529F0(ctx, base);
loc_82152EDC:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1392);
	// bl 0x82149848
	ctx.lr = 0x82152EE8;
	sub_82149848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152f40
	if (!ctx.cr0.eq) goto loc_82152F40;
	// bl 0x82227aa0
	ctx.lr = 0x82152EF4;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152fb8
	if (ctx.cr0.eq) goto loc_82152FB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// bl 0x82151b28
	ctx.lr = 0x82152F1C;
	sub_82151B28(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r10.u32);
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
loc_82152F2C:
	// lwz r10,1156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x82152fb8
	goto loc_82152FB8;
loc_82152F40:
	// bl 0x82227aa0
	ctx.lr = 0x82152F44;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82152f8c
	if (!ctx.cr0.eq) goto loc_82152F8C;
	// bl 0x82227aa0
	ctx.lr = 0x82152F60;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82152f8c
	if (ctx.cr0.eq) goto loc_82152F8C;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r9,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r9.u32);
	// stw r8,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r8.u32);
	// b 0x82152f2c
	goto loc_82152F2C;
loc_82152F8C:
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152fb8
	if (ctx.cr6.eq) goto loc_82152FB8;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82152fb8
	if (!ctx.cr6.eq) goto loc_82152FB8;
	// lwz r3,-1392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1392);
	// bl 0x821498d0
	ctx.lr = 0x82152FB0;
	sub_821498D0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
loc_82152FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152FD0"))) PPC_WEAK_FUNC(sub_82152FD0);
PPC_FUNC_IMPL(__imp__sub_82152FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82152FD8;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-420(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -420);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163a60
	ctx.lr = 0x82152FFC;
	sub_82163A60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82163a60
	ctx.lr = 0x8215300C;
	sub_82163A60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x820b5d00
	ctx.lr = 0x8215301C;
	sub_820B5D00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82101208
	ctx.lr = 0x82153024;
	sub_82101208(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stb r31,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r31.u8);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// bl 0x8215c050
	ctx.lr = 0x82153044;
	sub_8215C050(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82230de8
	ctx.lr = 0x82153050;
	sub_82230DE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82230b90
	ctx.lr = 0x82153058;
	sub_82230B90(ctx, base);
	// lha r11,24(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 24));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,13912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13912);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82230b90
	ctx.lr = 0x82153080;
	sub_82230B90(ctx, base);
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -420);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82163a78
	ctx.lr = 0x821530A8;
	sub_82163A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821012b0
	ctx.lr = 0x821530B0;
	sub_821012B0(ctx, base);
	// stfs f30,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stb r31,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r31.u8);
	// stfs f31,64(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215c060
	ctx.lr = 0x821530CC;
	sub_8215C060(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-468(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// bl 0x8215fd90
	ctx.lr = 0x821530EC;
	sub_8215FD90(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82153104"))) PPC_WEAK_FUNC(sub_82153104);
PPC_FUNC_IMPL(__imp__sub_82153104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153108"))) PPC_WEAK_FUNC(sub_82153108);
PPC_FUNC_IMPL(__imp__sub_82153108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821531bc
	if (ctx.cr6.eq) goto loc_821531BC;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x821531a0
	if (ctx.cr6.eq) goto loc_821531A0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x82153184
	if (ctx.cr6.eq) goto loc_82153184;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82153178
	if (ctx.cr6.eq) goto loc_82153178;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8215316c
	if (ctx.cr6.eq) goto loc_8215316C;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82153160
	if (ctx.cr6.eq) goto loc_82153160;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x821531c4
	if (!ctx.cr6.eq) goto loc_821531C4;
	// bl 0x82152988
	ctx.lr = 0x8215315C;
	sub_82152988(ctx, base);
	// b 0x821531c4
	goto loc_821531C4;
loc_82153160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152940
	ctx.lr = 0x82153168;
	sub_82152940(ctx, base);
	// b 0x821531c4
	goto loc_821531C4;
loc_8215316C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821528f8
	ctx.lr = 0x82153174;
	sub_821528F8(ctx, base);
	// b 0x821531c4
	goto loc_821531C4;
loc_82153178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152fd0
	ctx.lr = 0x82153180;
	sub_82152FD0(ctx, base);
	// b 0x821531c4
	goto loc_821531C4;
loc_82153184:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821531c4
	if (!ctx.cr6.eq) goto loc_821531C4;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x821531b4
	goto loc_821531B4;
loc_821531A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0c38
	ctx.lr = 0x821531B0;
	sub_820A0C38(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
loc_821531B4:
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x821531c4
	goto loc_821531C4;
loc_821531BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821527b0
	ctx.lr = 0x821531C4;
	sub_821527B0(ctx, base);
loc_821531C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821531D8"))) PPC_WEAK_FUNC(sub_821531D8);
PPC_FUNC_IMPL(__imp__sub_821531D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821531E0;
	sub_82248750(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149890
	ctx.lr = 0x821531F8;
	sub_82149890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153220
	if (ctx.cr0.eq) goto loc_82153220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151c48
	ctx.lr = 0x82153208;
	sub_82151C48(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82153220
	if (ctx.cr6.eq) goto loc_82153220;
	// stw r3,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151b28
	ctx.lr = 0x82153220;
	sub_82151B28(ctx, base);
loc_82153220:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,7400
	ctx.r10.s64 = ctx.r10.s64 + 7400;
	// addi r9,r9,4264
	ctx.r9.s64 = ctx.r9.s64 + 4264;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r10,r10,7512
	ctx.r10.s64 = ctx.r10.s64 + 7512;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addi r9,r9,7672
	ctx.r9.s64 = ctx.r9.s64 + 7672;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r8,7808
	ctx.r8.s64 = ctx.r8.s64 + 7808;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r3,-32235
	ctx.r3.s64 = -2112552960;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r10,r7,4352
	ctx.r10.s64 = ctx.r7.s64 + 4352;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r6,r6,7896
	ctx.r6.s64 = ctx.r6.s64 + 7896;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r9,r5,8192
	ctx.r9.s64 = ctx.r5.s64 + 8192;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r4,r4,8264
	ctx.r4.s64 = ctx.r4.s64 + 8264;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r8,r3,8336
	ctx.r8.s64 = ctx.r3.s64 + 8336;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r27,-32235
	ctx.r27.s64 = -2112552960;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lis r26,-32235
	ctx.r26.s64 = -2112552960;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r10,r30,8456
	ctx.r10.s64 = ctx.r30.s64 + 8456;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r6,r29,8672
	ctx.r6.s64 = ctx.r29.s64 + 8672;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r9,r28,4416
	ctx.r9.s64 = ctx.r28.s64 + 4416;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r4,r27,8760
	ctx.r4.s64 = ctx.r27.s64 + 8760;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// addi r8,r26,11792
	ctx.r8.s64 = ctx.r26.s64 + 11792;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lis r25,-32235
	ctx.r25.s64 = -2112552960;
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// lis r24,-32235
	ctx.r24.s64 = -2112552960;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r23,-32235
	ctx.r23.s64 = -2112552960;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lis r22,-32235
	ctx.r22.s64 = -2112552960;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r25,11888
	ctx.r6.s64 = ctx.r25.s64 + 11888;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// addi r9,r24,9096
	ctx.r9.s64 = ctx.r24.s64 + 9096;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r4,r23,9288
	ctx.r4.s64 = ctx.r23.s64 + 9288;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// addi r8,r22,9416
	ctx.r8.s64 = ctx.r22.s64 + 9416;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// addi r10,r10,9584
	ctx.r10.s64 = ctx.r10.s64 + 9584;
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ld r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// addi r9,r9,4504
	ctx.r9.s64 = ctx.r9.s64 + 4504;
	// ld r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rotlwi r18,r11,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ld r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lis r24,-32235
	ctx.r24.s64 = -2112552960;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// ld r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lis r22,-32235
	ctx.r22.s64 = -2112552960;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lis r3,-32235
	ctx.r3.s64 = -2112552960;
	// std r29,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r29.u64);
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// std r28,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r28.u64);
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// ld r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// lis r27,-32235
	ctx.r27.s64 = -2112552960;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r30,r30,9744
	ctx.r30.s64 = ctx.r30.s64 + 9744;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r26,-32235
	ctx.r26.s64 = -2112552960;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// ld r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r5,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r5.u64);
	// ld r23,192(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r21,160(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r14,120(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// ld r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// ld r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// ld r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// ld r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r28,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r28.u64);
	// std r29,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r29.u64);
	// ld r20,208(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r3,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// ld r19,200(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r4,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r4.u64);
	// ld r17,232(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r8,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r8.u64);
	// std r25,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r25.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// std r23,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r23.u64);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// std r21,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r21.u64);
	// std r20,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r20.u64);
	// addi r10,r10,4584
	ctx.r10.s64 = ctx.r10.s64 + 4584;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// std r19,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r19.u64);
	// ld r16,184(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r18,176(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r22,224(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r24,240(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r14,216(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lwz r31,1172(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r17,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r17.u64);
	// std r16,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r16.u64);
	// addi r8,r27,4656
	ctx.r8.s64 = ctx.r27.s64 + 4656;
	// std r15,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r15.u64);
	// addi r7,r26,10056
	ctx.r7.s64 = ctx.r26.s64 + 10056;
	// std r18,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r18.u64);
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// std r22,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r22.u64);
	// std r24,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r24.u64);
	// addi r24,r1,272
	ctx.r24.s64 = ctx.r1.s64 + 272;
	// std r14,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r14.u64);
	// std r6,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r6.u64);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// addi r6,r6,4592
	ctx.r6.s64 = ctx.r6.s64 + 4592;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r5,r5,4744
	ctx.r5.s64 = ctx.r5.s64 + 4744;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r26,r26,10560
	ctx.r26.s64 = ctx.r26.s64 + 10560;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r25,10632
	ctx.r25.s64 = ctx.r25.s64 + 10632;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r4,4808
	ctx.r4.s64 = ctx.r4.s64 + 4808;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r3,10160
	ctx.r3.s64 = ctx.r3.s64 + 10160;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,4920
	ctx.r30.s64 = ctx.r30.s64 + 4920;
	// lwz r27,248(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// addi r29,r29,4984
	ctx.r29.s64 = ctx.r29.s64 + 4984;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r28,r28,12240
	ctx.r28.s64 = ctx.r28.s64 + 12240;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// addi r27,r27,10488
	ctx.r27.s64 = ctx.r27.s64 + 10488;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// stw r4,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r4.u32);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// ld r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r9,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r9.u64);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r10,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r10.u64);
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r8,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r8.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r10.u64);
	// std r9,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r9.u64);
	// std r8,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r8.u64);
	// ld r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r7.u64);
	// std r6,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r6.u64);
	// std r5,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r5.u64);
	// std r4,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r4.u64);
	// std r3,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r3.u64);
	// std r30,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r30.u64);
	// std r29,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r29.u64);
	// std r28,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r28.u64);
	// std r27,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r27.u64);
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwz r9,724(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82153624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215362C"))) PPC_WEAK_FUNC(sub_8215362C);
PPC_FUNC_IMPL(__imp__sub_8215362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153630"))) PPC_WEAK_FUNC(sub_82153630);
PPC_FUNC_IMPL(__imp__sub_82153630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153660
	if (ctx.cr6.eq) goto loc_82153660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82153660:
	// bl 0x8215bd60
	ctx.lr = 0x82153664;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153690
	if (ctx.cr6.eq) goto loc_82153690;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215368C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82153694
	goto loc_82153694;
loc_82153690:
	// bl 0x821531d8
	ctx.lr = 0x82153694;
	sub_821531D8(ctx, base);
loc_82153694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821536A8"))) PPC_WEAK_FUNC(sub_821536A8);
PPC_FUNC_IMPL(__imp__sub_821536A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821536B0;
	sub_82248788(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,-1392(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821536d0
	if (ctx.cr0.eq) goto loc_821536D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214a780
	ctx.lr = 0x821536D0;
	sub_8214A780(ctx, base);
loc_821536D0:
	// bl 0x82227aa0
	ctx.lr = 0x821536D4;
	sub_82227AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82228b00
	ctx.lr = 0x821536E0;
	sub_82228B00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x821536E8;
	sub_82228B00(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821536EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154d78
	ctx.lr = 0x821536F4;
	sub_82154D78(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82153710
	if (ctx.cr6.eq) goto loc_82153710;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149c08
	ctx.lr = 0x82153710;
	sub_82149C08(ctx, base);
loc_82153710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227f98
	ctx.lr = 0x8215371C;
	sub_82227F98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153758
	if (ctx.cr0.eq) goto loc_82153758;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228928
	ctx.lr = 0x82153734;
	sub_82228928(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228888
	ctx.lr = 0x82153744;
	sub_82228888(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82149b00
	ctx.lr = 0x82153758;
	sub_82149B00(ctx, base);
loc_82153758:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x821536ec
	if (ctx.cr6.lt) goto loc_821536EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82152be0
	ctx.lr = 0x8215376C;
	sub_82152BE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82152da0
	ctx.lr = 0x82153774;
	sub_82152DA0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82153778;
	sub_8215BD60(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821537a4
	if (!ctx.cr6.eq) goto loc_821537A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8214c140
	ctx.lr = 0x8215378C;
	sub_8214C140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821537a4
	if (!ctx.cr0.eq) goto loc_821537A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821531d8
	ctx.lr = 0x8215379C;
	sub_821531D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821537A4;
	sub_8209EDA0(ctx, base);
loc_821537A4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821537AC"))) PPC_WEAK_FUNC(sub_821537AC);
PPC_FUNC_IMPL(__imp__sub_821537AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821537B0"))) PPC_WEAK_FUNC(sub_821537B0);
PPC_FUNC_IMPL(__imp__sub_821537B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821537B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x821537D4;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-26096
	ctx.r11.s64 = ctx.r11.s64 + -26096;
	// addi r10,r10,-26232
	ctx.r10.s64 = ctx.r10.s64 + -26232;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// addi r9,r9,-26244
	ctx.r9.s64 = ctx.r9.s64 + -26244;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r29,r31,1168
	ctx.r29.s64 = ctx.r31.s64 + 1168;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821585b8
	ctx.lr = 0x82153810;
	sub_821585B8(ctx, base);
	// stw r30,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r30.u32);
	// bl 0x8222e080
	ctx.lr = 0x82153818;
	sub_8222E080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82153838
	if (!ctx.cr0.eq) goto loc_82153838;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82153824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cda8
	ctx.lr = 0x8215382C;
	sub_8214CDA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// b 0x82153864
	goto loc_82153864;
loc_82153838:
	// bl 0x82164c50
	ctx.lr = 0x8215383C;
	sub_82164C50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215384c
	if (!ctx.cr0.eq) goto loc_8215384C;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82153824
	goto loc_82153824;
loc_8215384C:
	// stw r28,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82158058
	ctx.lr = 0x82153858;
	sub_82158058(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x82153864;
	sub_8214B948(ctx, base);
loc_82153864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82153870"))) PPC_WEAK_FUNC(sub_82153870);
PPC_FUNC_IMPL(__imp__sub_82153870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-26096
	ctx.r11.s64 = ctx.r11.s64 + -26096;
	// addi r10,r10,-26232
	ctx.r10.s64 = ctx.r10.s64 + -26232;
	// addi r9,r9,-26244
	ctx.r9.s64 = ctx.r9.s64 + -26244;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821538AC;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x821538B0;
	sub_8215CD28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1168
	ctx.r3.s64 = ctx.r31.s64 + 1168;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82158040
	ctx.lr = 0x821538C0;
	sub_82158040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x821538C8;
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

__attribute__((alias("__imp__sub_821538DC"))) PPC_WEAK_FUNC(sub_821538DC);
PPC_FUNC_IMPL(__imp__sub_821538DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821538E0"))) PPC_WEAK_FUNC(sub_821538E0);
PPC_FUNC_IMPL(__imp__sub_821538E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821538F8;
	sub_82163728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215391c
	if (ctx.cr0.eq) goto loc_8215391C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c0a8
	ctx.lr = 0x8215391C;
	sub_8214C0A8(ctx, base);
loc_8215391C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153930"))) PPC_WEAK_FUNC(sub_82153930);
PPC_FUNC_IMPL(__imp__sub_82153930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82153958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153978
	if (ctx.cr0.eq) goto loc_82153978;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153970
	if (ctx.cr6.eq) goto loc_82153970;
	// bl 0x82154878
	ctx.lr = 0x82153970;
	sub_82154878(ctx, base);
loc_82153970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82153978;
	sub_8214D630(ctx, base);
loc_82153978:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215398C"))) PPC_WEAK_FUNC(sub_8215398C);
PPC_FUNC_IMPL(__imp__sub_8215398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153990"))) PPC_WEAK_FUNC(sub_82153990);
PPC_FUNC_IMPL(__imp__sub_82153990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x821539a0
	sub_821539A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82153998"))) PPC_WEAK_FUNC(sub_82153998);
PPC_FUNC_IMPL(__imp__sub_82153998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821539a0
	sub_821539A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821539A0"))) PPC_WEAK_FUNC(sub_821539A0);
PPC_FUNC_IMPL(__imp__sub_821539A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82153870
	ctx.lr = 0x821539C0;
	sub_82153870(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821539d4
	if (ctx.cr0.eq) goto loc_821539D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821539D4;
	sub_82183E40(ctx, base);
loc_821539D4:
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

__attribute__((alias("__imp__sub_821539F0"))) PPC_WEAK_FUNC(sub_821539F0);
PPC_FUNC_IMPL(__imp__sub_821539F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82153A04"))) PPC_WEAK_FUNC(sub_82153A04);
PPC_FUNC_IMPL(__imp__sub_82153A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153A08"))) PPC_WEAK_FUNC(sub_82153A08);
PPC_FUNC_IMPL(__imp__sub_82153A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8214c558
	sub_8214C558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82153A20"))) PPC_WEAK_FUNC(sub_82153A20);
PPC_FUNC_IMPL(__imp__sub_82153A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153A24"))) PPC_WEAK_FUNC(sub_82153A24);
PPC_FUNC_IMPL(__imp__sub_82153A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153A28"))) PPC_WEAK_FUNC(sub_82153A28);
PPC_FUNC_IMPL(__imp__sub_82153A28) {
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
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82153a60
	if (ctx.cr6.eq) goto loc_82153A60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82153a6c
	if (!ctx.cr6.eq) goto loc_82153A6C;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8214b948
	ctx.lr = 0x82153A5C;
	sub_8214B948(ctx, base);
	// b 0x82153a6c
	goto loc_82153A6C;
loc_82153A60:
	// bl 0x8214d7b0
	ctx.lr = 0x82153A64;
	sub_8214D7B0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82153A68;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x82153A6C;
	sub_8215CD28(ctx, base);
loc_82153A6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153A7C"))) PPC_WEAK_FUNC(sub_82153A7C);
PPC_FUNC_IMPL(__imp__sub_82153A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153A80"))) PPC_WEAK_FUNC(sub_82153A80);
PPC_FUNC_IMPL(__imp__sub_82153A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214aea0
	ctx.lr = 0x82153AA0;
	sub_8214AEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153ac4
	if (ctx.cr0.eq) goto loc_82153AC4;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153abc
	if (ctx.cr6.eq) goto loc_82153ABC;
	// li r4,16011
	ctx.r4.s64 = 16011;
	// bl 0x82154c38
	ctx.lr = 0x82153ABC;
	sub_82154C38(ctx, base);
loc_82153ABC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
loc_82153AC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153AD8"))) PPC_WEAK_FUNC(sub_82153AD8);
PPC_FUNC_IMPL(__imp__sub_82153AD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82153b78
	if (ctx.cr6.eq) goto loc_82153B78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82153b84
	if (!ctx.cr6.eq) goto loc_82153B84;
	// bl 0x8215bd60
	ctx.lr = 0x82153B14;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x82153B18;
	sub_8215CD28(ctx, base);
	// lwz r11,-1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82153b70
	if (!ctx.cr6.eq) goto loc_82153B70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228c88
	ctx.lr = 0x82153B30;
	sub_82228C88(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82223140
	ctx.lr = 0x82153B48;
	sub_82223140(ctx, base);
	// addi r31,r30,1168
	ctx.r31.s64 = ctx.r30.s64 + 1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158058
	ctx.lr = 0x82153B54;
	sub_82158058(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821580d8
	ctx.lr = 0x82153B60;
	sub_821580D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x82153B68;
	sub_8209EDA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82153b84
	goto loc_82153B84;
loc_82153B70:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82153b84
	goto loc_82153B84;
loc_82153B78:
	// bl 0x8215bd60
	ctx.lr = 0x82153B7C;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x82153B80;
	sub_8215CD28(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82153B84:
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

__attribute__((alias("__imp__sub_82153B9C"))) PPC_WEAK_FUNC(sub_82153B9C);
PPC_FUNC_IMPL(__imp__sub_82153B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153BA0"))) PPC_WEAK_FUNC(sub_82153BA0);
PPC_FUNC_IMPL(__imp__sub_82153BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214aef8
	ctx.lr = 0x82153BC0;
	sub_8214AEF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153bd0
	if (ctx.cr0.eq) goto loc_82153BD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
loc_82153BD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153BE4"))) PPC_WEAK_FUNC(sub_82153BE4);
PPC_FUNC_IMPL(__imp__sub_82153BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153BE8"))) PPC_WEAK_FUNC(sub_82153BE8);
PPC_FUNC_IMPL(__imp__sub_82153BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82153BF0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1168
	ctx.r31.s64 = ctx.r3.s64 + 1168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82158600
	ctx.lr = 0x82153C08;
	sub_82158600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158660
	ctx.lr = 0x82153C10;
	sub_82158660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82153d7c
	if (ctx.cr0.eq) goto loc_82153D7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821586b8
	ctx.lr = 0x82153C20;
	sub_821586B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82153c30
	if (!ctx.cr0.eq) goto loc_82153C30;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82153d80
	goto loc_82153D80;
loc_82153C30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa98
	ctx.lr = 0x82153C38;
	sub_8215AA98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aad8
	ctx.lr = 0x82153C40;
	sub_8215AAD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158600
	ctx.lr = 0x82153C4C;
	sub_82158600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158180
	ctx.lr = 0x82153C54;
	sub_82158180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82153C5C;
	sub_8215BD60(ctx, base);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821581e8
	ctx.lr = 0x82153C68;
	sub_821581E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82153C70;
	sub_8215BD60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82156f00
	ctx.lr = 0x82153C78;
	sub_82156F00(ctx, base);
	// lwz r11,1160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x821584b0
	ctx.lr = 0x82153C88;
	sub_821584B0(ctx, base);
	// lwz r10,1160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,1160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82154110
	ctx.lr = 0x82153CA4;
	sub_82154110(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82153CA8;
	sub_82227AA0(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82153cd8
	if (ctx.cr0.eq) goto loc_82153CD8;
	// bl 0x82227aa0
	ctx.lr = 0x82153CB8;
	sub_82227AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821581e8
	ctx.lr = 0x82153CC8;
	sub_821581E8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82153cd8
	if (ctx.cr6.eq) goto loc_82153CD8;
	// lwz r3,-736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -736);
	// bl 0x82227848
	ctx.lr = 0x82153CD8;
	sub_82227848(ctx, base);
loc_82153CD8:
	// bl 0x82227aa0
	ctx.lr = 0x82153CDC;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82153cfc
	if (ctx.cr0.eq) goto loc_82153CFC;
	// bl 0x82227aa0
	ctx.lr = 0x82153CE8;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82153d04
	goto loc_82153D04;
loc_82153CFC:
	// lwz r3,-736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -736);
	// bl 0x82227a10
	ctx.lr = 0x82153D04;
	sub_82227A10(ctx, base);
loc_82153D04:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153d1c
	if (ctx.cr6.eq) goto loc_82153D1C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82153d30
	if (!ctx.cr6.eq) goto loc_82153D30;
loc_82153D1C:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82153D20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215aa88
	ctx.lr = 0x82153D28;
	sub_8215AA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82153d80
	goto loc_82153D80;
loc_82153D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158250
	ctx.lr = 0x82153D38;
	sub_82158250(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82153d48
	if (ctx.cr6.eq) goto loc_82153D48;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82153d20
	goto loc_82153D20;
loc_82153D48:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,15472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x821582b8
	ctx.lr = 0x82153D58;
	sub_821582B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170860
	ctx.lr = 0x82153D64;
	sub_82170860(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82153d74
	if (ctx.cr6.eq) goto loc_82153D74;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82153d20
	goto loc_82153D20;
loc_82153D74:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82153d20
	goto loc_82153D20;
loc_82153D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82153D80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82153D88"))) PPC_WEAK_FUNC(sub_82153D88);
PPC_FUNC_IMPL(__imp__sub_82153D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r11.u32);
	// beq cr6,0x82153dcc
	if (ctx.cr6.eq) goto loc_82153DCC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x82153DB8;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82153dcc
	if (ctx.cr6.eq) goto loc_82153DCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x82153DC8;
	sub_8214D7B0(ctx, base);
	// b 0x82153de4
	goto loc_82153DE4;
loc_82153DCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30203
	ctx.r4.s64 = 30203;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x82153DDC;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_82153DE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153DF8"))) PPC_WEAK_FUNC(sub_82153DF8);
PPC_FUNC_IMPL(__imp__sub_82153DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b948
	ctx.lr = 0x82153E1C;
	sub_8214B948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153E30;
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

__attribute__((alias("__imp__sub_82153E44"))) PPC_WEAK_FUNC(sub_82153E44);
PPC_FUNC_IMPL(__imp__sub_82153E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153E48"))) PPC_WEAK_FUNC(sub_82153E48);
PPC_FUNC_IMPL(__imp__sub_82153E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82153f94
	if (ctx.cr6.eq) goto loc_82153F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82153e98
	if (ctx.cr6.eq) goto loc_82153E98;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82154018
	if (!ctx.cr6.eq) goto loc_82154018;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82154018
	if (!ctx.cr6.eq) goto loc_82154018;
	// bl 0x82153df8
	ctx.lr = 0x82153E94;
	sub_82153DF8(ctx, base);
	// b 0x82154018
	goto loc_82154018;
loc_82153E98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153be8
	ctx.lr = 0x82153EA0;
	sub_82153BE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82153f3c
	if (ctx.cr6.eq) goto loc_82153F3C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82153f10
	if (ctx.cr6.eq) goto loc_82153F10;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82153ef8
	if (ctx.cr6.eq) goto loc_82153EF8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82153ee0
	if (ctx.cr6.eq) goto loc_82153EE0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82154018
	if (!ctx.cr6.eq) goto loc_82154018;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153ed8
	if (ctx.cr6.eq) goto loc_82153ED8;
	// bl 0x82154aa8
	ctx.lr = 0x82153ED8;
	sub_82154AA8(ctx, base);
loc_82153ED8:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82153f24
	goto loc_82153F24;
loc_82153EE0:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153ef0
	if (ctx.cr6.eq) goto loc_82153EF0;
	// bl 0x82154aa8
	ctx.lr = 0x82153EF0;
	sub_82154AA8(ctx, base);
loc_82153EF0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82153f24
	goto loc_82153F24;
loc_82153EF8:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153f08
	if (ctx.cr6.eq) goto loc_82153F08;
	// bl 0x82154aa8
	ctx.lr = 0x82153F08;
	sub_82154AA8(ctx, base);
loc_82153F08:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82153f24
	goto loc_82153F24;
loc_82153F10:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153f20
	if (ctx.cr6.eq) goto loc_82153F20;
	// bl 0x82154aa8
	ctx.lr = 0x82153F20;
	sub_82154AA8(ctx, base);
loc_82153F20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82153F24:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// bl 0x8214cda8
	ctx.lr = 0x82153F38;
	sub_8214CDA8(ctx, base);
	// b 0x82154018
	goto loc_82154018;
loc_82153F3C:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153f4c
	if (ctx.cr6.eq) goto loc_82153F4C;
	// bl 0x82154aa8
	ctx.lr = 0x82153F4C;
	sub_82154AA8(ctx, base);
loc_82153F4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82153F58;
	sub_8215BD60(ctx, base);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c790
	ctx.lr = 0x82153F64;
	sub_8214C790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82154018
	if (ctx.cr0.eq) goto loc_82154018;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214af08
	ctx.lr = 0x82153F7C;
	sub_8214AF08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82154018
	if (!ctx.cr0.eq) goto loc_82154018;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c840
	ctx.lr = 0x82153F90;
	sub_8214C840(ctx, base);
	// b 0x82154018
	goto loc_82154018;
loc_82153F94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153ad8
	ctx.lr = 0x82153F9C;
	sub_82153AD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82154010
	if (ctx.cr6.eq) goto loc_82154010;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82153fe8
	if (ctx.cr6.eq) goto loc_82153FE8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82154018
	if (!ctx.cr6.eq) goto loc_82154018;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153fc4
	if (ctx.cr6.eq) goto loc_82153FC4;
	// bl 0x82154aa8
	ctx.lr = 0x82153FC4;
	sub_82154AA8(ctx, base);
loc_82153FC4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// li r4,30203
	ctx.r4.s64 = 30203;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x82153FDC;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// b 0x82154018
	goto loc_82154018;
loc_82153FE8:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153ff8
	if (ctx.cr6.eq) goto loc_82153FF8;
	// bl 0x82154aa8
	ctx.lr = 0x82153FF8;
	sub_82154AA8(ctx, base);
loc_82153FF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153d88
	ctx.lr = 0x8215400C;
	sub_82153D88(ctx, base);
	// b 0x82154018
	goto loc_82154018;
loc_82154010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153ba0
	ctx.lr = 0x82154018;
	sub_82153BA0(ctx, base);
loc_82154018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154030"))) PPC_WEAK_FUNC(sub_82154030);
PPC_FUNC_IMPL(__imp__sub_82154030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82154054
	if (ctx.cr6.eq) goto loc_82154054;
	// bl 0x82154aa8
	ctx.lr = 0x82154054;
	sub_82154AA8(ctx, base);
loc_82154054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x8215407C;
	sub_8214B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153a80
	ctx.lr = 0x82154084;
	sub_82153A80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154098"))) PPC_WEAK_FUNC(sub_82154098);
PPC_FUNC_IMPL(__imp__sub_82154098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,135
	ctx.r11.s64 = 135;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x822331c8
	ctx.lr = 0x821540D8;
	sub_822331C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821540E4:
	// li r11,512
	ctx.r11.s64 = 512;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821540e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821540E4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215410C"))) PPC_WEAK_FUNC(sub_8215410C);
PPC_FUNC_IMPL(__imp__sub_8215410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154110"))) PPC_WEAK_FUNC(sub_82154110);
PPC_FUNC_IMPL(__imp__sub_82154110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82154140
	if (ctx.cr6.eq) goto loc_82154140;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82248a40
	ctx.lr = 0x82154140;
	sub_82248A40(ctx, base);
loc_82154140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154098
	ctx.lr = 0x82154148;
	sub_82154098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821570c8
	ctx.lr = 0x82154150;
	sub_821570C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821570a8
	ctx.lr = 0x8215415C;
	sub_821570A8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82154c88
	ctx.lr = 0x82154164;
	sub_82154C88(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x82154c88
	ctx.lr = 0x8215416C;
	sub_82154C88(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154188"))) PPC_WEAK_FUNC(sub_82154188);
PPC_FUNC_IMPL(__imp__sub_82154188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82154190;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82163ee8
	ctx.lr = 0x8215419C;
	sub_82163EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822331c8
	ctx.lr = 0x821541AC;
	sub_822331C8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r31,31
	ctx.r9.s64 = ctx.r31.s64 + 31;
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// stb r29,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r29.u8);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r29,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r29.u8);
	// stb r29,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r29.u8);
	// stb r29,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r29.u8);
loc_821541E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821541e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821541E4;
	// lbz r11,2333(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2333);
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// lbz r11,2341(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2341);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// lbz r11,2342(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2342);
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// lbz r11,2343(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2343);
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// lbz r11,2344(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2344);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lbz r11,2345(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2345);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// lbz r11,2346(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2346);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// lbz r11,2349(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2349);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x8215bd08
	ctx.lr = 0x82154238;
	sub_8215BD08(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r31,54
	ctx.r9.s64 = ctx.r31.s64 + 54;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215424C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82154264
	if (!ctx.cr6.eq) goto loc_82154264;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lbz r10,2350(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2350);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x82154268
	goto loc_82154268;
loc_82154264:
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
loc_82154268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8215424c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215424C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r11.u8);
	// lbz r11,2363(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2363);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stb r11,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r11.u8);
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// lbz r11,2368(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2368);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// lbz r11,2369(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2369);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// lbz r11,2370(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2370);
	// stb r11,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r11.u8);
	// lbz r11,2371(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2371);
	// stb r11,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821542B0"))) PPC_WEAK_FUNC(sub_821542B0);
PPC_FUNC_IMPL(__imp__sub_821542B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821542B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x821542C4;
	sub_82227AA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821542D4:
	// li r11,512
	ctx.r11.s64 = 512;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821542d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821542D4;
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x8215bd08
	ctx.lr = 0x821542F0;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r27.u32);
	// bl 0x82228080
	ctx.lr = 0x82154310;
	sub_82228080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82154368
	if (!ctx.cr6.gt) goto loc_82154368;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
loc_82154330:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82154354
	if (ctx.cr6.eq) goto loc_82154354;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82228080
	ctx.lr = 0x82154350;
	sub_82228080(ctx, base);
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
loc_82154354:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82154330
	if (ctx.cr6.lt) goto loc_82154330;
loc_82154368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82154370"))) PPC_WEAK_FUNC(sub_82154370);
PPC_FUNC_IMPL(__imp__sub_82154370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82154378;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,1116
	ctx.r3.s64 = ctx.r3.s64 + 1116;
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82239f58
	ctx.lr = 0x82154394;
	sub_82239F58(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82154398;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821543A0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821543AC;
	sub_821837D0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x821543B4;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821543c4
	if (ctx.cr0.eq) goto loc_821543C4;
	// bl 0x82156fb0
	ctx.lr = 0x821543C0;
	sub_82156FB0(ctx, base);
	// b 0x821543c8
	goto loc_821543C8;
loc_821543C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821543C8:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154098
	ctx.lr = 0x821543D4;
	sub_82154098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821543DC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821543E8"))) PPC_WEAK_FUNC(sub_821543E8);
PPC_FUNC_IMPL(__imp__sub_821543E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,112(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8215442c
	if (ctx.cr6.eq) goto loc_8215442C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82154420;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215442C;
	sub_82183E40(ctx, base);
loc_8215442C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215444C"))) PPC_WEAK_FUNC(sub_8215444C);
PPC_FUNC_IMPL(__imp__sub_8215444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154450"))) PPC_WEAK_FUNC(sub_82154450);
PPC_FUNC_IMPL(__imp__sub_82154450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82154458;
	sub_82248784(ctx, base);
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
	// ERROR 822487D4
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
	sub_82248768(ctx, base);
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
	ctx.r4.s32 = ctx.r30.s32 / ctx.r11.s32;
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
	// ERROR 822487B8
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

__attribute__((alias("__imp__sub_82154874"))) PPC_WEAK_FUNC(sub_82154874);
PPC_FUNC_IMPL(__imp__sub_82154874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154904"))) PPC_WEAK_FUNC(sub_82154904);
PPC_FUNC_IMPL(__imp__sub_82154904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_8215495C"))) PPC_WEAK_FUNC(sub_8215495C);
PPC_FUNC_IMPL(__imp__sub_8215495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154960"))) PPC_WEAK_FUNC(sub_82154960);
PPC_FUNC_IMPL(__imp__sub_82154960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82154968;
	sub_8224878C(ctx, base);
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
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82154A04"))) PPC_WEAK_FUNC(sub_82154A04);
PPC_FUNC_IMPL(__imp__sub_82154A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154AF4"))) PPC_WEAK_FUNC(sub_82154AF4);
PPC_FUNC_IMPL(__imp__sub_82154AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154AF8"))) PPC_WEAK_FUNC(sub_82154AF8);
PPC_FUNC_IMPL(__imp__sub_82154AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82154B00;
	sub_82248788(ctx, base);
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
	// ERROR 822487D8
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

__attribute__((alias("__imp__sub_82154CD4"))) PPC_WEAK_FUNC(sub_82154CD4);
PPC_FUNC_IMPL(__imp__sub_82154CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154DCC"))) PPC_WEAK_FUNC(sub_82154DCC);
PPC_FUNC_IMPL(__imp__sub_82154DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154E24"))) PPC_WEAK_FUNC(sub_82154E24);
PPC_FUNC_IMPL(__imp__sub_82154E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154EB4"))) PPC_WEAK_FUNC(sub_82154EB4);
PPC_FUNC_IMPL(__imp__sub_82154EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154F04"))) PPC_WEAK_FUNC(sub_82154F04);
PPC_FUNC_IMPL(__imp__sub_82154F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154F5C"))) PPC_WEAK_FUNC(sub_82154F5C);
PPC_FUNC_IMPL(__imp__sub_82154F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82154FAC"))) PPC_WEAK_FUNC(sub_82154FAC);
PPC_FUNC_IMPL(__imp__sub_82154FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155084"))) PPC_WEAK_FUNC(sub_82155084);
PPC_FUNC_IMPL(__imp__sub_82155084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155094"))) PPC_WEAK_FUNC(sub_82155094);
PPC_FUNC_IMPL(__imp__sub_82155094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_8215517C"))) PPC_WEAK_FUNC(sub_8215517C);
PPC_FUNC_IMPL(__imp__sub_8215517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_821552D4"))) PPC_WEAK_FUNC(sub_821552D4);
PPC_FUNC_IMPL(__imp__sub_821552D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155314"))) PPC_WEAK_FUNC(sub_82155314);
PPC_FUNC_IMPL(__imp__sub_82155314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_821553AC"))) PPC_WEAK_FUNC(sub_821553AC);
PPC_FUNC_IMPL(__imp__sub_821553AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155428"))) PPC_WEAK_FUNC(sub_82155428);
PPC_FUNC_IMPL(__imp__sub_82155428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215545c
	if (ctx.cr6.lt) goto loc_8215545C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82155454
	if (!ctx.cr6.gt) goto loc_82155454;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82155454
	if (ctx.cr6.eq) goto loc_82155454;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8215545c
	if (!ctx.cr6.gt) goto loc_8215545C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8215545c
	if (ctx.cr6.gt) goto loc_8215545C;
loc_82155454:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215545C:
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

__attribute__((alias("__imp__sub_821554FC"))) PPC_WEAK_FUNC(sub_821554FC);
PPC_FUNC_IMPL(__imp__sub_821554FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155574"))) PPC_WEAK_FUNC(sub_82155574);
PPC_FUNC_IMPL(__imp__sub_82155574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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
	sub_8224878C(ctx, base);
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
	// ERROR 822487DC
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
	sub_82248784(ctx, base);
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
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821557D4"))) PPC_WEAK_FUNC(sub_821557D4);
PPC_FUNC_IMPL(__imp__sub_821557D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821557D8"))) PPC_WEAK_FUNC(sub_821557D8);
PPC_FUNC_IMPL(__imp__sub_821557D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821557E0;
	sub_8224878C(ctx, base);
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
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82155854"))) PPC_WEAK_FUNC(sub_82155854);
PPC_FUNC_IMPL(__imp__sub_82155854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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
	sub_8224878C(ctx, base);
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
	// ERROR 822487DC
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

__attribute__((alias("__imp__sub_82155A54"))) PPC_WEAK_FUNC(sub_82155A54);
PPC_FUNC_IMPL(__imp__sub_82155A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155AAC"))) PPC_WEAK_FUNC(sub_82155AAC);
PPC_FUNC_IMPL(__imp__sub_82155AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821556f0
	ctx.lr = 0x82155B04;
	sub_821556F0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821557d8
	ctx.lr = 0x82155B28;
	sub_821557D8(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155460
	ctx.lr = 0x82155B34;
	sub_82155460(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155858
	ctx.lr = 0x82155B7C;
	sub_82155858(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821558c0
	ctx.lr = 0x82155B88;
	sub_821558C0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155a58
	ctx.lr = 0x82155B94;
	sub_82155A58(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821554b0
	ctx.lr = 0x82155BA0;
	sub_821554B0(ctx, base);
	// b 0x82155bb8
	goto loc_82155BB8;
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

__attribute__((alias("__imp__sub_82155BCC"))) PPC_WEAK_FUNC(sub_82155BCC);
PPC_FUNC_IMPL(__imp__sub_82155BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82155BD0"))) PPC_WEAK_FUNC(sub_82155BD0);
PPC_FUNC_IMPL(__imp__sub_82155BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155BD8;
	sub_82248788(ctx, base);
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
	ctx.r11.s64 = ctx.r11.s64 * 5;
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
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82155C84"))) PPC_WEAK_FUNC(sub_82155C84);
PPC_FUNC_IMPL(__imp__sub_82155C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82155C88"))) PPC_WEAK_FUNC(sub_82155C88);
PPC_FUNC_IMPL(__imp__sub_82155C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155C90;
	sub_82248788(ctx, base);
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
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82155D24"))) PPC_WEAK_FUNC(sub_82155D24);
PPC_FUNC_IMPL(__imp__sub_82155D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82155D28"))) PPC_WEAK_FUNC(sub_82155D28);
PPC_FUNC_IMPL(__imp__sub_82155D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82155D30;
	sub_82248788(ctx, base);
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
	// ERROR 822487D8
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

__attribute__((alias("__imp__sub_82155DE4"))) PPC_WEAK_FUNC(sub_82155DE4);
PPC_FUNC_IMPL(__imp__sub_82155DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155E2C"))) PPC_WEAK_FUNC(sub_82155E2C);
PPC_FUNC_IMPL(__imp__sub_82155E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155E8C"))) PPC_WEAK_FUNC(sub_82155E8C);
PPC_FUNC_IMPL(__imp__sub_82155E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155EE4"))) PPC_WEAK_FUNC(sub_82155EE4);
PPC_FUNC_IMPL(__imp__sub_82155EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82155FC4"))) PPC_WEAK_FUNC(sub_82155FC4);
PPC_FUNC_IMPL(__imp__sub_82155FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_82156114"))) PPC_WEAK_FUNC(sub_82156114);
PPC_FUNC_IMPL(__imp__sub_82156114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

__attribute__((alias("__imp__sub_8215615C"))) PPC_WEAK_FUNC(sub_8215615C);
PPC_FUNC_IMPL(__imp__sub_8215615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
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

